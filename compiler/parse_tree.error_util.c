/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version 11.07.2-beta-2012-06-26, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__error_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "parse_tree.error_util.c"
#include "parse_tree.error_util.mh"

#line 28 "parse_tree.error_util.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "parse_tree.error_util.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "parse_tree.error_util.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "parse_tree.error_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "parse_tree.error_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "parse_tree.error_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "parse_tree.error_util.c"
#line 53 "parse_tree.error_util.c"
#ifndef PARSE_TREE__ERROR_UTIL_DECL_GUARD
#define PARSE_TREE__ERROR_UTIL_DECL_GUARD

#line 57 "parse_tree.error_util.c"
#line 58 "parse_tree.error_util.c"

#endif
#line 61 "parse_tree.error_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeClassDeclStruct
	mercury_data_parse_tree__error_util__type_class_decl_print_anything_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__error_util__type_ctor_info_actual_severity_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_line_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0,
	mercury_data_parse_tree__error_util__type_ctor_info_error_spec_accumulator_0,
	mercury_data_parse_tree__error_util__type_ctor_info_format_component_0,
	mercury_data_parse_tree__error_util__type_ctor_info_format_components_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0,
	mercury_data_parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0,
	mercury_data_parse_tree__error_util__type_ctor_info_maybe_printed_something_0,
	mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
	mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0,
	mercury_data_parse_tree__error_util__type_ctor_info_paragraph_0,
	mercury_data_parse_tree__error_util__type_ctor_info_plain_or_prefix_0,
	mercury_data_parse_tree__error_util__type_ctor_info_word_0;
MR_decl_label10(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label6(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0, 13,14,15,16,2,1)
MR_decl_label6(parse_tree__error_util__accumulate_error_specs_for_proc_3_0, 3,4,5,7,10,11)
MR_decl_label5(parse_tree__error_util__break_into_words_from_4_0, 17,4,6,7,2)
MR_decl_label7(parse_tree__error_util__compare_error_msgs_3_0, 5,3,2,10,8,12,13)
MR_decl_label4(parse_tree__error_util__compare_error_specs_3_0, 2,3,4,8)
MR_decl_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0, 238,4,5,6,3,11,12,13,10,18)
MR_decl_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0, 16,21,20,24,28,27,32,31,36,38)
MR_decl_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0, 35,40,44,48,52,53,39,61,59,66)
MR_decl_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0, 70,69,72,76,75,80,79,86,89,85)
MR_decl_label6(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0, 83,95,94,96,97,258)
MR_decl_label6(parse_tree__error_util__do_write_error_msgs_7_0, 21,3,7,5,4,9)
MR_decl_label10(parse_tree__error_util__do_write_error_pieces_7_0, 3,4,5,6,7,8,9,2,11,12)
MR_decl_label3(parse_tree__error_util__do_write_error_pieces_7_0, 13,14,17)
MR_decl_label8(parse_tree__error_util__do_write_error_spec_8_0, 2,3,5,10,9,11,12,7)
MR_decl_label5(parse_tree__error_util__find_word_end_3_0, 22,4,8,6,2)
MR_decl_label5(parse_tree__error_util__find_word_start_3_0, 21,2,6,5,1)
MR_decl_label5(parse_tree__error_util__get_later_words_6_0, 23,3,4,7,5)
MR_decl_label4(parse_tree__error_util__group_nonfirst_line_words_4_0, 20,4,6,8)
MR_decl_label10(parse_tree__error_util__group_words_5_0, 45,5,4,8,11,10,13,15,17,19)
MR_decl_label1(parse_tree__error_util__group_words_5_0, 20)
MR_decl_label2(parse_tree__error_util__maybe_write_out_errors_no_module_6_0, 15,4)
MR_decl_label2(parse_tree__error_util__report_warning_6_0, 2,3)
MR_decl_label7(parse_tree__error_util__unable_to_open_file_4_0, 2,3,4,5,6,7,8)
MR_decl_label6(parse_tree__error_util__worst_severity_in_specs_2_4_0, 25,3,4,6,8,9)
MR_decl_label1(parse_tree__error_util__write_error_pieces_6_0, 2)
MR_decl_label1(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0, 2)
MR_decl_label1(parse_tree__error_util__write_error_pieces_plain_4_0, 2)
MR_decl_label1(parse_tree__error_util__write_error_plain_with_progname_4_0, 2)
MR_decl_label1(parse_tree__error_util__write_error_specs_8_0, 3)
MR_decl_label4(parse_tree__error_util__write_line_rest_3_0, 11,4,5,13)
MR_decl_label10(parse_tree__error_util__write_lines_5_0, 32,5,6,7,8,10,12,13,14,34)
MR_decl_label10(parse_tree__error_util__write_msg_components_10_0, 63,3,6,5,9,11,8,14,17,16)
MR_decl_label9(parse_tree__error_util__write_msg_components_10_0, 18,13,20,22,23,26,27,25,28)
MR_decl_label7(fn__parse_tree__error_util__actual_error_severity_2_0, 47,3,5,7,9,10,13)
MR_decl_label1(fn__parse_tree__error_util__add_quotes_1_0, 2)
MR_decl_label4(fn__parse_tree__error_util__capitalize_1_0, 2,6,8,4)
MR_decl_label2(fn__parse_tree__error_util__choose_number_3_0, 6,3)
MR_decl_label4(fn__parse_tree__error_util__component_list_to_line_pieces_2_0, 31,5,12,13)
MR_decl_label4(fn__parse_tree__error_util__component_list_to_pieces_1_0, 3,5,44,16)
MR_decl_label5(fn__parse_tree__error_util__component_lists_to_pieces_1_0, 3,41,7,14,15)
MR_decl_label3(fn__parse_tree__error_util__contains_errors_2_0, 2,7,4)
MR_decl_label3(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0, 2,4,6)
MR_decl_label1(fn__parse_tree__error_util__describe_sym_name_1_0, 2)
MR_decl_label2(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0, 2,3)
MR_decl_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0, 232,4,6,12,14,16,11,8,19,21)
MR_decl_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0, 23,27,30,33,35,37,39,32,47,45)
MR_decl_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0, 49,51,54,57,58,56,62,63,61,71)
MR_decl_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0, 73,74,75,76,77,70,69,82,84,85)
MR_decl_label1(fn__parse_tree__error_util__error_pieces_to_string_2_2_0, 231)
MR_decl_label2(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0, 16,4)
MR_decl_label2(fn__parse_tree__error_util__is_or_are_1_0, 5,3)
MR_decl_label10(fn__parse_tree__error_util__join_prefixes_1_0, 75,4,10,12,14,15,9,6,18,21)
MR_decl_label2(fn__parse_tree__error_util__join_prefixes_1_0, 23,74)
MR_decl_label3(fn__parse_tree__error_util__join_string_and_tail_3_0, 30,8,29)
MR_decl_label5(fn__parse_tree__error_util__list_to_pieces_1_0, 3,5,46,16,18)
MR_decl_label1(fn__parse_tree__error_util__pred_or_func_to_string_1_0, 3)
MR_decl_label5(fn__parse_tree__error_util__project_msgs_contexts_1_0, 10,11,5,4,2)
MR_decl_label10(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0, 109,3,6,5,8,12,17,23,25,27)
MR_decl_label9(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0, 22,21,35,37,34,40,42,39,44)
MR_decl_label2(fn__parse_tree__error_util__rev_words_to_strings_1_0, 2,3)
MR_decl_label5(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0, 2,3,4,5,6)
MR_decl_label2(fn__parse_tree__error_util__sym_name_to_word_1_0, 2,3)
MR_decl_label6(fn__parse_tree__error_util__worst_severity_2_0, 5,3,9,7,20,21)
MR_decl_label2(__Unify___parse_tree__error_util__error_line_0_0, 6,1)
MR_decl_label5(__Unify___parse_tree__error_util__error_msg_0_0, 7,23,5,12,1)
MR_decl_label9(__Unify___parse_tree__error_util__error_msg_component_0_0, 5,9,13,19,20,43,17,24,1)
MR_decl_label10(__Unify___parse_tree__error_util__error_phase_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label7(__Unify___parse_tree__error_util__error_phase_0_0, 15,16,17,18,54,19,1)
MR_decl_label6(__Unify___parse_tree__error_util__error_severity_0_0, 5,6,20,7,9,1)
MR_decl_label4(__Unify___parse_tree__error_util__error_spec_0_0, 4,6,10,1)
MR_decl_label10(__Unify___parse_tree__error_util__format_component_0_0, 5,6,7,8,10,12,14,16,18,20)
MR_decl_label8(__Unify___parse_tree__error_util__format_component_0_0, 22,26,28,32,36,89,40,1)
MR_decl_label3(__Unify___parse_tree__error_util__paragraph_0_0, 4,6,1)
MR_decl_label4(__Unify___parse_tree__error_util__plain_or_prefix_0_0, 5,15,6,1)
MR_decl_label5(__Unify___parse_tree__error_util__word_0_0, 5,6,20,8,1)
MR_decl_label10(__Index___parse_tree__error_util__error_phase_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label5(__Index___parse_tree__error_util__error_phase_0_0, 13,14,15,16,17)
MR_decl_label10(__Index___parse_tree__error_util__format_component_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label6(__Index___parse_tree__error_util__format_component_0_0, 13,14,15,16,17,18)
MR_decl_label4(__Compare___parse_tree__error_util__error_line_0_0, 3,2,5,21)
MR_decl_label10(__Compare___parse_tree__error_util__error_msg_0_0, 3,2,9,13,17,7,5,25,27,72)
MR_decl_label10(__Compare___parse_tree__error_util__error_msg_component_0_0, 3,2,7,9,10,5,14,17,21,15)
MR_decl_label10(__Compare___parse_tree__error_util__error_msg_component_0_0, 27,12,31,32,33,29,38,39,40,42)
MR_decl_label10(__Compare___parse_tree__error_util__error_msg_component_0_0, 43,36,46,47,82,48,83,49,51,187)
MR_decl_label10(__Compare___parse_tree__error_util__error_phase_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___parse_tree__error_util__error_phase_0_0, 16,17,18,19,20,21,22,70,23,24)
MR_decl_label1(__Compare___parse_tree__error_util__error_phase_0_0, 8)
MR_decl_label10(__Compare___parse_tree__error_util__error_severity_0_0, 7,8,5,12,13,10,17,71,18,72)
MR_decl_label8(__Compare___parse_tree__error_util__error_severity_0_0, 15,21,22,23,25,29,33,40)
MR_decl_label5(__Compare___parse_tree__error_util__error_spec_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___parse_tree__error_util__format_component_0_0, 4,5,6,7,10,11,97,12,13,16)
MR_decl_label10(__Compare___parse_tree__error_util__format_component_0_0, 19,22,25,28,31,34,37,40,43,46)
MR_decl_label2(__Compare___parse_tree__error_util__format_component_0_0, 49,8)
MR_decl_label5(__Compare___parse_tree__error_util__paragraph_0_0, 3,2,5,9,29)
MR_decl_label9(__Compare___parse_tree__error_util__plain_or_prefix_0_0, 30,7,5,11,34,9,26,15,27)
MR_decl_label10(__Compare___parse_tree__error_util__word_0_0, 46,7,8,5,12,13,10,18,19,56)
MR_decl_label5(__Compare___parse_tree__error_util__word_0_0, 16,41,23,24,43)
MR_def_extern_entry(parse_tree__error_util__print_anything_3_0)
MR_def_extern_entry(fn__parse_tree__error_util__worst_severity_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__actual_error_severity_2_0)
MR_decl_static(parse_tree__error_util__worst_severity_in_specs_2_4_0)
MR_def_extern_entry(fn__parse_tree__error_util__worst_severity_in_specs_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__contains_errors_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0)
MR_def_extern_entry(parse_tree__error_util__sort_error_msgs_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__init_error_spec_accumulator_0_0)
MR_def_extern_entry(parse_tree__error_util__accumulate_error_specs_for_proc_3_0)
MR_def_extern_entry(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0)
MR_def_extern_entry(parse_tree__error_util__write_error_specs_8_0)
MR_def_extern_entry(parse_tree__error_util__maybe_write_out_errors_no_module_6_0)
MR_decl_static(parse_tree__error_util__write_line_rest_3_0)
MR_decl_static(parse_tree__error_util__write_lines_5_0)
MR_def_extern_entry(fn__parse_tree__error_util__pred_or_func_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__add_quotes_1_0)
MR_decl_static(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0)
MR_decl_static(fn__parse_tree__error_util__join_prefixes_1_0)
MR_decl_static(fn__parse_tree__error_util__rev_words_to_strings_1_0)
MR_decl_static(fn__parse_tree__error_util__sym_name_to_word_1_0)
MR_decl_static(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0)
MR_decl_static(parse_tree__error_util__find_word_start_3_0)
MR_decl_static(parse_tree__error_util__find_word_end_3_0)
MR_decl_static(parse_tree__error_util__break_into_words_from_4_0)
MR_decl_static(parse_tree__error_util__break_into_words_3_0)
MR_decl_static(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0)
MR_decl_static(parse_tree__error_util__get_later_words_6_0)
MR_decl_static(parse_tree__error_util__group_nonfirst_line_words_4_0)
MR_decl_static(parse_tree__error_util__group_words_5_0)
MR_decl_static(parse_tree__error_util__do_write_error_pieces_7_0)
MR_decl_static(parse_tree__error_util__write_msg_components_10_0)
MR_decl_static(parse_tree__error_util__do_write_error_msgs_7_0)
MR_decl_static(parse_tree__error_util__do_write_error_spec_8_0)
MR_def_extern_entry(parse_tree__error_util__write_error_spec_8_0)
MR_def_extern_entry(fn__parse_tree__error_util__string_to_words_piece_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__list_to_pieces_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__component_lists_to_pieces_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__component_list_to_pieces_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__component_list_to_line_pieces_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__choose_number_3_0)
MR_def_extern_entry(fn__parse_tree__error_util__is_or_are_1_0)
MR_def_extern_entry(parse_tree__error_util__write_error_pieces_plain_4_0)
MR_def_extern_entry(parse_tree__error_util__write_error_plain_with_progname_4_0)
MR_def_extern_entry(parse_tree__error_util__write_error_pieces_6_0)
MR_def_extern_entry(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0)
MR_decl_static(fn__parse_tree__error_util__join_string_and_tail_3_0)
MR_decl_static(fn__parse_tree__error_util__error_pieces_to_string_2_2_0)
MR_def_extern_entry(fn__parse_tree__error_util__error_pieces_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__describe_sym_name_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0)
MR_def_extern_entry(fn__parse_tree__error_util__capitalize_1_0)
MR_def_extern_entry(parse_tree__error_util__report_warning_6_0)
MR_def_extern_entry(parse_tree__error_util__unable_to_open_file_4_0)
MR_decl_static(fn__parse_tree__error_util__project_msgs_contexts_1_0)
MR_decl_static(parse_tree__error_util__compare_error_msgs_3_0)
MR_decl_static(parse_tree__error_util__compare_error_specs_3_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__actual_severity_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__actual_severity_0_0)
MR_decl_static(__Unify___parse_tree__error_util__error_line_0_0)
MR_decl_static(__Compare___parse_tree__error_util__error_line_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_msg_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_msg_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_msg_component_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_msg_component_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_phase_0_0)
MR_def_extern_entry(__Index___parse_tree__error_util__error_phase_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_phase_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_severity_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_severity_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_spec_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_spec_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__error_spec_accumulator_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__error_spec_accumulator_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__format_component_0_0)
MR_def_extern_entry(__Index___parse_tree__error_util__format_component_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__format_component_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__format_components_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__format_components_0_0)
MR_decl_static(__Unify___parse_tree__error_util__maybe_first_in_msg_0_0)
MR_decl_static(__Compare___parse_tree__error_util__maybe_first_in_msg_0_0)
MR_decl_static(__Unify___parse_tree__error_util__maybe_lower_next_initial_0_0)
MR_decl_static(__Compare___parse_tree__error_util__maybe_lower_next_initial_0_0)
MR_decl_static(__Unify___parse_tree__error_util__maybe_printed_something_0_0)
MR_decl_static(__Compare___parse_tree__error_util__maybe_printed_something_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__maybe_treat_as_first_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__maybe_treat_as_first_0_0)
MR_def_extern_entry(__Unify___parse_tree__error_util__mode_report_control_0_0)
MR_def_extern_entry(__Compare___parse_tree__error_util__mode_report_control_0_0)
MR_decl_static(__Unify___parse_tree__error_util__paragraph_0_0)
MR_decl_static(__Compare___parse_tree__error_util__paragraph_0_0)
MR_decl_static(__Unify___parse_tree__error_util__plain_or_prefix_0_0)
MR_decl_static(__Compare___parse_tree__error_util__plain_or_prefix_0_0)
MR_decl_static(__Unify___parse_tree__error_util__word_0_0)
MR_decl_static(__Compare___parse_tree__error_util__word_0_0)
MR_decl_static(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
0
},
{
2
},
{
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__sort_error_msgs_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__error_util__sort_error_msgs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__error_util, error_msg),
MR_CTOR0_ADDR(parse_tree__error_util, error_msg),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__error_util, error_spec),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(parse_tree__error_util__compare_error_msgs_3_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(parse_tree__error_util__compare_error_specs_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__accumulate_error_specs_for_proc_3_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__error_util__accumulate_error_specs_for_proc_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_string_const("first", 5)
},
{
MR_string_const("second", 6)
},
{
MR_string_const("third", 5)
},
{
MR_string_const("function", 8)
},
{
MR_string_const("predicate", 9)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
4,
MR_string_const("and", 3)
},
{
3,
MR_string_const(",", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_7 mercury_common_7[5] =
{
{
{
MR_TAG_COMMON(3,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,6,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,6,1),
MR_TAG_COMMON(1,7,2)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,7,4),
MR_TAG_COMMON(0,7,4)
}
},
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
	"actual_severity_error",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
	"actual_severity_warning",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
	"actual_severity_informational",
	2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_actual_severity_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_actual_severity_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
	&mercury_data_parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_actual_severity_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_actual_severity_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__actual_severity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__actual_severity_0_0)),
	"parse_tree.error_util",
	"actual_severity",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_actual_severity_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_actual_severity_0 },
	3,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_actual_severity_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_line_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_line_0_0 = {
	"error_line",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_line_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_line_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_line_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_line_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_line_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_line_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_line_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_line_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_line_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_line_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_line_0_0)),
	"parse_tree.error_util",
	"error_line",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_line_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_line_0 },
	1,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_line_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

const MR_ConstString mercury_data_parse_tree__error_util__field_names_error_msg_0_0[] = {
	"simple_context",
	"simple_components"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_0 = {
	"simple_msg",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_0_0,
	mercury_data_parse_tree__error_util__field_names_error_msg_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

const MR_ConstString mercury_data_parse_tree__error_util__field_names_error_msg_0_1[] = {
	"error_context",
	"error_treat_as_first",
	"error_extra_indent",
	"error_components"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_1 = {
	"error_msg",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_0_1,
	mercury_data_parse_tree__error_util__field_names_error_msg_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_1

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_msg_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_msg_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_msg_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_msg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_msg_0_0)),
	"parse_tree.error_util",
	"error_msg",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_msg_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_msg_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_msg_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_format_component_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_component_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_0 = {
	"always",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_component_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_component_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__options__type_ctor_info_option_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_1 = {
	"option_is_set",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_component_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_component_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_2 = {
	"verbose_only",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_component_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_component_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_3 = {
	"verbose_and_nonverbose",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_component_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_msg_component_0_4[] = {
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_parse_tree__error_util__exist_locns_error_msg_component_0_4[] = {
	{ 0, 1 }
};
extern const MR_TypeClassDeclStruct mercury_data_parse_tree__error_util__type_class_decl_print_anything_1;

static const MR_TypeClassConstraint_1Struct mercury_data_parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
	&mercury_data_parse_tree__error_util__type_class_decl_print_anything_1,
	{
	(MR_PseudoTypeInfo) 1
	}
};

const MR_TypeClassConstraint mercury_data_parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[] = {
		(MR_TypeClassConstraint) &mercury_data_parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1

};

static const MR_DuExistInfo mercury_data_parse_tree__error_util__exist_info_error_msg_component_0_4 = {
	0,
	1,
	1,
	mercury_data_parse_tree__error_util__exist_locns_error_msg_component_0_4,
	mercury_data_parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_4 = {
	"print_anything",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_msg_component_0_4,
	NULL,
	&mercury_data_parse_tree__error_util__exist_info_error_msg_component_0_4
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_4

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_msg_component_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_msg_component_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_msg_component_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_msg_component_0[] = {
	0,
	1,
	4,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_msg_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_msg_component_0_0)),
	"parse_tree.error_util",
	"error_msg_component",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_msg_component_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_msg_component_0 },
	5,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_msg_component_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_0 = {
	"phase_read_files",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_1 = {
	"phase_term_to_parse_tree",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_2 = {
	"phase_parse_tree_to_hlds",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_3 = {
	"phase_expand_types",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_4 = {
	"phase_type_check",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_5 = {
	"phase_inst_check",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_phase_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_6 = {
	"phase_mode_check",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_phase_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_7 = {
	"phase_purity_check",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_8 = {
	"phase_detism_check",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_phase_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_9 = {
	"phase_simplify",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_phase_0_9,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_10 = {
	"phase_dead_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_11 = {
	"phase_termination_analysis",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_12 = {
	"phase_accumulator_intro",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_13 = {
	"phase_auto_parallelism",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_14 = {
	"phase_interface_gen",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_15 = {
	"phase_code_gen",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_4,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_5,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_7,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_8,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_10,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_11,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_12,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_13,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_14,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_15

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_6

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_2[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_9

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_phase_0[] = {
	{ 14, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_phase_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_phase_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_12,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_13,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_15,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_10,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_8,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_5,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_14,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_6,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_7,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_9,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_11,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_phase_0_4
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_phase_0[] = {
	11,
	13,
	9,
	5,
	15,
	6,
	8,
	10,
	4,
	12,
	3,
	14,
	0,
	1,
	7,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_phase_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_phase_0_0)),
	"parse_tree.error_util",
	"error_phase",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_phase_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_phase_0 },
	16,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_phase_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_0 = {
	"severity_error",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_1 = {
	"severity_warning",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_2 = {
	"severity_informational",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_severity_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__options__type_ctor_info_option_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

const MR_ConstString mercury_data_parse_tree__error_util__field_names_error_severity_0_3[] = {
	"cond_option",
	"cond_option_value",
	"cond_if_match",
	"cond_if_no_match"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_3 = {
	"severity_conditional",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_severity_0_3,
	mercury_data_parse_tree__error_util__field_names_error_severity_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_severity_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_severity_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_3

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_severity_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_severity_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_severity_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_severity_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_error_severity_0_1
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_severity_0[] = {
	1,
	3,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_severity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_severity_0_0)),
	"parse_tree.error_util",
	"error_severity",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_severity_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_severity_0 },
	4,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_severity_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_error_spec_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

const MR_ConstString mercury_data_parse_tree__error_util__field_names_error_spec_0_0[] = {
	"error_severity",
	"error_phase",
	"error_msgs"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_error_spec_0_0 = {
	"error_spec",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_error_spec_0_0,
	mercury_data_parse_tree__error_util__field_names_error_spec_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_error_spec_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_spec_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_error_spec_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_error_spec_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_error_spec_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_error_spec_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_error_spec_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_spec_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_spec_0_0)),
	"parse_tree.error_util",
	"error_spec",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_error_spec_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_error_spec_0 },
	1,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_error_spec_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_accumulator_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__error_spec_accumulator_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__error_spec_accumulator_0_0)),
	"parse_tree.error_util",
	"error_spec_accumulator",
	{ 0 },
	{ (void *)&mercury_data_maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_0 = {
	"fixed",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_1 = {
	"quote",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_2 = {
	"int_fixed",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_3 = {
	"nth_fixed",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_4 = {
	"lower_case_next_if_not_first",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_5 = {
	"prefix",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_6 = {
	"suffix",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_7 = {
	"words",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_8 = {
	"words_quote",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_9 = {
	"sym_name",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_10 = {
	"sym_name_and_arity",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_10,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_11 = {
	"top_ctor_of_type",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_11,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_12 = {
	"p_or_f",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_12,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_13 = {
	"simple_call",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_13,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_14 = {
	"nl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_format_component_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_15 = {
	"nl_indent_delta",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	15,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_format_component_0_15,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_16 = {
	"blank_line",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_4,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_14,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_16

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_2[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_3[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_5,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_6,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_7,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_8,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_9,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_10,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_11,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_12,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_13,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_15

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_format_component_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_2 },
	{ 12, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__error_util__du_stag_ordered_format_component_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_format_component_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_16,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_4,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_14,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_15,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_12,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_5,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_13,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_6,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_9,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_10,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_11,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_7,
	&mercury_data_parse_tree__error_util__du_functor_desc_format_component_0_8
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_format_component_0[] = {
	1,
	9,
	2,
	6,
	3,
	8,
	11,
	15,
	16,
	12,
	13,
	14,
	7,
	10,
	4,
	5,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__format_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__format_component_0_0)),
	"parse_tree.error_util",
	"format_component",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_format_component_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_format_component_0 },
	17,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_format_component_0
};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_components_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__format_components_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__format_components_0_0)),
	"parse_tree.error_util",
	"format_components",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
	"first_in_msg",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
	"not_first_in_msg",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__maybe_first_in_msg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__maybe_first_in_msg_0_0)),
	"parse_tree.error_util",
	"maybe_first_in_msg",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_maybe_first_in_msg_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
	"lower_next_initial",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
	"do_not_lower_next_initial",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__maybe_lower_next_initial_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__maybe_lower_next_initial_0_0)),
	"parse_tree.error_util",
	"maybe_lower_next_initial",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
	"printed_something",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
	"have_not_printed_anything",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_maybe_printed_something_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_maybe_printed_something_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__maybe_printed_something_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__maybe_printed_something_0_0)),
	"parse_tree.error_util",
	"maybe_printed_something",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_maybe_printed_something_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_maybe_printed_something_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_maybe_printed_something_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
	"treat_as_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
	"do_not_treat_as_first",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
	&mercury_data_parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__maybe_treat_as_first_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__maybe_treat_as_first_0_0)),
	"parse_tree.error_util",
	"maybe_treat_as_first",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_maybe_treat_as_first_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
	"report_in_any_mode",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
	"report_only_if_in_all_modes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_value_ordered_mode_report_control_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__error_util__enum_name_ordered_mode_report_control_0[] = {
	&mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
	&mercury_data_parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_mode_report_control_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__mode_report_control_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__mode_report_control_0_0)),
	"parse_tree.error_util",
	"mode_report_control",
	{ (void *)mercury_data_parse_tree__error_util__enum_name_ordered_mode_report_control_0 },
	{ (void *)mercury_data_parse_tree__error_util__enum_value_ordered_mode_report_control_0 },
	2,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_mode_report_control_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_paragraph_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_paragraph_0_0 = {
	"paragraph",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_paragraph_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_paragraph_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_paragraph_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_paragraph_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_paragraph_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_paragraph_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_paragraph_0_0
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_paragraph_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_paragraph_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__paragraph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__paragraph_0_0)),
	"parse_tree.error_util",
	"paragraph",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_paragraph_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_paragraph_0 },
	1,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_paragraph_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_plain_or_prefix_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0 = {
	"plain",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_plain_or_prefix_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_plain_or_prefix_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1 = {
	"prefix",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_plain_or_prefix_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2 = {
	"lower_next",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_plain_or_prefix_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_plain_or_prefix_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_plain_or_prefix_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__plain_or_prefix_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__plain_or_prefix_0_0)),
	"parse_tree.error_util",
	"plain_or_prefix",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_plain_or_prefix_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0 },
	3,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_plain_or_prefix_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_word_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_word_0_0 = {
	"plain_word",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_word_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_word_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_word_0_1 = {
	"prefix_word",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_word_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__error_util__field_types_word_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_word_0_2 = {
	"suffix_word",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__error_util__field_types_word_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__error_util__du_functor_desc_word_0_3 = {
	"lower_next_word",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_word_0_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_3

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_word_0_1[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_word_0_2[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_stag_ordered_word_0_3[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_2

};

const MR_DuPtagLayout mercury_data_parse_tree__error_util__du_ptag_ordered_word_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__error_util__du_stag_ordered_word_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_word_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_word_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__error_util__du_stag_ordered_word_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__error_util__du_name_ordered_word_0[] = {
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_3,
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_0,
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_1,
	&mercury_data_parse_tree__error_util__du_functor_desc_word_0_2
};

const MR_Integer mercury_data_parse_tree__error_util__functor_number_map_word_0[] = {
	1,
	2,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_word_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__error_util__word_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__error_util__word_0_0)),
	"parse_tree.error_util",
	"word",
	{ (void *)mercury_data_parse_tree__error_util__du_name_ordered_word_0 },
	{ (void *)mercury_data_parse_tree__error_util__du_ptag_ordered_word_0 },
	4,
	4,
	mercury_data_parse_tree__error_util__functor_number_map_word_0
};

const MR_ConstString mercury_data_parse_tree__error_util__type_class_id_var_names_print_anything_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_parse_tree__error_util__type_class_id_method_ids_print_anything_1[] = {
	{ "print_anything", 3, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_parse_tree__error_util__type_class_id_print_anything_1 = {
	"parse_tree.error_util",
	"print_anything",
	1,
	1,
	1,
	mercury_data_parse_tree__error_util__type_class_id_var_names_print_anything_1,
	mercury_data_parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

const MR_TypeClassDeclStruct mercury_data_parse_tree__error_util__type_class_decl_print_anything_1 = {
	&mercury_data_parse_tree__error_util__type_class_id_print_anything_1,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_2 = {
{
MR_PREDICATE,
"parse_tree.error_util",
"parse_tree.error_util",
"do_write_error_spec",
8,
0
},
"parse_tree.error_util",
"error_util.m",
716,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__write_error_specs_8_0_1 = {
{
MR_PREDICATE,
"parse_tree.error_util",
"parse_tree.error_util",
"compare_error_specs",
3,
0
},
"parse_tree.error_util",
"error_util.m",
677,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__accumulate_error_specs_for_proc_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.error_util",
"parse_tree.error_util",
"lambda_error_util_m_632",
1,
0
},
"parse_tree.error_util",
"error_util.m",
632,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__error_util__sort_error_msgs_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.error_util",
"parse_tree.error_util",
"compare_error_msgs",
3,
0
},
"parse_tree.error_util",
"error_util.m",
578,
"4"
};


MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(parse_tree__error_util_module0)
	MR_init_entry1(parse_tree__error_util__print_anything_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__print_anything_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_anything'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__print_anything_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parse_tree__error_util__print_anything_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module1)
	MR_init_entry1(fn__parse_tree__error_util__worst_severity_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__worst_severity_2_0);
	MR_init_label6(fn__parse_tree__error_util__worst_severity_2_0,5,3,9,7,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'worst_severity'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__worst_severity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i7);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__worst_severity_2_0_i21);
	}
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__worst_severity_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module2)
	MR_init_entry1(fn__parse_tree__error_util__actual_error_severity_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__actual_error_severity_2_0);
	MR_init_label7(fn__parse_tree__error_util__actual_error_severity_2_0,47,3,5,7,9,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'actual_error_severity'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__actual_error_severity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__parse_tree__error_util__actual_error_severity_2_0_i9);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i47);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__actual_error_severity_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__parse_tree__error_util__actual_error_severity_2_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module3)
	MR_init_entry1(parse_tree__error_util__worst_severity_in_specs_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__worst_severity_in_specs_2_4_0);
	MR_init_label6(parse_tree__error_util__worst_severity_in_specs_2_4_0,25,3,4,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'worst_severity_in_specs_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__worst_severity_in_specs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__actual_error_severity_2_0,
		parse_tree__error_util__worst_severity_in_specs_2_4_0_i4);
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i25);
	}
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i25);
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__worst_severity_2_0,
		parse_tree__error_util__worst_severity_in_specs_2_4_0_i9);
MR_def_label(parse_tree__error_util__worst_severity_in_specs_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__worst_severity_in_specs_2_4_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module4)
	MR_init_entry1(fn__parse_tree__error_util__worst_severity_in_specs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__worst_severity_in_specs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'worst_severity_in_specs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__worst_severity_in_specs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(parse_tree__error_util__worst_severity_in_specs_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module5)
	MR_init_entry1(fn__parse_tree__error_util__contains_errors_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__contains_errors_2_0);
	MR_init_label3(fn__parse_tree__error_util__contains_errors_2_0,2,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_errors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__contains_errors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__error_util__worst_severity_in_specs_2_4_0,
		fn__parse_tree__error_util__contains_errors_2_0_i2);
MR_def_label(fn__parse_tree__error_util__contains_errors_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__contains_errors_2_0_i4);
	}
MR_def_label(fn__parse_tree__error_util__contains_errors_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__parse_tree__error_util__contains_errors_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__contains_errors_2_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module6)
	MR_init_entry1(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0);
	MR_init_label3(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_errors_and_or_warnings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__error_util__worst_severity_in_specs_2_4_0,
		fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0_i2);
MR_def_label(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__parse_tree__error_util__contains_errors_and_or_warnings_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_and_remove_dups_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module7)
	MR_init_entry1(parse_tree__error_util__sort_error_msgs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__sort_error_msgs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort_error_msgs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__sort_error_msgs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__sort_and_remove_dups_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module8)
	MR_init_entry1(fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_error_spec_accumulator'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__intersect_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module9)
	MR_init_entry1(parse_tree__error_util__accumulate_error_specs_for_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__accumulate_error_specs_for_proc_3_0);
	MR_init_label6(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,3,4,5,7,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_error_specs_for_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__accumulate_error_specs_for_proc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i3);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i4);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i5);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__union_3_0,
		parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i10);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		parse_tree__error_util__accumulate_error_specs_for_proc_3_0_i11);
MR_def_label(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module10)
	MR_init_entry1(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);
	MR_init_label2(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_spec_accumulator_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0_i4);
MR_def_label(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__to_sorted_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_2);

MR_BEGIN_MODULE(parse_tree__error_util_module11)
	MR_init_entry1(parse_tree__error_util__write_error_specs_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_specs_8_0);
	MR_init_label1(parse_tree__error_util__write_error_specs_8_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_specs'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_specs_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_3_0,
		parse_tree__error_util__write_error_specs_8_0_i3);
MR_def_label(parse_tree__error_util__write_error_specs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__error_util__do_write_error_spec_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module12)
	MR_init_entry1(parse_tree__error_util__maybe_write_out_errors_no_module_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__maybe_write_out_errors_no_module_6_0);
	MR_init_label2(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,15,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_out_errors_no_module'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__maybe_write_out_errors_no_module_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__maybe_write_out_errors_no_module_6_0_i15);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		parse_tree__error_util__maybe_write_out_errors_no_module_6_0_i4);
MR_def_label(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module13)
	MR_init_entry1(parse_tree__error_util__write_line_rest_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_line_rest_3_0);
	MR_init_label4(parse_tree__error_util__write_line_rest_3_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_line_rest'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__write_line_rest_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__write_line_rest_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_line_rest_3_0_i13);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		parse_tree__error_util__write_line_rest_3_0_i4);
MR_def_label(parse_tree__error_util__write_line_rest_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__error_util__write_line_rest_3_0_i5);
MR_def_label(parse_tree__error_util__write_line_rest_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parse_tree__error_util__write_line_rest_3_0_i11);
MR_def_label(parse_tree__error_util__write_line_rest_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__pad_left_4_0);
MR_decl_entry(parse_tree__prog_out__write_context_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module14)
	MR_init_entry1(parse_tree__error_util__write_lines_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_lines_5_0);
	MR_init_label10(parse_tree__error_util__write_lines_5_0,32,5,6,7,8,10,12,13,14,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_lines'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__write_lines_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__write_lines_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_lines_5_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_lines_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = ((MR_Integer) MR_r3 + ((MR_Integer) MR_tfield(0, MR_tempr1, 0) * (MR_Integer) 2));
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(string__pad_left_4_0,
		parse_tree__error_util__write_lines_5_0_i7);
MR_def_label(parse_tree__error_util__write_lines_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		parse_tree__error_util__write_lines_5_0_i6);
MR_def_label(parse_tree__error_util__write_lines_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = ((MR_Integer) MR_sv(2) + ((MR_Integer) MR_tfield(0, MR_tempr1, 0) * (MR_Integer) 2));
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(string__pad_left_4_0,
		parse_tree__error_util__write_lines_5_0_i7);
MR_def_label(parse_tree__error_util__write_lines_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__error_util__write_lines_5_0_i8);
MR_def_label(parse_tree__error_util__write_lines_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_lines_5_0_i10);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		parse_tree__error_util__write_lines_5_0_i14);
MR_def_label(parse_tree__error_util__write_lines_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__error_util__write_lines_5_0_i12);
MR_def_label(parse_tree__error_util__write_lines_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__error_util__write_line_rest_3_0,
		parse_tree__error_util__write_lines_5_0_i13);
MR_def_label(parse_tree__error_util__write_lines_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		parse_tree__error_util__write_lines_5_0_i14);
MR_def_label(parse_tree__error_util__write_lines_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__error_util__write_lines_5_0_i32);
MR_def_label(parse_tree__error_util__write_lines_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module15)
	MR_init_entry1(fn__parse_tree__error_util__pred_or_func_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__pred_or_func_to_string_1_0);
	MR_init_label1(fn__parse_tree__error_util__pred_or_func_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_or_func_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__pred_or_func_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__pred_or_func_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("function", 8);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__pred_or_func_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("predicate", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__error_util_module16)
	MR_init_entry1(fn__parse_tree__error_util__add_quotes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__add_quotes_1_0);
	MR_init_label1(fn__parse_tree__error_util__add_quotes_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_quotes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__add_quotes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__add_quotes_1_0_i2);
MR_def_label(fn__parse_tree__error_util__add_quotes_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(char__is_upper_1_0);
MR_decl_entry(char__to_lower_2_0);
MR_decl_entry(string__first_char_3_4);

MR_BEGIN_MODULE(parse_tree__error_util_module17)
	MR_init_entry1(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0);
	MR_init_label10(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,109,3,6,5,8,12,17,23,25,27)
	MR_init_label9(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,22,21,35,37,34,40,42,39,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_words_to_rev_plain_or_prefix'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i6);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i8);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i37);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i12);
	}
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tfield(2, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i37);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i21);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r2, 0);
	}
	MR_np_call_localret_ent(string__first_char_3_3,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i23);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i22);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_upper_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i25);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__to_lower_2_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i27);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__first_char_3_4,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i44);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i109);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i34);
	}
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i35);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i37);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i39);
	}
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(2, MR_r4, 0);
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i40);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i42);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(3, MR_r4, 0);
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i44);
MR_def_label(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0_i109);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module18)
	MR_init_entry1(fn__parse_tree__error_util__join_prefixes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__join_prefixes_1_0);
	MR_init_label10(fn__parse_tree__error_util__join_prefixes_1_0,75,4,10,12,14,15,9,6,18,21)
	MR_init_label2(fn__parse_tree__error_util__join_prefixes_1_0,23,74)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'join_prefixes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__join_prefixes_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i75);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__parse_tree__error_util__join_prefixes_1_0,
		fn__parse_tree__error_util__join_prefixes_1_0_i4);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i74);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__first_char_3_3,
		fn__parse_tree__error_util__join_prefixes_1_0_i10);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i9);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_upper_1_0,
		fn__parse_tree__error_util__join_prefixes_1_0_i12);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__to_lower_2_0,
		fn__parse_tree__error_util__join_prefixes_1_0_i14);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__first_char_3_4,
		fn__parse_tree__error_util__join_prefixes_1_0_i15);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_prefixes_1_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(2, MR_sv(1), 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__join_prefixes_1_0_i23);
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
MR_def_label(fn__parse_tree__error_util__join_prefixes_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module19)
	MR_init_entry1(fn__parse_tree__error_util__rev_words_to_strings_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__rev_words_to_strings_1_0);
	MR_init_label2(fn__parse_tree__error_util__rev_words_to_strings_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_words_to_strings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__rev_words_to_strings_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		fn__parse_tree__error_util__rev_words_to_strings_1_0_i2);
MR_def_label(fn__parse_tree__error_util__rev_words_to_strings_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, plain_or_prefix);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__parse_tree__error_util__rev_words_to_strings_1_0_i3);
MR_def_label(fn__parse_tree__error_util__rev_words_to_strings_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_prefixes_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module20)
	MR_init_entry1(fn__parse_tree__error_util__sym_name_to_word_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__sym_name_to_word_1_0);
	MR_init_label2(fn__parse_tree__error_util__sym_name_to_word_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_word'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__sym_name_to_word_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__sym_name_to_word_1_0_i2);
MR_def_label(fn__parse_tree__error_util__sym_name_to_word_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__sym_name_to_word_1_0_i3);
MR_def_label(fn__parse_tree__error_util__sym_name_to_word_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module21)
	MR_init_entry1(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0);
	MR_init_label5(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_and_arity_to_word'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0_i2);
MR_def_label(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0_i3);
MR_def_label(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0_i4);
MR_def_label(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0_i5);
MR_def_label(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0_i6);
MR_def_label(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
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

MR_decl_entry(string__unsafe_index_next_4_0);
MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module22)
	MR_init_entry1(parse_tree__error_util__find_word_start_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__find_word_start_3_0);
	MR_init_label5(parse_tree__error_util__find_word_start_3_0,21,2,6,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_word_start'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__find_word_start_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__find_word_start_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__unsafe_index_next_4_0,
		parse_tree__error_util__find_word_start_3_0_i2);
MR_def_label(parse_tree__error_util__find_word_start_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__find_word_start_3_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		parse_tree__error_util__find_word_start_3_0_i6);
MR_def_label(parse_tree__error_util__find_word_start_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__find_word_start_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__find_word_start_3_0_i21);
MR_def_label(parse_tree__error_util__find_word_start_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__error_util__find_word_start_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module23)
	MR_init_entry1(parse_tree__error_util__find_word_end_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__find_word_end_3_0);
	MR_init_label5(parse_tree__error_util__find_word_end_3_0,22,4,8,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_word_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__find_word_end_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__find_word_end_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__unsafe_index_next_4_0,
		parse_tree__error_util__find_word_end_3_0_i4);
MR_def_label(parse_tree__error_util__find_word_end_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__find_word_end_3_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		parse_tree__error_util__find_word_end_3_0_i8);
MR_def_label(parse_tree__error_util__find_word_end_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__find_word_end_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__error_util__find_word_end_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__find_word_end_3_0_i22);
MR_def_label(parse_tree__error_util__find_word_end_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__between_4_0);

MR_BEGIN_MODULE(parse_tree__error_util_module24)
	MR_init_entry1(parse_tree__error_util__break_into_words_from_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__break_into_words_from_4_0);
	MR_init_label5(parse_tree__error_util__break_into_words_from_4_0,17,4,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'break_into_words_from'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__break_into_words_from_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__break_into_words_from_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(parse_tree__error_util__find_word_start_3_0,
		parse_tree__error_util__break_into_words_from_4_0_i4);
MR_def_label(parse_tree__error_util__break_into_words_from_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__break_into_words_from_4_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__error_util__find_word_end_3_0,
		parse_tree__error_util__break_into_words_from_4_0_i6);
MR_def_label(parse_tree__error_util__break_into_words_from_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(string__between_4_0,
		parse_tree__error_util__break_into_words_from_4_0_i7);
MR_def_label(parse_tree__error_util__break_into_words_from_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__break_into_words_from_4_0_i17);
	}
MR_def_label(parse_tree__error_util__break_into_words_from_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module25)
	MR_init_entry1(parse_tree__error_util__break_into_words_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__break_into_words_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'break_into_words'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__break_into_words_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__error_util__break_into_words_from_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__snoc_2_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module26)
	MR_init_entry1(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__convert_components_to_paragraphs_acc_5_0);
	MR_init_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,238,4,5,6,3,11,12,13,10,18)
	MR_init_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,16,21,20,24,28,27,32,31,36,38)
	MR_init_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,35,40,44,48,52,53,39,61,59,66)
	MR_init_label10(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,70,69,72,76,75,80,79,86,89,85)
	MR_init_label6(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,83,95,94,96,97,258)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_components_to_paragraphs_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i4);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, plain_or_prefix);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i5);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__join_prefixes_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i6);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__snoc_2_0);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i10);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i11);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, plain_or_prefix);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i12);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__join_prefixes_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i13);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i38);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i18);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i20);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__error_util__rev_words_to_strings_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i21);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i38);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(2, MR_r5, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i28);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i31);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i32);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,11)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i35);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r5, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__error_util__rev_words_to_strings_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i36);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i38);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i39);
	}
	MR_r6 = MR_tfield(3, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(1, MR_r2, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i44);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_tfield(1, MR_r2, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,3)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i48);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_tfield(1, MR_r2, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i52);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("th", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i53);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,9)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i61);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,5,4);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i66);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r5, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,10)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i69);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i70);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__error_util__break_into_words_3_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i95);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tfield(3, MR_r5, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i75);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(fn__parse_tree__error_util__sym_name_to_word_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i76);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i79);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i80);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,8)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i83);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i86);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i85);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__parse_tree__error_util__sym_name_and_arity_to_word_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i89);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
	}
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("convert_components_to_paragraphs_acc: type is variable", 54);
	MR_np_call_localret_ent(require__error_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i258);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i94);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parse_tree__error_util__break_into_words_3_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i95);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i96);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__error_util__break_into_words_3_0,
		parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i97);
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
MR_def_label(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0_i238);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__count_codepoints_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(parse_tree__error_util_module27)
	MR_init_entry1(parse_tree__error_util__get_later_words_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__get_later_words_6_0);
	MR_init_label5(parse_tree__error_util__get_later_words_6_0,23,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_later_words'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__get_later_words_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__get_later_words_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__get_later_words_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__error_util__get_later_words_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		parse_tree__error_util__get_later_words_6_0_i4);
MR_def_label(parse_tree__error_util__get_later_words_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (((MR_Integer) MR_sv(2) + (MR_Integer) 1) + (MR_Integer) MR_r1);
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(parse_tree__error_util__get_later_words_6_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		parse_tree__error_util__get_later_words_6_0_i7);
MR_def_label(parse_tree__error_util__get_later_words_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parse_tree__error_util__get_later_words_6_0_i23);
	}
MR_def_label(parse_tree__error_util__get_later_words_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module28)
	MR_init_entry1(parse_tree__error_util__group_nonfirst_line_words_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__group_nonfirst_line_words_4_0);
	MR_init_label4(parse_tree__error_util__group_nonfirst_line_words_4_0,20,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_nonfirst_line_words'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__group_nonfirst_line_words_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__group_nonfirst_line_words_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__error_util__group_nonfirst_line_words_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		parse_tree__error_util__group_nonfirst_line_words_4_0_i4);
MR_def_label(parse_tree__error_util__group_nonfirst_line_words_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = ((MR_Integer) MR_sv(2) - ((MR_Integer) MR_sv(1) * (MR_Integer) 2));
	}
	MR_np_call_localret_ent(parse_tree__error_util__get_later_words_6_0,
		parse_tree__error_util__group_nonfirst_line_words_4_0_i6);
MR_def_label(parse_tree__error_util__group_nonfirst_line_words_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(parse_tree__error_util__group_nonfirst_line_words_4_0,
		parse_tree__error_util__group_nonfirst_line_words_4_0_i8);
MR_def_label(parse_tree__error_util__group_nonfirst_line_words_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__error_util_module29)
	MR_init_entry1(parse_tree__error_util__group_words_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__group_words_5_0);
	MR_init_label10(parse_tree__error_util__group_words_5_0,45,5,4,8,11,10,13,15,17,19)
	MR_init_label1(parse_tree__error_util__group_words_5_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_words'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__group_words_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__group_words_5_0_i45);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__error_util__group_words_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__error_util__group_words_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tempr3;
	MR_sv(5) = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tfield(0, MR_tempr3, 2));
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_line);
	MR_GOTO_LAB(parse_tree__error_util__group_words_5_0_i4);
	}
MR_def_label(parse_tree__error_util__group_words_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(7) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_tfield(0, MR_tempr2, 2));
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_line);
	}
MR_def_label(parse_tree__error_util__group_words_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__error_util__group_words_5_0_i8);
MR_def_label(parse_tree__error_util__group_words_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__group_words_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(parse_tree__error_util__group_words_5_0,
		parse_tree__error_util__group_words_5_0_i11);
MR_def_label(parse_tree__error_util__group_words_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(parse_tree__error_util__group_words_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		parse_tree__error_util__group_words_5_0_i13);
MR_def_label(parse_tree__error_util__group_words_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	MR_r3 = ((MR_Integer) MR_sv(3) - ((MR_Integer) MR_sv(2) * (MR_Integer) 2));
	}
	MR_np_call_localret_ent(parse_tree__error_util__get_later_words_6_0,
		parse_tree__error_util__group_words_5_0_i15);
MR_def_label(parse_tree__error_util__group_words_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__error_util__group_nonfirst_line_words_4_0,
		parse_tree__error_util__group_words_5_0_i17);
MR_def_label(parse_tree__error_util__group_words_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(parse_tree__error_util__group_words_5_0,
		parse_tree__error_util__group_words_5_0_i19);
MR_def_label(parse_tree__error_util__group_words_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__error_util__group_words_5_0_i20);
MR_def_label(parse_tree__error_util__group_words_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__cord__list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module30)
	MR_init_entry1(parse_tree__error_util__do_write_error_pieces_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__do_write_error_pieces_7_0);
	MR_init_label10(parse_tree__error_util__do_write_error_pieces_7_0,3,4,5,6,7,8,9,2,11,12)
	MR_init_label3(parse_tree__error_util__do_write_error_pieces_7_0,13,14,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_write_error_pieces'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__do_write_error_pieces_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_pieces_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_GOTO_LAB(parse_tree__error_util__do_write_error_pieces_7_0_i2);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term__context_file_2_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i4);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i5);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i6);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i7);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i8);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,3)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_pieces_7_0_i9);
	}
	MR_sv(6) = ((((MR_Integer) MR_sv(6) + (MR_Integer) 1) + (MR_Integer) 3) + (MR_Integer) 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
	MR_GOTO_LAB(parse_tree__error_util__do_write_error_pieces_7_0_i2);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = ((((MR_Integer) MR_sv(6) + (MR_Integer) 1) + (MR_Integer) MR_r1) + (MR_Integer) 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, paragraph);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i11);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__convert_components_to_paragraphs_acc_5_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i12);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i13);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_pieces_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = ((MR_Integer) MR_sv(4) - ((MR_Integer) MR_sv(6) + (MR_Integer) MR_sv(3)));
	}
	MR_np_call_localret_ent(parse_tree__error_util__group_words_5_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i17);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = ((MR_Integer) MR_sv(4) - ((MR_Integer) MR_sv(6) + (MR_Integer) MR_sv(3)));
	}
	MR_np_call_localret_ent(parse_tree__error_util__group_words_5_0,
		parse_tree__error_util__do_write_error_pieces_7_0_i17);
MR_def_label(parse_tree__error_util__do_write_error_pieces_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__error_util__write_lines_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__io_set_extra_error_info_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module31)
	MR_init_entry1(parse_tree__error_util__write_msg_components_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_msg_components_10_0);
	MR_init_label10(parse_tree__error_util__write_msg_components_10_0,63,3,6,5,9,11,8,14,17,16)
	MR_init_label9(parse_tree__error_util__write_msg_components_10_0,18,13,20,22,23,26,27,25,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_msg_components'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__write_msg_components_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__write_msg_components_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 132;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i6);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__error_util__do_write_error_pieces_7_0,
		parse_tree__error_util__write_msg_components_10_0_i27);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_r8;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i9);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(7))) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i17);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(parse_tree__error_util__write_msg_components_10_0,
		parse_tree__error_util__write_msg_components_10_0_i11);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i63);
	}
MR_def_label(parse_tree__error_util__write_msg_components_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(2, MR_r8, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 46;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i14);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__io_set_extra_error_info_3_0,
		parse_tree__error_util__write_msg_components_10_0_i17);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i63);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i18);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__error_util__do_write_error_pieces_7_0,
		parse_tree__error_util__write_msg_components_10_0_i27);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,1)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parse_tree__error_util__write_msg_components_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__parse_tree__error_util__write_msg_components_10_0_i27);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_r8;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 46;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i22);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_msg_components_10_0_i23);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__error_util__do_write_error_pieces_7_0,
		parse_tree__error_util__write_msg_components_10_0_i26);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__io_set_extra_error_info_3_0,
		parse_tree__error_util__write_msg_components_10_0_i27);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i63);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__error_util__do_write_error_pieces_7_0,
		parse_tree__error_util__write_msg_components_10_0_i28);
MR_def_label(parse_tree__error_util__write_msg_components_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__error_util__write_msg_components_10_0_i63);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module32)
	MR_init_entry1(parse_tree__error_util__do_write_error_msgs_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__do_write_error_msgs_7_0);
	MR_init_label6(parse_tree__error_util__do_write_error_msgs_7_0,21,3,7,5,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_write_error_msgs'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__do_write_error_msgs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i5);
	}
	MR_r9 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i7);
	}
	MR_r9 = MR_r4;
	MR_r4 = MR_r2;
	MR_r6 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r10 = MR_r3;
	MR_r3 = ((MR_Integer) MR_tfield(1, MR_tempr1, 2) * (MR_Integer) 2);
	MR_r5 = MR_r10;
	MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i4);
	}
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r4;
	MR_r4 = MR_r2;
	MR_r6 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r1 = MR_tfield(1, MR_tempr1, 3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = ((MR_Integer) MR_tfield(1, MR_tempr1, 2) * (MR_Integer) 2);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i4);
	}
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r8;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_tempr3;
	}
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(parse_tree__error_util__write_msg_components_10_0,
		parse_tree__error_util__do_write_error_msgs_7_0_i9);
MR_def_label(parse_tree__error_util__do_write_error_msgs_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parse_tree__error_util__do_write_error_msgs_7_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(libs__compiler_util__record_warning_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module33)
	MR_init_entry1(parse_tree__error_util__do_write_error_spec_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__do_write_error_spec_8_0);
	MR_init_label8(parse_tree__error_util__do_write_error_spec_8_0,2,3,5,10,9,11,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_write_error_spec'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__do_write_error_spec_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__error_util__do_write_error_msgs_7_0,
		parse_tree__error_util__do_write_error_spec_8_0_i2);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__actual_error_severity_2_0,
		parse_tree__error_util__do_write_error_spec_8_0_i3);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_spec_8_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_spec_8_0_i7);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_spec_8_0_i9);
	}
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__error_util__do_write_error_spec_8_0_i10);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(parse_tree__error_util__do_write_error_spec_8_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__compiler_util__record_warning_3_0,
		parse_tree__error_util__do_write_error_spec_8_0_i12);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__error_util__do_write_error_spec_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.error_util", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140parse_tree.error_util.do_write_error_spec\'/8", 55);
	MR_r3 = (MR_Word) MR_string_const("MaybeActual is no", 17);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module34)
	MR_init_entry1(parse_tree__error_util__write_error_spec_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_spec_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_spec'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_spec_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_spec_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module35)
	MR_init_entry1(fn__parse_tree__error_util__string_to_words_piece_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__string_to_words_piece_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_words_piece'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__string_to_words_piece_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module36)
	MR_init_entry1(fn__parse_tree__error_util__list_to_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__list_to_pieces_1_0);
	MR_init_label5(fn__parse_tree__error_util__list_to_pieces_1_0,3,5,46,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__list_to_pieces_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__list_to_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__list_to_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__list_to_pieces_1_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__list_to_pieces_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__list_to_pieces_1_0_i46);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__parse_tree__error_util__list_to_pieces_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__list_to_pieces_1_0_i16);
MR_def_label(fn__parse_tree__error_util__list_to_pieces_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__error_util__list_to_pieces_1_0,
		fn__parse_tree__error_util__list_to_pieces_1_0_i18);
MR_def_label(fn__parse_tree__error_util__list_to_pieces_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module37)
	MR_init_entry1(fn__parse_tree__error_util__component_lists_to_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__component_lists_to_pieces_1_0);
	MR_init_label5(fn__parse_tree__error_util__component_lists_to_pieces_1_0,3,41,7,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'component_lists_to_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__component_lists_to_pieces_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_lists_to_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__component_lists_to_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_lists_to_pieces_1_0_i41);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__component_lists_to_pieces_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_lists_to_pieces_1_0_i7);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__error_util__component_lists_to_pieces_1_0_i15);
MR_def_label(fn__parse_tree__error_util__component_lists_to_pieces_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__parse_tree__error_util__component_lists_to_pieces_1_0,
		fn__parse_tree__error_util__component_lists_to_pieces_1_0_i14);
MR_def_label(fn__parse_tree__error_util__component_lists_to_pieces_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__error_util__component_lists_to_pieces_1_0_i15);
MR_def_label(fn__parse_tree__error_util__component_lists_to_pieces_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module38)
	MR_init_entry1(fn__parse_tree__error_util__component_list_to_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__component_list_to_pieces_1_0);
	MR_init_label4(fn__parse_tree__error_util__component_list_to_pieces_1_0,3,5,44,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'component_list_to_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__component_list_to_pieces_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_list_to_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__component_list_to_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_list_to_pieces_1_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__component_list_to_pieces_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_list_to_pieces_1_0_i44);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__parse_tree__error_util__component_list_to_pieces_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r1 = MR_r2;
	}
	MR_np_localcall_lab(fn__parse_tree__error_util__component_list_to_pieces_1_0,
		fn__parse_tree__error_util__component_list_to_pieces_1_0_i16);
MR_def_label(fn__parse_tree__error_util__component_list_to_pieces_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module39)
	MR_init_entry1(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__component_list_to_line_pieces_2_0);
	MR_init_label4(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,31,5,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'component_list_to_line_pieces'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__component_list_to_line_pieces_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_list_to_line_pieces_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__component_list_to_line_pieces_2_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__error_util__component_list_to_line_pieces_2_0_i13);
MR_def_label(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,3);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r4;
	MR_np_localcall_lab(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__parse_tree__error_util__component_list_to_line_pieces_2_0_i12);
MR_def_label(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__error_util__component_list_to_line_pieces_2_0_i13);
MR_def_label(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module40)
	MR_init_entry1(fn__parse_tree__error_util__choose_number_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__choose_number_3_0);
	MR_init_label2(fn__parse_tree__error_util__choose_number_3_0,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'choose_number'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__choose_number_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__choose_number_3_0_i3);
	}
MR_def_label(fn__parse_tree__error_util__choose_number_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__choose_number_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__choose_number_3_0_i6);
	}
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module41)
	MR_init_entry1(fn__parse_tree__error_util__is_or_are_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__is_or_are_1_0);
	MR_init_label2(fn__parse_tree__error_util__is_or_are_1_0,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_or_are'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__is_or_are_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__is_or_are_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__is_or_are_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("is", 2);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__error_util__is_or_are_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("are", 3);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__is_or_are_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.error_util", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140parse_tree.error_util.is_or_are\'/1", 44);
	MR_r3 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module42)
	MR_init_entry1(parse_tree__error_util__write_error_pieces_plain_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_pieces_plain_4_0);
	MR_init_label1(parse_tree__error_util__write_error_pieces_plain_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_pieces_plain'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_pieces_plain_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_error_pieces_plain_4_0_i2);
MR_def_label(parse_tree__error_util__write_error_pieces_plain_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_pieces_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module43)
	MR_init_entry1(parse_tree__error_util__write_error_plain_with_progname_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_plain_with_progname_4_0);
	MR_init_label1(parse_tree__error_util__write_error_plain_with_progname_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_plain_with_progname'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_plain_with_progname_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__error_util__write_error_plain_with_progname_4_0_i2);
MR_def_label(parse_tree__error_util__write_error_plain_with_progname_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 79;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_pieces_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module44)
	MR_init_entry1(parse_tree__error_util__write_error_pieces_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_pieces_6_0);
	MR_init_label1(parse_tree__error_util__write_error_pieces_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_pieces'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_pieces_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_error_pieces_6_0_i2);
MR_def_label(parse_tree__error_util__write_error_pieces_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_pieces_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module45)
	MR_init_entry1(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__write_error_pieces_maybe_with_context_6_0);
	MR_init_label1(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_error_pieces_maybe_with_context'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__write_error_pieces_maybe_with_context_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__write_error_pieces_maybe_with_context_6_0_i2);
MR_def_label(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_pieces_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module46)
	MR_init_entry1(fn__parse_tree__error_util__join_string_and_tail_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__join_string_and_tail_3_0);
	MR_init_label3(fn__parse_tree__error_util__join_string_and_tail_3_0,30,8,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'join_string_and_tail'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__join_string_and_tail_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_string_and_tail_3_0_i29);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_string_and_tail_3_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__join_string_and_tail_3_0_i30);
	}
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__parse_tree__error_util__join_string_and_tail_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__join_string_and_tail_3_0_i8);
MR_def_label(fn__parse_tree__error_util__join_string_and_tail_3_0,8)
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
MR_def_label(fn__parse_tree__error_util__join_string_and_tail_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module47)
	MR_init_entry1(fn__parse_tree__error_util__error_pieces_to_string_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__error_pieces_to_string_2_2_0);
	MR_init_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,232,4,6,12,14,16,11,8,19,21)
	MR_init_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,23,27,30,33,35,37,39,32,47,45)
	MR_init_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,49,51,54,57,58,56,62,63,61,71)
	MR_init_label10(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,73,74,75,76,77,70,69,82,84,85)
	MR_init_label1(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,231)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_pieces_to_string_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__error_pieces_to_string_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i232);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i4);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i8);
	}
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i231);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__first_char_3_3,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i12);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i11);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_upper_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i14);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(char__to_lower_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i16);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__first_char_3_4);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i84);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i32);
	}
	MR_r4 = MR_tfield(3, MR_sv(2), 1);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i33);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("first", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i35);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("second", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i37);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("third", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i39);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("th", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i47);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("function", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("predicate", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i51);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i56);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i57);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i58);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i61);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i62);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i63);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i75);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i69);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i71);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i70);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i73);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i74);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i75);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i76);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i77);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("error_pieces_to_string: type is variable", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
	}
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i84);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__error_util__error_pieces_to_string_2_2_0_i85);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__error_util__join_string_and_tail_3_0);
MR_def_label(fn__parse_tree__error_util__error_pieces_to_string_2_2_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module48)
	MR_init_entry1(fn__parse_tree__error_util__error_pieces_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_pieces_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__error_pieces_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module49)
	MR_init_entry1(fn__parse_tree__error_util__describe_sym_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__describe_sym_name_1_0);
	MR_init_label1(fn__parse_tree__error_util__describe_sym_name_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_sym_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__describe_sym_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__describe_sym_name_1_0_i2);
MR_def_label(fn__parse_tree__error_util__describe_sym_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\140", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module50)
	MR_init_entry1(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__describe_sym_name_and_arity_1_0);
	MR_init_label2(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_sym_name_and_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__describe_sym_name_and_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__error_util__describe_sym_name_and_arity_1_0_i2);
MR_def_label(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__error_util__describe_sym_name_and_arity_1_0_i3);
MR_def_label(fn__parse_tree__error_util__describe_sym_name_and_arity_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\140", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__to_char_list_1_0);
MR_decl_entry(char__is_lower_1_0);
MR_decl_entry(fn__char__to_upper_1_0);
MR_decl_entry(fn__string__from_char_list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module51)
	MR_init_entry1(fn__parse_tree__error_util__capitalize_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__capitalize_1_0);
	MR_init_label4(fn__parse_tree__error_util__capitalize_1_0,2,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'capitalize'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__error_util__capitalize_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__parse_tree__error_util__capitalize_1_0_i2);
MR_def_label(fn__parse_tree__error_util__capitalize_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__capitalize_1_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(char__is_lower_1_0,
		fn__parse_tree__error_util__capitalize_1_0_i6);
MR_def_label(fn__parse_tree__error_util__capitalize_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__capitalize_1_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__char__to_upper_1_0,
		fn__parse_tree__error_util__capitalize_1_0_i8);
MR_def_label(fn__parse_tree__error_util__capitalize_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__from_char_list_1_0);
MR_def_label(fn__parse_tree__error_util__capitalize_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module52)
	MR_init_entry1(parse_tree__error_util__report_warning_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__report_warning_6_0);
	MR_init_label2(parse_tree__error_util__report_warning_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_warning'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__report_warning_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__compiler_util__record_warning_3_0,
		parse_tree__error_util__report_warning_6_0_i2);
MR_def_label(parse_tree__error_util__report_warning_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		parse_tree__error_util__report_warning_6_0_i3);
MR_def_label(parse_tree__error_util__report_warning_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__error_util__do_write_error_pieces_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__nl_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module53)
	MR_init_entry1(parse_tree__error_util__unable_to_open_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__unable_to_open_file_4_0);
	MR_init_label7(parse_tree__error_util__unable_to_open_file_4_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unable_to_open_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__error_util__unable_to_open_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		parse_tree__error_util__unable_to_open_file_4_0_i2);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("Unable to open file: \'", 22);
	MR_np_call_localret_ent(io__write_string_4_0,
		parse_tree__error_util__unable_to_open_file_4_0_i3);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_4_0,
		parse_tree__error_util__unable_to_open_file_4_0_i4);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\' because\n", 10);
	MR_np_call_localret_ent(io__write_string_4_0,
		parse_tree__error_util__unable_to_open_file_4_0_i5);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		parse_tree__error_util__unable_to_open_file_4_0_i6);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		parse_tree__error_util__unable_to_open_file_4_0_i7);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__nl_3_0,
		parse_tree__error_util__unable_to_open_file_4_0_i8);
MR_def_label(parse_tree__error_util__unable_to_open_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module54)
	MR_init_entry1(fn__parse_tree__error_util__project_msgs_contexts_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__error_util__project_msgs_contexts_1_0);
	MR_init_label5(fn__parse_tree__error_util__project_msgs_contexts_1_0,10,11,5,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_msgs_contexts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__error_util__project_msgs_contexts_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__project_msgs_contexts_1_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(fn__parse_tree__error_util__project_msgs_contexts_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__parse_tree__error_util__project_msgs_contexts_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__project_msgs_contexts_1_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__project_msgs_contexts_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__parse_tree__error_util__project_msgs_contexts_1_0_i4);
	}
MR_def_label(fn__parse_tree__error_util__project_msgs_contexts_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(fn__parse_tree__error_util__project_msgs_contexts_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__parse_tree__error_util__project_msgs_contexts_1_0_i11);
	}
	MR_proceed();
MR_def_label(fn__parse_tree__error_util__project_msgs_contexts_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module55)
	MR_init_entry1(parse_tree__error_util__compare_error_msgs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__compare_error_msgs_3_0);
	MR_init_label7(parse_tree__error_util__compare_error_msgs_3_0,5,3,2,10,8,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_error_msgs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__compare_error_msgs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i2);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i2);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i8);
	}
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i10);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		parse_tree__error_util__compare_error_msgs_3_0_i12);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		parse_tree__error_util__compare_error_msgs_3_0_i12);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		parse_tree__error_util__compare_error_msgs_3_0_i12);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_msgs_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__error_util__error_msg_0_0);
MR_def_label(parse_tree__error_util__compare_error_msgs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module56)
	MR_init_entry1(parse_tree__error_util__compare_error_specs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__compare_error_specs_3_0);
	MR_init_label4(parse_tree__error_util__compare_error_specs_3_0,2,3,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_error_specs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__compare_error_specs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__parse_tree__error_util__project_msgs_contexts_1_0,
		parse_tree__error_util__compare_error_specs_3_0_i2);
MR_def_label(parse_tree__error_util__compare_error_specs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__error_util__project_msgs_contexts_1_0,
		parse_tree__error_util__compare_error_specs_3_0_i3);
MR_def_label(parse_tree__error_util__compare_error_specs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		parse_tree__error_util__compare_error_specs_3_0_i4);
MR_def_label(parse_tree__error_util__compare_error_specs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__error_util__compare_error_specs_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__error_util__error_spec_0_0);
MR_def_label(parse_tree__error_util__compare_error_specs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module57)
	MR_init_entry1(__Unify___parse_tree__error_util__actual_severity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__actual_severity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__actual_severity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module58)
	MR_init_entry1(__Compare___parse_tree__error_util__actual_severity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__actual_severity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__actual_severity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__error_util_module59)
	MR_init_entry1(__Unify___parse_tree__error_util__error_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_line_0_0);
	MR_init_label2(__Unify___parse_tree__error_util__error_line_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__error_line_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_line_0_0_i6);
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
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_line_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__error_util__error_line_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_line_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module60)
	MR_init_entry1(__Compare___parse_tree__error_util__error_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_line_0_0);
	MR_init_label4(__Compare___parse_tree__error_util__error_line_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__error_line_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_line_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__error_util__error_line_0_0_i2);
MR_def_label(__Compare___parse_tree__error_util__error_line_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__error_line_0_0,2)
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
		__Compare___parse_tree__error_util__error_line_0_0_i5);
MR_def_label(__Compare___parse_tree__error_util__error_line_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_line_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_line_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__error_util_module61)
	MR_init_entry1(__Unify___parse_tree__error_util__error_msg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_msg_0_0);
	MR_init_label5(__Unify___parse_tree__error_util__error_msg_0_0,7,23,5,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_msg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i23);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__error_util__error_msg_0_0_i7);
MR_def_label(__Unify___parse_tree__error_util__error_msg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_msg_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_msg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__error_util__error_msg_0_0_i12);
MR_def_label(__Unify___parse_tree__error_util__error_msg_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_msg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__error_util_module62)
	MR_init_entry1(__Compare___parse_tree__error_util__error_msg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_msg_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__error_msg_0_0,3,2,9,13,17,7,5,25,27,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_msg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i2);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__error_util__error_msg_0_0_i9);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i72);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_msg_0_0_i13);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i72);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_msg_0_0_i17);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__error_util__error_msg_0_0_i27);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(private_builtin__typed_unify_2_0);

MR_BEGIN_MODULE(parse_tree__error_util_module63)
	MR_init_entry1(__Unify___parse_tree__error_util__error_msg_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_msg_component_0_0);
	MR_init_label9(__Unify___parse_tree__error_util__error_msg_component_0_0,5,9,13,19,20,43,17,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_msg_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i43);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_tfield(1, MR_tempr3, 2);
	MR_r3 = MR_tfield(1, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = (MR_Integer) 1;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___parse_tree__error_util__error_msg_component_0_0_i19);
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___parse_tree__error_util__error_msg_component_0_0_i20);
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__error_util__error_msg_component_0_0_i24);
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_msg_component_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_msg_component_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_compare_3_0);

MR_BEGIN_MODULE(parse_tree__error_util_module64)
	MR_init_entry1(__Compare___parse_tree__error_util__error_msg_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_msg_component_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__error_msg_component_0_0,3,2,7,9,10,5,14,17,21,15)
	MR_init_label10(__Compare___parse_tree__error_util__error_msg_component_0_0,27,12,31,32,33,29,38,39,40,42)
	MR_init_label10(__Compare___parse_tree__error_util__error_msg_component_0_0,43,36,46,47,82,48,83,49,51,187)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_msg_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i2);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_msg_component_0_0_i17);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i187);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_msg_component_0_0_i21);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i187);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i36);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_sv(2), 2);
	MR_sv(2) = MR_tfield(3, MR_sv(2), 1);
	MR_sv(3) = (MR_Integer) 1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___parse_tree__error_util__error_msg_component_0_0_i42);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___parse_tree__error_util__error_msg_component_0_0_i43);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
	}
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i48);
	}
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i49);
	}
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__error_util__error_msg_component_0_0_i51);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_msg_component_0_0_i187);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_msg_component_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module65)
	MR_init_entry1(__Unify___parse_tree__error_util__error_phase_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_phase_0_0);
	MR_init_label10(__Unify___parse_tree__error_util__error_phase_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label7(__Unify___parse_tree__error_util__error_phase_0_0,15,16,17,18,54,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_phase_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_phase_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_phase_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module66)
	MR_init_entry1(__Index___parse_tree__error_util__error_phase_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__error_util__error_phase_0_0);
	MR_init_label10(__Index___parse_tree__error_util__error_phase_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label5(__Index___parse_tree__error_util__error_phase_0_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__error_util__error_phase_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i3);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i4);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i5);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i6);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i7);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i8);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i9);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i10);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i12);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i15);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i16);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__error_phase_0_0_i17);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__error_phase_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(parse_tree__error_util_module67)
	MR_init_entry1(__Compare___parse_tree__error_util__error_phase_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_phase_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__error_phase_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___parse_tree__error_util__error_phase_0_0,16,17,18,19,20,21,22,70,23,24)
	MR_init_label1(__Compare___parse_tree__error_util__error_phase_0_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_phase_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i70);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__error_util__error_phase_0_0,
		__Compare___parse_tree__error_util__error_phase_0_0_i4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__error_util__error_phase_0_0,
		__Compare___parse_tree__error_util__error_phase_0_0_i5);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i23);
	}
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i24);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_phase_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__error_phase_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module68)
	MR_init_entry1(__Unify___parse_tree__error_util__error_severity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_severity_0_0);
	MR_init_label6(__Unify___parse_tree__error_util__error_severity_0_0,5,6,20,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_severity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_localcall_lab(__Unify___parse_tree__error_util__error_severity_0_0,
		__Unify___parse_tree__error_util__error_severity_0_0_i9);
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_severity_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_severity);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_severity_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module69)
	MR_init_entry1(__Compare___parse_tree__error_util__error_severity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_severity_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__error_severity_0_0,7,8,5,12,13,10,17,71,18,72)
	MR_init_label8(__Compare___parse_tree__error_util__error_severity_0_0,15,21,22,23,25,29,33,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_severity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i72);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(7);
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i18);
	}
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i71);
	}
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,23)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_severity_0_0_i25);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i40);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__error_severity_0_0_i29);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(__Compare___parse_tree__error_util__error_severity_0_0,
		__Compare___parse_tree__error_util__error_severity_0_0_i33);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_severity_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_severity);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_severity_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module70)
	MR_init_entry1(__Unify___parse_tree__error_util__error_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_spec_0_0);
	MR_init_label4(__Unify___parse_tree__error_util__error_spec_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_spec_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__error_util__error_severity_0_0,
		__Unify___parse_tree__error_util__error_spec_0_0_i4);
MR_def_label(__Unify___parse_tree__error_util__error_spec_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_spec_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__error_util__error_phase_0_0,
		__Unify___parse_tree__error_util__error_spec_0_0_i6);
MR_def_label(__Unify___parse_tree__error_util__error_spec_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__error_spec_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__error_util__error_spec_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__error_spec_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module71)
	MR_init_entry1(__Compare___parse_tree__error_util__error_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_spec_0_0);
	MR_init_label5(__Compare___parse_tree__error_util__error_spec_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_spec_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__error_util__error_spec_0_0_i2);
MR_def_label(__Compare___parse_tree__error_util__error_spec_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__error_spec_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__error_util__error_severity_0_0,
		__Compare___parse_tree__error_util__error_spec_0_0_i5);
MR_def_label(__Compare___parse_tree__error_util__error_spec_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_spec_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__error_util__error_phase_0_0,
		__Compare___parse_tree__error_util__error_spec_0_0_i9);
MR_def_label(__Compare___parse_tree__error_util__error_spec_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__error_spec_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__error_util__error_spec_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module72)
	MR_init_entry1(__Unify___parse_tree__error_util__error_spec_accumulator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__error_spec_accumulator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__error_spec_accumulator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
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


MR_BEGIN_MODULE(parse_tree__error_util_module73)
	MR_init_entry1(__Compare___parse_tree__error_util__error_spec_accumulator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__error_spec_accumulator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__error_spec_accumulator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__simple_call_id_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__sym_name_and_arity_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(parse_tree__error_util_module74)
	MR_init_entry1(__Unify___parse_tree__error_util__format_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__format_component_0_0);
	MR_init_label10(__Unify___parse_tree__error_util__format_component_0_0,5,6,7,8,10,12,14,16,18,20)
	MR_init_label8(__Unify___parse_tree__error_util__format_component_0_0,22,26,28,32,36,89,40,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__format_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i89);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i12);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__simple_call_id_0_0);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i26);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_name_and_arity_0_0);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i36);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i40);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__format_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__error_util__format_component_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module75)
	MR_init_entry1(__Index___parse_tree__error_util__format_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__error_util__format_component_0_0);
	MR_init_label10(__Index___parse_tree__error_util__format_component_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label6(__Index___parse_tree__error_util__format_component_0_0,13,14,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__error_util__format_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i3);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i4);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i5);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i9);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i10);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i11);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i12);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i13);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i14);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i15);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i16);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i17);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___parse_tree__error_util__format_component_0_0_i18);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__error_util__format_component_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___parse_tree__prog_data__simple_call_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__sym_name_and_arity_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(parse_tree__error_util_module76)
	MR_init_entry1(__Compare___parse_tree__error_util__format_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__format_component_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__format_component_0_0,4,5,6,7,10,11,97,12,13,16)
	MR_init_label10(__Compare___parse_tree__error_util__format_component_0_0,19,22,25,28,31,34,37,40,43,46)
	MR_init_label2(__Compare___parse_tree__error_util__format_component_0_0,49,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__format_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i97);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__error_util__format_component_0_0,
		__Compare___parse_tree__error_util__format_component_0_0_i4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__error_util__format_component_0_0,
		__Compare___parse_tree__error_util__format_component_0_0_i5);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i12);
	}
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__simple_call_id_0_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i37);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i40);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i43);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_name_and_arity_0_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i49);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__format_component_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__format_component_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module77)
	MR_init_entry1(__Unify___parse_tree__error_util__format_components_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__format_components_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__format_components_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
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


MR_BEGIN_MODULE(parse_tree__error_util_module78)
	MR_init_entry1(__Compare___parse_tree__error_util__format_components_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__format_components_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__format_components_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
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


MR_BEGIN_MODULE(parse_tree__error_util_module79)
	MR_init_entry1(__Unify___parse_tree__error_util__maybe_first_in_msg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__maybe_first_in_msg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__maybe_first_in_msg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module80)
	MR_init_entry1(__Compare___parse_tree__error_util__maybe_first_in_msg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__maybe_first_in_msg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__maybe_first_in_msg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module81)
	MR_init_entry1(__Unify___parse_tree__error_util__maybe_lower_next_initial_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__maybe_lower_next_initial_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__maybe_lower_next_initial_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module82)
	MR_init_entry1(__Compare___parse_tree__error_util__maybe_lower_next_initial_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__maybe_lower_next_initial_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__maybe_lower_next_initial_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module83)
	MR_init_entry1(__Unify___parse_tree__error_util__maybe_printed_something_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__maybe_printed_something_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__maybe_printed_something_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module84)
	MR_init_entry1(__Compare___parse_tree__error_util__maybe_printed_something_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__maybe_printed_something_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__maybe_printed_something_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module85)
	MR_init_entry1(__Unify___parse_tree__error_util__maybe_treat_as_first_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__maybe_treat_as_first_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__maybe_treat_as_first_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module86)
	MR_init_entry1(__Compare___parse_tree__error_util__maybe_treat_as_first_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__maybe_treat_as_first_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__maybe_treat_as_first_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module87)
	MR_init_entry1(__Unify___parse_tree__error_util__mode_report_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__mode_report_control_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__error_util__mode_report_control_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module88)
	MR_init_entry1(__Compare___parse_tree__error_util__mode_report_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__mode_report_control_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__error_util__mode_report_control_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module89)
	MR_init_entry1(__Unify___parse_tree__error_util__paragraph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__paragraph_0_0);
	MR_init_label3(__Unify___parse_tree__error_util__paragraph_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__paragraph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__paragraph_0_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__error_util__paragraph_0_0_i4);
MR_def_label(__Unify___parse_tree__error_util__paragraph_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__paragraph_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__paragraph_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___parse_tree__error_util__paragraph_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__paragraph_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module90)
	MR_init_entry1(__Compare___parse_tree__error_util__paragraph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__paragraph_0_0);
	MR_init_label5(__Compare___parse_tree__error_util__paragraph_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__paragraph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__paragraph_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__error_util__paragraph_0_0_i2);
MR_def_label(__Compare___parse_tree__error_util__paragraph_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__error_util__paragraph_0_0,2)
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__error_util__paragraph_0_0_i5);
MR_def_label(__Compare___parse_tree__error_util__paragraph_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__paragraph_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__error_util__paragraph_0_0_i9);
MR_def_label(__Compare___parse_tree__error_util__paragraph_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__paragraph_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__error_util__paragraph_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module91)
	MR_init_entry1(__Unify___parse_tree__error_util__plain_or_prefix_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__plain_or_prefix_0_0);
	MR_init_label4(__Unify___parse_tree__error_util__plain_or_prefix_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__plain_or_prefix_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__plain_or_prefix_0_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__plain_or_prefix_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__error_util__plain_or_prefix_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__plain_or_prefix_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__plain_or_prefix_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__plain_or_prefix_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__plain_or_prefix_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__plain_or_prefix_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__plain_or_prefix_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module92)
	MR_init_entry1(__Compare___parse_tree__error_util__plain_or_prefix_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__plain_or_prefix_0_0);
	MR_init_label9(__Compare___parse_tree__error_util__plain_or_prefix_0_0,30,7,5,11,34,9,26,15,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__plain_or_prefix_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i26);
	}
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i15);
	}
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__plain_or_prefix_0_0_i34);
	}
MR_def_label(__Compare___parse_tree__error_util__plain_or_prefix_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module93)
	MR_init_entry1(__Unify___parse_tree__error_util__word_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__error_util__word_0_0);
	MR_init_label5(__Unify___parse_tree__error_util__word_0_0,5,6,20,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__error_util__word_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__error_util__word_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__word_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__word_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__word_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___parse_tree__error_util__word_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__error_util__word_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module94)
	MR_init_entry1(__Compare___parse_tree__error_util__word_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__error_util__word_0_0);
	MR_init_label10(__Compare___parse_tree__error_util__word_0_0,46,7,8,5,12,13,10,18,19,56)
	MR_init_label5(__Compare___parse_tree__error_util__word_0_0,16,41,23,24,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__error_util__word_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__error_util__word_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i13);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i41);
	}
MR_def_label(__Compare___parse_tree__error_util__word_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i23);
	}
MR_def_label(__Compare___parse_tree__error_util__word_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__error_util__word_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__error_util__word_0_0_i56);
	}
MR_def_label(__Compare___parse_tree__error_util__word_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__error_util_module95)
	MR_init_entry1(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0);
	MR_init_label10(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label6(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,13,14,15,16,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,10)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,11)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,13)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,12)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,9)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i2);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_mask_field(MR_r2, 0);
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
MR_def_label(parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__632__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__error_util_maybe_bunch_0(void)
{
	parse_tree__error_util_module0();
	parse_tree__error_util_module1();
	parse_tree__error_util_module2();
	parse_tree__error_util_module3();
	parse_tree__error_util_module4();
	parse_tree__error_util_module5();
	parse_tree__error_util_module6();
	parse_tree__error_util_module7();
	parse_tree__error_util_module8();
	parse_tree__error_util_module9();
	parse_tree__error_util_module10();
	parse_tree__error_util_module11();
	parse_tree__error_util_module12();
	parse_tree__error_util_module13();
	parse_tree__error_util_module14();
	parse_tree__error_util_module15();
	parse_tree__error_util_module16();
	parse_tree__error_util_module17();
	parse_tree__error_util_module18();
	parse_tree__error_util_module19();
	parse_tree__error_util_module20();
	parse_tree__error_util_module21();
	parse_tree__error_util_module22();
	parse_tree__error_util_module23();
	parse_tree__error_util_module24();
	parse_tree__error_util_module25();
	parse_tree__error_util_module26();
	parse_tree__error_util_module27();
	parse_tree__error_util_module28();
	parse_tree__error_util_module29();
	parse_tree__error_util_module30();
	parse_tree__error_util_module31();
	parse_tree__error_util_module32();
	parse_tree__error_util_module33();
	parse_tree__error_util_module34();
	parse_tree__error_util_module35();
	parse_tree__error_util_module36();
	parse_tree__error_util_module37();
	parse_tree__error_util_module38();
	parse_tree__error_util_module39();
}

static void mercury__parse_tree__error_util_maybe_bunch_1(void)
{
	parse_tree__error_util_module40();
	parse_tree__error_util_module41();
	parse_tree__error_util_module42();
	parse_tree__error_util_module43();
	parse_tree__error_util_module44();
	parse_tree__error_util_module45();
	parse_tree__error_util_module46();
	parse_tree__error_util_module47();
	parse_tree__error_util_module48();
	parse_tree__error_util_module49();
	parse_tree__error_util_module50();
	parse_tree__error_util_module51();
	parse_tree__error_util_module52();
	parse_tree__error_util_module53();
	parse_tree__error_util_module54();
	parse_tree__error_util_module55();
	parse_tree__error_util_module56();
	parse_tree__error_util_module57();
	parse_tree__error_util_module58();
	parse_tree__error_util_module59();
	parse_tree__error_util_module60();
	parse_tree__error_util_module61();
	parse_tree__error_util_module62();
	parse_tree__error_util_module63();
	parse_tree__error_util_module64();
	parse_tree__error_util_module65();
	parse_tree__error_util_module66();
	parse_tree__error_util_module67();
	parse_tree__error_util_module68();
	parse_tree__error_util_module69();
	parse_tree__error_util_module70();
	parse_tree__error_util_module71();
	parse_tree__error_util_module72();
	parse_tree__error_util_module73();
	parse_tree__error_util_module74();
	parse_tree__error_util_module75();
	parse_tree__error_util_module76();
	parse_tree__error_util_module77();
	parse_tree__error_util_module78();
	parse_tree__error_util_module79();
}

static void mercury__parse_tree__error_util_maybe_bunch_2(void)
{
	parse_tree__error_util_module80();
	parse_tree__error_util_module81();
	parse_tree__error_util_module82();
	parse_tree__error_util_module83();
	parse_tree__error_util_module84();
	parse_tree__error_util_module85();
	parse_tree__error_util_module86();
	parse_tree__error_util_module87();
	parse_tree__error_util_module88();
	parse_tree__error_util_module89();
	parse_tree__error_util_module90();
	parse_tree__error_util_module91();
	parse_tree__error_util_module92();
	parse_tree__error_util_module93();
	parse_tree__error_util_module94();
	parse_tree__error_util_module95();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__error_util__init(void);
void mercury__parse_tree__error_util__init_type_tables(void);
void mercury__parse_tree__error_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__error_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__error_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parse_tree__error_util__init_threadscope_string_table(void);
#endif

void mercury__parse_tree__error_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__error_util_maybe_bunch_0();
	mercury__parse_tree__error_util_maybe_bunch_1();
	mercury__parse_tree__error_util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_actual_severity_0,
		parse_tree__error_util__actual_severity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_line_0,
		parse_tree__error_util__error_line_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0,
		parse_tree__error_util__error_msg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0,
		parse_tree__error_util__error_msg_component_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0,
		parse_tree__error_util__error_phase_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0,
		parse_tree__error_util__error_severity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0,
		parse_tree__error_util__error_spec_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_error_spec_accumulator_0,
		parse_tree__error_util__error_spec_accumulator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_format_component_0,
		parse_tree__error_util__format_component_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_format_components_0,
		parse_tree__error_util__format_components_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0,
		parse_tree__error_util__maybe_first_in_msg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0,
		parse_tree__error_util__maybe_lower_next_initial_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_maybe_printed_something_0,
		parse_tree__error_util__maybe_printed_something_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
		parse_tree__error_util__maybe_treat_as_first_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0,
		parse_tree__error_util__mode_report_control_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_paragraph_0,
		parse_tree__error_util__paragraph_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_plain_or_prefix_0,
		parse_tree__error_util__plain_or_prefix_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__error_util__type_ctor_info_word_0,
		parse_tree__error_util__word_0_0);
	mercury__parse_tree__error_util__init_debugger();
}

void mercury__parse_tree__error_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_actual_severity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_line_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_msg_component_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_phase_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_severity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_error_spec_accumulator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_format_component_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_format_components_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_maybe_printed_something_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_mode_report_control_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_paragraph_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_plain_or_prefix_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__error_util__type_ctor_info_word_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_parse_tree__error_util__type_class_decl_print_anything_1);
	}
}


void mercury__parse_tree__error_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__error_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__error_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__error_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parse_tree__error_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
