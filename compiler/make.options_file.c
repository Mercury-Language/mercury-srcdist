/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2018-01-26
** configured for x86_64-pc-linux-gnu.
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


// :- module make.options_file.
// :- implementation.

/*
INIT mercury__make__options_file__init
ENDINIT
*/

#include "make.options_file.mih"


#include "backend_libs.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0;

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

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
make__options_file__IntroducedFrom__pred__lookup_options_variable__1125__1_1_p_0(
  MR_String LambdaHeadVar__1_51);

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__880__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__751__1_2_p_0(
  MR_Word Chars_3,
  MR_Word * LambdaHeadVar__1_11);

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(
  MR_Word HeadVar__1_12,
  MR_Char HeadVar__2_19);

static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
  MR_Word Globals_7,
  MR_String OptionsFile_8,
  MR_Word Variables0_9,
  MR_Word * LambdaHeadVar__1_20);

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
make__options_file____Compare____search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
  MR_Word HeadVar__2_1,
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
make__options_file____Compare____options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
make__options_file____Compare____mmc_option_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
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
make__options_file____Compare____error_if_not_exist_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
  MR_Word Globals_8,
  MR_Word Vars_9,
  MR_Word OptionsVariableClass_10,
  MR_Word FlagsVar_11,
  MR_Word * Result_12);

static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
  MR_Word Globals_7,
  MR_Word Vars_8,
  MR_String VarName_9,
  MR_Word * Result_10);

static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
  MR_Word Globals_7,
  MR_String Dir_8,
  MR_Word STATE_VARIABLE_Variables_0_24,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__parse_options_line_2_p_0(
  MR_Word Line0_3,
  MR_Word * OptionsFileLine_4);

static void MR_CALL 
make__options_file__update_variable_8_p_0(
  MR_Word Globals_9,
  MR_String VarName_10,
  MR_Word AddToValue_11,
  MR_Word NewValue0_12,
  MR_Word STATE_VARIABLE_Variables_0_27,
  MR_Word * STATE_VARIABLE_Variables_28);

static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
  MR_Word Chars0_4,
  MR_Word RevWords0_5);

static void MR_CALL 
make__options_file__get_word_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RevWord_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
make__options_file__parse_string_chars_4_p_0(
  MR_Word String0_1,
  MR_Word * String_2,
  MR_Word HeadVar__3_3,
  MR_Word * Chars_4);

static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
  MR_Word Globals_5,
  MR_Word Vars_6);

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__options_file__expand_variables_2_8_p_0(
  MR_Word Variables_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevChars_0_3,
  MR_Word * STATE_VARIABLE_RevChars_4,
  MR_Word STATE_VARIABLE_RevUndef_0_5,
  MR_Word * STATE_VARIABLE_RevUndef_6);

static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
  MR_Word Variables_8,
  MR_String Var_9,
  MR_Word * Value_10,
  MR_Word STATE_VARIABLE_Undef_0_18,
  MR_Word * STATE_VARIABLE_Undef_19);

static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
  MR_Word IsFirst_1,
  MR_Word HeadVar__2_2,
  MR_Word * Var_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
  MR_Word * FoundEOF_6,
  MR_Word STATE_VARIABLE_Chars_0_13,
  MR_Word * STATE_VARIABLE_Chars_14);

static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
  MR_Word * FoundEOF_4);

static void MR_CALL 
make__options_file__write_done_2_p_0(void);

static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
  MR_String FileName_4);

static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void);

static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
  MR_Word Globals_7,
  MR_String OptionsFile_8,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorIfNotExist_11,
  MR_Word Search_12,
  MR_Word MaybeDirName_13,
  MR_String OptionsFile0_14,
  MR_Word STATE_VARIABLE_Variables_0_34,
  MR_Word * STATE_VARIABLE_Variables_35);

static void MR_CALL 
make__options_file__read_options_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
  MR_Word Globals_7,
  MR_String Dir_8,
  MR_Word STATE_VARIABLE_Variables_0_18,
  MR_Word * STATE_VARIABLE_Variables_19);

static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
  MR_String Dir_4,
  MR_String File_5);

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
  MR_Word Globals_6,
  MR_Word STATE_VARIABLE_Variables_0_10,
  MR_Word * STATE_VARIABLE_Variables_11);

static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
  MR_Word Globals_7,
  MR_Word Vars_8,
  MR_Word MaybeModuleName_9,
  MR_Word * Result_10);

static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
  MR_Word LookupEnv_7,
  MR_Word Vars_8,
  MR_String VarName_9,
  MR_Word * Result_10);

static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
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
make__options_file____Unify____search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
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


static /* final */ const MR_Box make__options_file_scalar_common_1[17][3];

static /* final */ const MR_Box make__options_file_scalar_common_2[43][2];

static /* final */ const MR_Box make__options_file_scalar_common_3[2][9];

static /* final */ const MR_Box make__options_file_scalar_common_4[6][5];

static /* final */ const MR_Box make__options_file_scalar_common_5[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_6[1][10];

static /* final */ const MR_Box make__options_file_scalar_common_7[1][1];

static /* final */ const MR_Box make__options_file_scalar_common_8[2][6];

static /* final */ const MR_Box make__options_file_scalar_common_9[22][4];

static /* final */ const MR_Box make__options_file_scalar_common_10[1][12];


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
    ((MR_Box) (&make__options_file_scalar_common_4[1])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[2])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[3])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[3])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[3])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[5])),
    ((MR_Box) (make__options_file__report_undefined_variables_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__split_into_words_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_5)),
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
    ((MR_Box) (&make__options_file_scalar_common_4[5])),
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
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error reading options file"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "options, found"))
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

static /* final */ const MR_Box make__options_file_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[1][8] = {
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

static /* final */ const MR_Box make__options_file_scalar_common_6[1][10] = {
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

static /* final */ const MR_Box make__options_file_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_8[2][6] = {
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
    ((MR_Box) (&make__options_file_scalar_common_4[4])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[8]))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__options_file_scalar_common_4[4])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[12]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--erlang-flag"))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__options_file_scalar_common_8[1])),
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

static /* final */ const MR_Box make__options_file_scalar_common_10[1][12] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
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

static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_mmc_option_type_0_1,
  make__options_file__make__options_file__field_names_mmc_option_type_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_file_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2] = {
  (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1 = {
  (MR_String) "include_options_files",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_options_file_line_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1 = {
  (MR_String) "non_module_specific",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2 = {
  (MR_String) "module_specific",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_options_variable_class_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_variable_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_variable_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1 = {
  (MR_String) "var_result_unset",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2 = {
  (MR_String) "var_result_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_variable_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
make__options_file__IntroducedFrom__pred__lookup_options_variable__1125__1_1_p_0(
  MR_String LambdaHeadVar__1_51)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__prefix_2_p_0(LambdaHeadVar__1_51, (MR_String) "-l");
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(
  MR_String OptionName_9,
  MR_String LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (LambdaHeadVar__1_14));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 0) = ((MR_Box) (OptionName_9));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 1) = ((MR_Box) (Var_16));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__880__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  {
    MR_bool succeeded;

    if ((LambdaHeadVar__1_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *LambdaHeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) LambdaHeadVar__1_25)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Word Value_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), LambdaHeadVar__1_25, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *LambdaHeadVar__2_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_16));
      }
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__751__1_2_p_0(
  MR_Word Chars_3,
  MR_Word * LambdaHeadVar__1_11)
{
  {
    MR_Word Var_18;

    Var_18 = make__options_file__split_into_words_2_2_f_0(Chars_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *LambdaHeadVar__1_11 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_18);
  }
}

static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(
  MR_Word HeadVar__1_12,
  MR_Char HeadVar__2_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, HeadVar__1_12, ((MR_Box) (MR_Word) (HeadVar__2_19)));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
  MR_Word Globals_7,
  MR_String OptionsFile_8,
  MR_Word Variables0_9,
  MR_Word * LambdaHeadVar__1_20)
{
  {
    make__options_file__read_options_file_params_9_p_0(Globals_7, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), OptionsFile_8, Variables0_9, LambdaHeadVar__1_20);
  }
}

static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_15 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 1);

                  parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_20, ArgY1_15);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, HeadVar__1_1, Var_21, ArgY1_5);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);
              succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
            }
          }
          break;
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

    mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) ArgX3_8;
          MR_Integer Var_18 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_2[3], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &make__options_file_scalar_common_2[0];
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
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
make__options_file____Compare____options_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word Var_10;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_10, Var_36, ArgY1_5);
        succeeded = (Var_10 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_10;
        else
        {
          MR_Word Var_11;
          MR_Integer Var_39 = (MR_Integer) Var_35;
          MR_Integer Var_40 = (MR_Integer) ArgY2_7;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_39, Var_40);
          succeeded = (Var_11 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_11;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY3_9)));
          }
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_26;
        MR_Integer Var_41 = (MR_Integer) Var_38;
        MR_Integer Var_42 = (MR_Integer) ArgY1_23;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_41, Var_42);
        succeeded = (Var_26 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_26;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Var_37)), ((MR_Box) (ArgY2_25)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeInfo_15_15;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) &make__options_file_scalar_common_2[3];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          }
        }
      }
    }
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (ArgX1_9 == ArgY1_10);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) &make__options_file_scalar_common_2[3];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
        }
      }
    }
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
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) HeadVar__2_2;
      MR_String ArgY1_5 = (MR_String) HeadVar__3_3;

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
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) HeadVar__1_1;
      MR_String ArgY1_4 = (MR_String) HeadVar__2_2;

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
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
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String ArgY2_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_12;

        mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &Var_12, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY2_11);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        TypeInfo_11_11 = (MR_Word) &make__options_file_scalar_common_2[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
      }
    }
    return succeeded;
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
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1125__1_1_p_0(((MR_String) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
  MR_Word Globals_8,
  MR_Word Vars_9,
  MR_Word OptionsVariableClass_10,
  MR_Word FlagsVar_11,
  MR_Word * Result_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_87_87;
    MR_String VarName_14 = ((&make__options_file_vector_common_11[0 + FlagsVar_11]))->make__options_file__vector_common_type_11_0__vct_11_f_0;
    MR_Word DefaultFlagsResult_15;
    MR_Word FlagsResult_16;
    MR_Word ExtraFlagsResult_17;
    MR_Word ModuleFlagsResult_22;
    MR_Word Result0_23;
    MR_String Var_38;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word ModuleName_19;

    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", VarName_14);
    make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, Var_38, &DefaultFlagsResult_15);
    switch (MR_tag((MR_Word) OptionsVariableClass_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionsVariableClass_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FlagsResult_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ExtraFlagsResult_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_42;

              make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, VarName_14, &FlagsResult_16);
              Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_14);
              make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, Var_42, &ExtraFlagsResult_17);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_42;

          make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, VarName_14, &FlagsResult_16);
          Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", VarName_14);
          make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, Var_42, &ExtraFlagsResult_17);
        }
        break;
    }
    if (((MR_Integer) 6782974 & (((MR_Integer) 1 << FlagsVar_11))))
    {
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OptionsVariableClass_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsVariableClass_10, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_String ModuleFileNameBase_20;
      MR_String ModuleVarName_21;
      MR_String Var_46;

      ModuleFileNameBase_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_19);
      Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "-", ModuleFileNameBase_20);
      ModuleVarName_21 = mercury__string__f_43_43_2_f_0(VarName_14, Var_46);
      make__options_file__lookup_variable_words_report_error_6_p_0(Globals_8, Vars_9, ModuleVarName_21, &ModuleFlagsResult_22);
    }
    else
      ModuleFlagsResult_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    Var_50 = make__options_file__combine_var_results_2_f_0(TypeCtorInfo_87_87, DefaultFlagsResult_15, FlagsResult_16);
    Var_49 = make__options_file__combine_var_results_2_f_0(TypeCtorInfo_87_87, Var_50, ExtraFlagsResult_17);
    Result0_23 = make__options_file__combine_var_results_2_f_0(TypeCtorInfo_87_87, Var_49, ModuleFlagsResult_22);
    switch (MR_tag((MR_Word) Result0_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *Result_12 = Result0_23;
        break;
      case (MR_Integer) 2:
        {
          MR_Word V_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result0_23, (MR_Integer) 0)));

          succeeded = (FlagsVar_11 == (MR_Integer) 10);
          if (succeeded)
          {
            MR_Word BadLibs_28;

            BadLibs_28 = mercury__list__filter_2_f_0(TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[15], V_25);
            if ((BadLibs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *Result_12 = Result0_23;
            else
            {
              MR_Word Pieces_31;
              MR_Word ErrorSpec_33;
              MR_Word Var_53;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Integer Var_34;
              MR_Integer Var_35;

              Var_63 = mercury__list__map_2_f_0(TypeCtorInfo_87_87, TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[16], BadLibs_28);
              Var_62 = parse_tree__error_util__list_to_pieces_1_f_0(Var_63);
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[42])));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[41])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[40])));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
              }
              Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Var_53, (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[36]));
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Pieces_31));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), Var_74, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_74, 3) = ((MR_Box) (Var_78));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ErrorSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ErrorSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ErrorSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), ErrorSpec_33, 2) = ((MR_Box) (Var_73));
              }
              parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_33, Globals_8, (MR_Integer) 0, &Var_34, (MR_Integer) 0, &Var_35);
              *Result_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ErrorSpec_33);
            }
          }
          else
            *Result_12 = Result0_23;
        }
        break;
    }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
  MR_Word Globals_7,
  MR_Word Vars_8,
  MR_String VarName_9,
  MR_Word * Result_10)
{
  {
    make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, Vars_8, VarName_9, Result_10);
    switch (MR_tag((MR_Word) *Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ErrorSpec_12 = (MR_Word) MR_body(((MR_Word) *Result_10), (MR_Integer) 1);
          MR_Integer Var_13;
          MR_Integer Var_14;

          parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_12, Globals_7, (MR_Integer) 0, &Var_13, (MR_Integer) 0, &Var_14);
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
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = HeadVar__2_2;
            break;
          case (MR_Integer) 2:
            HeadVar__3_3 = HeadVar__2_2;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = HeadVar__1_1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__3_3 = HeadVar__1_1;
              break;
            case (MR_Integer) 1:
              HeadVar__3_3 = HeadVar__2_2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word V2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word Var_8;

                Var_8 = mercury__list__f_43_43_2_f_0(TypeInfo_for_T_14, Var_15, V2_7);
                {
                  HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_8));
                }
              }
              break;
          }
        }
        break;
    }
    return HeadVar__3_3;
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

    conv19_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv18_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv17_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv16_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv15_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv14_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv13_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv12_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv11_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv10_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv9_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv8_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv7_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv6_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv5_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv4_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv3_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv2_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv1_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    conv0_LambdaHeadVar__2_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1016__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    if ((Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word VariableValue_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0)));

      switch (Var_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 13:
          {
            MR_Word TypeCtorInfo_19_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_17;
            MR_Word Var_18;

            Var_18 = mercury__list__map_2_f_0(TypeCtorInfo_19_25, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[3], VariableValue_6);
            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_25, Var_17);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorInfo_19_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_75;
            MR_Word Var_76;

            Var_76 = mercury__list__map_2_f_0(TypeCtorInfo_19_78, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[4], VariableValue_6);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_78, Var_75);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeCtorInfo_19_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_84;
            MR_Word Var_85;

            Var_85 = mercury__list__map_2_f_0(TypeCtorInfo_19_87, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[5], VariableValue_6);
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_87, Var_84);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word TypeCtorInfo_19_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_93;
            MR_Word Var_94;

            Var_94 = mercury__list__map_2_f_0(TypeCtorInfo_19_96, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[6], VariableValue_6);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_96, Var_93);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word TypeCtorInfo_19_105 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_102;
            MR_Word Var_103;

            Var_103 = mercury__list__map_2_f_0(TypeCtorInfo_19_105, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[7], VariableValue_6);
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_105, Var_102);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word TypeCtorInfo_19_114 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_111;
            MR_Word Var_112;

            Var_112 = mercury__list__map_2_f_0(TypeCtorInfo_19_114, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[8], VariableValue_6);
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_114, Var_111);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCtorInfo_19_123 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_120;
            MR_Word Var_121;

            Var_121 = mercury__list__map_2_f_0(TypeCtorInfo_19_123, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[9], VariableValue_6);
            {
              Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_123, Var_120);
          }
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 18:
          {
            MR_Word TypeCtorInfo_19_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_131;
            MR_Word Var_132;

            Var_132 = mercury__list__map_2_f_0(TypeCtorInfo_19_134, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[10], VariableValue_6);
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_134, Var_131);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TypeCtorInfo_19_143 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_140;
            MR_Word Var_141;

            Var_141 = mercury__list__map_2_f_0(TypeCtorInfo_19_143, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[11], VariableValue_6);
            {
              Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_143, Var_140);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word TypeCtorInfo_19_152 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_149;
            MR_Word Var_150;

            Var_150 = mercury__list__map_2_f_0(TypeCtorInfo_19_152, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[12], VariableValue_6);
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_152, Var_149);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word TypeCtorInfo_19_161 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_158;
            MR_Word Var_159;

            Var_159 = mercury__list__map_2_f_0(TypeCtorInfo_19_161, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[13], VariableValue_6);
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_159));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_161, Var_158);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TypeCtorInfo_19_170 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_167;
            MR_Word Var_168;

            Var_168 = mercury__list__map_2_f_0(TypeCtorInfo_19_170, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[14], VariableValue_6);
            {
              Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_170, Var_167);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word TypeCtorInfo_19_178 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word MMCOptionType_172 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[28]);
            MR_Word InitialOptions_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), MMCOptionType_172, (MR_Integer) 0)));
            MR_String OptionName_174 = ((MR_String) (MR_hl_field(MR_mktag(1), MMCOptionType_172, (MR_Integer) 1)));
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;

            {
              Var_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&make__options_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_13));
              MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (OptionName_174));
            }
            Var_176 = mercury__list__map_2_f_0(TypeCtorInfo_19_178, (MR_Word) &make__options_file_scalar_common_2[0], Var_177, VariableValue_6);
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (InitialOptions_173));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_176));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_178, Var_175);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word TypeCtorInfo_19_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word MMCOptionType_180 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[30]);
            MR_Word InitialOptions_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), MMCOptionType_180, (MR_Integer) 0)));
            MR_String OptionName_182 = ((MR_String) (MR_hl_field(MR_mktag(1), MMCOptionType_180, (MR_Integer) 1)));
            MR_Word Var_183;
            MR_Word Var_184;
            MR_Word Var_185;

            {
              Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&make__options_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_14));
              MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (OptionName_182));
            }
            Var_184 = mercury__list__map_2_f_0(TypeCtorInfo_19_186, (MR_Word) &make__options_file_scalar_common_2[0], Var_185, VariableValue_6);
            {
              Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (InitialOptions_181));
              MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_184));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_186, Var_183);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word TypeCtorInfo_19_195 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_192;
            MR_Word Var_193;

            Var_193 = mercury__list__map_2_f_0(TypeCtorInfo_19_195, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[15], VariableValue_6);
            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_193));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_195, Var_192);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word TypeCtorInfo_19_204 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_201;
            MR_Word Var_202;

            Var_202 = mercury__list__map_2_f_0(TypeCtorInfo_19_204, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[16], VariableValue_6);
            {
              Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_202));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_204, Var_201);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word TypeCtorInfo_19_213 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_210;
            MR_Word Var_211;

            Var_211 = mercury__list__map_2_f_0(TypeCtorInfo_19_213, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[17], VariableValue_6);
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_213, Var_210);
          }
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 9:
          {
            MR_Word TypeCtorInfo_19_224 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_221;
            MR_Word Var_222;

            Var_222 = mercury__list__map_2_f_0(TypeCtorInfo_19_224, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[18], VariableValue_6);
            {
              Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_222));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_224, Var_221);
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = VariableValue_6;
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeCtorInfo_19_235 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_232;
            MR_Word Var_233;

            Var_233 = mercury__list__map_2_f_0(TypeCtorInfo_19_235, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[19], VariableValue_6);
            {
              Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_233));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_235, Var_232);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word TypeCtorInfo_19_244 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word Var_241;
            MR_Word Var_242;

            Var_242 = mercury__list__map_2_f_0(TypeCtorInfo_19_244, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[20], VariableValue_6);
            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Var_242));
            }
            HeadVar__2_2 = mercury__list__condense_1_f_0(TypeCtorInfo_19_244, Var_241);
          }
          break;
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Variables_35;

    make__options_file__read_options_file_params_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Variables_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Variables_35));
  }
}

static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
  MR_Word Globals_7,
  MR_String Dir_8,
  MR_Word STATE_VARIABLE_Variables_0_24,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word FoundEOF_10;
    MR_Word Line0_12;
    MR_Word STATE_VARIABLE_Variables_25;
    MR_Word RevChars_49;
    MR_Word SpaceResult_51;

    mercury__io__ignore_whitespace_3_p_0(&SpaceResult_51);
    switch (MR_tag((MR_Word) SpaceResult_51)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SpaceResult_51)) {
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
          MR_Word Error_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpaceResult_51, (MR_Integer) 0)));
          MR_Word Var_54;
          MR_String Var_55;

          Var_55 = mercury__io__error_message_1_f_0(Error_52);
          Var_54 = (MR_Word) Var_55;
          {
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_54)));
            return;
          }
        }
        break;
    }
    make__options_file__read_options_line_2_5_p_0(&FoundEOF_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevChars_49);
    Line0_12 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, RevChars_49);
    if ((Line0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Variables_25 = STATE_VARIABLE_Variables_0_24;
    else
    {
      MR_Word ParsedLine_15;

      make__options_file__parse_options_line_2_p_0(Line0_12, &ParsedLine_15);
      if (((MR_tag((MR_Word) ParsedLine_15)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ParsedLine_15, (MR_Integer) 0)));
        MR_Word AddToValue_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParsedLine_15, (MR_Integer) 1)));
        MR_Word Value_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParsedLine_15, (MR_Integer) 2)));

        make__options_file__update_variable_8_p_0(Globals_7, VarName_16, AddToValue_17, Value_18, STATE_VARIABLE_Variables_0_24, &STATE_VARIABLE_Variables_25);
      }
      else
      {
        MR_Word ErrorIfNotExist_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ParsedLine_15, (MR_Integer) 0)));
        MR_Word IncludedFilesChars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ParsedLine_15, (MR_Integer) 1)));
        MR_Word IncludedFilesChars_21;
        MR_Word UndefVars_22;
        MR_Word IncludedFileNames_23;
        MR_Word Var_31;
        MR_Word Var_35;
        MR_Word RevChars_67;
        MR_Word RevUndefVars_68;
        MR_Word Var_75;
        MR_Box conv2_STATE_VARIABLE_Variables_25;
        MR_Box conv1_STATE_VARIABLE_IO_27;

        make__options_file__expand_variables_2_8_p_0(STATE_VARIABLE_Variables_0_24, IncludedFilesChars0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevChars_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevUndefVars_68);
        mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, RevChars_67, &IncludedFilesChars_21);
        mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, RevUndefVars_68, &UndefVars_22);
        make__options_file__report_undefined_variables_4_p_0(Globals_7, UndefVars_22);
        Var_75 = make__options_file__split_into_words_2_2_f_0(IncludedFilesChars_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        IncludedFileNames_23 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_75);
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Dir_8));
        }
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__options_file_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__options_file__read_options_lines_3_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ErrorIfNotExist_19));
          MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (Var_35));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_31, IncludedFileNames_23, ((MR_Box) (STATE_VARIABLE_Variables_0_24)), &conv2_STATE_VARIABLE_Variables_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
        STATE_VARIABLE_Variables_25 = ((MR_Word) conv2_STATE_VARIABLE_Variables_25);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Variables_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FoundEOF_10));
    }
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
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
make__options_file__parse_options_line_2_p_0_4(
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
make__options_file__parse_options_line_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
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
make__options_file__parse_options_line_2_p_0_1(
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
make__options_file__parse_options_line_2_p_0(
  MR_Word Line0_3,
  MR_Word * OptionsFileLine_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Line0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ErrorIfNotExist_6;
    MR_Word Line3_8;
    MR_Word Line2_7;
    MR_Word Var_14;
    MR_Word Line1_5;
    MR_Char Var_13;

    if (succeeded)
    {
      Var_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line0_3, (MR_Integer) 0)));
      Line1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Line0_3, (MR_Integer) 1)));
      succeeded = (Var_13 == (MR_Char) 45);
    }
    if (succeeded)
    {
      ErrorIfNotExist_6 = (MR_Integer) 1;
      Line2_7 = Line1_5;
    }
    else
    {
      ErrorIfNotExist_6 = (MR_Integer) 0;
      Line2_7 = Line0_3;
    }
    Var_14 = mercury__string__to_char_list_1_f_0((MR_String) "include");
    succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, Var_14, &Line3_8, Line2_7);
    if (succeeded)
    {
      MR_Word Line4_9;

      mercury__list__drop_while_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[11], Line3_8, &Line4_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *OptionsFileLine_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorIfNotExist_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Line4_9));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_42_42;
      MR_String VarName_10;
      MR_Word Add_11;
      MR_Word VarValue_12;
      MR_Word Line1_34;
      MR_Word Line2_35;
      MR_Word Line4_37;
      MR_Word VarList_48;
      MR_Word Line3_33;
      MR_Char Var_18;

      make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &VarList_48, Line0_3, &Line1_34);
      mercury__string__from_rev_char_list_2_p_0(VarList_48, &VarName_10);
      succeeded = (strcmp(VarName_10, (MR_String) "") == 0);
      if (succeeded)
      {
        MR_Word FirstWord_49;
        MR_Word Var_54;
        MR_String Var_55;
        MR_String Var_57;
        MR_String Var_58;

        mercury__list__take_while_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[2], Line1_34, &FirstWord_49);
        Var_58 = mercury__string__from_char_list_1_f_0(FirstWord_49);
        Var_57 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) "\'");
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", Var_57);
        Var_54 = (MR_Word) Var_55;
        {
          mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_54)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      mercury__list__drop_while_3_p_0(TypeCtorInfo_42_42, (MR_Word) &make__options_file_scalar_common_1[13], Line1_34, &Line2_35);
      succeeded = ((MR_tag((MR_Word) Line2_35)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 0)));
        Line3_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 1)));
        succeeded = (Var_18 == (MR_Char) 61);
      }
      if (succeeded)
      {
        Add_11 = (MR_Integer) 0;
        Line4_37 = Line3_33;
      }
      else
      {
        MR_Word Line3_32;
        MR_Char Var_19;
        MR_Word Var_20;
        MR_Char Var_21;

        succeeded = ((MR_tag((MR_Word) Line2_35)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 0)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 1)));
          succeeded = (Var_19 == (MR_Char) 43);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
              Line3_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
              succeeded = (Var_21 == (MR_Char) 61);
            }
          }
        }
        if (succeeded)
        {
          Add_11 = (MR_Integer) 1;
          Line4_37 = Line3_32;
        }
        else
        {
          MR_Word Line3_31;
          MR_Char Var_22;
          MR_Word Var_23;
          MR_Char Var_24;

          succeeded = ((MR_tag((MR_Word) Line2_35)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 0)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Line2_35, (MR_Integer) 1)));
            succeeded = (Var_22 == (MR_Char) 58);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
                Line3_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
                succeeded = (Var_24 == (MR_Char) 61);
              }
            }
          }
          if (succeeded)
          {
            Add_11 = (MR_Integer) 0;
            Line4_37 = Line3_31;
          }
          else
          {
            MR_Word Var_25;
            MR_String Var_26;
            MR_String Var_28;

            Var_28 = mercury__string__f_43_43_2_f_0(VarName_10, (MR_String) "\'");
            Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "expected \140=\', \140:=\' or \140+=\' after \140", Var_28);
            Var_25 = (MR_Word) Var_26;
            {
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_25)));
              return;
            }
          }
        }
      }
      mercury__list__drop_while_3_p_0(TypeCtorInfo_42_42, (MR_Word) &make__options_file_scalar_common_1[14], Line4_37, &VarValue_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *OptionsFileLine_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Add_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarValue_12));
      }
    }
  }
}

static void MR_CALL 
make__options_file__update_variable_8_p_0(
  MR_Word Globals_9,
  MR_String VarName_10,
  MR_Word AddToValue_11,
  MR_Word NewValue0_12,
  MR_Word STATE_VARIABLE_Variables_0_27,
  MR_Word * STATE_VARIABLE_Variables_28)
{
  {
    MR_bool succeeded;
    MR_Word NewValue1_15;
    MR_Word Undef_16;
    MR_Word Words1_17;
    MR_Word MaybeEnvValue_18;
    MR_Word RevChars_70;
    MR_Word RevUndefVars_71;
    MR_Word Var_78;

    make__options_file__expand_variables_2_8_p_0(STATE_VARIABLE_Variables_0_27, NewValue0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevChars_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevUndefVars_71);
    mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, RevChars_70, &NewValue1_15);
    mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, RevUndefVars_71, &Undef_16);
    make__options_file__report_undefined_variables_4_p_0(Globals_9, Undef_16);
    Var_78 = make__options_file__split_into_words_2_2_f_0(NewValue1_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    Words1_17 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_78);
    mercury__io__get_environment_var_4_p_0(VarName_10, &MaybeEnvValue_18);
    if ((MaybeEnvValue_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word OldValue_23;
      MR_Word OldWords_24;
      MR_Word Source_25;
      MR_Word Var_34;
      MR_Box conv0_Var_34;

      succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, STATE_VARIABLE_Variables_0_27, ((MR_Box) (VarName_10)), &conv0_Var_34);
      if (succeeded)
      {
        Var_34 = ((MR_Word) conv0_Var_34);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        OldValue_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0)));
        OldWords_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1)));
        Source_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 2)));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (Source_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Variables_28 = STATE_VARIABLE_Variables_0_27;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Variables_28 = STATE_VARIABLE_Variables_0_27;
            break;
          case (MR_Integer) 0:
            {
              MR_Word NewValue_26;
              MR_Word Words_44;
              MR_Word OptVarValue_45;

              switch (AddToValue_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    NewValue_26 = NewValue1_15;
                    Words_44 = Words1_17;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_35;

                    {
                      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (NewValue1_15));
                    }
                    NewValue_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, OldValue_23, Var_35);
                    Words_44 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, OldWords_24, Words1_17);
                  }
                  break;
              }
              {
                OptVarValue_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OptVarValue_45, 0) = ((MR_Box) (NewValue_26));
                MR_hl_field(MR_mktag(0), OptVarValue_45, 1) = ((MR_Box) (Words_44));
                MR_hl_field(MR_mktag(0), OptVarValue_45, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (VarName_10)), ((MR_Box) (OptVarValue_45)), STATE_VARIABLE_Variables_0_27, STATE_VARIABLE_Variables_28);
            }
            break;
        }
      else
      {
        MR_Word OptVarValue_48;

        {
          OptVarValue_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OptVarValue_48, 0) = ((MR_Box) (NewValue1_15));
          MR_hl_field(MR_mktag(0), OptVarValue_48, 1) = ((MR_Box) (Words1_17));
          MR_hl_field(MR_mktag(0), OptVarValue_48, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (VarName_10)), ((MR_Box) (OptVarValue_48)), STATE_VARIABLE_Variables_0_27, STATE_VARIABLE_Variables_28);
      }
    }
    else
    {
      MR_String EnvValue_19 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeEnvValue_18, (MR_Integer) 0)));
      MR_Word Value_20;
      MR_Word Words_21;
      MR_Word OptVarValue_22;
      MR_Word Var_41;
      MR_Word Var_82;

      Value_20 = mercury__string__to_char_list_1_f_0(EnvValue_19);
      Var_82 = make__options_file__split_into_words_2_2_f_0(Value_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Words_21 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_82);
      Var_41 = mercury__string__to_char_list_1_f_0(EnvValue_19);
      {
        OptVarValue_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptVarValue_22, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), OptVarValue_22, 1) = ((MR_Box) (Words_21));
        MR_hl_field(MR_mktag(0), OptVarValue_22, 2) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (VarName_10)), ((MR_Box) (OptVarValue_22)), STATE_VARIABLE_Variables_0_27, STATE_VARIABLE_Variables_28);
    }
  }
}

static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
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

static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
  MR_Word Chars0_4,
  MR_Word RevWords0_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word RevWords_6;
    MR_Word Chars1_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__list__drop_while_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[10], Chars0_4, &Chars1_7);
    if ((Chars1_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      RevWords_6 = RevWords0_5;
    else
    {
      MR_String Word_10;
      MR_Word Chars_11;
      MR_Word Var_13;
      MR_Word RevWord_19;
      MR_Word next_value_of_Chars0_4;
      MR_Word next_value_of_RevWords0_5;

      make__options_file__get_word_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevWord_19, Chars1_7, &Chars_11);
      Word_10 = mercury__string__from_rev_char_list_1_f_0(RevWord_19);
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Word_10));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (RevWords0_5));
      }
      // direct tailcall eliminated
      next_value_of_Chars0_4 = Chars_11;
      next_value_of_RevWords0_5 = Var_13;
      Chars0_4 = next_value_of_Chars0_4;
      RevWords0_5 = next_value_of_RevWords0_5;
      continue;
    }
    return RevWords_6;
    break;
  }
}

static void MR_CALL 
make__options_file__get_word_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RevWord_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *RevWord_2 = HeadVar__1_1;
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Chars0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      succeeded = mercury__char__is_whitespace_1_p_0(Char_8);
      if (succeeded)
      {
        *HeadVar__4_4 = Chars0_9;
        *RevWord_2 = HeadVar__1_1;
      }
      else
      {
        succeeded = (Char_8 == (MR_Char) 34);
        if (succeeded)
        {
          MR_Word RevStringChars_11;
          MR_Word Chars1_12;
          MR_Word Var_15;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__3_3;

          make__options_file__parse_string_chars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevStringChars_11, Chars0_9, &Chars1_12);
          Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, RevStringChars_11, HeadVar__1_1);
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Var_15;
          next_value_of_HeadVar__3_3 = Chars1_12;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          succeeded = (Char_8 == (MR_Char) 92);
          if (succeeded)
            if ((Chars0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *RevWord_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__1_1));
              }
              *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            else
            {
              MR_Char Char2_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_9, (MR_Integer) 0)));
              MR_Word Chars1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars0_9, (MR_Integer) 1)));

              switch (Char2_13) {
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
                MR_Word Var_16;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__3_3;

                {
                  Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) (Char2_13));
                  MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (HeadVar__1_1));
                }
                // direct tailcall eliminated
                next_value_of_HeadVar__1_1 = Var_16;
                next_value_of_HeadVar__3_3 = Chars1_20;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
              else
              {
                MR_Word Var_17;
                MR_Word Var_18;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__3_3;

                {
                  Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) (Char_8));
                  MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (HeadVar__1_1));
                }
                {
                  Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_Word) (Char2_13));
                  MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
                }
                // direct tailcall eliminated
                next_value_of_HeadVar__1_1 = Var_17;
                next_value_of_HeadVar__3_3 = Chars1_20;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
            }
          else
          {
            MR_Word Var_19;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__3_3;

            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_Word) (Char_8));
              MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (HeadVar__1_1));
            }
            // direct tailcall eliminated
            next_value_of_HeadVar__1_1 = Var_19;
            next_value_of_HeadVar__3_3 = Chars0_9;
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
make__options_file__parse_string_chars_4_p_0(
  MR_Word String0_1,
  MR_Word * String_2,
  MR_Word HeadVar__3_3,
  MR_Word * Chars_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
        return;
      }
    }
    else
    {
      MR_Char Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Chars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      succeeded = (Char_12 == (MR_Char) 34);
      if (succeeded)
      {
        *Chars_4 = Chars0_13;
        *String_2 = String0_1;
      }
      else
      {
        succeeded = (Char_12 == (MR_Char) 92);
        if (succeeded)
          if ((Chars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
              return;
            }
          }
          else
          {
            MR_Char Char2_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_13, (MR_Integer) 0)));
            MR_Word Chars1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars0_13, (MR_Integer) 1)));
            MR_Word String1_17;
            MR_Word next_value_of_String0_1;
            MR_Word next_value_of_HeadVar__3_3;

            succeeded = (Char2_15 == (MR_Char) 34);
            if (succeeded)
              {
                String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), String1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(MR_mktag(1), String1_17, 1) = ((MR_Box) (String0_1));
              }
            else
            {
              MR_Word Var_20;

              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_Word) (Char_12));
                MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (String0_1));
              }
              {
                String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), String1_17, 0) = ((MR_Box) (MR_Word) (Char2_15));
                MR_hl_field(MR_mktag(1), String1_17, 1) = ((MR_Box) (Var_20));
              }
            }
            // direct tailcall eliminated
            next_value_of_String0_1 = String1_17;
            next_value_of_HeadVar__3_3 = Chars1_16;
            String0_1 = next_value_of_String0_1;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        else
        {
          MR_Word Var_21;
          MR_Word next_value_of_String0_1;
          MR_Word next_value_of_HeadVar__3_3;

          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (String0_1));
          }
          // direct tailcall eliminated
          next_value_of_String0_1 = Var_21;
          next_value_of_HeadVar__3_3 = Chars0_13;
          String0_1 = next_value_of_String0_1;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
  MR_Word Globals_5,
  MR_Word Vars_6)
{
  {
    MR_Word Var_10;

    Var_10 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Vars_6);
    if (!((Var_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Rest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1)));
      MR_Word Warn_22;
      MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));

      libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 30, &Warn_22);
      switch (Warn_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_48_56;
            MR_String FileName_23;
            MR_Integer LineNumber_24;
            MR_Word Context_25;
            MR_Word VarList_26;
            MR_String Word_27;
            MR_String IsOrAre_28;
            MR_Word Pieces_31;
            MR_Word Halt_32;
            MR_Word Var_38;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;

            mercury__io__input_stream_name_3_p_0(&FileName_23);
            mercury__io__get_line_number_3_p_0(&LineNumber_24);
            Context_25 = mercury__term__context_init_2_f_0(FileName_23, LineNumber_24);
            TypeCtorInfo_48_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            Var_40 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_48_56, Var_10);
            Var_38 = mercury__list__map_2_f_0(TypeCtorInfo_48_56, TypeCtorInfo_48_56, (MR_Word) &make__options_file_scalar_common_1[9], Var_40);
            VarList_26 = parse_tree__error_util__list_to_pieces_1_f_0(Var_38);
            if ((Rest_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              Word_27 = (MR_String) "variable";
              IsOrAre_28 = (MR_String) "is";
            }
            else
            {
              Word_27 = (MR_String) "variables";
              IsOrAre_28 = (MR_String) "are";
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Word_27));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (VarList_26));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[37])));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (IsOrAre_28));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[39])));
            }
            Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Var_41, Var_46);
            parse_tree__error_util__write_error_pieces_6_p_0(Globals_5, Context_25, (MR_Integer) 0, Pieces_31);
            libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 3, &Halt_32);
            switch (Halt_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
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
make__options_file__expand_variables_2_8_p_0(
  MR_Word Variables_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevChars_0_3,
  MR_Word * STATE_VARIABLE_RevChars_4,
  MR_Word STATE_VARIABLE_RevUndef_0_5,
  MR_Word * STATE_VARIABLE_RevUndef_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevUndef_6 = STATE_VARIABLE_RevUndef_0_5;
      *STATE_VARIABLE_RevChars_4 = STATE_VARIABLE_RevChars_0_3;
    }
    else
    {
      MR_Char Char_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Chars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (Char_20 == (MR_Char) 36);
      if (succeeded)
        if ((Chars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated variable reference")))));
            return;
          }
        }
        else
        {
          MR_Char Char2_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars_21, (MR_Integer) 0)));
          MR_Word Chars1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars_21, (MR_Integer) 1)));

          succeeded = (Char2_25 == (MR_Char) 36);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_RevChars_40_40;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_3;

            {
              STATE_VARIABLE_RevChars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Char) 36));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_40_40, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_3));
            }
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Chars1_26;
            next_value_of_STATE_VARIABLE_RevChars_0_3 = STATE_VARIABLE_RevChars_40_40;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_RevChars_0_3 = next_value_of_STATE_VARIABLE_RevChars_0_3;
            continue;
          }
          else
          {
            MR_Word TypeCtorInfo_62_62;
            MR_Word Chars4_31;
            MR_String VarName_32;
            MR_Word VarChars_33;
            MR_Word STATE_VARIABLE_RevUndef_47_47;
            MR_Word STATE_VARIABLE_RevChars_49_49;
            MR_Word Var_50;
            MR_Char EndChar_27;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_STATE_VARIABLE_RevChars_0_3;
            MR_Word next_value_of_STATE_VARIABLE_RevUndef_0_5;

            switch (Char2_25) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Char) 40:
                {
                  EndChar_27 = (MR_Char) 41;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 123:
                {
                  EndChar_27 = (MR_Char) 125;
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              MR_String VarName0_28;
              MR_Word Chars2_29;
              MR_Word VarList_67;
              MR_Word Chars3_30;
              MR_Char Var_63;

              make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &VarList_67, Chars1_26, &Chars2_29);
              mercury__string__from_rev_char_list_2_p_0(VarList_67, &VarName0_28);
              succeeded = (strcmp(VarName0_28, (MR_String) "") == 0);
              if (succeeded)
              {
                MR_Word FirstWord_68;
                MR_Word Var_73;
                MR_String Var_74;
                MR_String Var_76;
                MR_String Var_77;

                mercury__list__take_while_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[1], Chars2_29, &FirstWord_68);
                Var_77 = mercury__string__from_char_list_1_f_0(FirstWord_68);
                Var_76 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) "\'");
                Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", Var_76);
                Var_73 = (MR_Word) Var_74;
                {
                  mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_73)));
                  return;
                }
              }
              else
              {
              }
              succeeded = ((MR_tag((MR_Word) Chars2_29)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_63 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_29, (MR_Integer) 0)));
                Chars3_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars2_29, (MR_Integer) 1)));
                succeeded = (EndChar_27 == Var_63);
              }
              if (succeeded)
              {
                Chars4_31 = Chars3_30;
                VarName_32 = VarName0_28;
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
              Chars4_31 = Chars1_26;
              VarName_32 = mercury__string__char_to_string_1_f_0(Char2_25);
            }
            make__options_file__lookup_variable_chars_7_p_0(Variables_1, VarName_32, &VarChars_33, STATE_VARIABLE_RevUndef_0_5, &STATE_VARIABLE_RevUndef_47_47);
            TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            Var_50 = mercury__list__reverse_1_f_0(TypeCtorInfo_62_62, VarChars_33);
            STATE_VARIABLE_RevChars_49_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_62_62, Var_50, STATE_VARIABLE_RevChars_0_3);
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Chars4_31;
            next_value_of_STATE_VARIABLE_RevChars_0_3 = STATE_VARIABLE_RevChars_49_49;
            next_value_of_STATE_VARIABLE_RevUndef_0_5 = STATE_VARIABLE_RevUndef_47_47;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_RevChars_0_3 = next_value_of_STATE_VARIABLE_RevChars_0_3;
            STATE_VARIABLE_RevUndef_0_5 = next_value_of_STATE_VARIABLE_RevUndef_0_5;
            continue;
          }
        }
      else
      {
        MR_Word STATE_VARIABLE_RevChars_56_56;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevChars_0_3;

        {
          STATE_VARIABLE_RevChars_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_56_56, 0) = ((MR_Box) (MR_Word) (Char_20));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_56_56, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_3));
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Chars_21;
        next_value_of_STATE_VARIABLE_RevChars_0_3 = STATE_VARIABLE_RevChars_56_56;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_RevChars_0_3 = next_value_of_STATE_VARIABLE_RevChars_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
  MR_Word Variables_8,
  MR_String Var_9,
  MR_Word * Value_10,
  MR_Word STATE_VARIABLE_Undef_0_18,
  MR_Word * STATE_VARIABLE_Undef_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeValue_13;

    mercury__io__get_environment_var_4_p_0(Var_9, &MaybeValue_13);
    if ((MaybeValue_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Value0_15;
      MR_Word Var_23;
      MR_Box conv0_Var_23;
      MR_Word Var_16;
      MR_Word Var_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, Variables_8, ((MR_Box) (Var_9)), &conv0_Var_23);
      if (succeeded)
      {
        Var_23 = ((MR_Word) conv0_Var_23);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Value0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2)));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *Value_10 = Value0_15;
        *STATE_VARIABLE_Undef_19 = STATE_VARIABLE_Undef_0_18;
      }
      else
      {
        *Value_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Undef_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Undef_0_18));
        }
      }
    }
    else
    {
      MR_String ValueString_14 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 0)));

      *Value_10 = mercury__string__to_char_list_1_f_0(ValueString_14);
      *STATE_VARIABLE_Undef_19 = STATE_VARIABLE_Undef_0_18;
    }
  }
}

static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
  MR_Word IsFirst_1,
  MR_Word HeadVar__2_2,
  MR_Word * Var_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Var_3 = HeadVar__2_2;
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Chars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));

      succeeded = mercury__char__is_whitespace_1_p_0(Char_11);
      succeeded = !(succeeded);
      if (succeeded)
        switch (IsFirst_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Char_11) {
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
                succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Char_11);
            }
            break;
          case (MR_Integer) 1:
            succeeded = mercury__char__is_alpha_1_p_0(Char_11);
            break;
        }
      if (succeeded)
      {
        MR_Word Var_15;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__4_4;

        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_Word) (Char_11));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (HeadVar__2_2));
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Var_15;
        next_value_of_HeadVar__4_4 = Chars0_12;
        IsFirst_1 = (MR_Integer) 0;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
      else
      {
        *Var_3 = HeadVar__2_2;
        *HeadVar__5_5 = HeadVar__4_4;
      }
    }
    break;
  }
}

static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
  MR_Word * FoundEOF_6,
  MR_Word STATE_VARIABLE_Chars_0_13,
  MR_Word * STATE_VARIABLE_Chars_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_45;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_3_p_0(&Result_45);
    switch (MR_tag((MR_Word) Result_45)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FoundEOF_6 = (MR_Integer) 1;
          *STATE_VARIABLE_Chars_14 = STATE_VARIABLE_Chars_0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result_45, (MR_Integer) 0)));

          succeeded = (Char_10 == (MR_Char) 35);
          if (succeeded)
          {
            make__options_file__skip_comment_line_3_p_0(FoundEOF_6);
            *STATE_VARIABLE_Chars_14 = STATE_VARIABLE_Chars_0_13;
          }
          else
          {
            succeeded = (Char_10 == (MR_Char) 92);
            if (succeeded)
            {
              MR_Word Result_59;

              mercury__io__read_char_3_p_0(&Result_59);
              switch (MR_tag((MR_Word) Result_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *FoundEOF_6 = (MR_Integer) 1;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Chars_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_10));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_13));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Char Char2_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result_59, (MR_Integer) 0)));
                    MR_Word STATE_VARIABLE_Chars_23_23;
                    MR_Word next_value_of_STATE_VARIABLE_Chars_0_13;

                    succeeded = (Char2_12 == (MR_Char) 10);
                    if (succeeded)
                    {
                      {
                        STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_13));
                      }
                    }
                    else
                    {
                      MR_Word Var_26;

                      {
                        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_Word) (Char_10));
                        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_13));
                      }
                      {
                        STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) (Char2_12));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (Var_26));
                      }
                    }
                    // direct tailcall eliminated
                    next_value_of_STATE_VARIABLE_Chars_0_13 = STATE_VARIABLE_Chars_23_23;
                    STATE_VARIABLE_Chars_0_13 = next_value_of_STATE_VARIABLE_Chars_0_13;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Error_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_59, (MR_Integer) 0)));
                    MR_Word Var_63;
                    MR_String Var_64;

                    Var_64 = mercury__io__error_message_1_f_0(Error_61);
                    Var_63 = (MR_Word) Var_64;
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_63)));
                      return;
                    }
                  }
                  break;
              }
            }
            else
            {
              succeeded = (Char_10 == (MR_Char) 10);
              if (succeeded)
              {
                *FoundEOF_6 = (MR_Integer) 0;
                *STATE_VARIABLE_Chars_14 = STATE_VARIABLE_Chars_0_13;
              }
              else
              {
                MR_Word STATE_VARIABLE_Chars_29_29;
                MR_Word next_value_of_STATE_VARIABLE_Chars_0_13;

                {
                  STATE_VARIABLE_Chars_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, 0) = ((MR_Box) (MR_Word) (Char_10));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_13));
                }
                // direct tailcall eliminated
                next_value_of_STATE_VARIABLE_Chars_0_13 = STATE_VARIABLE_Chars_29_29;
                STATE_VARIABLE_Chars_0_13 = next_value_of_STATE_VARIABLE_Chars_0_13;
                continue;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_45, (MR_Integer) 0)));
          MR_Word Var_49;
          MR_String Var_50;

          Var_50 = mercury__io__error_message_1_f_0(Error_47);
          Var_49 = (MR_Word) Var_50;
          {
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_49)));
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
  MR_Word * FoundEOF_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_23;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_3_p_0(&Result_23);
    switch (MR_tag((MR_Word) Result_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *FoundEOF_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result_23, (MR_Integer) 0)));

          succeeded = (Char_7 == (MR_Char) 10);
          if (succeeded)
            *FoundEOF_4 = (MR_Integer) 0;
          else
          {
            // direct tailcall eliminated
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_23, (MR_Integer) 0)));
          MR_Word Var_27;
          MR_String Var_28;

          Var_28 = mercury__io__error_message_1_f_0(Error_25);
          Var_27 = (MR_Word) Var_28;
          {
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (Var_27)));
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__options_file__write_done_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "done.\n");
  }
}

static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
  MR_String FileName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Reading options file ");
    mercury__io__write_string_3_p_0(FileName_4);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Reading options file from stdin...");
  }
}

static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
  MR_Word Globals_7,
  MR_String OptionsFile_8,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14)
{
  {
    MR_bool succeeded = (strcmp(OptionsFile_8, (MR_String) "Mercury.options") == 0);
    MR_Word ErrorIfNotExist_11;
    MR_Word Search_12;

    if (succeeded)
    {
      ErrorIfNotExist_11 = (MR_Integer) 1;
      Search_12 = (MR_Integer) 1;
    }
    else
    {
      ErrorIfNotExist_11 = (MR_Integer) 0;
      Search_12 = (MR_Integer) 0;
    }
    make__options_file__read_options_file_params_9_p_0(Globals_7, ErrorIfNotExist_11, Search_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), OptionsFile_8, STATE_VARIABLE_Vars_0_13, STATE_VARIABLE_Vars_14);
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_done_2_p_0();
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_done_2_p_0();
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__options_file__write_reading_options_file_stdin_2_p_0();
  }
}

static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorIfNotExist_11,
  MR_Word Search_12,
  MR_Word MaybeDirName_13,
  MR_String OptionsFile0_14,
  MR_Word STATE_VARIABLE_Variables_0_34,
  MR_Word * STATE_VARIABLE_Variables_35)
{
  {
    MR_bool succeeded = (strcmp(OptionsFile0_14, (MR_String) "-") == 0);

    if (succeeded)
    {
      MR_String Var_40;

      make__util__debug_make_msg_4_p_0(Globals_10, (MR_Word) &make__options_file_scalar_common_1[5]);
      Var_40 = mercury__dir__this_directory_0_f_0();
      make__options_file__read_options_lines_6_p_0(Globals_10, Var_40, STATE_VARIABLE_Variables_0_34, STATE_VARIABLE_Variables_35);
      make__util__debug_make_msg_4_p_0(Globals_10, (MR_Word) &make__options_file_scalar_common_1[6]);
    }
    else
    {
      MR_Word SearchDirs_17;
      MR_String FileToFind_20;
      MR_Word Dirs_21;
      MR_Word MaybeDirAndStream_23;
      MR_Word Var_45;
      MR_String OptionsDir_18;
      MR_String OptionsFile_19;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_3));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (OptionsFile0_14));
      }
      make__util__debug_make_msg_4_p_0(Globals_10, Var_45);
      switch (Search_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String Var_47;

            Var_47 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SearchDirs_17, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), SearchDirs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 653, &SearchDirs_17);
          }
          break;
      }
      succeeded = mercury__dir__split_name_3_p_0(OptionsFile0_14, &OptionsDir_18, &OptionsFile_19);
      if (succeeded)
      {
        succeeded = mercury__dir__path_name_is_absolute_1_p_0(OptionsDir_18);
        if (succeeded)
        {
          FileToFind_20 = OptionsFile_19;
          {
            Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_21, 0) = ((MR_Box) (OptionsDir_18));
            MR_hl_field(MR_mktag(1), Dirs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        if ((MaybeDirName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          Dirs_21 = SearchDirs_17;
          FileToFind_20 = OptionsFile0_14;
        }
        else
        {
          MR_String DirName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeDirName_13, (MR_Integer) 0)));
          MR_String Var_51;

          FileToFind_20 = OptionsFile_19;
          Var_51 = mercury__dir__f_slash_2_f_0(DirName_22, OptionsDir_18);
          {
            Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Dirs_21, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Dirs_21, 1) = ((MR_Box) (SearchDirs_17));
          }
        }
      }
      else
      {
        Dirs_21 = SearchDirs_17;
        FileToFind_20 = OptionsFile0_14;
      }
      libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(Dirs_21, FileToFind_20, &MaybeDirAndStream_23);
      if (((MR_tag((MR_Word) MaybeDirAndStream_23)) == (MR_mktag((MR_Integer) 1))))
      {
        switch (ErrorIfNotExist_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ErrorFile_30;
              MR_Word ErrorSpec_31;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_String SingleDir_29;
              MR_Word Var_53;
              MR_Integer Var_32;
              MR_Integer Var_33;

              succeeded = ((MR_tag((MR_Word) Dirs_21)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                SingleDir_29 = ((MR_String) (MR_hl_field(MR_mktag(1), Dirs_21, (MR_Integer) 0)));
                Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), Dirs_21, (MR_Integer) 1)));
                succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (succeeded)
                ErrorFile_30 = make__options_file__maybe_add_path_name_2_f_0(SingleDir_29, FileToFind_20);
              else
                ErrorFile_30 = FileToFind_20;
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ErrorFile_30));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[36])));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[34])));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), Var_57, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_57, 3) = ((MR_Box) (Var_61));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ErrorSpec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ErrorSpec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ErrorSpec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), ErrorSpec_31, 2) = ((MR_Box) (Var_56));
              }
              parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_31, Globals_10, (MR_Integer) 0, &Var_32, (MR_Integer) 0, &Var_33);
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        *STATE_VARIABLE_Variables_35 = STATE_VARIABLE_Variables_0_34;
      }
      else
      {
        MR_String FoundDir_24;
        MR_Word FoundStream_25;
        MR_Word OldInputStream_26;
        MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeDirAndStream_23, (MR_Integer) 0)));
        MR_Word Var_78;
        MR_String Var_80;
        MR_Word _FoundStream_27;

        FoundDir_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 0)));
        FoundStream_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 1)));
        Var_80 = mercury__dir__f_slash_2_f_0(FoundDir_24, FileToFind_20);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_4));
          MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Var_80));
        }
        make__util__debug_make_msg_4_p_0(Globals_10, Var_78);
        mercury__io__set_input_stream_4_p_0(FoundStream_25, &OldInputStream_26);
        make__options_file__read_options_lines_6_p_0(Globals_10, FoundDir_24, STATE_VARIABLE_Variables_0_34, STATE_VARIABLE_Variables_35);
        mercury__io__set_input_stream_4_p_0(OldInputStream_26, &_FoundStream_27);
        mercury__io__close_input_3_p_0(FoundStream_25);
      }
      make__util__debug_make_msg_4_p_0(Globals_10, (MR_Word) &make__options_file_scalar_common_1[7]);
    }
  }
}

static void MR_CALL 
make__options_file__read_options_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    make__options_file__read_options_lines_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv0_HeadVar__4_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
  MR_Word Globals_7,
  MR_String Dir_8,
  MR_Word STATE_VARIABLE_Variables_0_18,
  MR_Word * STATE_VARIABLE_Variables_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer LineNumber_11;
    MR_Word LineResult_12;
    MR_Word Var_49;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__get_line_number_3_p_0(&LineNumber_11);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__options_file_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__options_file__read_options_lines_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Dir_8));
      MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (STATE_VARIABLE_Variables_0_18));
    }
    mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[1], Var_49, &LineResult_12);
    if (((MR_tag((MR_Word) LineResult_12)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Word Exception_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineResult_12, (MR_Integer) 0)));
      MR_String Error_15;
      MR_Word Var_27;
      MR_Box conv1_Var_27;

      succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &conv1_Var_27, Exception_14);
      if (succeeded)
      {
        Var_27 = ((MR_Word) conv1_Var_27);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Error_15 = (MR_String) Var_27;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String FileName_16;
        MR_Word Context_17;
        MR_Word Var_30;
        MR_Word Var_32;

        mercury__io__input_stream_name_3_p_0(&FileName_16);
        Context_17 = mercury__term__context_init_2_f_0(FileName_16, LineNumber_11);
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Error_15));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        parse_tree__error_util__write_error_pieces_6_p_0(Globals_7, Context_17, (MR_Integer) 0, Var_30);
        {
          mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, ((MR_Box) ((MR_Integer) 0)));
          return;
        }
      }
      else
      {
        {
          mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[1], LineResult_12);
          return;
        }
      }
    }
    else
    {
      MR_Word FoundEOF_13;
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), LineResult_12, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Variables_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0)));

      FoundEOF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1)));
      switch (FoundEOF_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_STATE_VARIABLE_Variables_0_18 = STATE_VARIABLE_Variables_36_36;

            // direct tailcall eliminated
            STATE_VARIABLE_Variables_0_18 = next_value_of_STATE_VARIABLE_Variables_0_18;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Variables_19 = STATE_VARIABLE_Variables_36_36;
          break;
      }
    }
    break;
  }
}

static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
  MR_String Dir_4,
  MR_String File_5)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__dir__this_directory_0_f_0();
    succeeded = (strcmp(Dir_4, Var_6) == 0);
    if (succeeded)
      HeadVar__3_3 = File_5;
    else
      HeadVar__3_3 = mercury__dir__make_path_name_2_f_0(Dir_4, File_5);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Vars_14;

    make__options_file__read_options_file_set_params_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Vars_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Vars_14));
  }
}

static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
  MR_Word Globals_6,
  MR_Word STATE_VARIABLE_Variables_0_10,
  MR_Word * STATE_VARIABLE_Variables_11)
{
  {
    MR_Word OptionsFiles_9;
    MR_Word Var_15;
    MR_Box conv2_STATE_VARIABLE_Variables_11;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 651, &OptionsFiles_9);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__options_file__read_options_file_lookup_params_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_6));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, OptionsFiles_9, ((MR_Box) (STATE_VARIABLE_Variables_0_10)), &conv2_STATE_VARIABLE_Variables_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
    *STATE_VARIABLE_Variables_11 = ((MR_Word) conv2_STATE_VARIABLE_Variables_11);
  }
}

void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word Vars_7,
  MR_Word * MaybeMerStdlibDir_8)
{
  {
    MR_Word MerStdlibDirResult_10;

    make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, Vars_7, (MR_String) "MERCURY_STDLIB_DIR", &MerStdlibDirResult_10);
    switch (MR_tag((MR_Word) MerStdlibDirResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_7[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) MerStdlibDirResult_10), (MR_Integer) 1);
          MR_Integer Var_26;
          MR_Integer Var_27;

          parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_25, Globals_6, (MR_Integer) 0, &Var_26, (MR_Integer) 0, &Var_27);
          *MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MerStdlibDir_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), MerStdlibDirResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMerStdlibDir_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MerStdlibDir_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_main_target_5_p_0(
  MR_Word Globals_6,
  MR_Word Vars_7,
  MR_Word * MaybeMainTarget_8)
{
  {
    MR_Word MainTargetResult_10;

    make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, Vars_7, (MR_String) "MAIN_TARGET", &MainTargetResult_10);
    switch (MR_tag((MR_Word) MainTargetResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_7[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) MainTargetResult_10), (MR_Integer) 1);
          MR_Integer Var_26;
          MR_Integer Var_27;

          parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_25, Globals_6, (MR_Integer) 0, &Var_26, (MR_Integer) 0, &Var_27);
          *MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MainTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), MainTargetResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMainTarget_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainTarget_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0(
  MR_Word Globals_7,
  MR_Word Vars_8,
  MR_Word ModuleName_9,
  MR_Word * Result_10)
{
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (ModuleName_9));
    }
    make__options_file__lookup_mmc_maybe_module_options_6_p_0(Globals_7, Vars_8, Var_14, Result_10);
  }
}

void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0(
  MR_Word Globals_6,
  MR_Word Vars_7,
  MR_Word * Result_8)
{
  {
    make__options_file__lookup_mmc_maybe_module_options_6_p_0(Globals_6, Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), Result_8);
  }
}

void MR_CALL 
make__options_file__lookup_default_options_5_p_0(
  MR_Word Globals_6,
  MR_Word Vars_7,
  MR_Word * Result_8)
{
  {
    make__options_file__lookup_mmc_maybe_module_options_6_p_0(Globals_6, Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Result_8);
  }
}

static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_26;

    succeeded = make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__880__1_2_p_0(((MR_Word) wrapper_arg_1), &conv2_LambdaHeadVar__2_26);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_26));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_12;

    make__options_file__lookup_options_variable_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_Result_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_12));
  }
}

static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
  MR_Word Globals_7,
  MR_Word Vars_8,
  MR_Word MaybeModuleName_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word VariableTypes_12 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[26]);
    MR_Word Results_13;
    MR_Word Var_22;
    MR_Box conv1_STATE_VARIABLE_IO_21;
    MR_Word Values_18;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&make__options_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Vars_8));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (MaybeModuleName_9));
    }
    TypeCtorInfo_38_38 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_type_0;
    TypeInfo_39_39 = (MR_Word) &make__options_file_scalar_common_2[1];
    mercury__list__map_foldl_5_p_2(TypeCtorInfo_38_38, TypeInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_22, VariableTypes_12, &Results_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_21);
    succeeded = mercury__list__map_3_p_2(TypeInfo_39_39, (MR_Word) &make__options_file_scalar_common_2[2], (MR_Word) &make__options_file_scalar_common_1[3], Results_13, &Values_18);
    if (succeeded)
    {
      MR_Word VariableValues_19;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word Var_30;

      mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_38_38, (MR_Word) &make__options_file_scalar_common_2[2], VariableTypes_12, Values_18, &VariableValues_19);
      Var_30 = mercury__list__map_2_f_0((MR_Word) &make__options_file_scalar_common_1[2], (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_1[4], VariableValues_19);
      Var_29 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_30);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "-O2"));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
      }
    }
    else
      *Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Variables_11;

    make__options_file__read_options_file_lookup_params_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv0_STATE_VARIABLE_Variables_11);
    *wrapper_arg_1 = ((MR_Box) (conv0_STATE_VARIABLE_Variables_11));
  }
}

void MR_CALL 
make__options_file__read_options_files_5_p_0(
  MR_Word Globals_6,
  MR_Word Variables0_7,
  MR_Word * MaybeVariables_8)
{
  {
    MR_bool succeeded;
    MR_Word OptionsFileResult_10;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__options_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__options_file__read_options_files_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Variables0_7));
    }
    mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], Var_15, &OptionsFileResult_10);
    if (((MR_tag((MR_Word) OptionsFileResult_10)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Word Exception_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionsFileResult_10, (MR_Integer) 0)));
      MR_Box conv1_Var_17;

      succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &conv1_Var_17, Exception_12);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        *MaybeVariables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        {
          mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], OptionsFileResult_10);
          return;
        }
      }
    }
    else
    {
      MR_Word Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsFileResult_10, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVariables_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Variables_11));
      }
    }
  }
}

void MR_CALL 
make__options_file__read_args_file_5_p_0(
  MR_Word Globals_6,
  MR_String OptionsFile_7,
  MR_Word * MaybeMCFlags_8)
{
  {
    MR_Word MaybeVariables_10;
    MR_Word Var_19;

    Var_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    make__options_file__read_options_file_6_p_0(Globals_6, OptionsFile_7, Var_19, &MaybeVariables_10);
    if ((MaybeVariables_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVariables_10, (MR_Integer) 0)));
      MR_Word FlagsResult_12;

      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 0, Variables_11, (MR_String) "MCFLAGS", &FlagsResult_12);
      switch (MR_tag((MR_Word) FlagsResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury_compile: internal error: arguments file does not set MCFLAGS.\n");
            *MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ErrorSpec_14 = (MR_Word) MR_body(((MR_Word) FlagsResult_12), (MR_Integer) 1);
            MR_Integer Var_15;
            MR_Integer Var_16;

            *MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__error_util__write_error_spec_8_p_0(ErrorSpec_14, Globals_6, (MR_Integer) 0, &Var_15, (MR_Integer) 0, &Var_16);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MCFlags_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), FlagsResult_12, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMCFlags_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCFlags_13));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__1_11;

    make__options_file__IntroducedFrom__pred__checked_split_into_words__751__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv1_LambdaHeadVar__1_11);
    *wrapper_arg_1 = ((MR_Box) (conv1_LambdaHeadVar__1_11));
  }
}

static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
  MR_Word LookupEnv_7,
  MR_Word Vars_8,
  MR_String VarName_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeEnvValue_12;

    switch (LookupEnv_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeEnvValue_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        mercury__io__get_environment_var_4_p_0(VarName_9, &MaybeEnvValue_12);
        break;
    }
    if ((MaybeEnvValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word MapValue_18;
      MR_Box conv0_MapValue_18;

      succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, Vars_8, ((MR_Box) (VarName_9)), &conv0_MapValue_18);
      if (succeeded)
      {
        MapValue_18 = ((MR_Word) conv0_MapValue_18);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Words_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), MapValue_18, (MR_Integer) 1)));
        MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), MapValue_18, (MR_Integer) 0)));
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MapValue_18, (MR_Integer) 2)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Words_20));
        }
      }
      else
        *Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_String EnvValue_13 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeEnvValue_12, (MR_Integer) 0)));
      MR_Word SplitResult_14;
      MR_Word Var_25;
      MR_Word TryResult_54;
      MR_Word Var_59;

      Var_25 = mercury__string__to_char_list_1_f_0(EnvValue_13);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&make__options_file_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (make__options_file__lookup_variable_words_maybe_env_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Var_25));
      }
      mercury__exception__try_2_p_0((MR_Word) &make__options_file_scalar_common_2[0], Var_59, &TryResult_54);
      if (((MR_tag((MR_Word) TryResult_54)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Exception_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), TryResult_54, (MR_Integer) 0)));
        MR_String Msg_58;
        MR_Word Var_61;
        MR_Box conv2_Var_61;

        succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &conv2_Var_61, Exception_57);
        if (succeeded)
        {
          Var_61 = ((MR_Word) conv2_Var_61);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Msg_58 = (MR_String) Var_61;
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            SplitResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SplitResult_14, 0) = ((MR_Box) (Msg_58));
          }
        else
        {
          {
            mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_2[0], TryResult_54);
            return;
          }
        }
      }
      else
      {
        MR_Word Words_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), TryResult_54, (MR_Integer) 0)));

        {
          SplitResult_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SplitResult_14, 0) = ((MR_Box) (Words_56));
        }
      }
      if (((MR_tag((MR_Word) SplitResult_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), SplitResult_14, (MR_Integer) 0)));
        MR_Word ErrorSpec_17;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (VarName_9));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Msg_16));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[33])));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[32])));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[31])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), Var_29, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Var_29, 3) = ((MR_Box) (Var_33));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ErrorSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ErrorSpec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), ErrorSpec_17, 2) = ((MR_Box) (Var_28));
        }
        *Result_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ErrorSpec_17);
      }
      else
      {
        MR_Word EnvWords_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), SplitResult_14, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EnvWords_15));
        }
      }
    }
  }
}

static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__1_20;

    make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv0_LambdaHeadVar__1_20);
    *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_20));
  }
}

void MR_CALL 
make__options_file__read_options_file_6_p_0(
  MR_Word Globals_7,
  MR_String OptionsFile_8,
  MR_Word Variables0_9,
  MR_Word * MaybeVariables_10)
{
  {
    MR_bool succeeded;
    MR_Word OptionsFileResult_12;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (make__options_file__read_options_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (OptionsFile_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Variables0_9));
    }
    mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], Var_18, &OptionsFileResult_12);
    if (((MR_tag((MR_Word) OptionsFileResult_12)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Word Exception_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionsFileResult_12, (MR_Integer) 0)));
      MR_Box conv1_Var_29;

      succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &conv1_Var_29, Exception_15);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        *MaybeVariables_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        {
          mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], OptionsFileResult_12);
          return;
        }
      }
    }
    else
    {
      MR_Word Variables_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsFileResult_12, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVariables_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Variables_14));
      }
    }
  }
}

MR_Word MR_CALL 
make__options_file__options_variables_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____error_if_not_exist_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__options_file____Compare____error_if_not_exist_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
make__options_file____Unify____mmc_option_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__options_file____Unify____mmc_option_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____mmc_option_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_file_error_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_file_line_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_variable_0_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2));
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

    make__options_file____Compare____options_variable_0_0(&conv0_HeadVar__1_1, ((MR_String) wrapper_arg_2), ((MR_String) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_variable_class_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_variable_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_variable_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_variable_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_variable_value_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_variable_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____options_variables_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____options_variables_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____search_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____search_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = make__options_file____Unify____variable_result_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    make__options_file____Compare____variable_result_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = make__options_file____Unify____variable_source_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    make__options_file____Compare____variable_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

// Ensure everything is compiled with the same grade.
const char *mercury__make__options_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.options_file.
