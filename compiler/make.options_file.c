/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module make.options_file. */
/* :- implementation. */

/*
INIT mercury__make__options_file__init
ENDINIT
*/

#include "make.options_file.mih"


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_main.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0[2];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_error_if_not_exist_0[2];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0[1];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2];

static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_mmc_option_type_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_mmc_option_type_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1];

static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0;

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2];

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

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_options_variable_type_0[23];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[23];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[23];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0;

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1];

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1];

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1];

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1];

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_0;

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_1;

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_search_0[2];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_search_0[2];

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2];

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1];

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0;

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1;

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

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_variable_source_0[3];

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_variable_source_0[3];

static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_source_0[3];

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4);

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3);

static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * make__options_file__HeadVar__1_1);

static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1110__1_1_p_0(
  MR_String make__options_file__LambdaHeadVar__1_51);

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(
  MR_String make__options_file__OptionName_9,
  MR_String make__options_file__LambdaHeadVar__1_14);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__868__1_2_p_0(
  MR_Word make__options_file__LambdaHeadVar__1_24,
  MR_Word * make__options_file__LambdaHeadVar__2_25);

static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__739__1_2_p_0(
  MR_Word make__options_file__Chars_3,
  MR_Word * make__options_file__LambdaHeadVar__1_11);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__641__1_2_p_0(
  MR_Word make__options_file__HeadVar__1_13,
  MR_Char make__options_file__HeadVar__2_20);

static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__OptionsFile_8,
  MR_Word make__options_file__Variables0_9,
  MR_Word * make__options_file__LambdaHeadVar__1_22);

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word make__options_file__TypeInfo_for_T_18,
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
  MR_Word make__options_file__TypeInfo_for_T_11,
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____search_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_String make__options_file__HeadVar__2_2,
  MR_String make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
  MR_String make__options_file__HeadVar__1_1,
  MR_String make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
  MR_Word * make__options_file__HeadVar__1_1);

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void);

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2);

static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
  MR_Word make__options_file__Variables_8,
  MR_String make__options_file__Var_9,
  MR_Word * make__options_file__Value_10,
  MR_Word make__options_file__STATE_VARIABLE_Undef_0_18,
  MR_Word * make__options_file__STATE_VARIABLE_Undef_19);

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
  MR_Word make__options_file__LookupEnv_7,
  MR_Word make__options_file__Vars_8,
  MR_String make__options_file__VarName_9,
  MR_Word * make__options_file__Result_10);

static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_Word make__options_file__Vars_8,
  MR_String make__options_file__VarName_9,
  MR_Word * make__options_file__Result_10);

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word make__options_file__TypeInfo_for_T_14,
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2);

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
  MR_Word make__options_file__Globals_8,
  MR_Word make__options_file__Vars_9,
  MR_Word make__options_file__OptionsVariableClass_10,
  MR_Word make__options_file__FlagsVar_11,
  MR_Word * make__options_file__Result_12);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_20(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
  MR_Word make__options_file__HeadVar__1_1);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3,
  MR_Box * make__options_file__wrapper_arg_4);

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_Word make__options_file__Vars_8,
  MR_Word make__options_file__MaybeModuleName_9,
  MR_Word * make__options_file__Result_10);

static void MR_CALL 
make__options_file__get_word_2_4_p_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word * make__options_file__RevWord_2,
  MR_Word make__options_file__HeadVar__3_3,
  MR_Word * make__options_file__HeadVar__4_4);

static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
  MR_Word make__options_file__Chars0_4,
  MR_Word make__options_file__RevWords0_5);

static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
  MR_Word * make__options_file__FoundEOF_4);

static void MR_CALL 
make__options_file__parse_string_chars_4_p_0(
  MR_Word make__options_file__String0_1,
  MR_Word * make__options_file__String_2,
  MR_Word make__options_file__HeadVar__3_3,
  MR_Word * make__options_file__Chars_4);

static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
  MR_Word make__options_file__IsFirst_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word * make__options_file__Var_3,
  MR_Word make__options_file__HeadVar__4_4,
  MR_Word * make__options_file__HeadVar__5_5);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static void MR_CALL 
make__options_file__parse_options_line_2_p_0(
  MR_Word make__options_file__Line0_3,
  MR_Word * make__options_file__OptionsFileLine_4);

static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
  MR_Word make__options_file__Globals_5,
  MR_Word make__options_file__Vars_6);

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1);

static void MR_CALL 
make__options_file__expand_variables_2_8_p_0(
  MR_Word make__options_file__Variables_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__STATE_VARIABLE_RevChars_0_3,
  MR_Word * make__options_file__STATE_VARIABLE_RevChars_4,
  MR_Word make__options_file__STATE_VARIABLE_RevUndef_0_5,
  MR_Word * make__options_file__STATE_VARIABLE_RevUndef_6);

static void MR_CALL 
make__options_file__update_variable_8_p_0(
  MR_Word make__options_file__Globals_9,
  MR_String make__options_file__VarName_10,
  MR_Word make__options_file__AddToValue_11,
  MR_Word make__options_file__NewValue0_12,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_27,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_28);

static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
  MR_Word * make__options_file__FoundEOF_6,
  MR_Word make__options_file__STATE_VARIABLE_Chars_0_13,
  MR_Word * make__options_file__STATE_VARIABLE_Chars_14);

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4,
  MR_Box * make__options_file__wrapper_arg_5);

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_24,
  MR_Word * make__options_file__HeadVar__4_4);

static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3);

static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__Variables0_9,
  MR_Word * make__options_file__Result_10);

static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_18,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_19);

static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
  MR_String make__options_file__Dir_4,
  MR_String make__options_file__File_5);

static void MR_CALL 
make__options_file__write_done_2_p_0(void);

static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
  MR_String make__options_file__FileName_4);

static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
  MR_Word make__options_file__Globals_10,
  MR_Word make__options_file__ErrorIfNotExist_11,
  MR_Word make__options_file__Search_12,
  MR_Word make__options_file__MaybeDirName_13,
  MR_String make__options_file__OptionsFile0_14,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_33,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_34);

static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__OptionsFile_8,
  MR_Word make__options_file__STATE_VARIABLE_Vars_0_13,
  MR_Word * make__options_file__STATE_VARIABLE_Vars_14);

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4,
  MR_Box * make__options_file__wrapper_arg_5);

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_10,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_11);

static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3);

static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3);


static /* final */ const MR_Box make__options_file_scalar_common_1[17][3];

static /* final */ const MR_Box make__options_file_scalar_common_2[43][2];

static /* final */ const MR_Box make__options_file_scalar_common_3[2][9];

static /* final */ const MR_Box make__options_file_scalar_common_4[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_5[1][1];

static /* final */ const MR_Box make__options_file_scalar_common_6[6][5];

static /* final */ const MR_Box make__options_file_scalar_common_7[2][6];

static /* final */ const MR_Box make__options_file_scalar_common_8[1][12];

static /* final */ const MR_Box make__options_file_scalar_common_9[22][4];

static /* final */ const MR_Box make__options_file_scalar_common_10[1][10];


/* sealed */ struct make__options_file__vector_common_type_11_0_s {
  const MR_String make__options_file__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct make__options_file__vector_common_type_11_0_s make__options_file_vector_common_11[23];



static /* final */ const MR_Box make__options_file_scalar_common_1[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
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
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__report_undefined_variables_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__split_into_words_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[3])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[4])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[21])),
    ((MR_Box) (make__options_file__lookup_options_variable_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_options_variable_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_2[43][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_variable_result_1)),
    ((MR_Box) (&make__options_file_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__options_file_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "--no-libgrade")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[27]))),
    ((MR_Box) ((MR_String) "--libgrade"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "--no-lib-linkage")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[29]))),
    ((MR_Box) ((MR_String) "--lib-linkage"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error reading options file"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "options, found"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_6[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_search_0)),
    ((MR_Box) (&make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_9[22][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[1])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[6]))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[1])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[9]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--erlang-flag"))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_class_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &make__options_file__make__options_file__type_ctor_info_variable_result_1,
  {
    (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_type_0,
    (MR_PseudoTypeInfo) &make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0 = {
  (MR_String) "error",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1 = {
  (MR_String) "no_error",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0,
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0,
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_error_if_not_exist_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____error_if_not_exist_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____error_if_not_exist_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "error_if_not_exist",
  {     make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0 },
  {     make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_error_if_not_exist_0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 = {
  (MR_String) "found_options_file_error",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0[1] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__options_file____Unify____found_options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____found_options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "found_options_file_error",
  {     make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0 },
  {     make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_found_options_file_error_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0 = {
  (MR_String) "mmc_flags",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2] = {
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2] = {
  (MR_String) "initial_options",
  (MR_String) "option_name"
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1 = {
  (MR_String) "option",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_mmc_option_type_0_1,
  make__options_file__make__options_file__field_names_mmc_option_type_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____mmc_option_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____mmc_option_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "mmc_option_type",
  {     make__options_file__make__options_file__du_name_ordered_mmc_option_type_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_mmc_option_type_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0 = {
  (MR_String) "options_file_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__options_file____Unify____options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_error",
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_file_error_0
};

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0 = {
  (MR_String) "define_variable",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_file_line_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2] = {
  (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1 = {
  (MR_String) "include_options_files",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_options_file_line_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_file_line_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1
  }
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_file_line_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_line_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_file_line_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_line_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_line",
  {     make__options_file__make__options_file__du_name_ordered_options_file_line_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_file_line_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_file_line_0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variable_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0 = {
  (MR_String) "default",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1 = {
  (MR_String) "non_module_specific",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2 = {
  (MR_String) "module_specific",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_options_variable_class_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_class_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_class_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_class",
  {     make__options_file__make__options_file__du_name_ordered_options_variable_class_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_class_0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0 = {
  (MR_String) "grade_flags",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1 = {
  (MR_String) "mmc_flags",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2 = {
  (MR_String) "c_flags",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3 = {
  (MR_String) "gcc_flags",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4 = {
  (MR_String) "clang_flags",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5 = {
  (MR_String) "msvc_flags",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6 = {
  (MR_String) "java_flags",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7 = {
  (MR_String) "csharp_flags",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8 = {
  (MR_String) "erlang_flags",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9 = {
  (MR_String) "ml_objs",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10 = {
  (MR_String) "ml_libs",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11 = {
  (MR_String) "ld_flags",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12 = {
  (MR_String) "ld_libflags",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13 = {
  (MR_String) "c2init_args",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14 = {
  (MR_String) "libraries",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15 = {
  (MR_String) "lib_dirs",
  (MR_Integer) 15
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16 = {
  (MR_String) "lib_grades",
  (MR_Integer) 16
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17 = {
  (MR_String) "lib_linkages",
  (MR_Integer) 17
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18 = {
  (MR_String) "install_prefix",
  (MR_Integer) 18
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19 = {
  (MR_String) "stdlib_dir",
  (MR_Integer) 19
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20 = {
  (MR_String) "config_dir",
  (MR_Integer) 20
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21 = {
  (MR_String) "linkage",
  (MR_Integer) 21
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22 = {
  (MR_String) "mercury_linkage",
  (MR_Integer) 22
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_options_variable_type_0[23] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____options_variable_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_type",
  {     make__options_file__make__options_file__enum_name_ordered_options_variable_type_0 },
  {     make__options_file__make__options_file__enum_value_ordered_options_variable_type_0 },
  (MR_Integer) 23,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_type_0
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3] = {
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_variable_source_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0 = {
  (MR_String) "options_variable_value",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_variable_value_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_value_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_value_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_value",
  {     make__options_file__make__options_file__du_name_ordered_options_variable_value_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_value_0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variables_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variables_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variables_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variables",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_0 = {
  (MR_String) "search",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_1 = {
  (MR_String) "no_search",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_search_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_search_0_0,
  &make__options_file__make__options_file__enum_functor_desc_search_0_1
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_search_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_search_0_1,
  &make__options_file__make__options_file__enum_functor_desc_search_0_0
};

static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____search_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____search_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "search",
  {     make__options_file__make__options_file__enum_name_ordered_search_0 },
  {     make__options_file__make__options_file__enum_value_ordered_search_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_search_0
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0 = {
  (MR_String) "var_result_set",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_variable_result_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1 = {
  (MR_String) "var_result_unset",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2 = {
  (MR_String) "var_result_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_variable_result_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_1
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_2
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_0
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_variable_result_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____variable_result_1_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_result_1_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_result",
  {     make__options_file__make__options_file__du_name_ordered_variable_result_1 },
  {     make__options_file__make__options_file__du_ptag_ordered_variable_result_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_variable_result_1
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_0 = {
  (MR_String) "options_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_1 = {
  (MR_String) "command_line",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_2 = {
  (MR_String) "environment",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_variable_source_0[3] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____variable_source_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_source_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_source",
  {     make__options_file__make__options_file__enum_name_ordered_variable_source_0 },
  {     make__options_file__make__options_file__enum_value_ordered_variable_source_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_variable_source_0
};

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____error_if_not_exist_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____error_if_not_exist_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____found_options_file_error_0_0();
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____found_options_file_error_0_0(&make__options_file__conv0_HeadVar__1_1);
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____mmc_option_type_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____mmc_option_type_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_file_error_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_file_error_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_file_line_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_file_line_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_variable_0_0(((MR_String) make__options_file__wrapper_arg_1), ((MR_String) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_variable_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_String) make__options_file__wrapper_arg_2), ((MR_String) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_variable_class_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_variable_class_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_variable_type_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_variable_type_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_variable_value_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_variable_value_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____options_variables_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____options_variables_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____search_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____search_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____variable_result_1_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____variable_result_1_0(((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_3), ((MR_Word) make__options_file__wrapper_arg_4));
    }
    *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file____Unify____variable_source_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3)
{
  {
    MR_Word make__options_file__conv0_HeadVar__1_1;

    {
      make__options_file____Compare____variable_source_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * make__options_file__HeadVar__1_1)
{
  {
    MR_bool make__options_file__succeeded;

    *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1110__1_1_p_0(
  MR_String make__options_file__LambdaHeadVar__1_51)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = mercury__string__prefix_2_p_0(make__options_file__LambdaHeadVar__1_51, (MR_String) "-l");
    }
    make__options_file__succeeded = !(make__options_file__succeeded);
    return make__options_file__succeeded;
  }
}

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(
  MR_String make__options_file__OptionName_9,
  MR_String make__options_file__LambdaHeadVar__1_14)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__LambdaHeadVar__2_15;
    MR_Word make__options_file__V_16_16;

    {
      make__options_file__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 0) = ((MR_Box) (make__options_file__LambdaHeadVar__1_14));
      MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__options_file__LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__options_file__LambdaHeadVar__2_15, 0) = ((MR_Box) (make__options_file__OptionName_9));
      MR_hl_field(MR_mktag(1), make__options_file__LambdaHeadVar__2_15, 1) = ((MR_Box) (make__options_file__V_16_16));
    }
    return make__options_file__LambdaHeadVar__2_15;
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__868__1_2_p_0(
  MR_Word make__options_file__LambdaHeadVar__1_24,
  MR_Word * make__options_file__LambdaHeadVar__2_25)
{
  {
    MR_bool make__options_file__succeeded;

    if ((make__options_file__LambdaHeadVar__1_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__options_file__LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        make__options_file__succeeded = MR_TRUE;
      }
    else
    if (((MR_tag((MR_Word) make__options_file__LambdaHeadVar__1_24)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word make__options_file__Value_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__LambdaHeadVar__1_24, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__options_file__LambdaHeadVar__2_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Value_16));
        }
        make__options_file__succeeded = MR_TRUE;
      }
    else
      make__options_file__succeeded = MR_FALSE;
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__739__1_2_p_0(
  MR_Word make__options_file__Chars_3,
  MR_Word * make__options_file__LambdaHeadVar__1_11)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__V_18_18;

    {
      make__options_file__V_18_18 = make__options_file__split_into_words_2_2_f_0(make__options_file__Chars_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      *make__options_file__LambdaHeadVar__1_11 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_18_18);
    }
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__641__1_2_p_0(
  MR_Word make__options_file__HeadVar__1_13,
  MR_Char make__options_file__HeadVar__2_20)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__HeadVar__1_13, ((MR_Box) (MR_Word) (make__options_file__HeadVar__2_20)));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__OptionsFile_8,
  MR_Word make__options_file__Variables0_9,
  MR_Word * make__options_file__LambdaHeadVar__1_22)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__read_options_file_params_9_p_0(make__options_file__Globals_7, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__OptionsFile_8, make__options_file__Variables0_9, make__options_file__LambdaHeadVar__1_22);
    }
  }
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
  MR_Word make__options_file__TypeInfo_for_T_18,
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_16 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_17 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_16 == make__options_file__CastY_17);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__options_file__V_20_20 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__options_file__V_15_15 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__3_3), (MR_Integer) 1);

                  {
                    parse_tree__error_util____Compare____error_spec_0_0(make__options_file__HeadVar__1_1, make__options_file__V_20_20, make__options_file__V_15_15);
                  }
                }
                break;
              case (MR_Integer) 2:
                *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box make__options_file__V_21_21 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box make__options_file__V_5_5 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(make__options_file__TypeInfo_for_T_18, make__options_file__HeadVar__1_1, make__options_file__V_21_21, make__options_file__V_5_5);
                  }
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
  MR_Word make__options_file__TypeInfo_for_T_11,
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
            MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

            make__options_file__succeeded = (make__options_file__CastY_6 == make__options_file__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__options_file__V_7_7 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__1_1), (MR_Integer) 1);
            MR_Word make__options_file__V_8_8;

            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__options_file__succeeded)
              {
                make__options_file__V_8_8 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__2_2), (MR_Integer) 1);
                {
                  make__options_file__succeeded = parse_tree__error_util____Unify____error_spec_0_0(make__options_file__V_7_7, make__options_file__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box make__options_file__V_3_3 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__1_1, (MR_Integer) 0));
            MR_Box make__options_file__V_4_4;

            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (make__options_file__succeeded)
              {
                make__options_file__V_4_4 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0));
                {
                  make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_for_T_11, make__options_file__V_3_3, make__options_file__V_4_4);
                }
              }
          }
          break;
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____search_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

    return make__options_file__succeeded;
  }
}

void MR_CALL 
make__options_file____Compare____options_variables_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__Cast_HeadVar1_4 = make__options_file__HeadVar__2_2;
    MR_Word make__options_file__Cast_HeadVar2_5 = make__options_file__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__Cast_HeadVar1_4)), ((MR_Box) (make__options_file__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__Cast_HeadVar1_3 = make__options_file__HeadVar__1_1;
    MR_Word make__options_file__Cast_HeadVar2_4 = make__options_file__HeadVar__2_2;

    {
      make__options_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_1[0], ((MR_Box) (make__options_file__Cast_HeadVar1_3)), ((MR_Box) (make__options_file__Cast_HeadVar2_4)));
    }
    return make__options_file__succeeded;
  }
}

void MR_CALL 
make__options_file____Compare____options_variable_value_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_12 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_13 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_12 == make__options_file__CastY_13);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__options_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word make__options_file__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], &make__options_file__V_10_10, ((MR_Box) (make__options_file__V_4_4)), ((MR_Box) (make__options_file__V_7_7)));
        }
        make__options_file__succeeded = (make__options_file__V_10_10 == (MR_Integer) 0);
        make__options_file__succeeded = !(make__options_file__succeeded);
        if (make__options_file__succeeded)
          *make__options_file__HeadVar__1_1 = make__options_file__V_10_10;
        else
          {
            MR_Word make__options_file__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &make__options_file__V_11_11, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_8_8)));
            }
            make__options_file__succeeded = (make__options_file__V_11_11 == (MR_Integer) 0);
            make__options_file__succeeded = !(make__options_file__succeeded);
            if (make__options_file__succeeded)
              *make__options_file__HeadVar__1_1 = make__options_file__V_11_11;
            else
              {
                MR_Integer make__options_file__V_17_17 = (MR_Integer) make__options_file__V_6_6;
                MR_Integer make__options_file__V_18_18 = (MR_Integer) make__options_file__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_17_17, make__options_file__V_18_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
      {
        MR_Word make__options_file__TypeInfo_12_12;
        MR_Word make__options_file__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word make__options_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));

        {
          make__options_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_2[3], ((MR_Box) (make__options_file__V_3_3)), ((MR_Box) (make__options_file__V_6_6)));
        }
        if (make__options_file__succeeded)
          {
            make__options_file__TypeInfo_12_12 = (MR_Word) &make__options_file_scalar_common_2[0];
            {
              make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_12_12, ((MR_Box) (make__options_file__V_4_4)), ((MR_Box) (make__options_file__V_7_7)));
            }
            if (make__options_file__succeeded)
              make__options_file__succeeded = (make__options_file__V_5_5 == make__options_file__V_8_8);
          }
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_10 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_11 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_10 == make__options_file__CastY_11);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(make__options_file__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__options_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(make__options_file__HeadVar__1_1, make__options_file__V_13_13, make__options_file__V_9_9);
                  }
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
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(make__options_file__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer make__options_file__CastX_3 = (MR_Integer) make__options_file__HeadVar__1_1;
                MR_Integer make__options_file__CastY_4 = (MR_Integer) make__options_file__HeadVar__2_2;

                make__options_file__succeeded = (make__options_file__CastY_4 == make__options_file__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
                MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

                make__options_file__succeeded = (make__options_file__CastY_6 == make__options_file__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__options_file__V_8_8;

            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__options_file__succeeded)
              {
                make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
                {
                  make__options_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__options_file__V_7_7, make__options_file__V_8_8);
                }
              }
          }
          break;
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_String make__options_file__HeadVar__2_2,
  MR_String make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_String make__options_file__Cast_HeadVar1_4 = make__options_file__HeadVar__2_2;
    MR_String make__options_file__Cast_HeadVar2_5 = make__options_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
  MR_String make__options_file__HeadVar__1_1,
  MR_String make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_String make__options_file__Cast_HeadVar1_3 = make__options_file__HeadVar__1_1;
    MR_String make__options_file__Cast_HeadVar2_4 = make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (strcmp(make__options_file__Cast_HeadVar1_3, make__options_file__Cast_HeadVar2_4) == 0);
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_27 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_28 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_27 == make__options_file__CastY_28);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word make__options_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__options_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
        MR_String make__options_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) make__options_file__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String make__options_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word make__options_file__V_10_10;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&make__options_file__V_10_10, make__options_file__V_36_36, make__options_file__V_7_7);
            }
            make__options_file__succeeded = (make__options_file__V_10_10 == (MR_Integer) 0);
            make__options_file__succeeded = !(make__options_file__succeeded);
            if (make__options_file__succeeded)
              *make__options_file__HeadVar__1_1 = make__options_file__V_10_10;
            else
              {
                MR_Word make__options_file__V_11_11;
                MR_Integer make__options_file__V_39_39 = (MR_Integer) make__options_file__V_35_35;
                MR_Integer make__options_file__V_40_40 = (MR_Integer) make__options_file__V_8_8;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__options_file__V_11_11, make__options_file__V_39_39, make__options_file__V_40_40);
                }
                make__options_file__succeeded = (make__options_file__V_11_11 == (MR_Integer) 0);
                make__options_file__succeeded = !(make__options_file__succeeded);
                if (make__options_file__succeeded)
                  *make__options_file__HeadVar__1_1 = make__options_file__V_11_11;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__V_34_34)), ((MR_Box) (make__options_file__V_9_9)));
                    }
                  }
              }
          }
        else
          *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word make__options_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__options_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) make__options_file__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word make__options_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word make__options_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word make__options_file__V_26_26;
            MR_Integer make__options_file__V_41_41 = (MR_Integer) make__options_file__V_38_38;
            MR_Integer make__options_file__V_42_42 = (MR_Integer) make__options_file__V_24_24;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&make__options_file__V_26_26, make__options_file__V_41_41, make__options_file__V_42_42);
            }
            make__options_file__succeeded = (make__options_file__V_26_26 == (MR_Integer) 0);
            make__options_file__succeeded = !(make__options_file__succeeded);
            if (make__options_file__succeeded)
              *make__options_file__HeadVar__1_1 = make__options_file__V_26_26;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__V_37_37)), ((MR_Box) (make__options_file__V_25_25)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_13 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_14 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_13 == make__options_file__CastY_14);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) make__options_file__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word make__options_file__TypeInfo_15_15;
        MR_String make__options_file__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 2)));
        MR_String make__options_file__V_6_6;
        MR_Word make__options_file__V_7_7;
        MR_Word make__options_file__V_8_8;

        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (make__options_file__succeeded)
          {
            make__options_file__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
            make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
            make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
            make__options_file__succeeded = (strcmp(make__options_file__V_3_3, make__options_file__V_6_6) == 0);
            if (make__options_file__succeeded)
              {
                make__options_file__succeeded = (make__options_file__V_4_4 == make__options_file__V_7_7);
                if (make__options_file__succeeded)
                  {
                    make__options_file__TypeInfo_15_15 = (MR_Word) &make__options_file_scalar_common_2[3];
                    {
                      make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_15_15, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_8_8)));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word make__options_file__TypeInfo_16_16;
        MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__options_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__options_file__V_11_11;
        MR_Word make__options_file__V_12_12;

        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (make__options_file__succeeded)
          {
            make__options_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
            make__options_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
            make__options_file__succeeded = (make__options_file__V_9_9 == make__options_file__V_11_11);
            if (make__options_file__succeeded)
              {
                make__options_file__TypeInfo_16_16 = (MR_Word) &make__options_file_scalar_common_2[3];
                {
                  make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_16_16, ((MR_Box) (make__options_file__V_10_10)), ((MR_Box) (make__options_file__V_12_12)));
                }
              }
          }
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_6 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_7 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_6 == make__options_file__CastY_7);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String make__options_file__V_4_4 = (MR_String) make__options_file__HeadVar__2_2;
        MR_String make__options_file__V_5_5 = (MR_String) make__options_file__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_4_4, make__options_file__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_5 == make__options_file__CastY_6);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
      {
        MR_String make__options_file__V_3_3 = (MR_String) make__options_file__HeadVar__1_1;
        MR_String make__options_file__V_4_4 = (MR_String) make__options_file__HeadVar__2_2;

        make__options_file__succeeded = (strcmp(make__options_file__V_3_3, make__options_file__V_4_4) == 0);
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_13 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__CastY_14 = (MR_Integer) make__options_file__HeadVar__3_3;

    make__options_file__succeeded = (make__options_file__CastX_13 == make__options_file__CastY_14);
    if (make__options_file__succeeded)
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((make__options_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
      else
        *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_String make__options_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__options_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word make__options_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_String make__options_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word make__options_file__V_12_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &make__options_file__V_12_12, ((MR_Box) (make__options_file__V_18_18)), ((MR_Box) (make__options_file__V_10_10)));
            }
            make__options_file__succeeded = (make__options_file__V_12_12 == (MR_Integer) 0);
            make__options_file__succeeded = !(make__options_file__succeeded);
            if (make__options_file__succeeded)
              *make__options_file__HeadVar__1_1 = make__options_file__V_12_12;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_17_17, make__options_file__V_11_11);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
    if (make__options_file__succeeded)
      make__options_file__succeeded = MR_TRUE;
    else
    if ((make__options_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer make__options_file__CastX_3 = (MR_Integer) make__options_file__HeadVar__1_1;
        MR_Integer make__options_file__CastY_4 = (MR_Integer) make__options_file__HeadVar__2_2;

        make__options_file__succeeded = (make__options_file__CastY_4 == make__options_file__CastX_3);
      }
    else
      {
        MR_Word make__options_file__TypeInfo_11_11;
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_String make__options_file__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__options_file__V_7_7;
        MR_String make__options_file__V_8_8;

        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (make__options_file__succeeded)
          {
            make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
            make__options_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
            make__options_file__TypeInfo_11_11 = (MR_Word) &make__options_file_scalar_common_2[0];
            {
              make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_11_11, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_7_7)));
            }
            if (make__options_file__succeeded)
              make__options_file__succeeded = (strcmp(make__options_file__V_6_6, make__options_file__V_8_8) == 0);
          }
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
  MR_Word * make__options_file__HeadVar__1_1)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(make__options_file__HeadVar__1_1);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__succeeded = make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0(
  MR_Word * make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__HeadVar__3_3)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
  MR_Word make__options_file__HeadVar__2_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
  MR_Word make__options_file__Variables_8,
  MR_String make__options_file__Var_9,
  MR_Word * make__options_file__Value_10,
  MR_Word make__options_file__STATE_VARIABLE_Undef_0_18,
  MR_Word * make__options_file__STATE_VARIABLE_Undef_19)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__MaybeValue_13;

    {
      mercury__io__get_environment_var_4_p_0(make__options_file__Var_9, &make__options_file__MaybeValue_13);
    }
    if ((make__options_file__MaybeValue_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__options_file__Value0_15;
        MR_Word make__options_file__V_23_23;
        MR_Box make__options_file__conv0_V_23_23;
        MR_Word make__options_file__V_16_16;
        MR_Word make__options_file__V_17_17;

        {
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__Variables_8, ((MR_Box) (make__options_file__Var_9)), &make__options_file__conv0_V_23_23);
        }
        if (make__options_file__succeeded)
          {
            make__options_file__V_23_23 = ((MR_Word) make__options_file__conv0_V_23_23);
            make__options_file__succeeded = MR_TRUE;
          }
        if (make__options_file__succeeded)
          {
            make__options_file__Value0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 0)));
            make__options_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 1)));
            make__options_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 2)));
            make__options_file__succeeded = MR_TRUE;
          }
        if (make__options_file__succeeded)
          {
            *make__options_file__Value_10 = make__options_file__Value0_15;
            *make__options_file__STATE_VARIABLE_Undef_19 = make__options_file__STATE_VARIABLE_Undef_0_18;
          }
        else
          {
            *make__options_file__Value_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *make__options_file__STATE_VARIABLE_Undef_19 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Var_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Undef_0_18));
            }
          }
      }
    else
      {
        MR_String make__options_file__ValueString_14 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeValue_13, (MR_Integer) 0)));

        {
          *make__options_file__Value_10 = mercury__string__to_char_list_1_f_0(make__options_file__ValueString_14);
        }
        *make__options_file__STATE_VARIABLE_Undef_19 = make__options_file__STATE_VARIABLE_Undef_0_18;
      }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv1_LambdaHeadVar__1_11;

    {
      make__options_file__IntroducedFrom__pred__checked_split_into_words__739__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), &make__options_file__conv1_LambdaHeadVar__1_11);
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv1_LambdaHeadVar__1_11));
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
  MR_Word make__options_file__LookupEnv_7,
  MR_Word make__options_file__Vars_8,
  MR_String make__options_file__VarName_9,
  MR_Word * make__options_file__Result_10)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__MaybeEnvValue_12;

    switch (make__options_file__LookupEnv_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__options_file__MaybeEnvValue_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          mercury__io__get_environment_var_4_p_0(make__options_file__VarName_9, &make__options_file__MaybeEnvValue_12);
        }
        break;
    }
    if ((make__options_file__MaybeEnvValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__options_file__MapValue_18;
        MR_Box make__options_file__conv0_MapValue_18;

        {
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__Vars_8, ((MR_Box) (make__options_file__VarName_9)), &make__options_file__conv0_MapValue_18);
        }
        if (make__options_file__succeeded)
          {
            make__options_file__MapValue_18 = ((MR_Word) make__options_file__conv0_MapValue_18);
            make__options_file__succeeded = MR_TRUE;
          }
        if (make__options_file__succeeded)
          {
            MR_Word make__options_file__Words_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 1)));
            MR_Word make__options_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 0)));
            MR_Word make__options_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 2)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__options_file__Result_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__options_file__Words_20));
            }
          }
        else
          *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String make__options_file__EnvValue_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeEnvValue_12, (MR_Integer) 0)));
        MR_Word make__options_file__SplitResult_14;
        MR_Word make__options_file__V_25_25;
        MR_Word make__options_file__TryResult_54;
        MR_Word make__options_file__V_59_59;

        {
          make__options_file__V_25_25 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_13);
        }
        {
          make__options_file__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 0) = ((MR_Box) (&make__options_file_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 1) = ((MR_Box) (make__options_file__lookup_variable_words_maybe_env_6_p_0_1));
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 3) = ((MR_Box) (make__options_file__V_25_25));
        }
        {
          mercury__exception__try_2_p_0((MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_59_59, &make__options_file__TryResult_54);
        }
        if (((MR_tag((MR_Word) make__options_file__TryResult_54)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word make__options_file__Exception_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__TryResult_54, (MR_Integer) 0)));
            MR_String make__options_file__Msg_58;
            MR_Word make__options_file__V_61_61;
            MR_Box make__options_file__conv2_V_61_61;

            {
              make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &make__options_file__conv2_V_61_61, make__options_file__Exception_57);
            }
            if (make__options_file__succeeded)
              {
                make__options_file__V_61_61 = ((MR_Word) make__options_file__conv2_V_61_61);
                make__options_file__succeeded = MR_TRUE;
              }
            if (make__options_file__succeeded)
              {
                make__options_file__Msg_58 = (MR_String) make__options_file__V_61_61;
                make__options_file__succeeded = MR_TRUE;
              }
            if (make__options_file__succeeded)
              {
                make__options_file__SplitResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__SplitResult_14, 0) = ((MR_Box) (make__options_file__Msg_58));
              }
            else
              {
                {
                  mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_2[0], make__options_file__TryResult_54);
                  return;
                }
              }
          }
        else
          {
            MR_Word make__options_file__Words_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__TryResult_54, (MR_Integer) 0)));

            {
              make__options_file__SplitResult_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__SplitResult_14, 0) = ((MR_Box) (make__options_file__Words_56));
            }
          }
        if (((MR_tag((MR_Word) make__options_file__SplitResult_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String make__options_file__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__SplitResult_14, (MR_Integer) 0)));
            MR_Word make__options_file__ErrorSpec_17;
            MR_Word make__options_file__V_28_28;
            MR_Word make__options_file__V_29_29;
            MR_Word make__options_file__V_33_33;
            MR_Word make__options_file__V_34_34;
            MR_Word make__options_file__V_35_35;
            MR_Word make__options_file__V_38_38;
            MR_Word make__options_file__V_39_39;
            MR_Word make__options_file__V_40_40;
            MR_Word make__options_file__V_43_43;
            MR_Word make__options_file__V_44_44;

            {
              make__options_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), make__options_file__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), make__options_file__V_39_39, 1) = ((MR_Box) (make__options_file__VarName_9));
            }
            {
              make__options_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), make__options_file__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__Msg_16));
            }
            {
              make__options_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_43_43, 0) = ((MR_Box) (make__options_file__V_44_44));
              MR_hl_field(MR_mktag(1), make__options_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[42])));
            }
            {
              make__options_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[41])));
              MR_hl_field(MR_mktag(1), make__options_file__V_40_40, 1) = ((MR_Box) (make__options_file__V_43_43));
            }
            {
              make__options_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_38_38, 0) = ((MR_Box) (make__options_file__V_39_39));
              MR_hl_field(MR_mktag(1), make__options_file__V_38_38, 1) = ((MR_Box) (make__options_file__V_40_40));
            }
            {
              make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[40])));
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 1) = ((MR_Box) (make__options_file__V_38_38));
            }
            {
              make__options_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__V_34_34, 0) = ((MR_Box) (make__options_file__V_35_35));
            }
            {
              make__options_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_33_33, 0) = ((MR_Box) (make__options_file__V_34_34));
              MR_hl_field(MR_mktag(1), make__options_file__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              make__options_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 3) = ((MR_Box) (make__options_file__V_33_33));
            }
            {
              make__options_file__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_28_28, 0) = ((MR_Box) (make__options_file__V_29_29));
              MR_hl_field(MR_mktag(1), make__options_file__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              make__options_file__ErrorSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 2) = ((MR_Box) (make__options_file__V_28_28));
            }
            *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) make__options_file__ErrorSpec_17);
          }
        else
          {
            MR_Word make__options_file__EnvWords_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__SplitResult_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__options_file__Result_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__options_file__EnvWords_15));
            }
          }
      }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_Word make__options_file__Vars_8,
  MR_String make__options_file__VarName_9,
  MR_Word * make__options_file__Result_10)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_8, make__options_file__VarName_9, make__options_file__Result_10);
    }
    switch (MR_tag((MR_Word) *make__options_file__Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__options_file__ErrorSpec_12 = (MR_Word) MR_body(((MR_Word) *make__options_file__Result_10), (MR_Integer) 1);
          MR_Integer make__options_file__V_13_13;
          MR_Integer make__options_file__V_14_14;

          {
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_12, make__options_file__Globals_7, (MR_Integer) 0, &make__options_file__V_13_13, (MR_Integer) 0, &make__options_file__V_14_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word make__options_file__TypeInfo_for_T_14,
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word make__options_file__HeadVar__2_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__HeadVar__3_3;

    switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__options_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
            break;
          case (MR_Integer) 2:
            make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
            break;
        }
        break;
      case (MR_Integer) 1:
        make__options_file__HeadVar__3_3 = make__options_file__HeadVar__1_1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__options_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__options_file__HeadVar__3_3 = make__options_file__HeadVar__1_1;
              break;
            case (MR_Integer) 1:
              make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word make__options_file__V2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word make__options_file__V_8_8;

                {
                  make__options_file__V_8_8 = mercury__list__f_43_43_2_f_0(make__options_file__TypeInfo_for_T_14, make__options_file__V_15_15, make__options_file__V2_7);
                }
                {
                  make__options_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), make__options_file__HeadVar__3_3, 0) = ((MR_Box) (make__options_file__V_8_8));
                }
              }
              break;
          }
        }
        break;
    }
    return make__options_file__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_String make__options_file__conv0_HeadVar__2_2;

    {
      make__options_file__conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__2_2));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1110__1_1_p_0(((MR_String) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
  MR_Word make__options_file__Globals_8,
  MR_Word make__options_file__Vars_9,
  MR_Word make__options_file__OptionsVariableClass_10,
  MR_Word make__options_file__FlagsVar_11,
  MR_Word * make__options_file__Result_12)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__TypeCtorInfo_87_87;
    MR_String make__options_file__VarName_14 = ((&make__options_file_vector_common_11[0 + make__options_file__FlagsVar_11]))->make__options_file__vector_common_type_11_0__vct_11_f_0;
    MR_Word make__options_file__DefaultFlagsResult_15;
    MR_Word make__options_file__FlagsResult_16;
    MR_Word make__options_file__ExtraFlagsResult_17;
    MR_Word make__options_file__ModuleFlagsResult_22;
    MR_Word make__options_file__Result0_23;
    MR_String make__options_file__V_38_38;
    MR_Word make__options_file__V_49_49;
    MR_Word make__options_file__V_50_50;
    MR_Word make__options_file__ModuleName_19;

    {
      make__options_file__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", make__options_file__VarName_14);
    }
    {
      make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_38_38, &make__options_file__DefaultFlagsResult_15);
    }
    switch (MR_tag((MR_Word) make__options_file__OptionsVariableClass_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__options_file__OptionsVariableClass_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__options_file__FlagsResult_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              make__options_file__ExtraFlagsResult_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String make__options_file__V_42_42;

              {
                make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__VarName_14, &make__options_file__FlagsResult_16);
              }
              {
                make__options_file__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", make__options_file__VarName_14);
              }
              {
                make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_42_42, &make__options_file__ExtraFlagsResult_17);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String make__options_file__V_42_42;

          {
            make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__VarName_14, &make__options_file__FlagsResult_16);
          }
          {
            make__options_file__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", make__options_file__VarName_14);
          }
          {
            make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_42_42, &make__options_file__ExtraFlagsResult_17);
          }
        }
        break;
    }
    make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__OptionsVariableClass_10)) == (MR_mktag((MR_Integer) 1)));
    if (make__options_file__succeeded)
      {
        make__options_file__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsVariableClass_10, (MR_Integer) 0)));
        if (((MR_Integer) 6782974 & (((MR_Integer) 1 << make__options_file__FlagsVar_11))))
          {
            make__options_file__succeeded = MR_TRUE;
          }
        else
          make__options_file__succeeded = MR_FALSE;
      }
    if (make__options_file__succeeded)
      {
        MR_String make__options_file__ModuleFileNameBase_20;
        MR_String make__options_file__ModuleVarName_21;
        MR_String make__options_file__V_46_46;

        {
          make__options_file__ModuleFileNameBase_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(make__options_file__ModuleName_19);
        }
        {
          make__options_file__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "-", make__options_file__ModuleFileNameBase_20);
        }
        {
          make__options_file__ModuleVarName_21 = mercury__string__f_43_43_2_f_0(make__options_file__VarName_14, make__options_file__V_46_46);
        }
        {
          make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__ModuleVarName_21, &make__options_file__ModuleFlagsResult_22);
        }
      }
    else
      make__options_file__ModuleFlagsResult_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    make__options_file__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      make__options_file__V_50_50 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__DefaultFlagsResult_15, make__options_file__FlagsResult_16);
    }
    {
      make__options_file__V_49_49 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__V_50_50, make__options_file__ExtraFlagsResult_17);
    }
    {
      make__options_file__Result0_23 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__V_49_49, make__options_file__ModuleFlagsResult_22);
    }
    switch (MR_tag((MR_Word) make__options_file__Result0_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__options_file__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *make__options_file__Result_12 = make__options_file__Result0_23;
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__options_file__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result0_23, (MR_Integer) 0)));

          make__options_file__succeeded = (make__options_file__FlagsVar_11 == (MR_Integer) 10);
          if (make__options_file__succeeded)
            {
              MR_Word make__options_file__BadLibs_28;

              {
                make__options_file__BadLibs_28 = mercury__list__filter_2_f_0(make__options_file__TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[15], make__options_file__V_25);
              }
              if ((make__options_file__BadLibs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *make__options_file__Result_12 = make__options_file__Result0_23;
              else
                {
                  MR_Word make__options_file__Pieces_31;
                  MR_Word make__options_file__ErrorSpec_33;
                  MR_Word make__options_file__V_53_53;
                  MR_Word make__options_file__V_56_56;
                  MR_Word make__options_file__V_59_59;
                  MR_Word make__options_file__V_62_62;
                  MR_Word make__options_file__V_63_63;
                  MR_Word make__options_file__V_73_73;
                  MR_Word make__options_file__V_74_74;
                  MR_Word make__options_file__V_78_78;
                  MR_Word make__options_file__V_79_79;
                  MR_Integer make__options_file__V_34_34;
                  MR_Integer make__options_file__V_35_35;

                  {
                    make__options_file__V_63_63 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[16], make__options_file__BadLibs_28);
                  }
                  {
                    make__options_file__V_62_62 = parse_tree__error_util__list_to_pieces_1_f_0(make__options_file__V_63_63);
                  }
                  {
                    make__options_file__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[39])));
                    MR_hl_field(MR_mktag(1), make__options_file__V_59_59, 1) = ((MR_Box) (make__options_file__V_62_62));
                  }
                  {
                    make__options_file__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[38])));
                    MR_hl_field(MR_mktag(1), make__options_file__V_56_56, 1) = ((MR_Box) (make__options_file__V_59_59));
                  }
                  {
                    make__options_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[37])));
                    MR_hl_field(MR_mktag(1), make__options_file__V_53_53, 1) = ((MR_Box) (make__options_file__V_56_56));
                  }
                  {
                    make__options_file__Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, make__options_file__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[33]));
                  }
                  {
                    make__options_file__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__options_file__V_79_79, 0) = ((MR_Box) (make__options_file__Pieces_31));
                  }
                  {
                    make__options_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_78_78, 0) = ((MR_Box) (make__options_file__V_79_79));
                    MR_hl_field(MR_mktag(1), make__options_file__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    make__options_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 1) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 2) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 3) = ((MR_Box) (make__options_file__V_78_78));
                  }
                  {
                    make__options_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_73_73, 0) = ((MR_Box) (make__options_file__V_74_74));
                    MR_hl_field(MR_mktag(1), make__options_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    make__options_file__ErrorSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 2) = ((MR_Box) (make__options_file__V_73_73));
                  }
                  {
                    parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_33, make__options_file__Globals_8, (MR_Integer) 0, &make__options_file__V_34_34, (MR_Integer) 0, &make__options_file__V_35_35);
                  }
                  *make__options_file__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) make__options_file__ErrorSpec_33);
                }
            }
          else
            *make__options_file__Result_12 = make__options_file__Result0_23;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_20(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv19_LambdaHeadVar__2_15;

    {
      make__options_file__conv19_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv19_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv18_LambdaHeadVar__2_15;

    {
      make__options_file__conv18_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv18_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv17_LambdaHeadVar__2_15;

    {
      make__options_file__conv17_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv17_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv16_LambdaHeadVar__2_15;

    {
      make__options_file__conv16_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv16_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv15_LambdaHeadVar__2_15;

    {
      make__options_file__conv15_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv15_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv14_LambdaHeadVar__2_15;

    {
      make__options_file__conv14_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv14_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv13_LambdaHeadVar__2_15;

    {
      make__options_file__conv13_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv13_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv12_LambdaHeadVar__2_15;

    {
      make__options_file__conv12_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv12_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv11_LambdaHeadVar__2_15;

    {
      make__options_file__conv11_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv11_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv10_LambdaHeadVar__2_15;

    {
      make__options_file__conv10_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv10_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv9_LambdaHeadVar__2_15;

    {
      make__options_file__conv9_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv9_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv8_LambdaHeadVar__2_15;

    {
      make__options_file__conv8_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv8_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv7_LambdaHeadVar__2_15;

    {
      make__options_file__conv7_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv7_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv6_LambdaHeadVar__2_15;

    {
      make__options_file__conv6_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv6_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv5_LambdaHeadVar__2_15;

    {
      make__options_file__conv5_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv5_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv4_LambdaHeadVar__2_15;

    {
      make__options_file__conv4_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv4_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv3_LambdaHeadVar__2_15;

    {
      make__options_file__conv3_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv3_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv2_LambdaHeadVar__2_15;

    {
      make__options_file__conv2_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv2_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv1_LambdaHeadVar__2_15;

    {
      make__options_file__conv1_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv1_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_LambdaHeadVar__2_15;

    {
      make__options_file__conv0_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1001__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_LambdaHeadVar__2_15));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
  MR_Word make__options_file__HeadVar__1_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__HeadVar__2_2;
    MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));

    if ((make__options_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__options_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word make__options_file__VariableValue_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_8_8, (MR_Integer) 0)));

        switch (make__options_file__V_9_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 13:
            {
              MR_Word make__options_file__TypeCtorInfo_19_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_17_17;
              MR_Word make__options_file__V_18_18;

              {
                make__options_file__V_18_18 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_25, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[3], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 1) = ((MR_Box) (make__options_file__V_18_18));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_25, make__options_file__V_17_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__options_file__TypeCtorInfo_19_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_75_75;
              MR_Word make__options_file__V_76_76;

              {
                make__options_file__V_76_76 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_78, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[4], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_75_75, 1) = ((MR_Box) (make__options_file__V_76_76));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_78, make__options_file__V_75_75);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word make__options_file__TypeCtorInfo_19_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_84_84;
              MR_Word make__options_file__V_85_85;

              {
                make__options_file__V_85_85 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_87, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[5], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_84_84, 1) = ((MR_Box) (make__options_file__V_85_85));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_87, make__options_file__V_84_84);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word make__options_file__TypeCtorInfo_19_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_93_93;
              MR_Word make__options_file__V_94_94;

              {
                make__options_file__V_94_94 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_96, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[6], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_93_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_93_93, 1) = ((MR_Box) (make__options_file__V_94_94));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_96, make__options_file__V_93_93);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word make__options_file__TypeCtorInfo_19_105 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_102_102;
              MR_Word make__options_file__V_103_103;

              {
                make__options_file__V_103_103 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_105, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[7], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_102_102, 1) = ((MR_Box) (make__options_file__V_103_103));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_105, make__options_file__V_102_102);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word make__options_file__TypeCtorInfo_19_114 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_111_111;
              MR_Word make__options_file__V_112_112;

              {
                make__options_file__V_112_112 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_114, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[8], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_111_111, 1) = ((MR_Box) (make__options_file__V_112_112));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_114, make__options_file__V_111_111);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word make__options_file__TypeCtorInfo_19_123 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_120_120;
              MR_Word make__options_file__V_121_121;

              {
                make__options_file__V_121_121 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_123, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[9], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_120_120, 1) = ((MR_Box) (make__options_file__V_121_121));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_123, make__options_file__V_120_120);
              }
            }
            break;
          case (MR_Integer) 0:
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
            break;
          case (MR_Integer) 18:
            {
              MR_Word make__options_file__TypeCtorInfo_19_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_131_131;
              MR_Word make__options_file__V_132_132;

              {
                make__options_file__V_132_132 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_134, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[10], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_131_131, 1) = ((MR_Box) (make__options_file__V_132_132));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_134, make__options_file__V_131_131);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word make__options_file__TypeCtorInfo_19_143 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_140_140;
              MR_Word make__options_file__V_141_141;

              {
                make__options_file__V_141_141 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_143, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[11], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_140_140, 1) = ((MR_Box) (make__options_file__V_141_141));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_143, make__options_file__V_140_140);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word make__options_file__TypeCtorInfo_19_152 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_149_149;
              MR_Word make__options_file__V_150_150;

              {
                make__options_file__V_150_150 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_152, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[12], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_149_149, 1) = ((MR_Box) (make__options_file__V_150_150));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_152, make__options_file__V_149_149);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word make__options_file__TypeCtorInfo_19_161 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_158_158;
              MR_Word make__options_file__V_159_159;

              {
                make__options_file__V_159_159 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_161, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[13], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_158_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_158_158, 1) = ((MR_Box) (make__options_file__V_159_159));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_161, make__options_file__V_158_158);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word make__options_file__TypeCtorInfo_19_170 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_167_167;
              MR_Word make__options_file__V_168_168;

              {
                make__options_file__V_168_168 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_170, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[14], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_167_167, 1) = ((MR_Box) (make__options_file__V_168_168));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_170, make__options_file__V_167_167);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word make__options_file__TypeCtorInfo_19_178 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__MMCOptionType_172 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[28]);
              MR_Word make__options_file__InitialOptions_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_172, (MR_Integer) 0)));
              MR_String make__options_file__OptionName_174 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_172, (MR_Integer) 1)));
              MR_Word make__options_file__V_175_175;
              MR_Word make__options_file__V_176_176;
              MR_Word make__options_file__V_177_177;

              {
                make__options_file__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__options_file__V_177_177, 0) = ((MR_Box) (&make__options_file_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), make__options_file__V_177_177, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_13));
                MR_hl_field(MR_mktag(0), make__options_file__V_177_177, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), make__options_file__V_177_177, 3) = ((MR_Box) (make__options_file__OptionName_174));
              }
              {
                make__options_file__V_176_176 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_178, (MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_177_177, make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_175_175, 0) = ((MR_Box) (make__options_file__InitialOptions_173));
                MR_hl_field(MR_mktag(1), make__options_file__V_175_175, 1) = ((MR_Box) (make__options_file__V_176_176));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_178, make__options_file__V_175_175);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word make__options_file__TypeCtorInfo_19_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__MMCOptionType_180 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[30]);
              MR_Word make__options_file__InitialOptions_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_180, (MR_Integer) 0)));
              MR_String make__options_file__OptionName_182 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_180, (MR_Integer) 1)));
              MR_Word make__options_file__V_183_183;
              MR_Word make__options_file__V_184_184;
              MR_Word make__options_file__V_185_185;

              {
                make__options_file__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__options_file__V_185_185, 0) = ((MR_Box) (&make__options_file_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), make__options_file__V_185_185, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_14));
                MR_hl_field(MR_mktag(0), make__options_file__V_185_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), make__options_file__V_185_185, 3) = ((MR_Box) (make__options_file__OptionName_182));
              }
              {
                make__options_file__V_184_184 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_186, (MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_185_185, make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_183_183, 0) = ((MR_Box) (make__options_file__InitialOptions_181));
                MR_hl_field(MR_mktag(1), make__options_file__V_183_183, 1) = ((MR_Box) (make__options_file__V_184_184));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_186, make__options_file__V_183_183);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word make__options_file__TypeCtorInfo_19_195 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_192_192;
              MR_Word make__options_file__V_193_193;

              {
                make__options_file__V_193_193 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_195, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[15], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_192_192, 1) = ((MR_Box) (make__options_file__V_193_193));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_195, make__options_file__V_192_192);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word make__options_file__TypeCtorInfo_19_204 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_201_201;
              MR_Word make__options_file__V_202_202;

              {
                make__options_file__V_202_202 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_204, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[16], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_201_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_201_201, 1) = ((MR_Box) (make__options_file__V_202_202));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_204, make__options_file__V_201_201);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word make__options_file__TypeCtorInfo_19_213 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_210_210;
              MR_Word make__options_file__V_211_211;

              {
                make__options_file__V_211_211 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_213, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[17], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_210_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_210_210, 1) = ((MR_Box) (make__options_file__V_211_211));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_213, make__options_file__V_210_210);
              }
            }
            break;
          case (MR_Integer) 10:
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
            break;
          case (MR_Integer) 9:
            {
              MR_Word make__options_file__TypeCtorInfo_19_224 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_221_221;
              MR_Word make__options_file__V_222_222;

              {
                make__options_file__V_222_222 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_224, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[18], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_221_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_221_221, 1) = ((MR_Box) (make__options_file__V_222_222));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_224, make__options_file__V_221_221);
              }
            }
            break;
          case (MR_Integer) 1:
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
            break;
          case (MR_Integer) 5:
            {
              MR_Word make__options_file__TypeCtorInfo_19_235 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_232_232;
              MR_Word make__options_file__V_233_233;

              {
                make__options_file__V_233_233 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_235, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[19], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_232_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_232_232, 1) = ((MR_Box) (make__options_file__V_233_233));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_235, make__options_file__V_232_232);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word make__options_file__TypeCtorInfo_19_244 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word make__options_file__V_241_241;
              MR_Word make__options_file__V_242_242;

              {
                make__options_file__V_242_242 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_244, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[20], make__options_file__VariableValue_6);
              }
              {
                make__options_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_241_241, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), make__options_file__V_241_241, 1) = ((MR_Box) (make__options_file__V_242_242));
              }
              {
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_244, make__options_file__V_241_241);
              }
            }
            break;
        }
      }
    return make__options_file__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv3_HeadVar__2_2;

    {
      make__options_file__conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv3_HeadVar__2_2));
    return make__options_file__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv2_LambdaHeadVar__2_25;

    {
      make__options_file__succeeded = make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__868__1_2_p_0(((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv2_LambdaHeadVar__2_25);
    }
    if (make__options_file__succeeded)
      {
        *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv2_LambdaHeadVar__2_25));
        make__options_file__succeeded = MR_TRUE;
      }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2,
  MR_Box make__options_file__wrapper_arg_3,
  MR_Box * make__options_file__wrapper_arg_4)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_Result_12;

    {
      make__options_file__lookup_options_variable_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), ((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv0_Result_12);
    }
    *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_Result_12));
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_Word make__options_file__Vars_8,
  MR_Word make__options_file__MaybeModuleName_9,
  MR_Word * make__options_file__Result_10)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__TypeCtorInfo_37_37;
    MR_Word make__options_file__TypeInfo_38_38;
    MR_Word make__options_file__VariableTypes_12 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[26]);
    MR_Word make__options_file__Results_13;
    MR_Word make__options_file__V_21_21;
    MR_Box make__options_file__conv1_STATE_VARIABLE_IO_20;
    MR_Word make__options_file__Values_17;

    {
      make__options_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 0) = ((MR_Box) (&make__options_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 1) = ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 3) = ((MR_Box) (make__options_file__Globals_7));
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 4) = ((MR_Box) (make__options_file__Vars_8));
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 5) = ((MR_Box) (make__options_file__MaybeModuleName_9));
    }
    make__options_file__TypeCtorInfo_37_37 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_type_0;
    make__options_file__TypeInfo_38_38 = (MR_Word) &make__options_file_scalar_common_2[1];
    {
      mercury__list__map_foldl_5_p_2(make__options_file__TypeCtorInfo_37_37, make__options_file__TypeInfo_38_38, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_21_21, make__options_file__VariableTypes_12, &make__options_file__Results_13, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_20);
    }
    {
      make__options_file__succeeded = mercury__list__map_3_p_2(make__options_file__TypeInfo_38_38, (MR_Word) &make__options_file_scalar_common_2[2], (MR_Word) &make__options_file_scalar_common_1[13], make__options_file__Results_13, &make__options_file__Values_17);
    }
    if (make__options_file__succeeded)
      {
        MR_Word make__options_file__VariableValues_18;
        MR_Word make__options_file__V_26_26;
        MR_Word make__options_file__V_28_28;
        MR_Word make__options_file__V_29_29;

        {
          mercury__assoc_list__from_corresponding_lists_3_p_0(make__options_file__TypeCtorInfo_37_37, (MR_Word) &make__options_file_scalar_common_2[2], make__options_file__VariableTypes_12, make__options_file__Values_17, &make__options_file__VariableValues_18);
        }
        {
          make__options_file__V_29_29 = mercury__list__map_2_f_0((MR_Word) &make__options_file_scalar_common_1[2], (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_1[14], make__options_file__VariableValues_18);
        }
        {
          make__options_file__V_28_28 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_29_29);
        }
        {
          make__options_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 0) = ((MR_Box) ((MR_String) "-O2"));
          MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 1) = ((MR_Box) (make__options_file__V_28_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__options_file__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__V_26_26));
        }
      }
    else
      *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
make__options_file__get_word_2_4_p_0(
  MR_Word make__options_file__HeadVar__1_1,
  MR_Word * make__options_file__RevWord_2,
  MR_Word make__options_file__HeadVar__3_3,
  MR_Word * make__options_file__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;

        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__options_file__RevWord_2 = make__options_file__HeadVar__1_1;
            *make__options_file__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Char make__options_file__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word make__options_file__Chars0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));

            {
              make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(make__options_file__Char_8);
            }
            if (make__options_file__succeeded)
              {
                *make__options_file__HeadVar__4_4 = make__options_file__Chars0_9;
                *make__options_file__RevWord_2 = make__options_file__HeadVar__1_1;
              }
            else
              {
                make__options_file__succeeded = (make__options_file__Char_8 == (MR_Char) 34);
                if (make__options_file__succeeded)
                  {
                    MR_Word make__options_file__RevStringChars_11;
                    MR_Word make__options_file__Chars1_12;
                    MR_Word make__options_file__V_15_15;

                    {
                      make__options_file__parse_string_chars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevStringChars_11, make__options_file__Chars0_9, &make__options_file__Chars1_12);
                    }
                    {
                      make__options_file__V_15_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevStringChars_11, make__options_file__HeadVar__1_1);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_15_15;
                      MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_12;

                      make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                      make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
                else
                  {
                    make__options_file__succeeded = (make__options_file__Char_8 == (MR_Char) 92);
                    if (make__options_file__succeeded)
                      if ((make__options_file__Chars0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *make__options_file__RevWord_2 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
                          }
                          *make__options_file__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                      else
                        {
                          MR_Char make__options_file__Char2_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_9, (MR_Integer) 0)));
                          MR_Word make__options_file__Chars1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_9, (MR_Integer) 1)));

                          switch (make__options_file__Char2_13) {
                            default:
                              make__options_file__succeeded = MR_FALSE;
                              break;
                            case (MR_Char) 34:
                              make__options_file__succeeded = MR_TRUE;
                              break;
                            case (MR_Char) 92:
                              make__options_file__succeeded = MR_TRUE;
                              break;
                          }
                          if (make__options_file__succeeded)
                            {
                              MR_Word make__options_file__V_16_16;

                              {
                                make__options_file__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_13));
                                MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
                              }
                              /* direct tailcall eliminated */
                              {
                                MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_16_16;
                                MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_20;

                                make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                                make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
                              }
                              continue;
                            }
                          else
                            {
                              MR_Word make__options_file__V_17_17;
                              MR_Word make__options_file__V_18_18;

                              {
                                make__options_file__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), make__options_file__V_18_18, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
                                MR_hl_field(MR_mktag(1), make__options_file__V_18_18, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
                              }
                              {
                                make__options_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_13));
                                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 1) = ((MR_Box) (make__options_file__V_18_18));
                              }
                              /* direct tailcall eliminated */
                              {
                                MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_17_17;
                                MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_20;

                                make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                                make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
                              }
                              continue;
                            }
                        }
                    else
                      {
                        MR_Word make__options_file__V_19_19;

                        {
                          make__options_file__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), make__options_file__V_19_19, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
                          MR_hl_field(MR_mktag(1), make__options_file__V_19_19, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_19_19;
                          MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars0_9;

                          make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                          make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
  MR_Word make__options_file__Chars0_4,
  MR_Word make__options_file__RevWords0_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;
        MR_Word make__options_file__RevWords_6;
        MR_Word make__options_file__Chars1_8;
        MR_Word make__options_file__V_7_7;

        {
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[12], make__options_file__Chars0_4, &make__options_file__V_7_7, &make__options_file__Chars1_8);
        }
        if ((make__options_file__Chars1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          make__options_file__RevWords_6 = make__options_file__RevWords0_5;
        else
          {
            MR_String make__options_file__Word_11;
            MR_Word make__options_file__Chars_12;
            MR_Word make__options_file__V_14_14;
            MR_Word make__options_file__RevWord_20;

            {
              make__options_file__get_word_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevWord_20, make__options_file__Chars1_8, &make__options_file__Chars_12);
            }
            {
              make__options_file__Word_11 = mercury__string__from_rev_char_list_1_f_0(make__options_file__RevWord_20);
            }
            {
              make__options_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 0) = ((MR_Box) (make__options_file__Word_11));
              MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 1) = ((MR_Box) (make__options_file__RevWords0_5));
            }
            /* direct tailcall eliminated */
            {
              MR_Word make__options_file__Chars0__tmp_copy_4 = make__options_file__Chars_12;
              MR_Word make__options_file__RevWords0__tmp_copy_5 = make__options_file__V_14_14;

              make__options_file__RevWords0_5 = make__options_file__RevWords0__tmp_copy_5;
              make__options_file__Chars0_4 = make__options_file__Chars0__tmp_copy_4;
            }
            continue;
          }
        return make__options_file__RevWords_6;
      }
      break;
    }
}

static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
  MR_Word * make__options_file__FoundEOF_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;
        MR_Word make__options_file__Result_23;

        {
          mercury__io__read_char_3_p_0(&make__options_file__Result_23);
        }
        switch (MR_tag((MR_Word) make__options_file__Result_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *make__options_file__FoundEOF_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Char make__options_file__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_23, (MR_Integer) 0)));

              make__options_file__succeeded = (make__options_file__Char_7 == (MR_Char) 10);
              if (make__options_file__succeeded)
                *make__options_file__FoundEOF_4 = (MR_Integer) 0;
              else
                {
                  /* direct tailcall eliminated */
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__options_file__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_23, (MR_Integer) 0)));
              MR_Word make__options_file__V_27_27;
              MR_String make__options_file__V_28_28;

              {
                make__options_file__V_28_28 = mercury__io__error_message_1_f_0(make__options_file__Error_25);
              }
              make__options_file__V_27_27 = (MR_Word) make__options_file__V_28_28;
              {
                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_27_27)));
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
make__options_file__parse_string_chars_4_p_0(
  MR_Word make__options_file__String0_1,
  MR_Word * make__options_file__String_2,
  MR_Word make__options_file__HeadVar__3_3,
  MR_Word * make__options_file__Chars_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;

        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
              return;
            }
          }
        else
          {
            MR_Char make__options_file__Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word make__options_file__Chars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));

            make__options_file__succeeded = (make__options_file__Char_12 == (MR_Char) 34);
            if (make__options_file__succeeded)
              {
                *make__options_file__Chars_4 = make__options_file__Chars0_13;
                *make__options_file__String_2 = make__options_file__String0_1;
              }
            else
              {
                make__options_file__succeeded = (make__options_file__Char_12 == (MR_Char) 92);
                if (make__options_file__succeeded)
                  if ((make__options_file__Chars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
                        return;
                      }
                    }
                  else
                    {
                      MR_Char make__options_file__Char2_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_13, (MR_Integer) 0)));
                      MR_Word make__options_file__Chars1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_13, (MR_Integer) 1)));
                      MR_Word make__options_file__String1_17;

                      make__options_file__succeeded = (make__options_file__Char2_15 == (MR_Char) 34);
                      if (make__options_file__succeeded)
                        {
                          make__options_file__String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), make__options_file__String1_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_15));
                          MR_hl_field(MR_mktag(1), make__options_file__String1_17, 1) = ((MR_Box) (make__options_file__String0_1));
                        }
                      else
                        {
                          MR_Word make__options_file__V_20_20;

                          {
                            make__options_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), make__options_file__V_20_20, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_12));
                            MR_hl_field(MR_mktag(1), make__options_file__V_20_20, 1) = ((MR_Box) (make__options_file__String0_1));
                          }
                          {
                            make__options_file__String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), make__options_file__String1_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_15));
                            MR_hl_field(MR_mktag(1), make__options_file__String1_17, 1) = ((MR_Box) (make__options_file__V_20_20));
                          }
                        }
                      /* direct tailcall eliminated */
                      {
                        MR_Word make__options_file__String0__tmp_copy_1 = make__options_file__String1_17;
                        MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_16;

                        make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                        make__options_file__String0_1 = make__options_file__String0__tmp_copy_1;
                      }
                      continue;
                    }
                else
                  {
                    MR_Word make__options_file__V_21_21;

                    {
                      make__options_file__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), make__options_file__V_21_21, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_12));
                      MR_hl_field(MR_mktag(1), make__options_file__V_21_21, 1) = ((MR_Box) (make__options_file__String0_1));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word make__options_file__String0__tmp_copy_1 = make__options_file__V_21_21;
                      MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars0_13;

                      make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
                      make__options_file__String0_1 = make__options_file__String0__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
  MR_Word make__options_file__IsFirst_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word * make__options_file__Var_3,
  MR_Word make__options_file__HeadVar__4_4,
  MR_Word * make__options_file__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;

        if ((make__options_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__options_file__Var_3 = make__options_file__HeadVar__2_2;
            *make__options_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Char make__options_file__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word make__options_file__Chars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__4_4, (MR_Integer) 1)));

            {
              make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(make__options_file__Char_11);
            }
            make__options_file__succeeded = !(make__options_file__succeeded);
            if (make__options_file__succeeded)
              switch (make__options_file__IsFirst_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    switch (make__options_file__Char_11) {
                      default:
                        make__options_file__succeeded = MR_FALSE;
                        break;
                      case (MR_Char) 45:
                        make__options_file__succeeded = MR_TRUE;
                        break;
                      case (MR_Char) 46:
                        make__options_file__succeeded = MR_TRUE;
                        break;
                    }
                    if (!(make__options_file__succeeded))
                      {
                        make__options_file__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(make__options_file__Char_11);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    make__options_file__succeeded = mercury__char__is_alpha_1_p_0(make__options_file__Char_11);
                  }
                  break;
              }
            if (make__options_file__succeeded)
              {
                MR_Word make__options_file__V_15_15;

                {
                  make__options_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__options_file__V_15_15, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_11));
                  MR_hl_field(MR_mktag(1), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__HeadVar__2_2));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__V_15_15;
                  MR_Word make__options_file__HeadVar__4__tmp_copy_4 = make__options_file__Chars0_12;

                  make__options_file__HeadVar__4_4 = make__options_file__HeadVar__4__tmp_copy_4;
                  make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
                  make__options_file__IsFirst_1 = (MR_Integer) 0;
                }
                continue;
              }
            else
              {
                *make__options_file__Var_3 = make__options_file__HeadVar__2_2;
                *make__options_file__HeadVar__5_5 = make__options_file__HeadVar__4_4;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = make__options_file__IntroducedFrom__pred__parse_variable__641__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__parse_options_line_2_p_0(
  MR_Word make__options_file__Line0_3,
  MR_Word * make__options_file__OptionsFileLine_4)
{
  {
    MR_bool make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word make__options_file__ErrorIfNotExist_6;
    MR_Word make__options_file__Line3_8;
    MR_Word make__options_file__Line2_7;
    MR_Word make__options_file__V_17_17;
    MR_Word make__options_file__Line1_5;
    MR_Char make__options_file__V_16_16;

    if (make__options_file__succeeded)
      {
        make__options_file__V_16_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line0_3, (MR_Integer) 0)));
        make__options_file__Line1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line0_3, (MR_Integer) 1)));
        make__options_file__succeeded = (make__options_file__V_16_16 == (MR_Char) 45);
      }
    if (make__options_file__succeeded)
      {
        make__options_file__ErrorIfNotExist_6 = (MR_Integer) 1;
        make__options_file__Line2_7 = make__options_file__Line1_5;
      }
    else
      {
        make__options_file__ErrorIfNotExist_6 = (MR_Integer) 0;
        make__options_file__Line2_7 = make__options_file__Line0_3;
      }
    {
      make__options_file__V_17_17 = mercury__string__to_char_list_1_f_0((MR_String) "include");
    }
    {
      make__options_file__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__V_17_17, &make__options_file__Line3_8, make__options_file__Line2_7);
    }
    if (make__options_file__succeeded)
      {
        MR_Word make__options_file__Line4_10;
        MR_Word make__options_file__V_9_9;

        {
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[8], make__options_file__Line3_8, &make__options_file__V_9_9, &make__options_file__Line4_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *make__options_file__OptionsFileLine_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__ErrorIfNotExist_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__Line4_10));
        }
      }
    else
      {
        MR_Word make__options_file__TypeCtorInfo_45_45;
        MR_String make__options_file__VarName_11;
        MR_Word make__options_file__Add_13;
        MR_Word make__options_file__VarValue_15;
        MR_Word make__options_file__Line1_37;
        MR_Word make__options_file__Line2_38;
        MR_Word make__options_file__Line4_40;
        MR_Word make__options_file__VarList_51;
        MR_Word make__options_file__V_12_12;
        MR_Word make__options_file__Line3_36;
        MR_Char make__options_file__V_21_21;
        MR_Word make__options_file__V_14_14;

        {
          make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__VarList_51, make__options_file__Line0_3, &make__options_file__Line1_37);
        }
        {
          mercury__string__from_rev_char_list_2_p_0(make__options_file__VarList_51, &make__options_file__VarName_11);
        }
        make__options_file__succeeded = (strcmp(make__options_file__VarName_11, (MR_String) "") == 0);
        if (make__options_file__succeeded)
          {
            MR_Word make__options_file__FirstWord_52;
            MR_Word make__options_file__V_58_58;
            MR_String make__options_file__V_59_59;
            MR_String make__options_file__V_61_61;
            MR_String make__options_file__V_62_62;
            MR_Word make__options_file__V_53_53;

            {
              mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[2], make__options_file__Line1_37, &make__options_file__FirstWord_52, &make__options_file__V_53_53);
            }
            {
              make__options_file__V_62_62 = mercury__string__from_char_list_1_f_0(make__options_file__FirstWord_52);
            }
            {
              make__options_file__V_61_61 = mercury__string__f_43_43_2_f_0(make__options_file__V_62_62, (MR_String) "\'");
            }
            {
              make__options_file__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", make__options_file__V_61_61);
            }
            make__options_file__V_58_58 = (MR_Word) make__options_file__V_59_59;
            {
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_58_58)));
              return;
            }
          }
        else
          {
          }
        make__options_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        {
          mercury__list__takewhile_4_p_0(make__options_file__TypeCtorInfo_45_45, (MR_Word) &make__options_file_scalar_common_1[10], make__options_file__Line1_37, &make__options_file__V_12_12, &make__options_file__Line2_38);
        }
        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
        if (make__options_file__succeeded)
          {
            make__options_file__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
            make__options_file__Line3_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
            make__options_file__succeeded = (make__options_file__V_21_21 == (MR_Char) 61);
          }
        if (make__options_file__succeeded)
          {
            make__options_file__Add_13 = (MR_Integer) 0;
            make__options_file__Line4_40 = make__options_file__Line3_36;
          }
        else
          {
            MR_Word make__options_file__Line3_35;
            MR_Char make__options_file__V_22_22;
            MR_Word make__options_file__V_23_23;
            MR_Char make__options_file__V_24_24;

            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
            if (make__options_file__succeeded)
              {
                make__options_file__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
                make__options_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
                make__options_file__succeeded = (make__options_file__V_22_22 == (MR_Char) 43);
                if (make__options_file__succeeded)
                  {
                    make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                    if (make__options_file__succeeded)
                      {
                        make__options_file__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_23_23, (MR_Integer) 0)));
                        make__options_file__Line3_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_23_23, (MR_Integer) 1)));
                        make__options_file__succeeded = (make__options_file__V_24_24 == (MR_Char) 61);
                      }
                  }
              }
            if (make__options_file__succeeded)
              {
                make__options_file__Add_13 = (MR_Integer) 1;
                make__options_file__Line4_40 = make__options_file__Line3_35;
              }
            else
              {
                MR_Word make__options_file__Line3_34;
                MR_Char make__options_file__V_25_25;
                MR_Word make__options_file__V_26_26;
                MR_Char make__options_file__V_27_27;

                make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
                if (make__options_file__succeeded)
                  {
                    make__options_file__V_25_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
                    make__options_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
                    make__options_file__succeeded = (make__options_file__V_25_25 == (MR_Char) 58);
                    if (make__options_file__succeeded)
                      {
                        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                        if (make__options_file__succeeded)
                          {
                            make__options_file__V_27_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_26_26, (MR_Integer) 0)));
                            make__options_file__Line3_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_26_26, (MR_Integer) 1)));
                            make__options_file__succeeded = (make__options_file__V_27_27 == (MR_Char) 61);
                          }
                      }
                  }
                if (make__options_file__succeeded)
                  {
                    make__options_file__Add_13 = (MR_Integer) 0;
                    make__options_file__Line4_40 = make__options_file__Line3_34;
                  }
                else
                  {
                    MR_Word make__options_file__V_28_28;
                    MR_String make__options_file__V_29_29;
                    MR_String make__options_file__V_31_31;

                    {
                      make__options_file__V_31_31 = mercury__string__f_43_43_2_f_0(make__options_file__VarName_11, (MR_String) "\'");
                    }
                    {
                      make__options_file__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "expected \140=\', \140:=\' or \140+=\' after \140", make__options_file__V_31_31);
                    }
                    make__options_file__V_28_28 = (MR_Word) make__options_file__V_29_29;
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_28_28)));
                      return;
                    }
                  }
              }
          }
        {
          mercury__list__takewhile_4_p_0(make__options_file__TypeCtorInfo_45_45, (MR_Word) &make__options_file_scalar_common_1[11], make__options_file__Line4_40, &make__options_file__V_14_14, &make__options_file__VarValue_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *make__options_file__OptionsFileLine_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__options_file__VarName_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__options_file__Add_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__options_file__VarValue_15));
        }
      }
  }
}

static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_Box make__options_file__wrapper_arg_2;
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_String make__options_file__conv0_HeadVar__2_2;

    {
      make__options_file__conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) make__options_file__wrapper_arg_1));
    }
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__2_2));
    return make__options_file__wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
  MR_Word make__options_file__Globals_5,
  MR_Word make__options_file__Vars_6)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__V_10_10;

    {
      make__options_file__V_10_10 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__Vars_6);
    }
    if ((make__options_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word make__options_file__Rest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_10_10, (MR_Integer) 1)));
        MR_Word make__options_file__Warn_22;
        MR_String make__options_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__V_10_10, (MR_Integer) 0)));

        {
          libs__globals__lookup_bool_option_3_p_0(make__options_file__Globals_5, (MR_Integer) 25, &make__options_file__Warn_22);
        }
        switch (make__options_file__Warn_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__options_file__TypeCtorInfo_48_56;
              MR_String make__options_file__FileName_23;
              MR_Integer make__options_file__LineNumber_24;
              MR_Word make__options_file__Context_25;
              MR_Word make__options_file__VarList_26;
              MR_String make__options_file__Word_27;
              MR_String make__options_file__IsOrAre_28;
              MR_Word make__options_file__Pieces_31;
              MR_Word make__options_file__Halt_32;
              MR_Word make__options_file__V_38_38;
              MR_Word make__options_file__V_40_40;
              MR_Word make__options_file__V_41_41;
              MR_Word make__options_file__V_44_44;
              MR_Word make__options_file__V_45_45;
              MR_Word make__options_file__V_46_46;
              MR_Word make__options_file__V_47_47;

              {
                mercury__io__input_stream_name_3_p_0(&make__options_file__FileName_23);
              }
              {
                mercury__io__get_line_number_3_p_0(&make__options_file__LineNumber_24);
              }
              {
                make__options_file__Context_25 = mercury__term__context_init_2_f_0(make__options_file__FileName_23, make__options_file__LineNumber_24);
              }
              make__options_file__TypeCtorInfo_48_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                make__options_file__V_40_40 = mercury__list__sort_and_remove_dups_1_f_0(make__options_file__TypeCtorInfo_48_56, make__options_file__V_10_10);
              }
              {
                make__options_file__V_38_38 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_48_56, make__options_file__TypeCtorInfo_48_56, (MR_Word) &make__options_file_scalar_common_1[7], make__options_file__V_40_40);
              }
              {
                make__options_file__VarList_26 = parse_tree__error_util__list_to_pieces_1_f_0(make__options_file__V_38_38);
              }
              if ((make__options_file__Rest_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  make__options_file__Word_27 = (MR_String) "variable";
                  make__options_file__IsOrAre_28 = (MR_String) "is";
                }
              else
                {
                  make__options_file__Word_27 = (MR_String) "variables";
                  make__options_file__IsOrAre_28 = (MR_String) "are";
                }
              {
                make__options_file__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), make__options_file__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), make__options_file__V_45_45, 1) = ((MR_Box) (make__options_file__Word_27));
              }
              {
                make__options_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_44_44, 0) = ((MR_Box) (make__options_file__V_45_45));
                MR_hl_field(MR_mktag(1), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__VarList_26));
              }
              {
                make__options_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[34])));
                MR_hl_field(MR_mktag(1), make__options_file__V_41_41, 1) = ((MR_Box) (make__options_file__V_44_44));
              }
              {
                make__options_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), make__options_file__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), make__options_file__V_47_47, 1) = ((MR_Box) (make__options_file__IsOrAre_28));
              }
              {
                make__options_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__V_46_46, 0) = ((MR_Box) (make__options_file__V_47_47));
                MR_hl_field(MR_mktag(1), make__options_file__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[36])));
              }
              {
                make__options_file__Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, make__options_file__V_41_41, make__options_file__V_46_46);
              }
              {
                parse_tree__error_util__write_error_pieces_6_p_0(make__options_file__Globals_5, make__options_file__Context_25, (MR_Integer) 0, make__options_file__Pieces_31);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__options_file__Globals_5, (MR_Integer) 2, &make__options_file__Halt_32);
              }
              switch (make__options_file__Halt_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, ((MR_Box) ((MR_Integer) 0)));
                      return;
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = make__options_file__IntroducedFrom__pred__parse_variable__641__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
    return make__options_file__succeeded;
  }
}

static void MR_CALL 
make__options_file__expand_variables_2_8_p_0(
  MR_Word make__options_file__Variables_1,
  MR_Word make__options_file__HeadVar__2_2,
  MR_Word make__options_file__STATE_VARIABLE_RevChars_0_3,
  MR_Word * make__options_file__STATE_VARIABLE_RevChars_4,
  MR_Word make__options_file__STATE_VARIABLE_RevUndef_0_5,
  MR_Word * make__options_file__STATE_VARIABLE_RevUndef_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;

        if ((make__options_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__options_file__STATE_VARIABLE_RevUndef_6 = make__options_file__STATE_VARIABLE_RevUndef_0_5;
            *make__options_file__STATE_VARIABLE_RevChars_4 = make__options_file__STATE_VARIABLE_RevChars_0_3;
          }
        else
          {
            MR_Char make__options_file__Char_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word make__options_file__Chars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));

            make__options_file__succeeded = (make__options_file__Char_20 == (MR_Char) 36);
            if (make__options_file__succeeded)
              if ((make__options_file__Chars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated variable reference")))));
                    return;
                  }
                }
              else
                {
                  MR_Char make__options_file__Char2_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars_21, (MR_Integer) 0)));
                  MR_Word make__options_file__Chars1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars_21, (MR_Integer) 1)));

                  make__options_file__succeeded = (make__options_file__Char2_25 == (MR_Char) 36);
                  if (make__options_file__succeeded)
                    {
                      MR_Word make__options_file__STATE_VARIABLE_RevChars_40_40;

                      {
                        make__options_file__STATE_VARIABLE_RevChars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Char) 36));
                        MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_40_40, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_RevChars_0_3));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars1_26;
                        MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_40_40;

                        make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
                        make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Word make__options_file__TypeCtorInfo_62_62;
                      MR_Word make__options_file__Chars4_31;
                      MR_String make__options_file__VarName_32;
                      MR_Word make__options_file__VarChars_33;
                      MR_Word make__options_file__STATE_VARIABLE_RevUndef_47_47;
                      MR_Word make__options_file__STATE_VARIABLE_RevChars_49_49;
                      MR_Word make__options_file__V_50_50;
                      MR_Char make__options_file__EndChar_27;

                      switch (make__options_file__Char2_25) {
                        default:
                          make__options_file__succeeded = MR_FALSE;
                          break;
                        case (MR_Char) 40:
                          {
                            make__options_file__EndChar_27 = (MR_Char) 41;
                            make__options_file__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Char) 123:
                          {
                            make__options_file__EndChar_27 = (MR_Char) 125;
                            make__options_file__succeeded = MR_TRUE;
                          }
                          break;
                      }
                      if (make__options_file__succeeded)
                        {
                          MR_String make__options_file__VarName0_28;
                          MR_Word make__options_file__Chars2_29;
                          MR_Word make__options_file__VarList_67;
                          MR_Word make__options_file__Chars3_30;
                          MR_Char make__options_file__V_63_63;

                          {
                            make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__VarList_67, make__options_file__Chars1_26, &make__options_file__Chars2_29);
                          }
                          {
                            mercury__string__from_rev_char_list_2_p_0(make__options_file__VarList_67, &make__options_file__VarName0_28);
                          }
                          make__options_file__succeeded = (strcmp(make__options_file__VarName0_28, (MR_String) "") == 0);
                          if (make__options_file__succeeded)
                            {
                              MR_Word make__options_file__FirstWord_68;
                              MR_Word make__options_file__V_74_74;
                              MR_String make__options_file__V_75_75;
                              MR_String make__options_file__V_77_77;
                              MR_String make__options_file__V_78_78;
                              MR_Word make__options_file__V_69_69;

                              {
                                mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[1], make__options_file__Chars2_29, &make__options_file__FirstWord_68, &make__options_file__V_69_69);
                              }
                              {
                                make__options_file__V_78_78 = mercury__string__from_char_list_1_f_0(make__options_file__FirstWord_68);
                              }
                              {
                                make__options_file__V_77_77 = mercury__string__f_43_43_2_f_0(make__options_file__V_78_78, (MR_String) "\'");
                              }
                              {
                                make__options_file__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", make__options_file__V_77_77);
                              }
                              make__options_file__V_74_74 = (MR_Word) make__options_file__V_75_75;
                              {
                                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_74_74)));
                                return;
                              }
                            }
                          else
                            {
                            }
                          make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Chars2_29)) == (MR_mktag((MR_Integer) 1)));
                          if (make__options_file__succeeded)
                            {
                              make__options_file__V_63_63 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars2_29, (MR_Integer) 0)));
                              make__options_file__Chars3_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars2_29, (MR_Integer) 1)));
                              make__options_file__succeeded = (make__options_file__EndChar_27 == make__options_file__V_63_63);
                            }
                          if (make__options_file__succeeded)
                            {
                              make__options_file__Chars4_31 = make__options_file__Chars3_30;
                              make__options_file__VarName_32 = make__options_file__VarName0_28;
                            }
                          else
                            {
                              {
                                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated variable reference")))));
                                return;
                              }
                            }
                        }
                      else
                        {
                          make__options_file__Chars4_31 = make__options_file__Chars1_26;
                          {
                            make__options_file__VarName_32 = mercury__string__char_to_string_1_f_0(make__options_file__Char2_25);
                          }
                        }
                      {
                        make__options_file__lookup_variable_chars_7_p_0(make__options_file__Variables_1, make__options_file__VarName_32, &make__options_file__VarChars_33, make__options_file__STATE_VARIABLE_RevUndef_0_5, &make__options_file__STATE_VARIABLE_RevUndef_47_47);
                      }
                      make__options_file__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                      {
                        make__options_file__V_50_50 = mercury__list__reverse_1_f_0(make__options_file__TypeCtorInfo_62_62, make__options_file__VarChars_33);
                      }
                      {
                        make__options_file__STATE_VARIABLE_RevChars_49_49 = mercury__list__f_43_43_2_f_0(make__options_file__TypeCtorInfo_62_62, make__options_file__V_50_50, make__options_file__STATE_VARIABLE_RevChars_0_3);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars4_31;
                        MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_49_49;
                        MR_Word make__options_file__STATE_VARIABLE_RevUndef_0__tmp_copy_5 = make__options_file__STATE_VARIABLE_RevUndef_47_47;

                        make__options_file__STATE_VARIABLE_RevUndef_0_5 = make__options_file__STATE_VARIABLE_RevUndef_0__tmp_copy_5;
                        make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
                        make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            else
              {
                MR_Word make__options_file__STATE_VARIABLE_RevChars_56_56;

                {
                  make__options_file__STATE_VARIABLE_RevChars_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_56_56, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_20));
                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_56_56, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_RevChars_0_3));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars_21;
                  MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_56_56;

                  make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
                  make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
make__options_file__update_variable_8_p_0(
  MR_Word make__options_file__Globals_9,
  MR_String make__options_file__VarName_10,
  MR_Word make__options_file__AddToValue_11,
  MR_Word make__options_file__NewValue0_12,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_27,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_28)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__NewValue1_15;
    MR_Word make__options_file__Undef_16;
    MR_Word make__options_file__Words1_17;
    MR_Word make__options_file__MaybeEnvValue_18;
    MR_Word make__options_file__RevChars_70;
    MR_Word make__options_file__RevUndefVars_71;
    MR_Word make__options_file__V_78_78;

    {
      make__options_file__expand_variables_2_8_p_0(make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__NewValue0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevUndefVars_71);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_70, &make__options_file__NewValue1_15);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__RevUndefVars_71, &make__options_file__Undef_16);
    }
    {
      make__options_file__report_undefined_variables_4_p_0(make__options_file__Globals_9, make__options_file__Undef_16);
    }
    {
      make__options_file__V_78_78 = make__options_file__split_into_words_2_2_f_0(make__options_file__NewValue1_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      make__options_file__Words1_17 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_78_78);
    }
    {
      mercury__io__get_environment_var_4_p_0(make__options_file__VarName_10, &make__options_file__MaybeEnvValue_18);
    }
    if ((make__options_file__MaybeEnvValue_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__options_file__OldValue_23;
        MR_Word make__options_file__OldWords_24;
        MR_Word make__options_file__Source_25;
        MR_Word make__options_file__V_34_34;
        MR_Box make__options_file__conv0_V_34_34;

        {
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__STATE_VARIABLE_Variables_0_27, ((MR_Box) (make__options_file__VarName_10)), &make__options_file__conv0_V_34_34);
        }
        if (make__options_file__succeeded)
          {
            make__options_file__V_34_34 = ((MR_Word) make__options_file__conv0_V_34_34);
            make__options_file__succeeded = MR_TRUE;
          }
        if (make__options_file__succeeded)
          {
            make__options_file__OldValue_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 0)));
            make__options_file__OldWords_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 1)));
            make__options_file__Source_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 2)));
            make__options_file__succeeded = MR_TRUE;
          }
        if (make__options_file__succeeded)
          switch (make__options_file__Source_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *make__options_file__STATE_VARIABLE_Variables_28 = make__options_file__STATE_VARIABLE_Variables_0_27;
              break;
            case (MR_Integer) 2:
              *make__options_file__STATE_VARIABLE_Variables_28 = make__options_file__STATE_VARIABLE_Variables_0_27;
              break;
            case (MR_Integer) 0:
              {
                MR_Word make__options_file__NewValue_26;
                MR_Word make__options_file__Words_44;
                MR_Word make__options_file__OptVarValue_45;

                switch (make__options_file__AddToValue_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      make__options_file__NewValue_26 = make__options_file__NewValue1_15;
                      make__options_file__Words_44 = make__options_file__Words1_17;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word make__options_file__V_35_35;

                      {
                        make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                        MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 1) = ((MR_Box) (make__options_file__NewValue1_15));
                      }
                      {
                        make__options_file__NewValue_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__OldValue_23, make__options_file__V_35_35);
                      }
                      {
                        make__options_file__Words_44 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__OldWords_24, make__options_file__Words1_17);
                      }
                    }
                    break;
                }
                {
                  make__options_file__OptVarValue_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 0) = ((MR_Box) (make__options_file__NewValue_26));
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 1) = ((MR_Box) (make__options_file__Words_44));
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 2) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_45)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
                }
              }
              break;
          }
        else
          {
            MR_Word make__options_file__OptVarValue_48;

            {
              make__options_file__OptVarValue_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 0) = ((MR_Box) (make__options_file__NewValue1_15));
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 1) = ((MR_Box) (make__options_file__Words1_17));
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_48)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
            }
          }
      }
    else
      {
        MR_String make__options_file__EnvValue_19 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeEnvValue_18, (MR_Integer) 0)));
        MR_Word make__options_file__Value_20;
        MR_Word make__options_file__Words_21;
        MR_Word make__options_file__OptVarValue_22;
        MR_Word make__options_file__V_41_41;
        MR_Word make__options_file__V_82_82;

        {
          make__options_file__Value_20 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_19);
        }
        {
          make__options_file__V_82_82 = make__options_file__split_into_words_2_2_f_0(make__options_file__Value_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          make__options_file__Words_21 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_82_82);
        }
        {
          make__options_file__V_41_41 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_19);
        }
        {
          make__options_file__OptVarValue_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 0) = ((MR_Box) (make__options_file__V_41_41));
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 1) = ((MR_Box) (make__options_file__Words_21));
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 2) = ((MR_Box) ((MR_Integer) 2));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_22)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
        }
      }
  }
}

static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
  MR_Word * make__options_file__FoundEOF_6,
  MR_Word make__options_file__STATE_VARIABLE_Chars_0_13,
  MR_Word * make__options_file__STATE_VARIABLE_Chars_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;
        MR_Word make__options_file__Result_45;

        {
          mercury__io__read_char_3_p_0(&make__options_file__Result_45);
        }
        switch (MR_tag((MR_Word) make__options_file__Result_45)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__options_file__FoundEOF_6 = (MR_Integer) 1;
              *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char make__options_file__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_45, (MR_Integer) 0)));

              make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 35);
              if (make__options_file__succeeded)
                {
                  {
                    make__options_file__skip_comment_line_3_p_0(make__options_file__FoundEOF_6);
                  }
                  *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
                }
              else
                {
                  make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 92);
                  if (make__options_file__succeeded)
                    {
                      MR_Word make__options_file__Result_59;

                      {
                        mercury__io__read_char_3_p_0(&make__options_file__Result_59);
                      }
                      switch (MR_tag((MR_Word) make__options_file__Result_59)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *make__options_file__FoundEOF_6 = (MR_Integer) 1;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *make__options_file__STATE_VARIABLE_Chars_14 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Char make__options_file__Char2_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_59, (MR_Integer) 0)));
                            MR_Word make__options_file__STATE_VARIABLE_Chars_23_23;

                            make__options_file__succeeded = (make__options_file__Char2_12 == (MR_Char) 10);
                            if (make__options_file__succeeded)
                              {
                                {
                                  make__options_file__STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
                                }
                              }
                            else
                              {
                                MR_Word make__options_file__V_26_26;

                                {
                                  make__options_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
                                  MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
                                }
                                {
                                  make__options_file__STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_12));
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (make__options_file__V_26_26));
                                }
                              }
                            /* direct tailcall eliminated */
                            {
                              MR_Word make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13 = make__options_file__STATE_VARIABLE_Chars_23_23;

                              make__options_file__STATE_VARIABLE_Chars_0_13 = make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word make__options_file__Error_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_59, (MR_Integer) 0)));
                            MR_Word make__options_file__V_63_63;
                            MR_String make__options_file__V_64_64;

                            {
                              make__options_file__V_64_64 = mercury__io__error_message_1_f_0(make__options_file__Error_61);
                            }
                            make__options_file__V_63_63 = (MR_Word) make__options_file__V_64_64;
                            {
                              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_63_63)));
                              return;
                            }
                          }
                          break;
                      }
                    }
                  else
                    {
                      make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 10);
                      if (make__options_file__succeeded)
                        {
                          *make__options_file__FoundEOF_6 = (MR_Integer) 0;
                          *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
                        }
                      else
                        {
                          MR_Word make__options_file__STATE_VARIABLE_Chars_29_29;

                          {
                            make__options_file__STATE_VARIABLE_Chars_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_29_29, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
                            MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_29_29, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13 = make__options_file__STATE_VARIABLE_Chars_29_29;

                            make__options_file__STATE_VARIABLE_Chars_0_13 = make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13;
                          }
                          continue;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__options_file__Error_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_45, (MR_Integer) 0)));
              MR_Word make__options_file__V_49_49;
              MR_String make__options_file__V_50_50;

              {
                make__options_file__V_50_50 = mercury__io__error_message_1_f_0(make__options_file__Error_47);
              }
              make__options_file__V_49_49 = (MR_Word) make__options_file__V_50_50;
              {
                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_49_49)));
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4,
  MR_Box * make__options_file__wrapper_arg_5)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_STATE_VARIABLE_Variables_34;

    {
      make__options_file__read_options_file_params_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 6))), ((MR_String) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), &make__options_file__conv0_STATE_VARIABLE_Variables_34);
    }
    *make__options_file__wrapper_arg_3 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Variables_34));
  }
}

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_24,
  MR_Word * make__options_file__HeadVar__4_4)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__FoundEOF_10;
    MR_Word make__options_file__Line0_12;
    MR_Word make__options_file__STATE_VARIABLE_Variables_25;
    MR_Word make__options_file__RevChars_49;
    MR_Word make__options_file__SpaceResult_51;

    {
      mercury__io__ignore_whitespace_3_p_0(&make__options_file__SpaceResult_51);
    }
    switch (MR_tag((MR_Word) make__options_file__SpaceResult_51)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__options_file__SpaceResult_51)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__options_file__Error_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__SpaceResult_51, (MR_Integer) 0)));
          MR_Word make__options_file__V_54_54;
          MR_String make__options_file__V_55_55;

          {
            make__options_file__V_55_55 = mercury__io__error_message_1_f_0(make__options_file__Error_52);
          }
          make__options_file__V_54_54 = (MR_Word) make__options_file__V_55_55;
          {
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_54_54)));
            return;
          }
        }
        break;
    }
    {
      make__options_file__read_options_line_2_5_p_0(&make__options_file__FoundEOF_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_49);
    }
    {
      make__options_file__Line0_12 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_49);
    }
    if ((make__options_file__Line0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__options_file__STATE_VARIABLE_Variables_25 = make__options_file__STATE_VARIABLE_Variables_0_24;
    else
      {
        MR_Word make__options_file__ParsedLine_15;

        {
          make__options_file__parse_options_line_2_p_0(make__options_file__Line0_12, &make__options_file__ParsedLine_15);
        }
        if (((MR_tag((MR_Word) make__options_file__ParsedLine_15)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String make__options_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 0)));
            MR_Word make__options_file__AddToValue_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 1)));
            MR_Word make__options_file__Value_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 2)));

            {
              make__options_file__update_variable_8_p_0(make__options_file__Globals_7, make__options_file__VarName_16, make__options_file__AddToValue_17, make__options_file__Value_18, make__options_file__STATE_VARIABLE_Variables_0_24, &make__options_file__STATE_VARIABLE_Variables_25);
            }
          }
        else
          {
            MR_Word make__options_file__ErrorIfNotExist_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__ParsedLine_15, (MR_Integer) 0)));
            MR_Word make__options_file__IncludedFilesChars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__ParsedLine_15, (MR_Integer) 1)));
            MR_Word make__options_file__IncludedFilesChars_21;
            MR_Word make__options_file__UndefVars_22;
            MR_Word make__options_file__IncludedFileNames_23;
            MR_Word make__options_file__V_31_31;
            MR_Word make__options_file__V_35_35;
            MR_Word make__options_file__RevChars_67;
            MR_Word make__options_file__RevUndefVars_68;
            MR_Word make__options_file__V_75_75;
            MR_Box make__options_file__conv2_STATE_VARIABLE_Variables_25;
            MR_Box make__options_file__conv1_STATE_VARIABLE_IO_27;

            {
              make__options_file__expand_variables_2_8_p_0(make__options_file__STATE_VARIABLE_Variables_0_24, make__options_file__IncludedFilesChars0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevUndefVars_68);
            }
            {
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_67, &make__options_file__IncludedFilesChars_21);
            }
            {
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__RevUndefVars_68, &make__options_file__UndefVars_22);
            }
            {
              make__options_file__report_undefined_variables_4_p_0(make__options_file__Globals_7, make__options_file__UndefVars_22);
            }
            {
              make__options_file__V_75_75 = make__options_file__split_into_words_2_2_f_0(make__options_file__IncludedFilesChars_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              make__options_file__IncludedFileNames_23 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_75_75);
            }
            {
              make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (make__options_file__Dir_8));
            }
            {
              make__options_file__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 1) = ((MR_Box) (make__options_file__read_options_lines_3_6_p_0_1));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 3) = ((MR_Box) (make__options_file__Globals_7));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 4) = ((MR_Box) (make__options_file__ErrorIfNotExist_19));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 5) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 6) = ((MR_Box) (make__options_file__V_35_35));
            }
            {
              mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_31_31, make__options_file__IncludedFileNames_23, ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_0_24)), &make__options_file__conv2_STATE_VARIABLE_Variables_25, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_27);
            }
            make__options_file__STATE_VARIABLE_Variables_25 = ((MR_Word) make__options_file__conv2_STATE_VARIABLE_Variables_25);
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *make__options_file__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__options_file__FoundEOF_10));
    }
  }
}

static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_HeadVar__4_4;

    {
      make__options_file__read_options_lines_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), &make__options_file__conv0_HeadVar__4_4);
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__Variables0_9,
  MR_Word * make__options_file__Result_10)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__V_14_14;

    {
      make__options_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 0) = ((MR_Box) (&make__options_file_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 1) = ((MR_Box) (make__options_file__read_options_lines_2_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 3) = ((MR_Box) (make__options_file__Globals_7));
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 4) = ((MR_Box) (make__options_file__Dir_8));
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 5) = ((MR_Box) (make__options_file__Variables0_9));
    }
    {
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[1], make__options_file__V_14_14, make__options_file__Result_10);
    }
  }
}

static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__Dir_8,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_18,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__options_file__succeeded;
        MR_Integer make__options_file__LineNumber_11;
        MR_Word make__options_file__LineResult_12;

        {
          mercury__io__get_line_number_3_p_0(&make__options_file__LineNumber_11);
        }
        {
          make__options_file__read_options_lines_2_6_p_0(make__options_file__Globals_7, make__options_file__Dir_8, make__options_file__STATE_VARIABLE_Variables_0_18, &make__options_file__LineResult_12);
        }
        switch (MR_tag((MR_Word) make__options_file__LineResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "make.options_file", (MR_String) "predicate \140make.options_file.read_options_lines\'/6", (MR_String) "cannot read line");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__options_file__FoundEOF_13;
              MR_Word make__options_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__LineResult_12, (MR_Integer) 0)));
              MR_Word make__options_file__STATE_VARIABLE_Variables_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_35_35, (MR_Integer) 0)));

              make__options_file__FoundEOF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_35_35, (MR_Integer) 1)));
              switch (make__options_file__FoundEOF_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word make__options_file__STATE_VARIABLE_Variables_0__tmp_copy_18 = make__options_file__STATE_VARIABLE_Variables_36_36;

                      make__options_file__STATE_VARIABLE_Variables_0_18 = make__options_file__STATE_VARIABLE_Variables_0__tmp_copy_18;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__options_file__STATE_VARIABLE_Variables_19 = make__options_file__STATE_VARIABLE_Variables_36_36;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__options_file__Exception_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__LineResult_12, (MR_Integer) 0)));
              MR_String make__options_file__Error_15;
              MR_Word make__options_file__V_27_27;
              MR_Box make__options_file__conv0_V_27_27;

              {
                make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &make__options_file__conv0_V_27_27, make__options_file__Exception_14);
              }
              if (make__options_file__succeeded)
                {
                  make__options_file__V_27_27 = ((MR_Word) make__options_file__conv0_V_27_27);
                  make__options_file__succeeded = MR_TRUE;
                }
              if (make__options_file__succeeded)
                {
                  make__options_file__Error_15 = (MR_String) make__options_file__V_27_27;
                  make__options_file__succeeded = MR_TRUE;
                }
              if (make__options_file__succeeded)
                {
                  MR_String make__options_file__FileName_16;
                  MR_Word make__options_file__Context_17;
                  MR_Word make__options_file__V_30_30;
                  MR_Word make__options_file__V_32_32;

                  {
                    mercury__io__input_stream_name_3_p_0(&make__options_file__FileName_16);
                  }
                  {
                    make__options_file__Context_17 = mercury__term__context_init_2_f_0(make__options_file__FileName_16, make__options_file__LineNumber_11);
                  }
                  {
                    make__options_file__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), make__options_file__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), make__options_file__V_32_32, 1) = ((MR_Box) (make__options_file__Error_15));
                  }
                  {
                    make__options_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_30_30, 0) = ((MR_Box) (make__options_file__V_32_32));
                    MR_hl_field(MR_mktag(1), make__options_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__error_util__write_error_pieces_6_p_0(make__options_file__Globals_7, make__options_file__Context_17, (MR_Integer) 0, make__options_file__V_30_30);
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, ((MR_Box) ((MR_Integer) 0)));
                    return;
                  }
                }
              else
                {
                  {
                    mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[1], make__options_file__LineResult_12);
                    return;
                  }
                }
            }
            break;
        }
      }
      break;
    }
}

static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
  MR_String make__options_file__Dir_4,
  MR_String make__options_file__File_5)
{
  {
    MR_bool make__options_file__succeeded;
    MR_String make__options_file__HeadVar__3_3;
    MR_String make__options_file__V_6_6;

    {
      make__options_file__V_6_6 = mercury__dir__this_directory_0_f_0();
    }
    make__options_file__succeeded = (strcmp(make__options_file__Dir_4, make__options_file__V_6_6) == 0);
    if (make__options_file__succeeded)
      make__options_file__HeadVar__3_3 = make__options_file__File_5;
    else
      {
        make__options_file__HeadVar__3_3 = mercury__dir__make_path_name_2_f_0(make__options_file__Dir_4, make__options_file__File_5);
      }
    return make__options_file__HeadVar__3_3;
  }
}

static void MR_CALL 
make__options_file__write_done_2_p_0(void)
{
  {
    MR_bool make__options_file__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "done.\n");
    }
  }
}

static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
  MR_String make__options_file__FileName_4)
{
  {
    MR_bool make__options_file__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Reading options file ");
    }
    {
      mercury__io__write_string_3_p_0(make__options_file__FileName_4);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void)
{
  {
    MR_bool make__options_file__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Reading options file from stdin...");
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__write_done_2_p_0();
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__write_done_2_p_0();
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box * make__options_file__wrapper_arg_2)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;

    {
      make__options_file__write_reading_options_file_stdin_2_p_0();
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
  MR_Word make__options_file__Globals_10,
  MR_Word make__options_file__ErrorIfNotExist_11,
  MR_Word make__options_file__Search_12,
  MR_Word make__options_file__MaybeDirName_13,
  MR_String make__options_file__OptionsFile0_14,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_33,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_34)
{
  {
    MR_bool make__options_file__succeeded = (strcmp(make__options_file__OptionsFile0_14, (MR_String) "-") == 0);

    if (make__options_file__succeeded)
      {
        MR_String make__options_file__V_39_39;

        {
          make__util__debug_make_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[3]);
        }
        {
          make__options_file__V_39_39 = mercury__dir__this_directory_0_f_0();
        }
        {
          make__options_file__read_options_lines_6_p_0(make__options_file__Globals_10, make__options_file__V_39_39, make__options_file__STATE_VARIABLE_Variables_0_33, make__options_file__STATE_VARIABLE_Variables_34);
        }
        {
          make__util__debug_make_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[4]);
        }
      }
    else
      {
        MR_Word make__options_file__SearchDirs_17;
        MR_String make__options_file__FileToFind_20;
        MR_Word make__options_file__Dirs_21;
        MR_Word make__options_file__OldInputStream_23;
        MR_Word make__options_file__MaybeDir_24;
        MR_Word make__options_file__V_44_44;
        MR_String make__options_file__OptionsDir_18;
        MR_String make__options_file__OptionsFile_19;

        {
          make__options_file__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_3));
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 3) = ((MR_Box) (make__options_file__OptionsFile0_14));
        }
        {
          make__util__debug_make_msg_4_p_0(make__options_file__Globals_10, make__options_file__V_44_44);
        }
        switch (make__options_file__Search_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String make__options_file__V_46_46;

              {
                make__options_file__V_46_46 = mercury__dir__this_directory_0_f_0();
              }
              {
                make__options_file__SearchDirs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__options_file__SearchDirs_17, 0) = ((MR_Box) (make__options_file__V_46_46));
                MR_hl_field(MR_mktag(1), make__options_file__SearchDirs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                libs__globals__lookup_accumulating_option_3_p_0(make__options_file__Globals_10, (MR_Integer) 633, &make__options_file__SearchDirs_17);
              }
            }
            break;
        }
        {
          make__options_file__succeeded = mercury__dir__split_name_3_p_0(make__options_file__OptionsFile0_14, &make__options_file__OptionsDir_18, &make__options_file__OptionsFile_19);
        }
        if (make__options_file__succeeded)
          {
            {
              make__options_file__succeeded = mercury__dir__path_name_is_absolute_1_p_0(make__options_file__OptionsDir_18);
            }
            if (make__options_file__succeeded)
              {
                make__options_file__FileToFind_20 = make__options_file__OptionsFile_19;
                {
                  make__options_file__Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 0) = ((MR_Box) (make__options_file__OptionsDir_18));
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
            if ((make__options_file__MaybeDirName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                make__options_file__Dirs_21 = make__options_file__SearchDirs_17;
                make__options_file__FileToFind_20 = make__options_file__OptionsFile0_14;
              }
            else
              {
                MR_String make__options_file__DirName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeDirName_13, (MR_Integer) 0)));
                MR_String make__options_file__V_50_50;

                make__options_file__FileToFind_20 = make__options_file__OptionsFile_19;
                {
                  make__options_file__V_50_50 = mercury__dir__f_slash_2_f_0(make__options_file__DirName_22, make__options_file__OptionsDir_18);
                }
                {
                  make__options_file__Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 0) = ((MR_Box) (make__options_file__V_50_50));
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 1) = ((MR_Box) (make__options_file__SearchDirs_17));
                }
              }
          }
        else
          {
            make__options_file__Dirs_21 = make__options_file__SearchDirs_17;
            make__options_file__FileToFind_20 = make__options_file__OptionsFile0_14;
          }
        {
          mercury__io__input_stream_3_p_0(&make__options_file__OldInputStream_23);
        }
        {
          libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__options_file__Dirs_21, make__options_file__FileToFind_20, &make__options_file__MaybeDir_24);
        }
        if (((MR_tag((MR_Word) make__options_file__MaybeDir_24)) == (MR_mktag((MR_Integer) 1))))
          {
            switch (make__options_file__ErrorIfNotExist_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String make__options_file__ErrorFile_29;
                  MR_Word make__options_file__ErrorSpec_30;
                  MR_Word make__options_file__V_57_57;
                  MR_Word make__options_file__V_58_58;
                  MR_Word make__options_file__V_62_62;
                  MR_Word make__options_file__V_63_63;
                  MR_Word make__options_file__V_64_64;
                  MR_Word make__options_file__V_67_67;
                  MR_Word make__options_file__V_68_68;
                  MR_String make__options_file__SingleDir_28;
                  MR_Word make__options_file__V_54_54;
                  MR_Integer make__options_file__V_31_31;
                  MR_Integer make__options_file__V_32_32;

                  make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Dirs_21)) == (MR_mktag((MR_Integer) 1)));
                  if (make__options_file__succeeded)
                    {
                      make__options_file__SingleDir_28 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, (MR_Integer) 0)));
                      make__options_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, (MR_Integer) 1)));
                      make__options_file__succeeded = (make__options_file__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  if (make__options_file__succeeded)
                    {
                      make__options_file__ErrorFile_29 = make__options_file__maybe_add_path_name_2_f_0(make__options_file__SingleDir_28, make__options_file__FileToFind_20);
                    }
                  else
                    make__options_file__ErrorFile_29 = make__options_file__FileToFind_20;
                  {
                    make__options_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), make__options_file__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), make__options_file__V_68_68, 1) = ((MR_Box) (make__options_file__ErrorFile_29));
                  }
                  {
                    make__options_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_67_67, 0) = ((MR_Box) (make__options_file__V_68_68));
                    MR_hl_field(MR_mktag(1), make__options_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[33])));
                  }
                  {
                    make__options_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[31])));
                    MR_hl_field(MR_mktag(1), make__options_file__V_64_64, 1) = ((MR_Box) (make__options_file__V_67_67));
                  }
                  {
                    make__options_file__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__options_file__V_63_63, 0) = ((MR_Box) (make__options_file__V_64_64));
                  }
                  {
                    make__options_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_62_62, 0) = ((MR_Box) (make__options_file__V_63_63));
                    MR_hl_field(MR_mktag(1), make__options_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    make__options_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 1) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 3) = ((MR_Box) (make__options_file__V_62_62));
                  }
                  {
                    make__options_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), make__options_file__V_57_57, 0) = ((MR_Box) (make__options_file__V_58_58));
                    MR_hl_field(MR_mktag(1), make__options_file__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    make__options_file__ErrorSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 2) = ((MR_Box) (make__options_file__V_57_57));
                  }
                  {
                    parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_30, make__options_file__Globals_10, (MR_Integer) 0, &make__options_file__V_31_31, (MR_Integer) 0, &make__options_file__V_32_32);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            *make__options_file__STATE_VARIABLE_Variables_34 = make__options_file__STATE_VARIABLE_Variables_0_33;
          }
        else
          {
            MR_String make__options_file__FoundDir_25 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__MaybeDir_24, (MR_Integer) 0)));
            MR_Word make__options_file__OptionsStream_26;
            MR_Word make__options_file__V_78_78;
            MR_String make__options_file__V_80_80;

            {
              make__options_file__V_80_80 = mercury__dir__f_slash_2_f_0(make__options_file__FoundDir_25, make__options_file__FileToFind_20);
            }
            {
              make__options_file__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_4));
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 3) = ((MR_Box) (make__options_file__V_80_80));
            }
            {
              make__util__debug_make_msg_4_p_0(make__options_file__Globals_10, make__options_file__V_78_78);
            }
            {
              make__options_file__read_options_lines_6_p_0(make__options_file__Globals_10, make__options_file__FoundDir_25, make__options_file__STATE_VARIABLE_Variables_0_33, make__options_file__STATE_VARIABLE_Variables_34);
            }
            {
              mercury__io__set_input_stream_4_p_0(make__options_file__OldInputStream_23, &make__options_file__OptionsStream_26);
            }
            {
              mercury__io__close_input_3_p_0(make__options_file__OptionsStream_26);
            }
          }
        {
          make__util__debug_make_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[5]);
        }
      }
  }
}

static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__OptionsFile_8,
  MR_Word make__options_file__STATE_VARIABLE_Vars_0_13,
  MR_Word * make__options_file__STATE_VARIABLE_Vars_14)
{
  {
    MR_bool make__options_file__succeeded = (strcmp(make__options_file__OptionsFile_8, (MR_String) "Mercury.options") == 0);
    MR_Word make__options_file__ErrorIfNotExist_11;
    MR_Word make__options_file__Search_12;

    if (make__options_file__succeeded)
      {
        make__options_file__ErrorIfNotExist_11 = (MR_Integer) 1;
        make__options_file__Search_12 = (MR_Integer) 1;
      }
    else
      {
        make__options_file__ErrorIfNotExist_11 = (MR_Integer) 0;
        make__options_file__Search_12 = (MR_Integer) 0;
      }
    {
      make__options_file__read_options_file_params_9_p_0(make__options_file__Globals_7, make__options_file__ErrorIfNotExist_11, make__options_file__Search_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__OptionsFile_8, make__options_file__STATE_VARIABLE_Vars_0_13, make__options_file__STATE_VARIABLE_Vars_14);
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3,
  MR_Box make__options_file__wrapper_arg_4,
  MR_Box * make__options_file__wrapper_arg_5)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_STATE_VARIABLE_Vars_14;

    {
      make__options_file__read_options_file_set_params_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), &make__options_file__conv0_STATE_VARIABLE_Vars_14);
    }
    *make__options_file__wrapper_arg_3 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Vars_14));
  }
}

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_10,
  MR_Word * make__options_file__STATE_VARIABLE_Variables_11)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__OptionsFiles_9;
    MR_Word make__options_file__V_15_15;
    MR_Box make__options_file__conv2_STATE_VARIABLE_Variables_11;
    MR_Box make__options_file__conv1_STATE_VARIABLE_IO_13;

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__options_file__Globals_6, (MR_Integer) 631, &make__options_file__OptionsFiles_9);
    }
    {
      make__options_file__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__read_options_file_lookup_params_5_p_0_1));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 3) = ((MR_Box) (make__options_file__Globals_6));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_15_15, make__options_file__OptionsFiles_9, ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_0_10)), &make__options_file__conv2_STATE_VARIABLE_Variables_11, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_13);
    }
    *make__options_file__STATE_VARIABLE_Variables_11 = ((MR_Word) make__options_file__conv2_STATE_VARIABLE_Variables_11);
  }
}

void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__Vars_7,
  MR_Word * make__options_file__MaybeMerStdlibDir_8)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__MerStdlibDirResult_10;

    {
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_7, (MR_String) "MERCURY_STDLIB_DIR", &make__options_file__MerStdlibDirResult_10);
    }
    switch (MR_tag((MR_Word) make__options_file__MerStdlibDirResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__options_file__MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_5[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__options_file__ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) make__options_file__MerStdlibDirResult_10), (MR_Integer) 1);
          MR_Integer make__options_file__V_26_26;
          MR_Integer make__options_file__V_27_27;

          {
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_25, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_26_26, (MR_Integer) 0, &make__options_file__V_27_27);
          }
          *make__options_file__MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__options_file__MerStdlibDir_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__MerStdlibDirResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *make__options_file__MaybeMerStdlibDir_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MerStdlibDir_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_main_target_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__Vars_7,
  MR_Word * make__options_file__MaybeMainTarget_8)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__MainTargetResult_10;

    {
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_7, (MR_String) "MAIN_TARGET", &make__options_file__MainTargetResult_10);
    }
    switch (MR_tag((MR_Word) make__options_file__MainTargetResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__options_file__MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_5[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__options_file__ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) make__options_file__MainTargetResult_10), (MR_Integer) 1);
          MR_Integer make__options_file__V_26_26;
          MR_Integer make__options_file__V_27_27;

          {
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_25, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_26_26, (MR_Integer) 0, &make__options_file__V_27_27);
          }
          *make__options_file__MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__options_file__MainTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__MainTargetResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *make__options_file__MaybeMainTarget_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MainTarget_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_Word make__options_file__Vars_8,
  MR_Word make__options_file__ModuleName_9,
  MR_Word * make__options_file__Result_10)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__V_14_14;

    {
      make__options_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 0) = ((MR_Box) (make__options_file__ModuleName_9));
    }
    {
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_7, make__options_file__Vars_8, make__options_file__V_14_14, make__options_file__Result_10);
    }
  }
}

void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__Vars_7,
  MR_Word * make__options_file__Result_8)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_6, make__options_file__Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), make__options_file__Result_8);
    }
  }
}

void MR_CALL 
make__options_file__lookup_default_options_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__Vars_7,
  MR_Word * make__options_file__Result_8)
{
  {
    MR_bool make__options_file__succeeded;

    {
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_6, make__options_file__Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__Result_8);
    }
  }
}

static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_STATE_VARIABLE_Variables_11;

    {
      make__options_file__read_options_file_lookup_params_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), &make__options_file__conv0_STATE_VARIABLE_Variables_11);
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Variables_11));
  }
}

void MR_CALL 
make__options_file__read_options_files_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_Word make__options_file__Variables0_7,
  MR_Word * make__options_file__MaybeVariables_8)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__OptionsFileResult_10;
    MR_Word make__options_file__V_15_15;

    {
      make__options_file__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 0) = ((MR_Box) (&make__options_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__read_options_files_5_p_0_1));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 3) = ((MR_Box) (make__options_file__Globals_6));
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 4) = ((MR_Box) (make__options_file__Variables0_7));
    }
    {
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__V_15_15, &make__options_file__OptionsFileResult_10);
    }
    if (((MR_tag((MR_Word) make__options_file__OptionsFileResult_10)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word make__options_file__Exception_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__OptionsFileResult_10, (MR_Integer) 0)));
        MR_Box make__options_file__conv1_V_17_17;

        {
          make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &make__options_file__conv1_V_17_17, make__options_file__Exception_12);
        }
        if (make__options_file__succeeded)
          make__options_file__succeeded = MR_TRUE;
        if (make__options_file__succeeded)
          *make__options_file__MaybeVariables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            {
              mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__OptionsFileResult_10);
              return;
            }
          }
      }
    else
      {
        MR_Word make__options_file__Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsFileResult_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__options_file__MaybeVariables_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Variables_11));
        }
      }
  }
}

void MR_CALL 
make__options_file__read_args_file_5_p_0(
  MR_Word make__options_file__Globals_6,
  MR_String make__options_file__OptionsFile_7,
  MR_Word * make__options_file__MaybeMCFlags_8)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__MaybeVariables_10;
    MR_Word make__options_file__V_19_19;

    {
      make__options_file__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    }
    {
      make__options_file__read_options_file_6_p_0(make__options_file__Globals_6, make__options_file__OptionsFile_7, make__options_file__V_19_19, &make__options_file__MaybeVariables_10);
    }
    if ((make__options_file__MaybeVariables_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word make__options_file__Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MaybeVariables_10, (MR_Integer) 0)));
        MR_Word make__options_file__FlagsResult_12;

        {
          make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 0, make__options_file__Variables_11, (MR_String) "MCFLAGS", &make__options_file__FlagsResult_12);
        }
        switch (MR_tag((MR_Word) make__options_file__FlagsResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "mercury_compile: internal error: arguments file does not set MCFLAGS.\n");
              }
              *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__options_file__ErrorSpec_14 = (MR_Word) MR_body(((MR_Word) make__options_file__FlagsResult_12), (MR_Integer) 1);
              MR_Integer make__options_file__V_15_15;
              MR_Integer make__options_file__V_16_16;

              *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_14, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_15_15, (MR_Integer) 0, &make__options_file__V_16_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__options_file__MCFlags_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__FlagsResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *make__options_file__MaybeMCFlags_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MCFlags_13));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
  MR_Box make__options_file__closure_arg,
  MR_Box * make__options_file__wrapper_arg_1,
  MR_Box make__options_file__wrapper_arg_2,
  MR_Box * make__options_file__wrapper_arg_3)
{
  {
    MR_Box make__options_file__closure = make__options_file__closure_arg;
    MR_Word make__options_file__conv0_LambdaHeadVar__1_22;

    {
      make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), &make__options_file__conv0_LambdaHeadVar__1_22);
    }
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_LambdaHeadVar__1_22));
  }
}

void MR_CALL 
make__options_file__read_options_file_6_p_0(
  MR_Word make__options_file__Globals_7,
  MR_String make__options_file__OptionsFile_8,
  MR_Word make__options_file__Variables0_9,
  MR_Word * make__options_file__MaybeVariables_10)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__OptionsFileResult_12;
    MR_Word make__options_file__V_18_18;

    {
      make__options_file__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 1) = ((MR_Box) (make__options_file__read_options_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 3) = ((MR_Box) (make__options_file__Globals_7));
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 4) = ((MR_Box) (make__options_file__OptionsFile_8));
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 5) = ((MR_Box) (make__options_file__Variables0_9));
    }
    {
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__V_18_18, &make__options_file__OptionsFileResult_12);
    }
    if (((MR_tag((MR_Word) make__options_file__OptionsFileResult_12)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word make__options_file__Exception_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__OptionsFileResult_12, (MR_Integer) 0)));
        MR_Box make__options_file__conv1_V_29_29;

        {
          make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &make__options_file__conv1_V_29_29, make__options_file__Exception_15);
        }
        if (make__options_file__succeeded)
          make__options_file__succeeded = MR_TRUE;
        if (make__options_file__succeeded)
          *make__options_file__MaybeVariables_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            {
              mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__OptionsFileResult_12);
              return;
            }
          }
      }
    else
      {
        MR_Word make__options_file__Variables_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsFileResult_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__options_file__MaybeVariables_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Variables_14));
        }
      }
  }
}

MR_Word MR_CALL 
make__options_file__options_variables_init_0_f_0(void)
{
  {
    MR_bool make__options_file__succeeded;
    MR_Word make__options_file__HeadVar__1_1;

    {
      make__options_file__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    }
    return make__options_file__HeadVar__1_1;
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

	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_found_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_mmc_option_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_line_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_class_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variables_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_search_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_result_1);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_source_0);
}

void mercury__make__options_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.options_file. */
