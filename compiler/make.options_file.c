/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2024-11-06
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module make.options_file.
// :- implementation.

/*
INIT mercury__make__options_file__init
ENDINIT
*/

#include "make.options_file.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.environment.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_found_options_file_error_0[1];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_incl_stack_0_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_incl_stack_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_incl_stack_0_1[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_incl_stack_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_incl_stack_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_incl_stack_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_incl_stack_0[2];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_include_check_result_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_1[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_include_check_result_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_include_check_result_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_include_check_result_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_include_check_result_0[2];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_1;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_is_options_file_optional_0[2];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_is_options_file_optional_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_is_options_file_optional_0[2];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_1;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_maybe_is_first_0[2];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_maybe_is_first_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_maybe_is_first_0[2];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_1[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_maybe_options_file_line_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_maybe_options_file_line_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_maybe_options_file_line_0[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2];

static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_mmc_option_type_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_mmc_option_type_0[2];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_1[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_opt_var_or_spec_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_opt_var_or_spec_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_opt_var_or_spec_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1];

static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3];

static const MR_ConstString make__options_file__make__options_file__field_names_options_file_line_0_0[3];

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_file_line_0_0[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2];

static const MR_ConstString make__options_file__make__options_file__field_names_options_file_line_0_1[2];

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_file_line_0_1[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_file_line_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_file_line_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_line_0[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0;

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_class_0[3];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_class_0[3];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0[22];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[22];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[22];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3];

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_variable_value_0_0[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1];

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variables_0_0[2];

static const MR_ConstString make__options_file__make__options_file__field_names_options_variables_0_0[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variables_0_0;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variables_0_0[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variables_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variables_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variables_0[1];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_0;

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_1;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_2[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_2;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_1[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_2[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_parse_result_1[3];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_parse_result_1[3];

static const MR_Integer make__options_file__make__options_file__functor_number_map_parse_result_1[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_pre_incl_stack_0_1[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_pre_incl_stack_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_pre_incl_stack_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_pre_incl_stack_0[2];

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_info_0_0[3];

static const MR_ConstString make__options_file__make__options_file__field_names_search_info_0_0[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_info_0_0;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_info_0_0[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_search_info_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_search_info_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_info_0[1];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_set_or_add_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_set_or_add_0_1;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_set_or_add_0[2];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_set_or_add_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_set_or_add_0[2];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0;

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1;

static const MR_FA_TypeInfo_Struct1 make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_variable_result_1[3];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_variable_result_1[3];

static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_result_1[3];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_1;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_2;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_variable_source_0[3];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_variable_source_0[3];

static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_source_0[3];

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1516__1_1_p_0(
  MR_String LambdaHeadVar__1_42);

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1414__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14);

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____search_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____incl_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____incl_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void);

static void MR_CALL 
make__options_file__write_env_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_String VarValue_8);

static void MR_CALL 
make__options_file__write_options_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_Word OptVarValue_8);

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_options_variable_6_p_0(
  MR_Word Variables_7,
  MR_Word OptionsVariableClass_8,
  MR_Word FlagsVar_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
make__options_file__include_context_msg_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__options_file__read_options_file_set_params_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word OptionTable_15,
  MR_String OptionsFile_16,
  MR_Word STATE_VARIABLE_Variables_0_26,
  MR_Word * STATE_VARIABLE_Variables_27,
  MR_Word STATE_VARIABLE_IOSpecs_0_28,
  MR_Word * STATE_VARIABLE_IOSpecs_29,
  MR_Word STATE_VARIABLE_ParseSpecs_0_30,
  MR_Word * STATE_VARIABLE_ParseSpecs_31,
  MR_Word STATE_VARIABLE_UndefSpecs_0_32,
  MR_Word * STATE_VARIABLE_UndefSpecs_33);

static void MR_CALL 
make__options_file__dump_options_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_module_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_default_options_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_default_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__options_file__lookup_variable_words_3_p_0(
  MR_Word Variables_4,
  MR_String VarName_5,
  MR_Word * Result_6);

static void MR_CALL 
make__options_file__read_options_file_params_14_p_0(
  MR_Word SearchInfo_15,
  MR_Word PreStack0_16,
  MR_Word IsOptionsFileOptional_17,
  MR_String OptionsPathName_18,
  MR_Word STATE_VARIABLE_Variables_0_50,
  MR_Word * STATE_VARIABLE_Variables_51,
  MR_Word STATE_VARIABLE_IOSpecs_0_52,
  MR_Word * STATE_VARIABLE_IOSpecs_53,
  MR_Word STATE_VARIABLE_ParseSpecs_0_54,
  MR_Word * STATE_VARIABLE_ParseSpecs_55,
  MR_Word STATE_VARIABLE_UndefSpecs_0_56,
  MR_Word * STATE_VARIABLE_UndefSpecs_57);

static void MR_CALL 
make__options_file__read_options_lines_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
make__options_file__read_options_lines_15_p_0(
  MR_Word SearchInfo_16,
  MR_Word InclStack0_17,
  MR_Word InStream_18,
  MR_String FileName_19,
  MR_Integer LineNumber0_20,
  MR_Word STATE_VARIABLE_Variables_0_47,
  MR_Word * STATE_VARIABLE_Variables_48,
  MR_Word STATE_VARIABLE_IOSpecs_0_49,
  MR_Word * STATE_VARIABLE_IOSpecs_50,
  MR_Word STATE_VARIABLE_ParseSpecs_0_51,
  MR_Word * STATE_VARIABLE_ParseSpecs_52,
  MR_Word STATE_VARIABLE_UndefSpecs_0_53,
  MR_Word * STATE_VARIABLE_UndefSpecs_54);

static void MR_CALL 
make__options_file__update_variable_13_p_0(
  MR_String FileName_14,
  MR_Integer LineNumber_15,
  MR_Word SetOrAdd_16,
  MR_String VarName_17,
  MR_Word NewValue0_18,
  MR_Word STATE_VARIABLE_Variables_0_43,
  MR_Word * STATE_VARIABLE_Variables_44,
  MR_Word STATE_VARIABLE_ParseSpecs_0_45,
  MR_Word * STATE_VARIABLE_ParseSpecs_46,
  MR_Word STATE_VARIABLE_UndefSpecs_0_47,
  MR_Word * STATE_VARIABLE_UndefSpecs_48);

static void MR_CALL 
make__options_file__expand_any_var_references_11_p_0(
  MR_Word Variables_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Chars0_15,
  MR_Word * Chars_16,
  MR_Word STATE_VARIABLE_ParseSpecs_0_22,
  MR_Word * STATE_VARIABLE_ParseSpecs_23,
  MR_Word STATE_VARIABLE_UndefSpecs_0_24,
  MR_Word * STATE_VARIABLE_UndefSpecs_25);

static MR_bool MR_CALL 
make__options_file__expand_any_var_references_loop_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__expand_any_var_references_loop_12_p_0(
  MR_Word Variables_1,
  MR_String FileName_2,
  MR_Integer LineNumber_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevChars_0_5,
  MR_Word * STATE_VARIABLE_RevChars_6,
  MR_Word STATE_VARIABLE_ParseSpecs_0_7,
  MR_Word * STATE_VARIABLE_ParseSpecs_8,
  MR_Word STATE_VARIABLE_UndefVarNames_0_9,
  MR_Word * STATE_VARIABLE_UndefVarNames_10);

static void MR_CALL 
make__options_file__lookup_variable_value_5_p_0(
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * ValueChars_8,
  MR_Word STATE_VARIABLE_UndefVarNames_0_16,
  MR_Word * STATE_VARIABLE_UndefVarNames_17);

static MR_Word MR_CALL 
make__options_file__report_unterminated_variable_reference_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word RevChars_7);

static MR_bool MR_CALL 
make__options_file__split_into_words_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__split_into_words_loop_4_p_0(
  MR_Word Chars0_5,
  MR_Word STATE_VARIABLE_RevWords_0_15,
  MR_Word * STATE_VARIABLE_RevWords_16,
  MR_Word * MaybeError_7);

static void MR_CALL 
make__options_file__get_word_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * RevWord_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__options_file__get_string_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RevString0_3,
  MR_Word * HeadVar__4_4,
  MR_Word * MaybeError_5);

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__parse_options_line_4_p_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word Line0_7,
  MR_Word * MaybeOptionsFileLine_8);

static void MR_CALL 
make__options_file__do_parse_variable_name_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirst_3,
  MR_Word STATE_VARIABLE_RevVarNameChars_0_4,
  MR_Word * STATE_VARIABLE_RevVarNameChars_5);

static void MR_CALL 
make__options_file__read_options_line_loop_8_p_0(
  MR_Word InStream_9,
  MR_String FileName_10,
  MR_Integer STATE_VARIABLE_LineNumber_0_27,
  MR_Integer * STATE_VARIABLE_LineNumber_28,
  MR_Word STATE_VARIABLE_RevChars_0_29,
  MR_Word * Result_13);

static void MR_CALL 
make__options_file__skip_comment_line_4_p_0(
  MR_Word InStream_5,
  MR_Word * Result_6);

static MR_Box MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0(
  MR_Word PreStack0_4,
  MR_String PathName_5,
  MR_Word * Result_6);

static MR_bool MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_2_4_p_0(
  MR_Word InclStack0_5,
  MR_String PathName_6,
  MR_Word STATE_VARIABLE_TopDownIncludes_0_11,
  MR_Word * STATE_VARIABLE_TopDownIncludes_12);

static void MR_CALL 
make__options_file__read_options_files_named_in_options_file_option_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__options_file____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__options_file_scalar_common_1[99][2];

static /* final */ const MR_Box make__options_file_scalar_common_2[15][3];

static /* final */ const MR_Box make__options_file_scalar_common_3[3][1];

static /* final */ const MR_Box make__options_file_scalar_common_4[1][16];

static /* final */ const MR_Box make__options_file_scalar_common_5[2][5];

static /* final */ const MR_Box make__options_file_scalar_common_6[3][4];

static /* final */ const MR_Box make__options_file_scalar_common_7[1][17];

static /* final */ const MR_Box make__options_file_scalar_common_8[1][9];

static /* final */ const MR_Box make__options_file_scalar_common_9[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_11[1][6];


struct make__options_file__vector_common_type_10_0_s {
  const MR_Word make__options_file__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_10_0_s make__options_file_vector_common_10[22];

struct make__options_file__vector_common_type_12_0_s {
  const MR_String make__options_file__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_12_0_s make__options_file_vector_common_12[22];



static /* final */ const MR_Box make__options_file_scalar_common_1[99][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__options_file_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments file does not set MCFLAGS."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mercury_compile: internal error:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: cannot open options file"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: options file"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "includes itself."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the following chain of include directives."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "indirectly includes itself through"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The include directive for"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: attempt to escape end-of-file."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "I/O error:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "+="))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "after"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected variable name before"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unterminated reference to a variable after"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "--no-libgrade")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[79]))),
    ((MR_Box) ((MR_String) "--libgrade"))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "--no-lib-linkage")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[81]))),
    ((MR_Box) ((MR_String) "--lib-linkage"))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "options, found"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[43])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[43])))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_2[15][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[0])),
    ((MR_Box) (make__options_file__check_include_for_infinite_recursion_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__split_into_words_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__expand_any_var_references_loop_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[1])),
    ((MR_Box) (make__options_file__lookup_default_options_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[1])),
    ((MR_Box) (make__options_file__lookup_mmc_options_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[1])),
    ((MR_Box) (make__options_file__lookup_mmc_module_options_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_options_variable_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "unterminated string")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};

static /* final */ const MR_Box make__options_file_scalar_common_4[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_6[3][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140make.options_file.read_args_file\'/7")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[10])))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_7[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_search_info_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_pre_incl_stack_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_is_options_file_optional_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_class_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_11[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct make__options_file__vector_common_type_10_0_s make__options_file_vector_common_10[22] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[69])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[73])) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[70])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[87])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[75])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[72])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[86])) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[76])) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[77])) },
  /* row  12 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[68])) },
  /* row  13 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[83])) },
  /* row  14 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[78])) },
  /* row  15 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[80])) },
  /* row  16 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[82])) },
  /* row  17 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[74])) },
  /* row  18 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[88])) },
  /* row  19 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[71])) },
  /* row  20 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[84])) },
  /* row  21 */   { (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[85])) },
};

static /* final */ const struct make__options_file__vector_common_type_12_0_s make__options_file_vector_common_12[22] = {
  /* row   0 */   { (MR_String) "GRADEFLAGS" },
  /* row   1 */   { (MR_String) "MCFLAGS" },
  /* row   2 */   { (MR_String) "CFLAGS" },
  /* row   3 */   { (MR_String) "GCC_FLAGS" },
  /* row   4 */   { (MR_String) "CLANG_FLAGS" },
  /* row   5 */   { (MR_String) "MSVC_FLAGS" },
  /* row   6 */   { (MR_String) "JAVACFLAGS" },
  /* row   7 */   { (MR_String) "CSCFLAGS" },
  /* row   8 */   { (MR_String) "MLOBJS" },
  /* row   9 */   { (MR_String) "MLLIBS" },
  /* row  10 */   { (MR_String) "LDFLAGS" },
  /* row  11 */   { (MR_String) "LD_LIBFLAGS" },
  /* row  12 */   { (MR_String) "C2INITARGS" },
  /* row  13 */   { (MR_String) "LIBRARIES" },
  /* row  14 */   { (MR_String) "LIB_DIRS" },
  /* row  15 */   { (MR_String) "LIBGRADES" },
  /* row  16 */   { (MR_String) "LIB_LINKAGES" },
  /* row  17 */   { (MR_String) "INSTALL_PREFIX" },
  /* row  18 */   { (MR_String) "MERCURY_STDLIB_DIR" },
  /* row  19 */   { (MR_String) "MERCURY_CONFIG_DIR" },
  /* row  20 */   { (MR_String) "LINKAGE" },
  /* row  21 */   { (MR_String) "MERCURY_LINKAGE" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0),
    (MR_PseudoTypeInfo) (&make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 = {
  (MR_String) "found_options_file_error",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_found_options_file_error_0[1] = { &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 };

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1] = { &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 };

static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_found_options_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__options_file____Unify____found_options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____found_options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "found_options_file_error",
  { make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_found_options_file_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_found_options_file_error_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_incl_stack_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_incl_stack_0_0 = {
  (MR_String) "incl_stack_base",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_incl_stack_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_incl_stack_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_incl_stack_0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_incl_stack_0_1 = {
  (MR_String) "incl_stack_nested",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_incl_stack_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_incl_stack_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_incl_stack_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_incl_stack_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_incl_stack_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_incl_stack_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_incl_stack_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_incl_stack_0_0,
  &make__options_file__make__options_file__du_functor_desc_incl_stack_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_incl_stack_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_incl_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____incl_stack_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____incl_stack_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "incl_stack",
  { make__options_file__make__options_file__du_name_ordered_incl_stack_0 },
  { make__options_file__make__options_file__du_ptag_ordered_incl_stack_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_incl_stack_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_0[1] = { (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_incl_stack_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_include_check_result_0_0 = {
  (MR_String) "include_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_include_check_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_include_check_result_0_1 = {
  (MR_String) "include_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_include_check_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_include_check_result_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_include_check_result_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_include_check_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_include_check_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_include_check_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_include_check_result_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_include_check_result_0_1,
  &make__options_file__make__options_file__du_functor_desc_include_check_result_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_include_check_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_include_check_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____include_check_result_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____include_check_result_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "include_check_result",
  { make__options_file__make__options_file__du_name_ordered_include_check_result_0 },
  { make__options_file__make__options_file__du_ptag_ordered_include_check_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_include_check_result_0,

};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_0 = {
  (MR_String) "options_file_need_not_exist",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_1 = {
  (MR_String) "options_file_must_exist",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_is_options_file_optional_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_0,
  &make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_is_options_file_optional_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_1,
  &make__options_file__make__options_file__enum_functor_desc_is_options_file_optional_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_is_options_file_optional_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_is_options_file_optional_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____is_options_file_optional_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____is_options_file_optional_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "is_options_file_optional",
  { make__options_file__make__options_file__enum_name_ordered_is_options_file_optional_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_is_options_file_optional_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_is_options_file_optional_0,

};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_0 = {
  (MR_String) "is_not_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_1 = {
  (MR_String) "is_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_maybe_is_first_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_0,
  &make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_maybe_is_first_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_1,
  &make__options_file__make__options_file__enum_functor_desc_maybe_is_first_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_maybe_is_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_maybe_is_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____maybe_is_first_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____maybe_is_first_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "maybe_is_first",
  { make__options_file__make__options_file__enum_name_ordered_maybe_is_first_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_maybe_is_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_maybe_is_first_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_0[1] = { (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_file_line_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_0 = {
  (MR_String) "ofl_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_maybe_options_file_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_1 = {
  (MR_String) "ofl_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_maybe_options_file_line_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_maybe_options_file_line_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_maybe_options_file_line_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_1,
  &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_maybe_options_file_line_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_maybe_options_file_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____maybe_options_file_line_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____maybe_options_file_line_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "maybe_options_file_line",
  { make__options_file__make__options_file__du_name_ordered_maybe_options_file_line_0 },
  { make__options_file__make__options_file__du_ptag_ordered_maybe_options_file_line_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_maybe_options_file_line_0,

};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0 = {
  (MR_String) "mmc_flags",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2] = {
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2] = {
  (MR_String) "initial_options",
  (MR_String) "option_name"
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1 = {
  (MR_String) "option",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_mmc_option_type_0_1,
  make__options_file__make__options_file__field_names_mmc_option_type_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_mmc_option_type_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0,
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_mmc_option_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_mmc_option_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____mmc_option_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____mmc_option_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "mmc_option_type",
  { make__options_file__make__options_file__du_name_ordered_mmc_option_type_0 },
  { make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_mmc_option_type_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_0 = {
  (MR_String) "ovos_var_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_opt_var_or_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_1 = {
  (MR_String) "ovos_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_opt_var_or_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_opt_var_or_spec_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_opt_var_or_spec_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_1,
  &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_opt_var_or_spec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_opt_var_or_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____opt_var_or_spec_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____opt_var_or_spec_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "opt_var_or_spec",
  { make__options_file__make__options_file__du_name_ordered_opt_var_or_spec_0 },
  { make__options_file__make__options_file__du_ptag_ordered_opt_var_or_spec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_opt_var_or_spec_0,

};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0 = {
  (MR_String) "options_file_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__options_file____Unify____options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_error",
  { &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  { &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__options_file__make__options_file__functor_number_map_options_file_error_0,

};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_set_or_add_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_character_0)
};

static const MR_ConstString make__options_file__make__options_file__field_names_options_file_line_0_0[3] = {
  (MR_String) "vd_set_or_add",
  (MR_String) "vd_var",
  (MR_String) "vd_value"
};

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_file_line_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0 = {
  (MR_String) "ofl_var_defn",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_options_file_line_0_0,
  make__options_file__make__options_file__field_names_options_file_line_0_0,
  make__options_file__make__options_file__field_locns_options_file_line_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2] = {
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_is_options_file_optional_0),
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_character_0)
};

static const MR_ConstString make__options_file__make__options_file__field_names_options_file_line_0_1[2] = {
  (MR_String) "i_exist",
  (MR_String) "i_incl_file_name"
};

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_file_line_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1 = {
  (MR_String) "ofl_include",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_options_file_line_0_1,
  make__options_file__make__options_file__field_names_options_file_line_0_1,
  make__options_file__make__options_file__field_locns_options_file_line_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_file_line_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_file_line_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1,
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_line_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_file_line_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_line_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_line",
  { make__options_file__make__options_file__du_name_ordered_options_file_line_0 },
  { make__options_file__make__options_file__du_ptag_ordered_options_file_line_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_file_line_0,

};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variable_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0 = {
  (MR_String) "default",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1 = {
  (MR_String) "non_module_specific",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2 = {
  (MR_String) "module_specific",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  make__options_file__make__options_file__field_types_options_variable_class_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_class_0[3] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_class_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_class_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_class_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_class",
  { make__options_file__make__options_file__du_name_ordered_options_variable_class_0 },
  { make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_variable_class_0,

};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0 = {
  (MR_String) "grade_flags",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1 = {
  (MR_String) "mmc_flags",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2 = {
  (MR_String) "c_flags",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3 = {
  (MR_String) "gcc_flags",
  INT32_C(3)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4 = {
  (MR_String) "clang_flags",
  INT32_C(4)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5 = {
  (MR_String) "msvc_flags",
  INT32_C(5)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6 = {
  (MR_String) "java_flags",
  INT32_C(6)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7 = {
  (MR_String) "csharp_flags",
  INT32_C(7)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8 = {
  (MR_String) "ml_objs",
  INT32_C(8)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9 = {
  (MR_String) "ml_libs",
  INT32_C(9)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10 = {
  (MR_String) "ld_flags",
  INT32_C(10)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11 = {
  (MR_String) "ld_libflags",
  INT32_C(11)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12 = {
  (MR_String) "c2init_args",
  INT32_C(12)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13 = {
  (MR_String) "libraries",
  INT32_C(13)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14 = {
  (MR_String) "lib_dirs",
  INT32_C(14)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15 = {
  (MR_String) "lib_grades",
  INT32_C(15)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16 = {
  (MR_String) "lib_linkages",
  INT32_C(16)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17 = {
  (MR_String) "install_prefix",
  INT32_C(17)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18 = {
  (MR_String) "stdlib_dir",
  INT32_C(18)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19 = {
  (MR_String) "config_dir",
  INT32_C(19)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20 = {
  (MR_String) "linkage",
  INT32_C(20)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21 = {
  (MR_String) "mercury_linkage",
  INT32_C(21)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0[22] = {
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[22] = {
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[22] = {
  (MR_Integer) 6,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 20,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 18,
  (MR_Integer) 17,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 7,
  (MR_Integer) 21,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 16
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____options_variable_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_type",
  { make__options_file__make__options_file__enum_name_ordered_options_variable_type_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0 },
  (MR_Integer) 22,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_variable_type_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_variable_source_0)
};

static const MR_DuArgLocn make__options_file__make__options_file__field_locns_options_variable_value_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0 = {
  (MR_String) "options_variable_value",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_options_variable_value_0_0,
  NULL,
  make__options_file__make__options_file__field_locns_options_variable_value_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1] = { &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0 };

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_value_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_value_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_value",
  { make__options_file__make__options_file__du_name_ordered_options_variable_value_0 },
  { make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_variable_value_0,

};

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variables_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0),
  (MR_PseudoTypeInfo) (&make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__options_file__make__options_file__field_names_options_variables_0_0[2] = {
  (MR_String) "ov_opts",
  (MR_String) "ov_env"
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variables_0_0 = {
  (MR_String) "options_variables",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_options_variables_0_0,
  make__options_file__make__options_file__field_names_options_variables_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variables_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_options_variables_0_0 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variables_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variables_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variables_0[1] = { &make__options_file__make__options_file__du_functor_desc_options_variables_0_0 };

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variables_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variables_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variables_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variables",
  { make__options_file__make__options_file__du_name_ordered_options_variables_0 },
  { make__options_file__make__options_file__du_ptag_ordered_options_variables_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_variables_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_0 = {
  (MR_String) "pr_ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_parse_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_1 = {
  (MR_String) "pr_eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_parse_result_1_2 = {
  (MR_String) "pr_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__options_file__make__options_file__field_types_parse_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_0[1] = { &make__options_file__make__options_file__du_functor_desc_parse_result_1_1 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_1[1] = { &make__options_file__make__options_file__du_functor_desc_parse_result_1_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_2[1] = { &make__options_file__make__options_file__du_functor_desc_parse_result_1_2 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_parse_result_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_parse_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_parse_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_parse_result_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_parse_result_1[3] = {
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_1,
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_2,
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_parse_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_parse_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____parse_result_1_0_10001)),
  ((MR_Box) (make__options_file____Compare____parse_result_1_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "parse_result",
  { make__options_file__make__options_file__du_name_ordered_parse_result_1 },
  { make__options_file__make__options_file__du_ptag_ordered_parse_result_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_parse_result_1,

};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_0 = {
  (MR_String) "pre_stack_base",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_pre_incl_stack_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_incl_stack_0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_1 = {
  (MR_String) "pre_stack_nested",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__options_file__make__options_file__field_types_pre_incl_stack_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_1[1] = { &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_1 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_pre_incl_stack_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_pre_incl_stack_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_0,
  &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_pre_incl_stack_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_pre_incl_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____pre_incl_stack_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____pre_incl_stack_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "pre_incl_stack",
  { make__options_file__make__options_file__du_name_ordered_pre_incl_stack_0 },
  { make__options_file__make__options_file__du_ptag_ordered_pre_incl_stack_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_pre_incl_stack_0,

};

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
  (MR_PseudoTypeInfo) (&make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_tail_dirs_0)
};

static const MR_ConstString make__options_file__make__options_file__field_names_search_info_0_0[3] = {
  (MR_String) "si_progress_stream",
  (MR_String) "si_maybe_dir_name",
  (MR_String) "si_search_which_dirs"
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_info_0_0 = {
  (MR_String) "search_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_search_info_0_0,
  make__options_file__make__options_file__field_names_search_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_info_0_0[1] = { &make__options_file__make__options_file__du_functor_desc_search_info_0_0 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_search_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_search_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_search_info_0[1] = { &make__options_file__make__options_file__du_functor_desc_search_info_0_0 };

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____search_info_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____search_info_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "search_info",
  { make__options_file__make__options_file__du_name_ordered_search_info_0 },
  { make__options_file__make__options_file__du_ptag_ordered_search_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_search_info_0,

};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_set_or_add_0_0 = {
  (MR_String) "soa_set",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_set_or_add_0_1 = {
  (MR_String) "soa_add",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_set_or_add_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_set_or_add_0_0,
  &make__options_file__make__options_file__enum_functor_desc_set_or_add_0_1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_set_or_add_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_set_or_add_0_1,
  &make__options_file__make__options_file__enum_functor_desc_set_or_add_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_set_or_add_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_set_or_add_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____set_or_add_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____set_or_add_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "set_or_add",
  { make__options_file__make__options_file__enum_name_ordered_set_or_add_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_set_or_add_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_set_or_add_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0 = {
  (MR_String) "var_result_set",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_variable_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1 = {
  (MR_String) "var_result_unset",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1] = { (MR_PseudoTypeInfo) (&make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2 = {
  (MR_String) "var_result_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__options_file__make__options_file__field_types_variable_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1] = { &make__options_file__make__options_file__du_functor_desc_variable_result_1_1 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1] = { &make__options_file__make__options_file__du_functor_desc_variable_result_1_0 };

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1] = { &make__options_file__make__options_file__du_functor_desc_variable_result_1_2 };

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_variable_result_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_variable_result_1[3] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_2,
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_0,
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_result_1[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_variable_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____variable_result_1_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_result_1_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_result",
  { make__options_file__make__options_file__du_name_ordered_variable_result_1 },
  { make__options_file__make__options_file__du_ptag_ordered_variable_result_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_variable_result_1,

};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_0 = {
  (MR_String) "options_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_1 = {
  (MR_String) "command_line",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_2 = {
  (MR_String) "environment",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_variable_source_0[3] = {
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_0,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_1,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_2
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_variable_source_0[3] = {
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_1,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_2,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_source_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_variable_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____variable_source_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_source_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_source",
  { make__options_file__make__options_file__enum_name_ordered_variable_source_0 },
  { make__options_file__make__options_file__enum_ordinal_ordered_variable_source_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_variable_source_0,

};

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1516__1_1_p_0(
  MR_String LambdaHeadVar__1_42)
{
  MR_bool succeeded;

  succeeded = mercury__string__prefix_2_p_0(LambdaHeadVar__1_42, (MR_String) "-l");
  succeeded = !(succeeded);
  return succeeded;
}

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1414__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14)
{
  MR_Word LambdaHeadVar__2_15;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (LambdaHeadVar__1_14));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LambdaHeadVar__2_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_15, 0) = ((MR_Box) (OptionName_9));
    MR_hl_field(1, LambdaHeadVar__2_15, 1) = ((MR_Box) (Var_16));
  }
  return LambdaHeadVar__2_15;
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_12_12;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____search_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__io____Compare____text_output_stream_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__find_module____Compare____search_which_tail_dirs_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = parse_tree__find_module____Unify____search_which_tail_dirs_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      make__options_file____Compare____incl_stack_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = make__options_file____Unify____incl_stack_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__options_file____Compare____options_variables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&make__options_file_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&make__options_file_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    make__options_file____Compare____options_file_line_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;
      MR_Integer Var_24 = (MR_Integer) (ArgX1_12);
      MR_Integer Var_25 = (MR_Integer) (ArgY1_13);

      succeeded = (Var_24 < Var_25);
      if (succeeded)
      {
        SubResult1_14 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_24 > Var_25);
        if (succeeded)
        {
          SubResult1_14 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_14 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_26 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_27 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_26 < Var_27);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_26 > Var_27);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = make__options_file____Unify____options_file_line_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (ArgX1_9 == ArgY1_10);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&make__options_file_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&make__options_file_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    make__options_file____Compare____incl_stack_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = make__options_file____Unify____incl_stack_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____incl_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        mercury__term_context____Compare____term_context_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
        succeeded = (SubResult2_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = ArgX3_12;
          MR_Word next_value_of_HeadVar__3_3 = ArgY3_13;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____incl_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
  MR_Word * HeadVar__1_1)
{
  make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
make__options_file__write_env_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_String VarValue_8)
{
  MR_String Var_16;
  MR_String Var_22;

  Var_16 = mercury__string__f_43_43_2_f_0(VarName_7, (MR_String) " ->");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&make__options_file_scalar_common_3[2]), (MR_Integer) 24, Var_16, &Var_22);
  mercury__io__write_string_4_p_0(DumpStream_6, Var_22);
  mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(DumpStream_6, VarValue_8);
  mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) "\n");
}

static void MR_CALL 
make__options_file__write_options_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_Word OptVarValue_8)
{
  MR_Word ValueWords_11 = ((MR_Word) ((MR_hl_field(0, OptVarValue_8, (MR_Integer) 1))));
  MR_Word Src_12 = ((MR_Unsigned) ((MR_hl_field(0, OptVarValue_8, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_String Var_19;
  MR_String Var_28;

  Var_19 = mercury__string__f_43_43_2_f_0(VarName_7, (MR_String) " ->");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&make__options_file_scalar_common_3[2]), (MR_Integer) 24, Var_19, &Var_28);
  mercury__io__write_string_4_p_0(DumpStream_6, Var_28);
  mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
  mercury__io__write_4_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_variable_source_0), DumpStream_6, ((MR_Box) (Src_12)));
  mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
  mercury__io__write_line_4_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), DumpStream_6, ((MR_Box) (ValueWords_11)));
}

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1516__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__options_file__lookup_options_variable_6_p_0(
  MR_Word Variables_7,
  MR_Word OptionsVariableClass_8,
  MR_Word FlagsVar_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word MaybeValues_10;
  MR_String VarName_12 = ((&make__options_file_vector_common_12[0 + FlagsVar_9]))->make__options_file__vector_common_type_12_0__vct_12_f_0;
  MR_Word DefaultFlagsResult_13;
  MR_Word FlagsResult_14;
  MR_Word ExtraFlagsResult_15;
  MR_Word ModuleFlagsResult_20;
  MR_Word Result_21;
  MR_String Var_33;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word ModuleName_17;

  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", VarName_12);
  make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_33, &DefaultFlagsResult_13);
  switch (MR_tag((MR_Word) OptionsVariableClass_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OptionsVariableClass_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            FlagsResult_14 = (MR_Word) ((MR_Unsigned) 0U);
            ExtraFlagsResult_15 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_35;

            make__options_file__lookup_variable_words_3_p_0(Variables_7, VarName_12, &FlagsResult_14);
            Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_12);
            make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_35, &ExtraFlagsResult_15);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_35;

        make__options_file__lookup_variable_words_3_p_0(Variables_7, VarName_12, &FlagsResult_14);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_12);
        make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_35, &ExtraFlagsResult_15);
      }
      break;
  }
  if (((MR_Unsigned) 3391486U & (((MR_Integer) 1 << FlagsVar_9))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) OptionsVariableClass_8)) == (MR_Integer) 1);
    if (succeeded)
      ModuleName_17 = ((MR_Word) ((MR_hl_field(1, OptionsVariableClass_8, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_String ModuleFileNameBase_18;
    MR_String ModuleVarName_19;
    MR_String Var_38;

    ModuleFileNameBase_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "-", ModuleFileNameBase_18);
    ModuleVarName_19 = mercury__string__f_43_43_2_f_0(VarName_12, Var_38);
    make__options_file__lookup_variable_words_3_p_0(Variables_7, ModuleVarName_19, &ModuleFlagsResult_20);
  }
  else
    ModuleFlagsResult_20 = (MR_Word) ((MR_Unsigned) 0U);
  switch (MR_tag((MR_Word) DefaultFlagsResult_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_41 = FlagsResult_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SA_71 = ((MR_Word) ((MR_hl_field(1, DefaultFlagsResult_13, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) FlagsResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_41 = DefaultFlagsResult_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SB_72 = ((MR_Word) ((MR_hl_field(1, FlagsResult_14, (MR_Integer) 0))));
              MR_Word Var_77;

              Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SA_71, SB_72);
              {
                Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_77));
              }
            }
            break;
          case (MR_Integer) 2:
            Var_41 = FlagsResult_14;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EA_74 = ((MR_Word) ((MR_hl_field(2, DefaultFlagsResult_13, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) FlagsResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_41 = DefaultFlagsResult_13;
            break;
          case (MR_Integer) 1:
            Var_41 = DefaultFlagsResult_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EB_76 = ((MR_Word) ((MR_hl_field(2, FlagsResult_14, (MR_Integer) 0))));
              MR_Word Var_78;

              Var_78 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EA_74, EB_76);
              {
                Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_41, 0) = ((MR_Box) (Var_78));
              }
            }
            break;
        }
      }
      break;
  }
  switch (MR_tag((MR_Word) Var_41)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_40 = ExtraFlagsResult_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SA_80 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) ExtraFlagsResult_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_40 = Var_41;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SB_81 = ((MR_Word) ((MR_hl_field(1, ExtraFlagsResult_15, (MR_Integer) 0))));
              MR_Word Var_86;

              Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SA_80, SB_81);
              {
                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_86));
              }
            }
            break;
          case (MR_Integer) 2:
            Var_40 = ExtraFlagsResult_15;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EA_83 = ((MR_Word) ((MR_hl_field(2, Var_41, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) ExtraFlagsResult_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_40 = Var_41;
            break;
          case (MR_Integer) 1:
            Var_40 = Var_41;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EB_85 = ((MR_Word) ((MR_hl_field(2, ExtraFlagsResult_15, (MR_Integer) 0))));
              MR_Word Var_87;

              Var_87 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EA_83, EB_85);
              {
                Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_40, 0) = ((MR_Box) (Var_87));
              }
            }
            break;
        }
      }
      break;
  }
  switch (MR_tag((MR_Word) Var_40)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_21 = ModuleFlagsResult_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SA_89 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) ModuleFlagsResult_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Result_21 = Var_40;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SB_90 = ((MR_Word) ((MR_hl_field(1, ModuleFlagsResult_20, (MR_Integer) 0))));
              MR_Word Var_95;

              Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SA_89, SB_90);
              {
                Result_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Result_21, 0) = ((MR_Box) (Var_95));
              }
            }
            break;
          case (MR_Integer) 2:
            Result_21 = ModuleFlagsResult_20;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EA_92 = ((MR_Word) ((MR_hl_field(2, Var_40, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) ModuleFlagsResult_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Result_21 = Var_40;
            break;
          case (MR_Integer) 1:
            Result_21 = Var_40;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EB_94 = ((MR_Word) ((MR_hl_field(2, ModuleFlagsResult_20, (MR_Integer) 0))));
              MR_Word Var_96;

              Var_96 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EA_92, EB_94);
              {
                Result_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Result_21, 0) = ((MR_Box) (Var_96));
              }
            }
            break;
        }
      }
      break;
  }
  switch (MR_tag((MR_Word) Result_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Values_22 = ((MR_Word) ((MR_hl_field(1, Result_21, (MR_Integer) 0))));

        succeeded = (FlagsVar_9 == (MR_Integer) 9);
        if (succeeded)
        {
          MR_Word BadLibs_25;

          BadLibs_25 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[14]), Values_22);
          if ((BadLibs_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MaybeValues_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeValues_10, 0) = ((MR_Box) (Values_22));
            }
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          else
          {
            MR_Word Pieces_28;
            MR_Word Spec_29;
            MR_Word Var_54;
            MR_Word Var_55;

            MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
            Var_55 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "and", BadLibs_25);
            Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[95])));
            Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[94])), Var_54);
            {
              Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_options_variable\'/6"));
              MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Pieces_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_32 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_29));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
            }
          }
        }
        else
        {
          {
            MaybeValues_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeValues_10, 0) = ((MR_Box) (Values_22));
          }
          *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OoMSpecs_30 = ((MR_Word) ((MR_hl_field(2, Result_21, (MR_Integer) 0))));
        MR_Word Var_66;

        MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
        Var_66 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OoMSpecs_30);
        *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_66, STATE_VARIABLE_Specs_0_31);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FlagsVar_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeValues_10));
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_15;

  conv0_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1414__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  if ((Var_8 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VariableValue_6 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
    MR_Word MMCOptionType_10 = ((&make__options_file_vector_common_10[0 + Var_9]))->make__options_file__vector_common_type_10_0__vct_10_f_0;

    if ((MMCOptionType_10 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = VariableValue_6;
    else
    {
      MR_Word InitialOptions_11 = ((MR_Word) ((MR_hl_field(1, MMCOptionType_10, (MR_Integer) 0))));
      MR_String OptionName_12 = ((MR_String) ((MR_hl_field(1, MMCOptionType_10, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (&make__options_file_scalar_common_11[0]));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1));
        MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_15, 3) = ((MR_Box) (OptionName_12));
      }
      Var_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[1]), Var_15, VariableValue_6);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (InitialOptions_11));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
      }
      HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13);
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
make__options_file__include_context_msg_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Msg_5;
  MR_String FileName_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Pieces_6;
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (FileName_3));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[24])));
  }
  {
    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[22])));
    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_9));
  }
  {
    Msg_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg_5, 0) = ((MR_Box) (Context_4));
    MR_hl_field(0, Msg_5, 1) = ((MR_Box) (Pieces_6));
  }
  return Msg_5;
}

static void MR_CALL 
make__options_file__read_options_file_set_params_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word OptionTable_15,
  MR_String OptionsFile_16,
  MR_Word STATE_VARIABLE_Variables_0_26,
  MR_Word * STATE_VARIABLE_Variables_27,
  MR_Word STATE_VARIABLE_IOSpecs_0_28,
  MR_Word * STATE_VARIABLE_IOSpecs_29,
  MR_Word STATE_VARIABLE_ParseSpecs_0_30,
  MR_Word * STATE_VARIABLE_ParseSpecs_31,
  MR_Word STATE_VARIABLE_UndefSpecs_0_32,
  MR_Word * STATE_VARIABLE_UndefSpecs_33)
{
  MR_bool succeeded = (strcmp(OptionsFile_16, (MR_String) "Mercury.options") == 0);
  MR_Word SearchWhichDirs_23;
  MR_Word IsOptionsFileOptional_24;
  MR_Word SearchInfo_25;

  if (succeeded)
  {
    SearchWhichDirs_23 = (MR_Word) ((MR_Unsigned) 0U);
    IsOptionsFileOptional_24 = (MR_Integer) 0;
  }
  else
  {
    {
      SearchWhichDirs_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SearchWhichDirs_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, SearchWhichDirs_23, 1) = ((MR_Box) (OptionTable_15));
    }
    IsOptionsFileOptional_24 = (MR_Integer) 1;
  }
  {
    SearchInfo_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SearchInfo_25, 0) = ((MR_Box) (ProgressStream_14));
    MR_hl_field(0, SearchInfo_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SearchInfo_25, 2) = ((MR_Box) (SearchWhichDirs_23));
  }
  make__options_file__read_options_file_params_14_p_0(SearchInfo_25, (MR_Word) ((MR_Unsigned) 0U), IsOptionsFileOptional_24, OptionsFile_16, STATE_VARIABLE_Variables_0_26, STATE_VARIABLE_Variables_27, STATE_VARIABLE_IOSpecs_0_28, STATE_VARIABLE_IOSpecs_29, STATE_VARIABLE_ParseSpecs_0_30, STATE_VARIABLE_ParseSpecs_31, STATE_VARIABLE_UndefSpecs_0_32, STATE_VARIABLE_UndefSpecs_33);
}

static void MR_CALL 
make__options_file__dump_options_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  make__options_file__write_options_variable_value_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
make__options_file__dump_options_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word Variables_8)
{
  MR_Word OpenResult_10;

  mercury__io__open_output_4_p_0(FileName_7, &OpenResult_10);
  if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, OpenResult_10, (MR_Integer) 0))));
    MR_String ErrorMsg_13;

    ErrorMsg_13 = mercury__io__error_message_1_f_0(Error_12);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "mercury_compile: ");
    mercury__io__write_string_4_p_0(ProgressStream_6, ErrorMsg_13);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word DumpStream_11 = ((MR_Word) ((MR_hl_field(0, OpenResult_10, (MR_Integer) 0))));
    MR_Word OptsMap_29 = ((MR_Word) ((MR_hl_field(0, Variables_8, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Box conv0_STATE_VARIABLE_IO_17_17;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__options_file_scalar_common_9[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__options_file__dump_options_file_5_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (DumpStream_11));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, OptsMap_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17_17);
    mercury__io__close_output_3_p_0(DumpStream_11);
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__options_file__lookup_mmc_module_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
make__options_file__lookup_mmc_module_options_3_p_0(
  MR_Word Variables_4,
  MR_Word ModuleName_5,
  MR_Word * Result_6)
{
  MR_Word Var_7;
  MR_Word VariableTypesMaybeValues_9;
  MR_Word Specs_10;
  MR_Word Var_13;
  MR_Box conv2_Specs_10;

  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (ModuleName_5));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (make__options_file__lookup_mmc_module_options_3_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Variables_4));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_7));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_13, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[67])), &VariableTypesMaybeValues_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_10);
  Specs_10 = ((MR_Word) (conv2_Specs_10));
  if ((Specs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MmcOptLists_11;
    MR_Word MmcOpts_12;

    MmcOptLists_11 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[13]), VariableTypesMaybeValues_9);
    mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MmcOptLists_11, &MmcOpts_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmcOpts_12));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_10));
    }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__options_file__lookup_mmc_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
make__options_file__lookup_mmc_options_2_p_0(
  MR_Word Variables_3,
  MR_Word * Result_4)
{
  MR_Word VariableTypesMaybeValues_7;
  MR_Word Specs_8;
  MR_Word Var_11;
  MR_Box conv2_Specs_8;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (make__options_file__lookup_mmc_options_2_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Variables_3));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_11, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[67])), &VariableTypesMaybeValues_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_8);
  Specs_8 = ((MR_Word) (conv2_Specs_8));
  if ((Specs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MmcOptLists_9;
    MR_Word MmcOpts_10;

    MmcOptLists_9 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[12]), VariableTypesMaybeValues_7);
    mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MmcOptLists_9, &MmcOpts_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmcOpts_10));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_8));
    }
}

static MR_Box MR_CALL 
make__options_file__lookup_default_options_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__options_file__lookup_default_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
make__options_file__lookup_default_options_2_p_0(
  MR_Word Variables_3,
  MR_Word * Result_4)
{
  MR_Word VariableTypesMaybeValues_7;
  MR_Word Specs_8;
  MR_Word Var_11;
  MR_Box conv2_Specs_8;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (make__options_file__lookup_default_options_2_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Variables_3));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_11, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[67])), &VariableTypesMaybeValues_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_8);
  Specs_8 = ((MR_Word) (conv2_Specs_8));
  if ((Specs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MmcOptLists_9;
    MR_Word MmcOpts_10;

    MmcOptLists_9 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[11]), VariableTypesMaybeValues_7);
    mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MmcOptLists_9, &MmcOpts_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmcOpts_10));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_8));
    }
}

void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_2_p_0(
  MR_Word Variables_3,
  MR_Word * MaybeMerStdlibDir_4)
{
  MR_Word MerStdlibDirResult_5;

  make__options_file__lookup_variable_words_3_p_0(Variables_3, (MR_String) "MERCURY_STDLIB_DIR", &MerStdlibDirResult_5);
  switch (MR_tag((MR_Word) MerStdlibDirResult_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeMerStdlibDir_4 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word MerStdlibDir_6 = ((MR_Word) ((MR_hl_field(1, MerStdlibDirResult_5, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMerStdlibDir_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MerStdlibDir_6));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OoMSpecs_7 = ((MR_Word) ((MR_hl_field(2, MerStdlibDirResult_5, (MR_Integer) 0))));
        MR_Word Var_10;

        Var_10 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OoMSpecs_7);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMerStdlibDir_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
        }
      }
      break;
  }
}

void MR_CALL 
make__options_file__lookup_main_target_2_p_0(
  MR_Word Variables_3,
  MR_Word * MaybeMainTarget_4)
{
  MR_Word MainTargetResult_5;

  make__options_file__lookup_variable_words_3_p_0(Variables_3, (MR_String) "MAIN_TARGET", &MainTargetResult_5);
  switch (MR_tag((MR_Word) MainTargetResult_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeMainTarget_4 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word MainTarget_6 = ((MR_Word) ((MR_hl_field(1, MainTargetResult_5, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMainTarget_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MainTarget_6));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OoMSpecs_7 = ((MR_Word) ((MR_hl_field(2, MainTargetResult_5, (MR_Integer) 0))));
        MR_Word Var_10;

        Var_10 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OoMSpecs_7);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMainTarget_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
        }
      }
      break;
  }
}

void MR_CALL 
make__options_file__read_args_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_String OptionsFile_9,
  MR_Word * MaybeMCFlags_10,
  MR_Word * Specs_11,
  MR_Word * UndefSpecs_12)
{
  MR_bool succeeded;
  MR_Word EnvVarMap_14;
  MR_Word Variables0_15;
  MR_Word Variables_16;
  MR_Word Specs0_17;
  MR_Word NoEnvVariables_18;
  MR_Word FlagsResult_19;
  MR_Word Var_29;
  MR_Word OptsMap_46;
  MR_Word Var_42;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_14);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_46);
  {
    Variables0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Variables0_15, 0) = ((MR_Box) (OptsMap_46));
    MR_hl_field(0, Variables0_15, 1) = ((MR_Box) (EnvVarMap_14));
  }
  make__options_file__read_named_options_file_8_p_0(ProgressStream_8, OptionsFile_9, Variables0_15, &Variables_16, &Specs0_17, UndefSpecs_12);
  Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Variables_16, (MR_Integer) 0))));
  {
    NoEnvVariables_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NoEnvVariables_18, 0) = ((MR_Box) (Var_42));
    MR_hl_field(0, NoEnvVariables_18, 1) = ((MR_Box) (Var_29));
  }
  make__options_file__lookup_variable_words_3_p_0(NoEnvVariables_18, (MR_String) "MCFLAGS", &FlagsResult_19);
  switch (MR_tag((MR_Word) FlagsResult_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeMCFlags_10 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = (Specs0_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (*UndefSpecs_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Specs_11 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_6[1])));
            MR_hl_field(1, base, 1) = ((MR_Box) (Specs0_17));
          }
        else
          *Specs_11 = Specs0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MCFlags_20 = ((MR_Word) ((MR_hl_field(1, FlagsResult_19, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMCFlags_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MCFlags_20));
        }
        *Specs_11 = Specs0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OoMErrorSpecs_23 = ((MR_Word) ((MR_hl_field(2, FlagsResult_19, (MR_Integer) 0))));
        MR_Word VarResultSpecs_24;

        *MaybeMCFlags_10 = (MR_Word) ((MR_Unsigned) 0U);
        VarResultSpecs_24 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OoMErrorSpecs_23);
        *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), VarResultSpecs_24, Specs0_17);
      }
      break;
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_3_p_0(
  MR_Word Variables_4,
  MR_String VarName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word OptsMap_7 = ((MR_Word) ((MR_hl_field(0, Variables_4, (MR_Integer) 0))));
  MR_Word EnvMap_8 = ((MR_Word) ((MR_hl_field(0, Variables_4, (MR_Integer) 1))));
  MR_String EnvValue_9;
  MR_Box conv0_EnvValue_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvMap_8, ((MR_Box) (VarName_5)), &conv0_EnvValue_9);
  if (succeeded)
  {
    EnvValue_9 = ((MR_String) (conv0_EnvValue_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_19;
    MR_Word RevWords_40;
    MR_Word MaybeError_41;
    MR_Word Words_42;

    Var_19 = mercury__string__to_char_list_1_f_0(EnvValue_9);
    make__options_file__split_into_words_loop_4_p_0(Var_19, (MR_Word) ((MR_Unsigned) 0U), &RevWords_40, &MaybeError_41);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_40, &Words_42);
    if ((MaybeError_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Words_42));
      }
    else
    {
      MR_String Msg_12 = ((MR_String) ((MR_hl_field(1, MaybeError_41, (MR_Integer) 0))));
      MR_Word Pieces_13;
      MR_Word ErrorSpec_14;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_35;

      {
        Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_23, 1) = ((MR_Box) (VarName_5));
      }
      {
        Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_28, 1) = ((MR_Box) (Msg_12));
      }
      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[6])));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[12])));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[96])));
        MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_22));
      }
      {
        ErrorSpec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ErrorSpec_14, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_variable_words\'/3"));
        MR_hl_field(1, ErrorSpec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, ErrorSpec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(1, ErrorSpec_14, 3) = ((MR_Box) (Pieces_13));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (ErrorSpec_14));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
  else
  {
    MR_Word MapValue_15;
    MR_Box conv1_MapValue_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), OptsMap_7, ((MR_Box) (VarName_5)), &conv1_MapValue_15);
    if (succeeded)
    {
      MapValue_15 = ((MR_Word) (conv1_MapValue_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Words_17 = ((MR_Word) ((MR_hl_field(0, MapValue_15, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Words_17));
      }
    }
    else
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
make__options_file__read_named_options_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_String OptionsPathName_10,
  MR_Word STATE_VARIABLE_Variables_0_18,
  MR_Word * STATE_VARIABLE_Variables_19,
  MR_Word * Specs_12,
  MR_Word * UndefSpecs_13)
{
  MR_Word SearchInfo_15;
  MR_Word IOSpecs_16;
  MR_Word ParseSpecs_17;

  {
    SearchInfo_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SearchInfo_15, 0) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, SearchInfo_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SearchInfo_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__options_file__read_options_file_params_14_p_0(SearchInfo_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, OptionsPathName_10, STATE_VARIABLE_Variables_0_18, STATE_VARIABLE_Variables_19, (MR_Word) ((MR_Unsigned) 0U), &IOSpecs_16, (MR_Word) ((MR_Unsigned) 0U), &ParseSpecs_17, (MR_Word) ((MR_Unsigned) 0U), UndefSpecs_13);
  *Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), IOSpecs_16, ParseSpecs_17);
}

static void MR_CALL 
make__options_file__read_options_file_params_14_p_0(
  MR_Word SearchInfo_15,
  MR_Word PreStack0_16,
  MR_Word IsOptionsFileOptional_17,
  MR_String OptionsPathName_18,
  MR_Word STATE_VARIABLE_Variables_0_50,
  MR_Word * STATE_VARIABLE_Variables_51,
  MR_Word STATE_VARIABLE_IOSpecs_0_52,
  MR_Word * STATE_VARIABLE_IOSpecs_53,
  MR_Word STATE_VARIABLE_ParseSpecs_0_54,
  MR_Word * STATE_VARIABLE_ParseSpecs_55,
  MR_Word STATE_VARIABLE_UndefSpecs_0_56,
  MR_Word * STATE_VARIABLE_UndefSpecs_57)
{
  MR_bool succeeded = (strcmp(OptionsPathName_18, (MR_String) "-") == 0);
  MR_Word MaybeDirName_25 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 1))));
  MR_Word SearchWhichDirs0_26 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 2))));

  if (succeeded)
  {
    MR_Word CheckResult_27;

    make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, (MR_String) "-", &CheckResult_27);
    if (((MR_tag((MR_Word) CheckResult_27)) == (MR_Integer) 1))
    {
      MR_Word CheckSpec_31 = ((MR_Word) ((MR_hl_field(1, CheckResult_27, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ParseSpecs_55 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CheckSpec_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_54));
      }
      *STATE_VARIABLE_Variables_51 = STATE_VARIABLE_Variables_0_50;
      *STATE_VARIABLE_IOSpecs_53 = STATE_VARIABLE_IOSpecs_0_52;
      *STATE_VARIABLE_UndefSpecs_57 = STATE_VARIABLE_UndefSpecs_0_56;
    }
    else
    {
      MR_Word InclStack0_28 = ((MR_Word) ((MR_hl_field(0, CheckResult_27, (MR_Integer) 0))));
      MR_Word SubSearchInfo_30;
      MR_Word Var_64;
      MR_String Var_65;
      MR_Word Var_66;
      MR_Word Var_154;
      MR_Word Var_156;

      Var_65 = mercury__dir__this_directory_0_f_0();
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      }
      Var_154 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 0))));
      Var_156 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 2))));
      {
        SubSearchInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SubSearchInfo_30, 0) = ((MR_Box) (Var_154));
        MR_hl_field(0, SubSearchInfo_30, 1) = ((MR_Box) (Var_64));
        MR_hl_field(0, SubSearchInfo_30, 2) = ((MR_Box) (Var_156));
      }
      Var_66 = mercury__io__stdin_stream_0_f_0();
      make__options_file__read_options_lines_15_p_0(SubSearchInfo_30, InclStack0_28, Var_66, (MR_String) "stdin", (MR_Integer) 1, STATE_VARIABLE_Variables_0_50, STATE_VARIABLE_Variables_51, STATE_VARIABLE_IOSpecs_0_52, STATE_VARIABLE_IOSpecs_53, STATE_VARIABLE_ParseSpecs_0_54, STATE_VARIABLE_ParseSpecs_55, STATE_VARIABLE_UndefSpecs_0_56, STATE_VARIABLE_UndefSpecs_57);
    }
  }
  else
  {
    MR_String FileToFind_34;
    MR_Word SearchWhichDirs_35;
    MR_Word SearchDirs_38;
    MR_Word MaybeDirAndStream_39;
    MR_String OptionsDir_32;
    MR_String OptionsFile_33;

    succeeded = mercury__dir__split_name_3_p_0(OptionsPathName_18, &OptionsDir_32, &OptionsFile_33);
    if (succeeded)
    {
      succeeded = mercury__dir__path_name_is_absolute_1_p_0(OptionsDir_32);
      if (succeeded)
      {
        FileToFind_34 = OptionsFile_33;
        {
          SearchWhichDirs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SearchWhichDirs_35, 0) = ((MR_Box) (OptionsDir_32));
        }
      }
      else
      if ((MaybeDirName_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        SearchWhichDirs_35 = (MR_Word) (SearchWhichDirs0_26);
        FileToFind_34 = OptionsPathName_18;
      }
      else
      {
        MR_String DirName_36 = ((MR_String) ((MR_hl_field(1, MaybeDirName_25, (MR_Integer) 0))));
        MR_String RelOptionsDir_37;

        RelOptionsDir_37 = mercury__dir__f_slash_2_f_0(DirName_36, OptionsDir_32);
        {
          SearchWhichDirs_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, SearchWhichDirs_35, 0) = ((MR_Box) (RelOptionsDir_37));
          MR_hl_field(2, SearchWhichDirs_35, 1) = ((MR_Box) (SearchWhichDirs0_26));
        }
        FileToFind_34 = OptionsFile_33;
      }
    }
    else
    {
      SearchWhichDirs_35 = (MR_Word) (SearchWhichDirs0_26);
      FileToFind_34 = OptionsPathName_18;
    }
    parse_tree__find_module__search_for_file_returning_dir_and_stream_6_p_0(SearchWhichDirs_35, FileToFind_34, &SearchDirs_38, &MaybeDirAndStream_39);
    if (((MR_tag((MR_Word) MaybeDirAndStream_39)) == (MR_Integer) 1))
    {
      MR_String Error_42 = ((MR_String) ((MR_hl_field(1, MaybeDirAndStream_39, (MR_Integer) 0))));

      switch (IsOptionsFileOptional_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String ErrorFile_44;
            MR_Word MaybeContext_45;
            MR_Word Pieces_48;
            MR_Word Spec_49;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_142;
            MR_Word Var_143;
            MR_String SingleDir_43;
            MR_Word Var_119;

            succeeded = (SearchDirs_38 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SingleDir_43 = ((MR_String) ((MR_hl_field(1, SearchDirs_38, (MR_Integer) 0))));
              Var_119 = ((MR_Word) ((MR_hl_field(1, SearchDirs_38, (MR_Integer) 1))));
              succeeded = (Var_119 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_String Var_160;

              Var_160 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(SingleDir_43, Var_160) == 0);
              if (succeeded)
                ErrorFile_44 = FileToFind_34;
              else
                ErrorFile_44 = mercury__dir__make_path_name_2_f_0(SingleDir_43, FileToFind_34);
            }
            else
              ErrorFile_44 = FileToFind_34;
            if ((PreStack0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeContext_45 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Context_46 = ((MR_Word) ((MR_hl_field(1, PreStack0_16, (MR_Integer) 0))));

              {
                MaybeContext_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeContext_45, 0) = ((MR_Box) (Context_46));
              }
            }
            {
              Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_123, 1) = ((MR_Box) (ErrorFile_44));
            }
            {
              Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_128, 1) = ((MR_Box) (Error_42));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[12])));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
            }
            {
              Pieces_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_48, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[11])));
              MR_hl_field(1, Pieces_48, 1) = ((MR_Box) (Var_122));
            }
            {
              Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_137, 0) = ((MR_Box) (ErrorFile_44));
            }
            {
              Var_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_143, 0) = ((MR_Box) (Pieces_48));
            }
            {
              Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
              MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_139, 1) = ((MR_Box) (MaybeContext_45));
              MR_hl_field(3, Var_139, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Var_139, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_139, 4) = ((MR_Box) (Var_142));
            }
            {
              Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
              MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.read_options_file_params\'/14"));
              MR_hl_field(2, Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_49, 2) = ((MR_Box) (Var_137));
              MR_hl_field(2, Spec_49, 3) = ((MR_Box) (Var_138));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_IOSpecs_53 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_49));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_IOSpecs_0_52));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_IOSpecs_53 = STATE_VARIABLE_IOSpecs_0_52;
          break;
      }
      *STATE_VARIABLE_Variables_51 = STATE_VARIABLE_Variables_0_50;
      *STATE_VARIABLE_ParseSpecs_55 = STATE_VARIABLE_ParseSpecs_0_54;
      *STATE_VARIABLE_UndefSpecs_57 = STATE_VARIABLE_UndefSpecs_0_56;
    }
    else
    {
      MR_String FoundDir_40;
      MR_Word FoundStream_41;
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, MaybeDirAndStream_39, (MR_Integer) 0))));
      MR_String Var_94;
      MR_Word CheckResult_153;

      FoundDir_40 = ((MR_String) ((MR_hl_field(0, Var_89, (MR_Integer) 0))));
      FoundStream_41 = ((MR_Word) ((MR_hl_field(0, Var_89, (MR_Integer) 1))));
      Var_94 = mercury__dir__f_slash_2_f_0(FoundDir_40, FileToFind_34);
      make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, Var_94, &CheckResult_153);
      if (((MR_tag((MR_Word) CheckResult_153)) == (MR_Integer) 1))
      {
        MR_Word CheckSpec_149 = ((MR_Word) ((MR_hl_field(1, CheckResult_153, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParseSpecs_55 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CheckSpec_149));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_54));
        }
        *STATE_VARIABLE_Variables_51 = STATE_VARIABLE_Variables_0_50;
        *STATE_VARIABLE_IOSpecs_53 = STATE_VARIABLE_IOSpecs_0_52;
        *STATE_VARIABLE_UndefSpecs_57 = STATE_VARIABLE_UndefSpecs_0_56;
      }
      else
      {
        MR_Word Var_102;
        MR_Word InclStack0_147 = ((MR_Word) ((MR_hl_field(0, CheckResult_153, (MR_Integer) 0))));
        MR_Word SubSearchInfo_148;
        MR_Word Var_157;
        MR_Word Var_159;

        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (FoundDir_40));
        }
        Var_157 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 0))));
        Var_159 = ((MR_Word) ((MR_hl_field(0, SearchInfo_15, (MR_Integer) 2))));
        {
          SubSearchInfo_148 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubSearchInfo_148, 0) = ((MR_Box) (Var_157));
          MR_hl_field(0, SubSearchInfo_148, 1) = ((MR_Box) (Var_102));
          MR_hl_field(0, SubSearchInfo_148, 2) = ((MR_Box) (Var_159));
        }
        make__options_file__read_options_lines_15_p_0(SubSearchInfo_148, InclStack0_147, FoundStream_41, FileToFind_34, (MR_Integer) 1, STATE_VARIABLE_Variables_0_50, STATE_VARIABLE_Variables_51, STATE_VARIABLE_IOSpecs_0_52, STATE_VARIABLE_IOSpecs_53, STATE_VARIABLE_ParseSpecs_0_54, STATE_VARIABLE_ParseSpecs_55, STATE_VARIABLE_UndefSpecs_0_56, STATE_VARIABLE_UndefSpecs_57);
      }
      mercury__io__close_input_3_p_0(FoundStream_41);
    }
  }
}

static void MR_CALL 
make__options_file__read_options_lines_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Variables_51;
  MR_Word conv2_STATE_VARIABLE_IOSpecs_53;
  MR_Word conv1_STATE_VARIABLE_ParseSpecs_55;
  MR_Word conv0_STATE_VARIABLE_UndefSpecs_57;

  make__options_file__read_options_file_params_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Variables_51, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_IOSpecs_53, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ParseSpecs_55, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_UndefSpecs_57);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Variables_51));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_IOSpecs_53));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ParseSpecs_55));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_UndefSpecs_57));
}

static void MR_CALL 
make__options_file__read_options_lines_15_p_0(
  MR_Word SearchInfo_16,
  MR_Word InclStack0_17,
  MR_Word InStream_18,
  MR_String FileName_19,
  MR_Integer LineNumber0_20,
  MR_Word STATE_VARIABLE_Variables_0_47,
  MR_Word * STATE_VARIABLE_Variables_48,
  MR_Word STATE_VARIABLE_IOSpecs_0_49,
  MR_Word * STATE_VARIABLE_IOSpecs_50,
  MR_Word STATE_VARIABLE_ParseSpecs_0_51,
  MR_Word * STATE_VARIABLE_ParseSpecs_52,
  MR_Word STATE_VARIABLE_UndefSpecs_0_53,
  MR_Word * STATE_VARIABLE_UndefSpecs_54)
{
  while (MR_TRUE)
  {
    MR_Integer LineNumber1_26;
    MR_Word LineResult_27;
    MR_Word SpaceResult_96;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__ignore_whitespace_4_p_0(InStream_18, &SpaceResult_96);
    switch (MR_tag((MR_Word) SpaceResult_96)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SpaceResult_96)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__options_file__read_options_line_loop_8_p_0(InStream_18, FileName_19, LineNumber0_20, &LineNumber1_26, (MR_Word) ((MR_Unsigned) 0U), &LineResult_27);
            break;
          case (MR_Integer) 1:
            {
              LineResult_27 = (MR_Word) ((MR_Unsigned) 0U);
              LineNumber1_26 = LineNumber0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_97 = ((MR_Word) ((MR_hl_field(1, SpaceResult_96, (MR_Integer) 0))));
          MR_Word Spec_98;
          MR_Word Context_101;
          MR_String Msg_102;
          MR_Word Pieces_103;
          MR_Word Var_106;
          MR_Word Var_107;

          {
            Context_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_101, 0) = ((MR_Box) (FileName_19));
            MR_hl_field(0, Context_101, 1) = ((MR_Box) (LineNumber0_20));
          }
          Msg_102 = mercury__io__error_message_1_f_0(Error_97);
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (Msg_102));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
          }
          {
            Pieces_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_103, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[27])));
            MR_hl_field(1, Pieces_103, 1) = ((MR_Box) (Var_106));
          }
          {
            Spec_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_98, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(0, Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_98, 3) = ((MR_Box) (Context_101));
            MR_hl_field(0, Spec_98, 4) = ((MR_Box) (Pieces_103));
          }
          {
            LineResult_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, LineResult_27, 0) = ((MR_Box) (Spec_98));
          }
          LineNumber1_26 = LineNumber0_20;
        }
        break;
    }
    switch (MR_tag((MR_Word) LineResult_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Variables_48 = STATE_VARIABLE_Variables_0_47;
          *STATE_VARIABLE_IOSpecs_50 = STATE_VARIABLE_IOSpecs_0_49;
          *STATE_VARIABLE_ParseSpecs_52 = STATE_VARIABLE_ParseSpecs_0_51;
          *STATE_VARIABLE_UndefSpecs_54 = STATE_VARIABLE_UndefSpecs_0_53;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LineChars0_28 = ((MR_Word) ((MR_hl_field(1, LineResult_27, (MR_Integer) 0))));
          MR_Integer LineNumber2_46;
          MR_Word STATE_VARIABLE_Variables_58_58;
          MR_Word STATE_VARIABLE_ParseSpecs_59_59;
          MR_Word STATE_VARIABLE_UndefSpecs_60_60;
          MR_Word STATE_VARIABLE_IOSpecs_67_67;
          MR_Integer next_value_of_LineNumber0_20;
          MR_Word next_value_of_STATE_VARIABLE_Variables_0_47;
          MR_Word next_value_of_STATE_VARIABLE_IOSpecs_0_49;
          MR_Word next_value_of_STATE_VARIABLE_ParseSpecs_0_51;
          MR_Word next_value_of_STATE_VARIABLE_UndefSpecs_0_53;

          if ((LineChars0_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_Variables_58_58 = STATE_VARIABLE_Variables_0_47;
            STATE_VARIABLE_IOSpecs_67_67 = STATE_VARIABLE_IOSpecs_0_49;
            STATE_VARIABLE_ParseSpecs_59_59 = STATE_VARIABLE_ParseSpecs_0_51;
            STATE_VARIABLE_UndefSpecs_60_60 = STATE_VARIABLE_UndefSpecs_0_53;
          }
          else
          {
            MR_Word MaybeOptionsFileLine_31;

            make__options_file__parse_options_line_4_p_0(FileName_19, LineNumber0_20, LineChars0_28, &MaybeOptionsFileLine_31);
            if (((MR_tag((MR_Word) MaybeOptionsFileLine_31)) == (MR_Integer) 1))
            {
              MR_Word ParseSpec_45 = ((MR_Word) ((MR_hl_field(1, MaybeOptionsFileLine_31, (MR_Integer) 0))));

              {
                STATE_VARIABLE_ParseSpecs_59_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ParseSpecs_59_59, 0) = ((MR_Box) (ParseSpec_45));
                MR_hl_field(1, STATE_VARIABLE_ParseSpecs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_51));
              }
              STATE_VARIABLE_Variables_58_58 = STATE_VARIABLE_Variables_0_47;
              STATE_VARIABLE_IOSpecs_67_67 = STATE_VARIABLE_IOSpecs_0_49;
              STATE_VARIABLE_UndefSpecs_60_60 = STATE_VARIABLE_UndefSpecs_0_53;
            }
            else
            {
              MR_Word OptionsFileLine_32 = ((MR_Word) ((MR_hl_field(0, MaybeOptionsFileLine_31, (MR_Integer) 0))));

              if (((MR_tag((MR_Word) OptionsFileLine_32)) == (MR_Integer) 1))
              {
                MR_Word IsOptionsFileOptional_36 = ((MR_Unsigned) ((MR_hl_field(1, OptionsFileLine_32, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word IncludedFilesChars0_37 = ((MR_Word) ((MR_hl_field(1, OptionsFileLine_32, (MR_Integer) 1))));
                MR_Word IncludedFilesChars_38;
                MR_Word STATE_VARIABLE_ParseSpecs_62_62;
                MR_Word STATE_VARIABLE_UndefSpecs_63_63;
                MR_Word RevWords_112;
                MR_Word MaybeError_113;
                MR_Word Words_114;

                make__options_file__expand_any_var_references_11_p_0(STATE_VARIABLE_Variables_0_47, FileName_19, LineNumber0_20, IncludedFilesChars0_37, &IncludedFilesChars_38, STATE_VARIABLE_ParseSpecs_0_51, &STATE_VARIABLE_ParseSpecs_62_62, STATE_VARIABLE_UndefSpecs_0_53, &STATE_VARIABLE_UndefSpecs_63_63);
                make__options_file__split_into_words_loop_4_p_0(IncludedFilesChars_38, (MR_Word) ((MR_Unsigned) 0U), &RevWords_112, &MaybeError_113);
                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_112, &Words_114);
                if ((MaybeError_113 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_41;
                  MR_Word PreStack1_42;
                  MR_Word Var_65;
                  MR_Box conv8_STATE_VARIABLE_Variables_58_58;
                  MR_Box conv7_STATE_VARIABLE_IOSpecs_67_67;
                  MR_Box conv6_STATE_VARIABLE_ParseSpecs_59_59;
                  MR_Box conv5_STATE_VARIABLE_UndefSpecs_60_60;
                  MR_Box conv4_STATE_VARIABLE_IO_61_61;

                  {
                    Context_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Context_41, 0) = ((MR_Box) (FileName_19));
                    MR_hl_field(0, Context_41, 1) = ((MR_Box) (LineNumber0_20));
                  }
                  {
                    PreStack1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, PreStack1_42, 0) = ((MR_Box) (Context_41));
                    MR_hl_field(1, PreStack1_42, 1) = ((MR_Box) (InclStack0_17));
                  }
                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
                    MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__options_file__read_options_lines_15_p_0_1));
                    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(0, Var_65, 3) = ((MR_Box) (SearchInfo_16));
                    MR_hl_field(0, Var_65, 4) = ((MR_Box) (PreStack1_42));
                    MR_hl_field(0, Var_65, 5) = ((MR_Box) (IsOptionsFileOptional_36));
                  }
                  mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Words_114, ((MR_Box) (STATE_VARIABLE_Variables_0_47)), &conv8_STATE_VARIABLE_Variables_58_58, ((MR_Box) (STATE_VARIABLE_IOSpecs_0_49)), &conv7_STATE_VARIABLE_IOSpecs_67_67, ((MR_Box) (STATE_VARIABLE_ParseSpecs_62_62)), &conv6_STATE_VARIABLE_ParseSpecs_59_59, ((MR_Box) (STATE_VARIABLE_UndefSpecs_63_63)), &conv5_STATE_VARIABLE_UndefSpecs_60_60, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_61_61);
                  STATE_VARIABLE_Variables_58_58 = ((MR_Word) (conv8_STATE_VARIABLE_Variables_58_58));
                  STATE_VARIABLE_IOSpecs_67_67 = ((MR_Word) (conv7_STATE_VARIABLE_IOSpecs_67_67));
                  STATE_VARIABLE_ParseSpecs_59_59 = ((MR_Word) (conv6_STATE_VARIABLE_ParseSpecs_59_59));
                  STATE_VARIABLE_UndefSpecs_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_UndefSpecs_60_60));
                }
                else
                {
                  MR_String IncludeFileNamesError_43 = ((MR_String) ((MR_hl_field(1, MaybeError_113, (MR_Integer) 0))));
                  MR_Word Spec_44;
                  MR_Word Context_118;
                  MR_Word Pieces_119;
                  MR_Word Var_122;
                  MR_Word Var_123;

                  Context_118 = mercury__term_context__context_init_2_f_0(FileName_19, LineNumber0_20);
                  {
                    Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_123, 1) = ((MR_Box) (IncludeFileNamesError_43));
                  }
                  {
                    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
                    MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
                  }
                  {
                    Pieces_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_119, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[28])));
                    MR_hl_field(1, Pieces_119, 1) = ((MR_Box) (Var_122));
                  }
                  {
                    Spec_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_44, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_split_error\'/3"));
                    MR_hl_field(0, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(0, Spec_44, 3) = ((MR_Box) (Context_118));
                    MR_hl_field(0, Spec_44, 4) = ((MR_Box) (Pieces_119));
                  }
                  {
                    STATE_VARIABLE_ParseSpecs_59_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ParseSpecs_59_59, 0) = ((MR_Box) (Spec_44));
                    MR_hl_field(1, STATE_VARIABLE_ParseSpecs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_62_62));
                  }
                  STATE_VARIABLE_Variables_58_58 = STATE_VARIABLE_Variables_0_47;
                  STATE_VARIABLE_IOSpecs_67_67 = STATE_VARIABLE_IOSpecs_0_49;
                  STATE_VARIABLE_UndefSpecs_60_60 = STATE_VARIABLE_UndefSpecs_63_63;
                }
              }
              else
              {
                MR_Word SetOrAdd_33 = ((MR_Unsigned) ((MR_hl_field(0, OptionsFileLine_32, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String VarName_34 = ((MR_String) ((MR_hl_field(0, OptionsFileLine_32, (MR_Integer) 1))));
                MR_Word Value_35 = ((MR_Word) ((MR_hl_field(0, OptionsFileLine_32, (MR_Integer) 2))));

                make__options_file__update_variable_13_p_0(FileName_19, LineNumber1_26, SetOrAdd_33, VarName_34, Value_35, STATE_VARIABLE_Variables_0_47, &STATE_VARIABLE_Variables_58_58, STATE_VARIABLE_ParseSpecs_0_51, &STATE_VARIABLE_ParseSpecs_59_59, STATE_VARIABLE_UndefSpecs_0_53, &STATE_VARIABLE_UndefSpecs_60_60);
                STATE_VARIABLE_IOSpecs_67_67 = STATE_VARIABLE_IOSpecs_0_49;
              }
            }
          }
          LineNumber2_46 = (MR_Integer) ((MR_Unsigned) LineNumber1_26 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_LineNumber0_20 = LineNumber2_46;
          next_value_of_STATE_VARIABLE_Variables_0_47 = STATE_VARIABLE_Variables_58_58;
          next_value_of_STATE_VARIABLE_IOSpecs_0_49 = STATE_VARIABLE_IOSpecs_67_67;
          next_value_of_STATE_VARIABLE_ParseSpecs_0_51 = STATE_VARIABLE_ParseSpecs_59_59;
          next_value_of_STATE_VARIABLE_UndefSpecs_0_53 = STATE_VARIABLE_UndefSpecs_60_60;
          LineNumber0_20 = next_value_of_LineNumber0_20;
          STATE_VARIABLE_Variables_0_47 = next_value_of_STATE_VARIABLE_Variables_0_47;
          STATE_VARIABLE_IOSpecs_0_49 = next_value_of_STATE_VARIABLE_IOSpecs_0_49;
          STATE_VARIABLE_ParseSpecs_0_51 = next_value_of_STATE_VARIABLE_ParseSpecs_0_51;
          STATE_VARIABLE_UndefSpecs_0_53 = next_value_of_STATE_VARIABLE_UndefSpecs_0_53;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Spec_80 = ((MR_Word) ((MR_hl_field(2, LineResult_27, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_IOSpecs_50 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_80));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_IOSpecs_0_49));
          }
          *STATE_VARIABLE_Variables_48 = STATE_VARIABLE_Variables_0_47;
          *STATE_VARIABLE_ParseSpecs_52 = STATE_VARIABLE_ParseSpecs_0_51;
          *STATE_VARIABLE_UndefSpecs_54 = STATE_VARIABLE_UndefSpecs_0_53;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__options_file__update_variable_13_p_0(
  MR_String FileName_14,
  MR_Integer LineNumber_15,
  MR_Word SetOrAdd_16,
  MR_String VarName_17,
  MR_Word NewValue0_18,
  MR_Word STATE_VARIABLE_Variables_0_43,
  MR_Word * STATE_VARIABLE_Variables_44,
  MR_Word STATE_VARIABLE_ParseSpecs_0_45,
  MR_Word * STATE_VARIABLE_ParseSpecs_46,
  MR_Word STATE_VARIABLE_UndefSpecs_0_47,
  MR_Word * STATE_VARIABLE_UndefSpecs_48)
{
  MR_bool succeeded;
  MR_Word NewValue1_23;
  MR_Word STATE_VARIABLE_ParseSpecs_51_51;
  MR_Word RevWords_95;
  MR_Word MaybeError_96;
  MR_Word Words_97;

  make__options_file__expand_any_var_references_11_p_0(STATE_VARIABLE_Variables_0_43, FileName_14, LineNumber_15, NewValue0_18, &NewValue1_23, STATE_VARIABLE_ParseSpecs_0_45, &STATE_VARIABLE_ParseSpecs_51_51, STATE_VARIABLE_UndefSpecs_0_47, STATE_VARIABLE_UndefSpecs_48);
  make__options_file__split_into_words_loop_4_p_0(NewValue1_23, (MR_Word) ((MR_Unsigned) 0U), &RevWords_95, &MaybeError_96);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_95, &Words_97);
  if ((MaybeError_96 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptsMap0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Variables_0_43, (MR_Integer) 0))));
    MR_Word EnvMap_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Variables_0_43, (MR_Integer) 1))));
    MR_String EnvValue_28;
    MR_Box conv0_EnvValue_28;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvMap_27, ((MR_Box) (VarName_17)), &conv0_EnvValue_28);
    if (succeeded)
    {
      EnvValue_28 = ((MR_String) (conv0_EnvValue_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Value_29;
      MR_Word RevWords_111;
      MR_Word MaybeError_112;
      MR_Word Words_113;

      Value_29 = mercury__string__to_char_list_1_f_0(EnvValue_28);
      make__options_file__split_into_words_loop_4_p_0(Value_29, (MR_Word) ((MR_Unsigned) 0U), &RevWords_111, &MaybeError_112);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_111, &Words_113);
      if ((MaybeError_112 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word EnvValueChars_32;
        MR_Word Entry_33;
        MR_Word OptsMap_34;

        EnvValueChars_32 = mercury__string__to_char_list_1_f_0(EnvValue_28);
        {
          Entry_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_33, 0) = ((MR_Box) (EnvValueChars_32));
          MR_hl_field(0, Entry_33, 1) = ((MR_Box) (Words_113));
          MR_hl_field(0, Entry_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
        }
        mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_33)), OptsMap0_26, &OptsMap_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Variables_44 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OptsMap_34));
          MR_hl_field(0, base, 1) = ((MR_Box) (EnvMap_27));
        }
        *STATE_VARIABLE_ParseSpecs_46 = STATE_VARIABLE_ParseSpecs_51_51;
      }
      else
      {
        MR_String WordsError_35 = ((MR_String) ((MR_hl_field(1, MaybeError_112, (MR_Integer) 0))));
        MR_Word Spec_36;
        MR_Word Context_117;
        MR_Word Pieces_118;
        MR_Word Var_121;
        MR_Word Var_122;

        Context_117 = mercury__term_context__context_init_2_f_0(FileName_14, LineNumber_15);
        {
          Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_122, 1) = ((MR_Box) (WordsError_35));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
        }
        {
          Pieces_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_118, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[28])));
          MR_hl_field(1, Pieces_118, 1) = ((MR_Box) (Var_121));
        }
        {
          Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_split_error\'/3"));
          MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Context_117));
          MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_118));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParseSpecs_46 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_51_51));
        }
        *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
      }
    }
    else
    {
      MR_Word OldEntry_37;
      MR_Box conv1_OldEntry_37;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), OptsMap0_26, ((MR_Box) (VarName_17)), &conv1_OldEntry_37);
      if (succeeded)
      {
        OldEntry_37 = ((MR_Word) (conv1_OldEntry_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldValue_38 = ((MR_Word) ((MR_hl_field(0, OldEntry_37, (MR_Integer) 0))));
        MR_Word OldWords_39 = ((MR_Word) ((MR_hl_field(0, OldEntry_37, (MR_Integer) 1))));
        MR_Word Source_40 = ((MR_Unsigned) ((MR_hl_field(0, OldEntry_37, (MR_Integer) 2))) & (MR_Integer) 3);

        switch (Source_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
            break;
          case (MR_Integer) 0:
            {
              MR_Word NewValue_41;
              MR_Word Words_65;
              MR_Word Entry_66;
              MR_Word OptsMap_67;

              switch (SetOrAdd_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_58;

                    {
                      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                      MR_hl_field(1, Var_58, 1) = ((MR_Box) (NewValue1_23));
                    }
                    NewValue_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), OldValue_38, Var_58);
                    Words_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OldWords_39, Words_97);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    NewValue_41 = NewValue1_23;
                    Words_65 = Words_97;
                  }
                  break;
              }
              {
                Entry_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Entry_66, 0) = ((MR_Box) (NewValue_41));
                MR_hl_field(0, Entry_66, 1) = ((MR_Box) (Words_65));
                MR_hl_field(0, Entry_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_66)), OptsMap0_26, &OptsMap_67);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Variables_44 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (OptsMap_67));
                MR_hl_field(0, base, 1) = ((MR_Box) (EnvMap_27));
              }
            }
            break;
        }
      }
      else
      {
        MR_Word Entry_74;
        MR_Word OptsMap_75;

        {
          Entry_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_74, 0) = ((MR_Box) (NewValue1_23));
          MR_hl_field(0, Entry_74, 1) = ((MR_Box) (Words_97));
          MR_hl_field(0, Entry_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_74)), OptsMap0_26, &OptsMap_75);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Variables_44 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OptsMap_75));
          MR_hl_field(0, base, 1) = ((MR_Box) (EnvMap_27));
        }
      }
      *STATE_VARIABLE_ParseSpecs_46 = STATE_VARIABLE_ParseSpecs_51_51;
    }
  }
  else
  {
    MR_String WordsError1_42 = ((MR_String) ((MR_hl_field(1, MaybeError_96, (MR_Integer) 0))));
    MR_Word Spec_82;
    MR_Word Context_101;
    MR_Word Pieces_102;
    MR_Word Var_105;
    MR_Word Var_106;

    Context_101 = mercury__term_context__context_init_2_f_0(FileName_14, LineNumber_15);
    {
      Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_106, 1) = ((MR_Box) (WordsError1_42));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
    }
    {
      Pieces_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_102, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[28])));
      MR_hl_field(1, Pieces_102, 1) = ((MR_Box) (Var_105));
    }
    {
      Spec_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_82, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_split_error\'/3"));
      MR_hl_field(0, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(0, Spec_82, 3) = ((MR_Box) (Context_101));
      MR_hl_field(0, Spec_82, 4) = ((MR_Box) (Pieces_102));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ParseSpecs_46 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_82));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_51_51));
    }
    *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
  }
}

static void MR_CALL 
make__options_file__expand_any_var_references_11_p_0(
  MR_Word Variables_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Chars0_15,
  MR_Word * Chars_16,
  MR_Word STATE_VARIABLE_ParseSpecs_0_22,
  MR_Word * STATE_VARIABLE_ParseSpecs_23,
  MR_Word STATE_VARIABLE_UndefSpecs_0_24,
  MR_Word * STATE_VARIABLE_UndefSpecs_25)
{
  MR_Word RevChars_20;
  MR_Word UndefVarNames_21;
  MR_Word Var_30;
  MR_Word UndefVarNames_33;

  Var_30 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  make__options_file__expand_any_var_references_loop_12_p_0(Variables_12, FileName_13, LineNumber_14, Chars0_15, (MR_Word) ((MR_Unsigned) 0U), &RevChars_20, STATE_VARIABLE_ParseSpecs_0_22, STATE_VARIABLE_ParseSpecs_23, Var_30, &UndefVarNames_21);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_20, Chars_16);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UndefVarNames_21, &UndefVarNames_33);
  if ((UndefVarNames_33 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UndefSpecs_25 = STATE_VARIABLE_UndefSpecs_0_24;
  else
  {
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, UndefVarNames_33, (MR_Integer) 1))));

    if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UndefVarNamesPieces_40;
      MR_Word Context_41;
      MR_Word Pieces_42;
      MR_Word Spec_43;
      MR_Word Var_47;
      MR_Word Var_50;

      UndefVarNamesPieces_40 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "and", UndefVarNames_33);
      Context_41 = mercury__term_context__context_init_2_f_0(FileName_13, LineNumber_14);
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[40])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (UndefVarNamesPieces_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[39])));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[97])));
      {
        Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.report_any_undefined_variables\'/5"));
        MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Context_41));
        MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UndefSpecs_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UndefSpecs_0_24));
      }
    }
    else
    {
      MR_Word UndefVarNamesPieces_62;
      MR_Word Context_63;
      MR_Word Pieces_64;
      MR_Word Spec_65;
      MR_Word Var_67;
      MR_Word Var_70;

      UndefVarNamesPieces_62 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "and", UndefVarNames_33);
      Context_63 = mercury__term_context__context_init_2_f_0(FileName_13, LineNumber_14);
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[44])));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (UndefVarNamesPieces_62));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[39])));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
      }
      Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[98])));
      {
        Spec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.report_any_undefined_variables\'/5"));
        MR_hl_field(0, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(0, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, Spec_65, 3) = ((MR_Box) (Context_63));
        MR_hl_field(0, Spec_65, 4) = ((MR_Box) (Pieces_64));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UndefSpecs_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_65));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UndefSpecs_0_24));
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file__expand_any_var_references_loop_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
make__options_file__expand_any_var_references_loop_12_p_0(
  MR_Word Variables_1,
  MR_String FileName_2,
  MR_Integer LineNumber_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevChars_0_5,
  MR_Word * STATE_VARIABLE_RevChars_6,
  MR_Word STATE_VARIABLE_ParseSpecs_0_7,
  MR_Word * STATE_VARIABLE_ParseSpecs_8,
  MR_Word STATE_VARIABLE_UndefVarNames_0_9,
  MR_Word * STATE_VARIABLE_UndefVarNames_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UndefVarNames_10 = STATE_VARIABLE_UndefVarNames_0_9;
      *STATE_VARIABLE_ParseSpecs_8 = STATE_VARIABLE_ParseSpecs_0_7;
      *STATE_VARIABLE_RevChars_6 = STATE_VARIABLE_RevChars_0_5;
    }
    else
    {
      MR_Char Char_31 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Chars_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      succeeded = (Char_31 == (MR_Char) 36);
      if (succeeded)
        if ((Chars_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_37;
          MR_Word Context_85;
          MR_Word Pieces_86;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_String Var_91;

          Context_85 = mercury__term_context__context_init_2_f_0(FileName_2, LineNumber_3);
          Var_91 = mercury__string__from_rev_char_list_1_f_0(STATE_VARIABLE_RevChars_0_5);
          {
            Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
          }
          {
            Pieces_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_86, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[38])));
            MR_hl_field(1, Pieces_86, 1) = ((MR_Box) (Var_89));
          }
          {
            Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_unterminated_variable_reference\'/3"));
            MR_hl_field(0, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_37, 3) = ((MR_Box) (Context_85));
            MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_86));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_37));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
          }
          *STATE_VARIABLE_RevChars_6 = STATE_VARIABLE_RevChars_0_5;
          *STATE_VARIABLE_UndefVarNames_10 = STATE_VARIABLE_UndefVarNames_0_9;
        }
        else
        {
          MR_Char Char2_38 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_32, (MR_Integer) 0)));
          MR_Word Chars1_39 = ((MR_Word) ((MR_hl_field(1, Chars_32, (MR_Integer) 1))));

          succeeded = (Char2_38 == (MR_Char) 36);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_RevChars_62_62;
            MR_Word next_value_of_HeadVar__4_4;
            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_5;

            {
              STATE_VARIABLE_RevChars_62_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevChars_62_62, 0) = ((MR_Box) (MR_Word) (Char2_38));
              MR_hl_field(1, STATE_VARIABLE_RevChars_62_62, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_5));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Chars1_39;
            next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_62_62;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_RevChars_0_5 = next_value_of_STATE_VARIABLE_RevChars_0_5;
            continue;
          }
          else
          {
            MR_Word Chars4_46;
            MR_Word STATE_VARIABLE_UndefVarNames_68_68;
            MR_Word STATE_VARIABLE_RevChars_69_69;
            MR_Word STATE_VARIABLE_ParseSpecs_71_71;
            MR_Char EndChar_40;
            MR_Word next_value_of_HeadVar__4_4;
            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_5;
            MR_Word next_value_of_STATE_VARIABLE_ParseSpecs_0_7;
            MR_Word next_value_of_STATE_VARIABLE_UndefVarNames_0_9;

            switch (Char2_38) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Char) 40:
                {
                  EndChar_40 = (MR_Char) 41;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 123:
                {
                  EndChar_40 = (MR_Char) 125;
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              MR_Word Chars2_41;
              MR_Word RevVarNameChars_96;
              MR_String VarName_97;

              make__options_file__do_parse_variable_name_5_p_0(Chars1_39, &Chars2_41, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevVarNameChars_96);
              mercury__string__from_rev_char_list_2_p_0(RevVarNameChars_96, &VarName_97);
              succeeded = (strcmp(VarName_97, (MR_String) "") == 0);
              if (succeeded)
              {
                MR_Word ParseSpec_52;
                MR_Word FirstWordChars_98;
                MR_Word Pieces_99;
                MR_Word Context_100;
                MR_Word Var_106;
                MR_Word Var_107;
                MR_String Var_108;
                MR_Word Chars3_45;
                MR_Char Var_83;

                mercury__list__take_while_not_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[10]), Chars2_41, &FirstWordChars_98);
                Var_108 = mercury__string__from_char_list_1_f_0(FirstWordChars_98);
                {
                  Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
                }
                {
                  Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
                }
                {
                  Pieces_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_99, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[37])));
                  MR_hl_field(1, Pieces_99, 1) = ((MR_Box) (Var_106));
                }
                {
                  Context_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Context_100, 0) = ((MR_Box) (FileName_2));
                  MR_hl_field(0, Context_100, 1) = ((MR_Box) (LineNumber_3));
                }
                {
                  ParseSpec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ParseSpec_52, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_variable_name\'/5"));
                  MR_hl_field(0, ParseSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, ParseSpec_52, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(0, ParseSpec_52, 3) = ((MR_Box) (Context_100));
                  MR_hl_field(0, ParseSpec_52, 4) = ((MR_Box) (Pieces_99));
                }
                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_83 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars2_41, (MR_Integer) 0)));
                  Chars3_45 = ((MR_Word) ((MR_hl_field(1, Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_83);
                }
                if (succeeded)
                  Chars4_46 = Chars3_45;
                else
                  Chars4_46 = Chars2_41;
                {
                  STATE_VARIABLE_ParseSpecs_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ParseSpecs_71_71, 0) = ((MR_Box) (ParseSpec_52));
                  MR_hl_field(1, STATE_VARIABLE_ParseSpecs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
                }
                STATE_VARIABLE_RevChars_69_69 = STATE_VARIABLE_RevChars_0_5;
                STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
              }
              else
              {
                MR_Word MaybeVarName0_114;
                MR_Word Chars3_81;
                MR_Char Var_84;

                {
                  MaybeVarName0_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeVarName0_114, 0) = ((MR_Box) (VarName_97));
                }
                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_84 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars2_41, (MR_Integer) 0)));
                  Chars3_81 = ((MR_Word) ((MR_hl_field(1, Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_84);
                }
                if (succeeded)
                {
                  MR_String VarName_50;
                  MR_Word VarValueChars_51;
                  MR_Word Var_70;

                  Chars4_46 = Chars3_81;
                  VarName_50 = ((MR_String) ((MR_hl_field(0, MaybeVarName0_114, (MR_Integer) 0))));
                  make__options_file__lookup_variable_value_5_p_0(Variables_1, VarName_50, &VarValueChars_51, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
                  Var_70 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_51);
                  STATE_VARIABLE_RevChars_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_70, STATE_VARIABLE_RevChars_0_5);
                  STATE_VARIABLE_ParseSpecs_71_71 = STATE_VARIABLE_ParseSpecs_0_7;
                }
                else
                {
                  MR_Word ParseSpec_121;

                  Chars4_46 = Chars2_41;
                  ParseSpec_121 = make__options_file__report_unterminated_variable_reference_3_f_0(FileName_2, LineNumber_3, STATE_VARIABLE_RevChars_0_5);
                  {
                    STATE_VARIABLE_ParseSpecs_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ParseSpecs_71_71, 0) = ((MR_Box) (ParseSpec_121));
                    MR_hl_field(1, STATE_VARIABLE_ParseSpecs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
                  }
                  STATE_VARIABLE_RevChars_69_69 = STATE_VARIABLE_RevChars_0_5;
                  STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
                }
              }
            }
            else
            {
              MR_String VarName_117;
              MR_Word VarValueChars_118;
              MR_Word Var_119;

              Chars4_46 = Chars1_39;
              VarName_117 = mercury__string__char_to_string_1_f_0(Char2_38);
              make__options_file__lookup_variable_value_5_p_0(Variables_1, VarName_117, &VarValueChars_118, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
              Var_119 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_118);
              STATE_VARIABLE_RevChars_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_119, STATE_VARIABLE_RevChars_0_5);
              STATE_VARIABLE_ParseSpecs_71_71 = STATE_VARIABLE_ParseSpecs_0_7;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Chars4_46;
            next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_69_69;
            next_value_of_STATE_VARIABLE_ParseSpecs_0_7 = STATE_VARIABLE_ParseSpecs_71_71;
            next_value_of_STATE_VARIABLE_UndefVarNames_0_9 = STATE_VARIABLE_UndefVarNames_68_68;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_RevChars_0_5 = next_value_of_STATE_VARIABLE_RevChars_0_5;
            STATE_VARIABLE_ParseSpecs_0_7 = next_value_of_STATE_VARIABLE_ParseSpecs_0_7;
            STATE_VARIABLE_UndefVarNames_0_9 = next_value_of_STATE_VARIABLE_UndefVarNames_0_9;
            continue;
          }
        }
      else
      {
        MR_Word STATE_VARIABLE_RevChars_76_76;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevChars_0_5;

        {
          STATE_VARIABLE_RevChars_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevChars_76_76, 0) = ((MR_Box) (MR_Word) (Char_31));
          MR_hl_field(1, STATE_VARIABLE_RevChars_76_76, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Chars_32;
        next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_76_76;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RevChars_0_5 = next_value_of_STATE_VARIABLE_RevChars_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__lookup_variable_value_5_p_0(
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * ValueChars_8,
  MR_Word STATE_VARIABLE_UndefVarNames_0_16,
  MR_Word * STATE_VARIABLE_UndefVarNames_17)
{
  MR_bool succeeded;
  MR_Word OptsMap_10 = ((MR_Word) ((MR_hl_field(0, Variables_6, (MR_Integer) 0))));
  MR_Word EnvMap_11 = ((MR_Word) ((MR_hl_field(0, Variables_6, (MR_Integer) 1))));
  MR_String EnvValue_12;
  MR_Box conv0_EnvValue_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvMap_11, ((MR_Box) (VarName_7)), &conv0_EnvValue_12);
  if (succeeded)
  {
    EnvValue_12 = ((MR_String) (conv0_EnvValue_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *ValueChars_8 = mercury__string__to_char_list_1_f_0(EnvValue_12);
    *STATE_VARIABLE_UndefVarNames_17 = STATE_VARIABLE_UndefVarNames_0_16;
  }
  else
  {
    MR_Word Entry_13;
    MR_Box conv1_Entry_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), OptsMap_10, ((MR_Box) (VarName_7)), &conv1_Entry_13);
    if (succeeded)
    {
      Entry_13 = ((MR_Word) (conv1_Entry_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *ValueChars_8 = ((MR_Word) ((MR_hl_field(0, Entry_13, (MR_Integer) 0))));
      *STATE_VARIABLE_UndefVarNames_17 = STATE_VARIABLE_UndefVarNames_0_16;
    }
    else
    {
      *ValueChars_8 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_7)), STATE_VARIABLE_UndefVarNames_0_16, STATE_VARIABLE_UndefVarNames_17);
    }
  }
}

static MR_Word MR_CALL 
make__options_file__report_unterminated_variable_reference_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word RevChars_7)
{
  MR_Word Spec_8;
  MR_Word Context_9;
  MR_Word Pieces_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_String Var_15;

  Context_9 = mercury__term_context__context_init_2_f_0(FileName_5, LineNumber_6);
  Var_15 = mercury__string__from_rev_char_list_1_f_0(RevChars_7);
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
  }
  {
    Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[38])));
    MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_13));
  }
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_unterminated_variable_reference\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

static MR_bool MR_CALL 
make__options_file__split_into_words_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
make__options_file__split_into_words_loop_4_p_0(
  MR_Word Chars0_5,
  MR_Word STATE_VARIABLE_RevWords_0_15,
  MR_Word * STATE_VARIABLE_RevWords_16,
  MR_Word * MaybeError_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Chars1_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[9]), Chars0_5, &Chars1_8);
    if ((Chars1_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeError_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevWords_16 = STATE_VARIABLE_RevWords_0_15;
    }
    else
    {
      MR_Word Chars_11;
      MR_String Word_12;
      MR_Word MaybeError0_13;
      MR_Word RevWord_21;

      make__options_file__get_word_acc_5_p_0(Chars1_8, &Chars_11, (MR_Word) ((MR_Unsigned) 0U), &RevWord_21, &MaybeError0_13);
      Word_12 = mercury__string__from_rev_char_list_1_f_0(RevWord_21);
      if ((MaybeError0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevWords_18_18;
        MR_Word next_value_of_Chars0_5;
        MR_Word next_value_of_STATE_VARIABLE_RevWords_0_15;

        {
          STATE_VARIABLE_RevWords_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevWords_18_18, 0) = ((MR_Box) (Word_12));
          MR_hl_field(1, STATE_VARIABLE_RevWords_18_18, 1) = ((MR_Box) (STATE_VARIABLE_RevWords_0_15));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Chars0_5 = Chars_11;
        next_value_of_STATE_VARIABLE_RevWords_0_15 = STATE_VARIABLE_RevWords_18_18;
        Chars0_5 = next_value_of_Chars0_5;
        STATE_VARIABLE_RevWords_0_15 = next_value_of_STATE_VARIABLE_RevWords_0_15;
        continue;
      }
      else
      {
        *MaybeError_7 = MaybeError0_13;
        *STATE_VARIABLE_RevWords_16 = STATE_VARIABLE_RevWords_0_15;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__get_word_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * RevWord_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *RevWord_4 = HeadVar__3_3;
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__char__is_whitespace_1_p_0(Char_7);
      if (succeeded)
      {
        *HeadVar__2_2 = Chars0_8;
        *RevWord_4 = HeadVar__3_3;
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        succeeded = (Char_7 == (MR_Char) 34);
        if (succeeded)
        {
          MR_Word Chars1_13;
          MR_Word RevStringChars_14;
          MR_Word MaybeError0_15;

          make__options_file__get_string_acc_5_p_0(Chars0_8, &Chars1_13, (MR_Word) ((MR_Unsigned) 0U), &RevStringChars_14, &MaybeError0_15);
          if ((MaybeError0_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_20;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__3_3;

            Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevStringChars_14, HeadVar__3_3);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Chars1_13;
            next_value_of_HeadVar__3_3 = Var_20;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          else
          {
            *HeadVar__2_2 = Chars0_8;
            *RevWord_4 = HeadVar__3_3;
            *HeadVar__5_5 = MaybeError0_15;
          }
        }
        else
        {
          succeeded = (Char_7 == (MR_Char) 92);
          if (succeeded)
            if ((Chars0_8 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *RevWord_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_7));
                MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__3_3));
              }
              *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Char Char2_17 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars0_8, (MR_Integer) 0)));
              MR_Word RevWord1_18;
              MR_Word Chars1_23 = ((MR_Word) ((MR_hl_field(1, Chars0_8, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__3_3;

              switch (Char2_17) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Char) 34:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Char) 92:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
                {
                  RevWord1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWord1_18, 0) = ((MR_Box) (MR_Word) (Char2_17));
                  MR_hl_field(1, RevWord1_18, 1) = ((MR_Box) (HeadVar__3_3));
                }
              else
              {
                MR_Word Var_21;

                {
                  Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_Word) (Char_7));
                  MR_hl_field(1, Var_21, 1) = ((MR_Box) (HeadVar__3_3));
                }
                {
                  RevWord1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWord1_18, 0) = ((MR_Box) (MR_Word) (Char2_17));
                  MR_hl_field(1, RevWord1_18, 1) = ((MR_Box) (Var_21));
                }
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Chars1_23;
              next_value_of_HeadVar__3_3 = RevWord1_18;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
          else
          {
            MR_Word Var_22;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__3_3;

            {
              Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_Word) (Char_7));
              MR_hl_field(1, Var_22, 1) = ((MR_Box) (HeadVar__3_3));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Chars0_8;
            next_value_of_HeadVar__3_3 = Var_22;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__get_string_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RevString0_3,
  MR_Word * HeadVar__4_4,
  MR_Word * MaybeError_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = RevString0_3;
      *MaybeError_5 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_3[1]));
    }
    else
    {
      MR_Char Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (Char_9 == (MR_Char) 34);
      if (succeeded)
      {
        *HeadVar__2_2 = Chars0_10;
        *HeadVar__4_4 = RevString0_3;
        *MaybeError_5 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        succeeded = (Char_9 == (MR_Char) 92);
        if (succeeded)
          if ((Chars0_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *HeadVar__2_2 = Chars0_10;
            *HeadVar__4_4 = RevString0_3;
            *MaybeError_5 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_3[1]));
          }
          else
          {
            MR_Char Char2_15 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars0_10, (MR_Integer) 0)));
            MR_Word Chars1_16 = ((MR_Word) ((MR_hl_field(1, Chars0_10, (MR_Integer) 1))));
            MR_Word RevString1_17;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_RevString0_3;

            succeeded = (Char2_15 == (MR_Char) 34);
            if (succeeded)
              {
                RevString1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RevString1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(1, RevString1_17, 1) = ((MR_Box) (RevString0_3));
              }
            else
            {
              MR_Word Var_18;

              {
                Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) (Char_9));
                MR_hl_field(1, Var_18, 1) = ((MR_Box) (RevString0_3));
              }
              {
                RevString1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RevString1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(1, RevString1_17, 1) = ((MR_Box) (Var_18));
              }
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Chars1_16;
            next_value_of_RevString0_3 = RevString1_17;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            RevString0_3 = next_value_of_RevString0_3;
            continue;
          }
        else
        {
          MR_Word Var_20;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_RevString0_3;

          {
            Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_Word) (Char_9));
            MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevString0_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Chars0_10;
          next_value_of_RevString0_3 = Var_20;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          RevString0_3 = next_value_of_RevString0_3;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
make__options_file__parse_options_line_4_p_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word Line0_7,
  MR_Word * MaybeOptionsFileLine_8)
{
  MR_bool succeeded = (Line0_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word IsOptionsFileOptional_10;
  MR_Word AfterInclude0_12;
  MR_Word Line2_11;
  MR_Word Var_24;
  MR_Word Line1_9;
  MR_Char Var_23;

  if (succeeded)
  {
    Var_23 = ((MR_Char) (MR_Word) (MR_hl_field(1, Line0_7, (MR_Integer) 0)));
    Line1_9 = ((MR_Word) ((MR_hl_field(1, Line0_7, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Char) 45);
  }
  if (succeeded)
  {
    IsOptionsFileOptional_10 = (MR_Integer) 0;
    Line2_11 = Line1_9;
  }
  else
  {
    IsOptionsFileOptional_10 = (MR_Integer) 1;
    Line2_11 = Line0_7;
  }
  Var_24 = mercury__string__to_char_list_1_f_0((MR_String) "include");
  succeeded = mercury__list__append_3_p_3((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_24, &AfterInclude0_12, Line2_11);
  if (succeeded)
  {
    MR_Word AfterInclude_13;
    MR_Word Var_27;

    mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[5]), AfterInclude0_12, &AfterInclude_13);
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = (MR_Box) ((MR_Unsigned) (IsOptionsFileOptional_10));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (AfterInclude_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeOptionsFileLine_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    }
  }
  else
  {
    MR_Word Line1_82;
    MR_Word RevVarNameChars_93;
    MR_String VarName_94;

    make__options_file__do_parse_variable_name_5_p_0(Line0_7, &Line1_82, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevVarNameChars_93);
    mercury__string__from_rev_char_list_2_p_0(RevVarNameChars_93, &VarName_94);
    succeeded = (strcmp(VarName_94, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Spec_15;
      MR_Word FirstWordChars_95;
      MR_Word Pieces_96;
      MR_Word Context_97;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_String Var_105;

      mercury__list__take_while_not_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[6]), Line1_82, &FirstWordChars_95);
      Var_105 = mercury__string__from_char_list_1_f_0(FirstWordChars_95);
      {
        Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_104, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
      }
      {
        Pieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_96, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[37])));
        MR_hl_field(1, Pieces_96, 1) = ((MR_Box) (Var_103));
      }
      {
        Context_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Context_97, 0) = ((MR_Box) (FileName_5));
        MR_hl_field(0, Context_97, 1) = ((MR_Box) (LineNumber_6));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_variable_name\'/5"));
        MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_97));
        MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_96));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeOptionsFileLine_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      }
    }
    else
    {
      MR_Word Line2_79;
      MR_Word Line3_17;
      MR_Word SetOrAdd_18;
      MR_Word Var_91;
      MR_Char Var_92;

      mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[7]), Line1_82, &Line2_79);
      succeeded = (Line2_79 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_92 = ((MR_Char) (MR_Word) (MR_hl_field(1, Line2_79, (MR_Integer) 0)));
        Var_91 = ((MR_Word) ((MR_hl_field(1, Line2_79, (MR_Integer) 1))));
        switch (Var_92) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 43:
            {
              MR_Char Var_35;

              succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_35 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_91, (MR_Integer) 0)));
                Line3_17 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                succeeded = (Var_35 == (MR_Char) 61);
                if (succeeded)
                {
                  SetOrAdd_18 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Char) 58:
            {
              MR_Char Var_32;

              succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_32 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_91, (MR_Integer) 0)));
                Line3_17 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                succeeded = (Var_32 == (MR_Char) 61);
                if (succeeded)
                {
                  SetOrAdd_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Char) 61:
            {
              Line3_17 = Var_91;
              SetOrAdd_18 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
        }
      }
      if (succeeded)
      {
        MR_Word VarValue_19;
        MR_Word Var_37;

        mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[8]), Line3_17, &VarValue_19);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = (MR_Box) ((MR_Unsigned) (SetOrAdd_18));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (VarName_94));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) (VarValue_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOptionsFileLine_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
        }
      }
      else
      {
        MR_String Line2Str_20;
        MR_Word Context_21;
        MR_Word Pieces_22;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Spec_77;

        Line2Str_20 = mercury__string__from_char_list_1_f_0(Line2_79);
        {
          Context_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Context_21, 0) = ((MR_Box) (FileName_5));
          MR_hl_field(0, Context_21, 1) = ((MR_Box) (LineNumber_6));
        }
        Var_44 = (MR_Word) (MR_mkword(3, &make__options_file_scalar_common_1[31]));
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (VarName_94));
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (Line2Str_20));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[36])));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[35])));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[34])));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[33])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[32])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[30])));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[29])));
          MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (Var_40));
        }
        {
          Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_options_line\'/4"));
          MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Context_21));
          MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOptionsFileLine_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_77));
        }
      }
    }
  }
}

static void MR_CALL 
make__options_file__do_parse_variable_name_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirst_3,
  MR_Word STATE_VARIABLE_RevVarNameChars_0_4,
  MR_Word * STATE_VARIABLE_RevVarNameChars_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevVarNameChars_5 = STATE_VARIABLE_RevVarNameChars_0_4;
    }
    else
    {
      MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (IsFirst_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = mercury__char__is_alpha_1_p_0(Char_10);
            break;
          case (MR_Integer) 0:
            {
              switch (Char_10) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Char) 45:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Char) 46:
                  succeeded = MR_TRUE;
                  break;
              }
              if (!(succeeded))
                succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Char_10);
            }
            break;
        }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevVarNameChars_17_17;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevVarNameChars_0_4;

        {
          STATE_VARIABLE_RevVarNameChars_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarNameChars_17_17, 0) = ((MR_Box) (MR_Word) (Char_10));
          MR_hl_field(1, STATE_VARIABLE_RevVarNameChars_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevVarNameChars_0_4));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Chars0_11;
        next_value_of_STATE_VARIABLE_RevVarNameChars_0_4 = STATE_VARIABLE_RevVarNameChars_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        IsFirst_3 = (MR_Integer) 0;
        STATE_VARIABLE_RevVarNameChars_0_4 = next_value_of_STATE_VARIABLE_RevVarNameChars_0_4;
        continue;
      }
      else
      {
        *HeadVar__2_2 = HeadVar__1_1;
        *STATE_VARIABLE_RevVarNameChars_5 = STATE_VARIABLE_RevVarNameChars_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__read_options_line_loop_8_p_0(
  MR_Word InStream_9,
  MR_String FileName_10,
  MR_Integer STATE_VARIABLE_LineNumber_0_27,
  MR_Integer * STATE_VARIABLE_LineNumber_28,
  MR_Word STATE_VARIABLE_RevChars_0_29,
  MR_Word * Result_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CharResult_15;
    MR_Char Char_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_char_unboxed_5_p_0(InStream_9, &CharResult_15, &Char_16);
    switch (MR_tag((MR_Word) CharResult_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CharResult_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (Char_16 == (MR_Char) 35);
              if (succeeded)
              {
                MR_Word Chars_17;
                MR_Word SkipResult_18;

                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_0_29, &Chars_17);
                make__options_file__skip_comment_line_4_p_0(InStream_9, &SkipResult_18);
                switch (MR_tag((MR_Word) SkipResult_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_13 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Chars_17));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Error_19 = ((MR_Word) ((MR_hl_field(1, SkipResult_18, (MR_Integer) 0))));
                      MR_Word Spec_20;
                      MR_Word Context_87;
                      MR_String Msg_88;
                      MR_Word Pieces_89;
                      MR_Word Var_92;
                      MR_Word Var_93;

                      {
                        Context_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Context_87, 0) = ((MR_Box) (FileName_10));
                        MR_hl_field(0, Context_87, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
                      }
                      Msg_88 = mercury__io__error_message_1_f_0(Error_19);
                      {
                        Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, Var_93, 1) = ((MR_Box) (Msg_88));
                      }
                      {
                        Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                        MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
                      }
                      {
                        Pieces_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_89, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[27])));
                        MR_hl_field(1, Pieces_89, 1) = ((MR_Box) (Var_92));
                      }
                      {
                        Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
                        MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                        MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_87));
                        MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_89));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Result_13 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Spec_20));
                      }
                    }
                    break;
                }
                *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
              }
              else
              {
                succeeded = (Char_16 == (MR_Char) 92);
                if (succeeded)
                {
                  MR_Word CharResult2_21;
                  MR_Char Char2_22;

                  mercury__io__read_char_unboxed_5_p_0(InStream_9, &CharResult2_21, &Char2_22);
                  switch (MR_tag((MR_Word) CharResult2_21)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(CharResult2_21)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer STATE_VARIABLE_LineNumber_35_35;
                            MR_Word STATE_VARIABLE_RevChars_37_37;
                            MR_Integer next_value_of_STATE_VARIABLE_LineNumber_0_27;
                            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_29;

                            succeeded = (Char2_22 == (MR_Char) 10);
                            if (succeeded)
                            {
                              STATE_VARIABLE_LineNumber_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LineNumber_0_27 + (MR_Unsigned) 1);
                              {
                                STATE_VARIABLE_RevChars_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, STATE_VARIABLE_RevChars_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                                MR_hl_field(1, STATE_VARIABLE_RevChars_37_37, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                              }
                            }
                            else
                            {
                              MR_Word Var_40;

                              {
                                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_Word) (Char_16));
                                MR_hl_field(1, Var_40, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                              }
                              {
                                STATE_VARIABLE_RevChars_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, STATE_VARIABLE_RevChars_37_37, 0) = ((MR_Box) (MR_Word) (Char2_22));
                                MR_hl_field(1, STATE_VARIABLE_RevChars_37_37, 1) = ((MR_Box) (Var_40));
                              }
                              STATE_VARIABLE_LineNumber_35_35 = STATE_VARIABLE_LineNumber_0_27;
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_STATE_VARIABLE_LineNumber_0_27 = STATE_VARIABLE_LineNumber_35_35;
                            next_value_of_STATE_VARIABLE_RevChars_0_29 = STATE_VARIABLE_RevChars_37_37;
                            STATE_VARIABLE_LineNumber_0_27 = next_value_of_STATE_VARIABLE_LineNumber_0_27;
                            STATE_VARIABLE_RevChars_0_29 = next_value_of_STATE_VARIABLE_RevChars_0_29;
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Context_23;
                            MR_Word Spec_54;

                            {
                              Context_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Context_23, 0) = ((MR_Box) (FileName_10));
                              MR_hl_field(0, Context_23, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
                            }
                            {
                              Spec_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.read_options_line_loop\'/8"));
                              MR_hl_field(0, Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(0, Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                              MR_hl_field(0, Spec_54, 3) = ((MR_Box) (Context_23));
                              MR_hl_field(0, Spec_54, 4) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[26])));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *Result_13 = base;
                              MR_hl_field(2, base, 0) = ((MR_Box) (Spec_54));
                            }
                            *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Error_55 = ((MR_Word) ((MR_hl_field(1, CharResult2_21, (MR_Integer) 0))));
                        MR_Word Spec_56;
                        MR_Word Context_98;
                        MR_String Msg_99;
                        MR_Word Pieces_100;
                        MR_Word Var_103;
                        MR_Word Var_104;

                        {
                          Context_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Context_98, 0) = ((MR_Box) (FileName_10));
                          MR_hl_field(0, Context_98, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
                        }
                        Msg_99 = mercury__io__error_message_1_f_0(Error_55);
                        {
                          Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, Var_104, 1) = ((MR_Box) (Msg_99));
                        }
                        {
                          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
                          MR_hl_field(1, Var_103, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
                        }
                        {
                          Pieces_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_100, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[27])));
                          MR_hl_field(1, Pieces_100, 1) = ((MR_Box) (Var_103));
                        }
                        {
                          Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
                          MR_hl_field(0, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                          MR_hl_field(0, Spec_56, 3) = ((MR_Box) (Context_98));
                          MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Pieces_100));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *Result_13 = base;
                          MR_hl_field(2, base, 0) = ((MR_Box) (Spec_56));
                        }
                        *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
                      }
                      break;
                  }
                }
                else
                {
                  succeeded = (Char_16 == (MR_Char) 10);
                  if (succeeded)
                  {
                    MR_Word Chars_61;

                    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_0_29, &Chars_61);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_13 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Chars_61));
                    }
                    *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_RevChars_37_62;
                    MR_Word next_value_of_STATE_VARIABLE_RevChars_0_29;

                    {
                      STATE_VARIABLE_RevChars_37_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_RevChars_37_62, 0) = ((MR_Box) (MR_Word) (Char_16));
                      MR_hl_field(1, STATE_VARIABLE_RevChars_37_62, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_RevChars_0_29 = STATE_VARIABLE_RevChars_37_62;
                    STATE_VARIABLE_RevChars_0_29 = next_value_of_STATE_VARIABLE_RevChars_0_29;
                    continue;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              if ((STATE_VARIABLE_RevChars_0_29 == (MR_Word) ((MR_Unsigned) 0U)))
                *Result_13 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Chars_68;

                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_0_29, &Chars_68);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_13 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Chars_68));
                }
              }
              *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_71 = ((MR_Word) ((MR_hl_field(1, CharResult_15, (MR_Integer) 0))));
          MR_Word Spec_72;
          MR_Word Context_76;
          MR_String Msg_77;
          MR_Word Pieces_78;
          MR_Word Var_81;
          MR_Word Var_82;

          {
            Context_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_76, 0) = ((MR_Box) (FileName_10));
            MR_hl_field(0, Context_76, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
          }
          Msg_77 = mercury__io__error_message_1_f_0(Error_71);
          {
            Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_82, 1) = ((MR_Box) (Msg_77));
          }
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[14])));
          }
          {
            Pieces_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_78, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[27])));
            MR_hl_field(1, Pieces_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Spec_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_72, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(0, Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_72, 3) = ((MR_Box) (Context_76));
            MR_hl_field(0, Spec_72, 4) = ((MR_Box) (Pieces_78));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_13 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (Spec_72));
          }
          *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__options_file__skip_comment_line_4_p_0(
  MR_Word InStream_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CharResult_8;
    MR_Char Char_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_char_unboxed_5_p_0(InStream_5, &CharResult_8, &Char_9);
    switch (MR_tag((MR_Word) CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CharResult_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (Char_9 == (MR_Char) 10);
              if (succeeded)
                *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                // direct tailcall eliminated
                ;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            *Result_6 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        break;
      case (MR_Integer) 1:
        *Result_6 = CharResult_8;
        break;
    }
    break;
  }
}

static MR_Box MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Msg_5;

  conv1_Msg_5 = make__options_file__include_context_msg_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Msg_5));
  return wrapper_arg_2;
}

static void MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0(
  MR_Word PreStack0_4,
  MR_String PathName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

  if ((PreStack0_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InclStack_7;

    {
      InclStack_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InclStack_7, 0) = ((MR_Box) (PathName_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InclStack_7));
    }
  }
  else
  {
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(1, PreStack0_4, (MR_Integer) 0))));
    MR_Word InclStack0_9 = ((MR_Word) ((MR_hl_field(1, PreStack0_4, (MR_Integer) 1))));
    MR_Word Spec_10;

    if (((MR_tag((MR_Word) InclStack0_9)) == (MR_Integer) 0))
    {
      MR_String StackPathName0_12 = ((MR_String) ((MR_hl_field(0, InclStack0_9, (MR_Integer) 0))));
      MR_Word Pieces_13;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_String Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = (strcmp(PathName_5, StackPathName0_12) == 0);
      if (succeeded)
      {
        Var_23 = (MR_Word) (MR_mkword(3, &make__options_file_scalar_common_1[15]));
        Var_26 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[17]));
        Var_27 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
        Var_28 = (MR_Word) ((MR_Unsigned) 0U);
        Var_29 = (MR_Word) ((MR_Unsigned) 16U);
        {
          Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_25, 1) = ((MR_Box) (PathName_5));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_24));
        }
        {
          Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_10, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, Spec_10, 1) = ((MR_Box) (Var_28));
          MR_hl_field(0, Spec_10, 2) = ((MR_Box) (Var_29));
          MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_8));
          MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_13));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Context0_14 = ((MR_Word) ((MR_hl_field(1, InclStack0_9, (MR_Integer) 1))));
      MR_Word InclStack1_15 = ((MR_Word) ((MR_hl_field(1, InclStack0_9, (MR_Integer) 2))));
      MR_String StackPathName0_55 = ((MR_String) ((MR_hl_field(1, InclStack0_9, (MR_Integer) 0))));

      succeeded = (strcmp(PathName_5, StackPathName0_55) == 0);
      if (succeeded)
      {
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Pieces_54;

        {
          Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_32, 1) = ((MR_Box) (PathName_5));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &make__options_file_scalar_common_1[17])));
        }
        {
          Pieces_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_54, 0) = ((MR_Box) (MR_mkword(3, &make__options_file_scalar_common_1[15])));
          MR_hl_field(1, Pieces_54, 1) = ((MR_Box) (Var_31));
        }
        {
          Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4"));
          MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_8));
          MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_54));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_75_56;
        MR_Word TypeCtorInfo_76_57;
        MR_Word TopDownIncludes_16;
        MR_String TopPathName_17;
        MR_Word TopContext_18;
        MR_Word MainPieces_19;
        MR_Word MainMsg_20;
        MR_Word InclMsgs_21;
        MR_Word LastMsg_22;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_String Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Pieces_60;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Box conv0_Var_40;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (StackPathName0_55));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (Context0_14));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = make__options_file__pathname_occurs_in_incl_stack_2_4_p_0(InclStack1_15, PathName_5, Var_37, &TopDownIncludes_16);
        if (succeeded)
        {
          TypeInfo_75_56 = (MR_Word) (&make__options_file_scalar_common_2[0]);
          conv0_Var_40 = mercury__list__det_head_1_f_0(TypeInfo_75_56, TopDownIncludes_16);
          Var_40 = ((MR_Word) (conv0_Var_40));
          TopPathName_17 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
          TopContext_18 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
          Var_41 = (MR_Word) (MR_mkword(3, &make__options_file_scalar_common_1[15]));
          Var_44 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[21]));
          TypeCtorInfo_76_57 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0);
          Var_45 = (MR_Word) (&make__options_file_scalar_common_2[4]);
          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_43, 1) = ((MR_Box) (TopPathName_17));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
          }
          {
            MainPieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MainPieces_19, 0) = ((MR_Box) (Var_41));
            MR_hl_field(1, MainPieces_19, 1) = ((MR_Box) (Var_42));
          }
          {
            MainMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MainMsg_20, 0) = ((MR_Box) (TopContext_18));
            MR_hl_field(0, MainMsg_20, 1) = ((MR_Box) (MainPieces_19));
          }
          InclMsgs_21 = mercury__list__map_2_f_0(TypeInfo_75_56, TypeCtorInfo_76_57, Var_45, TopDownIncludes_16);
          Var_61 = (MR_Word) (MR_mkword(3, &make__options_file_scalar_common_1[22]));
          Var_65 = (MR_Word) (MR_mkword(1, &make__options_file_scalar_common_1[24]));
          Var_47 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
          Var_48 = (MR_Word) ((MR_Unsigned) 0U);
          Var_49 = (MR_Word) ((MR_Unsigned) 16U);
          Var_53 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_64, 1) = ((MR_Box) (PathName_5));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
          }
          {
            Pieces_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(1, Pieces_60, 1) = ((MR_Box) (Var_63));
          }
          {
            LastMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, LastMsg_22, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, LastMsg_22, 1) = ((MR_Box) (Pieces_60));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (MainMsg_20));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (InclMsgs_21));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (LastMsg_22));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
          }
          Var_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_57, Var_51, Var_52);
          {
            Spec_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_10, 0) = ((MR_Box) (Var_47));
            MR_hl_field(2, Spec_10, 1) = ((MR_Box) (Var_48));
            MR_hl_field(2, Spec_10, 2) = ((MR_Box) (Var_49));
            MR_hl_field(2, Spec_10, 3) = ((MR_Box) (Var_50));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_10));
      }
    else
    {
      MR_Word InclStack_11;

      {
        InclStack_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InclStack_11, 0) = ((MR_Box) (PathName_5));
        MR_hl_field(1, InclStack_11, 1) = ((MR_Box) (Context_8));
        MR_hl_field(1, InclStack_11, 2) = ((MR_Box) (InclStack0_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (InclStack_11));
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_2_4_p_0(
  MR_Word InclStack0_5,
  MR_String PathName_6,
  MR_Word STATE_VARIABLE_TopDownIncludes_0_11,
  MR_Word * STATE_VARIABLE_TopDownIncludes_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) InclStack0_5)) == (MR_Integer) 0))
    {
      MR_String StackPathName0_8 = ((MR_String) ((MR_hl_field(0, InclStack0_5, (MR_Integer) 0))));

      succeeded = (strcmp(PathName_6, StackPathName0_8) == 0);
      if (succeeded)
      {
        *STATE_VARIABLE_TopDownIncludes_12 = STATE_VARIABLE_TopDownIncludes_0_11;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Context0_9 = ((MR_Word) ((MR_hl_field(1, InclStack0_5, (MR_Integer) 1))));
      MR_Word InclStack1_10 = ((MR_Word) ((MR_hl_field(1, InclStack0_5, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_TopDownIncludes_13_13;
      MR_Word Var_14;
      MR_String StackPathName0_16 = ((MR_String) ((MR_hl_field(1, InclStack0_5, (MR_Integer) 0))));

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (StackPathName0_16));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (Context0_9));
      }
      {
        STATE_VARIABLE_TopDownIncludes_13_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_TopDownIncludes_13_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, STATE_VARIABLE_TopDownIncludes_13_13, 1) = ((MR_Box) (STATE_VARIABLE_TopDownIncludes_0_11));
      }
      succeeded = (strcmp(PathName_6, StackPathName0_16) == 0);
      if (succeeded)
      {
        *STATE_VARIABLE_TopDownIncludes_12 = STATE_VARIABLE_TopDownIncludes_13_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_InclStack0_5 = InclStack1_10;
        MR_Word next_value_of_STATE_VARIABLE_TopDownIncludes_0_11 = STATE_VARIABLE_TopDownIncludes_13_13;

        // direct tailcall eliminated
        ;
        InclStack0_5 = next_value_of_InclStack0_5;
        STATE_VARIABLE_TopDownIncludes_0_11 = next_value_of_STATE_VARIABLE_TopDownIncludes_0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
make__options_file__read_options_files_named_in_options_file_option_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Variables_27;
  MR_Word conv2_STATE_VARIABLE_IOSpecs_29;
  MR_Word conv1_STATE_VARIABLE_ParseSpecs_31;
  MR_Word conv0_STATE_VARIABLE_UndefSpecs_33;

  make__options_file__read_options_file_set_params_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Variables_27, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_IOSpecs_29, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ParseSpecs_31, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_UndefSpecs_33);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Variables_27));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_IOSpecs_29));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ParseSpecs_31));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_UndefSpecs_33));
}

void MR_CALL 
make__options_file__read_options_files_named_in_options_file_option_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word OptionTable_9,
  MR_Word * Variables_10,
  MR_Word * Specs_11,
  MR_Word * UndefSpecs_12)
{
  MR_Word OptionsFiles_14;
  MR_Word EnvVarMap_15;
  MR_Word Variables0_16;
  MR_Word IOSpecs_17;
  MR_Word ParseSpecs_18;
  MR_Word Var_23;
  MR_Word OptsMap_44;
  MR_Box conv8_Variables_10;
  MR_Box conv7_IOSpecs_17;
  MR_Box conv6_ParseSpecs_18;
  MR_Box conv5_UndefSpecs_12;
  MR_Box conv4_STATE_VARIABLE_IO_20;

  mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 703)), &OptionsFiles_14);
  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_15);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_44);
  {
    Variables0_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Variables0_16, 0) = ((MR_Box) (OptsMap_44));
    MR_hl_field(0, Variables0_16, 1) = ((MR_Box) (EnvVarMap_15));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&make__options_file_scalar_common_4[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (make__options_file__read_options_files_named_in_options_file_option_7_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (OptionTable_9));
  }
  mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, OptionsFiles_14, ((MR_Box) (Variables0_16)), &conv8_Variables_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_IOSpecs_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_ParseSpecs_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_UndefSpecs_12, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
  *Variables_10 = ((MR_Word) (conv8_Variables_10));
  IOSpecs_17 = ((MR_Word) (conv7_IOSpecs_17));
  ParseSpecs_18 = ((MR_Word) (conv6_ParseSpecs_18));
  *UndefSpecs_12 = ((MR_Word) (conv5_UndefSpecs_12));
  *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), IOSpecs_17, ParseSpecs_18);
}

MR_Word MR_CALL 
make__options_file__options_variables_init_1_f_0(
  MR_Word EnvVarMap_3)
{
  MR_Word Variables_4;
  MR_Word OptsMap_5;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_5);
  {
    Variables_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Variables_4, 0) = ((MR_Box) (OptsMap_5));
    MR_hl_field(0, Variables_4, 1) = ((MR_Box) (EnvVarMap_3));
  }
  return Variables_4;
}

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____found_options_file_error_0_0();
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____found_options_file_error_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____incl_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____incl_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____include_check_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____include_check_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____is_options_file_optional_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____is_options_file_optional_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____maybe_is_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____maybe_is_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____maybe_options_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____maybe_options_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____mmc_option_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____mmc_option_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____opt_var_or_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____opt_var_or_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_variable_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_variable_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_variable_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_variable_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_variable_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_variable_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_variable_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_variable_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____options_variables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____options_variables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____parse_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____parse_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____pre_incl_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____pre_incl_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____set_or_add_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____set_or_add_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____variable_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____variable_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__options_file____Unify____variable_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__options_file____Compare____variable_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__options_file__init(void)
{
}

void mercury__make__options_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_found_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_incl_stack_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_include_check_result_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_is_options_file_optional_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_maybe_is_first_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_maybe_options_file_line_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_mmc_option_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_opt_var_or_spec_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_line_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_class_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variables_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_parse_result_1);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_pre_incl_stack_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_search_info_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_set_or_add_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_result_1);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_source_0);
}

void mercury__make__options_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__options_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.options_file.
