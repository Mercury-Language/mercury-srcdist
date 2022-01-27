/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2021-05-04
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
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0;

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
make__options_file__IntroducedFrom__pred__lookup_options_variable__1497__1_1_p_0(
  MR_String LambdaHeadVar__1_54);

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable_name__837__1_2_p_0(
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

static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static void MR_CALL 
make__options_file__write_options_variable_value_5_p_0(
  MR_Word DumpStream_6,
  MR_String VarName_7,
  MR_Word OptVarValue_8);

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_options_variable_8_p_0(
  MR_Word Variables_9,
  MR_Word OptionsVariableClass_10,
  MR_Word FlagsVar_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word ResultA_4,
  MR_Word ResultB_5);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
make__options_file__dump_options_file_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__options_file__lookup_default_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_default_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__options_file__lookup_variable_in_env_and_db_5_p_0(
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * Result_8);

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_value_4_p_0(
  MR_Word MaybeEnvValue_5,
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * Result_8);

static void MR_CALL 
make__options_file__read_options_file_params_14_p_0(
  MR_Word SearchInfo_15,
  MR_Word PreStack0_16,
  MR_Word IsOptionsFileOptional_17,
  MR_String OptionsPathName_18,
  MR_Word STATE_VARIABLE_Variables_0_48,
  MR_Word * STATE_VARIABLE_Variables_49,
  MR_Word STATE_VARIABLE_IOSpecs_0_50,
  MR_Word * STATE_VARIABLE_IOSpecs_51,
  MR_Word STATE_VARIABLE_ParseSpecs_0_52,
  MR_Word * STATE_VARIABLE_ParseSpecs_53,
  MR_Word STATE_VARIABLE_UndefSpecs_0_54,
  MR_Word * STATE_VARIABLE_UndefSpecs_55);

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
  MR_Word STATE_VARIABLE_Variables_0_41,
  MR_Word * STATE_VARIABLE_Variables_42,
  MR_Word STATE_VARIABLE_ParseSpecs_0_43,
  MR_Word * STATE_VARIABLE_ParseSpecs_44,
  MR_Word STATE_VARIABLE_UndefSpecs_0_45,
  MR_Word * STATE_VARIABLE_UndefSpecs_46);

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
make__options_file__lookup_variable_value_7_p_0(
  MR_Word Variables_8,
  MR_String VarName_9,
  MR_Word * Value_10,
  MR_Word STATE_VARIABLE_UndefVarNames_0_19,
  MR_Word * STATE_VARIABLE_UndefVarNames_20);

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


static /* final */ const MR_Box make__options_file_scalar_common_1[14][3];

static /* final */ const MR_Box make__options_file_scalar_common_2[77][2];

static /* final */ const MR_Box make__options_file_scalar_common_3[4][1];

static /* final */ const MR_Box make__options_file_scalar_common_4[23][4];

static /* final */ const MR_Box make__options_file_scalar_common_5[1][15];

static /* final */ const MR_Box make__options_file_scalar_common_6[4][5];

static /* final */ const MR_Box make__options_file_scalar_common_7[1][17];

static /* final */ const MR_Box make__options_file_scalar_common_8[1][11];

static /* final */ const MR_Box make__options_file_scalar_common_9[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_10[1][6];


/* sealed */ struct make__options_file__vector_common_type_11_0_s {
  const MR_String make__options_file__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_11_0_s make__options_file_vector_common_11[23];



static /* final */ const MR_Box make__options_file_scalar_common_1[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__pathname_occurs_in_incl_stack_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__parse_variable_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__parse_options_line_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__split_into_words_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_default_options_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_mmc_options_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_mmc_module_options_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[22])),
    ((MR_Box) (make__options_file__lookup_options_variable_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[3])),
    ((MR_Box) (make__options_file__lookup_options_variable_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_2[77][2] = {
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
    ((MR_Box) (&make__options_file_scalar_common_2[1]))
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments file does not set MCFLAGS."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mercury_compile: internal error:"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &make__options_file_scalar_common_4[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "includes itself."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the following chain of include directives."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "indirectly includes itself through"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attempt to escape end-of-file."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "--no-libgrade")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[50]))),
    ((MR_Box) ((MR_String) "--libgrade"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "--no-lib-linkage")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[52]))),
    ((MR_Box) ((MR_String) "--lib-linkage"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: options file"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The include directive for"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "I/O error:"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected variable name before"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "+="))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "after"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unterminated reference to a variable after"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot open options file"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "options, found"))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[10])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "unterminated string"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_4[23][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[11])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "predicate \140make.options_file.read_args_file\'/6")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[12])))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[1])),
    ((MR_Box) (make__options_file__parse_variable_name_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--erlang-flag"))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_18)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__options_file_scalar_common_10[0])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
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

static /* final */ const MR_Box make__options_file_scalar_common_6[4][5] = {
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
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
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

static /* final */ const MR_Box make__options_file_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_class_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box make__options_file_scalar_common_10[1][6] = {
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


static /* final */ const struct make__options_file__vector_common_type_11_0_s make__options_file_vector_common_11[23] = {
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
#include "version_array.mh"
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0)
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

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variables_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variables_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variables",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
make__options_file__IntroducedFrom__pred__lookup_options_variable__1497__1_1_p_0(
  MR_String LambdaHeadVar__1_54)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__prefix_2_p_0(LambdaHeadVar__1_54, (MR_String) "-l");
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(
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
make__options_file__IntroducedFrom__pred__parse_variable_name__837__1_2_p_0(
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

                  mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Var_20)), ((MR_Box) (ArgY1_15)));
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
              TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_2[5]);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
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
        TypeInfo_9_9 = (MR_Word) (&make__options_file_scalar_common_2[1]);
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
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
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

      mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

MR_bool MR_CALL 
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&make__options_file_scalar_common_2[1]);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[1]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
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
        TypeInfo_11_11 = (MR_Word) (&make__options_file_scalar_common_2[1]);
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
          mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY2_26)));
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
            mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Var_36)), ((MR_Box) (ArgY3_11)));
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
          TypeInfo_15_15 = (MR_Word) (&make__options_file_scalar_common_2[3]);
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
            TypeInfo_16_16 = (MR_Word) (&make__options_file_scalar_common_2[3]);
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
  {
    MR_bool succeeded;

    succeeded = make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
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
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&make__options_file_scalar_common_3[3]), (MR_Integer) 24, Var_19, &Var_29);
    mercury__io__write_string_4_p_0(DumpStream_6, Var_29);
    mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
    mercury__io__write_4_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_variable_source_0), DumpStream_6, ((MR_Box) (Src_12)));
    mercury__io__write_string_4_p_0(DumpStream_6, (MR_String) " ");
    mercury__io__write_line_4_p_0((MR_Word) (&make__options_file_scalar_common_2[1]), DumpStream_6, ((MR_Box) (ValueWords_11)));
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_8_p_0_2(
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
make__options_file__lookup_options_variable_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1497__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_options_variable_8_p_0(
  MR_Word Variables_9,
  MR_Word OptionsVariableClass_10,
  MR_Word FlagsVar_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word MaybeValues_12;
    MR_String VarName_15 = ((&make__options_file_vector_common_11[0 + FlagsVar_11]))->make__options_file__vector_common_type_11_0__vct_11_f_0;
    MR_Word DefaultFlagsResult_16;
    MR_Word FlagsResult_17;
    MR_Word ExtraFlagsResult_18;
    MR_Word ModuleFlagsResult_23;
    MR_Word Result_24;
    MR_String Var_39;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word ModuleName_20;

    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", VarName_15);
    make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, Var_39, &DefaultFlagsResult_16);
    switch (MR_tag((MR_Word) OptionsVariableClass_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionsVariableClass_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FlagsResult_17 = (MR_Word) ((MR_Unsigned) 0U);
              ExtraFlagsResult_18 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_43;

              make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, VarName_15, &FlagsResult_17);
              Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_15);
              make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, Var_43, &ExtraFlagsResult_18);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_43;

          make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, VarName_15, &FlagsResult_17);
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_15);
          make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, Var_43, &ExtraFlagsResult_18);
        }
        break;
    }
    if (((MR_Unsigned) 6782974U & (((MR_Integer) 1 << FlagsVar_11))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OptionsVariableClass_10)) == (MR_Integer) 1);
      if (succeeded)
        ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionsVariableClass_10, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_String ModuleFileNameBase_21;
      MR_String ModuleVarName_22;
      MR_String Var_47;

      ModuleFileNameBase_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_20);
      Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "-", ModuleFileNameBase_21);
      ModuleVarName_22 = mercury__string__f_43_43_2_f_0(VarName_15, Var_47);
      make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_9, ModuleVarName_22, &ModuleFlagsResult_23);
    }
    else
      ModuleFlagsResult_23 = (MR_Word) ((MR_Unsigned) 0U);
    Var_51 = make__options_file__combine_var_results_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DefaultFlagsResult_16, FlagsResult_17);
    Var_50 = make__options_file__combine_var_results_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_51, ExtraFlagsResult_18);
    Result_24 = make__options_file__combine_var_results_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, ModuleFlagsResult_23);
    switch (MR_tag((MR_Word) Result_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeValues_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Values_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_24, (MR_Integer) 0))));

          succeeded = (FlagsVar_11 == (MR_Integer) 10);
          if (succeeded)
          {
            MR_Word BadLibs_28;

            BadLibs_28 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[12]), Values_25);
            if ((BadLibs_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MaybeValues_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeValues_12, 0) = ((MR_Box) (Values_25));
              }
              *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
            }
            else
            {
              MR_Word Pieces_31;
              MR_Word Spec_33;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_62;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_82;
              MR_Word Var_83;

              MaybeValues_12 = (MR_Word) ((MR_Unsigned) 0U);
              Var_66 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[13]), BadLibs_28);
              Var_65 = parse_tree__error_util__list_to_pieces_1_f_0(Var_66);
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[76])));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[75])));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[74])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
              }
              Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[71])));
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_31));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Var_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Var_78, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Var_78, 3) = ((MR_Box) (Var_82));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_options_variable\'/8"));
                MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), Spec_33, 3) = ((MR_Box) (Var_77));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_36 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
              }
            }
          }
          else
          {
            {
              MaybeValues_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeValues_12, 0) = ((MR_Box) (Values_25));
            }
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_24, (MR_Integer) 0))));
          MR_Word Var_53;

          MaybeValues_12 = (MR_Word) ((MR_Unsigned) 0U);
          Var_53 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_34);
          *STATE_VARIABLE_Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_53, STATE_VARIABLE_Specs_0_35);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FlagsVar_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeValues_12));
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
make__options_file__convert_to_mmc_options_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv19_LambdaHeadVar__2_15;

    conv19_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv19_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_LambdaHeadVar__2_15;

    conv18_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv17_LambdaHeadVar__2_15;

    conv17_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv17_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv16_LambdaHeadVar__2_15;

    conv16_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv16_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_LambdaHeadVar__2_15;

    conv15_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_LambdaHeadVar__2_15;

    conv14_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv14_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv13_LambdaHeadVar__2_15;

    conv13_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_LambdaHeadVar__2_15;

    conv12_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_LambdaHeadVar__2_15;

    conv11_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_LambdaHeadVar__2_15;

    conv10_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_LambdaHeadVar__2_15;

    conv9_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_15;

    conv8_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__2_15;

    conv7_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_15;

    conv6_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_15;

    conv5_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_15;

    conv4_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_15;

    conv3_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_15;

    conv2_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_15;

    conv1_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_15));
    return wrapper_arg_2;
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

    conv0_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1391__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

      switch (Var_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 13:
          {
            MR_Word Var_17;
            MR_Word Var_18;

            Var_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[4]), VariableValue_6);
            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_75;
            MR_Word Var_76;

            Var_76 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[5]), VariableValue_6);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_75);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_84;
            MR_Word Var_85;

            Var_85 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[6]), VariableValue_6);
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Var_93;
            MR_Word Var_94;

            Var_94 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[7]), VariableValue_6);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_102;
            MR_Word Var_103;

            Var_103 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[8]), VariableValue_6);
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_102);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_111;
            MR_Word Var_112;

            Var_112 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[9]), VariableValue_6);
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_111);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_120;
            MR_Word Var_121;

            Var_121 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[10]), VariableValue_6);
            {
              Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_120);
          }
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 18:
          {
            MR_Word Var_131;
            MR_Word Var_132;

            Var_132 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[11]), VariableValue_6);
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_131);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_140;
            MR_Word Var_141;

            Var_141 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[12]), VariableValue_6);
            {
              Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_140);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Var_149;
            MR_Word Var_150;

            Var_150 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[13]), VariableValue_6);
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_149);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var_158;
            MR_Word Var_159;

            Var_159 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[14]), VariableValue_6);
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_159));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_158);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_167;
            MR_Word Var_168;

            Var_168 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[15]), VariableValue_6);
            {
              Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_167);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word MMCOptionType_172 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[51]));
            MR_Word InitialOptions_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MMCOptionType_172, (MR_Integer) 0))));
            MR_String OptionName_174 = ((MR_String) ((MR_hl_field(MR_mktag(1), MMCOptionType_172, (MR_Integer) 1))));
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;

            {
              Var_177 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&make__options_file_scalar_common_10[0]));
              MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_13));
              MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (OptionName_174));
            }
            Var_176 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), Var_177, VariableValue_6);
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (InitialOptions_173));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_176));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_175);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word MMCOptionType_180 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[53]));
            MR_Word InitialOptions_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MMCOptionType_180, (MR_Integer) 0))));
            MR_String OptionName_182 = ((MR_String) ((MR_hl_field(MR_mktag(1), MMCOptionType_180, (MR_Integer) 1))));
            MR_Word Var_183;
            MR_Word Var_184;
            MR_Word Var_185;

            {
              Var_185 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&make__options_file_scalar_common_10[0]));
              MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_14));
              MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (OptionName_182));
            }
            Var_184 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), Var_185, VariableValue_6);
            {
              Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (InitialOptions_181));
              MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_184));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_183);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_192;
            MR_Word Var_193;

            Var_193 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[16]), VariableValue_6);
            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_193));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_192);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Var_201;
            MR_Word Var_202;

            Var_202 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[17]), VariableValue_6);
            {
              Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_202));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_201);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Var_210;
            MR_Word Var_211;

            Var_211 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[18]), VariableValue_6);
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_210);
          }
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_221;
            MR_Word Var_222;

            Var_222 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[19]), VariableValue_6);
            {
              Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_222));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_221);
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_232;
            MR_Word Var_233;

            Var_233 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[20]), VariableValue_6);
            {
              Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_233));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_232);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word Var_241;
            MR_Word Var_242;

            Var_242 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_4[21]), VariableValue_6);
            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Var_242));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_241);
          }
          break;
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
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[20])));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[55])));
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
make__options_file__dump_options_file_3_p_0_1(
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
make__options_file__dump_options_file_3_p_0(
  MR_Word Variables_4)
{
  {
    MR_Word OpenResult_6;

    mercury__io__open_output_4_p_0((MR_String) "DUMP_OPTIONS_FILE", &OpenResult_6);
    if (((MR_tag((MR_Word) OpenResult_6)) == (MR_Integer) 1))
    {
      MR_Word Error_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_6, (MR_Integer) 0))));
      MR_String ErrorMsg_9;

      ErrorMsg_9 = mercury__io__error_message_1_f_0(Error_8);
      mercury__io__write_string_3_p_0((MR_String) "mercury_compile: ");
      mercury__io__write_string_3_p_0(ErrorMsg_9);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word DumpStream_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_6, (MR_Integer) 0))));
      MR_Word Var_32;
      MR_Box conv0_STATE_VARIABLE_IO_21_21;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__options_file_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__options_file__dump_options_file_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (DumpStream_7));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, Variables_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
      mercury__io__close_output_3_p_0(DumpStream_7);
    }
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    make__options_file__lookup_options_variable_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0(
  MR_Word Variables_7,
  MR_Word ModuleName_8,
  MR_Word * Result_9,
  MR_Word * Specs_10)
{
  {
    MR_Word Var_14;
    MR_Word VariableTypesMaybeValues_24;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Box conv3_Specs_10;
    MR_Box conv2_STATE_VARIABLE_IO_13;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (ModuleName_8));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (make__options_file__lookup_mmc_module_options_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Variables_7));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Var_14));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[49])), &VariableTypesMaybeValues_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_10, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_13);
    *Specs_10 = ((MR_Word) (conv3_Specs_10));
    Var_30 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[11]), VariableTypesMaybeValues_24);
    Var_29 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "-O2"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
    }
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    make__options_file__lookup_options_variable_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0(
  MR_Word Variables_6,
  MR_Word * Result_7,
  MR_Word * Specs_8)
{
  {
    MR_Word VariableTypesMaybeValues_22;
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv3_Specs_8;
    MR_Box conv2_STATE_VARIABLE_IO_11;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (make__options_file__lookup_mmc_options_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Variables_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[49])), &VariableTypesMaybeValues_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_8, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_11);
    *Specs_8 = ((MR_Word) (conv3_Specs_8));
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[10]), VariableTypesMaybeValues_22);
    Var_27 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "-O2"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_27));
    }
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_default_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__lookup_default_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    make__options_file__lookup_options_variable_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
make__options_file__lookup_default_options_5_p_0(
  MR_Word Variables_6,
  MR_Word * Result_7,
  MR_Word * Specs_8)
{
  {
    MR_Word VariableTypesMaybeValues_22;
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv3_Specs_8;
    MR_Box conv2_STATE_VARIABLE_IO_11;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (make__options_file__lookup_default_options_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Variables_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0), (MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[49])), &VariableTypesMaybeValues_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_8, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_11);
    *Specs_8 = ((MR_Word) (conv3_Specs_8));
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&make__options_file_scalar_common_1[2]), (MR_Word) (&make__options_file_scalar_common_2[1]), (MR_Word) (&make__options_file_scalar_common_1[9]), VariableTypesMaybeValues_22);
    Var_27 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "-O2"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_27));
    }
  }
}

void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_5_p_0(
  MR_Word Variables_6,
  MR_Word * MaybeMerStdlibDir_7,
  MR_Word * Specs_8)
{
  {
    MR_Word MerStdlibDirResult_10;

    make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_6, (MR_String) "MERCURY_STDLIB_DIR", &MerStdlibDirResult_10);
    switch (MR_tag((MR_Word) MerStdlibDirResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMerStdlibDir_7 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[2]));
          *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MerStdlibDir_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MerStdlibDirResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMerStdlibDir_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MerStdlibDir_11));
          }
          *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MerStdlibDirResult_10, (MR_Integer) 0))));

          *MaybeMerStdlibDir_7 = (MR_Word) ((MR_Unsigned) 0U);
          *Specs_8 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_12);
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_main_target_5_p_0(
  MR_Word Variables_6,
  MR_Word * MaybeMainTarget_7,
  MR_Word * Specs_8)
{
  {
    MR_Word MainTargetResult_10;

    make__options_file__lookup_variable_in_env_and_db_5_p_0(Variables_6, (MR_String) "MAIN_TARGET", &MainTargetResult_10);
    switch (MR_tag((MR_Word) MainTargetResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMainTarget_7 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_3[2]));
          *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MainTarget_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MainTargetResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMainTarget_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainTarget_11));
          }
          *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MainTargetResult_10, (MR_Integer) 0))));

          *MaybeMainTarget_7 = (MR_Word) ((MR_Unsigned) 0U);
          *Specs_8 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMSpecs_12);
        }
        break;
    }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_in_env_and_db_5_p_0(
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeEnvValue_10;

    mercury__io__get_environment_var_4_p_0(VarName_7, &MaybeEnvValue_10);
    if ((MaybeEnvValue_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MapValue_23;
      MR_Box conv0_MapValue_23;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), Variables_6, ((MR_Box) (VarName_7)), &conv0_MapValue_23);
      if (succeeded)
      {
        MapValue_23 = ((MR_Word) (conv0_MapValue_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Words_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MapValue_23, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_25));
        }
      }
      else
        *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String EnvValue_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEnvValue_10, (MR_Integer) 0))));
      MR_Word Var_27;
      MR_Word RevWords_59;
      MR_Word MaybeError_60;
      MR_Word Words_61;

      Var_27 = mercury__string__to_char_list_1_f_0(EnvValue_18);
      make__options_file__split_into_words_loop_4_p_0(Var_27, (MR_Word) ((MR_Unsigned) 0U), &RevWords_59, &MaybeError_60);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_59, &Words_61);
      if ((MaybeError_60 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_61));
        }
      else
      {
        MR_String Msg_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_60, (MR_Integer) 0))));
        MR_Word ErrorSpec_22;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_53;

        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (VarName_7));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Msg_21));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[69])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[73])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Var_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), Var_32, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_32, 3) = ((MR_Box) (Var_36));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ErrorSpec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_variable_words_maybe_env_value\'/4"));
          MR_hl_field(MR_mktag(0), ErrorSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ErrorSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), ErrorSpec_22, 3) = ((MR_Box) (Var_31));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ErrorSpec_22));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_53));
        }
      }
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
    MR_Word Variables_12;
    MR_Word Specs0_13;
    MR_Word FlagsResult_14;
    MR_Word Var_21;

    Var_21 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0));
    make__options_file__read_named_options_file_7_p_0(OptionsFile_7, Var_21, &Variables_12, &Specs0_13, UndefSpecs_10);
    make__options_file__lookup_variable_words_maybe_env_value_4_p_0((MR_Word) ((MR_Unsigned) 0U), Variables_12, (MR_String) "MCFLAGS", &FlagsResult_14);
    switch (MR_tag((MR_Word) FlagsResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMCFlags_8 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (Specs0_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (*UndefSpecs_10 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Specs_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&make__options_file_scalar_common_4[1]));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Specs0_13));
            }
          else
            *Specs_9 = Specs0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MCFlags_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FlagsResult_14, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMCFlags_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCFlags_15));
          }
          *Specs_9 = Specs0_13;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OoMErrorSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FlagsResult_14, (MR_Integer) 0))));
          MR_Word VarResultSpecs_18;

          *MaybeMCFlags_8 = (MR_Word) ((MR_Unsigned) 0U);
          VarResultSpecs_18 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OoMErrorSpecs_17);
          *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarResultSpecs_18, Specs0_13);
        }
        break;
    }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_value_4_p_0(
  MR_Word MaybeEnvValue_5,
  MR_Word Variables_6,
  MR_String VarName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

    if ((MaybeEnvValue_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MapValue_14;
      MR_Box conv0_MapValue_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), Variables_6, ((MR_Box) (VarName_7)), &conv0_MapValue_14);
      if (succeeded)
      {
        MapValue_14 = ((MR_Word) (conv0_MapValue_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Words_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MapValue_14, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_16));
        }
      }
      else
        *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String EnvValue_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEnvValue_5, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Word RevWords_50;
      MR_Word MaybeError_51;
      MR_Word Words_52;

      Var_18 = mercury__string__to_char_list_1_f_0(EnvValue_9);
      make__options_file__split_into_words_loop_4_p_0(Var_18, (MR_Word) ((MR_Unsigned) 0U), &RevWords_50, &MaybeError_51);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_50, &Words_52);
      if ((MaybeError_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Words_52));
        }
      else
      {
        MR_String Msg_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_51, (MR_Integer) 0))));
        MR_Word ErrorSpec_13;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_44;

        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (VarName_7));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Msg_12));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[69])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[73])));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Var_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), Var_23, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_23, 3) = ((MR_Box) (Var_27));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ErrorSpec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorSpec_13, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.lookup_variable_words_maybe_env_value\'/4"));
          MR_hl_field(MR_mktag(0), ErrorSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ErrorSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), ErrorSpec_13, 3) = ((MR_Box) (Var_22));
        }
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (ErrorSpec_13));
          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_44));
        }
      }
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

    make__options_file__read_options_file_params_14_p_0((MR_Word) (&make__options_file_scalar_common_2[72]), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, OptionsPathName_8, STATE_VARIABLE_Variables_0_16, STATE_VARIABLE_Variables_17, (MR_Word) ((MR_Unsigned) 0U), &IOSpecs_14, (MR_Word) ((MR_Unsigned) 0U), &ParseSpecs_15, (MR_Word) ((MR_Unsigned) 0U), UndefSpecs_11);
    *Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), IOSpecs_14, ParseSpecs_15);
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_14_p_0(
  MR_Word SearchInfo_15,
  MR_Word PreStack0_16,
  MR_Word IsOptionsFileOptional_17,
  MR_String OptionsPathName_18,
  MR_Word STATE_VARIABLE_Variables_0_48,
  MR_Word * STATE_VARIABLE_Variables_49,
  MR_Word STATE_VARIABLE_IOSpecs_0_50,
  MR_Word * STATE_VARIABLE_IOSpecs_51,
  MR_Word STATE_VARIABLE_ParseSpecs_0_52,
  MR_Word * STATE_VARIABLE_ParseSpecs_53,
  MR_Word STATE_VARIABLE_UndefSpecs_0_54,
  MR_Word * STATE_VARIABLE_UndefSpecs_55)
{
  {
    MR_bool succeeded = (strcmp(OptionsPathName_18, (MR_String) "-") == 0);

    if (succeeded)
    {
      MR_Word CheckResult_24;

      make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, (MR_String) "-", &CheckResult_24);
      if (((MR_tag((MR_Word) CheckResult_24)) == (MR_Integer) 1))
      {
        MR_Word CheckSpec_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckResult_24, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParseSpecs_53 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CheckSpec_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_52));
        }
        *STATE_VARIABLE_Variables_49 = STATE_VARIABLE_Variables_0_48;
        *STATE_VARIABLE_IOSpecs_51 = STATE_VARIABLE_IOSpecs_0_50;
        *STATE_VARIABLE_UndefSpecs_55 = STATE_VARIABLE_UndefSpecs_0_54;
      }
      else
      {
        MR_Word InclStack0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckResult_24, (MR_Integer) 0))));
        MR_Word Search_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 1))));
        MR_Word SubSearchInfo_29;
        MR_Word Var_63;
        MR_String Var_64;
        MR_Word Var_65;

        Var_64 = mercury__dir__this_directory_0_f_0();
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        }
        {
          SubSearchInfo_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubSearchInfo_29, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), SubSearchInfo_29, 1) = ((MR_Box) (Search_28));
        }
        Var_65 = mercury__io__stdin_stream_0_f_0();
        make__options_file__read_options_lines_15_p_0(SubSearchInfo_29, InclStack0_25, Var_65, (MR_String) "stdin", (MR_Integer) 1, STATE_VARIABLE_Variables_0_48, STATE_VARIABLE_Variables_49, STATE_VARIABLE_IOSpecs_0_50, STATE_VARIABLE_IOSpecs_51, STATE_VARIABLE_ParseSpecs_0_52, STATE_VARIABLE_ParseSpecs_53, STATE_VARIABLE_UndefSpecs_0_54, STATE_VARIABLE_UndefSpecs_55);
      }
    }
    else
    {
      MR_Word MaybeDirName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 0))));
      MR_Word SearchDirs_32;
      MR_String FileToFind_35;
      MR_Word Dirs_36;
      MR_Word MaybeDirAndStream_38;
      MR_Word Search_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchInfo_15, (MR_Integer) 1))));
      MR_String OptionsDir_33;
      MR_String OptionsFile_34;

      if ((Search_163 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_85;

        Var_85 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_32, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), SearchDirs_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        SearchDirs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Search_163, (MR_Integer) 0))));
      succeeded = mercury__dir__split_name_3_p_0(OptionsPathName_18, &OptionsDir_33, &OptionsFile_34);
      if (succeeded)
      {
        succeeded = mercury__dir__path_name_is_absolute_1_p_0(OptionsDir_33);
        if (succeeded)
        {
          FileToFind_35 = OptionsFile_34;
          {
            Dirs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_36, 0) = ((MR_Box) (OptionsDir_33));
            MR_hl_field(MR_mktag(1), Dirs_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        if ((MaybeDirName_31 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Dirs_36 = SearchDirs_32;
          FileToFind_35 = OptionsPathName_18;
        }
        else
        {
          MR_String DirName_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirName_31, (MR_Integer) 0))));
          MR_String Var_88;

          Var_88 = mercury__dir__f_slash_2_f_0(DirName_37, OptionsDir_33);
          {
            Dirs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_36, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(1), Dirs_36, 1) = ((MR_Box) (SearchDirs_32));
          }
          FileToFind_35 = OptionsFile_34;
        }
      }
      else
      {
        Dirs_36 = SearchDirs_32;
        FileToFind_35 = OptionsPathName_18;
      }
      libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(Dirs_36, FileToFind_35, &MaybeDirAndStream_38);
      if (((MR_tag((MR_Word) MaybeDirAndStream_38)) == (MR_Integer) 1))
      {
        MR_String Error_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirAndStream_38, (MR_Integer) 0))));

        switch (IsOptionsFileOptional_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String ErrorFile_43;
              MR_Word MaybeContext_44;
              MR_Word Spec_47;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_String SingleDir_42;
              MR_Word Var_94;

              succeeded = (Dirs_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleDir_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dirs_36, (MR_Integer) 0))));
                Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_36, (MR_Integer) 1))));
                succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_String Var_166;

                Var_166 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(SingleDir_42, Var_166) == 0);
                if (succeeded)
                  ErrorFile_43 = FileToFind_35;
                else
                  ErrorFile_43 = mercury__dir__make_path_name_2_f_0(SingleDir_42, FileToFind_35);
              }
              else
                ErrorFile_43 = FileToFind_35;
              if ((PreStack0_16 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeContext_44 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Context_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PreStack0_16, (MR_Integer) 0))));

                {
                  MaybeContext_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeContext_44, 0) = ((MR_Box) (Context_45));
                }
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (ErrorFile_43));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Error_41));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[71])));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[69])));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
                MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[68])));
                MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
                MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_99, 0) = ((MR_Box) (MaybeContext_44));
                MR_hl_field(MR_mktag(2), Var_99, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Var_99, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Var_99, 3) = ((MR_Box) (Var_102));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.read_options_file_params\'/14"));
                MR_hl_field(MR_mktag(0), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), Spec_47, 3) = ((MR_Box) (Var_98));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_IOSpecs_51 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_47));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IOSpecs_0_50));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_IOSpecs_51 = STATE_VARIABLE_IOSpecs_0_50;
            break;
        }
        *STATE_VARIABLE_Variables_49 = STATE_VARIABLE_Variables_0_48;
        *STATE_VARIABLE_ParseSpecs_53 = STATE_VARIABLE_ParseSpecs_0_52;
        *STATE_VARIABLE_UndefSpecs_55 = STATE_VARIABLE_UndefSpecs_0_54;
      }
      else
      {
        MR_String FoundDir_39;
        MR_Word FoundStream_40;
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirAndStream_38, (MR_Integer) 0))));
        MR_String Var_126;
        MR_Word CheckResult_153;

        FoundDir_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 0))));
        FoundStream_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 1))));
        Var_126 = mercury__dir__f_slash_2_f_0(FoundDir_39, FileToFind_35);
        make__options_file__check_include_for_infinite_recursion_3_p_0(PreStack0_16, Var_126, &CheckResult_153);
        if (((MR_tag((MR_Word) CheckResult_153)) == (MR_Integer) 1))
        {
          MR_Word CheckSpec_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckResult_153, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_53 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CheckSpec_149));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_52));
          }
          *STATE_VARIABLE_Variables_49 = STATE_VARIABLE_Variables_0_48;
          *STATE_VARIABLE_IOSpecs_51 = STATE_VARIABLE_IOSpecs_0_50;
          *STATE_VARIABLE_UndefSpecs_55 = STATE_VARIABLE_UndefSpecs_0_54;
        }
        else
        {
          MR_Word Var_135;
          MR_Word InclStack0_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckResult_153, (MR_Integer) 0))));
          MR_Word SubSearchInfo_148;

          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (FoundDir_39));
          }
          {
            SubSearchInfo_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubSearchInfo_148, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), SubSearchInfo_148, 1) = ((MR_Box) (Search_163));
          }
          make__options_file__read_options_lines_15_p_0(SubSearchInfo_148, InclStack0_147, FoundStream_40, FileToFind_35, (MR_Integer) 1, STATE_VARIABLE_Variables_0_48, STATE_VARIABLE_Variables_49, STATE_VARIABLE_IOSpecs_0_50, STATE_VARIABLE_IOSpecs_51, STATE_VARIABLE_ParseSpecs_0_52, STATE_VARIABLE_ParseSpecs_53, STATE_VARIABLE_UndefSpecs_0_54, STATE_VARIABLE_UndefSpecs_55);
        }
        mercury__io__close_input_3_p_0(FoundStream_40);
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
    MR_Word conv3_STATE_VARIABLE_Variables_49;
    MR_Word conv2_STATE_VARIABLE_IOSpecs_51;
    MR_Word conv1_STATE_VARIABLE_ParseSpecs_53;
    MR_Word conv0_STATE_VARIABLE_UndefSpecs_55;

    make__options_file__read_options_file_params_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Variables_49, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_IOSpecs_51, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ParseSpecs_53, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_UndefSpecs_55);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Variables_49));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_IOSpecs_51));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ParseSpecs_53));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_UndefSpecs_55));
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
                  mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, IncludedFileNames_40, ((MR_Box) (STATE_VARIABLE_Variables_0_47)), &conv8_STATE_VARIABLE_Variables_70_70, ((MR_Box) (STATE_VARIABLE_IOSpecs_0_49)), &conv7_STATE_VARIABLE_IOSpecs_66_66, ((MR_Box) (STATE_VARIABLE_ParseSpecs_60_60)), &conv6_STATE_VARIABLE_ParseSpecs_71_71, ((MR_Box) (STATE_VARIABLE_UndefSpecs_61_61)), &conv5_STATE_VARIABLE_UndefSpecs_72_72, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_73_73);
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
  MR_Word STATE_VARIABLE_Variables_0_41,
  MR_Word * STATE_VARIABLE_Variables_42,
  MR_Word STATE_VARIABLE_ParseSpecs_0_43,
  MR_Word * STATE_VARIABLE_ParseSpecs_44,
  MR_Word STATE_VARIABLE_UndefSpecs_0_45,
  MR_Word * STATE_VARIABLE_UndefSpecs_46)
{
  {
    MR_bool succeeded;
    MR_Word NewValue1_23;
    MR_Word STATE_VARIABLE_ParseSpecs_49_49;
    MR_Word RevWords_87;
    MR_Word MaybeError_88;
    MR_Word Words_89;

    make__options_file__expand_any_var_references_11_p_0(STATE_VARIABLE_Variables_0_41, FileName_14, LineNumber_15, NewValue0_18, &NewValue1_23, STATE_VARIABLE_ParseSpecs_0_43, &STATE_VARIABLE_ParseSpecs_49_49, STATE_VARIABLE_UndefSpecs_0_45, STATE_VARIABLE_UndefSpecs_46);
    make__options_file__split_into_words_loop_4_p_0(NewValue1_23, (MR_Word) ((MR_Unsigned) 0U), &RevWords_87, &MaybeError_88);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWords_87, &Words_89);
    if ((MaybeError_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeEnvValue_26;

      mercury__io__get_environment_var_4_p_0(VarName_17, &MaybeEnvValue_26);
      if ((MaybeEnvValue_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OldEntry_35;
        MR_Box conv0_OldEntry_35;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), STATE_VARIABLE_Variables_0_41, ((MR_Box) (VarName_17)), &conv0_OldEntry_35);
        if (succeeded)
        {
          OldEntry_35 = ((MR_Word) (conv0_OldEntry_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OldValue_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_35, (MR_Integer) 0))));
          MR_Word OldWords_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_35, (MR_Integer) 1))));
          MR_Word Source_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldEntry_35, (MR_Integer) 2))) & (MR_Integer) 3);

          switch (Source_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Variables_42 = STATE_VARIABLE_Variables_0_41;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Variables_42 = STATE_VARIABLE_Variables_0_41;
              break;
            case (MR_Integer) 0:
              {
                MR_Word NewValue_39;
                MR_Word Words_63;
                MR_Word Entry_64;

                switch (SetOrAdd_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_54;

                      {
                        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (NewValue1_23));
                      }
                      NewValue_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), OldValue_36, Var_54);
                      Words_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OldWords_37, Words_89);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      NewValue_39 = NewValue1_23;
                      Words_63 = Words_89;
                    }
                    break;
                }
                {
                  Entry_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Entry_64, 0) = ((MR_Box) (NewValue_39));
                  MR_hl_field(MR_mktag(0), Entry_64, 1) = ((MR_Box) (Words_63));
                  MR_hl_field(MR_mktag(0), Entry_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_64)), STATE_VARIABLE_Variables_0_41, STATE_VARIABLE_Variables_42);
              }
              break;
          }
        }
        else
        {
          MR_Word Entry_69;

          {
            Entry_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_69, 0) = ((MR_Box) (NewValue1_23));
            MR_hl_field(MR_mktag(0), Entry_69, 1) = ((MR_Box) (Words_89));
            MR_hl_field(MR_mktag(0), Entry_69, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_69)), STATE_VARIABLE_Variables_0_41, STATE_VARIABLE_Variables_42);
        }
        *STATE_VARIABLE_ParseSpecs_44 = STATE_VARIABLE_ParseSpecs_49_49;
      }
      else
      {
        MR_String EnvValue_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEnvValue_26, (MR_Integer) 0))));
        MR_Word Value_28;
        MR_Word MaybeWords_29;

        Value_28 = mercury__string__to_char_list_1_f_0(EnvValue_27);
        MaybeWords_29 = make__options_file__split_into_words_1_f_0(Value_28);
        if (((MR_tag((MR_Word) MaybeWords_29)) == (MR_Integer) 1))
        {
          MR_String WordsError_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeWords_29, (MR_Integer) 0))));
          MR_Word Spec_34;

          Spec_34 = make__options_file__report_split_error_3_f_0(FileName_14, LineNumber_15, WordsError_33);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParseSpecs_44 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_49_49));
          }
          *STATE_VARIABLE_Variables_42 = STATE_VARIABLE_Variables_0_41;
        }
        else
        {
          MR_Word Words_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeWords_29, (MR_Integer) 0))));
          MR_Word EnvValueChars_31;
          MR_Word Entry_32;

          EnvValueChars_31 = mercury__string__to_char_list_1_f_0(EnvValue_27);
          {
            Entry_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_32, 0) = ((MR_Box) (EnvValueChars_31));
            MR_hl_field(MR_mktag(0), Entry_32, 1) = ((MR_Box) (Words_30));
            MR_hl_field(MR_mktag(0), Entry_32, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), ((MR_Box) (VarName_17)), ((MR_Box) (Entry_32)), STATE_VARIABLE_Variables_0_41, STATE_VARIABLE_Variables_42);
          *STATE_VARIABLE_ParseSpecs_44 = STATE_VARIABLE_ParseSpecs_49_49;
        }
      }
    }
    else
    {
      MR_String WordsError1_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_88, (MR_Integer) 0))));
      MR_Word Spec_74;

      Spec_74 = make__options_file__report_split_error_3_f_0(FileName_14, LineNumber_15, WordsError1_40);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ParseSpecs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_74));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_49_49));
      }
      *STATE_VARIABLE_Variables_42 = STATE_VARIABLE_Variables_0_41;
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
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[67])));
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
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[26])));
      }
      Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_57, Var_62);
      {
        Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.report_any_undefined_variables\'/5"));
        MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
            MR_Word STATE_VARIABLE_RevChars_70_70;
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
                MR_Char Var_85;

                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_85 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 0)));
                  Chars3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_85);
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
                STATE_VARIABLE_RevChars_70_70 = STATE_VARIABLE_RevChars_0_5;
                STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
              }
              else
              {
                MR_Word Chars3_82;
                MR_Char Var_86;

                succeeded = (Chars2_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 0)));
                  Chars3_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars2_41, (MR_Integer) 1))));
                  succeeded = (EndChar_40 == Var_86);
                }
                if (succeeded)
                {
                  MR_String VarName_50;
                  MR_Word VarValueChars_51;
                  MR_Word Var_71;

                  Chars4_46 = Chars3_82;
                  VarName_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeVarName0_42, (MR_Integer) 0))));
                  make__options_file__lookup_variable_value_7_p_0(Variables_1, VarName_50, &VarValueChars_51, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
                  Var_71 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_51);
                  STATE_VARIABLE_RevChars_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_71, STATE_VARIABLE_RevChars_0_5);
                  STATE_VARIABLE_ParseSpecs_67_67 = STATE_VARIABLE_ParseSpecs_0_7;
                }
                else
                {
                  MR_Word ParseSpec_93;

                  Chars4_46 = Chars2_41;
                  ParseSpec_93 = make__options_file__report_unterminated_variable_reference_3_f_0(FileName_2, LineNumber_3, STATE_VARIABLE_RevChars_0_5);
                  {
                    STATE_VARIABLE_ParseSpecs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 0) = ((MR_Box) (ParseSpec_93));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParseSpecs_67_67, 1) = ((MR_Box) (STATE_VARIABLE_ParseSpecs_0_7));
                  }
                  STATE_VARIABLE_RevChars_70_70 = STATE_VARIABLE_RevChars_0_5;
                  STATE_VARIABLE_UndefVarNames_68_68 = STATE_VARIABLE_UndefVarNames_0_9;
                }
              }
            }
            else
            {
              MR_String VarName_89;
              MR_Word VarValueChars_90;
              MR_Word Var_91;

              Chars4_46 = Chars1_39;
              VarName_89 = mercury__string__char_to_string_1_f_0(Char2_38);
              make__options_file__lookup_variable_value_7_p_0(Variables_1, VarName_89, &VarValueChars_90, STATE_VARIABLE_UndefVarNames_0_9, &STATE_VARIABLE_UndefVarNames_68_68);
              Var_91 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), VarValueChars_90);
              STATE_VARIABLE_RevChars_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_91, STATE_VARIABLE_RevChars_0_5);
              STATE_VARIABLE_ParseSpecs_67_67 = STATE_VARIABLE_ParseSpecs_0_7;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Chars4_46;
            next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_70_70;
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
        MR_Word STATE_VARIABLE_RevChars_77_77;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevChars_0_5;

        {
          STATE_VARIABLE_RevChars_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_77_77, 0) = ((MR_Box) (MR_Word) (Char_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_77_77, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Chars_32;
        next_value_of_STATE_VARIABLE_RevChars_0_5 = STATE_VARIABLE_RevChars_77_77;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RevChars_0_5 = next_value_of_STATE_VARIABLE_RevChars_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__lookup_variable_value_7_p_0(
  MR_Word Variables_8,
  MR_String VarName_9,
  MR_Word * Value_10,
  MR_Word STATE_VARIABLE_UndefVarNames_0_19,
  MR_Word * STATE_VARIABLE_UndefVarNames_20)
{
  {
    MR_bool succeeded;
    MR_Word MaybeValue_13;

    mercury__io__get_environment_var_4_p_0(VarName_9, &MaybeValue_13);
    if ((MaybeValue_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Entry_15;
      MR_Box conv0_Entry_15;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0), Variables_8, ((MR_Box) (VarName_9)), &conv0_Entry_15);
      if (succeeded)
      {
        Entry_15 = ((MR_Word) (conv0_Entry_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *Value_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_15, (MR_Integer) 0))));
        *STATE_VARIABLE_UndefVarNames_20 = STATE_VARIABLE_UndefVarNames_0_19;
      }
      else
      {
        *Value_10 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_UndefVarNames_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarName_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UndefVarNames_0_19));
        }
      }
    }
    else
    {
      MR_String ValueString_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 0))));

      *Value_10 = mercury__string__to_char_list_1_f_0(ValueString_14);
      *STATE_VARIABLE_UndefVarNames_20 = STATE_VARIABLE_UndefVarNames_0_19;
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
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[66])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_unterminated_variable_reference\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
    mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_1[8]), Chars0_5, &Chars1_8);
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

      mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_1[5]), AfterInclude0_12, &AfterInclude_13);
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

        mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_1[6]), Line1_73, &Line2_70);
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

          mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_1[7]), Line3_17, &VarValue_19);
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
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[65])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[64])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[63])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[62])));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[61])));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[60])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[59])));
            MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_39));
          }
          {
            Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.parse_options_line\'/4"));
            MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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

    succeeded = make__options_file__IntroducedFrom__pred__parse_variable_name__837__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
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

      mercury__list__take_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&make__options_file_scalar_common_4[3]), *Chars_9, &FirstWordChars_13);
      Var_25 = mercury__string__from_char_list_1_f_0(FirstWordChars_13);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[58])));
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
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[57])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.report_split_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
          }
          {
            Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[56])));
            MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
                              MR_hl_field(MR_mktag(1), Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                              MR_hl_field(MR_mktag(1), Spec_54, 3) = ((MR_Box) (Context_23));
                              MR_hl_field(MR_mktag(1), Spec_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[22])));
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
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
          }
          {
            Pieces_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[56])));
            MR_hl_field(MR_mktag(1), Pieces_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
            MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[56])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140make.options_file.io_error_to_parse_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
        Var_63 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[14]));
        Var_69 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
        Var_70 = (MR_Word) ((MR_Unsigned) 0U);
        Var_71 = (MR_Word) ((MR_Unsigned) 4U);
        Var_59 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[54]));
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
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[14])));
        }
        {
          Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[54])));
          MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
          TypeInfo_76_76 = (MR_Word) (&make__options_file_scalar_common_1[1]);
          conv0_Var_36 = mercury__list__det_head_1_f_0(TypeInfo_76_76, TopDownIncludes_13);
          Var_36 = ((MR_Word) (conv0_Var_36));
          TopPathName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
          TopContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
          Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[18]));
          TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
          Var_50 = (MR_Word) (&make__options_file_scalar_common_1[3]);
          Var_37 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[54]));
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
          Var_88 = (MR_Word) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[20]));
          Var_52 = (MR_String) "predicate \140make.options_file.pathname_occurs_in_incl_stack\'/4";
          Var_53 = (MR_Word) ((MR_Unsigned) 0U);
          Var_54 = (MR_Word) ((MR_Unsigned) 4U);
          Var_58 = (MR_Word) ((MR_Unsigned) 0U);
          Var_84 = (MR_Word) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[55]));
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
    MR_Word Variables0_14;
    MR_Word IOSpecs_15;
    MR_Word ParseSpecs_16;
    MR_Word Var_19;
    MR_Box conv8_Variables_10;
    MR_Box conv7_IOSpecs_15;
    MR_Box conv6_ParseSpecs_16;
    MR_Box conv5_UndefSpecs_12;
    MR_Box conv4_STATE_VARIABLE_IO_18;

    Variables0_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__options_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__options_file__read_options_files_named_in_options_file_option_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (OptionSearchDirs_8));
    }
    mercury__list__foldl5_12_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file_scalar_common_1[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&make__options_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, OptionsFiles_9, ((MR_Box) (Variables0_14)), &conv8_Variables_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_IOSpecs_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_ParseSpecs_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_UndefSpecs_12, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_18);
    *Variables_10 = ((MR_Word) (conv8_Variables_10));
    IOSpecs_15 = ((MR_Word) (conv7_IOSpecs_15));
    ParseSpecs_16 = ((MR_Word) (conv6_ParseSpecs_16));
    *UndefSpecs_12 = ((MR_Word) (conv5_UndefSpecs_12));
    *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), IOSpecs_15, ParseSpecs_16);
  }
}

MR_Word MR_CALL 
make__options_file__options_variables_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0));
    return HeadVar__1_1;
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
