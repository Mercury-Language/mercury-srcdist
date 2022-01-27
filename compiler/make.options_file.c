/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2022-01-20
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0;

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

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

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0[23];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[23];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[23];

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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_0_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_0_0;

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_search_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_search_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2];

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_info_0_0[2];

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

static const MR_FA_TypeInfo_Struct1 make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_util__type_ctor_info_error_spec_0;

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
make__options_file__IntroducedFrom__pred__lookup_options_variable__1514__1_1_p_0(
  MR_String LambdaHeadVar__1_45);

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1411__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable_name__863__1_2_p_0(
  MR_Word HeadVar__1_20,
  MR_Char HeadVar__2_35);

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word TypeInfo_for_T_18,
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
  MR_Word HeadVar__2_1,
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
make__options_file____Compare____search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
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
  MR_Word TypeInfo_for_T_18,
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
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0(
  MR_Word HeadVar__2_1,
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

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word ResultA_4,
  MR_Word ResultB_5);

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
make__options_file__read_options_file_set_params_12_p_0(
  MR_Word OptionSearchDirs_13,
  MR_String OptionsFile_14,
  MR_Word STATE_VARIABLE_Variables_0_24,
  MR_Word * STATE_VARIABLE_Variables_25,
  MR_Word STATE_VARIABLE_IOSpecs_0_26,
  MR_Word * STATE_VARIABLE_IOSpecs_27,
  MR_Word STATE_VARIABLE_ParseSpecs_0_28,
  MR_Word * STATE_VARIABLE_ParseSpecs_29,
  MR_Word STATE_VARIABLE_UndefSpecs_0_30,
  MR_Word * STATE_VARIABLE_UndefSpecs_31);

static void MR_CALL 
make__options_file__dump_options_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_module_options_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_default_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_default_options_3_p_0_1(
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

static MR_Word MR_CALL 
make__options_file__split_into_words_1_f_0(
  MR_Word Chars_3);

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

static MR_bool MR_CALL 
make__options_file__parse_variable_name_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_variable_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__parse_variable_name_5_p_0(
  MR_String FileName_6,
  MR_Integer LineNumber_7,
  MR_Word Chars0_8,
  MR_Word * Chars_9,
  MR_Word * MaybeVarName_10);

static void MR_CALL 
make__options_file__do_parse_variable_name_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirst_3,
  MR_Word STATE_VARIABLE_RevVarNameChars_0_4,
  MR_Word * STATE_VARIABLE_RevVarNameChars_5);

static MR_Word MR_CALL 
make__options_file__report_split_error_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_String Msg_7);

static void MR_CALL 
make__options_file__read_options_line_7_p_0(
  MR_Word InStream_8,
  MR_String FileName_9,
  MR_Integer STATE_VARIABLE_LineNumber_0_16,
  MR_Integer * STATE_VARIABLE_LineNumber_17,
  MR_Word * Result_11);

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

static MR_Word MR_CALL 
make__options_file__io_error_to_parse_error_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word Error_7);

static void MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0(
  MR_Word PreStack0_4,
  MR_String PathName_5,
  MR_Word * Result_6);

static MR_Box MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_4_p_0(
  MR_Word InclStack0_5,
  MR_String PathName_6,
  MR_Word Context_7,
  MR_Word * Spec_8);

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
make__options_file____Unify____search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
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


static /* final */ const MR_Box make__options_file_scalar_common_1[92][2];

static /* final */ const MR_Box make__options_file_scalar_common_2[15][3];

static /* final */ const MR_Box make__options_file_scalar_common_3[3][1];

static /* final */ const MR_Box make__options_file_scalar_common_4[1][15];

static /* final */ const MR_Box make__options_file_scalar_common_5[4][5];

static /* final */ const MR_Box make__options_file_scalar_common_6[4][4];

static /* final */ const MR_Box make__options_file_scalar_common_7[1][17];

static /* final */ const MR_Box make__options_file_scalar_common_8[1][9];

static /* final */ const MR_Box make__options_file_scalar_common_9[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_11[1][6];


/* sealed */ struct make__options_file__vector_common_type_10_0_s {
  const MR_Word make__options_file__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_10_0_s make__options_file_vector_common_10[23];

/* sealed */ struct make__options_file__vector_common_type_12_0_s {
  const MR_String make__options_file__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_12_0_s make__options_file_vector_common_12[23];



static /* final */ const MR_Box make__options_file_scalar_common_1[92][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__options_file_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments file does not set MCFLAGS."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mercury_compile: internal error:"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot open options file"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: options file"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "includes itself."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the following chain of include directives."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "indirectly includes itself through"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The include directive for"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attempt to escape end-of-file."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "I/O error:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "+="))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "after"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected variable name before"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unterminated reference to a variable after"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--erlang-flag"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) "--no-libgrade")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[77]))),
    ((MR_Box) ((MR_String) "--libgrade"))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) "--no-lib-linkage")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[79]))),
    ((MR_Box) ((MR_String) "--lib-linkage"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "options, found"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[0])),
    ((MR_Box) (make__options_file__pathname_occurs_in_incl_stack_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_variable_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__split_into_words_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[2])),
    ((MR_Box) (make__options_file__lookup_default_options_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[2])),
    ((MR_Box) (make__options_file__lookup_mmc_options_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[2])),
    ((MR_Box) (make__options_file__lookup_mmc_module_options_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[3])),
    ((MR_Box) (make__options_file__lookup_options_variable_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[3])),
    ((MR_Box) (make__options_file__lookup_options_variable_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "unterminated string"))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_4[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_6[4][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__options_file_scalar_common_5[1])),
    ((MR_Box) (make__options_file__parse_variable_name_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_2[5]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "predicate \140make.options_file.read_args_file\'/6")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[11])))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_7[1][17] = {
  /* row 0 */
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
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variables_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_class_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_11[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct make__options_file__vector_common_type_10_0_s make__options_file_vector_common_10[23] = {
  /* row 0 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 1 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[66])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[71])) },
  /* row 4 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[67])) },
  /* row 5 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[85])) },
  /* row 6 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[73])) },
  /* row 7 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[69])) },
  /* row 8 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[70])) },
  /* row 9 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[84])) },
  /* row 10 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 11 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[74])) },
  /* row 12 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[75])) },
  /* row 13 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[65])) },
  /* row 14 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[81])) },
  /* row 15 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[76])) },
  /* row 16 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[78])) },
  /* row 17 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[80])) },
  /* row 18 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[72])) },
  /* row 19 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[86])) },
  /* row 20 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[68])) },
  /* row 21 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[82])) },
  /* row 22 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[83])) },
};

static /* final */ const struct make__options_file__vector_common_type_12_0_s make__options_file_vector_common_12[23] = {
  /* row 0 */   {     (MR_String) "GRADEFLAGS" },
  /* row 1 */   {     (MR_String) "MCFLAGS" },
  /* row 2 */   {     (MR_String) "CFLAGS" },
  /* row 3 */   {     (MR_String) "GCC_FLAGS" },
  /* row 4 */   {     (MR_String) "CLANG_FLAGS" },
  /* row 5 */   {     (MR_String) "MSVC_FLAGS" },
  /* row 6 */   {     (MR_String) "JAVACFLAGS" },
  /* row 7 */   {     (MR_String) "CSCFLAGS" },
  /* row 8 */   {     (MR_String) "ERLANG_FLAGS" },
  /* row 9 */   {     (MR_String) "MLOBJS" },
  /* row 10 */   {     (MR_String) "MLLIBS" },
  /* row 11 */   {     (MR_String) "LDFLAGS" },
  /* row 12 */   {     (MR_String) "LD_LIBFLAGS" },
  /* row 13 */   {     (MR_String) "C2INITARGS" },
  /* row 14 */   {     (MR_String) "LIBRARIES" },
  /* row 15 */   {     (MR_String) "LIB_DIRS" },
  /* row 16 */   {     (MR_String) "LIBGRADES" },
  /* row 17 */   {     (MR_String) "LIB_LINKAGES" },
  /* row 18 */   {     (MR_String) "INSTALL_PREFIX" },
  /* row 19 */   {     (MR_String) "MERCURY_STDLIB_DIR" },
  /* row 20 */   {     (MR_String) "MERCURY_CONFIG_DIR" },
  /* row 21 */   {     (MR_String) "LINKAGE" },
  /* row 22 */   {     (MR_String) "MERCURY_LINKAGE" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0),
    (MR_PseudoTypeInfo) (&make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 = {
  (MR_String) "found_options_file_error",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_found_options_file_error_0[1] = {
  &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1] = {
  &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_found_options_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__options_file____Unify____found_options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____found_options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "found_options_file_error",
  {     make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_found_options_file_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_found_options_file_error_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_incl_stack_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_incl_stack_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_incl_stack_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_incl_stack_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_incl_stack_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_incl_stack_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_incl_stack_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_incl_stack_0)
};

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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_include_check_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_include_check_result_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_include_check_result_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_include_check_result_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_include_check_result_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_include_check_result_0 },
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
  {     make__options_file__make__options_file__enum_name_ordered_is_options_file_optional_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_is_options_file_optional_0 },
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
  {     make__options_file__make__options_file__enum_name_ordered_maybe_is_first_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_maybe_is_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_maybe_is_first_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_file_line_0)
};

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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_maybe_options_file_line_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_maybe_options_file_line_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_maybe_options_file_line_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_maybe_options_file_line_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_maybe_options_file_line_0 },
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_mmc_option_type_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_mmc_option_type_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_opt_var_or_spec_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_opt_var_or_spec_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_opt_var_or_spec_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_opt_var_or_spec_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_opt_var_or_spec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_opt_var_or_spec_0,

};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1] = {
  (MR_Integer) 0
};

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
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__options_file__make__options_file__functor_number_map_options_file_error_0,

};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
  }
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_options_file_line_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_file_line_0 },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2
};

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
  {     make__options_file__make__options_file__du_name_ordered_options_variable_class_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0 },
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
  (MR_String) "erlang_flags",
  INT32_C(8)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9 = {
  (MR_String) "ml_objs",
  INT32_C(9)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10 = {
  (MR_String) "ml_libs",
  INT32_C(10)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11 = {
  (MR_String) "ld_flags",
  INT32_C(11)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12 = {
  (MR_String) "ld_libflags",
  INT32_C(12)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13 = {
  (MR_String) "c2init_args",
  INT32_C(13)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14 = {
  (MR_String) "libraries",
  INT32_C(14)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15 = {
  (MR_String) "lib_dirs",
  INT32_C(15)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16 = {
  (MR_String) "lib_grades",
  INT32_C(16)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17 = {
  (MR_String) "lib_linkages",
  INT32_C(17)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18 = {
  (MR_String) "install_prefix",
  INT32_C(18)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19 = {
  (MR_String) "stdlib_dir",
  INT32_C(19)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20 = {
  (MR_String) "config_dir",
  INT32_C(20)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21 = {
  (MR_String) "linkage",
  INT32_C(21)
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22 = {
  (MR_String) "mercury_linkage",
  INT32_C(22)
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0[23] = {
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
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[23] = {
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[23] = {
  (MR_Integer) 7,
  (MR_Integer) 20,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 21,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 19,
  (MR_Integer) 18,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 8,
  (MR_Integer) 22,
  (MR_Integer) 3,
  (MR_Integer) 16,
  (MR_Integer) 17
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
  {     make__options_file__make__options_file__enum_name_ordered_options_variable_type_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_options_variable_type_0 },
  (MR_Integer) 23,
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_value_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_value_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_value",
  {     make__options_file__make__options_file__du_name_ordered_options_variable_value_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0 },
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variables_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variables_0_0
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variables_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variables_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variables_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variables_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variables_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variables",
  {     make__options_file__make__options_file__du_name_ordered_options_variables_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variables_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_options_variables_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_parse_result_1_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_1
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_parse_result_1_2[1] = {
  &make__options_file__make__options_file__du_functor_desc_parse_result_1_2
};

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
  {     make__options_file__make__options_file__du_name_ordered_parse_result_1 },
  {     make__options_file__make__options_file__du_ptag_ordered_parse_result_1 },
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
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_pre_incl_stack_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_pre_incl_stack_0_1
};

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
  {     make__options_file__make__options_file__du_name_ordered_pre_incl_stack_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_pre_incl_stack_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_pre_incl_stack_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__options_file__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_0_0 = {
  (MR_String) "search",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_search_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_0_1 = {
  (MR_String) "no_search",
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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_search_0_1
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_search_0_0
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_search_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__options_file__make__options_file__du_stag_ordered_search_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_search_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_search_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_search_0_1,
  &make__options_file__make__options_file__du_functor_desc_search_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_search_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____search_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____search_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "search",
  {     make__options_file__make__options_file__du_name_ordered_search_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_search_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_search_0,

};

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_search_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__options_file__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_search_0)
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_search_info_0_0 = {
  (MR_String) "search_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__options_file__make__options_file__field_types_search_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_search_info_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_search_info_0_0
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_search_info_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_search_info_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_search_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____search_info_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____search_info_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "search_info",
  {     make__options_file__make__options_file__du_name_ordered_search_info_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_search_info_0 },
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
  {     make__options_file__make__options_file__enum_name_ordered_set_or_add_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_set_or_add_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_set_or_add_0,

};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_FA_TypeInfo_Struct1 make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1] = {
  (MR_PseudoTypeInfo) (&make__options_file__one_or_more__ti_one_or_more_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

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

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_1
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_2
};

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
  {     make__options_file__make__options_file__du_name_ordered_variable_result_1 },
  {     make__options_file__make__options_file__du_ptag_ordered_variable_result_1 },
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
  {     make__options_file__make__options_file__enum_name_ordered_variable_source_0 },
  {     make__options_file__make__options_file__enum_ordinal_ordered_variable_source_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__options_file__make__options_file__functor_number_map_variable_source_0,

};

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1514__1_1_p_0(
  MR_String LambdaHeadVar__1_45)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__prefix_2_p_0(LambdaHeadVar__1_45, (MR_String) "-l");
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1411__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (LambdaHeadVar__1_14));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 0) = ((MR_Box) (OptionName_9));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 1) = ((MR_Box) (Var_16));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable_name__863__1_2_p_0(
  MR_Word HeadVar__1_20,
  MR_Char HeadVar__2_35)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), HeadVar__1_20, ((MR_Box) (MR_Word) (HeadVar__2_35)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
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
          {
            MR_Box Var_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, HeadVar__1_1, Var_21, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_20)), ((MR_Box) (ArgY1_15)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_12_12;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        make__options_file____Compare____search_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = make__options_file____Unify____search_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&make__options_file_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__term____Compare____context_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          make__options_file____Compare____incl_stack_0_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__term____Unify____context_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = make__options_file____Unify____incl_stack_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
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
          {
            MR_Box Var_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, HeadVar__1_1, Var_21, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_20, ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
make__options_file____Compare____options_variables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__options_file_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
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
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

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
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
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
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_13, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_String ArgY2_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&make__options_file_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        make__options_file____Compare____options_file_line_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_24;
        MR_Integer Var_39 = (MR_Integer) (Var_35);
        MR_Integer Var_40 = (MR_Integer) (ArgY1_23);

        succeeded = (Var_39 < Var_40);
        if (succeeded)
        {
          SubResult1_24 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_39 > Var_40);
          if (succeeded)
          {
            SubResult1_24 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_24 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_24;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY2_26)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;
        MR_Integer Var_41 = (MR_Integer) (Var_38);
        MR_Integer Var_42 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_41 < Var_42);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_41 > Var_42);
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

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, Var_37, ArgY2_8);
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_36)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = make__options_file____Unify____options_file_line_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4;
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
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
}

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        make__options_file____Compare____incl_stack_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = make__options_file____Unify____incl_stack_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
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
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_16, Var_31, ArgY1_15);
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          mercury__term____Compare____context_0_0(&SubResult2_19, Var_30, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_29;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_21;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX2_7, ArgY2_8);
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
}

static void MR_CALL 
make__options_file__write_options_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_Word OptVarValue_8)
{
  {
    MR_Word ValueWords_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptVarValue_8, (MR_Integer) 1))));
    MR_Word Src_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptVarValue_8, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_String Var_19;
    MR_String Var_29;

    Var_19 = mercury__string__f_43_43_2_f_0(VarName_7, (MR_String) " ->");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&make__options_file_scalar_common_3[2]), (MR_Integer) 24, Var_19, &Var_29);
    mercury__io__write_string_4_p_0(DumpStream_6, Var_29);
    mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
    mercury__io__write_4_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_variable_source_0), DumpStream_6, ((MR_Box) (Src_12)));
    mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
    mercury__io__write_line_4_p_0((MR_Word) (&make__options_file_scalar_common_1[1]), DumpStream_6, ((MR_Box) (ValueWords_11)));
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1514__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_options_variable_6_p_0(
  MR_Word Variables_7,
  MR_Word OptionsVariableClass_8,
  MR_Word FlagsVar_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word MaybeValues_10;
    MR_String VarName_12 = ((&make__options_file_vector_common_12[0 + FlagsVar_9]))->make__options_file__vector_common_type_12_0__vct_12_f_0;
    MR_Word DefaultFlagsResult_13;
    MR_Word FlagsResult_14;
    MR_Word ExtraFlagsResult_15;
    MR_Word ModuleFlagsResult_20;
    MR_Word Result_21;
    MR_String Var_34;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word ModuleName_17;

    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", VarName_12);
    make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_34, &DefaultFlagsResult_13);
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
              MR_String Var_36;

              make__options_file__lookup_variable_words_3_p_0(Variables_7, VarName_12, &FlagsResult_14);
              Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_12);
              make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_36, &ExtraFlagsResult_15);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_36;

          make__options_file__lookup_variable_words_3_p_0(Variables_7, VarName_12, &FlagsResult_14);
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_12);
          make__options_file__lookup_variable_words_3_p_0(Variables_7, Var_36, &ExtraFlagsResult_15);
        }
        break;
    }
    if (((MR_Unsigned) 6782974U & (((MR_Integer) 1 << FlagsVar_9))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OptionsVariableClass_8)) == (MR_Integer) 1);
      if (succeeded)
        ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionsVariableClass_8, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_String ModuleFileNameBase_18;
      MR_String ModuleVarName_19;
      MR_String Var_39;

      ModuleFileNameBase_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "-", ModuleFileNameBase_18);
      ModuleVarName_19 = mercury__string__f_43_43_2_f_0(VarName_12, Var_39);
      make__options_file__lookup_variable_words_3_p_0(Variables_7, ModuleVarName_19, &ModuleFlagsResult_20);
    }
    else
      ModuleFlagsResult_20 = (MR_Word) ((MR_Unsigned) 0U);
    switch (MR_tag((MR_Word) DefaultFlagsResult_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_42 = FlagsResult_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SA_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefaultFlagsResult_13, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) FlagsResult_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_42 = DefaultFlagsResult_13;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SB_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FlagsResult_14, (MR_Integer) 0))));
                MR_Word Var_84;

                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SA_77, SB_78);
                {
                  Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_84));
                }
              }
              break;
            case (MR_Integer) 2:
              Var_42 = FlagsResult_14;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EA_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DefaultFlagsResult_13, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) FlagsResult_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_42 = DefaultFlagsResult_13;
              break;
            case (MR_Integer) 1:
              Var_42 = DefaultFlagsResult_13;
              break;
            case (MR_Integer) 2:
              {
                MR_Word EB_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FlagsResult_14, (MR_Integer) 0))));
                MR_Word Var_83;

                Var_83 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EA_80, EB_82);
                {
                  Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (Var_83));
                }
              }
              break;
          }
        }
        break;
    }
    Var_41 = make__options_file__combine_var_results_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, ExtraFlagsResult_15);
    Result_21 = make__options_file__combine_var_results_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, ModuleFlagsResult_20);
    switch (MR_tag((MR_Word) Result_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Values_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_21, (MR_Integer) 0))));

          succeeded = (FlagsVar_9 == (MR_Integer) 10);
          if (succeeded)
          {
            MR_Word BadLibs_25;

            BadLibs_25 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[13]), Values_22);
            if ((BadLibs_25 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MaybeValues_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeValues_10, 0) = ((MR_Box) (Values_22));
              }
              *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
            }
            else
            {
              MR_Word Pieces_28;
              MR_Word Spec_30;
              MR_Word Var_47;
              MR_Word Var_50;
              MR_Word Var_53;
              MR_Word Var_56;
              MR_Word Var_57;

              MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
              Var_57 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[14]), BadLibs_25);
              Var_56 = parse_tree__error_util__list_to_pieces_1_f_0(Var_57);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[89])));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[88])));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[87])));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
              }
              Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_47, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[90])));
              {
                Spec_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_options_variable\'/6"));
                MR_hl_field(MR_mktag(2), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(2), Spec_30, 3) = ((MR_Box) (Pieces_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_33 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
              }
            }
          }
          else
          {
            {
              MaybeValues_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeValues_10, 0) = ((MR_Box) (Values_22));
            }
            *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_21, (MR_Integer) 0))));
          MR_Word Var_44;

          MaybeValues_10 = (MR_Word) ((MR_Unsigned) 0U);
          Var_44 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_31);
          *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_44, STATE_VARIABLE_Specs_0_32);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FlagsVar_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeValues_10));
    }
  }
}

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word ResultA_4,
  MR_Word ResultB_5)
{
  {
    MR_Word Result_6;

    switch (MR_tag((MR_Word) ResultA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Result_6 = ResultB_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultA_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) ResultB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Result_6 = ResultA_4;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultB_5, (MR_Integer) 0))));
                MR_Word Var_14;

                Var_14 = mercury__list__f_43_43_2_f_0(TypeInfo_for_T_15, SA_7, SB_8);
                {
                  Result_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Result_6, 0) = ((MR_Box) (Var_14));
                }
              }
              break;
            case (MR_Integer) 2:
              Result_6 = ResultB_5;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResultA_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) ResultB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Result_6 = ResultA_4;
              break;
            case (MR_Integer) 1:
              Result_6 = ResultA_4;
              break;
            case (MR_Integer) 2:
              {
                MR_Word EB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResultB_5, (MR_Integer) 0))));
                MR_Word Var_13;

                Var_13 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EA_10, EB_12);
                {
                  Result_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Result_6, 0) = ((MR_Box) (Var_13));
                }
              }
              break;
          }
        }
        break;
    }
    return Result_6;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_15;

    conv0_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1411__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_8 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VariableValue_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      MR_Word MMCOptionType_13 = ((&make__options_file_vector_common_10[0 + Var_9]))->make__options_file__vector_common_type_10_0__vct_10_f_0;

      if ((MMCOptionType_13 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = VariableValue_6;
      else
      {
        MR_Word InitialOptions_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MMCOptionType_13, (MR_Integer) 0))));
        MR_String OptionName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MMCOptionType_13, (MR_Integer) 1))));
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__options_file_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (OptionName_15));
        }
        Var_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[1]), Var_19, VariableValue_6);
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (InitialOptions_14));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
        }
        HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17);
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
make__options_file__include_context_msg_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Msg_5;
    MR_String FileName_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Pieces_6;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (FileName_3));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[25])));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_9));
    }
    {
      Msg_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_5, 0) = ((MR_Box) (Context_4));
      MR_hl_field(MR_mktag(0), Msg_5, 1) = ((MR_Box) (Pieces_6));
    }
    return Msg_5;
  }
}

static void MR_CALL 
make__options_file__read_options_file_set_params_12_p_0(
  MR_Word OptionSearchDirs_13,
  MR_String OptionsFile_14,
  MR_Word STATE_VARIABLE_Variables_0_24,
  MR_Word * STATE_VARIABLE_Variables_25,
  MR_Word STATE_VARIABLE_IOSpecs_0_26,
  MR_Word * STATE_VARIABLE_IOSpecs_27,
  MR_Word STATE_VARIABLE_ParseSpecs_0_28,
  MR_Word * STATE_VARIABLE_ParseSpecs_29,
  MR_Word STATE_VARIABLE_UndefSpecs_0_30,
  MR_Word * STATE_VARIABLE_UndefSpecs_31)
{
  {
    MR_bool succeeded = (strcmp(OptionsFile_14, (MR_String) "Mercury.options") == 0);
    MR_Word MaybeSearch_21;
    MR_Word IsOptionsFileOptional_22;
    MR_Word SearchInfo_23;

    if (succeeded)
    {
      MaybeSearch_21 = (MR_Word) ((MR_Unsigned) 0U);
      IsOptionsFileOptional_22 = (MR_Integer) 0;
    }
    else
    {
      {
        MaybeSearch_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeSearch_21, 0) = ((MR_Box) (OptionSearchDirs_13));
      }
      IsOptionsFileOptional_22 = (MR_Integer) 1;
    }
    {
      SearchInfo_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SearchInfo_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SearchInfo_23, 1) = ((MR_Box) (MaybeSearch_21));
    }
    make__options_file__read_options_file_params_14_p_0(SearchInfo_23, (MR_Word) ((MR_Unsigned) 0U), IsOptionsFileOptional_22, OptionsFile_14, STATE_VARIABLE_Variables_0_24, STATE_VARIABLE_Variables_25, STATE_VARIABLE_IOSpecs_0_26, STATE_VARIABLE_IOSpecs_27, STATE_VARIABLE_ParseSpecs_0_28, STATE_VARIABLE_ParseSpecs_29, STATE_VARIABLE_UndefSpecs_0_30, STATE_VARIABLE_UndefSpecs_31);
  }
}

static void MR_CALL 
make__options_file__dump_options_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_options_variable_value_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
make__options_file__dump_options_file_5_p_0(
  MR_Word DebugStream_6,
  MR_String FileName_7,
  MR_Word Variables_8)
{
  {
    MR_Word OpenResult_10;

    mercury__io__open_output_4_p_0(FileName_7, &OpenResult_10);
    if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_10, (MR_Integer) 0))));
      MR_String ErrorMsg_13;

      ErrorMsg_13 = mercury__io__error_message_1_f_0(Error_12);
      mercury__io__write_string_4_p_0(DebugStream_6, (MR_String) "mercury_compile: ");
      mercury__io__write_string_4_p_0(DebugStream_6, ErrorMsg_13);
      mercury__io__write_string_4_p_0(DebugStream_6, (MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word DumpStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_10, (MR_Integer) 0))));
      MR_Word OptsMap_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_8, (MR_Integer) 0))));
      MR_Word Var_37;
      MR_Box conv0_STATE_VARIABLE_IO_24_24;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&make__options_file_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (make__options_file__dump_options_file_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (DumpStream_11));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, OptsMap_35, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
      mercury__io__close_output_3_p_0(DumpStream_11);
    }
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_module_options_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_33;

    make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_33);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_33));
  }
}

void MR_CALL 
make__options_file__lookup_mmc_module_options_4_p_0(
  MR_Word Variables_5,
  MR_Word ModuleName_6,
  MR_Word * Result_7,
  MR_Word * Specs_8)
{
  {
    MR_Word Var_9;
    MR_Word VariableTypesMaybeValues_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Box conv2_Specs_8;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__options_file__lookup_mmc_module_options_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Variables_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_16, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[64])), &VariableTypesMaybeValues_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_8);
    *Specs_8 = ((MR_Word) (conv2_Specs_8));
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[12]), VariableTypesMaybeValues_15);
    *Result_7 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18);
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_33;

    make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_33);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_33));
  }
}

void MR_CALL 
make__options_file__lookup_mmc_options_3_p_0(
  MR_Word Variables_4,
  MR_Word * Result_5,
  MR_Word * Specs_6)
{
  {
    MR_Word VariableTypesMaybeValues_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Box conv2_Specs_6;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (make__options_file__lookup_mmc_options_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Variables_4));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[64])), &VariableTypesMaybeValues_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_6);
    *Specs_6 = ((MR_Word) (conv2_Specs_6));
    Var_16 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[11]), VariableTypesMaybeValues_13);
    *Result_5 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16);
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_default_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_default_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_33;

    make__options_file__lookup_options_variable_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_33);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_33));
  }
}

void MR_CALL 
make__options_file__lookup_default_options_3_p_0(
  MR_Word Variables_4,
  MR_Word * Result_5,
  MR_Word * Specs_6)
{
  {
    MR_Word VariableTypesMaybeValues_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Box conv2_Specs_6;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (make__options_file__lookup_default_options_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Variables_4));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[0]), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[64])), &VariableTypesMaybeValues_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_6);
    *Specs_6 = ((MR_Word) (conv2_Specs_6));
    Var_16 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[1]), (MR_Word) (&make__options_file_scalar_common_2[10]), VariableTypesMaybeValues_13);
    *Result_5 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16);
  }
}

void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_3_p_0(
  MR_Word Variables_4,
  MR_Word * MaybeMerStdlibDir_5,
  MR_Word * Specs_6)
{
  {
    MR_Word MerStdlibDirResult_7;

    make__options_file__lookup_variable_words_3_p_0(Variables_4, (MR_String) "MERCURY_STDLIB_DIR", &MerStdlibDirResult_7);
    switch (MR_tag((MR_Word) MerStdlibDirResult_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMerStdlibDir_5 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[0]));
          *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MerStdlibDir_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MerStdlibDirResult_7, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMerStdlibDir_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MerStdlibDir_8));
          }
          *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MerStdlibDirResult_7, (MR_Integer) 0))));

          *MaybeMerStdlibDir_5 = (MR_Word) ((MR_Unsigned) 0U);
          *Specs_6 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_9);
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_main_target_2_p_0(
  MR_Word Variables_3,
  MR_Word * MaybeMainTarget_4)
{
  {
    MR_Word MainTargetResult_5;

    make__options_file__lookup_variable_words_3_p_0(Variables_3, (MR_String) "MAIN_TARGET", &MainTargetResult_5);
    switch (MR_tag((MR_Word) MainTargetResult_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeMainTarget_4 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[0]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word MainTarget_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MainTargetResult_5, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMainTarget_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainTarget_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MainTargetResult_5, (MR_Integer) 0))));
          MR_Word Var_9;

          Var_9 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_7);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMainTarget_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__read_args_file_6_p_0(
  MR_String OptionsFile_7,
  MR_Word * MaybeMCFlags_8,
  MR_Word * Specs_9,
  MR_Word * UndefSpecs_10)
{
  {
    MR_bool succeeded;
    MR_Word EnvVarMap_12;
    MR_Word Variables0_13;
    MR_Word Variables_14;
    MR_Word Specs0_15;
    MR_Word NoEnvVariables_16;
    MR_Word FlagsResult_17;
    MR_Word Var_27;
    MR_Word OptsMap_46;
    MR_Word Var_40;

    mercury__io__get_environment_var_map_3_p_0(&EnvVarMap_12);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_46);
    {
      Variables0_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Variables0_13, 0) = ((MR_Box) (OptsMap_46));
      MR_hl_field(MR_mktag(0), Variables0_13, 1) = ((MR_Box) (EnvVarMap_12));
    }
    make__options_file__read_named_options_file_7_p_0(OptionsFile_7, Variables0_13, &Variables_14, &Specs0_15, UndefSpecs_10);
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_14, (MR_Integer) 0))));
    {
      NoEnvVariables_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NoEnvVariables_16, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), NoEnvVariables_16, 1) = ((MR_Box) (Var_27));
    }
    make__options_file__lookup_variable_words_3_p_0(NoEnvVariables_16, (MR_String) "MCFLAGS", &FlagsResult_17);
    switch (MR_tag((MR_Word) FlagsResult_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMCFlags_8 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (Specs0_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (*UndefSpecs_10 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Specs_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &make__options_file_scalar_common_6[2])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Specs0_15));
            }
          else
            *Specs_9 = Specs0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MCFlags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FlagsResult_17, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMCFlags_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCFlags_18));
          }
          *Specs_9 = Specs0_15;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMErrorSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FlagsResult_17, (MR_Integer) 0))));
          MR_Word VarResultSpecs_22;

          *MaybeMCFlags_8 = (MR_Word) ((MR_Unsigned) 0U);
          VarResultSpecs_22 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMErrorSpecs_21);
          *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarResultSpecs_22, Specs0_15);
        }
        break;
    }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_3_p_0(
  MR_Word Variables_4,
  MR_String VarName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word OptsMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_4, (MR_Integer) 0))));
    MR_Word EnvMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_4, (MR_Integer) 1))));
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
      MR_Word RevWords_42;
      MR_Word MaybeError_43;
      MR_Word Words_44;

      Var_19 = mercury__string__to_char_list_1_f_0(EnvValue_9);
      make__options_file__split_into_words_loop_4_p_0(Var_19, (MR_Word) ((MR_Unsigned) 0U), &RevWords_42, &MaybeError_43);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_42, &Words_44);
      if ((MaybeError_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_44));
        }
      else
      {
        MR_String Msg_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_43, (MR_Integer) 0))));
        MR_Word Pieces_13;
        MR_Word ErrorSpec_14;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_35;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (VarName_5));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Msg_12));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[7])));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[91])));
          MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_22));
        }
        {
          ErrorSpec_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ErrorSpec_14, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_variable_words\'/3"));
          MR_hl_field(MR_mktag(2), ErrorSpec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), ErrorSpec_14, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(2), ErrorSpec_14, 3) = ((MR_Box) (Pieces_13));
        }
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ErrorSpec_14));
          MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_35));
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
        MR_Word Words_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MapValue_15, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_17));
        }
      }
      else
        *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void MR_CALL 
make__options_file__read_named_options_file_7_p_0(
  MR_String OptionsPathName_8,
  MR_Word STATE_VARIABLE_Variables_0_16,
  MR_Word * STATE_VARIABLE_Variables_17,
  MR_Word * Specs_10,
  MR_Word * UndefSpecs_11)
{
  {
    MR_Word IOSpecs_14;
    MR_Word ParseSpecs_15;

    make__options_file__read_options_file_params_14_p_0((MR_Word) (&make__options_file_scalar_common_1[6]), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, OptionsPathName_8, STATE_VARIABLE_Variables_0_16, STATE_VARIABLE_Variables_17, (MR_Word) ((MR_Unsigned) 0U), &IOSpecs_14, (MR_Word) ((MR_Unsigned) 0U), &ParseSpecs_15, (MR_Word) ((MR_Unsigned) 0U), UndefSpecs_11);
    *Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), IOSpecs_14, ParseSpecs_15);
  }
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
  {
    MR_bool succeeded = (strcmp(OptionsPathName_18, (MR_String) "-") == 0);

    if (succeeded)
    {
      MR_Word CheckResult_24;

      make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, (MR_String) "-", &CheckResult_24);
      if (((MR_tag((MR_Word) CheckResult_24)) == (MR_Integer) 1))
      {
        MR_Word CheckSpec_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckResult_24, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParseSpecs_55 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CheckSpec_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_54));
        }
        *STATE_VARIABLE_Variables_51 = STATE_VARIABLE_Variables_0_50;
        *STATE_VARIABLE_IOSpecs_53 = STATE_VARIABLE_IOSpecs_0_52;
        *STATE_VARIABLE_UndefSpecs_57 = STATE_VARIABLE_UndefSpecs_0_56;
      }
      else
      {
        MR_Word InclStack0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckResult_24, (MR_Integer) 0))));
        MR_Word Search_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 1))));
        MR_Word SubSearchInfo_30;
        MR_Word Var_66;
        MR_String Var_67;
        MR_Word Var_68;

        Var_67 = mercury__dir__this_directory_0_f_0();
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        }
        {
          SubSearchInfo_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubSearchInfo_30, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), SubSearchInfo_30, 1) = ((MR_Box) (Search_29));
        }
        Var_68 = mercury__io__stdin_stream_0_f_0();
        make__options_file__read_options_lines_15_p_0(SubSearchInfo_30, InclStack0_25, Var_68, (MR_String) "stdin", (MR_Integer) 1, STATE_VARIABLE_Variables_0_50, STATE_VARIABLE_Variables_51, STATE_VARIABLE_IOSpecs_0_52, STATE_VARIABLE_IOSpecs_53, STATE_VARIABLE_ParseSpecs_0_54, STATE_VARIABLE_ParseSpecs_55, STATE_VARIABLE_UndefSpecs_0_56, STATE_VARIABLE_UndefSpecs_57);
      }
    }
    else
    {
      MR_Word MaybeDirName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 0))));
      MR_Word SearchDirs_33;
      MR_String FileToFind_36;
      MR_Word Dirs_37;
      MR_Word MaybeDirAndStream_39;
      MR_Word Search_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 1))));
      MR_String OptionsDir_34;
      MR_String OptionsFile_35;

      if ((Search_183 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_92;

        Var_92 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_33, 0) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(1), SearchDirs_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        SearchDirs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Search_183, (MR_Integer) 0))));
      succeeded = mercury__dir__split_name_3_p_0(OptionsPathName_18, &OptionsDir_34, &OptionsFile_35);
      if (succeeded)
      {
        succeeded = mercury__dir__path_name_is_absolute_1_p_0(OptionsDir_34);
        if (succeeded)
        {
          FileToFind_36 = OptionsFile_35;
          {
            Dirs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_37, 0) = ((MR_Box) (OptionsDir_34));
            MR_hl_field(MR_mktag(1), Dirs_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        if ((MaybeDirName_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Dirs_37 = SearchDirs_33;
          FileToFind_36 = OptionsPathName_18;
        }
        else
        {
          MR_String DirName_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirName_32, (MR_Integer) 0))));
          MR_String Var_95;

          Var_95 = mercury__dir__f_slash_2_f_0(DirName_38, OptionsDir_34);
          {
            Dirs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_37, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Dirs_37, 1) = ((MR_Box) (SearchDirs_33));
          }
          FileToFind_36 = OptionsFile_35;
        }
      }
      else
      {
        Dirs_37 = SearchDirs_33;
        FileToFind_36 = OptionsPathName_18;
      }
      libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(Dirs_37, FileToFind_36, &MaybeDirAndStream_39);
      if (((MR_tag((MR_Word) MaybeDirAndStream_39)) == (MR_Integer) 1))
      {
        MR_String Error_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirAndStream_39, (MR_Integer) 0))));

        switch (IsOptionsFileOptional_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String ErrorFile_44;
              MR_Word MaybeContext_45;
              MR_Word Pieces_48;
              MR_Word Spec_49;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_String SingleDir_43;
              MR_Word Var_102;

              succeeded = (Dirs_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleDir_43 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dirs_37, (MR_Integer) 0))));
                Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_37, (MR_Integer) 1))));
                succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_String Var_186;

                Var_186 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(SingleDir_43, Var_186) == 0);
                if (succeeded)
                  ErrorFile_44 = FileToFind_36;
                else
                  ErrorFile_44 = mercury__dir__make_path_name_2_f_0(SingleDir_43, FileToFind_36);
              }
              else
                ErrorFile_44 = FileToFind_36;
              if ((PreStack0_16 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeContext_45 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Context_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PreStack0_16, (MR_Integer) 0))));

                {
                  MaybeContext_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeContext_45, 0) = ((MR_Box) (Context_46));
                }
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (ErrorFile_44));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Error_42));
              }
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
              }
              {
                Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[12])));
                MR_hl_field(MR_mktag(1), Pieces_48, 1) = ((MR_Box) (Var_105));
              }
              {
                Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Pieces_48));
              }
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MaybeContext_45));
                MR_hl_field(MR_mktag(3), Var_122, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_122, 3) = ((MR_Box) (Var_125));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.read_options_file_params\'/14"));
                MR_hl_field(MR_mktag(0), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_49, 3) = ((MR_Box) (Var_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_IOSpecs_53 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_49));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IOSpecs_0_52));
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
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirAndStream_39, (MR_Integer) 0))));
        MR_String Var_136;
        MR_Word CheckResult_172;

        FoundDir_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 0))));
        FoundStream_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 1))));
        Var_136 = mercury__dir__f_slash_2_f_0(FoundDir_40, FileToFind_36);
        make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, Var_136, &CheckResult_172);
        if (((MR_tag((MR_Word) CheckResult_172)) == (MR_Integer) 1))
        {
          MR_Word CheckSpec_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckResult_172, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_55 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CheckSpec_168));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_54));
          }
          *STATE_VARIABLE_Variables_51 = STATE_VARIABLE_Variables_0_50;
          *STATE_VARIABLE_IOSpecs_53 = STATE_VARIABLE_IOSpecs_0_52;
          *STATE_VARIABLE_UndefSpecs_57 = STATE_VARIABLE_UndefSpecs_0_56;
        }
        else
        {
          MR_Word Var_146;
          MR_Word InclStack0_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckResult_172, (MR_Integer) 0))));
          MR_Word SubSearchInfo_167;

          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (FoundDir_40));
          }
          {
            SubSearchInfo_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubSearchInfo_167, 0) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(0), SubSearchInfo_167, 1) = ((MR_Box) (Search_183));
          }
          make__options_file__read_options_lines_15_p_0(SubSearchInfo_167, InclStack0_166, FoundStream_41, FileToFind_36, (MR_Integer) 1, STATE_VARIABLE_Variables_0_50, STATE_VARIABLE_Variables_51, STATE_VARIABLE_IOSpecs_0_52, STATE_VARIABLE_IOSpecs_53, STATE_VARIABLE_ParseSpecs_0_54, STATE_VARIABLE_ParseSpecs_55, STATE_VARIABLE_UndefSpecs_0_56, STATE_VARIABLE_UndefSpecs_57);
        }
        mercury__io__close_input_3_p_0(FoundStream_41);
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Variables_51;
    MR_Word conv2_STATE_VARIABLE_IOSpecs_53;
    MR_Word conv1_STATE_VARIABLE_ParseSpecs_55;
    MR_Word conv0_STATE_VARIABLE_UndefSpecs_57;

    make__options_file__read_options_file_params_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Variables_51, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_IOSpecs_53, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ParseSpecs_55, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_UndefSpecs_57);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Variables_51));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_IOSpecs_53));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ParseSpecs_55));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_UndefSpecs_57));
  }
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

    // setup for model_det tailcalls optimized into a loop
    ;
    make__options_file__read_options_line_7_p_0(InStream_18, FileName_19, LineNumber0_20, &LineNumber1_26, &LineResult_27);
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
          MR_Word LineChars0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LineResult_27, (MR_Integer) 0))));
          MR_Integer LineNumber2_46;
          MR_Word STATE_VARIABLE_IOSpecs_66_66;
          MR_Word STATE_VARIABLE_Variables_70_70;
          MR_Word STATE_VARIABLE_ParseSpecs_71_71;
          MR_Word STATE_VARIABLE_UndefSpecs_72_72;
          MR_Integer next_value_of_LineNumber0_20;
          MR_Word next_value_of_STATE_VARIABLE_Variables_0_47;
          MR_Word next_value_of_STATE_VARIABLE_IOSpecs_0_49;
          MR_Word next_value_of_STATE_VARIABLE_ParseSpecs_0_51;
          MR_Word next_value_of_STATE_VARIABLE_UndefSpecs_0_53;

          if ((LineChars0_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_Variables_70_70 = STATE_VARIABLE_Variables_0_47;
            STATE_VARIABLE_IOSpecs_66_66 = STATE_VARIABLE_IOSpecs_0_49;
            STATE_VARIABLE_ParseSpecs_71_71 = STATE_VARIABLE_ParseSpecs_0_51;
            STATE_VARIABLE_UndefSpecs_72_72 = STATE_VARIABLE_UndefSpecs_0_53;
          }
          else
          {
            MR_Word MaybeOptionsFileLine_31;

            make__options_file__parse_options_line_4_p_0(FileName_19, LineNumber0_20, LineChars0_28, &MaybeOptionsFileLine_31);
            if (((MR_tag((MR_Word) MaybeOptionsFileLine_31)) == (MR_Integer) 1))
            {
              MR_Word ParseSpec_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptionsFileLine_31, (MR_Integer) 0))));

              {
                STATE_VARIABLE_ParseSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_71_71, 0) = ((MR_Box) (ParseSpec_45));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_51));
              }
              STATE_VARIABLE_Variables_70_70 = STATE_VARIABLE_Variables_0_47;
              STATE_VARIABLE_IOSpecs_66_66 = STATE_VARIABLE_IOSpecs_0_49;
              STATE_VARIABLE_UndefSpecs_72_72 = STATE_VARIABLE_UndefSpecs_0_53;
            }
            else
            {
              MR_Word OptionsFileLine_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionsFileLine_31, (MR_Integer) 0))));

              if (((MR_tag((MR_Word) OptionsFileLine_32)) == (MR_Integer) 1))
              {
                MR_Word IsOptionsFileOptional_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OptionsFileLine_32, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word IncludedFilesChars0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionsFileLine_32, (MR_Integer) 1))));
                MR_Word IncludedFilesChars_38;
                MR_Word MaybeIncludedFileNames_39;
                MR_Word STATE_VARIABLE_ParseSpecs_60_60;
                MR_Word STATE_VARIABLE_UndefSpecs_61_61;

                make__options_file__expand_any_var_references_11_p_0(STATE_VARIABLE_Variables_0_47, FileName_19, LineNumber0_20, IncludedFilesChars0_37, &IncludedFilesChars_38, STATE_VARIABLE_ParseSpecs_0_51, &STATE_VARIABLE_ParseSpecs_60_60, STATE_VARIABLE_UndefSpecs_0_53, &STATE_VARIABLE_UndefSpecs_61_61);
                MaybeIncludedFileNames_39 = make__options_file__split_into_words_1_f_0(IncludedFilesChars_38);
                if (((MR_tag((MR_Word) MaybeIncludedFileNames_39)) == (MR_Integer) 1))
                {
                  MR_String IncludeFileNamesError_43 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeIncludedFileNames_39, (MR_Integer) 0))));
                  MR_Word Spec_44;

                  Spec_44 = make__options_file__report_split_error_3_f_0(FileName_19, LineNumber0_20, IncludeFileNamesError_43);
                  {
                    STATE_VARIABLE_ParseSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_71_71, 0) = ((MR_Box) (Spec_44));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_60_60));
                  }
                  STATE_VARIABLE_Variables_70_70 = STATE_VARIABLE_Variables_0_47;
                  STATE_VARIABLE_IOSpecs_66_66 = STATE_VARIABLE_IOSpecs_0_49;
                  STATE_VARIABLE_UndefSpecs_72_72 = STATE_VARIABLE_UndefSpecs_61_61;
                }
                else
                {
                  MR_Word IncludedFileNames_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeIncludedFileNames_39, (MR_Integer) 0))));
                  MR_Word Context_41;
                  MR_Word PreStack1_42;
                  MR_Word Var_64;
                  MR_Box conv8_STATE_VARIABLE_Variables_70_70;
                  MR_Box conv7_STATE_VARIABLE_IOSpecs_66_66;
                  MR_Box conv6_STATE_VARIABLE_ParseSpecs_71_71;
                  MR_Box conv5_STATE_VARIABLE_UndefSpecs_72_72;
                  MR_Box conv4_STATE_VARIABLE_IO_73_73;

                  {
                    Context_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Context_41, 0) = ((MR_Box) (FileName_19));
                    MR_hl_field(MR_mktag(0), Context_41, 1) = ((MR_Box) (LineNumber0_20));
                  }
                  {
                    PreStack1_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), PreStack1_42, 0) = ((MR_Box) (Context_41));
                    MR_hl_field(MR_mktag(1), PreStack1_42, 1) = ((MR_Box) (InclStack0_17));
                  }
                  {
                    Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (make__options_file__read_options_lines_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (SearchInfo_16));
                    MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (PreStack1_42));
                    MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (IsOptionsFileOptional_36));
                  }
                  mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, IncludedFileNames_40, ((MR_Box) (STATE_VARIABLE_Variables_0_47)), &conv8_STATE_VARIABLE_Variables_70_70, ((MR_Box) (STATE_VARIABLE_IOSpecs_0_49)), &conv7_STATE_VARIABLE_IOSpecs_66_66, ((MR_Box) (STATE_VARIABLE_ParseSpecs_60_60)), &conv6_STATE_VARIABLE_ParseSpecs_71_71, ((MR_Box) (STATE_VARIABLE_UndefSpecs_61_61)), &conv5_STATE_VARIABLE_UndefSpecs_72_72, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_73_73);
                  STATE_VARIABLE_Variables_70_70 = ((MR_Word) (conv8_STATE_VARIABLE_Variables_70_70));
                  STATE_VARIABLE_IOSpecs_66_66 = ((MR_Word) (conv7_STATE_VARIABLE_IOSpecs_66_66));
                  STATE_VARIABLE_ParseSpecs_71_71 = ((MR_Word) (conv6_STATE_VARIABLE_ParseSpecs_71_71));
                  STATE_VARIABLE_UndefSpecs_72_72 = ((MR_Word) (conv5_STATE_VARIABLE_UndefSpecs_72_72));
                }
              }
              else
              {
                MR_Word SetOrAdd_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptionsFileLine_32, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String VarName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptionsFileLine_32, (MR_Integer) 1))));
                MR_Word Value_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionsFileLine_32, (MR_Integer) 2))));

                make__options_file__update_variable_13_p_0(FileName_19, LineNumber1_26, SetOrAdd_33, VarName_34, Value_35, STATE_VARIABLE_Variables_0_47, &STATE_VARIABLE_Variables_70_70, STATE_VARIABLE_ParseSpecs_0_51, &STATE_VARIABLE_ParseSpecs_71_71, STATE_VARIABLE_UndefSpecs_0_53, &STATE_VARIABLE_UndefSpecs_72_72);
                STATE_VARIABLE_IOSpecs_66_66 = STATE_VARIABLE_IOSpecs_0_49;
              }
            }
          }
          LineNumber2_46 = (MR_Integer) ((MR_Unsigned) LineNumber1_26 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_LineNumber0_20 = LineNumber2_46;
          next_value_of_STATE_VARIABLE_Variables_0_47 = STATE_VARIABLE_Variables_70_70;
          next_value_of_STATE_VARIABLE_IOSpecs_0_49 = STATE_VARIABLE_IOSpecs_66_66;
          next_value_of_STATE_VARIABLE_ParseSpecs_0_51 = STATE_VARIABLE_ParseSpecs_71_71;
          next_value_of_STATE_VARIABLE_UndefSpecs_0_53 = STATE_VARIABLE_UndefSpecs_72_72;
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
          MR_Word Spec_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineResult_27, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_IOSpecs_50 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_80));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IOSpecs_0_49));
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
  {
    MR_bool succeeded;
    MR_Word NewValue1_23;
    MR_Word MaybeWords1_24;
    MR_Word STATE_VARIABLE_ParseSpecs_51_51;

    make__options_file__expand_any_var_references_11_p_0(STATE_VARIABLE_Variables_0_43, FileName_14, LineNumber_15, NewValue0_18, &NewValue1_23, STATE_VARIABLE_ParseSpecs_0_45, &STATE_VARIABLE_ParseSpecs_51_51, STATE_VARIABLE_UndefSpecs_0_47, STATE_VARIABLE_UndefSpecs_48);
    MaybeWords1_24 = make__options_file__split_into_words_1_f_0(NewValue1_23);
    if (((MR_tag((MR_Word) MaybeWords1_24)) == (MR_Integer) 1))
    {
      MR_String WordsError1_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeWords1_24, (MR_Integer) 0))));
      MR_Word Spec_82;

      Spec_82 = make__options_file__report_split_error_3_f_0(FileName_14, LineNumber_15, WordsError1_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ParseSpecs_46 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_82));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_51_51));
      }
      *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
    }
    else
    {
      MR_Word Words1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeWords1_24, (MR_Integer) 0))));
      MR_Word OptsMap0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Variables_0_43, (MR_Integer) 0))));
      MR_Word EnvMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Variables_0_43, (MR_Integer) 1))));
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
        MR_Word MaybeWords_30;

        Value_29 = mercury__string__to_char_list_1_f_0(EnvValue_28);
        MaybeWords_30 = make__options_file__split_into_words_1_f_0(Value_29);
        if (((MR_tag((MR_Word) MaybeWords_30)) == (MR_Integer) 1))
        {
          MR_String WordsError_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeWords_30, (MR_Integer) 0))));
          MR_Word Spec_36;

          Spec_36 = make__options_file__report_split_error_3_f_0(FileName_14, LineNumber_15, WordsError_35);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_51_51));
          }
          *STATE_VARIABLE_Variables_44 = STATE_VARIABLE_Variables_0_43;
        }
        else
        {
          MR_Word Words_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeWords_30, (MR_Integer) 0))));
          MR_Word EnvValueChars_32;
          MR_Word Entry_33;
          MR_Word OptsMap_34;

          EnvValueChars_32 = mercury__string__to_char_list_1_f_0(EnvValue_28);
          {
            Entry_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_33, 0) = ((MR_Box) (EnvValueChars_32));
            MR_hl_field(MR_mktag(0), Entry_33, 1) = ((MR_Box) (Words_31));
            MR_hl_field(MR_mktag(0), Entry_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_33)), OptsMap0_26, &OptsMap_34);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Variables_44 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptsMap_34));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvMap_27));
          }
          *STATE_VARIABLE_ParseSpecs_46 = STATE_VARIABLE_ParseSpecs_51_51;
        }
      }
      else
      {
        MR_Word OldEntry_37;
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Variables_0_43, (MR_Integer) 0))));
        MR_Box conv1_OldEntry_37;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), Var_58, ((MR_Box) (VarName_17)), &conv1_OldEntry_37);
        if (succeeded)
        {
          OldEntry_37 = ((MR_Word) (conv1_OldEntry_37));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OldValue_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_37, (MR_Integer) 0))));
          MR_Word OldWords_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_37, (MR_Integer) 1))));
          MR_Word Source_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldEntry_37, (MR_Integer) 2))) & (MR_Integer) 3);

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
                      MR_Word Var_59;

                      {
                        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (NewValue1_23));
                      }
                      NewValue_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), OldValue_38, Var_59);
                      Words_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OldWords_39, Words1_25);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      NewValue_41 = NewValue1_23;
                      Words_65 = Words1_25;
                    }
                    break;
                }
                {
                  Entry_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Entry_66, 0) = ((MR_Box) (NewValue_41));
                  MR_hl_field(MR_mktag(0), Entry_66, 1) = ((MR_Box) (Words_65));
                  MR_hl_field(MR_mktag(0), Entry_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_66)), OptsMap0_26, &OptsMap_67);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Variables_44 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptsMap_67));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvMap_27));
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
            MR_hl_field(MR_mktag(0), Entry_74, 0) = ((MR_Box) (NewValue1_23));
            MR_hl_field(MR_mktag(0), Entry_74, 1) = ((MR_Box) (Words1_25));
            MR_hl_field(MR_mktag(0), Entry_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_74)), OptsMap0_26, &OptsMap_75);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Variables_44 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptsMap_75));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvMap_27));
          }
        }
        *STATE_VARIABLE_ParseSpecs_46 = STATE_VARIABLE_ParseSpecs_51_51;
      }
    }
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
  {
    MR_Word RevChars_20;
    MR_Word UndefVarNames_21;

    make__options_file__expand_any_var_references_loop_12_p_0(Variables_12, FileName_13, LineNumber_14, Chars0_15, (MR_Word) ((MR_Unsigned) 0U), &RevChars_20, STATE_VARIABLE_ParseSpecs_0_22, STATE_VARIABLE_ParseSpecs_23, (MR_Word) ((MR_Unsigned) 0U), &UndefVarNames_21);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_20, Chars_16);
    if ((UndefVarNames_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UndefSpecs_25 = STATE_VARIABLE_UndefSpecs_0_24;
    else
    {
      MR_Word UndefVarNames_42;
      MR_Word UndefVarNamesPieces_43;
      MR_String VarVars_45;
      MR_String IsAre_46;
      MR_Word Context_50;
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UndefVarNames_21, &UndefVarNames_42);
      UndefVarNamesPieces_43 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(UndefVarNames_42);
      if ((UndefVarNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.options_file.report_any_undefined_variables\'/5", (MR_String) "UndefVarNames = []");
          return;
        }
      else
      {
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UndefVarNames_42, (MR_Integer) 1))));

        if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarVars_45 = (MR_String) "variable";
          IsAre_46 = (MR_String) "is";
        }
        else
        {
          VarVars_45 = (MR_String) "variables";
          IsAre_46 = (MR_String) "are";
        }
      }
      Context_50 = mercury__term__context_init_2_f_0(FileName_13, LineNumber_14);
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (VarVars_45));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (UndefVarNamesPieces_43));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (IsAre_46));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[41])));
      }
      Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_57, Var_62);
      {
        Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.report_any_undefined_variables\'/5"));
        MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Context_50));
        MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UndefSpecs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UndefSpecs_0_24));
      }
    }
  }
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
      MR_Char Char_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Chars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));

      succeeded = (Char_31 == (MR_Char) 36);
      if (succeeded)
        if ((Chars_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_37;

          Spec_37 = make__options_file__report_unterminated_variable_reference_3_f_0(FileName_2, LineNumber_3, STATE_VARIABLE_RevChars_0_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
          }
          *STATE_VARIABLE_RevChars_6 = STATE_VARIABLE_RevChars_0_5;
          *STATE_VARIABLE_UndefVarNames_10 = STATE_VARIABLE_UndefVarNames_0_9;
        }
        else
        {
          MR_Char Char2_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars_32, (MR_Integer) 0)));
          MR_Word Chars1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars_32, (MR_Integer) 1))));

          succeeded = (Char2_38 == (MR_Char) 36);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_RevChars_61_61;
            MR_Word next_value_of_HeadVar__4_4;
            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_5;

            {
              STATE_VARIABLE_RevChars_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_61_61, 0) = ((MR_Box) (MR_Word) (Char2_38));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_5));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Chars1_39;
            next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_61_61;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_RevChars_0_5 = next_value_of_STATE_VARIABLE_RevChars_0_5;
            continue;
          }
          else
          {
            MR_Word Chars4_46;
            MR_Word STATE_VARIABLE_ParseSpecs_67_67;
            MR_Word STATE_VARIABLE_UndefVarNames_68_68;
            MR_Word STATE_VARIABLE_RevChars_69_69;
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
              MR_Word MaybeVarName0_42;

              make__options_file__parse_variable_name_5_p_0(FileName_2, LineNumber_3, Chars1_39, &Chars2_41, &MaybeVarName0_42);
              if (((MR_tag((MR_Word) MaybeVarName0_42)) == (MR_Integer) 1))
              {
                MR_Word ParseSpec_52;
                MR_Word Chars3_45;
                MR_Char Var_84;

                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 0)));
                  Chars3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_84);
                }
                if (succeeded)
                  Chars4_46 = Chars3_45;
                else
                  Chars4_46 = Chars2_41;
                ParseSpec_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarName0_42, (MR_Integer) 0))));
                {
                  STATE_VARIABLE_ParseSpecs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 0) = ((MR_Box) (ParseSpec_52));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
                }
                STATE_VARIABLE_RevChars_69_69 = STATE_VARIABLE_RevChars_0_5;
                STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
              }
              else
              {
                MR_Word Chars3_81;
                MR_Char Var_85;

                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_85 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 0)));
                  Chars3_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_85);
                }
                if (succeeded)
                {
                  MR_String VarName_50;
                  MR_Word VarValueChars_51;
                  MR_Word Var_70;

                  Chars4_46 = Chars3_81;
                  VarName_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeVarName0_42, (MR_Integer) 0))));
                  make__options_file__lookup_variable_value_5_p_0(Variables_1, VarName_50, &VarValueChars_51, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
                  Var_70 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_51);
                  STATE_VARIABLE_RevChars_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_70, STATE_VARIABLE_RevChars_0_5);
                  STATE_VARIABLE_ParseSpecs_67_67 = STATE_VARIABLE_ParseSpecs_0_7;
                }
                else
                {
                  MR_Word ParseSpec_92;

                  Chars4_46 = Chars2_41;
                  ParseSpec_92 = make__options_file__report_unterminated_variable_reference_3_f_0(FileName_2, LineNumber_3, STATE_VARIABLE_RevChars_0_5);
                  {
                    STATE_VARIABLE_ParseSpecs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 0) = ((MR_Box) (ParseSpec_92));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
                  }
                  STATE_VARIABLE_RevChars_69_69 = STATE_VARIABLE_RevChars_0_5;
                  STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
                }
              }
            }
            else
            {
              MR_String VarName_88;
              MR_Word VarValueChars_89;
              MR_Word Var_90;

              Chars4_46 = Chars1_39;
              VarName_88 = mercury__string__char_to_string_1_f_0(Char2_38);
              make__options_file__lookup_variable_value_5_p_0(Variables_1, VarName_88, &VarValueChars_89, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
              Var_90 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_89);
              STATE_VARIABLE_RevChars_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_90, STATE_VARIABLE_RevChars_0_5);
              STATE_VARIABLE_ParseSpecs_67_67 = STATE_VARIABLE_ParseSpecs_0_7;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Chars4_46;
            next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_69_69;
            next_value_of_STATE_VARIABLE_ParseSpecs_0_7 = STATE_VARIABLE_ParseSpecs_67_67;
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
          STATE_VARIABLE_RevChars_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_76_76, 0) = ((MR_Box) (MR_Word) (Char_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_76_76, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_5));
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
  {
    MR_bool succeeded;
    MR_Word OptsMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_6, (MR_Integer) 0))));
    MR_Word EnvMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variables_6, (MR_Integer) 1))));
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
        *ValueChars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_13, (MR_Integer) 0))));
        *STATE_VARIABLE_UndefVarNames_17 = STATE_VARIABLE_UndefVarNames_0_16;
      }
      else
      {
        *ValueChars_8 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_UndefVarNames_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarName_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UndefVarNames_0_16));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
make__options_file__report_unterminated_variable_reference_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word RevChars_7)
{
  {
    MR_Word Spec_8;
    MR_Word Context_9;
    MR_Word Pieces_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_String Var_15;

    Context_9 = mercury__term__context_init_2_f_0(FileName_5, LineNumber_6);
    Var_15 = mercury__string__from_rev_char_list_1_f_0(RevChars_7);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_unterminated_variable_reference\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_10));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
make__options_file__split_into_words_1_f_0(
  MR_Word Chars_3)
{
  {
    MR_Word Result_4;
    MR_Word RevWords_5;
    MR_Word MaybeError_6;
    MR_Word Words_7;

    make__options_file__split_into_words_loop_4_p_0(Chars_3, (MR_Word) ((MR_Unsigned) 0U), &RevWords_5, &MaybeError_6);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_5, &Words_7);
    if ((MaybeError_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Result_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_4, 0) = ((MR_Box) (Words_7));
      }
    else
    {
      MR_String Msg_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_6, (MR_Integer) 0))));

      {
        Result_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result_4, 0) = ((MR_Box) (Msg_8));
      }
    }
    return Result_4;
  }
}

static MR_bool MR_CALL 
make__options_file__split_into_words_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
      MR_Word RevWord_26;

      make__options_file__get_word_acc_5_p_0(Chars1_8, &Chars_11, (MR_Word) ((MR_Unsigned) 0U), &RevWord_26, &MaybeError0_13);
      Word_12 = mercury__string__from_rev_char_list_1_f_0(RevWord_26);
      if ((MaybeError0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevWords_18_18;
        MR_Word next_value_of_Chars0_5;
        MR_Word next_value_of_STATE_VARIABLE_RevWords_0_15;

        {
          STATE_VARIABLE_RevWords_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWords_18_18, 0) = ((MR_Box) (Word_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWords_18_18, 1) = ((MR_Box) (STATE_VARIABLE_RevWords_0_15));
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
      MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *RevWord_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_7));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__3_3));
              }
              *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Char Char2_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_8, (MR_Integer) 0)));
              MR_Word RevWord1_18;
              MR_Word Chars1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars0_8, (MR_Integer) 1))));
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
                  RevWord1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RevWord1_18, 0) = ((MR_Box) (MR_Word) (Char2_17));
                  MR_hl_field(MR_mktag(1), RevWord1_18, 1) = ((MR_Box) (HeadVar__3_3));
                }
              else
              {
                MR_Word Var_21;

                {
                  Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_Word) (Char_7));
                  MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (HeadVar__3_3));
                }
                {
                  RevWord1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RevWord1_18, 0) = ((MR_Box) (MR_Word) (Char2_17));
                  MR_hl_field(MR_mktag(1), RevWord1_18, 1) = ((MR_Box) (Var_21));
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
              Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_Word) (Char_7));
              MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (HeadVar__3_3));
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
      *MaybeError_5 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[1]));
    }
    else
    {
      MR_Char Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

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
            *MaybeError_5 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[1]));
          }
          else
          {
            MR_Char Char2_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_10, (MR_Integer) 0)));
            MR_Word Chars1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars0_10, (MR_Integer) 1))));
            MR_Word RevString1_17;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_RevString0_3;

            succeeded = (Char2_15 == (MR_Char) 34);
            if (succeeded)
              {
                RevString1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevString1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(MR_mktag(1), RevString1_17, 1) = ((MR_Box) (RevString0_3));
              }
            else
            {
              MR_Word Var_19;

              {
                Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_Word) (Char_9));
                MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RevString0_3));
              }
              {
                RevString1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevString1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(MR_mktag(1), RevString1_17, 1) = ((MR_Box) (Var_19));
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
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_Word) (Char_9));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevString0_3));
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
make__options_file__parse_options_line_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__parse_options_line_4_p_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word Line0_7,
  MR_Word * MaybeOptionsFileLine_8)
{
  {
    MR_bool succeeded = (Line0_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word IsOptionsFileOptional_10;
    MR_Word AfterInclude0_12;
    MR_Word Line2_11;
    MR_Word Var_23;
    MR_Word Line1_9;
    MR_Char Var_22;

    if (succeeded)
    {
      Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line0_7, (MR_Integer) 0)));
      Line1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Line0_7, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Char) 45);
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
    Var_23 = mercury__string__to_char_list_1_f_0((MR_String) "include");
    succeeded = mercury__list__append_3_p_3((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_23, &AfterInclude0_12, Line2_11);
    if (succeeded)
    {
      MR_Word AfterInclude_13;
      MR_Word Var_26;

      mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[6]), AfterInclude0_12, &AfterInclude_13);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = (MR_Box) ((MR_Unsigned) (IsOptionsFileOptional_10));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (AfterInclude_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOptionsFileLine_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_Word MaybeVarName_14;
      MR_Word Line1_73;

      make__options_file__parse_variable_name_5_p_0(FileName_5, LineNumber_6, Line0_7, &Line1_73, &MaybeVarName_14);
      if (((MR_tag((MR_Word) MaybeVarName_14)) == (MR_Integer) 1))
      {
        MR_Word Spec_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarName_14, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOptionsFileLine_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
        }
      }
      else
      {
        MR_String VarName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeVarName_14, (MR_Integer) 0))));
        MR_Word Line2_70;
        MR_Word Line3_17;
        MR_Word SetOrAdd_18;
        MR_Word Var_83;
        MR_Char Var_84;

        mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[7]), Line1_73, &Line2_70);
        succeeded = (Line2_70 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line2_70, (MR_Integer) 0)));
          Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Line2_70, (MR_Integer) 1))));
          switch (Var_84) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Char) 43:
              {
                MR_Char Var_30;

                succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0)));
                  Line3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
                  succeeded = (Var_30 == (MR_Char) 61);
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
                MR_Char Var_33;

                succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0)));
                  Line3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
                  succeeded = (Var_33 == (MR_Char) 61);
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
                Line3_17 = Var_83;
                SetOrAdd_18 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        if (succeeded)
        {
          MR_Word VarValue_19;
          MR_Word Var_36;

          mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_2[8]), Line3_17, &VarValue_19);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = (MR_Box) ((MR_Unsigned) (SetOrAdd_18));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (VarName_16));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (VarValue_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeOptionsFileLine_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
          }
        }
        else
        {
          MR_Word Context_20;
          MR_Word Pieces_21;
          MR_Word Var_39;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Spec_68;

          {
            Context_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Context_20, 0) = ((MR_Box) (FileName_5));
            MR_hl_field(MR_mktag(0), Context_20, 1) = ((MR_Box) (LineNumber_6));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (VarName_16));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[36])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[35])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[34])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[33])));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[31])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[30])));
            MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_39));
          }
          {
            Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_options_line\'/4"));
            MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_68, 3) = ((MR_Box) (Context_20));
            MR_hl_field(MR_mktag(1), Spec_68, 4) = ((MR_Box) (Pieces_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeOptionsFileLine_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_68));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file__parse_variable_name_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__parse_variable_name__863__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_variable_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__parse_variable_name_5_p_0(
  MR_String FileName_6,
  MR_Integer LineNumber_7,
  MR_Word Chars0_8,
  MR_Word * Chars_9,
  MR_Word * MaybeVarName_10)
{
  {
    MR_bool succeeded;
    MR_Word RevVarNameChars_11;
    MR_String VarName_12;

    make__options_file__do_parse_variable_name_5_p_0(Chars0_8, Chars_9, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevVarNameChars_11);
    mercury__string__from_rev_char_list_2_p_0(RevVarNameChars_11, &VarName_12);
    succeeded = (strcmp(VarName_12, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word FirstWordChars_13;
      MR_Word Pieces_14;
      MR_Word Context_15;
      MR_Word Spec_16;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_25;

      mercury__list__take_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_6[1]), *Chars_9, &FirstWordChars_13);
      Var_25 = mercury__string__from_char_list_1_f_0(FirstWordChars_13);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_23));
      }
      {
        Context_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Context_15, 0) = ((MR_Box) (FileName_6));
        MR_hl_field(MR_mktag(0), Context_15, 1) = ((MR_Box) (LineNumber_7));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_variable_name\'/5"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVarName_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarName_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_12));
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
      MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

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
          STATE_VARIABLE_RevVarNameChars_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarNameChars_17_17, 0) = ((MR_Box) (MR_Word) (Char_10));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarNameChars_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevVarNameChars_0_4));
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

static MR_Word MR_CALL 
make__options_file__report_split_error_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_String Msg_7)
{
  {
    MR_Word Spec_8;
    MR_Word Context_9;
    MR_Word Pieces_10;
    MR_Word Var_13;
    MR_Word Var_14;

    Context_9 = mercury__term__context_init_2_f_0(FileName_5, LineNumber_6);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Msg_7));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[29])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_split_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_10));
    }
    return Spec_8;
  }
}

static void MR_CALL 
make__options_file__read_options_line_7_p_0(
  MR_Word InStream_8,
  MR_String FileName_9,
  MR_Integer STATE_VARIABLE_LineNumber_0_16,
  MR_Integer * STATE_VARIABLE_LineNumber_17,
  MR_Word * Result_11)
{
  {
    MR_Word SpaceResult_13;

    mercury__io__ignore_whitespace_4_p_0(InStream_8, &SpaceResult_13);
    switch (MR_tag((MR_Word) SpaceResult_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SpaceResult_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__options_file__read_options_line_loop_8_p_0(InStream_8, FileName_9, STATE_VARIABLE_LineNumber_0_16, STATE_VARIABLE_LineNumber_17, (MR_Word) ((MR_Unsigned) 0U), Result_11);
            break;
          case (MR_Integer) 1:
            {
              *Result_11 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_LineNumber_17 = STATE_VARIABLE_LineNumber_0_16;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpaceResult_13, (MR_Integer) 0))));
          MR_Word Spec_15;
          MR_Word Context_28;
          MR_String Msg_29;
          MR_Word Pieces_30;
          MR_Word Var_33;
          MR_Word Var_34;

          {
            Context_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Context_28, 0) = ((MR_Box) (FileName_9));
            MR_hl_field(MR_mktag(0), Context_28, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_16));
          }
          Msg_29 = mercury__io__error_message_1_f_0(Error_14);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Msg_29));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
          }
          {
            Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Context_28));
            MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Spec_15));
          }
          *STATE_VARIABLE_LineNumber_17 = STATE_VARIABLE_LineNumber_0_16;
        }
        break;
    }
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
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_13 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars_17));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Error_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SkipResult_18, (MR_Integer) 0))));
                      MR_Word Spec_20;

                      Spec_20 = make__options_file__io_error_to_parse_error_3_f_0(FileName_10, STATE_VARIABLE_LineNumber_0_27, Error_19);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Result_13 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Spec_20));
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
                            MR_Integer STATE_VARIABLE_LineNumber_43_43;
                            MR_Word STATE_VARIABLE_RevChars_45_45;
                            MR_Integer next_value_of_STATE_VARIABLE_LineNumber_0_27;
                            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_29;

                            succeeded = (Char2_22 == (MR_Char) 10);
                            if (succeeded)
                            {
                              STATE_VARIABLE_LineNumber_43_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LineNumber_0_27 + (MR_Unsigned) 1);
                              {
                                STATE_VARIABLE_RevChars_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_45, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                              }
                            }
                            else
                            {
                              MR_Word Var_48;

                              {
                                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_Word) (Char_16));
                                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                              }
                              {
                                STATE_VARIABLE_RevChars_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_45, 0) = ((MR_Box) (MR_Word) (Char2_22));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_45, 1) = ((MR_Box) (Var_48));
                              }
                              STATE_VARIABLE_LineNumber_43_43 = STATE_VARIABLE_LineNumber_0_27;
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_STATE_VARIABLE_LineNumber_0_27 = STATE_VARIABLE_LineNumber_43_43;
                            next_value_of_STATE_VARIABLE_RevChars_0_29 = STATE_VARIABLE_RevChars_45_45;
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
                              MR_hl_field(MR_mktag(0), Context_23, 0) = ((MR_Box) (FileName_10));
                              MR_hl_field(MR_mktag(0), Context_23, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
                            }
                            {
                              Spec_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.read_options_line_loop\'/8"));
                              MR_hl_field(MR_mktag(1), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(1), Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                              MR_hl_field(MR_mktag(1), Spec_54, 3) = ((MR_Box) (Context_23));
                              MR_hl_field(MR_mktag(1), Spec_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[27])));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *Result_13 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Spec_54));
                            }
                            *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Error_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharResult2_21, (MR_Integer) 0))));
                        MR_Word Spec_56;

                        Spec_56 = make__options_file__io_error_to_parse_error_3_f_0(FileName_10, STATE_VARIABLE_LineNumber_0_27, Error_55);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *Result_13 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Spec_56));
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
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_13 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars_61));
                    }
                    *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_RevChars_45_62;
                    MR_Word next_value_of_STATE_VARIABLE_RevChars_0_29;

                    {
                      STATE_VARIABLE_RevChars_45_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_62, 0) = ((MR_Box) (MR_Word) (Char_16));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_45_62, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_29));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_RevChars_0_29 = STATE_VARIABLE_RevChars_45_62;
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
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_13 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars_68));
                }
              }
              *STATE_VARIABLE_LineNumber_28 = STATE_VARIABLE_LineNumber_0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharResult_15, (MR_Integer) 0))));
          MR_Word Spec_72;
          MR_Word Context_80;
          MR_String Msg_81;
          MR_Word Pieces_82;
          MR_Word Var_85;
          MR_Word Var_86;

          {
            Context_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Context_80, 0) = ((MR_Box) (FileName_10));
            MR_hl_field(MR_mktag(0), Context_80, 1) = ((MR_Box) (STATE_VARIABLE_LineNumber_0_27));
          }
          Msg_81 = mercury__io__error_message_1_f_0(Error_71);
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Msg_81));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
          }
          {
            Pieces_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Pieces_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_72, 3) = ((MR_Box) (Context_80));
            MR_hl_field(MR_mktag(1), Spec_72, 4) = ((MR_Box) (Pieces_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_13 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Spec_72));
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

static MR_Word MR_CALL 
make__options_file__io_error_to_parse_error_3_f_0(
  MR_String FileName_5,
  MR_Integer LineNumber_6,
  MR_Word Error_7)
{
  {
    MR_Word Spec_8;
    MR_Word Context_9;
    MR_String Msg_10;
    MR_Word Pieces_11;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Context_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Context_9, 0) = ((MR_Box) (FileName_5));
      MR_hl_field(MR_mktag(0), Context_9, 1) = ((MR_Box) (LineNumber_6));
    }
    Msg_10 = mercury__io__error_message_1_f_0(Error_7);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Msg_10));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[15])));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[28])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_11));
    }
    return Spec_8;
  }
}

static void MR_CALL 
make__options_file__check_include_for_infinite_recursion_3_p_0(
  MR_Word PreStack0_4,
  MR_String PathName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

    if ((PreStack0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word InclStack_7;

      {
        InclStack_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InclStack_7, 0) = ((MR_Box) (PathName_5));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InclStack_7));
      }
    }
    else
    {
      MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PreStack0_4, (MR_Integer) 0))));
      MR_Word InclStack0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PreStack0_4, (MR_Integer) 1))));
      MR_Word Spec_10;

      succeeded = make__options_file__pathname_occurs_in_incl_stack_4_p_0(InclStack0_9, PathName_5, Context_8, &Spec_10);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
        }
      else
      {
        MR_Word InclStack_11;

        {
          InclStack_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), InclStack_11, 0) = ((MR_Box) (PathName_5));
          MR_hl_field(MR_mktag(1), InclStack_11, 1) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(1), InclStack_11, 2) = ((MR_Box) (InclStack0_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InclStack_11));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Msg_5;

    conv1_Msg_5 = make__options_file__include_context_msg_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Msg_5));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__pathname_occurs_in_incl_stack_4_p_0(
  MR_Word InclStack0_5,
  MR_String PathName_6,
  MR_Word Context_7,
  MR_Word * Spec_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) InclStack0_5)) == (MR_Integer) 0))
    {
      MR_String StackPathName0_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), InclStack0_5, (MR_Integer) 0))));
      MR_Word Pieces_10;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_String Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      succeeded = (strcmp(PathName_6, StackPathName0_9) == 0);
      if (succeeded)
      {
        Var_59 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[16]));
        Var_63 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[18]));
        Var_69 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
        Var_70 = (MR_Word) ((MR_Unsigned) 0U);
        Var_71 = (MR_Word) ((MR_Unsigned) 12U);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (PathName_6));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
        }
        {
          Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_10));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Context0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 1))));
      MR_Word InclStack1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 2))));
      MR_String StackPathName0_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 0))));

      succeeded = (strcmp(PathName_6, StackPathName0_74) == 0);
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Pieces_72;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (PathName_6));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[18])));
        }
        {
          Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[16])));
          MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_72));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_76_76;
        MR_Word TypeCtorInfo_77_77;
        MR_Word TopDownIncludes_13;
        MR_String TopPathName_14;
        MR_Word TopContext_15;
        MR_Word MainPieces_16;
        MR_Word MainMsg_17;
        MR_Word InclMsgs_18;
        MR_Word LastMsg_19;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_50;
        MR_String Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Pieces_83;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Box conv0_Var_36;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (StackPathName0_74));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Context0_11));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = make__options_file__pathname_occurs_in_incl_stack_2_4_p_0(InclStack1_12, PathName_6, Var_33, &TopDownIncludes_13);
        if (succeeded)
        {
          TypeInfo_76_76 = (MR_Word) (&make__options_file_scalar_common_2[0]);
          conv0_Var_36 = mercury__list__det_head_1_f_0(TypeInfo_76_76, TopDownIncludes_13);
          Var_36 = ((MR_Word) (conv0_Var_36));
          TopPathName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
          TopContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
          Var_37 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[16]));
          Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[22]));
          TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
          Var_50 = (MR_Word) (&make__options_file_scalar_common_2[4]);
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (TopPathName_14));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MainPieces_16, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), MainPieces_16, 1) = ((MR_Box) (Var_39));
          }
          {
            MainMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MainMsg_17, 0) = ((MR_Box) (TopContext_15));
            MR_hl_field(MR_mktag(0), MainMsg_17, 1) = ((MR_Box) (MainPieces_16));
          }
          InclMsgs_18 = mercury__list__map_2_f_0(TypeInfo_76_76, TypeCtorInfo_77_77, Var_50, TopDownIncludes_13);
          Var_84 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_1[23]));
          Var_88 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_1[25]));
          Var_52 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
          Var_53 = (MR_Word) ((MR_Unsigned) 0U);
          Var_54 = (MR_Word) ((MR_Unsigned) 12U);
          Var_58 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (PathName_6));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
          }
          {
            Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Pieces_83, 1) = ((MR_Box) (Var_86));
          }
          {
            LastMsg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LastMsg_19, 0) = ((MR_Box) (Context_7));
            MR_hl_field(MR_mktag(0), LastMsg_19, 1) = ((MR_Box) (Pieces_83));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MainMsg_17));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (InclMsgs_18));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (LastMsg_19));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
          }
          Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_77_77, Var_56, Var_57);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *Spec_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
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
      MR_String StackPathName0_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), InclStack0_5, (MR_Integer) 0))));

      succeeded = (strcmp(PathName_6, StackPathName0_8) == 0);
      if (succeeded)
      {
        *STATE_VARIABLE_TopDownIncludes_12 = STATE_VARIABLE_TopDownIncludes_0_11;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Context0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 1))));
      MR_Word InclStack1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_TopDownIncludes_13_13;
      MR_Word Var_14;
      MR_String StackPathName0_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), InclStack0_5, (MR_Integer) 0))));

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (StackPathName0_16));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Context0_9));
      }
      {
        STATE_VARIABLE_TopDownIncludes_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TopDownIncludes_13_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TopDownIncludes_13_13, 1) = ((MR_Box) (STATE_VARIABLE_TopDownIncludes_0_11));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Variables_25;
    MR_Word conv2_STATE_VARIABLE_IOSpecs_27;
    MR_Word conv1_STATE_VARIABLE_ParseSpecs_29;
    MR_Word conv0_STATE_VARIABLE_UndefSpecs_31;

    make__options_file__read_options_file_set_params_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Variables_25, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_IOSpecs_27, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ParseSpecs_29, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_UndefSpecs_31);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Variables_25));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_IOSpecs_27));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ParseSpecs_29));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_UndefSpecs_31));
  }
}

void MR_CALL 
make__options_file__read_options_files_named_in_options_file_option_7_p_0(
  MR_Word OptionSearchDirs_8,
  MR_Word OptionsFiles_9,
  MR_Word * Variables_10,
  MR_Word * Specs_11,
  MR_Word * UndefSpecs_12)
{
  {
    MR_Word EnvVarMap_14;
    MR_Word Variables0_15;
    MR_Word IOSpecs_16;
    MR_Word ParseSpecs_17;
    MR_Word Var_21;
    MR_Word OptsMap_44;
    MR_Box conv8_Variables_10;
    MR_Box conv7_IOSpecs_16;
    MR_Box conv6_ParseSpecs_17;
    MR_Box conv5_UndefSpecs_12;
    MR_Box conv4_STATE_VARIABLE_IO_19;

    mercury__io__get_environment_var_map_3_p_0(&EnvVarMap_14);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_44);
    {
      Variables0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Variables0_15, 0) = ((MR_Box) (OptsMap_44));
      MR_hl_field(MR_mktag(0), Variables0_15, 1) = ((MR_Box) (EnvVarMap_14));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__options_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__options_file__read_options_files_named_in_options_file_option_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (OptionSearchDirs_8));
    }
    mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, OptionsFiles_9, ((MR_Box) (Variables0_15)), &conv8_Variables_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_IOSpecs_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_ParseSpecs_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_UndefSpecs_12, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_19);
    *Variables_10 = ((MR_Word) (conv8_Variables_10));
    IOSpecs_16 = ((MR_Word) (conv7_IOSpecs_16));
    ParseSpecs_17 = ((MR_Word) (conv6_ParseSpecs_17));
    *UndefSpecs_12 = ((MR_Word) (conv5_UndefSpecs_12));
    *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), IOSpecs_16, ParseSpecs_17);
  }
}

MR_Word MR_CALL 
make__options_file__options_variables_init_1_f_0(
  MR_Word EnvVarMap_3)
{
  {
    MR_Word Variables_4;
    MR_Word OptsMap_5;

    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), &OptsMap_5);
    {
      Variables_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Variables_4, 0) = ((MR_Box) (OptsMap_5));
      MR_hl_field(MR_mktag(0), Variables_4, 1) = ((MR_Box) (EnvVarMap_3));
    }
    return Variables_4;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____found_options_file_error_0_0();
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____found_options_file_error_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____incl_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____incl_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____include_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____include_check_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____include_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____include_check_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____is_options_file_optional_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____is_options_file_optional_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____is_options_file_optional_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____is_options_file_optional_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____maybe_is_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____maybe_is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____maybe_is_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____maybe_options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____maybe_options_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____maybe_options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____maybe_options_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____mmc_option_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____mmc_option_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____opt_var_or_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____opt_var_or_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____opt_var_or_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____opt_var_or_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_variable_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_variable_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_variable_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_variable_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_variable_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_variable_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_variable_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_variable_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____options_variables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____options_variables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____parse_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____parse_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____pre_incl_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____pre_incl_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____pre_incl_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____pre_incl_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____search_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____search_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____set_or_add_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____set_or_add_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____set_or_add_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____set_or_add_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____variable_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____variable_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____variable_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____variable_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_search_0);
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
