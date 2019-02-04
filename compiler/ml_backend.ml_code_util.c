/*
** Automatically generated from `ml_code_util.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__ml_code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 143 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "ml_backend.ml_code_util.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 31 "ml_backend.ml_code_util.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 35 "ml_backend.ml_code_util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 39 "ml_backend.ml_code_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ml_backend.ml_code_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ml_backend.ml_code_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "ml_backend.ml_code_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 55 "ml_backend.ml_code_util.c"
#line 56 "ml_backend.ml_code_util.c"
#include "ml_backend.ml_code_util.mh"

#line 59 "ml_backend.ml_code_util.c"
#line 60 "ml_backend.ml_code_util.c"
#ifndef ML_BACKEND__ML_CODE_UTIL_DECL_GUARD
#define ML_BACKEND__ML_CODE_UTIL_DECL_GUARD

#line 64 "ml_backend.ml_code_util.c"
#line 65 "ml_backend.ml_code_util.c"

#endif
#line 68 "ml_backend.ml_code_util.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
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
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
	MR_String f3;
	MR_Integer f4;
	MR_Integer f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Integer f1[16];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_String f1[4];
	MR_Integer f2[4];
	MR_String f3[3];
	MR_Integer f4[3];
	MR_String f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_label_func_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_label_num_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_how_to_get_type_info_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_fixup_newobj_info_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_conv_seq_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_const_seq_0,
	mercury_data_ml_backend__ml_code_util__type_ctor_info_cond_seq_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_code_util__type_ctor_info_commit_sequence_num_0;
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0, 3,9,12,10,8)
MR_decl_label2(ml_backend__ml_code_util__fixup_newobj_4_0, 2,3)
MR_decl_label8(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0, 4,5,6,7,8,9,10,11)
MR_decl_label1(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0, 2)
MR_decl_label1(ml_backend__ml_code_util__fixup_newobj_in_case_4_0, 2)
MR_decl_label3(ml_backend__ml_code_util__fixup_newobj_in_default_4_0, 5,18,6)
MR_decl_label2(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0, 12,4)
MR_decl_label1(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0, 2)
MR_decl_label8(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0, 35,5,36,7,37,9,10,11)
MR_decl_label8(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0, 38,13,14,40,21,22,24,39)
MR_decl_label6(ml_backend__ml_code_util__ml_append_return_statement_6_0, 4,5,2,12,13,8)
MR_decl_label8(ml_backend__ml_code_util__ml_combine_conj_8_0, 4,5,6,3,8,9,10,11)
MR_decl_label8(ml_backend__ml_code_util__ml_combine_conj_8_0, 12,13,14,7,15,16,17,18)
MR_decl_label7(ml_backend__ml_code_util__ml_combine_conj_8_0, 19,20,21,22,23,24,25)
MR_decl_label4(ml_backend__ml_code_util__ml_cond_var_lval_3_0, 2,3,4,5)
MR_decl_label2(ml_backend__ml_code_util__ml_decl_is_static_const_1_0, 3,1)
MR_decl_label3(ml_backend__ml_code_util__ml_format_static_const_name_4_0, 2,3,4)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_arg_decls_9_0, 2,10,16,14,22,19,23,24)
MR_decl_label6(ml_backend__ml_code_util__ml_gen_arg_decls_9_0, 26,28,29,30,6,92)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0, 2,3,4,5,8,9,7,10)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0, 2,3,4,7,8,6,5,9)
MR_decl_label7(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0, 10,11,12,13,14,15,20)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_failure_5_0, 3,6,7,5)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 2,3,7,10,11,13,15,17)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 19,26,28,30,33,37,39,41)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 45,48,50,54,55,57,59,66)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 69,129,71,74,82,83,86,88)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 89,91,93,95,97,99,101,103)
MR_decl_label6(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0, 78,79,106,77,107,5)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0, 18,19,20,21,22)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0, 2)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0, 2,3,4,5)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_const_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_new_label_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0, 2)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_label_func_6_0, 2,3,4,5)
MR_decl_label7(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0, 2,3,4,5,6,7,8)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_new_func_label_5_0, 2,3,4,5,6,10,8,11)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_new_label_3_0, 2,3)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0, 2,3,5)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_params_8_0, 2,3,5)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_params_base_9_0, 2,5,6,11,13,16,18,19)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_params_base_9_0, 7,8,4,25,26,24,27,28)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_params_base_9_0, 30,31,34,33,35)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_pred_label_5_0, 2)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 8,10,7,6,15,19,11,12)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 5,21,2,28,24,25,31,37)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0, 33,40,41,42)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_proc_label_5_0, 2,3)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_proc_params_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(ml_backend__ml_code_util__ml_gen_proc_params_5_0, 10,11,12,15,17,18,14)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0, 2,3)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_set_success_4_0, 2,3)
MR_decl_label5(ml_backend__ml_code_util__ml_gen_success_5_0, 19,5,6,4,7)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0, 2)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_test_success_2_0, 2)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_trace_var_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(ml_backend__ml_code_util__ml_gen_trace_var_6_0, 10)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_var_3_0, 3,2,5)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_var_decl_6_0, 2,3,4,5)
MR_decl_label3(ml_backend__ml_code_util__ml_gen_var_list_3_0, 4,5,3)
MR_decl_label2(ml_backend__ml_code_util__ml_gen_var_lval_4_0, 2,3)
MR_decl_label8(ml_backend__ml_code_util__ml_gen_var_with_type_4_0, 4,6,7,8,2,9,10,11)
MR_decl_label4(ml_backend__ml_code_util__ml_gen_var_with_type_4_0, 12,13,15,14)
MR_decl_label2(ml_backend__ml_code_util__ml_get_env_ptr_2_0, 2,3)
MR_decl_label5(ml_backend__ml_code_util__ml_initial_cont_4_0, 2,3,4,5,6)
MR_decl_label8(ml_backend__ml_code_util__ml_is_output_det_function_4_0, 2,3,5,7,8,9,10,11)
MR_decl_label4(ml_backend__ml_code_util__ml_is_output_det_function_4_0, 12,13,17,1)
MR_decl_label8(ml_backend__ml_code_util__ml_join_decls_7_0, 6,7,8,4,10,11,12,3)
MR_decl_label2(ml_backend__ml_code_util__ml_join_decls_7_0, 13,14)
MR_decl_label3(ml_backend__ml_code_util__ml_must_box_field_type_2_0, 2,32,3)
MR_decl_label2(ml_backend__ml_code_util__ml_success_lval_2_0, 2,3)
MR_decl_label3(ml_backend__ml_code_util__ml_variable_types_3_0, 4,5,3)
MR_decl_label2(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0, 18,5)
MR_decl_label3(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0, 2,3,4)
MR_decl_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0, 19)
MR_decl_label2(fn__ml_backend__ml_code_util__get_copy_out_option_2_0, 3,5)
MR_decl_label1(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0, 3)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0, 2)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_gen_and_2_0, 2,5,9)
MR_decl_label5(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0, 4,5,6,3,7)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0, 2)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_block_3_0, 21,6)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0, 2,3)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0, 3)
MR_decl_label8(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0, 2)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0, 2,3)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_params_6_0, 2)
MR_decl_label8(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0, 10)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0, 2,3)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0, 2,3,4)
MR_decl_label2(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0, 2,3)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0, 2,3,4)
MR_decl_label3(fn__ml_backend__ml_code_util__ml_string_type_0_0, 2,3,4)
MR_decl_label1(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0, 3)
MR_decl_label7(fn__ml_backend__ml_code_util__select_output_vars_4_0, 37,3,9,11,12,10,8)
MR_decl_label5(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0, 16,5,1)
MR_decl_label8(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label8(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0, 20,22,24,26,28,30,32,36)
MR_decl_label1(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0, 1)
MR_decl_label5(__Unify___ml_backend__ml_code_util__success_cont_0_0, 4,6,8,12,1)
MR_decl_label6(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0, 3,2,7,5,10)
MR_decl_label8(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label4(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0, 61,65,69,149)
MR_decl_label6(__Compare___ml_backend__ml_code_util__success_cont_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_module_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_success_lval_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_test_success_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_append_return_statement_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_join_decls_7_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_is_output_det_function_4_0)
MR_decl_static(fn__ml_backend__ml_code_util__this_file_0_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_pred_label_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_label_func_6_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_combine_conj_8_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_and_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_not_1_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_type_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_string_type_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__get_copy_out_option_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_with_type_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_variable_type_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_var_lvals_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_3_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_trace_var_6_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0)
MR_decl_static(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_default_4_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_4_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_gc_statement_7_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_gc_statement_6_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_arg_decls_9_0)
MR_decl_static(ml_backend__ml_code_util__ml_gen_params_base_9_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_params_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_params_8_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_proc_params_5_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__select_output_vars_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_proc_label_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_label_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_new_label_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_variable_types_3_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_var_decl_6_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_format_static_const_name_4_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_static_const_decl_flags_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_decl_is_static_const_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_must_box_field_type_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_current_success_cont_2_0)
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
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_gc_statement_with_typeinfo_7_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0)
MR_def_extern_entry(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_new_const_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_lookup_const_var_name_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_search_const_var_name_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_add_extra_defn_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_extra_defns_2_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0)
MR_def_extern_entry(ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0)
MR_decl_static(ml_backend__ml_code_util__fixup_newobj_in_case_4_0)
MR_decl_static(ml_backend__ml_code_util__init_field_n_7_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__commit_sequence_num_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__commit_sequence_num_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__cond_seq_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__cond_seq_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__const_seq_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__const_seq_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__conv_seq_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__conv_seq_0_0)
MR_decl_static(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__gen_pred_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__gen_pred_0_0)
MR_decl_static(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__label_num_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__label_num_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__ml_label_func_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__ml_label_func_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_code_util__success_cont_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_code_util__success_cont_0_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__783__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__793__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1738__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1767__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2040__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0)

static const struct mercury_type_0 mercury_common_0[8] =
{
{
MR_string_const("succeeded", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("\'", 1),
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
MR_string_const("dummy_var", 9),
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
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_1;
static const struct mercury_type_1 mercury_common_1[6] =
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,9)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,5),
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

static const struct mercury_type_2 mercury_common_2[9] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__783__1_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__793__1_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(ml_backend__ml_code_util__ml_decl_is_static_const_1_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0),
0
},
{
MR_COMMON(11,1),
MR_ENTRY_AP(ml_backend__ml_code_util__fixup_newobj_in_case_4_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2040__1_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1738__1_1_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1767__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_3 mercury_common_3[12] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(0,5,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,3,1),
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
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,3,4),
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,0)
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
MR_COMMON(3,8)
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
};

static const struct mercury_type_4 mercury_common_4[13] =
{
{
MR_TAG_COMMON(0,0,2)
},
{
MR_TAG_COMMON(1,4,0)
},
{
MR_TAG_COMMON(3,9,1)
},
{
MR_TAG_COMMON(2,4,2)
},
{
MR_TAG_COMMON(0,0,5)
},
{
MR_TAG_COMMON(1,4,4)
},
{
MR_TAG_COMMON(0,0,6)
},
{
MR_TAG_COMMON(1,4,6)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(0,0,0)
},
{
MR_TAG_COMMON(0,0,7)
},
{
MR_TAG_COMMON(1,4,11)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
MR_TAG_COMMON(1,4,1),
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,8),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_TAG_COMMON(1,4,5),
MR_TAG_COMMON(3,9,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,7),
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
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
MR_COMMON(3,8),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_combine_conj_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_combine_conj_8_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
8
},
{
0
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_string_const("gc_trace", 8),
1,
0,
0
},
};

static const struct mercury_type_9 mercury_common_9[3] =
{
{
3,
MR_tbmkword(0, 5)
},
{
5,
MR_tbmkword(0, 5)
},
{
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_fixup_newobj_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info)
}
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,10),
MR_COMMON(5,1),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_COMMON(3,11),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
};

static const struct mercury_type_14 mercury_common_14[1] =
{
{
{
-1,
-1,
1,
-1,
-2,
-2,
-2,
-2,
-1,
3,
-1,
-2,
-2,
-2,
-1,
-2
}
},
};

static const struct mercury_type_15 mercury_common_15[1] =
{
{
{
MR_string_const("type_info", 9),
MR_string_const("type_ctor_info", 14),
MR_string_const("zero_type_ctor_info", 19),
MR_string_const("typeclass_info", 14)
},
{
0,
0,
0,
0
},
{
MR_string_const("zero_base_typeclass_info", 24),
MR_string_const("zero_typeclass_info", 19),
MR_string_const("zero_type_info", 14)
},
{
0,
0,
0
},
MR_string_const("base_typeclass_info", 19),
0
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
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const struct mercury_type_16 mercury_common_16[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,10),
MR_COMMON(3,11),
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
MR_COMMON(3,10),
MR_COMMON(3,11),
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
MR_COMMON(3,10),
MR_COMMON(3,11),
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
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
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
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_code_util__field_types_success_cont_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_code_util__du_functor_desc_success_cont_0_0 = {
	"success_cont",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_code_util__field_types_success_cont_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_stag_ordered_success_cont_0_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_success_cont_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_code_util__du_ptag_ordered_success_cont_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_code_util__du_stag_ordered_success_cont_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_name_ordered_success_cont_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_success_cont_0_0
};

const MR_Integer mercury_data_ml_backend__ml_code_util__functor_number_map_success_cont_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__success_cont_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__success_cont_0_0)),
	"ml_backend.ml_code_util",
	"success_cont",
	{ (void *)mercury_data_ml_backend__ml_code_util__du_name_ordered_success_cont_0 },
	{ (void *)mercury_data_ml_backend__ml_code_util__du_ptag_ordered_success_cont_0 },
	1,
	4,
	mercury_data_ml_backend__ml_code_util__functor_number_map_success_cont_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_label_func_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__ml_label_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__ml_label_func_0_0)),
	"ml_backend.ml_code_util",
	"ml_label_func",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ml_code_util__type_ctor_info_success_cont_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_code_util__field_types_ml_gen_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_var_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ml_code_util__type_ctor_info_success_cont_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ml_backend__ml_code_util__field_names_ml_gen_info_0_0[] = {
	"module_info",
	"pred_id",
	"proc_id",
	"varset",
	"var_types",
	"byref_output_vars",
	"value_output_vars",
	"func_label",
	"commit_label",
	"label",
	"cond_var",
	"conv_var",
	"const_num",
	"const_var_name_map",
	"success_cont_stack",
	"var_lvals",
	"extra_defns",
	"env_var_names"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_code_util__du_functor_desc_ml_gen_info_0_0 = {
	"ml_gen_info",
	18,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_code_util__field_types_ml_gen_info_0_0,
	mercury_data_ml_backend__ml_code_util__field_names_ml_gen_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_stag_ordered_ml_gen_info_0_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_ml_gen_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_code_util__du_ptag_ordered_ml_gen_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_code_util__du_stag_ordered_ml_gen_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_name_ordered_ml_gen_info_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_ml_gen_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_code_util__functor_number_map_ml_gen_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0)),
	"ml_backend.ml_code_util",
	"ml_gen_info",
	{ (void *)mercury_data_ml_backend__ml_code_util__du_name_ordered_ml_gen_info_0 },
	{ (void *)mercury_data_ml_backend__ml_code_util__du_ptag_ordered_ml_gen_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_code_util__functor_number_map_ml_gen_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_label_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__label_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__label_num_0_0)),
	"ml_backend.ml_code_util",
	"label_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_code_util__field_types_how_to_get_type_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_0 = {
	"construct_from_type",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_code_util__field_types_how_to_get_type_info_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_code_util__field_types_how_to_get_type_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_1 = {
	"already_provided",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_code_util__field_types_how_to_get_type_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_stag_ordered_how_to_get_type_info_0_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_stag_ordered_how_to_get_type_info_0_1[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_code_util__du_ptag_ordered_how_to_get_type_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_code_util__du_stag_ordered_how_to_get_type_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_code_util__du_stag_ordered_how_to_get_type_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_name_ordered_how_to_get_type_info_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_1,
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_how_to_get_type_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_code_util__functor_number_map_how_to_get_type_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_how_to_get_type_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0)),
	"ml_backend.ml_code_util",
	"how_to_get_type_info",
	{ (void *)mercury_data_ml_backend__ml_code_util__du_name_ordered_how_to_get_type_info_0 },
	{ (void *)mercury_data_ml_backend__ml_code_util__du_ptag_ordered_how_to_get_type_info_0 },
	2,
	4,
	mercury_data_ml_backend__ml_code_util__functor_number_map_how_to_get_type_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_statement_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__gen_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__gen_pred_0_0)),
	"ml_backend.ml_code_util",
	"gen_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_code_util__field_types_fixup_newobj_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0
};

const MR_ConstString mercury_data_ml_backend__ml_code_util__field_names_fixup_newobj_info_0_0[] = {
	"module_name",
	"context",
	"locals",
	"next_id"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_code_util__du_functor_desc_fixup_newobj_info_0_0 = {
	"fixup_newobj_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_code_util__field_types_fixup_newobj_info_0_0,
	mercury_data_ml_backend__ml_code_util__field_names_fixup_newobj_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_stag_ordered_fixup_newobj_info_0_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_fixup_newobj_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_code_util__du_ptag_ordered_fixup_newobj_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_code_util__du_stag_ordered_fixup_newobj_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_code_util__du_name_ordered_fixup_newobj_info_0[] = {
	&mercury_data_ml_backend__ml_code_util__du_functor_desc_fixup_newobj_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_code_util__functor_number_map_fixup_newobj_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_fixup_newobj_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0)),
	"ml_backend.ml_code_util",
	"fixup_newobj_info",
	{ (void *)mercury_data_ml_backend__ml_code_util__du_name_ordered_fixup_newobj_info_0 },
	{ (void *)mercury_data_ml_backend__ml_code_util__du_ptag_ordered_fixup_newobj_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_code_util__functor_number_map_fixup_newobj_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_conv_seq_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__conv_seq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__conv_seq_0_0)),
	"ml_backend.ml_code_util",
	"conv_seq",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_const_seq_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__const_seq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__const_seq_0_0)),
	"ml_backend.ml_code_util",
	"const_seq",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_cond_seq_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__cond_seq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__cond_seq_0_0)),
	"ml_backend.ml_code_util",
	"cond_seq",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_commit_sequence_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_util__commit_sequence_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_util__commit_sequence_num_0_0)),
	"ml_backend.ml_code_util",
	"commit_sequence_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_783",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
783,
"d1;c7;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_append_return_statement_6_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_793",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
793,
"d1;c7;e;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_combine_conj_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_decl_is_static_const",
1,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
905,
"d1;c9;d3;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"init_field_n",
7,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2326,
"d1;c5;t;c32;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"fixup_newobj_in_statement",
4,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2211,
"d1;c5;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"fixup_newobj_in_case",
4,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2225,
"d1;c5;d4;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_2040",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2040,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_2079",
6,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
2079,
"d1;c35;"
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
1459,
"d1;c4;"
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
1459,
"d1;c4;"
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
1459,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1050",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1050,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1738",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1738,
"d1;c8;"
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
1704,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1767",
2,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1767,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"lambda_ml_code_util_m_1801",
3,
0
},
"ml_backend.ml_code_util",
"ml_code_util.m",
1801,
"d1;c22;"
};

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module0)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,2)
MR_BEGIN_CODE

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
		fn__ml_backend__ml_code_util__ml_gen_assign_3_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module1)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module2)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_module_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module3)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_var_lval_4_0,2,3)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_gen_var_lval_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_var_lval_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module4)
	MR_init_entry1(ml_backend__ml_code_util__ml_success_lval_2_0);
	MR_init_label2(ml_backend__ml_code_util__ml_success_lval_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_success_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_success_lval_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_success_lval_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_success_lval_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_success_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module5)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_test_success_2_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_test_success_2_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module6)
	MR_init_entry1(ml_backend__ml_code_util__ml_append_return_statement_6_0);
	MR_init_label6(ml_backend__ml_code_util__ml_append_return_statement_6_0,4,5,2,12,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_append_return_statement_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_append_return_statement_6_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_append_return_statement_6_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,13)
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
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ml_backend__ml_code_util__ml_append_return_statement_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module7)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_block_3_0,21,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_block_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i21);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_block_3_0_i21);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_block_3_0,21)
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
		fn__ml_backend__ml_code_util__ml_gen_block_3_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_block_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_entity_name_0_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module8)
	MR_init_entry1(ml_backend__ml_code_util__ml_join_decls_7_0);
	MR_init_label8(ml_backend__ml_code_util__ml_join_decls_7_0,6,7,8,4,10,11,12,3)
	MR_init_label2(ml_backend__ml_code_util__ml_join_decls_7_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_join_decls_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_code_util__ml_join_decls_7_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_code_util__ml_join_decls_7_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 4);
	MR_tfield(0, MR_sv(6), 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_code_util__ml_join_decls_7_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr4, 3) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_entity_name_0_0,
		ml_backend__ml_code_util__ml_join_decls_7_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_join_decls_7_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_join_decls_7_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_join_decls_7_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_join_decls_7_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_join_decls_7_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_join_decls_7_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_join_decls_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
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
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module9)
	MR_init_entry1(ml_backend__ml_code_util__ml_is_output_det_function_4_0);
	MR_init_label8(ml_backend__ml_code_util__ml_is_output_det_function_4_0,2,3,5,7,8,9,10,11)
	MR_init_label4(ml_backend__ml_code_util__ml_is_output_det_function_4_0,12,13,17,1)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_is_output_det_function_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_util__ml_is_output_det_function_4_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_is_output_det_function_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module10)
	MR_init_entry1(fn__ml_backend__ml_code_util__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
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
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module11)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,8,10,7,6,15,19,11,12)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,5,21,2,28,24,25,31,37)
	MR_init_label4(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,33,40,41,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_r3 = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 13);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i7);
	}
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 0);
	MR_r1 = MR_tempr3;
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_r6, 0);
	MR_sv(2) = MR_ctfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) == MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(2);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i42);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i42);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("cannot make label for special pred \140", 36);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("ml_gen_pred_label:\n", 19);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i41);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i28);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(8);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i31);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_sv(1) = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i33);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_is_output_det_function_4_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i37);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i33);
	}
	MR_r1 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i40);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i40);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0_i42);
MR_def_label(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module12)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_pred_label_5_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_pred_label_5_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module13)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,2,3)
MR_BEGIN_CODE

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
		fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module14)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module15)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__init_decl_flags_6_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module16)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_label_func_6_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_label_func_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_label_func_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_nondet_label_4_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 4) = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_label_func_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_label_func_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module17)
	MR_init_entry1(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module18)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_globals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_globals_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module19)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 197;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module20)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,2,3,5)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 197;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0);
MR_def_label(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module21)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_func_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module22)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,2,3,4,5,6,10,8,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_5_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i8);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i10);
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
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,10)
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
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__ml_code_util__ml_gen_new_func_label_5_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,11)
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
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module23)
	MR_init_entry1(ml_backend__ml_code_util__ml_get_env_ptr_2_0);
	MR_init_label2(ml_backend__ml_code_util__ml_get_env_ptr_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_get_env_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_get_env_ptr_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_get_env_ptr_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_get_env_ptr_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_get_env_ptr_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__stack__push_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module24)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_ctfield(0, MR_r2, 14);
	MR_np_call_localret_ent(fn__stack__push_2_0,
		ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_r1;
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__pop_det_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module25)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_ctfield(0, MR_sv(1), 14);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 18);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r1, 13) = MR_ctfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r1, 14) = MR_r2;
	MR_tfield(0, MR_r1, 15) = MR_ctfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r1, 16) = MR_ctfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r1, 17) = MR_ctfield(0, MR_tempr1, 17);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module26)
	MR_init_entry1(ml_backend__ml_code_util__ml_combine_conj_8_0);
	MR_init_label8(ml_backend__ml_code_util__ml_combine_conj_8_0,4,5,6,3,8,9,10,11)
	MR_init_label8(ml_backend__ml_code_util__ml_combine_conj_8_0,12,13,14,7,15,16,17,18)
	MR_init_label7(ml_backend__ml_code_util__ml_combine_conj_8_0,19,20,21,22,23,24,25)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_join_decls_7_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_combine_conj_8_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,13)
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
		ml_backend__ml_code_util__ml_combine_conj_8_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__ml_code_util__ml_combine_conj_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__ml_backend__ml_code_util__ml_combine_conj_8_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i22);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i24);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_combine_conj_8_0_i25);
MR_def_label(ml_backend__ml_code_util__ml_combine_conj_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module27)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_and_2_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_gen_and_2_0,2,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_and_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_and_2_0_i9);
	}
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_and_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module28)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_not_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_not_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module29)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__string_type_0_0);
MR_decl_entry(fn__backend_libs__foreign__non_foreign_type_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module30)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_string_type_0_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_string_type_0_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_string_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_string_type_0_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_string_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module31)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
	MR_init_label5(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,4,5,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__string_type_0_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
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

MR_BEGIN_MODULE(ml_backend__ml_code_util_module32)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__new_vars_4_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_type__var_list_to_type_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module33)
	MR_init_entry1(fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__get_copy_out_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 198;
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__get_copy_out_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 198;
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 199;
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(term__var_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module34)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		fn__ml_backend__ml_code_util__ml_gen_var_name_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		fn__ml_backend__ml_code_util__ml_gen_var_name_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module35)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module36)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module37)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,4,6,7,8,2,9,10,11)
	MR_init_label4(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,12,13,15,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_with_type_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module38)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module39)
	MR_init_entry1(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_variable_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module40)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_var_lvals_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_var_lvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module41)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_3_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_var_3_0,3,2,5)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r4 = MR_ctfield(0, MR_sv(1), 15);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_gen_var_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);
MR_decl_entry(fn__parse_tree__prog_type__c_pointer_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module42)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_trace_var_6_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_trace_var_6_0,2,3,4,5,6,7,8,9)
	MR_init_label1(ml_backend__ml_code_util__ml_gen_trace_var_6_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_trace_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 15;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 7);
	MR_sv(1) = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tfield(3, MR_tempr7, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr7, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr7, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr7, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_trace_var_6_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_trace_var_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module43)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0);
	MR_init_label7(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0)
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
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module44)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);
MR_BEGIN_CODE

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
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,2)
MR_BEGIN_CODE

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
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module46)
	MR_init_entry1(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0);
	MR_init_label1(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__list__duplicate_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module47)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0);
	MR_init_label8(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,4,5,6,7,8,9,10,11)
	MR_init_label1(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i2);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i4);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("new_obj", 7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i5);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i6);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_sv(8) = MR_ctfield(0, MR_sv(9), 1);
	MR_r2 = MR_sv(7);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i7);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i8);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr6 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tempr7 = MR_sv(3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_util__init_field_n_7_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr7;
	MR_tfield(0, MR_tempr5, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 5) = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i9);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__maybe_tag_rval_3_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i10);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0_i11);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module48)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0);
	MR_init_label1(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_statement_4_0_i2);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0,2)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module49)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0);
	MR_init_label8(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,35,5,36,7,37,9,10,11)
	MR_init_label8(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,38,13,14,40,21,22,24,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i36) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i11));
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i5);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 2);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i7);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(2, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i9);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i10);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i24));
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, fixup_newobj_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i13);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_default_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i14);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i21);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_statement_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0_i22);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_code_util__fixup_newobj_in_atomic_statement_4_0);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module50)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0);
	MR_init_label2(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0_i4);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_maybe_statement_4_0,4)
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module51)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_default_4_0);
	MR_init_label3(ml_backend__ml_code_util__fixup_newobj_in_default_4_0,5,18,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__fixup_newobj_in_default_4_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__fixup_newobj_in_default_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_default_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_default_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_default_4_0_i6);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_default_4_0,6)
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

MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module52)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_4_0);
	MR_init_label2(ml_backend__ml_code_util__fixup_newobj_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__ml_code_util__fixup_newobj_4_0_i2);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_4_0_i3);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_5_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module53)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,10,11,12,13,14,15,16,17)
	MR_init_label5(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_make_type_info_var_6_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,12,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_4_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_trace_var_6_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i19);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i21);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0_i22);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(hlds__hlds_module__predicate_id_5_0);
MR_decl_entry(mdbcomp__program_representation__no_type_info_builtin_3_0);
MR_decl_entry(fn__parse_tree__prog_type__sample_type_info_type_0_0);
MR_decl_entry(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module54)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,2,3,7,10,11,13,15,17)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,19,26,28,30,33,37,39,41)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,45,48,50,54,55,57,59,66)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,69,129,71,74,82,83,86,88)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,89,91,93,95,97,99,101,103)
	MR_init_label6(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,78,79,106,77,107,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i54));
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129));
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i33) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i45) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i48) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i50) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129));
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i55) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i57) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i59) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i66) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i69));
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i129);
	}
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i71);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i74);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i77);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
	}
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i82);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i83);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78);
	}
	MR_r1 = (MR_hash_string((MR_String) MR_sv(7)) & (MR_Integer) 15);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(15,0))[(MR_Integer) MR_r1];
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_sv(7)) == 0))) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i88);
	}
	MR_r1 = (MR_COMMON(14,0))[(MR_Integer) MR_r1];
	if (MR_INT_GE(MR_r1,0))
		continue;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78);
	}
	break; } /* end while */
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i93) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i95) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i99) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i101) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i103) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i78));
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__sample_type_info_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__sample_type_info_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i79);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_gc_trace_code_7_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i106);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_sv(3), 0);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_trace_var_6_0,
		ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0_i107);
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module55)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_gc_statement_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_gc_statement_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module56)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_gc_statement_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_gc_statement_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module57)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_arg_decls_9_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,2,10,16,14,22,19,23,24)
	MR_init_label6(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,26,28,29,30,6,92)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = MR_ctfield(1, MR_r3, 0);
	MR_sv(5) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	if (MR_INT_EQ(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i92);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i19);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i22);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i23);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i26);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(term__context_init_1_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i29);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r3, 0) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,
		ml_backend__ml_code_util__ml_gen_arg_decls_9_0_i30);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_arg_decls: length mismatch", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__ml_code_util_module58)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_params_base_9_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_params_base_9_0,2,5,6,11,13,16,18,19)
	MR_init_label8(ml_backend__ml_code_util__ml_gen_params_base_9_0,7,8,4,25,26,24,27,28)
	MR_init_label5(ml_backend__ml_code_util__ml_gen_params_base_9_0,30,31,34,33,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__ml_gen_params_base_9_0)
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i4);
	}
	MR_r2 = (MR_Integer) 198;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i8);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i8);
	}
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i16);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output mode function result doesn\'t have pointer type", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,8)
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
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i24);
	}
	MR_r2 = (MR_Integer) 198;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i25);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i26);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,26)
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
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 199;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i27);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_arg_decls_9_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i28);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i30);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Integer) 197;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i31);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_sv(5) = MR_r3;
	MR_r2 = (MR_Integer) 197;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i31);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_base_9_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i34);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_params_base_9_0_i35);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_base_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module59)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_params_6_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_params_6_0,2)
MR_BEGIN_CODE

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
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module60)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module61)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);
	MR_init_label8(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,2,3,4,5,6,7,8,9)
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,10)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i7);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i8);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i9);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0_i10);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module62)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_params_8_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_params_8_0,2,3,5)
MR_BEGIN_CODE

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
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_gen_params_8_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r7, 0) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0,
		ml_backend__ml_code_util__ml_gen_params_8_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_params_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_params: missing ml_gen_info", 34);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_params_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module63)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_proc_params_5_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_proc_params_5_0,2,3,4,5,6,7,8,9)
	MR_init_label7(ml_backend__ml_code_util__ml_gen_proc_params_5_0,10,11,12,15,17,18,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_proc_params_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i15);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_proc_params_5_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i17);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0,
		ml_backend__ml_code_util__ml_gen_proc_params_5_0_i18);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__ml_code_util__ml_gen_proc_params_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module64)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_params_base_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module65)
	MR_init_entry1(fn__ml_backend__ml_code_util__select_output_vars_4_0);
	MR_init_label7(fn__ml_backend__ml_code_util__select_output_vars_4_0,37,3,9,11,12,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__select_output_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__select_output_vars_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__select_output_vars_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__select_output_vars_4_0_i8);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__ml_backend__ml_code_util__select_output_vars_4_0_i9);
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		fn__ml_backend__ml_code_util__select_output_vars_4_0_i11);
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__select_output_vars_4_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(fn__ml_backend__ml_code_util__select_output_vars_4_0,
		fn__ml_backend__ml_code_util__select_output_vars_4_0_i12);
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__ml_backend__ml_code_util__select_output_vars_4_0_i37);
MR_def_label(fn__ml_backend__ml_code_util__select_output_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("select_output_vars: length mismatch", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module66)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_proc_label_5_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_proc_label_5_0,2,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module67)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_label_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_label_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 9);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_label_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r2;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module68)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_new_label_3_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_new_label_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_new_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 9);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_new_label_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r2;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr4, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr4, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr4, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr4, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr4, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr4, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr4, 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("label_%d", 8);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_util__ml_gen_new_label_3_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_new_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module69)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_list_3_0);
	MR_init_label3(ml_backend__ml_code_util__ml_gen_var_list_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_var_list_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_util__ml_gen_var_list_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_util__ml_gen_var_list_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_var_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module70)
	MR_init_entry1(ml_backend__ml_code_util__ml_variable_types_3_0);
	MR_init_label3(ml_backend__ml_code_util__ml_variable_types_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_variable_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_variable_types_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_util__ml_variable_types_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_code_util__ml_variable_types_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_code_util__ml_variable_types_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module71)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module72)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_var_decl_6_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_var_decl_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_var_decl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_code_util__ml_gen_var_decl_6_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_var_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module73)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0);
MR_BEGIN_CODE

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

MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module74)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module75)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("obj_%s_%d", 9);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_format_reserved_object_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module76)
	MR_init_entry1(ml_backend__ml_code_util__ml_format_static_const_name_4_0);
	MR_init_label3(ml_backend__ml_code_util__ml_format_static_const_name_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_format_static_const_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ml_backend__ml_code_util__ml_format_static_const_name_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_format_static_const_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__ml_code_util__ml_format_static_const_name_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_format_static_const_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("const_%d_%d_%d_%s", 17);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__ml_code_util__ml_format_static_const_name_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_format_static_const_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module77)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_static_const_decl_flags_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_static_const_decl_flags_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
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

MR_decl_entry(fn__ml_backend__mlds__set_access_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module78)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0);
	MR_init_label3(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_access_2_0,
		fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_static_const_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module79)
	MR_init_entry1(ml_backend__ml_code_util__ml_decl_is_static_const_1_0);
	MR_init_label2(ml_backend__ml_code_util__ml_decl_is_static_const_1_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_decl_is_static_const_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_decl_is_static_const_1_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		ml_backend__ml_code_util__ml_decl_is_static_const_1_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_decl_is_static_const_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(1) == MR_r1);
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_code_util__ml_decl_is_static_const_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module80)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0);
	MR_init_label1(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_field_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("F%d", 3);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_field_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__parse_tree__prog_util__unqualify_name_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module81)
	MR_init_entry1(ml_backend__ml_code_util__ml_must_box_field_type_2_0);
	MR_init_label3(ml_backend__ml_code_util__ml_must_box_field_type_2_0,2,32,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_must_box_field_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ml_backend__ml_code_util__ml_must_box_field_type_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_util__ml_must_box_field_type_2_0_i32));
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(ml_backend__ml_code_util__ml_must_box_field_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module82)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_set_success_4_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_set_success_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_set_success_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_set_success_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_success_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_set_success_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_success_4_0,3)
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

MR_decl_entry(stack__top_det_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module83)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_current_success_cont_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_current_success_cont_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_ctfield(0, MR_tempr1, 14);
	MR_np_tailcall_ent(stack__top_det_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module84)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,2,3,4,5,8,9,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_ctfield(0, MR_r2, 14);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 197;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 4) = MR_r1;
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module85)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_success_5_0);
	MR_init_label5(ml_backend__ml_code_util__ml_gen_success_5_0,19,5,6,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_success_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_success_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_success_5_0_i4);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(2,4,8);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_util__ml_gen_success_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_success_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module86)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_failure_5_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_failure_5_0,3,6,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_failure_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_failure_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_failure: \140fail\' has determinism \140det\'", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_failure_5_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(2,4,9);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_util__ml_gen_failure_5_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_failure_5_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_failure_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module87)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,10);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module88)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,2,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cond_", 5);
	MR_np_call_localret_ent(fn__string__append_2_0,
		fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module89)
	MR_init_entry1(ml_backend__ml_code_util__ml_cond_var_lval_3_0);
	MR_init_label4(ml_backend__ml_code_util__ml_cond_var_lval_3_0,2,3,4,5)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cond_", 5);
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_cond_var_lval_3_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_cond_var_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module90)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module91)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
	MR_init_label2(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_cond_var_lval_3_0,
		ml_backend__ml_code_util__ml_gen_set_cond_var_5_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_set_cond_var_5_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,3)
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

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module92)
	MR_init_entry1(ml_backend__ml_code_util__ml_initial_cont_4_0);
	MR_init_label5(ml_backend__ml_code_util__ml_initial_cont_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_initial_cont_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_util__ml_gen_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_util__ml_initial_cont_4_0_i6);
MR_def_label(ml_backend__ml_code_util__ml_initial_cont_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_call_gen__ml_gen_cont_params_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module93)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);
	MR_init_label8(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,2,3,4,7,8,6,5,9)
	MR_init_label7(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,10,11,12,13,14,15,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_current_success_cont_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i7);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i8);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i5);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tempr2;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i9);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_name_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i10);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i11);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i12);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(10) = MR_ctfield(0, MR_r1, 0);
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i13);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,12);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = MR_sv(11);
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
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i14);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tempr3 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i15);
	}
	MR_tempr4 = MR_ctfield(2, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i15);
	}
	MR_tempr5 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr5,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i15);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 2);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_ctfield(2, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr5, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr3;
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
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__this_file_0_0,
		ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0_i20);
MR_def_label(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("success continuation generated was not a function", 49);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module94)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_gc_statement_with_typeinfo_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_gc_statement_with_typeinfo_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_gc_statement_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module95)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module96)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module97)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__ml_code_util_module98)
	MR_init_entry1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
	MR_init_label1(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0_i19);
	}
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
	}
MR_def_label(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__init_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(stack__init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module99)
	MR_init_entry1(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0);
	MR_init_label8(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_code_util__ml_gen_info_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i6);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__select_output_vars_4_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i7);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i8);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i9);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i10);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i11);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i12);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i13);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_np_call_localret_ent(map__init_1_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i14);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_np_call_localret_ent(stack__init_1_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i15);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_np_call_localret_ent(map__init_1_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i16);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__ml_code_util__ml_gen_info_init_3_0_i17);
MR_def_label(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 15) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 16) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 17) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module100)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module101)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module102)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module103)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 200;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module104)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0);
	MR_init_label4(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 12);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0_i3);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 10000);
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0_i4);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 10000);
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0_i5);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_bump_counters_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module105)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 8);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r2;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module106)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 10);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_r2;
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module107)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 11);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_conv_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_r2;
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module108)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_new_const_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_new_const_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_new_const_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 12);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_code_util__ml_gen_info_new_const_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_new_const_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r2;
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__set_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module109)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = MR_ctfield(0, MR_r3, 13);
	MR_np_call_localret_ent(fn__map__set_3_0,
		ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_set_const_var_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_r1;
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module110)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_lookup_const_var_name_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_lookup_const_var_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_ctfield(0, MR_tempr1, 13);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module111)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_search_const_var_name_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_search_const_var_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r4 = MR_ctfield(0, MR_tempr1, 13);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module112)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_ctfield(0, MR_r3, 15);
	MR_np_call_localret_ent(fn__map__set_3_0,
		ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_r1;
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module113)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_r1;
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module114)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_add_extra_defn_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_add_extra_defn_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 16);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_r1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_r1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_r1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_r1, 16) = MR_tempr1;
	MR_tfield(0, MR_r1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module115)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_extra_defns_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_extra_defns_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module116)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0);
	MR_init_label1(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_r2, 17);
	MR_np_call_localret_ent(set__insert_3_0,
		ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0_i2);
MR_def_label(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module117)
	MR_init_entry1(ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module118)
	MR_init_entry1(ml_backend__ml_code_util__fixup_newobj_in_case_4_0);
	MR_init_label1(ml_backend__ml_code_util__fixup_newobj_in_case_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__fixup_newobj_in_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_code_util__fixup_newobj_in_case_4_0_i2);
MR_def_label(ml_backend__ml_code_util__fixup_newobj_in_case_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module119)
	MR_init_entry1(ml_backend__ml_code_util__init_field_n_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_util__init_field_n_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr4;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = ((MR_Integer) MR_tempr5 + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module120)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__commit_sequence_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__commit_sequence_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module121)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__commit_sequence_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__commit_sequence_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module122)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__cond_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__cond_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module123)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__cond_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__cond_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module124)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__const_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__const_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module125)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__const_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__const_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module126)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__conv_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__conv_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module127)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__conv_seq_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__conv_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module128)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0);
	MR_init_label5(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_context_0_0,
		__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___counter__counter_0_0);
MR_def_label(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_code_util__fixup_newobj_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_context_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module129)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0);
	MR_init_label6(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_context_0_0,
		__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___counter__counter_0_0);
MR_def_label(__Compare___ml_backend__ml_code_util__fixup_newobj_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module130)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__gen_pred_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__ml_code_util_module131)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__gen_pred_0_0);
MR_BEGIN_CODE

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

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_rval_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module132)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0);
	MR_init_label3(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0_i16);
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
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
	}
MR_def_label(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_rval_0_0);
MR_def_label(__Unify___ml_backend__ml_code_util__how_to_get_type_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_rval_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module133)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0);
	MR_init_label5(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_code_util__how_to_get_type_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_rval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module134)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__label_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__label_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module135)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__label_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__label_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module136)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0);
	MR_init_label8(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label8(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,20,22,24,26,28,30,32,36)
	MR_init_label1(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__ml_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i36);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(21) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(22) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(23) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(24) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(25) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(26) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(27) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(28) = MR_ctfield(0, MR_tempr2, 11);
	MR_sv(29) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(30) = MR_ctfield(0, MR_tempr2, 13);
	MR_sv(31) = MR_ctfield(0, MR_tempr2, 14);
	MR_sv(32) = MR_ctfield(0, MR_tempr2, 15);
	MR_sv(33) = MR_ctfield(0, MR_tempr2, 16);
	MR_sv(34) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(18))) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i10);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i12);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i14);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i16);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i18);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i20);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i22);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i24);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(30);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i26);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i28);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i30);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i32);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(34);
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_code_util__ml_gen_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module137)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0);
	MR_init_label8(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label4(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,61,65,69,149)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__ml_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i3);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(34) = MR_ctfield(0, MR_tempr5, 17);
	MR_sv(33) = MR_ctfield(0, MR_tempr5, 16);
	MR_sv(32) = MR_ctfield(0, MR_tempr5, 15);
	MR_sv(31) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(30) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(29) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(17) = MR_ctfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_ctfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_ctfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i17);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i21);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i25);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i29);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i33);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i37);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i41);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i45);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i49);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i53);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(30);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i57);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, success_cont);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i61);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(32);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i65);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i69);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(34);
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ml_code_util__ml_gen_info_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module138)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__ml_label_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__ml_label_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module139)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__ml_label_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__ml_label_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module140)
	MR_init_entry1(__Unify___ml_backend__ml_code_util__success_cont_0_0);
	MR_init_label5(__Unify___ml_backend__ml_code_util__success_cont_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_code_util__success_cont_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__success_cont_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_code_util__success_cont_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_code_util__success_cont_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__success_cont_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_code_util__success_cont_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_code_util__success_cont_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__success_cont_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_code_util__success_cont_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_code_util__success_cont_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_code_util__success_cont_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ml_code_util__success_cont_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_code_util__success_cont_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module141)
	MR_init_entry1(__Compare___ml_backend__ml_code_util__success_cont_0_0);
	MR_init_label6(__Compare___ml_backend__ml_code_util__success_cont_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_code_util__success_cont_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__success_cont_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__success_cont_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_code_util__success_cont_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__success_cont_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_code_util__success_cont_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__success_cont_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_code_util__success_cont_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_code_util__success_cont_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ml_code_util__success_cont_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module142)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__783__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__783__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module143)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__793__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__793__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module144)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0);
	MR_init_label1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__1050__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module145)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1738__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1738__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module146)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1767__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1767__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module147)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0);
	MR_init_label2(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0,18,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0_i18);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0_i18);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__this_file_0_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0_i5);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1801__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("expected variable name in continuation parameters", 49);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_util_module148)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2040__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2040__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module149)
	MR_init_entry1(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0);
	MR_init_label3(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0_i2);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0_i3);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0_i4);
MR_def_label(fn__ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_gc_trace_code__2079__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_util_module150)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,3,9,12,10,8)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ml_skip_dummy_argument_types: length mismatch", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
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
	ml_backend__ml_code_util_module87();
	ml_backend__ml_code_util_module88();
	ml_backend__ml_code_util_module89();
	ml_backend__ml_code_util_module90();
	ml_backend__ml_code_util_module91();
	ml_backend__ml_code_util_module92();
	ml_backend__ml_code_util_module93();
	ml_backend__ml_code_util_module94();
	ml_backend__ml_code_util_module95();
	ml_backend__ml_code_util_module96();
	ml_backend__ml_code_util_module97();
	ml_backend__ml_code_util_module98();
	ml_backend__ml_code_util_module99();
	ml_backend__ml_code_util_module100();
	ml_backend__ml_code_util_module101();
	ml_backend__ml_code_util_module102();
	ml_backend__ml_code_util_module103();
	ml_backend__ml_code_util_module104();
	ml_backend__ml_code_util_module105();
	ml_backend__ml_code_util_module106();
	ml_backend__ml_code_util_module107();
	ml_backend__ml_code_util_module108();
	ml_backend__ml_code_util_module109();
	ml_backend__ml_code_util_module110();
	ml_backend__ml_code_util_module111();
	ml_backend__ml_code_util_module112();
	ml_backend__ml_code_util_module113();
	ml_backend__ml_code_util_module114();
	ml_backend__ml_code_util_module115();
	ml_backend__ml_code_util_module116();
	ml_backend__ml_code_util_module117();
	ml_backend__ml_code_util_module118();
	ml_backend__ml_code_util_module119();
}

static void mercury__ml_backend__ml_code_util_maybe_bunch_3(void)
{
	ml_backend__ml_code_util_module120();
	ml_backend__ml_code_util_module121();
	ml_backend__ml_code_util_module122();
	ml_backend__ml_code_util_module123();
	ml_backend__ml_code_util_module124();
	ml_backend__ml_code_util_module125();
	ml_backend__ml_code_util_module126();
	ml_backend__ml_code_util_module127();
	ml_backend__ml_code_util_module128();
	ml_backend__ml_code_util_module129();
	ml_backend__ml_code_util_module130();
	ml_backend__ml_code_util_module131();
	ml_backend__ml_code_util_module132();
	ml_backend__ml_code_util_module133();
	ml_backend__ml_code_util_module134();
	ml_backend__ml_code_util_module135();
	ml_backend__ml_code_util_module136();
	ml_backend__ml_code_util_module137();
	ml_backend__ml_code_util_module138();
	ml_backend__ml_code_util_module139();
	ml_backend__ml_code_util_module140();
	ml_backend__ml_code_util_module141();
	ml_backend__ml_code_util_module142();
	ml_backend__ml_code_util_module143();
	ml_backend__ml_code_util_module144();
	ml_backend__ml_code_util_module145();
	ml_backend__ml_code_util_module146();
	ml_backend__ml_code_util_module147();
	ml_backend__ml_code_util_module148();
	ml_backend__ml_code_util_module149();
	ml_backend__ml_code_util_module150();
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
	mercury__ml_backend__ml_code_util_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0,
		ml_backend__ml_code_util__success_cont_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_label_func_0,
		ml_backend__ml_code_util__ml_label_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0,
		ml_backend__ml_code_util__ml_gen_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_label_num_0,
		ml_backend__ml_code_util__label_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_how_to_get_type_info_0,
		ml_backend__ml_code_util__how_to_get_type_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0,
		ml_backend__ml_code_util__gen_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_fixup_newobj_info_0,
		ml_backend__ml_code_util__fixup_newobj_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_conv_seq_0,
		ml_backend__ml_code_util__conv_seq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_const_seq_0,
		ml_backend__ml_code_util__const_seq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_cond_seq_0,
		ml_backend__ml_code_util__cond_seq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_util__type_ctor_info_commit_sequence_num_0,
		ml_backend__ml_code_util__commit_sequence_num_0_0);
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
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_success_cont_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_label_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_label_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_how_to_get_type_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_gen_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_fixup_newobj_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_conv_seq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_const_seq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_cond_seq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_util__type_ctor_info_commit_sequence_num_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
