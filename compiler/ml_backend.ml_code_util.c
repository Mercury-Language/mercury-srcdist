/*
** Automatically generated from `ml_code_util.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "ml_backend.ml_code_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 32 "ml_backend.ml_code_util.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "ml_backend.ml_code_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "ml_backend.ml_code_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_code_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.ml_code_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "ml_backend.ml_code_util.c"
#line 53 "ml_backend.ml_code_util.c"
#include "ml_backend.ml_code_util.mh"

#line 56 "ml_backend.ml_code_util.c"
#line 57 "ml_backend.ml_code_util.c"
#ifndef ML_BACKEND__ML_CODE_UTIL_DECL_GUARD
#define ML_BACKEND__ML_CODE_UTIL_DECL_GUARD

#line 61 "ml_backend.ml_code_util.c"
#line 62 "ml_backend.ml_code_util.c"

#endif
#line 65 "ml_backend.ml_code_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0;
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0, 3,9,10,12,8)
MR_decl_label1(ml_backend__ml_code_util__lookup_ground_rval_3_0, 3)
MR_decl_label8(ml_backend__ml_code_util__ml_append_return_statement_6_0, 48,7,9,3,50,14,17,20)
MR_decl_label10(ml_backend__ml_code_util__ml_combine_conj_8_0, 4,5,6,3,9,10,12,13,14,15)
MR_decl_label10(ml_backend__ml_code_util__ml_combine_conj_8_0, 16,17,19,8,20,21,23,24,26,28)
MR_decl_label1(ml_backend__ml_code_util__ml_combine_conj_8_0, 30)
MR_decl_label4(ml_backend__ml_code_util__ml_cond_var_lval_3_0, 2,3,5,6)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_arg_decls_9_0, 2,10,15,14,11,21,18,23,25,24)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_arg_decls_9_0, 30,33,34,6)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0, 4,2,10,9,14,15,17,18,20,21)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0, 23,7,8)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0, 3,9,10,8)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0, 2,4,8,6,10,11,12,13,14,16)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0, 17,20,21,22,19,26,24,18,30,31)
MR_decl_label6(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0, 34,36,37,38,41,42)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0, 3,8,4,15,11,20,25,19,32,37)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0, 38,31,44,46,50,49,55,48,62,64)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0, 43,71,72,74,68)
MR_decl_label7(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0, 2,4,5,9,11,7,16)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0, 2,4,5,9,11,7,6,14,15,16)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0, 17,19,31,35)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_failure_5_0, 3,6,9,4)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_label_func_6_0, 2,3,4,6,7,9,10,12)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0, 2,4,6,8,9,10,11,12,14,16)
MR_decl_label9(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0, 27,28,29,17,58,59,60,80,81)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_new_func_label_5_0, 2,3,4,5,6,7,8,12,10,26)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_new_label_3_0, 2,3,4)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0, 2,4)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_params_8_0, 2,3,5,7)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_params_base_9_0, 2,5,6,8,23,28,25,31,4,33)
MR_decl_label9(ml_backend__ml_code_util__ml_gen_params_base_9_0, 34,41,43,44,46,47,37,38,36)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_pred_label_5_0, 2)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 7,8,10,6,15,19,11,12,5,24)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 25,2,32,28,29,36,42,38,45,47)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 48)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_proc_label_5_0, 2,3)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_proc_params_5_0, 2,3,4,5,6,7,8,9,12,13)
MR_decl_label6(ml_backend__ml_code_util__ml_gen_proc_params_5_0, 14,15,18,20,21,17)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0, 2,5)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_set_success_4_0, 2,5)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_success_5_0, 31,5,4,8,11)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_test_success_2_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_type_3_0, 2)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_var_3_0, 2,5,3,7,9)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_var_decl_6_0, 2,3,4,5,6)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_var_list_3_0, 17,4,5)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_var_lval_4_0, 2,3)
MR_decl_label10(ml_backend__ml_code_util__ml_gen_var_with_type_4_0, 2,3,6,7,8,9,5,13,14,15)
MR_decl_label7(ml_backend__ml_code_util__ml_gen_var_with_type_4_0, 18,19,20,21,24,27,25)
MR_decl_label5(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0, 2,3,4,7,8)
MR_decl_label3(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0, 17,4,5)
MR_decl_label4(ml_backend__ml_code_util__ml_generate_field_assigns_10_0, 2,10,18,6)
MR_decl_label2(ml_backend__ml_code_util__ml_get_env_ptr_2_0, 3,4)
MR_decl_label7(ml_backend__ml_code_util__ml_initial_cont_4_0, 2,3,5,8,9,13,14)
MR_decl_label10(ml_backend__ml_code_util__ml_is_output_det_function_4_0, 2,3,5,7,8,9,10,11,12,14)
MR_decl_label2(ml_backend__ml_code_util__ml_is_output_det_function_4_0, 16,1)
MR_decl_label5(ml_backend__ml_code_util__ml_must_box_field_type_2_0, 2,3,6,14,1)
MR_decl_label2(ml_backend__ml_code_util__ml_success_lval_2_0, 3,4)
MR_decl_label1(ml_backend__ml_code_util__ml_variable_type_3_0, 2)
MR_decl_label4(ml_backend__ml_code_util__ml_variable_types_3_0, 19,4,6,7)
MR_decl_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0, 2)
MR_decl_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0, 19)
MR_decl_label1(fn__ml_backend__ml_code_util__get_copy_out_option_2_0, 3)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_char_type_0_0, 2,3,5)
MR_decl_label4(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0, 2,3,4,5)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_gen_and_2_0, 2,5,10)
MR_decl_label6(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0, 5,38,7,8,10,3)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0, 4)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_block_3_0, 23,7)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0, 2)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0, 2,3)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0, 4,3)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0, 4)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0, 3,4)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_params_6_0, 2)
MR_decl_label9(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0, 2,3,4,5,6,7,8,11,12)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0, 2,6)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0, 2,3)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_int_type_0_0, 2,3,5)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0, 2,3)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0, 2,3)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0, 2,3,5)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_string_type_0_0, 2,3,5)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0, 14,4,5)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_success_lval_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_test_success_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_append_return_statement_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_is_output_det_function_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_pred_label_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_label_func_6_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_combine_conj_8_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_and_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_not_1_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_type_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_string_type_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_int_type_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_char_type_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__get_copy_out_option_2_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_arg_decls_9_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_params_base_9_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_params_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_params_8_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_proc_params_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_proc_label_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_new_label_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_with_type_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_variable_type_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_variable_types_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_decl_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_must_box_field_type_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_success_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_failure_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_cond_var_lval_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_initial_cont_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_generate_field_assign_10_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_generate_field_assigns_10_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0)
MR_decl_static(ml_backend__ml_code_util__lookup_ground_rval_3_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__gen_pred_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__gen_pred_0_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__602__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__592__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0)

static const struct mercury_type_0 mercury_common_0[16] =
{
{
MR_string_const("succeeded", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("env_ptr_arg", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("env_ptr", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const("cont", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("cont_env_ptr", 12),
MR_tbmkword(0, 0)
},
{
MR_string_const("dummy_var", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("closure_layout_ptr", 18),
MR_tbmkword(0, 0)
},
{
MR_string_const("type_params", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("type_info", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("{\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("MR_MemoryList allocated_mem = NULL;\n", 36),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = (MR_C_Pointer) MR_make_type_info_maybe_existq(\n\t", 51),
MR_tbmkword(0, 0)
},
{
MR_string_const(", ((MR_Closure_Layout *)\n\t", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const("}\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("MR_deallocate(allocated_mem);\n", 30),
MR_tbmkword(0, 0)
},
{
MR_string_const("passed_cont", 11),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_1;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,1),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__602__1_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__592__1_1_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_3 mercury_common_3[10] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,3,2),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(1,0,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,14),
MR_TAG_COMMON(1,3,8)
}
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
7
},
{
3
},
{
0
},
{
2
},
};

static const struct mercury_type_5 mercury_common_5[4] =
{
{
1,
MR_tbmkword(0, 0)
},
{
8,
MR_TAG_COMMON(3,9,0)
},
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_tbmkword(0, 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_proc_params_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_initial_cont_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_1;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,5),
MR_COMMON(3,6),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,5),
MR_COMMON(3,6),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_proc_params_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,5),
MR_COMMON(3,6),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_initial_cont_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(7,2),
MR_COMMON(3,6),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,3,0),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(3,7),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,7),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_tbmkword(0, 5)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
6,
0,
MR_TAG_COMMON(1,3,9)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_statement_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__gen_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__gen_pred_0_0)),
	"ml_backend.ml_code_util",
	"gen_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lookup_ground_rval",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2054,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1928",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1928,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1894",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1894,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_initial_cont_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_gen_type",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1828,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1865",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1865,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_882",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
882,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_proc_params_5_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_gen_var_name",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1298,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_gen_var_name",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1298,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_gen_var_name",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1298,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_592",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
592,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_602",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
602,
"31"
};


MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module0)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_assign'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		fn__ml_backend__ml_code_util__ml_gen_assign_3_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,4)
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

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module1)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_var_lval_4_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_var_lval_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_lval_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_gen_var_lval_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_var_lval_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module2)
	MR_init_entry1(ml_backend__ml_code_util__ml_success_lval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_success_lval_2_0);
	MR_init_label2(ml_backend__ml_code_util__ml_success_lval_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_success_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_success_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_success_lval_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_success_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_success_lval_2_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_success_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module3)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_test_success_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_test_success_2_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_test_success_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_test_success'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_test_success_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_test_success_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_test_success_2_0,2)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module4)
	MR_init_entry1(ml_backend__ml_code_util__ml_append_return_statement_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_append_return_statement_6_0);
	MR_init_label8(ml_backend__ml_code_util__ml_append_return_statement_6_0,48,7,9,3,50,14,17,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_append_return_statement'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_append_return_statement_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i48);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,9)
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
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i50);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,20)
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
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module5)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_block_3_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_block_3_0,23,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_block'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_block_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i23);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_block_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		fn__ml_backend__ml_code_util__ml_gen_block_3_0_i7);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_block_3_0,7)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module6)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_block_mlds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_block_mlds_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(check_hlds__mode_util__modes_to_arg_modes_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_mode_0;
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module7)
	MR_init_entry1(ml_backend__ml_code_util__ml_is_output_det_function_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_is_output_det_function_4_0);
	MR_init_label10(ml_backend__ml_code_util__ml_is_output_det_function_4_0,2,3,5,7,8,9,10,11,12,14)
	MR_init_label2(ml_backend__ml_code_util__ml_is_output_det_function_4_0,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_is_output_det_function'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_is_output_det_function_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module8)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,7,8,10,6,15,19,11,12,5,24)
	MR_init_label10(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,25,2,32,28,29,36,42,38,45,47)
	MR_init_label1(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pred_label_from_rtti'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_r2, 10) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_r2, 10) & (MR_Integer) 7);
	MR_sv(3) = MR_tfield(0, MR_r2, 7);
	MR_sv(2) = MR_tfield(0, MR_r2, 6);
	MR_sv(7) = MR_tfield(0, MR_r2, 4);
	MR_sv(1) = MR_tfield(0, MR_r2, 3);
	MR_sv(10) = MR_tfield(0, MR_r2, 2);
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 11);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i7);
	}
	MR_r1 = MR_r3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(1, MR_tempr4, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i6);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(8) = MR_tfield(0, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_r5, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i11);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i48);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i48);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i24);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot make label for special pred \140", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i25);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_pred_label_from_rtti\'/4", 65);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i47);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i32);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(9);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_sv(8) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(10) = MR_tempr1;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i36);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(8) = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i38);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_is_output_det_function_4_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i42);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_sv(9) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i45);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(9) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i45);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i48);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module9)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_pred_label_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_pred_label_5_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_pred_label_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pred_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_pred_label_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ml_backend__ml_code_util__ml_gen_pred_label_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module10)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_nondet_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(4);
	MR_tfield(2, MR_r2, 3) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
MR_decl_entry(fn__ml_backend__mlds__init_decl_flags_6_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module11)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_label_func_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_label_func_6_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_label_func_6_0,2,3,4,6,7,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_label_func'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_label_func_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 1) = MR_sv(6);
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(2));
	MR_tfield(2, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module12)
	MR_init_entry1(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_declare_env_ptr_arg'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,1));
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module13)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_nondet_label_func'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,1));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module14)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,2,3,4,5,6,7,8,12,10,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_new_func_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i10);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i26);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module15)
	MR_init_entry1(ml_backend__ml_code_util__ml_get_env_ptr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_get_env_ptr_2_0);
	MR_init_label2(ml_backend__ml_code_util__ml_get_env_ptr_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_get_env_ptr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_get_env_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_get_env_ptr_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_get_env_ptr_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_get_env_ptr_2_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_get_env_ptr_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module16)
	MR_init_entry1(ml_backend__ml_code_util__ml_combine_conj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_combine_conj_8_0);
	MR_init_label10(ml_backend__ml_code_util__ml_combine_conj_8_0,4,5,6,3,9,10,12,13,14,15)
	MR_init_label10(ml_backend__ml_code_util__ml_combine_conj_8_0,16,17,19,8,20,21,23,24,26,28)
	MR_init_label1(ml_backend__ml_code_util__ml_combine_conj_8_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_combine_conj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_combine_conj_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_combine_conj_8_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i30);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_combine_conj_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i24);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i26);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i28);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i30);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module17)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_and_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_and_2_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_gen_and_2_0,2,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_and'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_and_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i10);
	}
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module18)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_not_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_not_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_not'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_not_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module19)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_type_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_type_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__string_type_0_0);
MR_decl_entry(fn__backend_libs__foreign__non_foreign_type_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module20)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_string_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_string_type_0_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_string_type_0_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_string_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_string_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module21)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
	MR_init_label6(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,5,38,7,8,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_array_elem_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i7);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i8);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i10);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.ml_code_util.ml_gen_array_elem_type\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("struct", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module22)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_int_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_int_type_0_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_int_type_0_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_int_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_int_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		fn__ml_backend__ml_code_util__ml_int_type_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_int_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_int_type_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_int_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		fn__ml_backend__ml_code_util__ml_int_type_0_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_int_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__char_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module23)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_char_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_char_type_0_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_char_type_0_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_char_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_char_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__char_type_0_0,
		fn__ml_backend__ml_code_util__ml_char_type_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_char_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_char_type_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_char_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__char_type_0_0,
		fn__ml_backend__ml_code_util__ml_char_type_0_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_char_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__init_1_0);
MR_decl_entry(varset__new_vars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module24)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_make_boxed_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_type__var_list_to_type_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__java_names__java_mercury_runtime_package_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module25)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_java_mercury_type_interface'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__java_names__java_mercury_runtime_package_name_0_0,
		fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_java_mercury_type_interface_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_string_const("MercuryType", 11);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 3) = (MR_Integer) 2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module26)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_java_mercury_enum_class'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__java_names__java_mercury_runtime_package_name_0_0,
		fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_java_mercury_enum_class_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_string_const("MercuryEnum", 11);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 3) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module27)
	MR_init_entry1(fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
	MR_init_label1(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_copy_out_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__get_copy_out_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 239;
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 238;
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_init_1_0);
MR_decl_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module28)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_arg_decls_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_arg_decls_9_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,2,10,15,14,11,21,18,23,25,24)
	MR_init_label4(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,30,33,34,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_arg_decls'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_arg_decls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i6);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_sv(8) = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i18);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i18);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i25);
	}
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(1));
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_r1;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i24);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(1));
	MR_r2 = MR_sv(4);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(term__context_init_1_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i33);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i34);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_arg_decls\'/9", 54);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module29)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_params_base_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_params_base_9_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_params_base_9_0,2,5,6,8,23,28,25,31,4,33)
	MR_init_label9(ml_backend__ml_code_util__ml_gen_params_base_9_0,34,41,43,44,46,47,37,38,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_params_base'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_params_base_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i4);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 239;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,3));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,4));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Integer) 237;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,3));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,4));
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_r2 = (MR_Integer) 237;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i28);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i31);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i33);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i34);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i36);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i38);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i38);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i41);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i43);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i44);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i46);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i47);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_params_base\'/9", 56);
	MR_r3 = (MR_Word) MR_string_const("output mode function result doesn\'t have pointer type", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module30)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_params_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_params_6_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_params_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_params'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_params_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		fn__ml_backend__ml_code_util__ml_gen_params_6_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_params_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module31)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module32)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);
	MR_init_label9(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,2,3,4,5,6,7,8,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_proc_params'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i7);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i8);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i11);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i12);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module33)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_params_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_params_8_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_params_8_0,2,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_params'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_params_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_params_8_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_gen_params_8_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r7, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0,
		ml_backend__ml_code_util__ml_gen_params_8_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_8_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_params\'/8", 51);
	MR_r3 = (MR_Word) MR_string_const("missing ml_gen_info", 19);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(mdbcomp__program_representation__no_type_info_builtin_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module34)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_proc_params_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_proc_params_5_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_proc_params_5_0,2,3,4,5,6,7,8,9,12,13)
	MR_init_label6(ml_backend__ml_code_util__ml_gen_proc_params_5_0,14,15,18,20,21,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_proc_params'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_proc_params_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_proc_params_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module35)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_proc_params_from_rtti'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 8);
	MR_sv(2) = MR_tfield(0, MR_r2, 5);
	MR_sv(3) = MR_tfield(0, MR_r2, 9);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r2, 10) & (MR_Integer) 7);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module36)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_proc_label_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_proc_label_5_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_proc_label_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_proc_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_proc_label_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ml_backend__ml_code_util__ml_gen_proc_label_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_label_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		ml_backend__ml_code_util__ml_gen_proc_label_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_label_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module37)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_new_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_new_label_3_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_new_label_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_new_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_new_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0,
		ml_backend__ml_code_util__ml_gen_new_label_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_code_util__ml_gen_new_label_3_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("label_", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_new_label_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(term__var_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module38)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		fn__ml_backend__ml_code_util__ml_gen_var_name_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		fn__ml_backend__ml_code_util__ml_gen_var_name_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module39)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,2,3,6,7,8,9,5,13,14,15)
	MR_init_label7(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,18,19,20,21,24,27,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_with_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_TAG_COMMON(0,0,5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i24);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i27);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module40)
	MR_init_entry1(ml_backend__ml_code_util__ml_variable_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_variable_type_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_variable_type_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_variable_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_variable_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_util__ml_variable_type_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_variable_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module41)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_var_3_0);
	MR_init_label5(ml_backend__ml_code_util__ml_gen_var_3_0,2,5,3,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module42)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_var_list_3_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_var_list_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_list_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_util__ml_gen_var_list_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_util__ml_gen_var_list_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module43)
	MR_init_entry1(ml_backend__ml_code_util__ml_variable_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_variable_types_3_0);
	MR_init_label4(ml_backend__ml_code_util__ml_variable_types_3_0,19,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_variable_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_variable_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_variable_types_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_util__ml_variable_types_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_variable_types_3_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_code_util__ml_variable_types_3_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module44)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_local_var_decl_flags'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__ml_backend__mlds__init_decl_flags_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module45)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_mlds_var_decl_init'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module46)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_mlds_var_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module47)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_var_decl_6_0);
	MR_init_label5(ml_backend__ml_code_util__ml_gen_var_decl_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_var_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_decl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module48)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_public_field_decl_flags'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__ml_backend__mlds__init_decl_flags_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module49)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_var_name_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0_i14);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,5)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module50)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0);
	MR_init_label4(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_format_reserved_object_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("obj_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module51)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_field_name_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_field_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_field_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__ml_code_util__ml_gen_field_name_2_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("F", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__unqualify_name_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module52)
	MR_init_entry1(ml_backend__ml_code_util__ml_must_box_field_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_must_box_field_type_2_0);
	MR_init_label5(ml_backend__ml_code_util__ml_must_box_field_type_2_0,2,3,6,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_must_box_field_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_must_box_field_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_must_box_field_type_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_code_util__ml_must_box_field_type_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r1 == (MR_Integer) 4) || ((MR_Integer) MR_r1 == (MR_Integer) 0)) || ((MR_Integer) MR_r1 == (MR_Integer) 2)) || ((MR_Integer) MR_r1 == (MR_Integer) 6)) || ((MR_Integer) MR_r1 == (MR_Integer) 1)) || ((MR_Integer) MR_r1 == (MR_Integer) 5)))) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ml_backend__ml_code_util__ml_must_box_field_type_2_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i14);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module53)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_box_const_rval_7_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,4,2,10,9,14,15,17,18,20,21)
	MR_init_label3(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,23,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_box_const_rval'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_box_const_rval_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i8);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("float", 5);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_0,
		ml_backend__ml_code_util__ml_gen_box_const_rval_7_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_array_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module54)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,3,8,4,15,11,20,25,19,32,37)
	MR_init_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,38,31,44,46,50,49,55,48,62,64)
	MR_init_label5(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,43,71,72,74,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_box_or_unbox_rval'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp(8);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i4);
	}
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i11);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i11);
	}
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i19);
	}
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i19);
	}
	MR_sv(3) = MR_r5;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i25);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i31);
	}
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i31);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i37);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i38);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i44);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i46);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_array_1_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i50);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i49);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i49);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i49);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i48);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_array_1_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i55);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i62);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i43);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i64);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i72);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i68);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0_i74);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
MR_decl_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module55)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,2,4,6,8,9,10,11,12,14,16)
	MR_init_label9(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,27,28,29,17,58,59,60,80,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_local_for_output_arg'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(11) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,8));
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i16);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i80);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_sv(12), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(12), 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(14), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(14), 0) = MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_body((MR_Integer) MR_r1, (MR_Integer) 2);
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_sv(15) = (MR_Word) MR_string_const(" - 1],\n\tNULL, NULL, &allocated_mem);\n", 37);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i27);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i28);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(")->MR_closure_arg_pseudo_type_info[", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i29);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
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
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_tempr4 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_sv(1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i80);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_sv(12), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(12), 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(14), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(14), 0) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_sv(15) = (MR_Word) MR_string_const(" - 1],\n\tNULL, NULL, &allocated_mem);\n", 37);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i58);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i59);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(")->MR_closure_arg_pseudo_type_info[", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i60);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(14);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(12);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_tfield(0, MR_r2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_sv(1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i80);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0_i81);
MR_def_label(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_lval_0_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0);
MR_decl_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module56)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,2,4,8,6,10,11,12,13,14,16)
	MR_init_label10(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,17,20,21,22,19,26,24,18,30,31)
	MR_init_label6(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,34,36,37,38,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_box_or_unbox_lval'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_lval_0_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(10);
	MR_decr_sp_and_return(13);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("conv", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i19);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(12) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(7));
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i22);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i18);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i26);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i18);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_box_or_unbox_lval\'/14", 63);
	MR_r3 = (MR_Word) MR_string_const("invalid CalleeType for closure wrapper", 38);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i30);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i31);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(8);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i34);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(10);
	MR_decr_sp_and_return(13);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i37);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i38);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i41);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0_i42);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(10);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module57)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_set_success_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_set_success_4_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_set_success_4_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_set_success'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_set_success_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_set_success_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_success_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_set_success_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_success_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module58)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
	MR_init_label7(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,2,4,5,9,11,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_call_current_success_cont'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module59)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_success_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_success_5_0);
	MR_init_label5(ml_backend__ml_code_util__ml_gen_success_5_0,31,5,4,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_success'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_success_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_success_5_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_success_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,5,2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module60)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_failure_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_failure_5_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_failure_5_0,3,6,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_failure'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_failure_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_failure_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_failure_5_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,5,3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_failure_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_failure_5_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_failure\'/5", 52);
	MR_r3 = (MR_Word) MR_string_const("\140fail\' has determinism \140det\'", 28);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module61)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_succeeded_var_decl'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,0));
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module62)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_cond_var_decl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cond_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_2_0,
		fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module63)
	MR_init_entry1(ml_backend__ml_code_util__ml_cond_var_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_cond_var_lval_3_0);
	MR_init_label4(ml_backend__ml_code_util__ml_cond_var_lval_3_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_cond_var_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_cond_var_lval_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cond_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module64)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_test_cond_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_cond_var_lval_3_0,
		ml_backend__ml_code_util__ml_gen_test_cond_var_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0,2)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module65)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_set_cond_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_cond_var_lval_3_0,
		ml_backend__ml_code_util__ml_gen_set_cond_var_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_set_cond_var_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module66)
	MR_init_entry1(ml_backend__ml_code_util__ml_initial_cont_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_initial_cont_4_0);
	MR_init_label7(ml_backend__ml_code_util__ml_initial_cont_4_0,2,3,5,8,9,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_initial_cont'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_initial_cont_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_tfield(0, MR_r1, 3) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_call_gen__ml_gen_cont_params_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module67)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);
	MR_init_label10(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,2,4,5,9,11,7,6,14,15,16)
	MR_init_label4(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,17,19,31,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_call_current_success_cont_indirectly'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i6);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(11);
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,0,15));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr6, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 4) = MR_r1;
	MR_tfield(3, MR_tempr6, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 6) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 1) = MR_sv(8);
	MR_tempr5 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i31);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tempr3 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i35);
	}
	MR_tempr4 = MR_tfield(2, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i35);
	}
	MR_tempr5 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr5,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i35);
	}
	MR_tempr6 = MR_tfield(2, MR_tempr5, 2);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i35);
	}
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr5, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 4) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 6) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr7 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr4;
	MR_tfield(0, MR_r1, 1) = MR_tempr7;
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_call_current_success_cont_indirectly\'/4", 81);
	MR_r3 = (MR_Word) MR_string_const("success continuation generated was not a function", 49);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module68)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_closure_arg_offset'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module69)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_typeclass_info_arg_offset'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module70)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_base_typeclass_info_method_offset'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module71)
	MR_init_entry1(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0);
	MR_init_label5(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,2,3,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_constants_for_arm'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_util__lookup_ground_rval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module72)
	MR_init_entry1(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0);
	MR_init_label3(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_constants_for_arms'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0,
		ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_generate_constants_for_arms_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module73)
	MR_init_entry1(ml_backend__ml_code_util__ml_generate_field_assign_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_generate_field_assign_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_field_assign'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_generate_field_assign_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tfield(3, MR_tempr1, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r3;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_tfield(0, MR_tempr2, 4) = MR_r5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr3;
	MR_tfield(0, MR_r1, 1) = MR_r7;
	MR_r2 = MR_r8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module74)
	MR_init_entry1(ml_backend__ml_code_util__ml_generate_field_assigns_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_generate_field_assigns_10_0);
	MR_init_label4(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,2,10,18,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_field_assigns'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_generate_field_assigns_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i6);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r8;
	MR_sv(10) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tempr6 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr4, 0) = MR_r1;
	MR_tfield(2, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tempr7 = MR_sv(3);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_sv(9) = MR_tempr4;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr6;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_sv(10);
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,
		ml_backend__ml_code_util__ml_generate_field_assigns_10_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_generate_field_assigns\'/10", 64);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module75)
	MR_init_entry1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
	MR_init_label1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_builtin_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0_i19);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0_i19);
	}
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_def_label(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module76)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_box_const_rvals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(4) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_const_rval_7_0,
		ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,
		ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_box_const_rvals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_box_const_rvals\'/7", 60);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module77)
	MR_init_entry1(ml_backend__ml_code_util__lookup_ground_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_util__lookup_ground_rval_3_0);
	MR_init_label1(ml_backend__ml_code_util__lookup_ground_rval_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_ground_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__lookup_ground_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__lookup_ground_rval_3_0_i3);
MR_def_label(ml_backend__ml_code_util__lookup_ground_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module78)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__gen_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_code_util__gen_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__gen_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module79)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__gen_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_code_util__gen_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__gen_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module80)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__602__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__602__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_append_return_statement__602__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__602__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module81)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__592__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__592__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_append_return_statement__592__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__592__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module82)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0);
	MR_init_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__882__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module83)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1865__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module84)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1894__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module85)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0);
	MR_init_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1928__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_gen_call_current_success_cont_indirectly\'/4", 81);
	MR_r3 = (MR_Word) MR_string_const("expected variable name in continuation parameters", 49);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module86)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,3,9,10,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_skip_dummy_argument_types__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_code_util", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_code_util.ml_skip_dummy_argument_types\'/5", 66);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_code_util_maybe_bunch_0(void)
{
	ml_backend__ml_code_util_module0();
	ml_backend__ml_code_util_module1();
	ml_backend__ml_code_util_module2();
	ml_backend__ml_code_util_module3();
	ml_backend__ml_code_util_module4();
	ml_backend__ml_code_util_module5();
	ml_backend__ml_code_util_module6();
	ml_backend__ml_code_util_module7();
	ml_backend__ml_code_util_module8();
	ml_backend__ml_code_util_module9();
	ml_backend__ml_code_util_module10();
	ml_backend__ml_code_util_module11();
	ml_backend__ml_code_util_module12();
	ml_backend__ml_code_util_module13();
	ml_backend__ml_code_util_module14();
	ml_backend__ml_code_util_module15();
	ml_backend__ml_code_util_module16();
	ml_backend__ml_code_util_module17();
	ml_backend__ml_code_util_module18();
	ml_backend__ml_code_util_module19();
	ml_backend__ml_code_util_module20();
	ml_backend__ml_code_util_module21();
	ml_backend__ml_code_util_module22();
	ml_backend__ml_code_util_module23();
	ml_backend__ml_code_util_module24();
	ml_backend__ml_code_util_module25();
	ml_backend__ml_code_util_module26();
	ml_backend__ml_code_util_module27();
	ml_backend__ml_code_util_module28();
	ml_backend__ml_code_util_module29();
	ml_backend__ml_code_util_module30();
	ml_backend__ml_code_util_module31();
	ml_backend__ml_code_util_module32();
	ml_backend__ml_code_util_module33();
	ml_backend__ml_code_util_module34();
	ml_backend__ml_code_util_module35();
	ml_backend__ml_code_util_module36();
	ml_backend__ml_code_util_module37();
	ml_backend__ml_code_util_module38();
	ml_backend__ml_code_util_module39();
}

static void mercury__ml_backend__ml_code_util_maybe_bunch_1(void)
{
	ml_backend__ml_code_util_module40();
	ml_backend__ml_code_util_module41();
	ml_backend__ml_code_util_module42();
	ml_backend__ml_code_util_module43();
	ml_backend__ml_code_util_module44();
	ml_backend__ml_code_util_module45();
	ml_backend__ml_code_util_module46();
	ml_backend__ml_code_util_module47();
	ml_backend__ml_code_util_module48();
	ml_backend__ml_code_util_module49();
	ml_backend__ml_code_util_module50();
	ml_backend__ml_code_util_module51();
	ml_backend__ml_code_util_module52();
	ml_backend__ml_code_util_module53();
	ml_backend__ml_code_util_module54();
	ml_backend__ml_code_util_module55();
	ml_backend__ml_code_util_module56();
	ml_backend__ml_code_util_module57();
	ml_backend__ml_code_util_module58();
	ml_backend__ml_code_util_module59();
	ml_backend__ml_code_util_module60();
	ml_backend__ml_code_util_module61();
	ml_backend__ml_code_util_module62();
	ml_backend__ml_code_util_module63();
	ml_backend__ml_code_util_module64();
	ml_backend__ml_code_util_module65();
	ml_backend__ml_code_util_module66();
	ml_backend__ml_code_util_module67();
	ml_backend__ml_code_util_module68();
	ml_backend__ml_code_util_module69();
	ml_backend__ml_code_util_module70();
	ml_backend__ml_code_util_module71();
	ml_backend__ml_code_util_module72();
	ml_backend__ml_code_util_module73();
	ml_backend__ml_code_util_module74();
	ml_backend__ml_code_util_module75();
	ml_backend__ml_code_util_module76();
	ml_backend__ml_code_util_module77();
	ml_backend__ml_code_util_module78();
	ml_backend__ml_code_util_module79();
}

static void mercury__ml_backend__ml_code_util_maybe_bunch_2(void)
{
	ml_backend__ml_code_util_module80();
	ml_backend__ml_code_util_module81();
	ml_backend__ml_code_util_module82();
	ml_backend__ml_code_util_module83();
	ml_backend__ml_code_util_module84();
	ml_backend__ml_code_util_module85();
	ml_backend__ml_code_util_module86();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_code_util__init(void);
void mercury__ml_backend__ml_code_util__init_type_tables(void);
void mercury__ml_backend__ml_code_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_code_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_code_util__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_code_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_code_util_maybe_bunch_0();
	mercury__ml_backend__ml_code_util_maybe_bunch_1();
	mercury__ml_backend__ml_code_util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0,
		ml_backend__ml_code_util__gen_pred_0_0);
	mercury__ml_backend__ml_code_util__init_debugger();
}

void mercury__ml_backend__ml_code_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0);
	}
}


void mercury__ml_backend__ml_code_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_code_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_code_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_code_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
