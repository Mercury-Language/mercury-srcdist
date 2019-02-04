/*
** Automatically generated from `fact_table.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__fact_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.fact_table.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.fact_table.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.fact_table.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.fact_table.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.fact_table.c"
#line 44 "ll_backend.fact_table.c"
#include "ll_backend.fact_table.mh"

#line 47 "ll_backend.fact_table.c"
#line 48 "ll_backend.fact_table.c"
#ifndef LL_BACKEND__FACT_TABLE_DECL_GUARD
#define LL_BACKEND__FACT_TABLE_DECL_GUARD

#line 52 "ll_backend.fact_table.c"
#line 53 "ll_backend.fact_table.c"

#endif
#line 56 "ll_backend.fact_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__fact_table__type_ctor_info_sort_file_line_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_proc_stream_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_inferred_determinism_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_hash_table_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_fact_result_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_info_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__fact_table__type_ctor_info_error_reports_0,
	mercury_data_ll_backend__fact_table__type_ctor_info_error_report_0;
MR_decl_label1(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0, 1)
MR_decl_label7(ll_backend__fact_table__build_hash_table_17_0, 2,3,4,5,6,7,8)
MR_decl_label8(ll_backend__fact_table__build_hash_table_2_19_0, 28,4,6,7,5,10,11,8)
MR_decl_label3(ll_backend__fact_table__build_hash_table_2_19_0, 12,13,3)
MR_decl_label7(ll_backend__fact_table__build_hash_table_lower_levels_11_0, 2,3,4,5,6,7,8)
MR_decl_label6(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0, 14,4,5,6,7,3)
MR_decl_label8(ll_backend__fact_table__calculate_hash_table_size_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__fact_table__calculate_hash_table_size_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label2(ll_backend__fact_table__calculate_hash_table_size_3_0, 18,19)
MR_decl_label2(ll_backend__fact_table__calculate_hash_table_size_2_3_0, 3,5)
MR_decl_label8(ll_backend__fact_table__check_fact_term_14_0, 4,5,11,18,9,20,21,6)
MR_decl_label4(ll_backend__fact_table__check_fact_term_14_0, 3,26,27,28)
MR_decl_label8(ll_backend__fact_table__check_fact_term_2_15_0, 2,4,5,6,7,8,12,10)
MR_decl_label2(ll_backend__fact_table__check_fact_term_2_15_0, 3,16)
MR_decl_label8(ll_backend__fact_table__check_fact_type_and_mode_8_0, 93,3,8,10,11,18,25,26)
MR_decl_label2(ll_backend__fact_table__check_fact_type_and_mode_8_0, 30,5)
MR_decl_label4(ll_backend__fact_table__close_sort_files_4_0, 4,5,6,3)
MR_decl_label8(ll_backend__fact_table__compile_facts_13_0, 39,2,8,9,11,12,24,14)
MR_decl_label6(ll_backend__fact_table__compile_facts_13_0, 16,17,19,5,6,7)
MR_decl_label8(ll_backend__fact_table__create_fact_table_header_7_0, 2,3,4,5,6,7,9,10)
MR_decl_label3(ll_backend__fact_table__create_fact_table_header_7_0, 11,12,14)
MR_decl_label8(ll_backend__fact_table__create_fact_table_struct_6_0, 4,8,9,7,13,14,5,3)
MR_decl_label1(ll_backend__fact_table__create_fact_table_struct_6_0, 44)
MR_decl_label6(ll_backend__fact_table__delete_temporary_file_3_0, 2,5,6,7,8,3)
MR_decl_label8(ll_backend__fact_table__do_build_hash_table_13_0, 61,6,5,10,13,12,11,14)
MR_decl_label5(ll_backend__fact_table__do_build_hash_table_13_0, 17,19,16,22,20)
MR_decl_label8(ll_backend__fact_table__fact_table_compile_facts_11_0, 2,5,6,7,9,4,12,13)
MR_decl_label3(ll_backend__fact_table__fact_table_compile_facts_11_0, 14,15,16)
MR_decl_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0, 2,3,4,5,8,9,10,11)
MR_decl_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0, 13,16,15,12,17,18,20,21)
MR_decl_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0, 22,23,24,27,28,29,30,31)
MR_decl_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0, 32,33,26,34,35,7,36,37)
MR_decl_label2(ll_backend__fact_table__fact_table_compile_facts_2_13_0, 38,39)
MR_decl_label8(ll_backend__fact_table__fact_table_generate_c_code_11_0, 2,3,4,5,6,7,14,11)
MR_decl_label7(ll_backend__fact_table__fact_table_generate_c_code_11_0, 16,23,20,26,30,34,35)
MR_decl_label3(ll_backend__fact_table__fact_table_hash_2_4_0, 11,4,3)
MR_decl_label8(ll_backend__fact_table__fact_table_mode_type_3_0, 55,6,4,10,8,13,14,16)
MR_decl_label3(ll_backend__fact_table__fact_table_mode_type_3_0, 17,19,21)
MR_decl_label8(ll_backend__fact_table__fill_in_fact_arg_infos_4_0, 5,3,11,9,15,13,19,8)
MR_decl_label8(ll_backend__fact_table__generate_all_in_code_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(ll_backend__fact_table__generate_all_in_code_7_0, 10)
MR_decl_label8(ll_backend__fact_table__generate_arg_input_code_7_0, 2,5,3,7,8,9,10,11)
MR_decl_label2(ll_backend__fact_table__generate_argument_vars_code_9_0, 2,3)
MR_decl_label8(ll_backend__fact_table__generate_argument_vars_code_2_11_0, 2,10,11,14,12,17,20,18)
MR_decl_label8(ll_backend__fact_table__generate_argument_vars_code_2_11_0, 22,23,24,15,27,28,29,30)
MR_decl_label4(ll_backend__fact_table__generate_argument_vars_code_2_11_0, 31,32,33,6)
MR_decl_label4(ll_backend__fact_table__generate_cc_multi_code_2_5_0, 12,4,5,3)
MR_decl_label1(ll_backend__fact_table__generate_decl_code_3_0, 2)
MR_decl_label8(ll_backend__fact_table__generate_fact_lookup_code_7_0, 61,5,3,11,13,17,20,19)
MR_decl_label5(ll_backend__fact_table__generate_fact_lookup_code_7_0, 14,25,27,9,8)
MR_decl_label4(ll_backend__fact_table__generate_fact_test_code_6_0, 2,3,4,5)
MR_decl_label8(ll_backend__fact_table__generate_hash_code_9_0, 86,3,11,13,20,17,25,22)
MR_decl_label4(ll_backend__fact_table__generate_hash_code_9_0, 29,30,9,8)
MR_decl_label1(ll_backend__fact_table__generate_hash_int_code_10_0, 2)
MR_decl_label8(ll_backend__fact_table__generate_hash_lookup_code_13_0, 2,3,4,6,7,8,9,13)
MR_decl_label1(ll_backend__fact_table__generate_hash_lookup_code_13_0, 10)
MR_decl_label1(ll_backend__fact_table__generate_hash_string_code_10_0, 2)
MR_decl_label7(ll_backend__fact_table__generate_multidet_code_8_0, 2,3,4,5,6,7,8)
MR_decl_label5(ll_backend__fact_table__generate_nondet_proc_code_5_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__fact_table__generate_primary_nondet_code_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(ll_backend__fact_table__generate_primary_nondet_code_8_0, 10,11,12)
MR_decl_label8(ll_backend__fact_table__generate_secondary_nondet_code_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(ll_backend__fact_table__generate_secondary_nondet_code_8_0, 10,11,12,13,14)
MR_decl_label8(ll_backend__fact_table__generate_semidet_in_out_code_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(ll_backend__fact_table__generate_semidet_in_out_code_7_0, 10,11,12,13,14)
MR_decl_label8(ll_backend__fact_table__generate_test_condition_code_8_0, 5,3,11,13,17,19,9,22)
MR_decl_label1(ll_backend__fact_table__generate_test_condition_code_8_0, 8)
MR_decl_label4(ll_backend__fact_table__get_free_hash_slot_2_4_0, 13,2,4,3)
MR_decl_label7(ll_backend__fact_table__get_hash_table_type_2_3_0, 41,3,5,7,9,11,2)
MR_decl_label8(ll_backend__fact_table__get_input_args_list_5_0, 101,5,3,8,12,20,19,16)
MR_decl_label8(ll_backend__fact_table__get_input_args_list_5_0, 27,28,29,30,24,36,34,31)
MR_decl_label4(ll_backend__fact_table__get_input_args_list_5_0, 43,44,15,10)
MR_decl_label8(ll_backend__fact_table__get_output_args_list_3_0, 85,3,12,11,8,19,20,21)
MR_decl_label8(ll_backend__fact_table__get_output_args_list_3_0, 22,16,28,27,23,35,36,7)
MR_decl_label1(ll_backend__fact_table__get_output_args_list_3_0, 4)
MR_decl_label7(ll_backend__fact_table__hash_list_insert_many_7_0, 31,5,4,9,12,11,3)
MR_decl_label8(ll_backend__fact_table__hash_table_from_list_4_0, 48,6,7,4,8,13,14,11)
MR_decl_label7(ll_backend__fact_table__hash_table_from_list_4_0, 18,19,21,23,20,24,3)
MR_decl_label7(ll_backend__fact_table__hash_table_insert_2_6_0, 23,3,7,8,9,5,2)
MR_decl_label8(ll_backend__fact_table__infer_determinism_pass_1_12_0, 2,3,6,7,8,4,9,11)
MR_decl_label2(ll_backend__fact_table__infer_determinism_pass_1_12_0, 12,13)
MR_decl_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0, 77,4,5,6,7,8,9,10)
MR_decl_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0, 11,12,18,17,16,23,27,26)
MR_decl_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0, 24,22,30,31,32,14,36,37)
MR_decl_label2(ll_backend__fact_table__infer_determinism_pass_2_6_0, 38,3)
MR_decl_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0, 4,5,6,7,9,10,11,15)
MR_decl_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0, 14,12,18,19,20,22,23,24)
MR_decl_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0, 8,27,28,25,30,32,33,34)
MR_decl_label1(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0, 3)
MR_decl_label3(ll_backend__fact_table__init_fact_arg_infos_2_0, 4,5,2)
MR_decl_label7(ll_backend__fact_table__key_from_chars_2_3_0, 16,3,5,7,9,14,2)
MR_decl_label7(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0, 44,3,5,8,13,12,4)
MR_decl_label8(ll_backend__fact_table__make_sort_file_key_3_0, 44,5,11,13,15,16,17,18)
MR_decl_label7(ll_backend__fact_table__make_sort_file_key_3_0, 20,21,9,22,23,4,3)
MR_decl_label8(ll_backend__fact_table__maybe_append_data_table_5_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(ll_backend__fact_table__maybe_append_data_table_5_0, 27,14,16,13,19,20,21,22)
MR_decl_label1(ll_backend__fact_table__maybe_append_data_table_5_0, 40)
MR_decl_label7(ll_backend__fact_table__open_output_handle_error_5_0, 2,5,6,8,10,11,3)
MR_decl_label7(ll_backend__fact_table__open_sort_files_6_0, 22,4,5,8,7,9,10)
MR_decl_label2(ll_backend__fact_table__pragma_vars_to_names_string_2_0, 4,3)
MR_decl_label2(ll_backend__fact_table__print_error_report_3_0, 3,5)
MR_decl_label1(ll_backend__fact_table__print_error_reports_3_0, 2)
MR_decl_label8(ll_backend__fact_table__read_sort_file_line_6_0, 2,37,30,31,32,33,34,5)
MR_decl_label8(ll_backend__fact_table__read_sort_file_line_6_0, 6,8,10,11,13,15,16,18)
MR_decl_label7(ll_backend__fact_table__read_sort_file_line_6_0, 20,22,23,24,26,27,7)
MR_decl_label8(ll_backend__fact_table__remove_sort_file_escapes_3_0, 61,3,8,10,12,14,67,7)
MR_decl_label1(ll_backend__fact_table__remove_sort_file_escapes_3_0, 4)
MR_decl_label2(ll_backend__fact_table__report_type_error_6_0, 17,5)
MR_decl_label7(ll_backend__fact_table__see_input_handle_error_5_0, 2,5,6,8,10,11,3)
MR_decl_label6(ll_backend__fact_table__split_key_to_arg_strings_2_0, 28,5,7,8,10,4)
MR_decl_label2(ll_backend__fact_table__top_level_collect_matching_facts_8_0, 2,3)
MR_decl_label6(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0, 33,2,4,10,8,5)
MR_decl_label3(ll_backend__fact_table__update_fact_map_4_0, 11,4,3)
MR_decl_label4(ll_backend__fact_table__write_call_system_error_msg_4_0, 2,3,4,5)
MR_decl_label8(ll_backend__fact_table__write_fact_args_4_0, 26,6,8,9,11,12,13,14)
MR_decl_label6(ll_backend__fact_table__write_fact_args_4_0, 15,17,18,19,28,29)
MR_decl_label8(ll_backend__fact_table__write_fact_data_6_0, 2,4,19,5,7,10,20,12)
MR_decl_label3(ll_backend__fact_table__write_fact_data_6_0, 14,15,16)
MR_decl_label8(ll_backend__fact_table__write_fact_table_arrays_14_0, 4,3,33,8,7,9,12,13)
MR_decl_label1(ll_backend__fact_table__write_fact_table_arrays_14_0, 11)
MR_decl_label8(ll_backend__fact_table__write_fact_table_data_6_0, 32,4,6,23,7,9,12,24)
MR_decl_label6(ll_backend__fact_table__write_fact_table_data_6_0, 14,16,17,18,19,34)
MR_decl_label8(ll_backend__fact_table__write_fact_table_numfacts_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__fact_table__write_fact_table_pointer_array_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(ll_backend__fact_table__write_fact_table_pointer_array_6_0, 10)
MR_decl_label4(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0, 11,3,4,13)
MR_decl_label8(ll_backend__fact_table__write_hash_table_6_0, 3,2,6,7,8,9,10,11)
MR_decl_label2(ll_backend__fact_table__write_hash_table_6_0, 12,13)
MR_decl_label8(ll_backend__fact_table__write_hash_table_2_5_0, 57,3,5,9,10,7,12,15)
MR_decl_label7(ll_backend__fact_table__write_hash_table_2_5_0, 21,23,25,4,27,29,59)
MR_decl_label8(ll_backend__fact_table__write_primary_hash_table_16_0, 2,3,7,8,11,10,6,14)
MR_decl_label8(ll_backend__fact_table__write_primary_hash_table_16_0, 15,16,17,18,19,21,22,13)
MR_decl_label8(ll_backend__fact_table__write_primary_hash_table_16_0, 12,24,25,26,27,28,29,30)
MR_decl_label1(ll_backend__fact_table__write_primary_hash_table_16_0, 5)
MR_decl_label8(ll_backend__fact_table__write_secondary_hash_tables_11_0, 34,3,4,7,8,9,10,11)
MR_decl_label8(ll_backend__fact_table__write_secondary_hash_tables_11_0, 12,13,16,17,18,15,20,6)
MR_decl_label8(ll_backend__fact_table__write_sort_file_lines_9_0, 23,4,5,6,7,9,10,11)
MR_decl_label2(ll_backend__fact_table__write_sort_file_lines_9_0, 12,25)
MR_decl_label1(fn__ll_backend__fact_table__fact_table_file_header_1_0, 2)
MR_decl_label8(fn__ll_backend__fact_table__make_fact_data_string_1_0, 42,10,12,14,15,16,17,19)
MR_decl_label5(fn__ll_backend__fact_table__make_fact_data_string_1_0, 20,8,21,4,3)
MR_decl_label3(__Unify___ll_backend__fact_table__fact_arg_info_0_0, 4,6,1)
MR_decl_label4(__Unify___ll_backend__fact_table__hash_entry_0_0, 4,6,8,1)
MR_decl_label3(__Unify___ll_backend__fact_table__hash_index_0_0, 12,5,1)
MR_decl_label2(__Unify___ll_backend__fact_table__hash_table_0_0, 6,1)
MR_decl_label3(__Unify___ll_backend__fact_table__inferred_determinism_0_0, 6,16,1)
MR_decl_label2(__Unify___ll_backend__fact_table__proc_stream_0_0, 6,1)
MR_decl_label3(__Unify___ll_backend__fact_table__sort_file_line_0_0, 4,8,1)
MR_decl_label5(__Compare___ll_backend__fact_table__fact_arg_info_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___ll_backend__fact_table__hash_entry_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___ll_backend__fact_table__hash_index_0_0, 3,2,7,5,10,12,45)
MR_decl_label4(__Compare___ll_backend__fact_table__hash_table_0_0, 3,2,5,21)
MR_decl_label6(__Compare___ll_backend__fact_table__inferred_determinism_0_0, 26,7,28,6,30,18)
MR_decl_label4(__Compare___ll_backend__fact_table__proc_stream_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ll_backend__fact_table__sort_file_line_0_0, 3,2,5,9,29)
MR_decl_static(ll_backend__fact_table__add_error_report_4_0)
MR_decl_static(ll_backend__fact_table__report_type_error_6_0)
MR_decl_static(ll_backend__fact_table__check_fact_type_and_mode_8_0)
MR_decl_static(ll_backend__fact_table__key_from_chars_2_3_0)
MR_decl_static(ll_backend__fact_table__make_sort_file_key_3_0)
MR_decl_static(fn__ll_backend__fact_table__make_fact_data_string_1_0)
MR_decl_static(ll_backend__fact_table__write_sort_file_lines_9_0)
MR_decl_static(ll_backend__fact_table__write_new_data_array_5_0)
MR_decl_static(ll_backend__fact_table__write_closing_brace_3_0)
MR_decl_static(ll_backend__fact_table__write_fact_args_4_0)
MR_decl_static(ll_backend__fact_table__write_fact_data_6_0)
MR_decl_static(ll_backend__fact_table__check_fact_term_2_15_0)
MR_decl_static(ll_backend__fact_table__check_fact_term_14_0)
MR_decl_static(ll_backend__fact_table__compile_facts_13_0)
MR_decl_static(fn__ll_backend__fact_table__fact_table_file_header_1_0)
MR_decl_static(ll_backend__fact_table__create_fact_table_struct_6_0)
MR_decl_static(ll_backend__fact_table__create_fact_table_header_7_0)
MR_decl_static(ll_backend__fact_table__init_fact_arg_infos_2_0)
MR_decl_static(ll_backend__fact_table__fill_in_fact_arg_infos_4_0)
MR_decl_static(ll_backend__fact_table__fact_table_mode_type_3_0)
MR_decl_static(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0)
MR_decl_static(ll_backend__fact_table__infer_determinism_pass_1_12_0)
MR_decl_static(ll_backend__fact_table__open_sort_files_6_0)
MR_decl_static(ll_backend__fact_table__close_sort_files_4_0)
MR_decl_static(ll_backend__fact_table__write_call_system_error_msg_4_0)
MR_decl_static(ll_backend__fact_table__infer_determinism_pass_2_6_0)
MR_decl_static(ll_backend__fact_table__split_key_to_arg_strings_2_0)
MR_decl_static(ll_backend__fact_table__remove_sort_file_escapes_3_0)
MR_decl_static(ll_backend__fact_table__get_input_args_list_5_0)
MR_decl_static(ll_backend__fact_table__get_output_args_list_3_0)
MR_decl_static(ll_backend__fact_table__read_sort_file_line_6_0)
MR_decl_static(ll_backend__fact_table__write_fact_table_data_6_0)
MR_decl_static(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0)
MR_decl_static(ll_backend__fact_table__calculate_hash_table_size_2_3_0)
MR_decl_static(ll_backend__fact_table__calculate_hash_table_size_3_0)
MR_decl_static(ll_backend__fact_table__get_free_hash_slot_2_4_0)
MR_decl_static(ll_backend__fact_table__hash_table_insert_2_6_0)
MR_decl_static(ll_backend__fact_table__fact_table_hash_2_4_0)
MR_decl_static(ll_backend__fact_table__hash_table_from_list_4_0)
MR_decl_static(ll_backend__fact_table__write_hash_table_2_5_0)
MR_decl_static(ll_backend__fact_table__get_hash_table_type_2_3_0)
MR_decl_static(ll_backend__fact_table__write_hash_table_6_0)
MR_decl_static(ll_backend__fact_table__hash_list_insert_many_7_0)
MR_decl_static(ll_backend__fact_table__build_hash_table_lower_levels_11_0)
MR_decl_static(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0)
MR_decl_static(ll_backend__fact_table__do_build_hash_table_13_0)
MR_decl_static(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0)
MR_decl_static(ll_backend__fact_table__top_level_collect_matching_facts_8_0)
MR_decl_static(ll_backend__fact_table__update_fact_map_4_0)
MR_decl_static(ll_backend__fact_table__build_hash_table_2_19_0)
MR_decl_static(ll_backend__fact_table__build_hash_table_17_0)
MR_decl_static(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0)
MR_decl_static(ll_backend__fact_table__write_fact_table_pointer_array_6_0)
MR_decl_static(ll_backend__fact_table__delete_temporary_file_3_0)
MR_decl_static(ll_backend__fact_table__open_output_handle_error_5_0)
MR_decl_static(ll_backend__fact_table__see_input_handle_error_5_0)
MR_decl_static(ll_backend__fact_table__write_primary_hash_table_16_0)
MR_decl_static(ll_backend__fact_table__write_secondary_hash_tables_11_0)
MR_decl_static(ll_backend__fact_table__write_fact_table_arrays_14_0)
MR_decl_static(ll_backend__fact_table__maybe_append_data_table_5_0)
MR_decl_static(ll_backend__fact_table__write_fact_table_numfacts_6_0)
MR_decl_static(ll_backend__fact_table__print_error_reports_3_0)
MR_decl_static(ll_backend__fact_table__fact_table_compile_facts_2_13_0)
MR_def_extern_entry(ll_backend__fact_table__fact_table_compile_facts_11_0)
MR_decl_static(ll_backend__fact_table__pragma_vars_to_names_string_2_0)
MR_decl_static(ll_backend__fact_table__generate_nondet_proc_code_5_0)
MR_decl_static(ll_backend__fact_table__generate_fact_lookup_code_7_0)
MR_decl_static(ll_backend__fact_table__generate_arg_input_code_7_0)
MR_decl_static(ll_backend__fact_table__generate_argument_vars_code_2_11_0)
MR_decl_static(ll_backend__fact_table__generate_argument_vars_code_9_0)
MR_decl_static(ll_backend__fact_table__generate_multidet_code_8_0)
MR_decl_static(ll_backend__fact_table__generate_cc_multi_code_2_5_0)
MR_decl_static(ll_backend__fact_table__generate_decl_code_3_0)
MR_decl_static(ll_backend__fact_table__generate_test_condition_code_8_0)
MR_decl_static(ll_backend__fact_table__generate_hash_lookup_code_13_0)
MR_decl_static(ll_backend__fact_table__generate_hash_int_code_10_0)
MR_decl_static(ll_backend__fact_table__generate_hash_string_code_10_0)
MR_decl_static(ll_backend__fact_table__generate_hash_code_9_0)
MR_decl_static(ll_backend__fact_table__generate_all_in_code_7_0)
MR_decl_static(ll_backend__fact_table__generate_semidet_in_out_code_7_0)
MR_decl_static(ll_backend__fact_table__generate_fact_test_code_6_0)
MR_decl_static(ll_backend__fact_table__generate_primary_nondet_code_8_0)
MR_decl_static(ll_backend__fact_table__generate_secondary_nondet_code_8_0)
MR_def_extern_entry(ll_backend__fact_table__fact_table_generate_c_code_11_0)
MR_decl_static(ll_backend__fact_table__print_error_report_3_0)
MR_decl_static(__Unify___ll_backend__fact_table__error_report_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__error_report_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__error_reports_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__error_reports_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__fact_arg_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__fact_arg_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__fact_arg_info_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__fact_arg_info_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__fact_result_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__fact_result_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__fact_table_mode_type_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__fact_table_mode_type_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__hash_entry_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__hash_entry_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__hash_index_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__hash_index_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__hash_table_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__hash_table_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__inferred_determinism_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__inferred_determinism_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__proc_stream_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__proc_stream_0_0)
MR_decl_static(__Unify___ll_backend__fact_table__sort_file_line_0_0)
MR_decl_static(__Compare___ll_backend__fact_table__sort_file_line_0_0)
MR_decl_static(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0)
MR_decl_static(ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1544__1_2_0)
MR_decl_static(ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__2954__1_2_0)

static const struct mercury_type_0 mercury_common_0[10] =
{
{
3,
MR_string_const("Type error in return value of function.", 39)
},
{
3,
MR_string_const("Error: enumeration types are not yet supported in fact tables.", 62)
},
{
3,
MR_string_const("Error: compound types are not supported in fact tables.", 55)
},
{
3,
MR_string_const("Error: non-ground term in fact.", 31)
},
{
3,
MR_string_const("Error: fact has wrong number of arguments.", 42)
},
{
3,
MR_string_const("Error: term is not a fact.", 26)
},
{
3,
MR_string_const("Error: invalid type in fact table: only \140string\', \140int\' and \140float\' types are allowed in fact tables.", 101)
},
{
3,
MR_string_const("Error: only \140in\' and \140out\' modes are currently supported in fact tables.", 72)
},
{
3,
MR_string_const("Error: mode list for procedure is empty.", 40)
},
{
3,
MR_string_const("An error occurred while concatenatingfact table output files.", 61)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_const_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_const_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_1 mercury_common_1[18] =
{
{
{
MR_TAG_COMMON(3,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, const)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, const)
}
},
{
{
MR_TAG_COMMON(3,0,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,7,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
};

static const struct mercury_type_2 mercury_common_2[12] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("", 0),
MR_TAG_COMMON(1,2,0)
},
{
MR_string_const("~", 1),
MR_TAG_COMMON(1,2,1)
},
{
MR_string_const("#include \"mercury_imp.h\"\n\n", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,2,3)
},
{
MR_string_const("*/\n", 3),
MR_TAG_COMMON(1,2,4)
},
{
MR_string_const("** Do not edit.\n", 16),
MR_TAG_COMMON(1,2,5)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,2,6)
},
{
MR_string_const(" = {\n", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("_fact_table_num_facts = ", 24),
MR_tbmkword(0, 0)
},
{
MR_string_const("_fact_table_num_facts", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("_fact_table", 11),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__check_fact_term_2_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_const_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__hash_table_from_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__build_hash_table_2_19_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_sort_file_line_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__generate_argument_vars_code_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__fact_table__check_fact_term_2_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,5),
MR_CTOR0_ADDR(term, const)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__fact_table__hash_table_from_list_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__fact_table__build_hash_table_2_19_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line),
MR_COMMON(1,11)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__fact_table__generate_argument_vars_code_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
};

MR_decl_entry(char__to_int_2_0);
static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(char__to_int_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1544__1_2_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(ll_backend__fact_table__print_error_report_3_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__2954__1_2_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
1
},
{
4
},
{
2
},
};

static const struct mercury_type_6 mercury_common_6[32] =
{
{
2147483647,
MR_tbmkword(0, 0)
},
{
1073741827,
MR_TAG_COMMON(1,6,0)
},
{
536870923,
MR_TAG_COMMON(1,6,1)
},
{
268435459,
MR_TAG_COMMON(1,6,2)
},
{
134217757,
MR_TAG_COMMON(1,6,3)
},
{
67108879,
MR_TAG_COMMON(1,6,4)
},
{
33555799,
MR_TAG_COMMON(1,6,5)
},
{
16777903,
MR_TAG_COMMON(1,6,6)
},
{
8388949,
MR_TAG_COMMON(1,6,7)
},
{
4194493,
MR_TAG_COMMON(1,6,8)
},
{
2097257,
MR_TAG_COMMON(1,6,9)
},
{
1048627,
MR_TAG_COMMON(1,6,10)
},
{
524309,
MR_TAG_COMMON(1,6,11)
},
{
262147,
MR_TAG_COMMON(1,6,12)
},
{
131101,
MR_TAG_COMMON(1,6,13)
},
{
65537,
MR_TAG_COMMON(1,6,14)
},
{
32771,
MR_TAG_COMMON(1,6,15)
},
{
16411,
MR_TAG_COMMON(1,6,16)
},
{
8209,
MR_TAG_COMMON(1,6,17)
},
{
4099,
MR_TAG_COMMON(1,6,18)
},
{
2053,
MR_TAG_COMMON(1,6,19)
},
{
1031,
MR_TAG_COMMON(1,6,20)
},
{
521,
MR_TAG_COMMON(1,6,21)
},
{
257,
MR_TAG_COMMON(1,6,22)
},
{
131,
MR_TAG_COMMON(1,6,23)
},
{
67,
MR_TAG_COMMON(1,6,24)
},
{
37,
MR_TAG_COMMON(1,6,25)
},
{
17,
MR_TAG_COMMON(1,6,26)
},
{
11,
MR_TAG_COMMON(1,6,27)
},
{
5,
MR_TAG_COMMON(1,6,28)
},
{
3,
MR_TAG_COMMON(1,6,29)
},
{
2,
MR_TAG_COMMON(1,6,30)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_string_const("cat", 3)
},
{
MR_string_const("", 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,14),
MR_TAG_COMMON(0,1,15)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,16),
MR_COMMON(1,17)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__print_error_reports_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__fact_table__print_error_reports_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(8,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__type_ctor_info_const_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_const_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_sort_file_line_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__type_ctor_info_const_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__type_ctor_info_const_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_sort_file_line_0_0 = {
	"sort_file_line",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_sort_file_line_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_sort_file_line_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_sort_file_line_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_sort_file_line_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_sort_file_line_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__sort_file_line_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__sort_file_line_0_0)),
	"ll_backend.fact_table",
	"sort_file_line",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_sort_file_line_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_sort_file_line_0 },
	1,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_sort_file_line_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_proc_stream_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_proc_stream_0_0 = {
	"proc_stream",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_proc_stream_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_proc_stream_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_proc_stream_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_proc_stream_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_proc_stream_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_proc_stream_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_proc_stream_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__proc_stream_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__proc_stream_0_0)),
	"ll_backend.fact_table",
	"proc_stream",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_proc_stream_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_proc_stream_0 },
	1,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_proc_stream_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_inferred_determinism_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0 = {
	"inferred",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_inferred_determinism_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1 = {
	"not_yet",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2 = {
	"error",
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

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1,
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_inferred_determinism_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2,
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0,
	&mercury_data_ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_inferred_determinism_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_inferred_determinism_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__inferred_determinism_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__inferred_determinism_0_0)),
	"ll_backend.fact_table",
	"inferred_determinism",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_inferred_determinism_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0 },
	3,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_inferred_determinism_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_hash_table_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_hash_table_0_0 = {
	"hash_table",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_hash_table_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_hash_table_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_table_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_table_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_hash_table_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_hash_table_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_hash_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_hash_table_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__hash_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__hash_table_0_0)),
	"ll_backend.fact_table",
	"hash_table",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_hash_table_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_table_0 },
	1,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_hash_table_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_hash_index_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_0 = {
	"fact",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_hash_index_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_hash_index_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_1 = {
	"hash_table",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_hash_index_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_hash_index_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_hash_index_0_1[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_index_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_hash_index_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_hash_index_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_hash_index_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_0,
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_hash_index_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__hash_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__hash_index_0_0)),
	"ll_backend.fact_table",
	"hash_index",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_hash_index_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_index_0 },
	2,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_hash_index_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_hash_entry_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_const_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_hash_entry_0_0 = {
	"hash_entry",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_hash_entry_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_entry_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_entry_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_hash_entry_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_hash_entry_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_hash_entry_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__hash_entry_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__hash_entry_0_0)),
	"ll_backend.fact_table",
	"hash_entry",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_hash_entry_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_hash_entry_0 },
	1,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_hash_entry_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0 = {
	"all_in",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1 = {
	"all_out",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2 = {
	"in_out",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3 = {
	"other",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4 = {
	"unknown",
	4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0[] = {
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0[] = {
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_fact_table_mode_type_0[] = {
	0,
	1,
	2,
	3,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__fact_table_mode_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__fact_table_mode_type_0_0)),
	"ll_backend.fact_table",
	"fact_table_mode_type",
	{ (void *)mercury_data_ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0 },
	{ (void *)mercury_data_ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0 },
	5,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_fact_table_mode_type_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_0 = {
	"ok",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_1 = {
	"error",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__fact_table__enum_value_ordered_fact_result_0[] = {
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_0,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__fact_table__enum_name_ordered_fact_result_0[] = {
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_1,
	&mercury_data_ll_backend__fact_table__enum_functor_desc_fact_result_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_fact_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_fact_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__fact_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__fact_result_0_0)),
	"ll_backend.fact_table",
	"fact_result",
	{ (void *)mercury_data_ll_backend__fact_table__enum_name_ordered_fact_result_0 },
	{ (void *)mercury_data_ll_backend__fact_table__enum_value_ordered_fact_result_0 },
	2,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_fact_result_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__fact_table__field_types_fact_arg_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0 = {
	"fact_arg_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__fact_table__field_types_fact_arg_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__fact_table__du_name_ordered_fact_arg_info_0[] = {
	&mercury_data_ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

const MR_Integer mercury_data_ll_backend__fact_table__functor_number_map_fact_arg_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__fact_arg_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__fact_arg_info_0_0)),
	"ll_backend.fact_table",
	"fact_arg_info",
	{ (void *)mercury_data_ll_backend__fact_table__du_name_ordered_fact_arg_info_0 },
	{ (void *)mercury_data_ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0 },
	1,
	4,
	mercury_data_ll_backend__fact_table__functor_number_map_fact_arg_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__fact_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__fact_arg_0_0)),
	"ll_backend.fact_table",
	"fact_arg",
	{ 0 },
	{ (void *)&mercury_data_term__type_ctor_info_const_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_format_component_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_error_reports_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__error_reports_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__error_reports_0_0)),
	"ll_backend.fact_table",
	"error_reports",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__fact_table__type_ctor_info_error_report_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__fact_table__error_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__fact_table__error_report_0_0)),
	"ll_backend.fact_table",
	"error_report",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__check_fact_term_2_15_0_1 = {
{
MR_PREDICATE,
"ll_backend.fact_table",
"ll_backend.fact_table",
"lambda_fact_table_m_455",
2,
0
},
"ll_backend.fact_table",
"fact_table.m",
453,
"d1;c17;t;c8;?;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__hash_table_from_list_4_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"to_int",
2,
0
},
"ll_backend.fact_table",
"fact_table.m",
2028,
"d1;c4;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__build_hash_table_2_19_0_1 = {
{
MR_PREDICATE,
"ll_backend.fact_table",
"ll_backend.fact_table",
"lambda_fact_table_m_1544",
2,
0
},
"ll_backend.fact_table",
"fact_table.m",
1543,
"d2;c22;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__print_error_reports_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.fact_table",
"ll_backend.fact_table",
"print_error_report",
3,
0
},
"ll_backend.fact_table",
"fact_table.m",
3366,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__fact_table__generate_argument_vars_code_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.fact_table",
"ll_backend.fact_table",
"lambda_fact_table_m_2954",
2,
0
},
"ll_backend.fact_table",
"fact_table.m",
2954,
"d1;c10;"
};


MR_BEGIN_MODULE(ll_backend__fact_table_module0)
	MR_init_entry1(ll_backend__fact_table__add_error_report_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__add_error_report_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module1)
	MR_init_entry1(ll_backend__fact_table__report_type_error_6_0);
	MR_init_label2(ll_backend__fact_table__report_type_error_6_0,17,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__report_type_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__report_type_error_6_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__report_type_error_6_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
MR_def_label(ll_backend__fact_table__report_type_error_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("Type error in argument %d.", 26);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__report_type_error_6_0_i5);
MR_def_label(ll_backend__fact_table__report_type_error_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module2)
	MR_init_entry1(ll_backend__fact_table__check_fact_type_and_mode_8_0);
	MR_init_label8(ll_backend__fact_table__check_fact_type_and_mode_8_0,93,3,8,10,11,18,25,26)
	MR_init_label2(ll_backend__fact_table__check_fact_type_and_mode_8_0,30,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__check_fact_type_and_mode_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i5);
	}
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(ll_backend__fact_table__check_fact_type_and_mode_8_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__check_fact_type_and_mode_8_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__check_fact_type_and_mode_8_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__check_fact_type_and_mode_8_0_i25));
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r7;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r6;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r7, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r6;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r7, 2);
	MR_r7 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r9 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (((MR_Integer) 0 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_r9;
	MR_r3 = MR_r7;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i93);
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r7, 2);
	MR_r7 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r9 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (((MR_Integer) 2 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_r9;
	MR_r3 = MR_r7;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i93);
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r7, 2);
	MR_r7 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r9 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i26);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_r9;
	MR_r3 = MR_r7;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__check_fact_type_and_mode_8_0_i93);
	}
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_r2 = MR_r7;
	MR_r3 = MR_r9;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(ll_backend__fact_table__report_type_error_6_0,
		ll_backend__fact_table__check_fact_type_and_mode_8_0_i30);
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__fact_table__check_fact_type_and_mode_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r6;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module3)
	MR_init_entry1(ll_backend__fact_table__key_from_chars_2_3_0);
	MR_init_label7(ll_backend__fact_table__key_from_chars_2_3_0,16,3,5,7,9,14,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__key_from_chars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i2);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i14);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,58)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 99;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i14);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,126)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 116;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i14);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 110;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i14);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__key_from_chars_2_3_0_i16);
	}
MR_def_label(ll_backend__fact_table__key_from_chars_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__string__int_to_base_string_2_0);
MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(fn__string__float_to_string_1_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(ll_backend__fact_table_module4)
	MR_init_entry1(ll_backend__fact_table__make_sort_file_key_3_0);
	MR_init_label8(ll_backend__fact_table__make_sort_file_key_3_0,44,5,11,13,15,16,17,18)
	MR_init_label7(ll_backend__fact_table__make_sort_file_key_3_0,20,21,9,22,23,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__make_sort_file_key_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__make_sort_file_key_3_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i5);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__make_sort_file_key_3_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__make_sort_file_key_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__make_sort_file_key_3_0_i4);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__fact_table__make_sort_file_key_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__make_sort_file_key_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__make_sort_file_key_3_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__make_sort_file_key_3_0_i20));
	}
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("make_key_part: enumerated types are not supported yet.", 54);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i9);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = (MR_Integer) 36;
	MR_np_call_localret_ent(fn__string__int_to_base_string_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i21);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i16);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__key_from_chars_2_3_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i17);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i18);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i21);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__float_to_string_1_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i21);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__fact_table__make_sort_file_key_3_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i22);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__fact_table__make_sort_file_key_3_0,
		ll_backend__fact_table__make_sort_file_key_3_0_i22);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__make_sort_file_key_3_0_i23);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__fact_table__make_sort_file_key_3_0_i44);
MR_def_label(ll_backend__fact_table__make_sort_file_key_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module5)
	MR_init_entry1(fn__ll_backend__fact_table__make_fact_data_string_1_0);
	MR_init_label8(fn__ll_backend__fact_table__make_fact_data_string_1_0,42,10,12,14,15,16,17,19)
	MR_init_label5(fn__ll_backend__fact_table__make_fact_data_string_1_0,20,8,21,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__fact_table__make_fact_data_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__fact_table__make_fact_data_string_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 2);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__ll_backend__fact_table__make_fact_data_string_1_0_i4);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__ll_backend__fact_table__make_fact_data_string_1_0_i4);
	}
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__fact_table__make_fact_data_string_1_0_i4);
	}
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__ll_backend__fact_table__make_fact_data_string_1_0_i10) MR_AND
		MR_LABEL_AP(fn__ll_backend__fact_table__make_fact_data_string_1_0_i12) MR_AND
		MR_LABEL_AP(fn__ll_backend__fact_table__make_fact_data_string_1_0_i14) MR_AND
		MR_LABEL_AP(fn__ll_backend__fact_table__make_fact_data_string_1_0_i19));
	}
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("make_key_part: enumerated types are not supported yet.", 54);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i8);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_r2 = (MR_Integer) 36;
	MR_np_call_localret_ent(fn__string__int_to_base_string_2_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i20);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r4, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i15);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__key_from_chars_2_3_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i16);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i17);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i20);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 0);
	MR_np_call_localret_ent(fn__string__float_to_string_1_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i20);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__fact_table__make_fact_data_string_1_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i21);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(fn__ll_backend__fact_table__make_fact_data_string_1_0,
		fn__ll_backend__fact_table__make_fact_data_string_1_0_i21);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(":", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__fact_table__make_fact_data_string_1_0_i42);
MR_def_label(fn__ll_backend__fact_table__make_fact_data_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(io__write_strings_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module6)
	MR_init_entry1(ll_backend__fact_table__write_sort_file_lines_9_0);
	MR_init_label8(ll_backend__fact_table__write_sort_file_lines_9_0,23,4,5,6,7,9,10,11)
	MR_init_label2(ll_backend__fact_table__write_sort_file_lines_9_0,12,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_sort_file_lines_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_sort_file_lines_9_0_i25);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i4);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i5);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i6);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__make_sort_file_key_3_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i7);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_sort_file_lines_9_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("~", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(io__write_strings_4_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i12);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, fact_arg_info);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i10);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__fact_table__make_fact_data_string_1_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i11);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("~", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("~", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(io__write_strings_4_0,
		ll_backend__fact_table__write_sort_file_lines_9_0_i12);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__fact_table__write_sort_file_lines_9_0_i23);
MR_def_label(ll_backend__fact_table__write_sort_file_lines_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_5_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module7)
	MR_init_entry1(ll_backend__fact_table__write_new_data_array_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_new_data_array_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("const struct %s_struct %s%d[] = {\n", 34);
	MR_np_tailcall_ent(io__format_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module8)
	MR_init_entry1(ll_backend__fact_table__write_closing_brace_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_closing_brace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);
MR_decl_entry(io__write_float_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module9)
	MR_init_entry1(ll_backend__fact_table__write_fact_args_4_0);
	MR_init_label8(ll_backend__fact_table__write_fact_args_4_0,26,6,8,9,11,12,13,14)
	MR_init_label6(ll_backend__fact_table__write_fact_args_4_0,15,17,18,19,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_args_4_0_i29);
	}
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__fact_table__write_fact_args_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__write_fact_args_4_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__write_fact_args_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__write_fact_args_4_0_i17));
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("write_fact_terms: unsupported type", 34);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__write_fact_args_4_0_i28);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(io__write_int_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i9);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i19);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(2, MR_r4, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i12);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_fact_args_4_0_i13);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__fact_table__write_fact_args_4_0_i14);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_fact_args_4_0_i15);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i19);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r4, 0);
	}
	MR_np_call_localret_ent(io__write_float_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i18);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_args_4_0_i19);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_args_4_0_i26);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_args_4_0_i26);
MR_def_label(ll_backend__fact_table__write_fact_args_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_int_option_4_0);
MR_decl_entry(fn__int__mod_2_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module10)
	MR_init_entry1(ll_backend__fact_table__write_fact_data_6_0);
	MR_init_label8(ll_backend__fact_table__write_fact_data_6_0,2,4,19,5,7,10,20,12)
	MR_init_label3(ll_backend__fact_table__write_fact_data_6_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_data_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 248;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i2);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__fact_table__write_fact_data_6_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_data_6_0_i20);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_data_6_0_i5);
	}
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i10);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i7);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("const struct %s_struct %s%d[] = {\n", 34);
	}
	MR_np_call_localret_ent(io__format_5_0,
		ll_backend__fact_table__write_fact_data_6_0_i19);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_data_6_0_i12);
	}
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t{", 2);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_data_6_0_i14);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%% Writing fact %d\n", 19);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i20);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i15);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_args_4_0,
		ll_backend__fact_table__write_fact_data_6_0_i16);
MR_def_label(ll_backend__fact_table__write_fact_data_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" },\n", 4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(ll_backend__fact_table_module11)
	MR_init_entry1(ll_backend__fact_table__check_fact_term_2_15_0);
	MR_init_label8(ll_backend__fact_table__check_fact_term_2_15_0,2,4,5,6,7,8,12,10)
	MR_init_label2(ll_backend__fact_table__check_fact_term_2_15_0,3,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__check_fact_term_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i2);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_2_15_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i4);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__fact_table__check_fact_type_and_mode_8_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i5);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i6);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i7);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__fact_table__write_sort_file_lines_9_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i8);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_2_15_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(9), 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_2,
		ll_backend__fact_table__check_fact_term_2_15_0_i12);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_2_15_0_i10);
	}
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_data_6_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i10);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("Expecting %d arguments, but fact has %d arguments.", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__check_fact_term_2_15_0_i16);
MR_def_label(ll_backend__fact_table__check_fact_term_2_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(11);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);
MR_decl_entry(io__get_line_number_3_0);
MR_decl_entry(io__input_stream_name_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module12)
	MR_init_entry1(ll_backend__fact_table__check_fact_term_14_0);
	MR_init_label8(ll_backend__fact_table__check_fact_term_14_0,4,5,11,18,9,20,21,6)
	MR_init_label4(ll_backend__fact_table__check_fact_term_14_0,3,26,27,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__check_fact_term_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_tempr2 = MR_r5;
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ll_backend__fact_table__check_fact_term_14_0_i4);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__unqualify_name_1_0,
		ll_backend__fact_table__check_fact_term_14_0_i5);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i6);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i11);
	}
	MR_r4 = MR_ctfield(0, MR_sv(10), 0);
	if ((strcmp((char *)MR_r4, (char *)MR_r1) != 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r6 = MR_sv(12);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__fact_table__check_fact_term_2_15_0);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(0, MR_sv(10), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_tempr5 = MR_sv(11);
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__check_fact_term_14_0_i9);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__fact_table__check_fact_term_14_0_i18);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r6 = MR_sv(12);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__fact_table__check_fact_term_2_15_0);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		ll_backend__fact_table__check_fact_term_14_0_i20);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
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
	MR_r1 = (MR_Word) MR_string_const("Error: invalid clause for %s \140%s/%d\'.", 37);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__check_fact_term_14_0_i21);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__add_error_report_4_0,
		ll_backend__fact_table__check_fact_term_14_0_i28);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__fact_table__add_error_report_4_0,
		ll_backend__fact_table__check_fact_term_14_0_i28);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r10;
	MR_np_call_localret_ent(io__get_line_number_3_0,
		ll_backend__fact_table__check_fact_term_14_0_i26);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_name_3_0,
		ll_backend__fact_table__check_fact_term_14_0_i27);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__add_error_report_4_0,
		ll_backend__fact_table__check_fact_term_14_0_i28);
MR_def_label(ll_backend__fact_table__check_fact_term_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parser__read_term_3_0);
MR_decl_entry(term__context_init_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module13)
	MR_init_entry1(ll_backend__fact_table__compile_facts_13_0);
	MR_init_label8(ll_backend__fact_table__compile_facts_13_0,39,2,8,9,11,12,24,14)
	MR_init_label6(ll_backend__fact_table__compile_facts_13_0,16,17,19,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__compile_facts_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__compile_facts_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parser__read_term_3_0,
		ll_backend__fact_table__compile_facts_13_0_i2);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = (MR_Integer) 248;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		ll_backend__fact_table__compile_facts_13_0_i9);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__fact_table__compile_facts_13_0_i11);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i24);
	}
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__fact_table__compile_facts_13_0_i12);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i14);
	}
MR_def_label(ll_backend__fact_table__compile_facts_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i16);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%% Read fact %d\n", 16);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__compile_facts_13_0_i24);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_np_call_localret_ent(ll_backend__fact_table__check_fact_term_14_0,
		ll_backend__fact_table__compile_facts_13_0_i17);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = ((MR_Integer) MR_sv(9) + (MR_Integer) 1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i39);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__compile_facts_13_0_i39);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(io__input_stream_name_3_0,
		ll_backend__fact_table__compile_facts_13_0_i6);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(term__context_init_3_0,
		ll_backend__fact_table__compile_facts_13_0_i7);
MR_def_label(ll_backend__fact_table__compile_facts_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(10);
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module14)
	MR_init_entry1(fn__ll_backend__fact_table__fact_table_file_header_1_0);
	MR_init_label1(fn__ll_backend__fact_table__fact_table_file_header_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__fact_table__fact_table_file_header_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		fn__ll_backend__fact_table__fact_table_file_header_1_0_i2);
MR_def_label(fn__ll_backend__fact_table__fact_table_file_header_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** by the Mercury compiler, version ", 36);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** Automatically generated from \140", 33);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("/*\n", 3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module15)
	MR_init_entry1(ll_backend__fact_table__create_fact_table_struct_6_0);
	MR_init_label8(ll_backend__fact_table__create_fact_table_struct_6_0,4,8,9,7,13,14,5,3)
	MR_init_label1(ll_backend__fact_table__create_fact_table_struct_6_0,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__create_fact_table_struct_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localcall_lab(ll_backend__fact_table__create_fact_table_struct_6_0,
		ll_backend__fact_table__create_fact_table_struct_6_0_i4);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i5);
	}
	MR_r4 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i8);
	}
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i7);
	}
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i9);
	}
	MR_r3 = MR_ctfield(0, MR_sv(3), 2);
	MR_r4 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i7);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i5);
	}
	MR_r3 = MR_ctfield(0, MR_sv(3), 2);
	MR_r4 = (MR_Word) MR_string_const("MR_ConstString", 14);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_struct_6_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t%s V_%d;\n", 10);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__create_fact_table_struct_6_0_i13);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__create_fact_table_struct_6_0_i14);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__fact_table__create_fact_table_struct_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module16)
	MR_init_entry1(ll_backend__fact_table__create_fact_table_header_7_0);
	MR_init_label8(ll_backend__fact_table__create_fact_table_header_7_0,2,3,4,5,6,7,9,10)
	MR_init_label3(ll_backend__fact_table__create_fact_table_header_7_0,11,12,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__create_fact_table_header_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i2);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_fact_table", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i3);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i4);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i5);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__create_fact_table_struct_6_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i6);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__create_fact_table_header_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_s *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_f *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_i {\n    MR_Integer size;" "                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_i *table;   /* the actual table */\n};\n\n/* hash table for string keys */\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        /* lookup key */\n    const MR_Word   *index;     /* index into fact table data array or       */\n                                /* pointer to hash table for next argument   */\n#if TAGBITS < 2\n    short type;                 /* 0 if entry empty,                         */\n      " "                          /* 1 if entry is a pointer to the data table */\n                                /* 2 if entry is a pointer to another        */\n                                /*   hash table                              */\n#endif\n    int next;                   /* location of next entry with the same hash */\n                                /* value */\n};\n\n/* hash table for float keys */\nstruct MR_fact_table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    sh" "ort           type;\n#endif\n    int             next;\n};\n\n/* hash table for int keys */\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_mktag(t), MR_mkbody(i))\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)             " "   MR_tag((MR_Word)((p).index))\n    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)                   MR_body(w, MR_tag(w))\n#else\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         ((const MR_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)            (w)\n    #define MR_FACT_TABLE_" "HASH_POINTER(w)          (w)\n#endif\n\n#endif /* not MERCURY_FACT_TABLE_HASH_TABLES */\n", 2645);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__create_fact_table_header_7_0_i14);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i9);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_struct {\n", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i10);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i11);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__create_fact_table_header_7_0_i12);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_s *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_f *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_i {\n    MR_Integer size;" "                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_i *table;   /* the actual table */\n};\n\n/* hash table for string keys */\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        /* lookup key */\n    const MR_Word   *index;     /* index into fact table data array or       */\n                                /* pointer to hash table for next argument   */\n#if TAGBITS < 2\n    short type;                 /* 0 if entry empty,                         */\n      " "                          /* 1 if entry is a pointer to the data table */\n                                /* 2 if entry is a pointer to another        */\n                                /*   hash table                              */\n#endif\n    int next;                   /* location of next entry with the same hash */\n                                /* value */\n};\n\n/* hash table for float keys */\nstruct MR_fact_table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    sh" "ort           type;\n#endif\n    int             next;\n};\n\n/* hash table for int keys */\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_mktag(t), MR_mkbody(i))\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)             " "   MR_tag((MR_Word)((p).index))\n    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)                   MR_body(w, MR_tag(w))\n#else\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         ((const MR_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)            (w)\n    #define MR_FACT_TABLE_" "HASH_POINTER(w)          (w)\n#endif\n\n#endif /* not MERCURY_FACT_TABLE_HASH_TABLES */\n", 2645);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__create_fact_table_header_7_0_i14);
MR_def_label(ll_backend__fact_table__create_fact_table_header_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module17)
	MR_init_entry1(ll_backend__fact_table__init_fact_arg_infos_2_0);
	MR_init_label3(ll_backend__fact_table__init_fact_arg_infos_2_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__init_fact_arg_infos_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__init_fact_arg_infos_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__fact_table__init_fact_arg_infos_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__fact_table__init_fact_arg_infos_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(ll_backend__fact_table__init_fact_arg_infos_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_fully_output_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module18)
	MR_init_entry1(ll_backend__fact_table__fill_in_fact_arg_infos_4_0);
	MR_init_label8(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,5,3,11,9,15,13,19,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__fill_in_fact_arg_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("fill_in_fact_arg_infos: too many fact_arg_infos", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r2;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i11);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,
		ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i19);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_output_2_0,
		ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i15);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,
		ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i19);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,
		ll_backend__fact_table__fill_in_fact_arg_infos_4_0_i19);
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("fill_in_fact_arg_infos: too many argmodes", 41);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module19)
	MR_init_entry1(ll_backend__fact_table__fact_table_mode_type_3_0);
	MR_init_label8(ll_backend__fact_table__fact_table_mode_type_3_0,55,6,4,10,8,13,14,16)
	MR_init_label3(ll_backend__fact_table__fact_table_mode_type_3_0,17,19,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__fact_table_mode_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i55);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__fact_table_mode_type_3_0_i6);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i13);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_output_2_0,
		ll_backend__fact_table__fact_table_mode_type_3_0_i10);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i13);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = (MR_Integer) 3;
	}
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i14);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__fact_table__fact_table_mode_type_3_0,
		ll_backend__fact_table__fact_table_mode_type_3_0_i16);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i19);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_mode_type_3_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__fact_table__fact_table_mode_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module20)
	MR_init_entry1(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0);
	MR_init_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,4,5,6,7,9,10,11,15)
	MR_init_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,14,12,18,19,20,22,23,24)
	MR_init_label8(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,8,27,28,25,30,32,33,34)
	MR_init_label1(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i4);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i5);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__fact_table__fill_in_fact_arg_infos_4_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i6);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__fact_table__fact_table_mode_type_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i7);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i22));
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 1;
	MR_sv(10) = MR_sv(5);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(8) = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i8);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i11);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i12);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i15);
	}
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i14);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i12);
	}
	MR_r2 = MR_sv(8);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_sv(8) = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(10) = MR_sv(5);
	MR_sv(5) = (MR_Integer) 1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i8);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(10) = MR_sv(5);
	MR_sv(5) = (MR_Integer) 1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i8);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Integer) 1;
	MR_sv(10) = MR_sv(5);
	MR_sv(5) = (MR_Integer) 1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i8);
	}
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i20);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__add_error_report_4_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i24);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i23);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__add_error_report_4_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i24);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tempr1;
	}
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i25);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i27);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i28);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_localcall_lab(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i30);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_localcall_lab(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i30);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r7;
	MR_r2 = MR_r5;
	MR_sv(7) = MR_r6;
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i33);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r7;
	MR_r2 = MR_r5;
	MR_sv(7) = MR_r6;
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i33);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__fact_table__infer_proc_determinism_pass_1_13_0_i34);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module21)
	MR_init_entry1(ll_backend__fact_table__infer_determinism_pass_1_12_0);
	MR_init_label8(ll_backend__fact_table__infer_determinism_pass_1_12_0,2,3,6,7,8,4,9,11)
	MR_init_label2(ll_backend__fact_table__infer_determinism_pass_1_12_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__infer_determinism_pass_1_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i2);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i3);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_1_12_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i6);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i7);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,7)
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
	MR_r1 = (MR_Word) MR_string_const("Error: no modes declared for fact table \140%s/%d\'.\n", 49);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i8);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__infer_proc_determinism_pass_1_13_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i9);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_1_12_0_i11);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i12);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i12);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		ll_backend__fact_table__infer_determinism_pass_1_12_0_i13);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_1_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__make_temp_3_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module22)
	MR_init_entry1(ll_backend__fact_table__open_sort_files_6_0);
	MR_init_label7(ll_backend__fact_table__open_sort_files_6_0,22,4,5,8,7,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__open_sort_files_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__open_sort_files_6_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(io__make_temp_3_0,
		ll_backend__fact_table__open_sort_files_6_0_i4);
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		ll_backend__fact_table__open_sort_files_6_0_i5);
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__open_sort_files_6_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__fact_table__open_sort_files_6_0,
		ll_backend__fact_table__open_sort_files_6_0_i8);
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__open_sort_files_6_0_i9);
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140%s\' for output: %s.", 39);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__open_sort_files_6_0_i10);
MR_def_label(ll_backend__fact_table__open_sort_files_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_name_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module23)
	MR_init_entry1(ll_backend__fact_table__close_sort_files_4_0);
	MR_init_label4(ll_backend__fact_table__close_sort_files_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__close_sort_files_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__close_sort_files_4_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(io__output_stream_name_4_0,
		ll_backend__fact_table__close_sort_files_4_0_i4);
MR_def_label(ll_backend__fact_table__close_sort_files_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__fact_table__close_sort_files_4_0_i5);
MR_def_label(ll_backend__fact_table__close_sort_files_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__fact_table__close_sort_files_4_0,
		ll_backend__fact_table__close_sort_files_4_0_i6);
MR_def_label(ll_backend__fact_table__close_sort_files_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__fact_table__close_sort_files_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_plain_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module24)
	MR_init_entry1(ll_backend__fact_table__write_call_system_error_msg_4_0);
	MR_init_label4(ll_backend__fact_table__write_call_system_error_msg_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_call_system_error_msg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__write_call_system_error_msg_4_0_i2);
MR_def_label(ll_backend__fact_table__write_call_system_error_msg_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		ll_backend__fact_table__write_call_system_error_msg_4_0_i3);
MR_def_label(ll_backend__fact_table__write_call_system_error_msg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s: error executing system command \140%s:", 39);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_call_system_error_msg_4_0_i4);
MR_def_label(ll_backend__fact_table__write_call_system_error_msg_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__write_call_system_error_msg_4_0_i5);
MR_def_label(ll_backend__fact_table__write_call_system_error_msg_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(hlds__passes_aux__make_command_string_3_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(io__call_system_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module25)
	MR_init_entry1(ll_backend__fact_table__infer_determinism_pass_2_6_0);
	MR_init_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0,77,4,5,6,7,8,9,10)
	MR_init_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0,11,12,18,17,16,23,27,26)
	MR_init_label8(ll_backend__fact_table__infer_determinism_pass_2_6_0,24,22,30,31,32,14,36,37)
	MR_init_label2(ll_backend__fact_table__infer_determinism_pass_2_6_0,38,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__infer_determinism_pass_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i4);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("LC_ALL=C sort -o %s %s && cut -d\'~\' -f1 %s | LC_ALL=C sort -cu >/dev/null 2>&1", 78);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i5);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__passes_aux__make_command_string_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i6);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i7);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Invoking system command \140", 27);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i8);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i9);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i10);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__call_system_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i11);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i12);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i18);
	}
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i17);
	}
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i16);
	}
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_r4;
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i37);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i23);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i24);
	}
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i27);
	}
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i26);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,5)) {
		MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i24);
	}
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i37);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i37);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i30);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%s: an error occurred in the \140sort\' program during fact table determinism inference.", 84);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i31);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i32);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i36);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sort", 4);
	MR_r2 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(ll_backend__fact_table__write_call_system_error_msg_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i36);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i37);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__fact_table__infer_determinism_pass_2_6_0_i38);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__infer_determinism_pass_2_6_0_i77);
MR_def_label(ll_backend__fact_table__infer_determinism_pass_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(string__first_char_3_3);

MR_BEGIN_MODULE(ll_backend__fact_table_module26)
	MR_init_entry1(ll_backend__fact_table__split_key_to_arg_strings_2_0);
	MR_init_label6(ll_backend__fact_table__split_key_to_arg_strings_2_0,28,5,7,8,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__split_key_to_arg_strings_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__split_key_to_arg_strings_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__fact_table__split_key_to_arg_strings_2_0_i5);
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__split_key_to_arg_strings_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__split_4_0,
		ll_backend__fact_table__split_key_to_arg_strings_2_0_i7);
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		ll_backend__fact_table__split_key_to_arg_strings_2_0_i8);
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__split_key_to_arg_strings_2_0_i4);
	}
	MR_r1 = MR_r3;
	MR_np_localcall_lab(ll_backend__fact_table__split_key_to_arg_strings_2_0,
		ll_backend__fact_table__split_key_to_arg_strings_2_0_i10);
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__split_key_to_arg_strings_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("split_key_to_arg_strings: sort file key format is incorrect", 59);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module27)
	MR_init_entry1(ll_backend__fact_table__remove_sort_file_escapes_3_0);
	MR_init_label8(ll_backend__fact_table__remove_sort_file_escapes_3_0,61,3,8,10,12,14,67,7)
	MR_init_label1(ll_backend__fact_table__remove_sort_file_escapes_3_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__remove_sort_file_escapes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i4);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i7);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
	}
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,99)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
	}
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,116)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 126;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
	}
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,110)) {
		MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
	}
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("remove_sort_file_escapes: something went wrong", 46);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__remove_sort_file_escapes_3_0_i67);
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("remove_sort_file_escapes: something went wrong", 46);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__remove_sort_file_escapes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__fact_table__remove_sort_file_escapes_3_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__base_string_to_int_3_0);
MR_decl_entry(string__to_float_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module28)
	MR_init_entry1(ll_backend__fact_table__get_input_args_list_5_0);
	MR_init_label8(ll_backend__fact_table__get_input_args_list_5_0,101,5,3,8,12,20,19,16)
	MR_init_label8(ll_backend__fact_table__get_input_args_list_5_0,27,28,29,30,24,36,34,31)
	MR_init_label4(ll_backend__fact_table__get_input_args_list_5_0,43,44,15,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__get_input_args_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_input_args_list: too many argmodes", 38);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_input_args_list: too many fact_arg_infos", 44);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i12);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i10);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 0);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i16);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i16);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 36;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		ll_backend__fact_table__get_input_args_list_5_0_i20);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_input_args_list_5_0,
		ll_backend__fact_table__get_input_args_list_5_0_i44);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: could not convert string to int", 58);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i43);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i24);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i27);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__remove_sort_file_escapes_3_0,
		ll_backend__fact_table__get_input_args_list_5_0_i28);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i29);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i30);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_input_args_list_5_0,
		ll_backend__fact_table__get_input_args_list_5_0_i44);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i31);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__to_float_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i36);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_input_args_list_5_0,
		ll_backend__fact_table__get_input_args_list_5_0_i44);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: could not convert string to float", 60);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i43);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: unsupported type", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_input_args_list_5_0_i43);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__fact_table__get_input_args_list_5_0,
		ll_backend__fact_table__get_input_args_list_5_0_i44);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_input_args_list: not enough ArgStrings", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__get_input_args_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__fact_table__get_input_args_list_5_0_i101);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module29)
	MR_init_entry1(ll_backend__fact_table__get_output_args_list_3_0);
	MR_init_label8(ll_backend__fact_table__get_output_args_list_3_0,85,3,12,11,8,19,20,21)
	MR_init_label8(ll_backend__fact_table__get_output_args_list_3_0,22,16,28,27,23,35,36,7)
	MR_init_label1(ll_backend__fact_table__get_output_args_list_3_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__get_output_args_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i7);
	}
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i8);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i8);
	}
	MR_r1 = (MR_Integer) 36;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i12);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_output_args_list_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i36);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: could not convert string to int", 58);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i35);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r5, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i16);
	}
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i19);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__remove_sort_file_escapes_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i20);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i21);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i22);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_output_args_list_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i36);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r5, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i23);
	}
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(string__to_float_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i28);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__fact_table__get_output_args_list_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i36);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: could not convert string to float", 60);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i35);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convert_key_string_to_arg: unsupported type", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__get_output_args_list_3_0_i35);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__fact_table__get_output_args_list_3_0,
		ll_backend__fact_table__get_output_args_list_3_0_i36);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_output_args_list: not enough ArgStrings", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__get_output_args_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__fact_table__get_output_args_list_3_0_i85);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_line_3_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module30)
	MR_init_entry1(ll_backend__fact_table__read_sort_file_line_6_0);
	MR_init_label8(ll_backend__fact_table__read_sort_file_line_6_0,2,37,30,31,32,33,34,5)
	MR_init_label8(ll_backend__fact_table__read_sort_file_line_6_0,6,8,10,11,13,15,16,18)
	MR_init_label7(ll_backend__fact_table__read_sort_file_line_6_0,20,22,23,24,26,27,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__read_sort_file_line_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__read_line_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i2);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i30);
	}
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i31);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_name_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i32);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Error reading file \140%s\':", 24);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i33);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i34);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i37);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i6);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("~", 1);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i8);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__split_4_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i10);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		ll_backend__fact_table__read_sort_file_line_6_0_i11);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("~", 1);
	}
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i13);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__split_4_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i15);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		ll_backend__fact_table__read_sort_file_line_6_0_i16);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i18);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i20);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(ll_backend__fact_table__split_key_to_arg_strings_2_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i22);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__get_input_args_list_5_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i23);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__split_key_to_arg_strings_2_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i24);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__read_sort_file_line_6_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__fact_table__get_output_args_list_3_0,
		ll_backend__fact_table__read_sort_file_line_6_0_i27);
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__fact_table__read_sort_file_line_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("sort file format incorrect", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module31)
	MR_init_entry1(ll_backend__fact_table__write_fact_table_data_6_0);
	MR_init_label8(ll_backend__fact_table__write_fact_table_data_6_0,32,4,6,23,7,9,12,24)
	MR_init_label6(ll_backend__fact_table__write_fact_table_data_6_0,14,16,17,18,19,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_table_data_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 248;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i6);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i24);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i7);
	}
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i12);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i9);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("const struct %s_struct %s%d[] = {\n", 34);
	}
	MR_np_call_localret_ent(io__format_5_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i23);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i14);
	}
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t{", 2);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i16);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%% Writing fact %d\n", 19);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i24);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i17);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_args_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i18);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" },\n", 4);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_table_data_6_0_i19);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_data_6_0_i32);
MR_def_label(ll_backend__fact_table__write_fact_table_data_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__drop_3_0);
MR_decl_entry(__Unify___term__const_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module32)
	MR_init_entry1(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0);
	MR_init_label7(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,44,3,5,8,13,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i5);
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i4);
	}
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i8);
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i13);
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0_i44);
	}
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("lower_level_collect_matching_facts: not enough input args", 57);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module33)
	MR_init_entry1(ll_backend__fact_table__calculate_hash_table_size_2_3_0);
	MR_init_label2(ll_backend__fact_table__calculate_hash_table_size_2_3_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__calculate_hash_table_size_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_2_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("hash table too large (max size 2147483647)", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_2_3_0_i5);
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_localtailcall(ll_backend__fact_table__calculate_hash_table_size_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module34)
	MR_init_entry1(ll_backend__fact_table__calculate_hash_table_size_3_0);
	MR_init_label8(ll_backend__fact_table__calculate_hash_table_size_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__fact_table__calculate_hash_table_size_3_0,10,11,12,13,14,15,16,17)
	MR_init_label2(ll_backend__fact_table__calculate_hash_table_size_3_0,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__calculate_hash_table_size_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 249;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__fact_table__calculate_hash_table_size_3_0_i2);
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,31);
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 * (MR_Integer) 100);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		ll_backend__fact_table__calculate_hash_table_size_3_0_i3);
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,30);
	if (((MR_Integer) 2 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i4);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i5);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i6);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i7);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i8);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i9);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i10);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i11);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i12);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i13);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i14);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i15);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i16);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i17);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i18);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__calculate_hash_table_size_3_0_i19);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__fact_table__calculate_hash_table_size_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__fact_table__calculate_hash_table_size_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module35)
	MR_init_entry1(ll_backend__fact_table__get_free_hash_slot_2_4_0);
	MR_init_label4(ll_backend__fact_table__get_free_hash_slot_2_4_0,13,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__get_free_hash_slot_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__get_free_hash_slot_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__fact_table__get_free_hash_slot_2_4_0_i2);
MR_def_label(ll_backend__fact_table__get_free_hash_slot_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__get_free_hash_slot_2_4_0_i4);
MR_def_label(ll_backend__fact_table__get_free_hash_slot_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_free_hash_slot_2_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__fact_table__get_free_hash_slot_2_4_0_i13);
MR_def_label(ll_backend__fact_table__get_free_hash_slot_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module36)
	MR_init_entry1(ll_backend__fact_table__hash_table_insert_2_6_0);
	MR_init_label7(ll_backend__fact_table__hash_table_insert_2_6_0,23,3,7,8,9,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__hash_table_insert_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__hash_table_insert_2_6_0_i3);
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_insert_2_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_insert_2_6_0_i5);
	}
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__get_free_hash_slot_2_4_0,
		ll_backend__fact_table__hash_table_insert_2_6_0_i7);
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) -1;
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__fact_table__hash_table_insert_2_6_0_i8);
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__fact_table__hash_table_insert_2_6_0_i9);
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__fact_table__hash_table_insert_2_6_0_i23);
MR_def_label(ll_backend__fact_table__hash_table_insert_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("hash_table_insert_2: hash table entry empty", 43);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module37)
	MR_init_entry1(ll_backend__fact_table__fact_table_hash_2_4_0);
	MR_init_label3(ll_backend__fact_table__fact_table_hash_2_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__fact_table_hash_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__fact_table_hash_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_hash_2_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_ctfield(1, MR_tempr1, 0) + ((MR_Integer) 31 * (MR_Integer) MR_r3));
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__fact_table__fact_table_hash_2_4_0_i4);
MR_def_label(ll_backend__fact_table__fact_table_hash_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__fact_table__fact_table_hash_2_4_0_i11);
MR_def_label(ll_backend__fact_table__fact_table_hash_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(int__abs_2_0);
MR_decl_entry(fn__float__hash_1_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module38)
	MR_init_entry1(ll_backend__fact_table__hash_table_from_list_4_0);
	MR_init_label8(ll_backend__fact_table__hash_table_from_list_4_0,48,6,7,4,8,13,14,11)
	MR_init_label7(ll_backend__fact_table__hash_table_from_list_4_0,18,19,21,23,20,24,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__hash_table_from_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i6);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i7);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i18);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(int__abs_2_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i14);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_sv(4), 0);
	MR_np_call_localret_ent(fn__float__hash_1_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i13);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__abs_2_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i14);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i18);
	}
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("fact_table_hash: unsupported type in key", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i18);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__fact_table__fact_table_hash_2_4_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i19);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i21);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i20);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__hash_table_insert_2_6_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i23);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i48);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) -1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__fact_table__hash_table_from_list_4_0_i24);
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__fact_table__hash_table_from_list_4_0_i48);
	}
MR_def_label(ll_backend__fact_table__hash_table_from_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__write_float_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module39)
	MR_init_entry1(ll_backend__fact_table__write_hash_table_2_5_0);
	MR_init_label8(ll_backend__fact_table__write_hash_table_2_5_0,57,3,5,9,10,7,12,15)
	MR_init_label7(ll_backend__fact_table__write_hash_table_2_5_0,21,23,25,4,27,29,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_hash_table_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i59);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\t{ ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i3);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i5);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i7);
	}
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i9);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i10);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i21);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i12);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i21);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i15);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(io__write_float_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i21);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("write_hash_table: unsupported type", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i21);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_sv(4), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const(", MR_FACT_TABLE_MAKE_TAGGED_INDEX(%d, 1), ", 42);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i25);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_sv(4);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const(", MR_FACT_TABLE_MAKE_TAGGED_POINTER(&%s%d, 2), ", 47);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i25);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i27);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0, MR_FACT_TABLE_MAKE_TAGGED_POINTER(NULL, 0), -1 ", 50);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i27);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_2_5_0_i29);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_2_5_0_i57);
MR_def_label(ll_backend__fact_table__write_hash_table_2_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module40)
	MR_init_entry1(ll_backend__fact_table__get_hash_table_type_2_3_0);
	MR_init_label7(ll_backend__fact_table__get_hash_table_type_2_3_0,41,3,5,7,9,11,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__get_hash_table_type_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__get_hash_table_type_2_3_0_i3);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i2);
	}
	MR_r3 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i5);
	}
	MR_r1 = (MR_Integer) 115;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i7);
	}
	MR_r1 = (MR_Integer) 105;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i9);
	}
	MR_r1 = (MR_Integer) 102;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i11);
	}
	MR_r1 = (MR_Integer) 97;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_hash_table_type: invalid term", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__get_hash_table_type_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__fact_table__get_hash_table_type_2_3_0_i41);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module41)
	MR_init_entry1(ll_backend__fact_table__write_hash_table_6_0);
	MR_init_label8(ll_backend__fact_table__write_hash_table_6_0,3,2,6,7,8,9,10,11)
	MR_init_label2(ll_backend__fact_table__write_hash_table_6_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_hash_table_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		ll_backend__fact_table__write_hash_table_6_0_i3);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_hash_table_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_has_table_type: empty hash table", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__write_hash_table_6_0_i7);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__fact_table__get_hash_table_type_2_3_0,
		ll_backend__fact_table__write_hash_table_6_0_i6);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_sv(7) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_sv(8) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("struct MR_fact_table_hash_entry_%c %s%d_data[]", 46);
	}
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_hash_table_6_0_i8);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__fact_table__write_hash_table_6_0_i9);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		ll_backend__fact_table__write_hash_table_6_0_i10);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__write_hash_table_2_5_0,
		ll_backend__fact_table__write_hash_table_6_0_i11);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_hash_table_6_0_i12);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\n\nstruct MR_fact_table_hash_table_%c %s%d = {\n    %d,\n    %s%d_data\n};\n", 71);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ll_backend__fact_table__write_hash_table_6_0_i13);
MR_def_label(ll_backend__fact_table__write_hash_table_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module42)
	MR_init_entry1(ll_backend__fact_table__hash_list_insert_many_7_0);
	MR_init_label7(ll_backend__fact_table__hash_list_insert_many_7_0,31,5,4,9,12,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__hash_list_insert_many_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__fact_table__hash_list_insert_many_7_0_i5);
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i4);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i9);
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("fact_get_arg_and_index: not enough input args", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__hash_list_insert_many_7_0_i9);
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i11);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__hash_list_insert_many_7_0_i12);
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i31);
	}
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr4;
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__hash_list_insert_many_7_0_i31);
	}
MR_def_label(ll_backend__fact_table__hash_list_insert_many_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module43)
	MR_init_entry1(ll_backend__fact_table__build_hash_table_lower_levels_11_0);
	MR_init_label7(ll_backend__fact_table__build_hash_table_lower_levels_11_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__build_hash_table_lower_levels_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i2);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i3);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i4);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__calculate_hash_table_size_3_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i5);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i6);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__hash_table_from_list_4_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i7);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__fact_table__write_hash_table_6_0,
		ll_backend__fact_table__build_hash_table_lower_levels_11_0_i8);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module44)
	MR_init_entry1(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0);
	MR_init_label6(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,14,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__lower_level_collect_matching_facts_2_6_0,
		ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i4);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i5);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__do_build_hash_table_13_0,
		ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i6);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i7);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0_i14);
MR_def_label(ll_backend__fact_table__build_hash_table_lower_levels_2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module45)
	MR_init_entry1(ll_backend__fact_table__do_build_hash_table_13_0);
	MR_init_label8(ll_backend__fact_table__do_build_hash_table_13_0,61,6,5,10,13,12,11,14)
	MR_init_label5(ll_backend__fact_table__do_build_hash_table_13_0,17,19,16,22,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__do_build_hash_table_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i61);
	}
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("do_build_hash_table: no facts", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i6);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i5);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i10);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("fact_get_arg_and_index: not enough input args", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i10);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i12);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i13);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i11);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(9) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = ((MR_Integer) MR_sv(9) + (MR_Integer) 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i17);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(11) + (MR_Integer) 1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__fact_table__build_hash_table_lower_levels_11_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i19);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(12);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__do_build_hash_table_13_0_i20);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__fact_table__hash_list_insert_many_7_0,
		ll_backend__fact_table__do_build_hash_table_13_0_i22);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__fact_table__do_build_hash_table_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(12);
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module46)
	MR_init_entry1(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0);
	MR_init_label6(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,33,2,4,10,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__read_sort_file_line_6_0,
		ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i2);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i4);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i5);
	}
	MR_tempr2 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i5);
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i10);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0_i33);
	}
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("top_level_collect_matching_facts: no input args", 47);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module47)
	MR_init_entry1(ll_backend__fact_table__top_level_collect_matching_facts_8_0);
	MR_init_label2(ll_backend__fact_table__top_level_collect_matching_facts_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__top_level_collect_matching_facts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__top_level_collect_matching_facts_2_9_0,
		ll_backend__fact_table__top_level_collect_matching_facts_8_0_i2);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__top_level_collect_matching_facts_8_0_i3);
MR_def_label(ll_backend__fact_table__top_level_collect_matching_facts_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module48)
	MR_init_entry1(ll_backend__fact_table__update_fact_map_4_0);
	MR_init_label3(ll_backend__fact_table__update_fact_map_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__update_fact_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__update_fact_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__update_fact_map_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__fact_table__update_fact_map_4_0_i4);
MR_def_label(ll_backend__fact_table__update_fact_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__fact_table__update_fact_map_4_0_i11);
MR_def_label(ll_backend__fact_table__update_fact_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module49)
	MR_init_entry1(ll_backend__fact_table__build_hash_table_2_19_0);
	MR_init_label8(ll_backend__fact_table__build_hash_table_2_19_0,28,4,6,7,5,10,11,8)
	MR_init_label3(ll_backend__fact_table__build_hash_table_2_19_0,12,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__build_hash_table_2_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_2_19_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_tempr3 = MR_r8;
	MR_sv(8) = MR_tempr3;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r15;
	MR_r1 = MR_ctfield(1, MR_r11, 0);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__top_level_collect_matching_facts_8_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i4);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_2_19_0_i6);
	}
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(15) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r9 = MR_sv(14);
	MR_r8 = MR_sv(13);
	MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_2_19_0_i5);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__fact_table__update_fact_map_4_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i7);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r9 = MR_sv(14);
	MR_r7 = MR_sv(13);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_2_19_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(14) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(13) = MR_tempr1;
	MR_sv(16) = MR_ctfield(1, MR_sv(11), 0);
	MR_sv(17) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i10);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_data_6_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i11);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r9 = MR_sv(14);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(17);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_sv(17) = MR_r8;
	MR_np_call_localret_ent(ll_backend__fact_table__do_build_hash_table_13_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i12);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, sort_file_line);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__build_hash_table_2_19_0_i13);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(17);
	MR_r15 = MR_sv(13);
	MR_succip_word = MR_sv(18);
	MR_GOTO_LAB(ll_backend__fact_table__build_hash_table_2_19_0_i28);
MR_def_label(ll_backend__fact_table__build_hash_table_2_19_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r14;
	MR_r2 = MR_r15;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module50)
	MR_init_entry1(ll_backend__fact_table__build_hash_table_17_0);
	MR_init_label7(ll_backend__fact_table__build_hash_table_17_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__build_hash_table_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r11;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r10;
	MR_r11 = MR_tempr1;
	MR_r15 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__build_hash_table_2_19_0,
		ll_backend__fact_table__build_hash_table_17_0_i2);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__build_hash_table_17_0_i3);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		ll_backend__fact_table__build_hash_table_17_0_i4);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__calculate_hash_table_size_3_0,
		ll_backend__fact_table__build_hash_table_17_0_i5);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__fact_table__build_hash_table_17_0_i6);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__hash_table_from_list_4_0,
		ll_backend__fact_table__build_hash_table_17_0_i7);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__write_hash_table_6_0,
		ll_backend__fact_table__build_hash_table_17_0_i8);
MR_def_label(ll_backend__fact_table__build_hash_table_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module51)
	MR_init_entry1(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0);
	MR_init_label4(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,11,3,4,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr5;
	MR_tempr6 = MR_r4;
	MR_sv(4) = MR_tempr6;
	MR_r1 = MR_tempr6;
	MR_r2 = (MR_Word) MR_string_const("\t%s%d,\n", 7);
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(io__format_5_0,
		ll_backend__fact_table__write_fact_table_pointer_array_2_6_0_i3);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 248;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		ll_backend__fact_table__write_fact_table_pointer_array_2_6_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0_i11);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module52)
	MR_init_entry1(ll_backend__fact_table__write_fact_table_pointer_array_6_0);
	MR_init_label8(ll_backend__fact_table__write_fact_table_pointer_array_6_0,2,3,4,5,6,7,8,9)
	MR_init_label1(ll_backend__fact_table__write_fact_table_pointer_array_6_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_table_pointer_array_6_0)
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
	MR_r2 = (MR_Word) MR_string_const("[]", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i2);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_struct *", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i3);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("const struct ", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i5);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i6);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i7);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(io__write_strings_4_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i8);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_pointer_array_2_6_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i9);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_fact_table_pointer_array_6_0_i10);
MR_def_label(ll_backend__fact_table__write_fact_table_pointer_array_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__remove_file_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module53)
	MR_init_entry1(ll_backend__fact_table__delete_temporary_file_3_0);
	MR_init_label6(ll_backend__fact_table__delete_temporary_file_3_0,2,5,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__delete_temporary_file_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__remove_file_4_0,
		ll_backend__fact_table__delete_temporary_file_3_0_i2);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__delete_temporary_file_3_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__delete_temporary_file_3_0_i5);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		ll_backend__fact_table__delete_temporary_file_3_0_i6);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s: error deleting file \140%s:", 28);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__delete_temporary_file_3_0_i7);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__delete_temporary_file_3_0_i8);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(ll_backend__fact_table__delete_temporary_file_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_pieces_5_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module54)
	MR_init_entry1(ll_backend__fact_table__open_output_handle_error_5_0);
	MR_init_label7(ll_backend__fact_table__open_output_handle_error_5_0,2,5,6,8,10,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__open_output_handle_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__open_output_4_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i2);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__open_output_handle_error_5_0_i3);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i5);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140%s\' for output:", 35);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i6);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__open_output_handle_error_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i10);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i10);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__open_output_handle_error_5_0_i11);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ll_backend__fact_table__open_output_handle_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__see_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module55)
	MR_init_entry1(ll_backend__fact_table__see_input_handle_error_5_0);
	MR_init_label7(ll_backend__fact_table__see_input_handle_error_5_0,2,5,6,8,10,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__see_input_handle_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__see_4_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i2);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__see_input_handle_error_5_0_i3);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i5);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140%s\' for input:", 34);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i6);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__see_input_handle_error_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i10);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i10);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__see_input_handle_error_5_0_i11);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ll_backend__fact_table__see_input_handle_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(io__seen_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module56)
	MR_init_entry1(ll_backend__fact_table__write_primary_hash_table_16_0);
	MR_init_label8(ll_backend__fact_table__write_primary_hash_table_16_0,2,3,7,8,11,10,6,14)
	MR_init_label8(ll_backend__fact_table__write_primary_hash_table_16_0,15,16,17,18,19,21,22,13)
	MR_init_label8(ll_backend__fact_table__write_primary_hash_table_16_0,12,24,25,26,27,28,29,30)
	MR_init_label1(ll_backend__fact_table__write_primary_hash_table_16_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_primary_hash_table_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i2);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__see_input_handle_error_5_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i3);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i5);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i6);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__open_output_handle_error_5_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i8);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__write_new_data_array_5_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i11);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i6);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i14);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_hash_table_%d_", 17);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i15);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern struct MR_fact_table_hash_table_i %s0;\n", 46);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i16);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i17);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i18);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__read_sort_file_line_6_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i19);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i21);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_sv(12);
	MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i12);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	MR_r9 = (MR_Integer) 1;
	MR_r10 = MR_sv(7);
	MR_r11 = MR_ctfield(1, MR_tempr1, 0);
	MR_r12 = MR_sv(3);
	MR_r13 = MR_sv(11);
	MR_r14 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__build_hash_table_17_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i22);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i12);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_sv(12);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_primary_hash_table_16_0_i24);
	}
	MR_sv(4) = MR_sv(5);
	MR_np_call_localret_ent(io__seen_2_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i29);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i25);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_pointer_array_6_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i26);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i27);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i28);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__seen_2_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i29);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__delete_temporary_file_3_0,
		ll_backend__fact_table__write_primary_hash_table_16_0_i30);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__fact_table__write_primary_hash_table_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module57)
	MR_init_entry1(ll_backend__fact_table__write_secondary_hash_tables_11_0);
	MR_init_label8(ll_backend__fact_table__write_secondary_hash_tables_11_0,34,3,4,7,8,9,10,11)
	MR_init_label8(ll_backend__fact_table__write_secondary_hash_tables_11_0,12,13,16,17,18,15,20,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_secondary_hash_tables_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_secondary_hash_tables_11_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__see_input_handle_error_5_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i4);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_secondary_hash_tables_11_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i7);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_hash_table_%d_", 17);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i8);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern struct MR_fact_table_hash_table_i %s0;\n", 46);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i9);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i10);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i11);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i12);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__read_sort_file_line_6_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i13);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_secondary_hash_tables_11_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(6);
	MR_r9 = (MR_Integer) 0;
	MR_r10 = MR_sv(4);
	MR_r11 = MR_ctfield(1, MR_tempr1, 0);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = (MR_Integer) 0;
	MR_r14 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__build_hash_table_17_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i16);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__seen_2_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i17);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__fact_table__delete_temporary_file_3_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i18);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__fact_table__write_secondary_hash_tables_11_0_i34);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__seen_2_0,
		ll_backend__fact_table__write_secondary_hash_tables_11_0_i20);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__fact_table__write_secondary_hash_tables_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module58)
	MR_init_entry1(ll_backend__fact_table__write_fact_table_arrays_14_0);
	MR_init_label8(ll_backend__fact_table__write_fact_table_arrays_14_0,4,3,33,8,7,9,12,13)
	MR_init_label1(ll_backend__fact_table__write_fact_table_arrays_14_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_table_arrays_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_arrays_14_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ll_backend__fact_table__write_fact_table_arrays_14_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_arrays_14_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_proceed();
	}
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r13 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_arrays_14_0_i8);
	}
	MR_r8 = MR_r7;
	MR_r7 = MR_r10;
	MR_r10 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r14 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_r15 = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tempr1;
	MR_r11 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_arrays_14_0_i7);
	}
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r7;
	MR_r7 = MR_r10;
	MR_r10 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_r13;
	MR_r11 = (MR_Integer) 1;
	}
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ll_backend__fact_table__write_primary_hash_table_16_0,
		ll_backend__fact_table__write_fact_table_arrays_14_0_i9);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__write_fact_table_arrays_14_0_i11);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ll_backend__fact_table__write_secondary_hash_tables_11_0,
		ll_backend__fact_table__write_fact_table_arrays_14_0_i12);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_arrays_14_0_i13);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__fact_table__write_fact_table_arrays_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module59)
	MR_init_entry1(ll_backend__fact_table__maybe_append_data_table_5_0);
	MR_init_label8(ll_backend__fact_table__maybe_append_data_table_5_0,4,5,6,7,8,9,10,11)
	MR_init_label8(ll_backend__fact_table__maybe_append_data_table_5_0,27,14,16,13,19,20,21,22)
	MR_init_label1(ll_backend__fact_table__maybe_append_data_table_5_0,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__maybe_append_data_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__maybe_append_data_table_5_0_i40);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("cat %s >>%s", 11);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i4);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__passes_aux__make_command_string_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i5);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i6);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Invoking system command \140", 27);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i7);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i8);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(", ...", 5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i9);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__call_system_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i10);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i11);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__maybe_append_data_table_5_0_i13);
	}
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__maybe_append_data_table_5_0_i14);
	}
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__fact_table__delete_temporary_file_3_0);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i16);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i27);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i19);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i20);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,13);
	MR_r1 = (MR_Word) MR_string_const("%s: error executing system command \140%s:", 39);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i21);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i22);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__maybe_append_data_table_5_0_i27);
MR_def_label(ll_backend__fact_table__maybe_append_data_table_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module60)
	MR_init_entry1(ll_backend__fact_table__write_fact_table_numfacts_6_0);
	MR_init_label8(ll_backend__fact_table__write_fact_table_numfacts_6_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__write_fact_table_numfacts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i2);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i3);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("const MR_Integer mercury__", 26);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i4);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i5);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i6);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("_fact_table_num_facts;\n", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i7);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern const MR_Integer mercury__", 33);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i8);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__fact_table__write_fact_table_numfacts_6_0_i9);
MR_def_label(ll_backend__fact_table__write_fact_table_numfacts_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module61)
	MR_init_entry1(ll_backend__fact_table__print_error_reports_3_0);
	MR_init_label1(ll_backend__fact_table__print_error_reports_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__print_error_reports_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__fact_table__print_error_reports_3_0_i2);
MR_def_label(ll_backend__fact_table__print_error_reports_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module62)
	MR_init_entry1(ll_backend__fact_table__fact_table_compile_facts_2_13_0);
	MR_init_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0,2,3,4,5,8,9,10,11)
	MR_init_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0,13,16,15,12,17,18,20,21)
	MR_init_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0,22,23,24,27,28,29,30,31)
	MR_init_label8(ll_backend__fact_table__fact_table_compile_facts_2_13_0,32,33,26,34,35,7,36,37)
	MR_init_label2(ll_backend__fact_table__fact_table_compile_facts_2_13_0,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__fact_table_compile_facts_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i2);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__fact_table__init_fact_arg_infos_2_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i3);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__infer_determinism_pass_1_12_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i4);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(11) = MR_tempr1;
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__create_fact_table_header_7_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i5);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_r2;
	}
	MR_np_call_localret_ent(fn__ll_backend__fact_table__fact_table_file_header_1_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i8);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i9);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_4_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i10);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__fact_table__open_sort_files_6_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i11);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i13);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(11);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = (MR_Integer) 0;
	MR_r3 = MR_sv(16);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i12);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__write_new_data_array_5_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i16);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(13);
	MR_sv(14) = (MR_Integer) 0;
	MR_r3 = MR_sv(16);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i12);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(11);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = (MR_Integer) 1;
	MR_r3 = MR_sv(16);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_sv(16) = MR_r3;
	MR_np_call_localret_ent(ll_backend__fact_table__compile_facts_13_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i17);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_np_call_localret_ent(io__seen_2_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i18);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i20);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ll_backend__fact_table__close_sort_files_4_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i23);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__fact_table__write_closing_brace_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i21);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_pointer_array_6_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i22);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__close_sort_files_4_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i23);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i24);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_2_13_0_i26);
	}
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i27);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__fact_table__infer_determinism_pass_2_6_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i28);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i29);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(io__make_temp_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i30);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_arrays_14_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i31);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__write_fact_table_numfacts_6_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i32);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i33);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i38);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__fact_table__print_error_reports_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i34);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_sv(13) = MR_sv(16);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i38);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__fact_table__print_error_reports_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i36);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i37);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(14) = (MR_Integer) 0;
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_sv(13) = MR_sv(16);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i38);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__maybe_append_data_table_5_0,
		ll_backend__fact_table__fact_table_compile_facts_2_13_0_i39);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_2_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__modules__fact_table_file_name_7_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module63)
	MR_init_entry1(ll_backend__fact_table__fact_table_compile_facts_11_0);
	MR_init_label8(ll_backend__fact_table__fact_table_compile_facts_11_0,2,5,6,7,9,4,12,13)
	MR_init_label3(ll_backend__fact_table__fact_table_compile_facts_11_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__fact_table__fact_table_compile_facts_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__see_4_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i2);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_11_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i5);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(".c", 2);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__modules__fact_table_file_name_7_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i6);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(ll_backend__fact_table__open_output_handle_error_5_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i7);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_compile_facts_11_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__fact_table__fact_table_compile_facts_2_13_0);
	}
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i16);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i12);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140%s\' for input:", 34);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i13);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i14);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i15);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		ll_backend__fact_table__fact_table_compile_facts_11_0_i16);
MR_def_label(ll_backend__fact_table__fact_table_compile_facts_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module64)
	MR_init_entry1(ll_backend__fact_table__pragma_vars_to_names_string_2_0);
	MR_init_label2(ll_backend__fact_table__pragma_vars_to_names_string_2_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__pragma_vars_to_names_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__pragma_vars_to_names_string_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__fact_table__pragma_vars_to_names_string_2_0,
		ll_backend__fact_table__pragma_vars_to_names_string_2_0_i4);
MR_def_label(ll_backend__fact_table__pragma_vars_to_names_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(ll_backend__fact_table__pragma_vars_to_names_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;

MR_BEGIN_MODULE(ll_backend__fact_table_module65)
	MR_init_entry1(ll_backend__fact_table__generate_nondet_proc_code_5_0);
	MR_init_label5(ll_backend__fact_table__generate_nondet_proc_code_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_nondet_proc_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__generate_nondet_proc_code_5_0_i2);
MR_def_label(ll_backend__fact_table__generate_nondet_proc_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_nondet_proc_code_5_0_i3);
MR_def_label(ll_backend__fact_table__generate_nondet_proc_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
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
	MR_r1 = (MR_Word) MR_string_const("mercury__%s_%d_%d_xx", 20);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_nondet_proc_code_5_0_i4);
MR_def_label(ll_backend__fact_table__generate_nondet_proc_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__fact_table__pragma_vars_to_names_string_2_0,
		ll_backend__fact_table__generate_nondet_proc_code_5_0_i5);
MR_def_label(ll_backend__fact_table__generate_nondet_proc_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("\n\n    /*\n    ** Mention arguments %s to stop the compiler giving a warning.\n    **\n    ** Pop off the nondet stack frame that the pragma c_code generates\n    ** then jump to the code where the work is actually done.\n    */\n\n    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);\n    MR_curfr_word = MR_succfr_slot_word(MR_curfr);\n    {\n        MR_declare_entry(%s);\n        MR_GOTO(MR_ENTRY(%s));\n    }\n    ", 403);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_nondet_proc_code_5_0_i6);
MR_def_label(ll_backend__fact_table__generate_nondet_proc_code_5_0,6)
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

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module66)
	MR_init_entry1(ll_backend__fact_table__generate_fact_lookup_code_7_0);
	MR_init_label8(ll_backend__fact_table__generate_fact_lookup_code_7_0,61,5,3,11,13,17,20,19)
	MR_init_label5(ll_backend__fact_table__generate_fact_lookup_code_7_0,14,25,27,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_fact_lookup_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_fact_lookup_code: too many types", 41);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr2 = MR_r2;
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r5;
	MR_sv(9) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_r1;
	MR_tempr5 = MR_r4;
	MR_sv(2) = MR_tempr5;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r6;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr4, 0);
	MR_r1 = MR_tempr5;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_output_2_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i11);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("mercury__%s_fact_table[ind/%d][ind%%%d].V_%d", 44);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i13);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(7), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i14);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i17);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i20);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_make_aligned_string(%s, (MR_String) (MR_Word) %s);\n", 56);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i25);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("       MR_incr_hp_atomic(tmp,\n                                (strlen(%s) + sizeof(MR_Word))\n                                    / sizeof(MR_Word));\n                            %s = (MR_String) tmp;\n                            strcpy(%s, %s);\n                    ", 263);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i25);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s = %s;\n", 11);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i25);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_localcall_lab(ll_backend__fact_table__generate_fact_lookup_code_7_0,
		ll_backend__fact_table__generate_fact_lookup_code_7_0_i27);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__generate_fact_lookup_code_7_0_i61);
MR_def_label(ll_backend__fact_table__generate_fact_lookup_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_fact_lookup_code: too many pragma vars", 47);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_util__arg_loc_to_register_2_0);
MR_decl_entry(fn__ll_backend__llds_out__reg_to_string_2_0);
MR_decl_entry(backend_libs__export__convert_type_from_mercury_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module67)
	MR_init_entry1(ll_backend__fact_table__generate_arg_input_code_7_0);
	MR_init_label8(ll_backend__fact_table__generate_arg_input_code_7_0,2,5,3,7,8,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_arg_input_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_util__arg_loc_to_register_2_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i2);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_arg_input_code_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__reg_to_string_2_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i5);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__fact_table__generate_arg_input_code_7_0_i7);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_reg_name: lval is not a register", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i7);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(backend_libs__export__convert_type_from_mercury_3_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i8);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s = %s;\n", 11);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i9);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_sv(3) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_framevar(%d) = %s;\n", 24);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i10);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s = MR_framevar(%d);\n", 24);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_arg_input_code_7_0_i11);
MR_def_label(ll_backend__fact_table__generate_arg_input_code_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__to_type_string_3_0);
MR_decl_entry(backend_libs__export__convert_type_to_mercury_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module68)
	MR_init_entry1(ll_backend__fact_table__generate_argument_vars_code_2_11_0);
	MR_init_label8(ll_backend__fact_table__generate_argument_vars_code_2_11_0,2,10,11,14,12,17,20,18)
	MR_init_label8(ll_backend__fact_table__generate_argument_vars_code_2_11_0,22,23,24,15,27,28,29,30)
	MR_init_label4(ll_backend__fact_table__generate_argument_vars_code_2_11_0,31,32,33,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_argument_vars_code_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r6 = MR_r5;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i6);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_type_string_3_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i10);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s %s;\n", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i11);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i12);
	}
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_sv(9) + (MR_Integer) 1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_arg_input_code_7_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i14);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_r3;
	MR_r3 = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_localcall_lab(ll_backend__fact_table__generate_argument_vars_code_2_11_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i28);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__arg_loc_to_register_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i17);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_argument_vars_code_2_11_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__reg_to_string_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i20);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__export__convert_type_to_mercury_3_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i23);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("get_reg_name: lval is not a register", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i22);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__export__convert_type_to_mercury_3_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i23);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s = %s;\n", 11);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i24);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_sv(9);
	MR_np_localcall_lab(ll_backend__fact_table__generate_argument_vars_code_2_11_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i28);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_argument_vars_code: invalid mode", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i27);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__fact_table__generate_argument_vars_code_2_11_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i28);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i29);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i30);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i31);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i32);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_argument_vars_code_2_11_0_i33);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_2_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_argument_vars_code: list length mismatch", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__arg_info__make_arg_infos_5_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module69)
	MR_init_entry1(ll_backend__fact_table__generate_argument_vars_code_9_0);
	MR_init_label2(ll_backend__fact_table__generate_argument_vars_code_9_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_argument_vars_code_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__fact_table__generate_argument_vars_code_9_0_i2);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_5_0,
		ll_backend__fact_table__generate_argument_vars_code_9_0_i3);
MR_def_label(ll_backend__fact_table__generate_argument_vars_code_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__fact_table__generate_argument_vars_code_2_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module70)
	MR_init_entry1(ll_backend__fact_table__generate_multidet_code_8_0);
	MR_init_label7(ll_backend__fact_table__generate_multidet_code_8_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_multidet_code_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_nondet_proc_code_5_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i2);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("_fact_table_num_facts", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i3);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i4);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i5);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_argument_vars_code_9_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i6);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_fact_lookup_code_7_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i7);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr6, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr7, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr14, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_r1 = (MR_Word) MR_string_const("\n\nMR_define_extern_entry(%s);\nMR_declare_label(%s_i1);\n\nMR_BEGIN_MODULE(%s_module)\n    MR_init_entry(%s);\n    MR_init_label(%s_i1);\nMR_BEGIN_CODE\nMR_define_entry(%s);\n    MR_mkframe(\"%s/%d\", 1, MR_LABEL(%s_i1));\n    MR_framevar(1) = (MR_Integer) 0;\n    MR_GOTO(MR_LABEL(%s_i1));\nMR_define_label(%s_i1);\n    if (MR_framevar(1) >= %s) MR_fail();\n    {\n        /* declare argument vars */\n%s\n        MR_Word ind = MR_framevar(1), tmp;\n        /* lookup fact table */\n%s\n        /* save output args to registers */\n%" "s\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc %s_module;\n\n/*\nINIT mercury_sys_init_%s_module\n*/\nvoid mercury_sys_init_%s_module(void);\nvoid mercury_sys_init_%s_module(void) {\n    %s_module();\n}\n\n    ", 749);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_multidet_code_8_0_i8);
MR_def_label(ll_backend__fact_table__generate_multidet_code_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module71)
	MR_init_entry1(ll_backend__fact_table__generate_cc_multi_code_2_5_0);
	MR_init_label4(ll_backend__fact_table__generate_cc_multi_code_2_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_cc_multi_code_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__generate_cc_multi_code_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_cc_multi_code_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tempr6 = MR_r2;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tempr7 = MR_r3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_sv(1) = MR_tempr6;
	MR_sv(2) = MR_tempr7;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t\t%s = %s[0][0].V_%d;\n", 22);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_cc_multi_code_2_5_0_i4);
MR_def_label(ll_backend__fact_table__generate_cc_multi_code_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__generate_cc_multi_code_2_5_0_i5);
MR_def_label(ll_backend__fact_table__generate_cc_multi_code_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__fact_table__generate_cc_multi_code_2_5_0_i12);
MR_def_label(ll_backend__fact_table__generate_cc_multi_code_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module72)
	MR_init_entry1(ll_backend__fact_table__generate_decl_code_3_0);
	MR_init_label1(ll_backend__fact_table__generate_decl_code_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_decl_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_decl_code_3_0_i2);
MR_def_label(ll_backend__fact_table__generate_decl_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word current_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            current_table =\n                &mercury__%s_fact_table_hash_table_%d_0;\n\n    ", 393);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module73)
	MR_init_entry1(ll_backend__fact_table__generate_test_condition_code_8_0);
	MR_init_label8(ll_backend__fact_table__generate_test_condition_code_8_0,5,3,11,13,17,19,9,22)
	MR_init_label1(ll_backend__fact_table__generate_test_condition_code_8_0,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_test_condition_code_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_test_condition_code: too many ArgTypes", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i8);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_tempr4 = MR_r4;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i11);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(2, MR_sv(6), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("strcmp(%s[ind/%d][ind%%%d].V_%d, %s) != 0\n", 42);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i17);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("%s[ind/%d][ind%%%d].V_%d != %s\n", 31);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i17);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_test_condition_code_8_0_i19);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t|| ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i19);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r2 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__fact_table__generate_test_condition_code_8_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i22);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r2 = MR_sv(9);
	MR_np_localcall_lab(ll_backend__fact_table__generate_test_condition_code_8_0,
		ll_backend__fact_table__generate_test_condition_code_8_0_i22);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__fact_table__generate_test_condition_code_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_test_condition_code: too many PragmaVars", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module74)
	MR_init_entry1(ll_backend__fact_table__generate_hash_lookup_code_13_0);
	MR_init_label8(ll_backend__fact_table__generate_hash_lookup_code_13_0,2,3,4,6,7,8,9,13)
	MR_init_label1(ll_backend__fact_table__generate_hash_lookup_code_13_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_hash_lookup_code_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_sv(13) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_r1 = (MR_Word) MR_string_const("((struct MR_fact_table_hash_table_%c *) current_table)->table[hashval]", 70);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i2);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".key", 4);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i3);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,3)
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
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i4);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_lookup_code_13_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = (MR_Word) MR_TAG_COMMON(2,7,1);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) != 0 && %s)\n            {\n                ind = (MR_Word) %s.index;\n                goto found_%s_%d;\n            }\n        } while ((hashval = %s.next) != -1);\n\n        /* key not found */\n        goto failure_code_%s;\n\n    found_%s_%d:\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            /* check that any remaining input arguments match */\n            %s\n            keytype = \'%" "c\';\n            hashval = %s.next;\n            goto success_code_%s;\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ", 663);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("_fact_table", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i7);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i8);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_test_condition_code_8_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i9);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_lookup_code_13_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_sv(4) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("if (%s\t\t\t) goto failure_code_%s;\n", 33);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_hash_lookup_code_13_0_i13);
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tempr12 = MR_sv(4);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) != 0 && %s)\n            {\n                ind = (MR_Word) %s.index;\n                goto found_%s_%d;\n            }\n        } while ((hashval = %s.next) != -1);\n\n        /* key not found */\n        goto failure_code_%s;\n\n    found_%s_%d:\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            /* check that any remaining input arguments match */\n            %s\n            keytype = \'%" "c\';\n            hashval = %s.next;\n            goto success_code_%s;\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ", 663);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(ll_backend__fact_table__generate_hash_lookup_code_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = (MR_Word) MR_TAG_COMMON(2,7,1);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) != 0 && %s)\n            {\n                ind = (MR_Word) %s.index;\n                goto found_%s_%d;\n            }\n        } while ((hashval = %s.next) != -1);\n\n        /* key not found */\n        goto failure_code_%s;\n\n    found_%s_%d:\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(%s) == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            /* check that any remaining input arguments match */\n            %s\n            keytype = \'%" "c\';\n            hashval = %s.next;\n            goto success_code_%s;\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ", 663);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module75)
	MR_init_entry1(ll_backend__fact_table__generate_hash_int_code_10_0);
	MR_init_label1(ll_backend__fact_table__generate_hash_int_code_10_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_hash_int_code_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r10 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("%s == %s", 8);
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = (MR_Integer) 105;
	MR_r12 = MR_r9;
	MR_r9 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_hash_int_code_10_0_i2);
MR_def_label(ll_backend__fact_table__generate_hash_int_code_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("\n\n        /* calculate hash value for an integer */\n\n        hashsize = ((struct MR_fact_table_hash_table_i *)current_table)\n            ->size;\n\n        hashval = (%s >= 0 ? %s : -%s) %% hashsize;\n\n        current_key = %s;\n\n        /* lookup the hash table */\n        %s\n\n    ", 278);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module76)
	MR_init_entry1(ll_backend__fact_table__generate_hash_string_code_10_0);
	MR_init_label1(ll_backend__fact_table__generate_hash_string_code_10_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_hash_string_code_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r10 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("strcmp(%s, %s) == 0", 19);
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = (MR_Integer) 115;
	MR_r12 = MR_r9;
	MR_r9 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_hash_string_code_10_0_i2);
MR_def_label(ll_backend__fact_table__generate_hash_string_code_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\n\n        hashsize = ((struct MR_fact_table_hash_table_s *) current_table)->size;\n\n        /* calculate hash value for a string */\n        {\n            char *p;\n            hashval = 0;\n            for (p = %s ; *p != \'\\0\' ; p++) {\n                hashval = (*p + 31 * hashval) %% hashsize;\n            }\n        }\n\n        current_key = (MR_Word) %s;\n\n        /* lookup the hash table */\n        %s\n\n    ", 406);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module77)
	MR_init_entry1(ll_backend__fact_table__generate_hash_code_9_0);
	MR_init_label8(ll_backend__fact_table__generate_hash_code_9_0,86,3,11,13,20,17,25,22)
	MR_init_label4(ll_backend__fact_table__generate_hash_code_9_0,29,30,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_hash_code_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i8);
	}
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		ll_backend__fact_table__generate_hash_code_9_0_i11);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(7), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_int_code_10_0,
		ll_backend__fact_table__generate_hash_code_9_0_i25);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(7), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i17);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("%s == %s", 8);
	MR_r5 = (MR_Integer) 102;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_hash_code_9_0_i20);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\n\n        /* calculate hash value for a float */\n\n        hashsize = ((struct MR_fact_table_hash_table_f *)current_table)\n            ->size;\n\n        hashval = MR_hash_float(%s);\n        hashval = (hashval >= 0 ? hashval : -hashval) %% hashsize;\n\n        current_key = MR_float_to_word(%s);\n\n        /* lookup the hash table */\n        %s\n\n    ", 345);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_hash_code_9_0_i25);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(7), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_string_code_10_0,
		ll_backend__fact_table__generate_hash_code_9_0_i25);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_sv(1) = MR_r1;
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = MR_sv(10);
	MR_np_localcall_lab(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_hash_code_9_0_i30);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_hash_code: unsupported type", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__fact_table__generate_hash_code_9_0_i29);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_hash_code_9_0_i30);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__fact_table__generate_hash_code_9_0_i86);
MR_def_label(ll_backend__fact_table__generate_hash_code_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fact_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_hash_code", 18);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module78)
	MR_init_entry1(ll_backend__fact_table__generate_all_in_code_7_0);
	MR_init_label8(ll_backend__fact_table__generate_all_in_code_7_0,2,3,4,5,6,7,8,9)
	MR_init_label1(ll_backend__fact_table__generate_all_in_code_7_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_all_in_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i2);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(7) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word current_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            current_table =\n                &mercury__%s_fact_table_hash_table_%d_0;\n\n    ", 393);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i3);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i4);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i5);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_ctfield(2, MR_sv(7), 0);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i6);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n        success_code_%s:\n            SUCCESS_INDICATOR = MR_TRUE;\n            goto skip_%s;\n        failure_code_%s:\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_%s:\n            ;\n    ", 195);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i7);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t}\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i8);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i9);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_all_in_code_7_0_i10);
MR_def_label(ll_backend__fact_table__generate_all_in_code_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t{\n", 3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module79)
	MR_init_entry1(ll_backend__fact_table__generate_semidet_in_out_code_7_0);
	MR_init_label8(ll_backend__fact_table__generate_semidet_in_out_code_7_0,2,3,4,5,6,7,8,9)
	MR_init_label5(ll_backend__fact_table__generate_semidet_in_out_code_7_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_semidet_in_out_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i2);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(7) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word current_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            current_table =\n                &mercury__%s_fact_table_hash_table_%d_0;\n\n    ", 393);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i3);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i4);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i5);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i6);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(9) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\n        success_code_%s:\n            SUCCESS_INDICATOR = MR_TRUE;\n    ", 71);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i7);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_fact_lookup_code_7_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i8);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n            goto skip_%s;\n        failure_code_%s:\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_%s:\n            ;\n    ", 129);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i9);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t}\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i10);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i11);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i12);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i13);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_semidet_in_out_code_7_0_i14);
MR_def_label(ll_backend__fact_table__generate_semidet_in_out_code_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t{\n", 3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module80)
	MR_init_entry1(ll_backend__fact_table__generate_fact_test_code_6_0);
	MR_init_label4(ll_backend__fact_table__generate_fact_test_code_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_fact_test_code_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("_fact_table", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_fact_test_code_6_0_i2);
MR_def_label(ll_backend__fact_table__generate_fact_test_code_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_fact_test_code_6_0_i3);
MR_def_label(ll_backend__fact_table__generate_fact_test_code_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_test_condition_code_8_0,
		ll_backend__fact_table__generate_fact_test_code_6_0_i4);
MR_def_label(ll_backend__fact_table__generate_fact_test_code_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t) MR_fail();\n", 15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__fact_table__generate_fact_test_code_6_0_i5);
MR_def_label(ll_backend__fact_table__generate_fact_test_code_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tif(", 5);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module81)
	MR_init_entry1(ll_backend__fact_table__generate_primary_nondet_code_8_0);
	MR_init_label8(ll_backend__fact_table__generate_primary_nondet_code_8_0,2,3,4,5,6,7,8,9)
	MR_init_label3(ll_backend__fact_table__generate_primary_nondet_code_8_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_primary_nondet_code_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
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
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_nondet_proc_code_5_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i2);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_argument_vars_code_9_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i3);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_decl_code_3_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i4);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i5);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(17) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
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
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i6);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i7);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_fact_lookup_code_7_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i8);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_fact_test_code_6_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i9);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("mercury__", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i10);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i11);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23, MR_tempr24;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr6, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr7, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr8, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr8, 0) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr9, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr9, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr10, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr10, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr11, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr11, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr12, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr12, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr13, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr13, 0) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr14, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr14, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr15, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr15, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr16, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr17, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr18, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr19, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr19, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr19, 1) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr20, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr20, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr20, 1) = MR_tempr19;
	MR_tag_alloc_heap(MR_tempr21, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr21, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr21, 1) = MR_tempr20;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr21;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr14, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr23, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr23, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr23, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr23;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr24, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr24;
	MR_tfield(1, MR_tempr24, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr24, 1) = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("\n\nMR_define_extern_entry(%s);\nMR_declare_label(%s_i1);\n\nMR_BEGIN_MODULE(%s_module)\n    MR_init_entry(%s);\n    MR_init_label(%s_i1);\nMR_BEGIN_CODE\nMR_define_entry(%s);\n    MR_mkframe(\"%s/%d\", %d, MR_LABEL(%s_i1));\n    {\n        /* create argument vars */\n%s\n        /* declare local variables */\n%s\n        /* copy registers to input arg vars */\n%s\n        /* copy registers to framevars */\n%s\n        /* lookup hash table */\n%s\n    success_code_%s:\n        /* lookup fact table */\n%s\n        /* save output args " "to registers */\n%s\n        MR_framevar(1) = ind + 1;\n        MR_succeed();\n    failure_code_%s:\n        MR_fail();\n    }\nMR_define_label(%s_i1);\n    if (MR_framevar(1) >= %s)\n        MR_fail();\n    {\n        /* create argument vars */\n%s\n        int ind = MR_framevar(1);\n        /* copy framevars to registers */\n%s\n        /* copy registers to input arg vars */\n%s\n        /* test fact table entry */\n%s\n        /* lookup fact table */\n%s\n        /* save output args to registers */\n%s\n    }\n    MR_framevar(1)" "++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc %s_module;\n\n/*\nINIT mercury_sys_init_%s_module\n*/\nvoid mercury_sys_init_%s_module(void);\nvoid mercury_sys_init_%s_module(void) {\n    %s_module();\n}\n\n    ", 1235);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_primary_nondet_code_8_0_i12);
MR_def_label(ll_backend__fact_table__generate_primary_nondet_code_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module82)
	MR_init_entry1(ll_backend__fact_table__generate_secondary_nondet_code_8_0);
	MR_init_label8(ll_backend__fact_table__generate_secondary_nondet_code_8_0,2,3,4,5,6,7,8,9)
	MR_init_label5(ll_backend__fact_table__generate_secondary_nondet_code_8_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__generate_secondary_nondet_code_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
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
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__generate_nondet_proc_code_5_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i2);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_argument_vars_code_9_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i3);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_decl_code_3_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i4);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i5);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(17) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
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
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i6);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("_2", 2);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i7);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_code_9_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i8);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(char *) MR_framevar(4)", 23);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("strcmp(%s, %s) == 0", 19);
	MR_r5 = (MR_Integer) 115;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("", 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(5);
	MR_r11 = (MR_Integer) 0;
	MR_r12 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i9);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_framevar(4)", 14);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("%s == %s", 8);
	MR_r5 = (MR_Integer) 105;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("", 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(5);
	MR_r11 = (MR_Integer) 0;
	MR_r12 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i10);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_word_to_float(MR_framevar(4))", 32);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_string_const("%s == %s", 8);
	MR_r5 = (MR_Integer) 102;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("", 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(5);
	MR_r11 = (MR_Integer) 0;
	MR_r12 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__fact_table__generate_hash_lookup_code_13_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i11);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(2, MR_sv(17), 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_fact_lookup_code_7_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i12);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i13);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr6, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr7, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr8, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr8, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr9, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr9, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr10, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr10, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr11, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr11, 0) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr12, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr12, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr13, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr13, 0) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr14, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr14, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr15, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr16, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr17, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr18, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr19, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr19, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr19, 1) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr20, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr20, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr20, 1) = MR_tempr19;
	MR_tag_alloc_heap(MR_tempr21, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr21, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr21, 1) = MR_tempr20;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr21;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr23, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr23;
	MR_tfield(1, MR_tempr23, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr23, 1) = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("\n\nMR_define_extern_entry(%s);\nMR_declare_label(%s_i1);\n\nMR_BEGIN_MODULE(%s_module)\n    MR_init_entry(%s);\n    MR_init_label(%s_i1);\nMR_BEGIN_CODE\nMR_define_entry(%s);\n    MR_mkframe(\"%s/%d\", 4, MR_LABEL(%s_i1));\n    {\n        /* create argument vars */\n%s\n        /* declare local variables */\n%s\n        /* copy registers to input arg vars */\n%s\n        /* lookup hash table */\n%s\n    success_code_%s:\n        /* lookup fact table */\n%s\n        /* save output args to registers */\n%s\n        if (hashval == -1) " "MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_framevar(2) = (MR_Word) current_table;\n        MR_framevar(3) = (MR_Word) keytype;\n        MR_framevar(4) = current_key;\n        MR_succeed();\n    failure_code_%s:\n        MR_fail();\n    }\nMR_define_label(%s_i1);\n    {\n        /* create argument vars */\n%s\n        MR_Integer  hashval = MR_framevar(1);\n        MR_Word     ind;\n        void        *current_table = (void *) MR_framevar(2);\n        char        keytype = (char) MR_framevar(3);\n\n " "       /* lookup hash table */\n        switch(keytype)\n        {\n            case \'s\':\n%s\n                break;\n            case \'i\':\n%s\n                break;\n            case \'f\':\n%s\n                break;\n            default:\n                MR_fatal_error(\n                    \"fact table hash lookup: nondet stack corrupted?\");\n        }\n    success_code_%s:\n        /* lookup fact table */\n%s\n        /* save output args to registers */\n%s\n        if (hashval == -1) MR_succeed_discard();\n        MR_frame" "var(1) = hashval;\n        MR_succeed();\n    failure_code_%s:\n        MR_fail();\n    }\nMR_END_MODULE\n\nextern MR_ModuleFunc %s_module;\n\n/*\nINIT mercury_sys_init_%s_module\n*/\nvoid mercury_sys_init_%s_module(void);\nvoid mercury_sys_init_%s_module(void) {\n    %s_module();\n}\n\n    ", 1811);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__generate_secondary_nondet_code_8_0_i14);
MR_def_label(ll_backend__fact_table__generate_secondary_nondet_code_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module83)
	MR_init_entry1(ll_backend__fact_table__fact_table_generate_c_code_11_0);
	MR_init_label8(ll_backend__fact_table__fact_table_generate_c_code_11_0,2,3,4,5,6,7,14,11)
	MR_init_label7(ll_backend__fact_table__fact_table_generate_c_code_11_0,16,23,20,26,30,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__fact_table__fact_table_generate_c_code_11_0);
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
	MR_r1 = (MR_Integer) 248;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i2);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i3);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i4);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__fact_table__fact_table_mode_type_3_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i5);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i6);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i7);
	}
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i7);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__fact_table__generate_multidet_code_8_0);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i11);
	}
	if (MR_INT_NE(MR_sv(5),4)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("mercury__", 9);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i14);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_cc_multi_code_2_5_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i16);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i16);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_all_in_code_7_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i20);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i23);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_semidet_in_out_code_7_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),5)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i20);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__fact_table__generate_semidet_in_out_code_7_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i26);
	}
	if (MR_INT_NE(MR_sv(5),3)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i26);
	}
	if ((MR_sv(3) != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i26);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__fact_table__generate_primary_nondet_code_8_0);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i30);
	}
	if (MR_INT_NE(MR_sv(5),3)) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i30);
	}
	if ((MR_sv(3) == MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__fact_table__fact_table_generate_c_code_11_0_i30);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__fact_table__generate_secondary_nondet_code_8_0);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__fact_table__pragma_vars_to_names_string_2_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i34);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("/* %s */", 8);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__fact_table__fact_table_generate_c_code_11_0_i35);
MR_def_label(ll_backend__fact_table__fact_table_generate_c_code_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module84)
	MR_init_entry1(ll_backend__fact_table__print_error_report_3_0);
	MR_init_label2(ll_backend__fact_table__print_error_report_3_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__print_error_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__print_error_report_3_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		ll_backend__fact_table__print_error_report_3_0_i5);
MR_def_label(ll_backend__fact_table__print_error_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		ll_backend__fact_table__print_error_report_3_0_i5);
MR_def_label(ll_backend__fact_table__print_error_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module85)
	MR_init_entry1(__Unify___ll_backend__fact_table__error_report_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__error_report_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module86)
	MR_init_entry1(__Compare___ll_backend__fact_table__error_report_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__error_report_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module87)
	MR_init_entry1(__Unify___ll_backend__fact_table__error_reports_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__error_reports_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
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

MR_BEGIN_MODULE(ll_backend__fact_table_module88)
	MR_init_entry1(__Compare___ll_backend__fact_table__error_reports_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__error_reports_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
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


MR_BEGIN_MODULE(ll_backend__fact_table_module89)
	MR_init_entry1(__Unify___ll_backend__fact_table__fact_arg_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__fact_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___term__const_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__const_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module90)
	MR_init_entry1(__Compare___ll_backend__fact_table__fact_arg_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__fact_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___term__const_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module91)
	MR_init_entry1(__Unify___ll_backend__fact_table__fact_arg_info_0_0);
	MR_init_label3(__Unify___ll_backend__fact_table__fact_arg_info_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__fact_arg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__fact_arg_info_0_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__fact_table__fact_arg_info_0_0_i4);
MR_def_label(__Unify___ll_backend__fact_table__fact_arg_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__fact_arg_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__fact_arg_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__fact_table__fact_arg_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__fact_arg_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module92)
	MR_init_entry1(__Compare___ll_backend__fact_table__fact_arg_info_0_0);
	MR_init_label5(__Compare___ll_backend__fact_table__fact_arg_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__fact_arg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__fact_arg_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__fact_arg_info_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__fact_arg_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__fact_arg_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__fact_table__fact_arg_info_0_0_i5);
MR_def_label(__Compare___ll_backend__fact_table__fact_arg_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__fact_arg_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__fact_table__fact_arg_info_0_0_i9);
MR_def_label(__Compare___ll_backend__fact_table__fact_arg_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__fact_arg_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__fact_table__fact_arg_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module93)
	MR_init_entry1(__Unify___ll_backend__fact_table__fact_result_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__fact_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module94)
	MR_init_entry1(__Compare___ll_backend__fact_table__fact_result_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__fact_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module95)
	MR_init_entry1(__Unify___ll_backend__fact_table__fact_table_mode_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__fact_table_mode_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module96)
	MR_init_entry1(__Compare___ll_backend__fact_table__fact_table_mode_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__fact_table_mode_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module97)
	MR_init_entry1(__Unify___ll_backend__fact_table__hash_entry_0_0);
	MR_init_label4(__Unify___ll_backend__fact_table__hash_entry_0_0,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__hash_entry_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_entry_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		__Unify___ll_backend__fact_table__hash_entry_0_0_i4);
MR_def_label(__Unify___ll_backend__fact_table__hash_entry_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_entry_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__fact_table__hash_index_0_0,
		__Unify___ll_backend__fact_table__hash_entry_0_0_i6);
MR_def_label(__Unify___ll_backend__fact_table__hash_entry_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_entry_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__fact_table__hash_entry_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__hash_entry_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module98)
	MR_init_entry1(__Compare___ll_backend__fact_table__hash_entry_0_0);
	MR_init_label5(__Compare___ll_backend__fact_table__hash_entry_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__hash_entry_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_entry_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_entry_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__hash_entry_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__hash_entry_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__const_0_0,
		__Compare___ll_backend__fact_table__hash_entry_0_0_i5);
MR_def_label(__Compare___ll_backend__fact_table__hash_entry_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_entry_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__fact_table__hash_index_0_0,
		__Compare___ll_backend__fact_table__hash_entry_0_0_i9);
MR_def_label(__Compare___ll_backend__fact_table__hash_entry_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_entry_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__fact_table__hash_entry_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module99)
	MR_init_entry1(__Unify___ll_backend__fact_table__hash_index_0_0);
	MR_init_label3(__Unify___ll_backend__fact_table__hash_index_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__hash_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_index_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_index_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_index_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__fact_table__hash_index_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__hash_index_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_index_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_index_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__fact_table__hash_index_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module100)
	MR_init_entry1(__Compare___ll_backend__fact_table__hash_index_0_0);
	MR_init_label7(__Compare___ll_backend__fact_table__hash_index_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__hash_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__fact_table__hash_index_0_0_i12);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_index_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__fact_table__hash_index_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module101)
	MR_init_entry1(__Unify___ll_backend__fact_table__hash_table_0_0);
	MR_init_label2(__Unify___ll_backend__fact_table__hash_table_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__hash_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_table_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__hash_table_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___ll_backend__fact_table__hash_table_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__hash_table_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module102)
	MR_init_entry1(__Compare___ll_backend__fact_table__hash_table_0_0);
	MR_init_label4(__Compare___ll_backend__fact_table__hash_table_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__hash_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_table_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_table_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__hash_table_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__hash_table_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__fact_table__hash_table_0_0_i5);
MR_def_label(__Compare___ll_backend__fact_table__hash_table_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__hash_table_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__fact_table, hash_entry);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__fact_table__hash_table_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module103)
	MR_init_entry1(__Unify___ll_backend__fact_table__inferred_determinism_0_0);
	MR_init_label3(__Unify___ll_backend__fact_table__inferred_determinism_0_0,6,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__inferred_determinism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__inferred_determinism_0_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__inferred_determinism_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__inferred_determinism_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__inferred_determinism_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__fact_table__inferred_determinism_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__inferred_determinism_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module104)
	MR_init_entry1(__Compare___ll_backend__fact_table__inferred_determinism_0_0);
	MR_init_label6(__Compare___ll_backend__fact_table__inferred_determinism_0_0,26,7,28,6,30,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__inferred_determinism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i7);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i30);
	}
	}
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i26);
	}
	}
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__inferred_determinism_0_0_i18);
	}
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__fact_table__inferred_determinism_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___io__output_stream_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module105)
	MR_init_entry1(__Unify___ll_backend__fact_table__proc_stream_0_0);
	MR_init_label2(__Unify___ll_backend__fact_table__proc_stream_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__proc_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__proc_stream_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__proc_stream_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__output_stream_0_0);
	}
MR_def_label(__Unify___ll_backend__fact_table__proc_stream_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__proc_stream_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___io__output_stream_0_0);

MR_BEGIN_MODULE(ll_backend__fact_table_module106)
	MR_init_entry1(__Compare___ll_backend__fact_table__proc_stream_0_0);
	MR_init_label4(__Compare___ll_backend__fact_table__proc_stream_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__proc_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__proc_stream_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__proc_stream_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__proc_stream_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__proc_stream_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__fact_table__proc_stream_0_0_i5);
MR_def_label(__Compare___ll_backend__fact_table__proc_stream_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__proc_stream_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___io__output_stream_0_0);
MR_def_label(__Compare___ll_backend__fact_table__proc_stream_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module107)
	MR_init_entry1(__Unify___ll_backend__fact_table__sort_file_line_0_0);
	MR_init_label3(__Unify___ll_backend__fact_table__sort_file_line_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__fact_table__sort_file_line_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__sort_file_line_0_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__fact_table__sort_file_line_0_0_i4);
MR_def_label(__Unify___ll_backend__fact_table__sort_file_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__sort_file_line_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__fact_table__sort_file_line_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__fact_table__sort_file_line_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__fact_table__sort_file_line_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module108)
	MR_init_entry1(__Compare___ll_backend__fact_table__sort_file_line_0_0);
	MR_init_label5(__Compare___ll_backend__fact_table__sort_file_line_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__fact_table__sort_file_line_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__sort_file_line_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__fact_table__sort_file_line_0_0_i2);
MR_def_label(__Compare___ll_backend__fact_table__sort_file_line_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__fact_table__sort_file_line_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__fact_table__sort_file_line_0_0_i5);
MR_def_label(__Compare___ll_backend__fact_table__sort_file_line_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__sort_file_line_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__fact_table__sort_file_line_0_0_i9);
MR_def_label(__Compare___ll_backend__fact_table__sort_file_line_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__fact_table__sort_file_line_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, const);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__fact_table__sort_file_line_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module109)
	MR_init_entry1(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0);
	MR_init_label1(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__455__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module110)
	MR_init_entry1(ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1544__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1544__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__fact_table_module111)
	MR_init_entry1(ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__2954__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__2954__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__fact_table_maybe_bunch_0(void)
{
	ll_backend__fact_table_module0();
	ll_backend__fact_table_module1();
	ll_backend__fact_table_module2();
	ll_backend__fact_table_module3();
	ll_backend__fact_table_module4();
	ll_backend__fact_table_module5();
	ll_backend__fact_table_module6();
	ll_backend__fact_table_module7();
	ll_backend__fact_table_module8();
	ll_backend__fact_table_module9();
	ll_backend__fact_table_module10();
	ll_backend__fact_table_module11();
	ll_backend__fact_table_module12();
	ll_backend__fact_table_module13();
	ll_backend__fact_table_module14();
	ll_backend__fact_table_module15();
	ll_backend__fact_table_module16();
	ll_backend__fact_table_module17();
	ll_backend__fact_table_module18();
	ll_backend__fact_table_module19();
	ll_backend__fact_table_module20();
	ll_backend__fact_table_module21();
	ll_backend__fact_table_module22();
	ll_backend__fact_table_module23();
	ll_backend__fact_table_module24();
	ll_backend__fact_table_module25();
	ll_backend__fact_table_module26();
	ll_backend__fact_table_module27();
	ll_backend__fact_table_module28();
	ll_backend__fact_table_module29();
	ll_backend__fact_table_module30();
	ll_backend__fact_table_module31();
	ll_backend__fact_table_module32();
	ll_backend__fact_table_module33();
	ll_backend__fact_table_module34();
	ll_backend__fact_table_module35();
	ll_backend__fact_table_module36();
	ll_backend__fact_table_module37();
	ll_backend__fact_table_module38();
	ll_backend__fact_table_module39();
}

static void mercury__ll_backend__fact_table_maybe_bunch_1(void)
{
	ll_backend__fact_table_module40();
	ll_backend__fact_table_module41();
	ll_backend__fact_table_module42();
	ll_backend__fact_table_module43();
	ll_backend__fact_table_module44();
	ll_backend__fact_table_module45();
	ll_backend__fact_table_module46();
	ll_backend__fact_table_module47();
	ll_backend__fact_table_module48();
	ll_backend__fact_table_module49();
	ll_backend__fact_table_module50();
	ll_backend__fact_table_module51();
	ll_backend__fact_table_module52();
	ll_backend__fact_table_module53();
	ll_backend__fact_table_module54();
	ll_backend__fact_table_module55();
	ll_backend__fact_table_module56();
	ll_backend__fact_table_module57();
	ll_backend__fact_table_module58();
	ll_backend__fact_table_module59();
	ll_backend__fact_table_module60();
	ll_backend__fact_table_module61();
	ll_backend__fact_table_module62();
	ll_backend__fact_table_module63();
	ll_backend__fact_table_module64();
	ll_backend__fact_table_module65();
	ll_backend__fact_table_module66();
	ll_backend__fact_table_module67();
	ll_backend__fact_table_module68();
	ll_backend__fact_table_module69();
	ll_backend__fact_table_module70();
	ll_backend__fact_table_module71();
	ll_backend__fact_table_module72();
	ll_backend__fact_table_module73();
	ll_backend__fact_table_module74();
	ll_backend__fact_table_module75();
	ll_backend__fact_table_module76();
	ll_backend__fact_table_module77();
	ll_backend__fact_table_module78();
	ll_backend__fact_table_module79();
}

static void mercury__ll_backend__fact_table_maybe_bunch_2(void)
{
	ll_backend__fact_table_module80();
	ll_backend__fact_table_module81();
	ll_backend__fact_table_module82();
	ll_backend__fact_table_module83();
	ll_backend__fact_table_module84();
	ll_backend__fact_table_module85();
	ll_backend__fact_table_module86();
	ll_backend__fact_table_module87();
	ll_backend__fact_table_module88();
	ll_backend__fact_table_module89();
	ll_backend__fact_table_module90();
	ll_backend__fact_table_module91();
	ll_backend__fact_table_module92();
	ll_backend__fact_table_module93();
	ll_backend__fact_table_module94();
	ll_backend__fact_table_module95();
	ll_backend__fact_table_module96();
	ll_backend__fact_table_module97();
	ll_backend__fact_table_module98();
	ll_backend__fact_table_module99();
	ll_backend__fact_table_module100();
	ll_backend__fact_table_module101();
	ll_backend__fact_table_module102();
	ll_backend__fact_table_module103();
	ll_backend__fact_table_module104();
	ll_backend__fact_table_module105();
	ll_backend__fact_table_module106();
	ll_backend__fact_table_module107();
	ll_backend__fact_table_module108();
	ll_backend__fact_table_module109();
	ll_backend__fact_table_module110();
	ll_backend__fact_table_module111();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__fact_table__init(void);
void mercury__ll_backend__fact_table__init_type_tables(void);
void mercury__ll_backend__fact_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__fact_table__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__fact_table__init_complexity_procs(void);
#endif

void mercury__ll_backend__fact_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__fact_table_maybe_bunch_0();
	mercury__ll_backend__fact_table_maybe_bunch_1();
	mercury__ll_backend__fact_table_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_sort_file_line_0,
		ll_backend__fact_table__sort_file_line_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_proc_stream_0,
		ll_backend__fact_table__proc_stream_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_inferred_determinism_0,
		ll_backend__fact_table__inferred_determinism_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_hash_table_0,
		ll_backend__fact_table__hash_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0,
		ll_backend__fact_table__hash_index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0,
		ll_backend__fact_table__hash_entry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0,
		ll_backend__fact_table__fact_table_mode_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_fact_result_0,
		ll_backend__fact_table__fact_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_info_0,
		ll_backend__fact_table__fact_arg_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_0,
		ll_backend__fact_table__fact_arg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_error_reports_0,
		ll_backend__fact_table__error_reports_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__fact_table__type_ctor_info_error_report_0,
		ll_backend__fact_table__error_report_0_0);
	mercury__ll_backend__fact_table__init_debugger();
}

void mercury__ll_backend__fact_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_sort_file_line_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_proc_stream_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_inferred_determinism_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_hash_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_hash_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_hash_entry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_fact_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_fact_arg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_error_reports_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__fact_table__type_ctor_info_error_report_0);
	}
}


void mercury__ll_backend__fact_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__fact_table__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__fact_table__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
