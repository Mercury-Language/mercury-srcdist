/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2020-04-08
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


// :- module parse_tree.parse_module.
// :- implementation.

/*
INIT mercury__parse_tree__parse_module__init
ENDINIT
*/

#include "parse_tree.parse_module.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_item.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_may_change_source_file_name_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_may_change_source_file_name_0[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_lookahead_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_2[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0[3];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0[3];

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_header_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_header_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_maybe_require_module_decl_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_missing_section_start_warning_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2[4];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_3[3];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_3;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_3[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0[4];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0[4];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0;

static const MR_VA_PseudoTypeInfo_Struct11 parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_lexer__type_ctor_info_line_context_0__plain_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_0;

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_info_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_2;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_info_0[3];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_info_0[3];

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__693__1_2_p_0(
  MR_Word Imports_40,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__690__1_1_p_0(
  MR_Word InclsCord_31);

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____missing_section_start_warning_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____may_change_source_file_name_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_36,
  MR_String FileString_13,
  MR_Integer MaxOffset_14,
  MR_Word STATE_VARIABLE_LineContext_0_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word Globals_17,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word * STATE_VARIABLE_Errors_40);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_36,
  MR_String FileString_13,
  MR_Integer MaxOffset_14,
  MR_Word STATE_VARIABLE_LineContext_0_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word * STATE_VARIABLE_Errors_40);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(
  MR_String FileString_24,
  MR_Integer MaxOffset_25,
  MR_Word CurModuleName_27,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_86,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_87,
  MR_Word * STATE_VARIABLE_ModuleComponents_88,
  MR_String STATE_VARIABLE_SourceFileName_0_89,
  MR_String * STATE_VARIABLE_SourceFileName_90,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_91,
  MR_Word * STATE_VARIABLE_SeqNumCounter_92,
  MR_Word STATE_VARIABLE_Specs_0_93,
  MR_Word * STATE_VARIABLE_Specs_94,
  MR_Word STATE_VARIABLE_Errors_0_95,
  MR_Word * STATE_VARIABLE_Errors_96,
  MR_Word STATE_VARIABLE_LineContext_0_97,
  MR_Word * STATE_VARIABLE_LineContext_98,
  MR_Word STATE_VARIABLE_LinePosn_0_99,
  MR_Word * STATE_VARIABLE_LinePosn_100);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(
  MR_String FileString_25,
  MR_Integer MaxOffset_26,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word ContainingModuleName_30,
  MR_Word StartModuleName_31,
  MR_Word StartContext_32,
  MR_Word InitLookAhead_33,
  MR_Word * FinalLookAhead_34,
  MR_Word STATE_VARIABLE_ModuleComponents_0_51,
  MR_Word * STATE_VARIABLE_ModuleComponents_52,
  MR_String STATE_VARIABLE_SourceFileName_0_53,
  MR_String * STATE_VARIABLE_SourceFileName_54,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_55,
  MR_Word * STATE_VARIABLE_SeqNumCounter_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58,
  MR_Word STATE_VARIABLE_Errors_0_59,
  MR_Word * STATE_VARIABLE_Errors_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0(
  MR_Word CurModuleName_12,
  MR_Word ContainingModules_13,
  MR_Word IOMVarSet_14,
  MR_Word IOMTerm_15,
  MR_Word EndedModuleName_16,
  MR_Word EndContext_17,
  MR_Word * FinalLookAhead_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24,
  MR_Word STATE_VARIABLE_Errors_0_25,
  MR_Word * STATE_VARIABLE_Errors_26);

static MR_bool MR_CALL 
parse_tree__parse_module__is_for_containing_module_2_p_0(
  MR_Word EndedModuleName_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(
  MR_Word CurModuleName_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_16,
  MR_Word * STATE_VARIABLE_MissingStartSectionWarning_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_Errors_0_20,
  MR_Word * STATE_VARIABLE_Errors_21);

static void MR_CALL 
parse_tree__parse_module__add_section_component_9_p_0(
  MR_Word ModuleName_10,
  MR_Word SectionKind_11,
  MR_Word SectionContext_12,
  MR_Word InclsCord_13,
  MR_Word AvailsCord_14,
  MR_Word FIMsCord_15,
  MR_Word ItemsCord_16,
  MR_Word STATE_VARIABLE_ModuleComponents_0_19,
  MR_Word * STATE_VARIABLE_ModuleComponents_20);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word STATE_VARIABLE_LinePosn_0_54,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word * STATE_VARIABLE_Errors_56);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word STATE_VARIABLE_LinePosn_0_54,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word * STATE_VARIABLE_Errors_56);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer MaxOffset_21,
  MR_Word CurModuleName_23,
  MR_String SourceFileName_24,
  MR_String ExpectedSectionKindStr_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word * MaybeRawItemBlock_28,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_70,
  MR_Word * STATE_VARIABLE_SeqNumCounter_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73,
  MR_Word STATE_VARIABLE_Errors_0_74,
  MR_Word * STATE_VARIABLE_Errors_75,
  MR_Word STATE_VARIABLE_LineContext_0_76,
  MR_Word * STATE_VARIABLE_LineContext_77,
  MR_Word STATE_VARIABLE_LinePosn_0_78,
  MR_Word * STATE_VARIABLE_LinePosn_79);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_121_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_105_116_101_109_95_95_91_51_93_95_48_18_p_0(
  MR_String FileString_19,
  MR_Integer MaxOffset_20,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word * MaybeVersionNumbers_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_55,
  MR_Word * STATE_VARIABLE_SeqNumCounter_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58,
  MR_Word STATE_VARIABLE_Errors_0_59,
  MR_Word * STATE_VARIABLE_Errors_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_44,
  MR_Word STATE_VARIABLE_LinePosn_0_45,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * STATE_VARIABLE_Errors_47);

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_44,
  MR_Word STATE_VARIABLE_LinePosn_0_45,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * STATE_VARIABLE_Errors_47);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer MaxOffset_30,
  MR_Word ModuleName_32,
  MR_Word InitLookAhead_33,
  MR_Word * FinalLookAhead_34,
  MR_Word STATE_VARIABLE_VNInfo_0_48,
  MR_Word * STATE_VARIABLE_VNInfo_49,
  MR_Word STATE_VARIABLE_InclsCord_0_50,
  MR_Word * STATE_VARIABLE_InclsCord_51,
  MR_Word STATE_VARIABLE_AvailsCord_0_52,
  MR_Word * STATE_VARIABLE_AvailsCord_53,
  MR_Word STATE_VARIABLE_FIMsCord_0_54,
  MR_Word * STATE_VARIABLE_FIMsCord_55,
  MR_Word STATE_VARIABLE_ItemsCord_0_56,
  MR_Word * STATE_VARIABLE_ItemsCord_57,
  MR_String STATE_VARIABLE_SourceFileName_0_58,
  MR_String * STATE_VARIABLE_SourceFileName_59,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_60,
  MR_Word * STATE_VARIABLE_SeqNumCounter_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63,
  MR_Word STATE_VARIABLE_Errors_0_64,
  MR_Word * STATE_VARIABLE_Errors_65,
  MR_Word STATE_VARIABLE_LineContext_0_66,
  MR_Word * STATE_VARIABLE_LineContext_67,
  MR_Word STATE_VARIABLE_LinePosn_0_68,
  MR_Word * STATE_VARIABLE_LinePosn_69);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_30_p_0(
  MR_String FileString_31,
  MR_Integer MaxOffset_32,
  MR_Word ModuleName_34,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_77,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_78,
  MR_Word InitLookAhead_36,
  MR_Word * FinalLookAhead_37,
  MR_Word STATE_VARIABLE_VNInfo_0_79,
  MR_Word * STATE_VARIABLE_VNInfo_80,
  MR_Word STATE_VARIABLE_InclsCord_0_81,
  MR_Word * STATE_VARIABLE_InclsCord_82,
  MR_Word STATE_VARIABLE_AvailsCord_0_83,
  MR_Word * STATE_VARIABLE_AvailsCord_84,
  MR_Word STATE_VARIABLE_FIMsCord_0_85,
  MR_Word * STATE_VARIABLE_FIMsCord_86,
  MR_Word STATE_VARIABLE_ItemsCord_0_87,
  MR_Word * STATE_VARIABLE_ItemsCord_88,
  MR_String STATE_VARIABLE_SourceFileName_0_89,
  MR_String * STATE_VARIABLE_SourceFileName_90,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_91,
  MR_Word * STATE_VARIABLE_SeqNumCounter_92,
  MR_Word STATE_VARIABLE_Specs_0_93,
  MR_Word * STATE_VARIABLE_Specs_94,
  MR_Word STATE_VARIABLE_Errors_0_95,
  MR_Word * STATE_VARIABLE_Errors_96,
  MR_Word STATE_VARIABLE_LineContext_0_97,
  MR_Word * STATE_VARIABLE_LineContext_98,
  MR_Word STATE_VARIABLE_LinePosn_0_99,
  MR_Word * STATE_VARIABLE_LinePosn_100);

static void MR_CALL 
parse_tree__parse_module__record_version_numbers_6_p_0(
  MR_Word MVN_7,
  MR_Word IOMTerm_8,
  MR_Word STATE_VARIABLE_VNInfo_0_14,
  MR_Word * STATE_VARIABLE_VNInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(
  MR_String SourceFileName_16,
  MR_String FileString_17,
  MR_Integer MaxOffset_18,
  MR_Word ModuleName_19,
  MR_Word FileKind_20,
  MR_Word FinalLookAhead_21,
  MR_Word SeqNumCounter0_22,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_Errors_0_39,
  MR_Word * STATE_VARIABLE_Errors_40,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word * STATE_VARIABLE_LineContext_42,
  MR_Word STATE_VARIABLE_LinePosn_0_43,
  MR_Word * STATE_VARIABLE_LinePosn_44);

static void MR_CALL 
parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(
  MR_Word FileKind_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18,
  MR_Word STATE_VARIABLE_Errors_0_19,
  MR_Word * STATE_VARIABLE_Errors_20);

static void MR_CALL 
parse_tree__parse_module__read_next_item_or_marker_12_p_0(
  MR_String FileName_13,
  MR_String FileString_14,
  MR_Integer MaxOffset_15,
  MR_Word InitLookAhead_16,
  MR_Word ModuleName_17,
  MR_Word * ReadIOMResult_18,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_25,
  MR_Word * STATE_VARIABLE_SeqNumCounter_26,
  MR_Word STATE_VARIABLE_LineContext_0_27,
  MR_Word * STATE_VARIABLE_LineContext_28,
  MR_Word STATE_VARIABLE_LinePosn_0_29,
  MR_Word * STATE_VARIABLE_LinePosn_30);

static void MR_CALL 
parse_tree__parse_module__read_module_header_13_p_0(
  MR_String FileString_14,
  MR_Integer MaxOffset_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_String SourceFileName_18,
  MR_Word * MaybeModuleHeader_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_33,
  MR_Word * STATE_VARIABLE_Specs_34,
  MR_Word * STATE_VARIABLE_Errors_35,
  MR_Word STATE_VARIABLE_LineContext_0_36,
  MR_Word * STATE_VARIABLE_LineContext_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word * STATE_VARIABLE_LinePosn_39);

static void MR_CALL 
parse_tree__parse_module__report_wrong_module_start_7_p_0(
  MR_Word FirstContext_8,
  MR_Word Expected_9,
  MR_Word Actual_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16,
  MR_Word STATE_VARIABLE_Errors_0_17,
  MR_Word * STATE_VARIABLE_Errors_18);

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_opt_3_p_0(
  MR_Word OptFileKind_4,
  MR_Word ModuleName_5,
  MR_Word * ParseTree_6);

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(
  MR_Word IntFileKind_4,
  MR_Word ModuleName_5,
  MR_Word * ParseTree_6);

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_src_2_p_0(
  MR_Word ModuleName_3,
  MR_Word * ParseTree_4);

static void MR_CALL 
parse_tree__parse_module__expectation_context_to_msg_2_p_0(
  MR_Word Context_3,
  MR_Word * SubMsg_4);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__check_module_has_expected_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeModuleTimestampRes_19,
  MR_Word MakeDummyParseTree_20,
  MR_Word ReadParseTree_21,
  MR_Box * ParseTree_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24);

static void MR_CALL 
parse_tree__parse_module__read_error_msg_4_p_0(
  MR_String ErrorMsg_5,
  MR_Word * Specs_6);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer MaxOffset_21,
  MR_Word DefaultModuleName_23,
  MR_Word DefaultExpectationContexts_24,
  MR_Word * ModuleDeclPresent_25,
  MR_Word MayChangeSourceFileName_26,
  MR_String STATE_VARIABLE_SourceFileName_0_61,
  MR_String * STATE_VARIABLE_SourceFileName_62,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_63,
  MR_Word * STATE_VARIABLE_SeqNumCounter_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66,
  MR_Word STATE_VARIABLE_Errors_0_67,
  MR_Word * STATE_VARIABLE_Errors_68,
  MR_Word STATE_VARIABLE_LineContext_0_69,
  MR_Word * STATE_VARIABLE_LineContext_70,
  MR_Word STATE_VARIABLE_LinePosn_0_71,
  MR_Word * STATE_VARIABLE_LinePosn_72);

static void MR_CALL 
parse_tree__parse_module__report_missing_module_start_5_p_0(
  MR_Word FirstContext_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12,
  MR_Word STATE_VARIABLE_Errors_0_13,
  MR_Word * STATE_VARIABLE_Errors_14);

static void MR_CALL 
parse_tree__parse_module__read_term_to_iom_result_6_p_0(
  MR_Word ModuleName_7,
  MR_String FileName_8,
  MR_Word ReadTermResult_9,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_20,
  MR_Word * ReadIOMResult_11);

static void MR_CALL 
parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(
  MR_String FileName_7,
  MR_Word ExpectedName_8,
  MR_Word ExpectationContexts_9,
  MR_Word ActualName_10,
  MR_Word MaybeActualContext_11,
  MR_Word * Spec_12);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____may_change_source_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_module____Compare____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[103][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[3][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[4][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][14];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[13][4];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[2][15];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[103][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "interface sections."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have two consecutive"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an interface file"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected the start of an"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section, got"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_module__check_module_has_expected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[13][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int0_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int0_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int1_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int1_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int2_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int2_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int3_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int3_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[2][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__lexer__lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_make_dummy_parse_tree_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "make_dummy_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0 = {
  (MR_String) "may_not_change_source_file_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1 = {
  (MR_String) "may_change_source_file_name",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_may_change_source_file_name_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_may_change_source_file_name_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_may_change_source_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____may_change_source_file_name_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____may_change_source_file_name_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "may_change_source_file_name",
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_may_change_source_file_name_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_may_change_source_file_name_0
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0 = {
  (MR_String) "no_lookahead",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_lookahead_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1 = {
  (MR_String) "lookahead",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_lookahead_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1
};

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_lookahead",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0 = {
  (MR_String) "no_module_decl_present",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1 = {
  (MR_String) "wrong_module_decl_present",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2 = {
  (MR_String) "right_module_decl_present",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2
};

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0[3] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_decl_present_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_module_decl_present",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0 = {
  (MR_String) "no_valid_module_header",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_1 = {
  (MR_String) "valid_module_header",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_0[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_1[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_1
};

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_header_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_1
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_header_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_header_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_module_header_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_module_header_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_module_header",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_header_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_header_0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_require_module_decl_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_require_module_decl",
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_maybe_require_module_decl_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1,
  &parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_missing_section_start_warning_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "missing_section_start_warning",
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_missing_section_start_warning_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0 = {
  (MR_String) "read_iom_eof",
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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1 = {
  (MR_String) "read_iom_read_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2 = {
  (MR_String) "read_iom_parse_errors",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_3[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__parse_tree__parse_types__type_ctor_info_item_or_marker_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_3 = {
  (MR_String) "read_iom_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_3[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_3
};

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0[4] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_3,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_iom_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____read_iom_result_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_iom_result_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_iom_result",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct11 parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_lexer__type_ctor_info_line_context_0__plain_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 11,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__lexer__lexer__type_ctor_info_line_context_0),
    (MR_PseudoTypeInfo) (&mercury__lexer__lexer__type_ctor_info_line_posn_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_parse_tree_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____read_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_lexer__type_ctor_info_line_context_0__plain_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_0 = {
  (MR_String) "dont_allow_version_numbers",
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

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_1 = {
  (MR_String) "allow_version_numbers_not_seen",
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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_info_0_2[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_2 = {
  (MR_String) "allow_version_numbers_seen",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_0,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_1[1] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_2
};

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_info_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_info_0[3] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_1,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_2,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_0
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_info_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_version_number_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____version_number_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____version_number_info_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "version_number_info",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_info_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_info_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_info_0
};

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__693__1_2_p_0(
  MR_Word Imports_40,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_40)), ((MR_Box) (HeadVar__2_71)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__690__1_1_p_0(
  MR_Word InclsCord_31)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_31);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_info_0_0(
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
            MR_Word Var_13 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

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
                  MR_Word ArgY1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  recompilation____Compare____version_numbers_0_0(HeadVar__1_1, Var_13, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_info_0_0(
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
            MR_Word ArgX1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = recompilation____Unify____version_numbers_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_73 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_74 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_73 == CastY_74);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_90, ArgY1_14);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_35;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_35, ((MR_Box) (Var_89)), ((MR_Box) (ArgY1_34)));
                  succeeded = (SubResult1_35 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_35;
                  else
                  {
                    MR_Word SubResult2_38;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_38, ((MR_Box) (Var_88)), ((MR_Box) (ArgY2_37)));
                    succeeded = (SubResult2_38 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_38;
                    else
                    {
                      MR_Word SubResult3_41;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), &SubResult3_41, ((MR_Box) (Var_87)), ((MR_Box) (ArgY3_40)));
                      succeeded = (SubResult3_41 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_41;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY4_43)));
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_67;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_67, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_66)));
                  succeeded = (SubResult1_67 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_67;
                  else
                  {
                    MR_Word SubResult2_70;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_70, ((MR_Box) (Var_84)), ((MR_Box) (ArgY2_69)));
                    succeeded = (SubResult2_70 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_70;
                    else
                      parse_tree__parse_types____Compare____item_or_marker_0_0(HeadVar__1_1, Var_83, ArgY3_72);
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
parse_tree__parse_module____Unify____read_iom_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_26_26;
            MR_Word TypeInfo_27_27;
            MR_Word TypeInfo_28_28;
            MR_Word TypeInfo_29_29;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;
            MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              TypeInfo_26_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_23_23;
            MR_Word TypeInfo_24_24;
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_23_23 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                if (succeeded)
                  succeeded = parse_tree__parse_types____Unify____item_or_marker_0_0(ArgX3_19, ArgY3_20);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0(
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
parse_tree__parse_module____Unify____missing_section_start_warning_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0(
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

MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = (MR_Word) ((MR_Word) (HeadVar__2_2));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

        mercury__term____Compare____context_0_0(HeadVar__1_1, Var_22, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_14, Var_24, ArgY1_13);
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, Var_23, ArgY2_16);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
        succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__parse_module____Compare____maybe_lookahead_0_0(HeadVar__1_1, Var_43, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_17;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_17, Var_47, ArgY1_16);
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_46, ArgY2_19);
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
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_33;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_33, Var_45, ArgY1_32);
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_44, ArgY2_35);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_11, ArgY2_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0(
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

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0(
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
parse_tree__parse_module____Unify____may_change_source_file_name_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_36,
  MR_String FileString_13,
  MR_Integer MaxOffset_14,
  MR_Word STATE_VARIABLE_LineContext_0_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word Globals_17,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word * STATE_VARIABLE_Errors_40)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(STATE_VARIABLE_SourceFileName_0_36, FileString_13, MaxOffset_14, STATE_VARIABLE_LineContext_0_37, STATE_VARIABLE_LinePosn_0_38, DefaultModuleName_18, DefaultExpectationContexts_19, ParseTree_20, STATE_VARIABLE_Specs_39, STATE_VARIABLE_Errors_40);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_36,
  MR_String FileString_13,
  MR_Integer MaxOffset_14,
  MR_Word STATE_VARIABLE_LineContext_0_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word * STATE_VARIABLE_Errors_40)
{
  {
    MR_Word ModuleDeclPresent_24;
    MR_Word InitLookAhead_25;
    MR_Word ModuleName_26;
    MR_Word ModuleNameContext_27;
    MR_Word FinalLookAhead_32;
    MR_Word ModuleComponents_33;
    MR_Word STATE_VARIABLE_Errors_42_42;
    MR_Word STATE_VARIABLE_SeqNumCounter_44_44;
    MR_String STATE_VARIABLE_SourceFileName_47_47;
    MR_Word STATE_VARIABLE_SeqNumCounter_48_48;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word STATE_VARIABLE_Errors_50_50;
    MR_Word STATE_VARIABLE_LineContext_51_51;
    MR_Word STATE_VARIABLE_LinePosn_52_52;
    MR_Word Var_54;
    MR_String STATE_VARIABLE_SourceFileName_55_55;
    MR_Word STATE_VARIABLE_SeqNumCounter_56_56;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word STATE_VARIABLE_Errors_58_58;
    MR_Word STATE_VARIABLE_LineContext_59_59;
    MR_Word STATE_VARIABLE_LinePosn_60_60;
    MR_Word _LineContext_34;
    MR_Word _LinePosn_35;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_42_42);
    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_44_44);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_19_p_0(FileString_13, MaxOffset_14, DefaultModuleName_18, DefaultExpectationContexts_19, &ModuleDeclPresent_24, (MR_Integer) 1, STATE_VARIABLE_SourceFileName_0_36, &STATE_VARIABLE_SourceFileName_47_47, STATE_VARIABLE_SeqNumCounter_44_44, &STATE_VARIABLE_SeqNumCounter_48_48, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Errors_42_42, &STATE_VARIABLE_Errors_50_50, STATE_VARIABLE_LineContext_0_37, &STATE_VARIABLE_LineContext_51_51, STATE_VARIABLE_LinePosn_0_38, &STATE_VARIABLE_LinePosn_52_52);
    switch (MR_tag((MR_Word) ModuleDeclPresent_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          InitLookAhead_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_24, (MR_Integer) 0))));
          ModuleName_26 = DefaultModuleName_18;
          if ((InitLookAhead_25 == (MR_Word) ((MR_Unsigned) 0U)))
            ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          else
          {
            MR_Word InitLookAheadTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_25, (MR_Integer) 1))));

            ModuleNameContext_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InitLookAheadTerm_29);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 0))));
          ModuleNameContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 1))));
          InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_24, (MR_Integer) 0))));
          ModuleNameContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_24, (MR_Integer) 1))));
          InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_13, MaxOffset_14, ModuleName_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_25, &FinalLookAhead_32, Var_54, &ModuleComponents_33, STATE_VARIABLE_SourceFileName_47_47, &STATE_VARIABLE_SourceFileName_55_55, STATE_VARIABLE_SeqNumCounter_48_48, &STATE_VARIABLE_SeqNumCounter_56_56, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Errors_50_50, &STATE_VARIABLE_Errors_58_58, STATE_VARIABLE_LineContext_51_51, &STATE_VARIABLE_LineContext_59_59, STATE_VARIABLE_LinePosn_52_52, &STATE_VARIABLE_LinePosn_60_60);
    parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(STATE_VARIABLE_SourceFileName_55_55, FileString_13, MaxOffset_14, ModuleName_26, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_32, STATE_VARIABLE_SeqNumCounter_56_56, STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Specs_39, STATE_VARIABLE_Errors_58_58, STATE_VARIABLE_Errors_40, STATE_VARIABLE_LineContext_59_59, &_LineContext_34, STATE_VARIABLE_LinePosn_60_60, &_LinePosn_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleComponents_33));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(
  MR_String FileString_24,
  MR_Integer MaxOffset_25,
  MR_Word CurModuleName_27,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_86,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_87,
  MR_Word * STATE_VARIABLE_ModuleComponents_88,
  MR_String STATE_VARIABLE_SourceFileName_0_89,
  MR_String * STATE_VARIABLE_SourceFileName_90,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_91,
  MR_Word * STATE_VARIABLE_SeqNumCounter_92,
  MR_Word STATE_VARIABLE_Specs_0_93,
  MR_Word * STATE_VARIABLE_Specs_94,
  MR_Word STATE_VARIABLE_Errors_0_95,
  MR_Word * STATE_VARIABLE_Errors_96,
  MR_Word STATE_VARIABLE_LineContext_0_97,
  MR_Word * STATE_VARIABLE_LineContext_98,
  MR_Word STATE_VARIABLE_LinePosn_0_99,
  MR_Word * STATE_VARIABLE_LinePosn_100)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_40;
    MR_Word STATE_VARIABLE_SeqNumCounter_101_101;
    MR_Word STATE_VARIABLE_LineContext_102_102;
    MR_Word STATE_VARIABLE_LinePosn_103_103;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_89, FileString_24, MaxOffset_25, InitLookAhead_31, CurModuleName_27, &ReadIOMResult_40, STATE_VARIABLE_SeqNumCounter_0_91, &STATE_VARIABLE_SeqNumCounter_101_101, STATE_VARIABLE_LineContext_0_97, &STATE_VARIABLE_LineContext_102_102, STATE_VARIABLE_LinePosn_0_99, &STATE_VARIABLE_LinePosn_103_103);
    switch (MR_tag((MR_Word) ReadIOMResult_40)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_32 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_88 = STATE_VARIABLE_ModuleComponents_0_87;
          *STATE_VARIABLE_SourceFileName_90 = STATE_VARIABLE_SourceFileName_0_89;
          *STATE_VARIABLE_SeqNumCounter_92 = STATE_VARIABLE_SeqNumCounter_101_101;
          *STATE_VARIABLE_Specs_94 = STATE_VARIABLE_Specs_0_93;
          *STATE_VARIABLE_Errors_96 = STATE_VARIABLE_Errors_0_95;
          *STATE_VARIABLE_LineContext_98 = STATE_VARIABLE_LineContext_102_102;
          *STATE_VARIABLE_LinePosn_100 = STATE_VARIABLE_LinePosn_103_103;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Specs_222_222;
          MR_Word STATE_VARIABLE_Errors_224_224;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

          {
            STATE_VARIABLE_Specs_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_222_222, 0) = ((MR_Box) (ItemSpec_41));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_222_222, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_93));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_224_224);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_101_101;
          next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_222_222;
          next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_224_224;
          next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_102_102;
          next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_103_103;
          InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
          STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
          STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
          STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
          STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMVarSet_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word IOMTerm_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_40, (MR_Integer) 1))));
          MR_Word Context_46;
          MR_Word SectionContext_49;
          MR_Word ItemSeqInitLookAhead_50;
          MR_Word ItemSeqFinalLookAhead_51;
          MR_Word InclsCord_53;
          MR_Word AvailsCord_54;
          MR_Word FIMsCord_55;
          MR_Word ItemsCord_56;
          MR_Word STATE_VARIABLE_Specs_198_198;
          MR_Word STATE_VARIABLE_Errors_199_199;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_String STATE_VARIABLE_SourceFileName_205_205;
          MR_Word STATE_VARIABLE_SeqNumCounter_206_206;
          MR_Word STATE_VARIABLE_Specs_207_207;
          MR_Word STATE_VARIABLE_Errors_208_208;
          MR_Word STATE_VARIABLE_LineContext_209_209;
          MR_Word STATE_VARIABLE_LinePosn_210_210;
          MR_Word STATE_VARIABLE_ModuleComponents_211_211;
          MR_Word Var_212;
          MR_Word Var_221;
          MR_Word _MissingStartSectionWarning_47;
          MR_Word Var_52;
          MR_Word next_value_of_MaybePrevSection_29;
          MR_Word next_value_of_InitLookAhead_31;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

          Context_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_43);
          parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_46, STATE_VARIABLE_MissingStartSectionWarning_0_86, &_MissingStartSectionWarning_47, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_198_198, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_199_199);
          SectionContext_49 = mercury__term__context_init_0_f_0();
          {
            ItemSeqInitLookAhead_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 0) = ((MR_Box) (IOMVarSet_42));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 1) = ((MR_Box) (IOMTerm_43));
          }
          Var_201 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_202 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_203 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
          Var_204 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_50, &ItemSeqFinalLookAhead_51, (MR_Word) ((MR_Unsigned) 0U), &Var_52, Var_201, &InclsCord_53, Var_202, &AvailsCord_54, Var_203, &FIMsCord_55, Var_204, &ItemsCord_56, STATE_VARIABLE_SourceFileName_0_89, &STATE_VARIABLE_SourceFileName_205_205, STATE_VARIABLE_SeqNumCounter_101_101, &STATE_VARIABLE_SeqNumCounter_206_206, STATE_VARIABLE_Specs_198_198, &STATE_VARIABLE_Specs_207_207, STATE_VARIABLE_Errors_199_199, &STATE_VARIABLE_Errors_208_208, STATE_VARIABLE_LineContext_102_102, &STATE_VARIABLE_LineContext_209_209, STATE_VARIABLE_LinePosn_103_103, &STATE_VARIABLE_LinePosn_210_210);
          parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, (MR_Integer) 1, SectionContext_49, InclsCord_53, AvailsCord_54, FIMsCord_55, ItemsCord_56, STATE_VARIABLE_ModuleComponents_0_87, &STATE_VARIABLE_ModuleComponents_211_211);
          {
            Var_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_221, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_221, 1) = ((MR_Box) (SectionContext_49));
          }
          {
            Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_221));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_29 = Var_212;
          next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_51;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_87 = STATE_VARIABLE_ModuleComponents_211_211;
          next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_205_205;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_206_206;
          next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_207_207;
          next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_208_208;
          next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_209_209;
          next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_210_210;
          MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
          STATE_VARIABLE_MissingStartSectionWarning_0_86 = (MR_Integer) 0;
          InitLookAhead_31 = next_value_of_InitLookAhead_31;
          STATE_VARIABLE_ModuleComponents_0_87 = next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
          STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
          STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
          STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
          STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
          STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
          STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 2))));
          MR_Word IOMVarSet_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word IOMTerm_274 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_57)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_106_106;
                MR_Word STATE_VARIABLE_Errors_107_107;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Var_112;
                MR_Word Var_113;
                MR_String STATE_VARIABLE_SourceFileName_114_114;
                MR_Word STATE_VARIABLE_SeqNumCounter_115_115;
                MR_Word STATE_VARIABLE_Specs_116_116;
                MR_Word STATE_VARIABLE_Errors_117_117;
                MR_Word STATE_VARIABLE_LineContext_118_118;
                MR_Word STATE_VARIABLE_LinePosn_119_119;
                MR_Word STATE_VARIABLE_ModuleComponents_120_120;
                MR_Word Var_121;
                MR_Word Var_130;
                MR_Word SectionKind_255;
                MR_Word SectionContext_256;
                MR_Word ItemSeqInitLookAhead_257;
                MR_Word ItemSeqFinalLookAhead_258;
                MR_Word InclsCord_259;
                MR_Word AvailsCord_260;
                MR_Word FIMsCord_261;
                MR_Word ItemsCord_262;
                MR_Word Var_82;
                MR_Word next_value_of_MaybePrevSection_29;
                MR_Word next_value_of_InitLookAhead_31;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                switch (MR_tag((MR_Word) IOM_57)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_245;
                        MR_Word _MissingStartSectionWarning_244;

                        Context_245 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_274);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_245, STATE_VARIABLE_MissingStartSectionWarning_0_86, &_MissingStartSectionWarning_244, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_107_107);
                        SectionKind_255 = (MR_Integer) 1;
                        SectionContext_256 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                        SectionKind_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 0))));
                        SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                        STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                      }
                      {
                        ItemSeqInitLookAhead_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 0) = ((MR_Box) (IOMVarSet_273));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 1) = ((MR_Box) (IOMTerm_274));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 6:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_245;
                            MR_Word _MissingStartSectionWarning_244;

                            Context_245 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_274);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_245, STATE_VARIABLE_MissingStartSectionWarning_0_86, &_MissingStartSectionWarning_244, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_107_107);
                            SectionKind_255 = (MR_Integer) 1;
                            SectionContext_256 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 0))));
                            SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                            STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                          }
                          {
                            ItemSeqInitLookAhead_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 0) = ((MR_Box) (IOMVarSet_273));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 1) = ((MR_Box) (IOMTerm_274));
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          SectionKind_255 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))) & (MR_Integer) 1);
                          SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                          ItemSeqInitLookAhead_257 = (MR_Word) ((MR_Unsigned) 0U);
                          STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                          STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                        }
                        break;
                    }
                    break;
                }
                Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_111 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_113 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_257, &ItemSeqFinalLookAhead_258, (MR_Word) ((MR_Unsigned) 0U), &Var_82, Var_110, &InclsCord_259, Var_111, &AvailsCord_260, Var_112, &FIMsCord_261, Var_113, &ItemsCord_262, STATE_VARIABLE_SourceFileName_0_89, &STATE_VARIABLE_SourceFileName_114_114, STATE_VARIABLE_SeqNumCounter_101_101, &STATE_VARIABLE_SeqNumCounter_115_115, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_116_116, STATE_VARIABLE_Errors_107_107, &STATE_VARIABLE_Errors_117_117, STATE_VARIABLE_LineContext_102_102, &STATE_VARIABLE_LineContext_118_118, STATE_VARIABLE_LinePosn_103_103, &STATE_VARIABLE_LinePosn_119_119);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, SectionKind_255, SectionContext_256, InclsCord_259, AvailsCord_260, FIMsCord_261, ItemsCord_262, STATE_VARIABLE_ModuleComponents_0_87, &STATE_VARIABLE_ModuleComponents_120_120);
                {
                  Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (SectionKind_255));
                  MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (SectionContext_256));
                }
                {
                  Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_130));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_29 = Var_121;
                next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_258;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_87 = STATE_VARIABLE_ModuleComponents_120_120;
                next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_114_114;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_115_115;
                next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_116_116;
                next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_117_117;
                next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_118_118;
                next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_119_119;
                MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                STATE_VARIABLE_MissingStartSectionWarning_0_86 = (MR_Integer) 0;
                InitLookAhead_31 = next_value_of_InitLookAhead_31;
                STATE_VARIABLE_ModuleComponents_0_87 = next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
                STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                  {
                    MR_Word STATE_VARIABLE_Specs_106_106;
                    MR_Word STATE_VARIABLE_Errors_107_107;
                    MR_Word Var_110;
                    MR_Word Var_111;
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_String STATE_VARIABLE_SourceFileName_114_114;
                    MR_Word STATE_VARIABLE_SeqNumCounter_115_115;
                    MR_Word STATE_VARIABLE_Specs_116_116;
                    MR_Word STATE_VARIABLE_Errors_117_117;
                    MR_Word STATE_VARIABLE_LineContext_118_118;
                    MR_Word STATE_VARIABLE_LinePosn_119_119;
                    MR_Word STATE_VARIABLE_ModuleComponents_120_120;
                    MR_Word Var_121;
                    MR_Word Var_130;
                    MR_Word SectionKind_255;
                    MR_Word SectionContext_256;
                    MR_Word ItemSeqInitLookAhead_257;
                    MR_Word ItemSeqFinalLookAhead_258;
                    MR_Word InclsCord_259;
                    MR_Word AvailsCord_260;
                    MR_Word FIMsCord_261;
                    MR_Word ItemsCord_262;
                    MR_Word Var_82;
                    MR_Word next_value_of_MaybePrevSection_29;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                    switch (MR_tag((MR_Word) IOM_57)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_245;
                            MR_Word _MissingStartSectionWarning_244;

                            Context_245 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_274);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_245, STATE_VARIABLE_MissingStartSectionWarning_0_86, &_MissingStartSectionWarning_244, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_107_107);
                            SectionKind_255 = (MR_Integer) 1;
                            SectionContext_256 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 0))));
                            SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                            STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                          }
                          {
                            ItemSeqInitLookAhead_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 0) = ((MR_Box) (IOMVarSet_273));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 1) = ((MR_Box) (IOMTerm_274));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 6:
                            {
                              if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                MR_Word Context_245;
                                MR_Word _MissingStartSectionWarning_244;

                                Context_245 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_274);
                                parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_245, STATE_VARIABLE_MissingStartSectionWarning_0_86, &_MissingStartSectionWarning_244, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_107_107);
                                SectionKind_255 = (MR_Integer) 1;
                                SectionContext_256 = mercury__term__context_init_0_f_0();
                              }
                              else
                              {
                                MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                                SectionKind_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 0))));
                                SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_108, (MR_Integer) 1))));
                                STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                                STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                              }
                              {
                                ItemSeqInitLookAhead_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 0) = ((MR_Box) (IOMVarSet_273));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_257, 1) = ((MR_Box) (IOMTerm_274));
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              SectionKind_255 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))) & (MR_Integer) 1);
                              SectionContext_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                              ItemSeqInitLookAhead_257 = (MR_Word) ((MR_Unsigned) 0U);
                              STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_93;
                              STATE_VARIABLE_Errors_107_107 = STATE_VARIABLE_Errors_0_95;
                            }
                            break;
                        }
                        break;
                    }
                    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_111 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_113 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_257, &ItemSeqFinalLookAhead_258, (MR_Word) ((MR_Unsigned) 0U), &Var_82, Var_110, &InclsCord_259, Var_111, &AvailsCord_260, Var_112, &FIMsCord_261, Var_113, &ItemsCord_262, STATE_VARIABLE_SourceFileName_0_89, &STATE_VARIABLE_SourceFileName_114_114, STATE_VARIABLE_SeqNumCounter_101_101, &STATE_VARIABLE_SeqNumCounter_115_115, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_116_116, STATE_VARIABLE_Errors_107_107, &STATE_VARIABLE_Errors_117_117, STATE_VARIABLE_LineContext_102_102, &STATE_VARIABLE_LineContext_118_118, STATE_VARIABLE_LinePosn_103_103, &STATE_VARIABLE_LinePosn_119_119);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, SectionKind_255, SectionContext_256, InclsCord_259, AvailsCord_260, FIMsCord_261, ItemsCord_262, STATE_VARIABLE_ModuleComponents_0_87, &STATE_VARIABLE_ModuleComponents_120_120);
                    {
                      Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (SectionKind_255));
                      MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (SectionContext_256));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_130));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_29 = Var_121;
                    next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_258;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_87 = STATE_VARIABLE_ModuleComponents_120_120;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_114_114;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_115_115;
                    next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_116_116;
                    next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_117_117;
                    next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_118_118;
                    next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_119_119;
                    MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                    STATE_VARIABLE_MissingStartSectionWarning_0_86 = (MR_Integer) 0;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_87 = next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                    STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                    STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                    STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
                    STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                    STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Spec_60;
                    MR_Word Var_179;
                    MR_Word STATE_VARIABLE_Specs_180_180;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                    Var_179 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_274);
                    {
                      Spec_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/23"));
                      MR_hl_field(MR_mktag(1), Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Spec_60, 3) = ((MR_Box) (Var_179));
                      MR_hl_field(MR_mktag(1), Spec_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[19])));
                    }
                    {
                      STATE_VARIABLE_Specs_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_180_180, 0) = ((MR_Box) (Spec_60));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_180_180, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_93));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_101_101;
                    next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_180_180;
                    next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_102_102;
                    next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_103_103;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                    STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                    STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_189_189 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_189_189;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_101_101;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_102_102;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_103_103;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                    STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                    STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RawStartModuleName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_Word StartContext_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                    MR_Word StartModuleName_65;
                    MR_Word SubModuleFinalLookAhead_67;
                    MR_Word STATE_VARIABLE_Specs_152_152;
                    MR_Word STATE_VARIABLE_ModuleComponents_154_154;
                    MR_String STATE_VARIABLE_SourceFileName_155_155;
                    MR_Word STATE_VARIABLE_SeqNumCounter_156_156;
                    MR_Word STATE_VARIABLE_Specs_157_157;
                    MR_Word STATE_VARIABLE_Errors_158_158;
                    MR_Word STATE_VARIABLE_LineContext_159_159;
                    MR_Word STATE_VARIABLE_LinePosn_160_160;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                    if (((MR_tag((MR_Word) RawStartModuleName_61)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 0))));
                      MR_String RawBaseName_239 = ((MR_String) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_66, CurModuleName_27);
                      if (succeeded)
                      {
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_239));
                        }
                        STATE_VARIABLE_Specs_152_152 = STATE_VARIABLE_Specs_0_93;
                      }
                      else
                      {
                        MR_Word Var_133;
                        MR_Word Var_136;
                        MR_Word Var_137;
                        MR_Word Var_138;
                        MR_Word Var_141;
                        MR_Word Var_142;
                        MR_Word Pieces_233;
                        MR_Word Spec_234;

                        {
                          Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (RawStartModuleName_61));
                        }
                        {
                          Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (CurModuleName_27));
                        }
                        {
                          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
                        }
                        {
                          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[102])));
                          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
                        }
                        {
                          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
                        }
                        {
                          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[101])));
                          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_136));
                        }
                        {
                          Pieces_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[100])));
                          MR_hl_field(MR_mktag(1), Pieces_233, 1) = ((MR_Box) (Var_133));
                        }
                        {
                          Spec_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Spec_234, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/23"));
                          MR_hl_field(MR_mktag(1), Spec_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(1), Spec_234, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(1), Spec_234, 3) = ((MR_Box) (StartContext_62));
                          MR_hl_field(MR_mktag(1), Spec_234, 4) = ((MR_Box) (Pieces_233));
                        }
                        {
                          STATE_VARIABLE_Specs_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_152_152, 0) = ((MR_Box) (Spec_234));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_152_152, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_93));
                        }
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_239));
                        }
                      }
                    }
                    else
                    {
                      MR_String RawBaseName_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), RawStartModuleName_61, (MR_Integer) 0))));

                      {
                        StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                        MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_64));
                      }
                      STATE_VARIABLE_Specs_152_152 = STATE_VARIABLE_Specs_0_93;
                    }
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(FileString_24, MaxOffset_25, ContainingModules_28, MaybePrevSection_29, CurModuleName_27, StartModuleName_65, StartContext_62, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_67, STATE_VARIABLE_ModuleComponents_0_87, &STATE_VARIABLE_ModuleComponents_154_154, STATE_VARIABLE_SourceFileName_0_89, &STATE_VARIABLE_SourceFileName_155_155, STATE_VARIABLE_SeqNumCounter_101_101, &STATE_VARIABLE_SeqNumCounter_156_156, STATE_VARIABLE_Specs_152_152, &STATE_VARIABLE_Specs_157_157, STATE_VARIABLE_Errors_0_95, &STATE_VARIABLE_Errors_158_158, STATE_VARIABLE_LineContext_102_102, &STATE_VARIABLE_LineContext_159_159, STATE_VARIABLE_LinePosn_103_103, &STATE_VARIABLE_LinePosn_160_160);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_31 = SubModuleFinalLookAhead_67;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_87 = STATE_VARIABLE_ModuleComponents_154_154;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_155_155;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_156_156;
                    next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_157_157;
                    next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_158_158;
                    next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_159_159;
                    next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_160_160;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_87 = next_value_of_STATE_VARIABLE_ModuleComponents_0_87;
                    STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                    STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                    STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                    STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
                    STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                    STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                    continue;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word EndedModuleName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_Word EndContext_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));

                    parse_tree__parse_module__handle_module_end_marker_11_p_0(CurModuleName_27, ContainingModules_28, IOMVarSet_273, IOMTerm_274, EndedModuleName_83, EndContext_84, FinalLookAhead_32, STATE_VARIABLE_Specs_0_93, STATE_VARIABLE_Specs_94, STATE_VARIABLE_Errors_0_95, STATE_VARIABLE_Errors_96);
                    *STATE_VARIABLE_ModuleComponents_88 = STATE_VARIABLE_ModuleComponents_0_87;
                    *STATE_VARIABLE_SourceFileName_90 = STATE_VARIABLE_SourceFileName_0_89;
                    *STATE_VARIABLE_SeqNumCounter_92 = STATE_VARIABLE_SeqNumCounter_101_101;
                    *STATE_VARIABLE_LineContext_98 = STATE_VARIABLE_LineContext_102_102;
                    *STATE_VARIABLE_LinePosn_100 = STATE_VARIABLE_LinePosn_103_103;
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(
  MR_String FileString_25,
  MR_Integer MaxOffset_26,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word ContainingModuleName_30,
  MR_Word StartModuleName_31,
  MR_Word StartContext_32,
  MR_Word InitLookAhead_33,
  MR_Word * FinalLookAhead_34,
  MR_Word STATE_VARIABLE_ModuleComponents_0_51,
  MR_Word * STATE_VARIABLE_ModuleComponents_52,
  MR_String STATE_VARIABLE_SourceFileName_0_53,
  MR_String * STATE_VARIABLE_SourceFileName_54,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_55,
  MR_Word * STATE_VARIABLE_SeqNumCounter_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58,
  MR_Word STATE_VARIABLE_Errors_0_59,
  MR_Word * STATE_VARIABLE_Errors_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64)
{
  {
    MR_Word SectionKind_42;
    MR_Word SectionContext_43;
    MR_Word NestedContainingModules_46;
    MR_Word NestedModuleComponents_48;
    MR_Word SubModuleParseTreeSrc_49;
    MR_Word Component_50;
    MR_Word STATE_VARIABLE_Specs_107_107;
    MR_Word STATE_VARIABLE_Errors_109_109;
    MR_Word Var_112;

    if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NoSectionPieces_44;
      MR_Word NoSectionSpec_45;
      MR_Word Var_67;
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (StartModuleName_31));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[49])));
      }
      {
        NoSectionPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[99])));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 1) = ((MR_Box) (Var_67));
      }
      {
        NoSectionSpec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_submodule\'/24"));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 3) = ((MR_Box) (StartContext_32));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 4) = ((MR_Box) (NoSectionPieces_44));
      }
      {
        STATE_VARIABLE_Specs_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 0) = ((MR_Box) (NoSectionSpec_45));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
      }
      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_Errors_0_59, &STATE_VARIABLE_Errors_109_109);
      SectionKind_42 = (MR_Integer) 0;
      SectionContext_43 = mercury__term__context_init_0_f_0();
    }
    else
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

      SectionKind_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_110, (MR_Integer) 0))));
      SectionContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_110, (MR_Integer) 1))));
      STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_57;
      STATE_VARIABLE_Errors_109_109 = STATE_VARIABLE_Errors_0_59;
    }
    {
      NestedContainingModules_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NestedContainingModules_46, 0) = ((MR_Box) (StartModuleName_31));
      MR_hl_field(MR_mktag(1), NestedContainingModules_46, 1) = ((MR_Box) (ContainingModules_28));
    }
    Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_25, MaxOffset_26, StartModuleName_31, NestedContainingModules_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_33, FinalLookAhead_34, Var_112, &NestedModuleComponents_48, STATE_VARIABLE_SourceFileName_0_53, STATE_VARIABLE_SourceFileName_54, STATE_VARIABLE_SeqNumCounter_0_55, STATE_VARIABLE_SeqNumCounter_56, STATE_VARIABLE_Specs_107_107, STATE_VARIABLE_Specs_58, STATE_VARIABLE_Errors_109_109, STATE_VARIABLE_Errors_60, STATE_VARIABLE_LineContext_0_61, STATE_VARIABLE_LineContext_62, STATE_VARIABLE_LinePosn_0_63, STATE_VARIABLE_LinePosn_64);
    {
      SubModuleParseTreeSrc_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_49, 0) = ((MR_Box) (StartModuleName_31));
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_49, 1) = ((MR_Box) (StartContext_32));
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_49, 2) = ((MR_Box) (NestedModuleComponents_48));
    }
    {
      Component_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Component_50, 0) = ((MR_Box) (ContainingModuleName_30));
      MR_hl_field(MR_mktag(1), Component_50, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_42));
      MR_hl_field(MR_mktag(1), Component_50, 2) = ((MR_Box) (SectionContext_43));
      MR_hl_field(MR_mktag(1), Component_50, 3) = ((MR_Box) (SubModuleParseTreeSrc_49));
    }
    *STATE_VARIABLE_ModuleComponents_52 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_51, ((MR_Box) (Component_50)));
  }
}

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0(
  MR_Word CurModuleName_12,
  MR_Word ContainingModules_13,
  MR_Word IOMVarSet_14,
  MR_Word IOMTerm_15,
  MR_Word EndedModuleName_16,
  MR_Word EndContext_17,
  MR_Word * FinalLookAhead_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24,
  MR_Word STATE_VARIABLE_Errors_0_25,
  MR_Word * STATE_VARIABLE_Errors_26)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_12, EndedModuleName_16);
    if (succeeded)
    {
      *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_26 = STATE_VARIABLE_Errors_0_25;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(EndedModuleName_16, CurModuleName_12);
      if (succeeded)
      {
        *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Errors_26 = STATE_VARIABLE_Errors_0_25;
        *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      }
      else
      {
        succeeded = parse_tree__parse_module__is_for_containing_module_2_p_0(EndedModuleName_16, ContainingModules_13);
        if (succeeded)
        {
          MR_Word Pieces_21;
          MR_Word Spec_22;
          MR_Word Var_29;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
          }
          {
            Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[93])));
            MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_29));
          }
          {
            Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/11"));
            MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (Pieces_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_Errors_0_25, STATE_VARIABLE_Errors_26);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *FinalLookAhead_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_15));
          }
        }
        else
        {
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Pieces_79;
          MR_Word Spec_80;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (EndedModuleName_16));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Pieces_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96])));
            MR_hl_field(MR_mktag(1), Pieces_79, 1) = ((MR_Box) (Var_51));
          }
          {
            Spec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/11"));
            MR_hl_field(MR_mktag(1), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_80, 3) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(1), Spec_80, 4) = ((MR_Box) (Pieces_79));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_80));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_Errors_0_25, STATE_VARIABLE_Errors_26);
          *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__is_for_containing_module_2_p_0(
  MR_Word EndedModuleName_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ContainingModule_4;
    MR_Word ContainingModules_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ContainingModule_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ContainingModules_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(EndedModuleName_3, ContainingModule_4);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = ContainingModules_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(
  MR_Word CurModuleName_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_16,
  MR_Word * STATE_VARIABLE_MissingStartSectionWarning_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_Errors_0_20,
  MR_Word * STATE_VARIABLE_Errors_21)
{
  switch (STATE_VARIABLE_MissingStartSectionWarning_0_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_MissingStartSectionWarning_17 = STATE_VARIABLE_MissingStartSectionWarning_0_16;
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        *STATE_VARIABLE_Errors_21 = STATE_VARIABLE_Errors_0_20;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word MissingSectionPieces_14;
        MR_Word MissingSectionSpec_15;
        MR_Word Var_25;
        MR_Word Var_28;
        MR_Word Var_29;

        *STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[38])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[92])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[3])));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          MissingSectionSpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.generate_missing_start_section_warning_src\'/8"));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 4) = ((MR_Box) (MissingSectionPieces_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MissingSectionSpec_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
        }
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_Errors_0_20, STATE_VARIABLE_Errors_21);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__add_section_component_9_p_0(
  MR_Word ModuleName_10,
  MR_Word SectionKind_11,
  MR_Word SectionContext_12,
  MR_Word InclsCord_13,
  MR_Word AvailsCord_14,
  MR_Word FIMsCord_15,
  MR_Word ItemsCord_16,
  MR_Word STATE_VARIABLE_ModuleComponents_0_19,
  MR_Word * STATE_VARIABLE_ModuleComponents_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeCtorInfo_25_25;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_13);
    if (succeeded)
    {
      TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
      succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_23_23, AvailsCord_14);
      if (succeeded)
      {
        TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0);
        succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_24_24, FIMsCord_15);
        if (succeeded)
        {
          TypeCtorInfo_25_25 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
          succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_25_25, ItemsCord_16);
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_ModuleComponents_20 = STATE_VARIABLE_ModuleComponents_0_19;
    else
    {
      MR_Word Component_18;

      {
        Component_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Component_18, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(0), Component_18, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_11));
        MR_hl_field(MR_mktag(0), Component_18, 2) = ((MR_Box) (SectionContext_12));
        MR_hl_field(MR_mktag(0), Component_18, 3) = ((MR_Box) (InclsCord_13));
        MR_hl_field(MR_mktag(0), Component_18, 4) = ((MR_Box) (AvailsCord_14));
        MR_hl_field(MR_mktag(0), Component_18, 5) = ((MR_Box) (FIMsCord_15));
        MR_hl_field(MR_mktag(0), Component_18, 6) = ((MR_Box) (ItemsCord_16));
      }
      *STATE_VARIABLE_ModuleComponents_20 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_19, ((MR_Box) (Component_18)));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word STATE_VARIABLE_LinePosn_0_54,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word * STATE_VARIABLE_Errors_56)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(IntFileKind_13, SourceFileName_14, FileString_15, MaxOffset_16, STATE_VARIABLE_LineContext_0_53, STATE_VARIABLE_LinePosn_0_54, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_55, STATE_VARIABLE_Errors_56);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word STATE_VARIABLE_LinePosn_0_54,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word * STATE_VARIABLE_Errors_56)
{
  {
    MR_Word MaybeModuleHeader_26;
    MR_Word STATE_VARIABLE_SeqNumCounter_57_57;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word STATE_VARIABLE_Errors_59_59;
    MR_Word STATE_VARIABLE_LineContext_60_60;
    MR_Word STATE_VARIABLE_LinePosn_61_61;

    parse_tree__parse_module__read_module_header_13_p_0(FileString_15, MaxOffset_16, DefaultModuleName_20, DefaultExpectationContexts_21, SourceFileName_14, &MaybeModuleHeader_26, &STATE_VARIABLE_SeqNumCounter_57_57, &STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_LineContext_0_53, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_54, &STATE_VARIABLE_LinePosn_61_61);
    if (((MR_tag((MR_Word) MaybeModuleHeader_26)) == (MR_Integer) 0))
    {
      MR_Word ModuleNameContext_27 = (MR_Word) ((MR_Word) (MaybeModuleHeader_26));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        *ParseTree_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DefaultModuleName_20));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_27));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_58_58;
      *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_59_59;
    }
    else
    {
      MR_Word MaybeFirstRawItemBlock_31;
      MR_Word STATE_VARIABLE_LookAhead_63_63;
      MR_Word STATE_VARIABLE_SeqNumCounter_64_64;
      MR_Word STATE_VARIABLE_Specs_65_65;
      MR_Word STATE_VARIABLE_Errors_66_66;
      MR_Word STATE_VARIABLE_LineContext_67_67;
      MR_Word STATE_VARIABLE_LinePosn_68_68;
      MR_Word STATE_VARIABLE_LookAhead_70_70;
      MR_Word STATE_VARIABLE_SeqNumCounter_71_71;
      MR_Word STATE_VARIABLE_Specs_72_72;
      MR_Word STATE_VARIABLE_Errors_73_73;
      MR_Word STATE_VARIABLE_LineContext_74_74;
      MR_Word STATE_VARIABLE_LinePosn_75_75;
      MR_Word STATE_VARIABLE_LookAhead_82_82;
      MR_Word STATE_VARIABLE_SeqNumCounter_83_83;
      MR_Word STATE_VARIABLE_Errors_85_85;
      MR_Word STATE_VARIABLE_LineContext_86_86;
      MR_Word STATE_VARIABLE_LinePosn_87_87;
      MR_Word STATE_VARIABLE_Specs_103_103;
      MR_Word Var_125;
      MR_Word MaybeVersionNumbers_136;
      MR_Word ModuleNameContext_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_26, (MR_Integer) 1))));
      MR_Word ModuleName_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_26, (MR_Integer) 0))));
      MR_Word _LineContext_51;
      MR_Word _LinePosn_52;

      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_121_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_105_116_101_109_95_95_91_51_93_95_48_18_p_0(FileString_15, MaxOffset_16, ModuleName_139, SourceFileName_14, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_LookAhead_63_63, &MaybeVersionNumbers_136, STATE_VARIABLE_SeqNumCounter_57_57, &STATE_VARIABLE_SeqNumCounter_64_64, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Errors_59_59, &STATE_VARIABLE_Errors_66_66, STATE_VARIABLE_LineContext_60_60, &STATE_VARIABLE_LineContext_67_67, STATE_VARIABLE_LinePosn_61_61, &STATE_VARIABLE_LinePosn_68_68);
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(FileString_15, MaxOffset_16, ModuleName_139, SourceFileName_14, (MR_String) "interface", STATE_VARIABLE_LookAhead_63_63, &STATE_VARIABLE_LookAhead_70_70, &MaybeFirstRawItemBlock_31, STATE_VARIABLE_SeqNumCounter_64_64, &STATE_VARIABLE_SeqNumCounter_71_71, STATE_VARIABLE_Specs_65_65, &STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Errors_66_66, &STATE_VARIABLE_Errors_73_73, STATE_VARIABLE_LineContext_67_67, &STATE_VARIABLE_LineContext_74_74, STATE_VARIABLE_LinePosn_68_68, &STATE_VARIABLE_LinePosn_75_75);
      if ((MaybeFirstRawItemBlock_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          *ParseTree_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_139));
          MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_138));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_LineContext_86_86 = STATE_VARIABLE_LineContext_74_74;
        STATE_VARIABLE_LinePosn_87_87 = STATE_VARIABLE_LinePosn_75_75;
        STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_72_72;
        STATE_VARIABLE_Errors_85_85 = STATE_VARIABLE_Errors_73_73;
        STATE_VARIABLE_SeqNumCounter_83_83 = STATE_VARIABLE_SeqNumCounter_71_71;
        STATE_VARIABLE_LookAhead_82_82 = STATE_VARIABLE_LookAhead_70_70;
      }
      else
      {
        MR_Word FirstRawItemBlock_32;
        MR_Word FirstSectionKind_35;
        MR_Word FirstIncls_36;
        MR_Word FirstAvails_37;
        MR_Word FirstFIMs_38;
        MR_Word FirstItems_39;
        MR_Tuple Var_76 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFirstRawItemBlock_31, (MR_Integer) 0))));

        FirstRawItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
        FirstSectionKind_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_32, (MR_Integer) 1))));
        FirstIncls_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_32, (MR_Integer) 2))));
        FirstAvails_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_32, (MR_Integer) 3))));
        FirstFIMs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_32, (MR_Integer) 4))));
        FirstItems_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_32, (MR_Integer) 5))));
        switch (FirstSectionKind_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                *ParseTree_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_139));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_138));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_136));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FirstIncls_36));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FirstAvails_37));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FirstFIMs_38));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (FirstItems_39));
              }
              STATE_VARIABLE_LineContext_86_86 = STATE_VARIABLE_LineContext_74_74;
              STATE_VARIABLE_LinePosn_87_87 = STATE_VARIABLE_LinePosn_75_75;
              STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_72_72;
              STATE_VARIABLE_Errors_85_85 = STATE_VARIABLE_Errors_73_73;
              STATE_VARIABLE_SeqNumCounter_83_83 = STATE_VARIABLE_SeqNumCounter_71_71;
              STATE_VARIABLE_LookAhead_82_82 = STATE_VARIABLE_LookAhead_70_70;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word MaybeSecondRawItemBlock_40;
              MR_Word STATE_VARIABLE_Specs_84_84;

              parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(FileString_15, MaxOffset_16, ModuleName_139, SourceFileName_14, (MR_String) "implementation", STATE_VARIABLE_LookAhead_70_70, &STATE_VARIABLE_LookAhead_82_82, &MaybeSecondRawItemBlock_40, STATE_VARIABLE_SeqNumCounter_71_71, &STATE_VARIABLE_SeqNumCounter_83_83, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_84_84, STATE_VARIABLE_Errors_73_73, &STATE_VARIABLE_Errors_85_85, STATE_VARIABLE_LineContext_74_74, &STATE_VARIABLE_LineContext_86_86, STATE_VARIABLE_LinePosn_75_75, &STATE_VARIABLE_LinePosn_87_87);
              if ((MaybeSecondRawItemBlock_40 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                  *ParseTree_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_139));
                  MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_138));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_136));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FirstIncls_36));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FirstAvails_37));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FirstFIMs_38));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FirstItems_39));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_84_84;
              }
              else
              {
                MR_Word SecondRawItemBlock_41;
                MR_Word SectionContext_42;
                MR_Word SecondSectionKind_44;
                MR_Word SecondIncls_45;
                MR_Word SecondAvails_46;
                MR_Word SecondFIMs_47;
                MR_Word SecondItems_48;
                MR_Tuple Var_88 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeSecondRawItemBlock_40, (MR_Integer) 0))));

                SecondRawItemBlock_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))));
                SectionContext_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 1))));
                SecondSectionKind_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_41, (MR_Integer) 1))));
                SecondIncls_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_41, (MR_Integer) 2))));
                SecondAvails_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_41, (MR_Integer) 3))));
                SecondFIMs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_41, (MR_Integer) 4))));
                SecondItems_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_41, (MR_Integer) 5))));
                switch (SecondSectionKind_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                        *ParseTree_22 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_139));
                        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_138));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_136));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FirstIncls_36));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SecondIncls_45));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FirstAvails_37));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SecondAvails_46));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FirstFIMs_38));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SecondFIMs_47));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FirstItems_39));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (SecondItems_48));
                      }
                      STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_84_84;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_50;

                      {
                        Spec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int\'/12"));
                        MR_hl_field(MR_mktag(1), Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_50, 3) = ((MR_Box) (SectionContext_42));
                        MR_hl_field(MR_mktag(1), Spec_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[15])));
                      }
                      {
                        STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (Spec_50));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (STATE_VARIABLE_Specs_84_84));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                        *ParseTree_22 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_139));
                        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_138));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_136));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
              }
            }
            break;
        }
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(SourceFileName_14, FileString_15, MaxOffset_16, ModuleName_139, Var_125, STATE_VARIABLE_LookAhead_82_82, STATE_VARIABLE_SeqNumCounter_83_83, STATE_VARIABLE_Specs_103_103, STATE_VARIABLE_Specs_55, STATE_VARIABLE_Errors_85_85, STATE_VARIABLE_Errors_56, STATE_VARIABLE_LineContext_86_86, &_LineContext_51, STATE_VARIABLE_LinePosn_87_87, &_LinePosn_52);
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer MaxOffset_21,
  MR_Word CurModuleName_23,
  MR_String SourceFileName_24,
  MR_String ExpectedSectionKindStr_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word * MaybeRawItemBlock_28,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_70,
  MR_Word * STATE_VARIABLE_SeqNumCounter_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73,
  MR_Word STATE_VARIABLE_Errors_0_74,
  MR_Word * STATE_VARIABLE_Errors_75,
  MR_Word STATE_VARIABLE_LineContext_0_76,
  MR_Word * STATE_VARIABLE_LineContext_77,
  MR_Word STATE_VARIABLE_LinePosn_0_78,
  MR_Word * STATE_VARIABLE_LinePosn_79)
{
  {
    MR_Word ReadIOMResult_34;
    MR_Word STATE_VARIABLE_SeqNumCounter_80_80;
    MR_Word STATE_VARIABLE_LineContext_81_81;
    MR_Word STATE_VARIABLE_LinePosn_82_82;

    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_24, FileString_20, MaxOffset_21, InitLookAhead_26, CurModuleName_23, &ReadIOMResult_34, STATE_VARIABLE_SeqNumCounter_0_70, &STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_LineContext_0_76, &STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LinePosn_0_78, &STATE_VARIABLE_LinePosn_82_82);
    switch (MR_tag((MR_Word) ReadIOMResult_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_0_72;
          *STATE_VARIABLE_Errors_75 = STATE_VARIABLE_Errors_0_74;
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
          *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
          *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_34, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_73 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemSpec_35));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_72));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_74, STATE_VARIABLE_Errors_75);
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
          *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
          *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemSpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_34, (MR_Integer) 2))));
          MR_Word ItemErrors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_34, (MR_Integer) 3))));

          *STATE_VARIABLE_Specs_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_72);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ItemErrors_39, STATE_VARIABLE_Errors_0_74, STATE_VARIABLE_Errors_75);
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
          *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
          *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOMVarSet_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_34, (MR_Integer) 0))));
          MR_Word IOMTerm_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_34, (MR_Integer) 1))));
          MR_Word IOM_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_34, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) IOM_42)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word Context_66;
                MR_Word IOMPieces_67;
                MR_Word Pieces_68;
                MR_Word Spec_69;
                MR_Word Var_83;
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_92;

                Context_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                IOMPieces_67 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[91])));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[89])));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
                }
                Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_67, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
                Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, Var_92);
                {
                  Spec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                  MR_hl_field(MR_mktag(1), Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_69, 3) = ((MR_Box) (Context_66));
                  MR_hl_field(MR_mktag(1), Spec_69, 4) = ((MR_Box) (Pieces_68));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_73 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_69));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_72));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_27 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                }
                *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
                *STATE_VARIABLE_Errors_75 = STATE_VARIABLE_Errors_0_74;
                *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
                *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                  {
                    MR_Word Context_66;
                    MR_Word IOMPieces_67;
                    MR_Word Pieces_68;
                    MR_Word Spec_69;
                    MR_Word Var_83;
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Word Var_92;

                    Context_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_67 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[91])));
                    }
                    {
                      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[89])));
                      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
                    }
                    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_67, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
                    Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, Var_92);
                    {
                      Spec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_69, 3) = ((MR_Box) (Context_66));
                      MR_hl_field(MR_mktag(1), Spec_69, 4) = ((MR_Box) (Pieces_68));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_73 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_69));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_72));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
                    *STATE_VARIABLE_Errors_75 = STATE_VARIABLE_Errors_0_74;
                    *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
                    *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SectionKind_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word SectionContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 2))));
                    MR_Word InclsCord_47;
                    MR_Word AvailsCord_48;
                    MR_Word FIMsCord_49;
                    MR_Word ItemsCord_50;
                    MR_Word RawItemBlock_52;
                    MR_Word Var_105;
                    MR_Word Var_106;
                    MR_Word Var_107;
                    MR_Word Var_108;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Tuple Var_118;
                    MR_Word _VNInfo_46;
                    MR_String _UpdatedSourceFileName_51;

                    Var_105 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_106 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_107 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_20, MaxOffset_21, CurModuleName_23, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_27, (MR_Word) ((MR_Unsigned) 0U), &_VNInfo_46, Var_105, &InclsCord_47, Var_106, &AvailsCord_48, Var_107, &FIMsCord_49, Var_108, &ItemsCord_50, SourceFileName_24, &_UpdatedSourceFileName_51, STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_SeqNumCounter_71, STATE_VARIABLE_Specs_0_72, STATE_VARIABLE_Specs_73, STATE_VARIABLE_Errors_0_74, STATE_VARIABLE_Errors_75, STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LineContext_77, STATE_VARIABLE_LinePosn_82_82, STATE_VARIABLE_LinePosn_79);
                    Var_114 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_47);
                    Var_115 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_48);
                    Var_116 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_49);
                    Var_117 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_50);
                    {
                      RawItemBlock_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 0) = ((MR_Box) (CurModuleName_23));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 1) = ((MR_Box) (SectionKind_43));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 2) = ((MR_Box) (Var_114));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 3) = ((MR_Box) (Var_115));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 4) = ((MR_Box) (Var_116));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 5) = ((MR_Box) (Var_117));
                    }
                    {
                      Var_118 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (RawItemBlock_52));
                      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (SectionContext_44));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeRawItemBlock_28 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_118));
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_121_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_105_116_101_109_95_95_91_51_93_95_48_18_p_0(
  MR_String FileString_19,
  MR_Integer MaxOffset_20,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word * MaybeVersionNumbers_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_55,
  MR_Word * STATE_VARIABLE_SeqNumCounter_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58,
  MR_Word STATE_VARIABLE_Errors_0_59,
  MR_Word * STATE_VARIABLE_Errors_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64)
{
  while (MR_TRUE)
  {
    MR_Word ReadIOMResult_32;
    MR_Word STATE_VARIABLE_SeqNumCounter_65_65;
    MR_Word STATE_VARIABLE_LineContext_66_66;
    MR_Word STATE_VARIABLE_LinePosn_67_67;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_23, FileString_19, MaxOffset_20, InitLookAhead_24, ModuleName_22, &ReadIOMResult_32, STATE_VARIABLE_SeqNumCounter_0_55, &STATE_VARIABLE_SeqNumCounter_65_65, STATE_VARIABLE_LineContext_0_61, &STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LinePosn_0_63, &STATE_VARIABLE_LinePosn_67_67);
    switch (MR_tag((MR_Word) ReadIOMResult_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_56 = STATE_VARIABLE_SeqNumCounter_65_65;
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
          *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
          *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_66_66;
          *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_67_67;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_32, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Specs_68_68;
          MR_Word STATE_VARIABLE_Errors_70_70;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_55;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_57;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_59;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_61;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_63;

          {
            STATE_VARIABLE_Specs_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_68_68, 0) = ((MR_Box) (ItemSpec_33));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_68_68, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_59, &STATE_VARIABLE_Errors_70_70);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_55 = STATE_VARIABLE_SeqNumCounter_65_65;
          next_value_of_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_68_68;
          next_value_of_STATE_VARIABLE_Errors_0_59 = STATE_VARIABLE_Errors_70_70;
          next_value_of_STATE_VARIABLE_LineContext_0_61 = STATE_VARIABLE_LineContext_66_66;
          next_value_of_STATE_VARIABLE_LinePosn_0_63 = STATE_VARIABLE_LinePosn_67_67;
          InitLookAhead_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_55 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_55;
          STATE_VARIABLE_Specs_0_57 = next_value_of_STATE_VARIABLE_Specs_0_57;
          STATE_VARIABLE_Errors_0_59 = next_value_of_STATE_VARIABLE_Errors_0_59;
          STATE_VARIABLE_LineContext_0_61 = next_value_of_STATE_VARIABLE_LineContext_0_61;
          STATE_VARIABLE_LinePosn_0_63 = next_value_of_STATE_VARIABLE_LinePosn_0_63;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_32, (MR_Integer) 0))));
          MR_Word IOMTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_32, (MR_Integer) 1))));

          *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *FinalLookAhead_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_35));
          }
          *STATE_VARIABLE_SeqNumCounter_56 = STATE_VARIABLE_SeqNumCounter_65_65;
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
          *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
          *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_66_66;
          *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_67_67;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 2))));
          MR_Word IOMVarSet_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 0))));
          MR_Word IOMTerm_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_77));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_78));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_38, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                  {
                    *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_77));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word VN_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_38, (MR_Integer) 1))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeVersionNumbers_26 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VN_39));
                    }
                    *FinalLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_SeqNumCounter_56 = STATE_VARIABLE_SeqNumCounter_65_65;
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
          *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
          *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_66_66;
          *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_67_67;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_44,
  MR_Word STATE_VARIABLE_LinePosn_0_45,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * STATE_VARIABLE_Errors_47)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(OptFileKind_13, SourceFileName0_14, FileString_15, MaxOffset_16, STATE_VARIABLE_LineContext_0_44, STATE_VARIABLE_LinePosn_0_45, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_46, STATE_VARIABLE_Errors_47);
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__693__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__690__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_44,
  MR_Word STATE_VARIABLE_LinePosn_0_45,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * STATE_VARIABLE_Errors_47)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleHeader_25;
    MR_Word SeqNumCounter1_26;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word STATE_VARIABLE_Errors_49_49;
    MR_Word STATE_VARIABLE_LineContext_50_50;
    MR_Word STATE_VARIABLE_LinePosn_51_51;

    parse_tree__parse_module__read_module_header_13_p_0(FileString_15, MaxOffset_16, DefaultModuleName_20, DefaultExpectationContexts_21, SourceFileName0_14, &MaybeModuleHeader_25, &SeqNumCounter1_26, &STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Errors_49_49, STATE_VARIABLE_LineContext_0_44, &STATE_VARIABLE_LineContext_50_50, STATE_VARIABLE_LinePosn_0_45, &STATE_VARIABLE_LinePosn_51_51);
    if (((MR_tag((MR_Word) MaybeModuleHeader_25)) == (MR_Integer) 0))
    {
      MR_Word ModuleNameContext_27 = (MR_Word) ((MR_Word) (MaybeModuleHeader_25));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *ParseTree_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DefaultModuleName_20));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_27));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_48_48;
      *STATE_VARIABLE_Errors_47 = STATE_VARIABLE_Errors_49_49;
    }
    else
    {
      MR_Word FinalLookAhead_29;
      MR_Word InclsCord_31;
      MR_Word AvailsCord_32;
      MR_Word FIMsCord_33;
      MR_Word ItemsCord_34;
      MR_String SourceFileName_35;
      MR_Word SeqNumCounter_36;
      MR_Word Avails_39;
      MR_Word Imports_40;
      MR_Word Uses_41;
      MR_Word FIMs_42;
      MR_Word Items_43;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_Specs_58_58;
      MR_Word STATE_VARIABLE_Errors_59_59;
      MR_Word STATE_VARIABLE_LineContext_60_60;
      MR_Word STATE_VARIABLE_LinePosn_61_61;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word ModuleNameContext_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_25, (MR_Integer) 1))));
      MR_Word ModuleName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_25, (MR_Integer) 0))));
      MR_Word Var_30;
      MR_Word _LineContext_37;
      MR_Word _LinePosn_38;

      Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
      Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
      Var_56 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
      Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_15, MaxOffset_16, ModuleName_76, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_29, (MR_Word) ((MR_Unsigned) 0U), &Var_30, Var_54, &InclsCord_31, Var_55, &AvailsCord_32, Var_56, &FIMsCord_33, Var_57, &ItemsCord_34, SourceFileName0_14, &SourceFileName_35, SeqNumCounter1_26, &SeqNumCounter_36, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Errors_49_49, &STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_LineContext_50_50, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_51_51, &STATE_VARIABLE_LinePosn_61_61);
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_62, 0) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(SourceFileName_35, FileString_15, MaxOffset_16, ModuleName_76, Var_62, FinalLookAhead_29, SeqNumCounter_36, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_46, STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_Errors_47, STATE_VARIABLE_LineContext_60_60, &_LineContext_37, STATE_VARIABLE_LinePosn_61_61, &_LinePosn_38);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[12]));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (InclsCord_31));
      }
      mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Incls != []");
      Avails_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_32);
      parse_tree__item_util__avail_imports_uses_3_p_0(Avails_39, &Imports_40, &Uses_41);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Imports_40));
        MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Imports != []");
      FIMs_42 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_33);
      Items_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *ParseTree_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_76));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_75));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Uses_41));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FIMs_42));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Items_43));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer MaxOffset_30,
  MR_Word ModuleName_32,
  MR_Word InitLookAhead_33,
  MR_Word * FinalLookAhead_34,
  MR_Word STATE_VARIABLE_VNInfo_0_48,
  MR_Word * STATE_VARIABLE_VNInfo_49,
  MR_Word STATE_VARIABLE_InclsCord_0_50,
  MR_Word * STATE_VARIABLE_InclsCord_51,
  MR_Word STATE_VARIABLE_AvailsCord_0_52,
  MR_Word * STATE_VARIABLE_AvailsCord_53,
  MR_Word STATE_VARIABLE_FIMsCord_0_54,
  MR_Word * STATE_VARIABLE_FIMsCord_55,
  MR_Word STATE_VARIABLE_ItemsCord_0_56,
  MR_Word * STATE_VARIABLE_ItemsCord_57,
  MR_String STATE_VARIABLE_SourceFileName_0_58,
  MR_String * STATE_VARIABLE_SourceFileName_59,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_60,
  MR_Word * STATE_VARIABLE_SeqNumCounter_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63,
  MR_Word STATE_VARIABLE_Errors_0_64,
  MR_Word * STATE_VARIABLE_Errors_65,
  MR_Word STATE_VARIABLE_LineContext_0_66,
  MR_Word * STATE_VARIABLE_LineContext_67,
  MR_Word STATE_VARIABLE_LinePosn_0_68,
  MR_Word * STATE_VARIABLE_LinePosn_69)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumItemsLeft_46;
    MR_Word MidLookAhead_47;
    MR_Word STATE_VARIABLE_VNInfo_71_71;
    MR_Word STATE_VARIABLE_InclsCord_72_72;
    MR_Word STATE_VARIABLE_AvailsCord_73_73;
    MR_Word STATE_VARIABLE_FIMsCord_74_74;
    MR_Word STATE_VARIABLE_ItemsCord_75_75;
    MR_String STATE_VARIABLE_SourceFileName_76_76;
    MR_Word STATE_VARIABLE_SeqNumCounter_77_77;
    MR_Word STATE_VARIABLE_Specs_78_78;
    MR_Word STATE_VARIABLE_Errors_79_79;
    MR_Word STATE_VARIABLE_LineContext_80_80;
    MR_Word STATE_VARIABLE_LinePosn_81_81;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_30_p_0(FileString_29, MaxOffset_30, ModuleName_32, (MR_Integer) 1024, &NumItemsLeft_46, InitLookAhead_33, &MidLookAhead_47, STATE_VARIABLE_VNInfo_0_48, &STATE_VARIABLE_VNInfo_71_71, STATE_VARIABLE_InclsCord_0_50, &STATE_VARIABLE_InclsCord_72_72, STATE_VARIABLE_AvailsCord_0_52, &STATE_VARIABLE_AvailsCord_73_73, STATE_VARIABLE_FIMsCord_0_54, &STATE_VARIABLE_FIMsCord_74_74, STATE_VARIABLE_ItemsCord_0_56, &STATE_VARIABLE_ItemsCord_75_75, STATE_VARIABLE_SourceFileName_0_58, &STATE_VARIABLE_SourceFileName_76_76, STATE_VARIABLE_SeqNumCounter_0_60, &STATE_VARIABLE_SeqNumCounter_77_77, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_78_78, STATE_VARIABLE_Errors_0_64, &STATE_VARIABLE_Errors_79_79, STATE_VARIABLE_LineContext_0_66, &STATE_VARIABLE_LineContext_80_80, STATE_VARIABLE_LinePosn_0_68, &STATE_VARIABLE_LinePosn_81_81);
    succeeded = (NumItemsLeft_46 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word next_value_of_InitLookAhead_33 = MidLookAhead_47;
      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_48 = STATE_VARIABLE_VNInfo_71_71;
      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_50 = STATE_VARIABLE_InclsCord_72_72;
      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_52 = STATE_VARIABLE_AvailsCord_73_73;
      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_54 = STATE_VARIABLE_FIMsCord_74_74;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_56 = STATE_VARIABLE_ItemsCord_75_75;
      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_58 = STATE_VARIABLE_SourceFileName_76_76;
      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_60 = STATE_VARIABLE_SeqNumCounter_77_77;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_62 = STATE_VARIABLE_Specs_78_78;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_64 = STATE_VARIABLE_Errors_79_79;
      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_66 = STATE_VARIABLE_LineContext_80_80;
      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_68 = STATE_VARIABLE_LinePosn_81_81;

      // direct tailcall eliminated
      ;
      InitLookAhead_33 = next_value_of_InitLookAhead_33;
      STATE_VARIABLE_VNInfo_0_48 = next_value_of_STATE_VARIABLE_VNInfo_0_48;
      STATE_VARIABLE_InclsCord_0_50 = next_value_of_STATE_VARIABLE_InclsCord_0_50;
      STATE_VARIABLE_AvailsCord_0_52 = next_value_of_STATE_VARIABLE_AvailsCord_0_52;
      STATE_VARIABLE_FIMsCord_0_54 = next_value_of_STATE_VARIABLE_FIMsCord_0_54;
      STATE_VARIABLE_ItemsCord_0_56 = next_value_of_STATE_VARIABLE_ItemsCord_0_56;
      STATE_VARIABLE_SourceFileName_0_58 = next_value_of_STATE_VARIABLE_SourceFileName_0_58;
      STATE_VARIABLE_SeqNumCounter_0_60 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_60;
      STATE_VARIABLE_Specs_0_62 = next_value_of_STATE_VARIABLE_Specs_0_62;
      STATE_VARIABLE_Errors_0_64 = next_value_of_STATE_VARIABLE_Errors_0_64;
      STATE_VARIABLE_LineContext_0_66 = next_value_of_STATE_VARIABLE_LineContext_0_66;
      STATE_VARIABLE_LinePosn_0_68 = next_value_of_STATE_VARIABLE_LinePosn_0_68;
      continue;
    }
    else
    {
      *FinalLookAhead_34 = MidLookAhead_47;
      *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_81_81;
      *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_80_80;
      *STATE_VARIABLE_Errors_65 = STATE_VARIABLE_Errors_79_79;
      *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_78_78;
      *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_77_77;
      *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_76_76;
      *STATE_VARIABLE_ItemsCord_57 = STATE_VARIABLE_ItemsCord_75_75;
      *STATE_VARIABLE_FIMsCord_55 = STATE_VARIABLE_FIMsCord_74_74;
      *STATE_VARIABLE_AvailsCord_53 = STATE_VARIABLE_AvailsCord_73_73;
      *STATE_VARIABLE_InclsCord_51 = STATE_VARIABLE_InclsCord_72_72;
      *STATE_VARIABLE_VNInfo_49 = STATE_VARIABLE_VNInfo_71_71;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_30_p_0(
  MR_String FileString_31,
  MR_Integer MaxOffset_32,
  MR_Word ModuleName_34,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_77,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_78,
  MR_Word InitLookAhead_36,
  MR_Word * FinalLookAhead_37,
  MR_Word STATE_VARIABLE_VNInfo_0_79,
  MR_Word * STATE_VARIABLE_VNInfo_80,
  MR_Word STATE_VARIABLE_InclsCord_0_81,
  MR_Word * STATE_VARIABLE_InclsCord_82,
  MR_Word STATE_VARIABLE_AvailsCord_0_83,
  MR_Word * STATE_VARIABLE_AvailsCord_84,
  MR_Word STATE_VARIABLE_FIMsCord_0_85,
  MR_Word * STATE_VARIABLE_FIMsCord_86,
  MR_Word STATE_VARIABLE_ItemsCord_0_87,
  MR_Word * STATE_VARIABLE_ItemsCord_88,
  MR_String STATE_VARIABLE_SourceFileName_0_89,
  MR_String * STATE_VARIABLE_SourceFileName_90,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_91,
  MR_Word * STATE_VARIABLE_SeqNumCounter_92,
  MR_Word STATE_VARIABLE_Specs_0_93,
  MR_Word * STATE_VARIABLE_Specs_94,
  MR_Word STATE_VARIABLE_Errors_0_95,
  MR_Word * STATE_VARIABLE_Errors_96,
  MR_Word STATE_VARIABLE_LineContext_0_97,
  MR_Word * STATE_VARIABLE_LineContext_98,
  MR_Word STATE_VARIABLE_LinePosn_0_99,
  MR_Word * STATE_VARIABLE_LinePosn_100)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumItemsLeft_0_77 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *FinalLookAhead_37 = InitLookAhead_36;
      *STATE_VARIABLE_LinePosn_100 = STATE_VARIABLE_LinePosn_0_99;
      *STATE_VARIABLE_LineContext_98 = STATE_VARIABLE_LineContext_0_97;
      *STATE_VARIABLE_Errors_96 = STATE_VARIABLE_Errors_0_95;
      *STATE_VARIABLE_Specs_94 = STATE_VARIABLE_Specs_0_93;
      *STATE_VARIABLE_SeqNumCounter_92 = STATE_VARIABLE_SeqNumCounter_0_91;
      *STATE_VARIABLE_SourceFileName_90 = STATE_VARIABLE_SourceFileName_0_89;
      *STATE_VARIABLE_ItemsCord_88 = STATE_VARIABLE_ItemsCord_0_87;
      *STATE_VARIABLE_FIMsCord_86 = STATE_VARIABLE_FIMsCord_0_85;
      *STATE_VARIABLE_AvailsCord_84 = STATE_VARIABLE_AvailsCord_0_83;
      *STATE_VARIABLE_InclsCord_82 = STATE_VARIABLE_InclsCord_0_81;
      *STATE_VARIABLE_VNInfo_80 = STATE_VARIABLE_VNInfo_0_79;
      *STATE_VARIABLE_NumItemsLeft_78 = STATE_VARIABLE_NumItemsLeft_0_77;
    }
    else
    {
      MR_Word ReadIOMResult_49;
      MR_Word STATE_VARIABLE_SeqNumCounter_102_102;
      MR_Word STATE_VARIABLE_LineContext_103_103;
      MR_Word STATE_VARIABLE_LinePosn_104_104;

      parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_89, FileString_31, MaxOffset_32, InitLookAhead_36, ModuleName_34, &ReadIOMResult_49, STATE_VARIABLE_SeqNumCounter_0_91, &STATE_VARIABLE_SeqNumCounter_102_102, STATE_VARIABLE_LineContext_0_97, &STATE_VARIABLE_LineContext_103_103, STATE_VARIABLE_LinePosn_0_99, &STATE_VARIABLE_LinePosn_104_104);
      switch (MR_tag((MR_Word) ReadIOMResult_49)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *FinalLookAhead_37 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_NumItemsLeft_78 = STATE_VARIABLE_NumItemsLeft_0_77;
            *STATE_VARIABLE_VNInfo_80 = STATE_VARIABLE_VNInfo_0_79;
            *STATE_VARIABLE_InclsCord_82 = STATE_VARIABLE_InclsCord_0_81;
            *STATE_VARIABLE_AvailsCord_84 = STATE_VARIABLE_AvailsCord_0_83;
            *STATE_VARIABLE_FIMsCord_86 = STATE_VARIABLE_FIMsCord_0_85;
            *STATE_VARIABLE_ItemsCord_88 = STATE_VARIABLE_ItemsCord_0_87;
            *STATE_VARIABLE_SourceFileName_90 = STATE_VARIABLE_SourceFileName_0_89;
            *STATE_VARIABLE_SeqNumCounter_92 = STATE_VARIABLE_SeqNumCounter_102_102;
            *STATE_VARIABLE_Specs_94 = STATE_VARIABLE_Specs_0_93;
            *STATE_VARIABLE_Errors_96 = STATE_VARIABLE_Errors_0_95;
            *STATE_VARIABLE_LineContext_98 = STATE_VARIABLE_LineContext_103_103;
            *STATE_VARIABLE_LinePosn_100 = STATE_VARIABLE_LinePosn_104_104;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemSpec_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_49, (MR_Integer) 0))));
            MR_Word ItemSpecs_205;
            MR_Word ItemErrors_206;
            MR_Word STATE_VARIABLE_Specs_147_207;
            MR_Word STATE_VARIABLE_Errors_148_208;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

            {
              ItemSpecs_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ItemSpecs_205, 0) = ((MR_Box) (ItemSpec_50));
              MR_hl_field(MR_mktag(1), ItemSpecs_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ItemErrors_206 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
            STATE_VARIABLE_Specs_147_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_205, STATE_VARIABLE_Specs_0_93);
            STATE_VARIABLE_Errors_148_208 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_95, ItemErrors_206);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
            next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_147_207;
            next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_148_208;
            next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
            next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
            InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
            STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
            STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
            STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemSpecs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_49, (MR_Integer) 2))));
            MR_Word ItemErrors_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_49, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_Specs_147_147;
            MR_Word STATE_VARIABLE_Errors_148_148;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

            STATE_VARIABLE_Specs_147_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_51, STATE_VARIABLE_Specs_0_93);
            STATE_VARIABLE_Errors_148_148 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_95, ItemErrors_52);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
            next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_147_147;
            next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_148_148;
            next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
            next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
            InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
            STATE_VARIABLE_Errors_0_95 = next_value_of_STATE_VARIABLE_Errors_0_95;
            STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
            STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOMVarSet_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_49, (MR_Integer) 0))));
            MR_Word IOMTerm_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_49, (MR_Integer) 1))));
            MR_Word IOM_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_49, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_NumItemsLeft_105_105 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumItemsLeft_0_77 - (MR_Unsigned) 1);

            switch (MR_tag((MR_Word) IOM_57)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Item_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOM_57, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_ItemsCord_108_171;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  STATE_VARIABLE_ItemsCord_108_171 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_87, ((MR_Box) (Item_75)));
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_87 = STATE_VARIABLE_ItemsCord_108_171;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                  next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                  next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                  STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_ItemsCord_0_87 = next_value_of_STATE_VARIABLE_ItemsCord_0_87;
                  STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                  STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Incls_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_57, (MR_Integer) 0))));
                  MR_Word HeadIncl_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_68, (MR_Integer) 0))));
                  MR_Word TailIncls_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_68, (MR_Integer) 1))));
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word STATE_VARIABLE_InclsCord_113_195;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_81;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (HeadIncl_69));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (TailIncls_70));
                  }
                  Var_114 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_115);
                  STATE_VARIABLE_InclsCord_113_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_81, Var_114);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_InclsCord_0_81 = STATE_VARIABLE_InclsCord_113_195;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                  next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                  next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                  STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_InclsCord_0_81 = next_value_of_STATE_VARIABLE_InclsCord_0_81;
                  STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                  STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Avails_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOM_57, (MR_Integer) 0))));
                  MR_Word HeadAvail_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_71, (MR_Integer) 0))));
                  MR_Word TailAvails_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_71, (MR_Integer) 1))));
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word STATE_VARIABLE_AvailsCord_110_180;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_83;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  {
                    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (HeadAvail_72));
                    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (TailAvails_73));
                  }
                  Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_112);
                  STATE_VARIABLE_AvailsCord_110_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_83, Var_111);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_AvailsCord_0_83 = STATE_VARIABLE_AvailsCord_110_180;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                  next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                  next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                  STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AvailsCord_0_83 = next_value_of_STATE_VARIABLE_AvailsCord_0_83;
                  STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                  STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FIM_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_FIMsCord_109_186;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      STATE_VARIABLE_FIMsCord_109_186 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_FIMsCord_0_85, ((MR_Box) (FIM_74)));
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_FIMsCord_0_85 = STATE_VARIABLE_FIMsCord_109_186;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                      next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                      STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_FIMsCord_0_85 = next_value_of_STATE_VARIABLE_FIMsCord_0_85;
                      STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                      STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MVN_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_VNInfo_130_130;
                      MR_Word STATE_VARIABLE_Specs_131_131;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_79;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      parse_tree__parse_module__record_version_numbers_6_p_0(MVN_67, IOMTerm_56, STATE_VARIABLE_VNInfo_0_79, &STATE_VARIABLE_VNInfo_130_130, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_131_131);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_VNInfo_0_79 = STATE_VARIABLE_VNInfo_130_130;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_131_131;
                      next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                      next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                      STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_VNInfo_0_79 = next_value_of_STATE_VARIABLE_VNInfo_0_79;
                      STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                      STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                      STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_116_203 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_116_203;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;

                      // direct tailcall eliminated
                      ;
                      STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_SourceFileName_0_89 = next_value_of_STATE_VARIABLE_SourceFileName_0_89;
                      STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                      STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *FinalLookAhead_37 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_55));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_56));
                      }
                      *STATE_VARIABLE_NumItemsLeft_78 = STATE_VARIABLE_NumItemsLeft_105_105;
                      *STATE_VARIABLE_VNInfo_80 = STATE_VARIABLE_VNInfo_0_79;
                      *STATE_VARIABLE_InclsCord_82 = STATE_VARIABLE_InclsCord_0_81;
                      *STATE_VARIABLE_AvailsCord_84 = STATE_VARIABLE_AvailsCord_0_83;
                      *STATE_VARIABLE_FIMsCord_86 = STATE_VARIABLE_FIMsCord_0_85;
                      *STATE_VARIABLE_ItemsCord_88 = STATE_VARIABLE_ItemsCord_0_87;
                      *STATE_VARIABLE_SourceFileName_90 = STATE_VARIABLE_SourceFileName_0_89;
                      *STATE_VARIABLE_SeqNumCounter_92 = STATE_VARIABLE_SeqNumCounter_102_102;
                      *STATE_VARIABLE_Specs_94 = STATE_VARIABLE_Specs_0_93;
                      *STATE_VARIABLE_Errors_96 = STATE_VARIABLE_Errors_0_95;
                      *STATE_VARIABLE_LineContext_98 = STATE_VARIABLE_LineContext_103_103;
                      *STATE_VARIABLE_LinePosn_100 = STATE_VARIABLE_LinePosn_104_104;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word HandledSpecs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Specs_107_107;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      STATE_VARIABLE_Specs_107_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HandledSpecs_76, STATE_VARIABLE_Specs_0_93);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_107_107;
                      next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                      next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                      STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                      STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                      STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                      continue;
                    }
                    break;
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__record_version_numbers_6_p_0(
  MR_Word MVN_7,
  MR_Word IOMTerm_8,
  MR_Word STATE_VARIABLE_VNInfo_0_14,
  MR_Word * STATE_VARIABLE_VNInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_VNInfo_0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_VNInfo_0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_35;
            MR_Word Spec_58;

            Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
            {
              Spec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.record_version_numbers\'/6"));
              MR_hl_field(MR_mktag(1), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Spec_58, 3) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[65])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_58));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
            }
            *STATE_VARIABLE_VNInfo_15 = STATE_VARIABLE_VNInfo_0_14;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_VNInfo_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MVN_7)));
            *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Spec_13;
        MR_Word Var_54;

        Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
        {
          Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.record_version_numbers\'/6"));
          MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[57])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
        }
        *STATE_VARIABLE_VNInfo_15 = STATE_VARIABLE_VNInfo_0_14;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(
  MR_String SourceFileName_16,
  MR_String FileString_17,
  MR_Integer MaxOffset_18,
  MR_Word ModuleName_19,
  MR_Word FileKind_20,
  MR_Word FinalLookAhead_21,
  MR_Word SeqNumCounter0_22,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_Errors_0_39,
  MR_Word * STATE_VARIABLE_Errors_40,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word * STATE_VARIABLE_LineContext_42,
  MR_Word STATE_VARIABLE_LinePosn_0_43,
  MR_Word * STATE_VARIABLE_LinePosn_44)
{
  {
    MR_Word IOMResult_27;
    MR_Word _SeqNumCounter_28;

    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_16, FileString_17, MaxOffset_18, FinalLookAhead_21, ModuleName_19, &IOMResult_27, SeqNumCounter0_22, &_SeqNumCounter_28, STATE_VARIABLE_LineContext_0_41, STATE_VARIABLE_LineContext_42, STATE_VARIABLE_LinePosn_0_43, STATE_VARIABLE_LinePosn_44);
    switch (MR_tag((MR_Word) IOMResult_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          *STATE_VARIABLE_Errors_40 = STATE_VARIABLE_Errors_0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOMResult_27, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_38 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemSpec_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_39, STATE_VARIABLE_Errors_40);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_27, (MR_Integer) 1))));
          MR_Word ItemSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_27, (MR_Integer) 2))));
          MR_Word ItemErrors_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_27, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Specs_49_49;
          MR_Word STATE_VARIABLE_Errors_50_50;

          STATE_VARIABLE_Specs_49_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_32, STATE_VARIABLE_Specs_0_37);
          STATE_VARIABLE_Errors_50_50 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_39, ItemErrors_33);
          parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(FileKind_20, Term_31, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_38, STATE_VARIABLE_Errors_50_50, STATE_VARIABLE_Errors_40);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOMTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOMResult_27, (MR_Integer) 1))));

          parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(FileKind_20, IOMTerm_35, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38, STATE_VARIABLE_Errors_0_39, STATE_VARIABLE_Errors_40);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(
  MR_Word FileKind_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18,
  MR_Word STATE_VARIABLE_Errors_0_19,
  MR_Word * STATE_VARIABLE_Errors_20)
{
  {
    MR_Word Context_11;
    MR_Word Error_12;
    MR_Word Pieces_13;
    MR_Word Spec_16;

    Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
    switch (MR_tag((MR_Word) FileKind_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Error_12 = (MR_Integer) 4;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[78]));
        }
        break;
      case (MR_Integer) 1:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[72]));
        }
        break;
      case (MR_Integer) 2:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[74]));
        }
        break;
    }
    {
      Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/6"));
      MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) (Error_12)), STATE_VARIABLE_Errors_0_19, STATE_VARIABLE_Errors_20);
  }
}

static void MR_CALL 
parse_tree__parse_module__read_next_item_or_marker_12_p_0(
  MR_String FileName_13,
  MR_String FileString_14,
  MR_Integer MaxOffset_15,
  MR_Word InitLookAhead_16,
  MR_Word ModuleName_17,
  MR_Word * ReadIOMResult_18,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_25,
  MR_Word * STATE_VARIABLE_SeqNumCounter_26,
  MR_Word STATE_VARIABLE_LineContext_0_27,
  MR_Word * STATE_VARIABLE_LineContext_28,
  MR_Word STATE_VARIABLE_LinePosn_0_29,
  MR_Word * STATE_VARIABLE_LinePosn_30)
{
  if ((InitLookAhead_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadTermResult_22;

    mercury__parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_13, FileString_14, MaxOffset_15, STATE_VARIABLE_LineContext_0_27, STATE_VARIABLE_LineContext_28, STATE_VARIABLE_LinePosn_0_29, STATE_VARIABLE_LinePosn_30, &ReadTermResult_22);
    switch (MR_tag((MR_Word) ReadTermResult_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ReadIOMResult_18 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_26 = STATE_VARIABLE_SeqNumCounter_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ErrorMsg_58 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTermResult_22, (MR_Integer) 0))));
          MR_Integer LineNumber_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ReadTermResult_22, (MR_Integer) 1))));
          MR_Word Context_60;
          MR_Word Pieces_61;
          MR_Word Spec_62;
          MR_Word Var_66;

          Context_60 = mercury__term__context_init_2_f_0(FileName_13, LineNumber_59);
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (ErrorMsg_58));
          }
          {
            Pieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_61, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Pieces_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Spec_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_62, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
            MR_hl_field(MR_mktag(1), Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_62, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_62, 3) = ((MR_Box) (Context_60));
            MR_hl_field(MR_mktag(1), Spec_62, 4) = ((MR_Box) (Pieces_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_62));
          }
          *STATE_VARIABLE_SeqNumCounter_26 = STATE_VARIABLE_SeqNumCounter_0_25;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_22, (MR_Integer) 0))));
          MR_Word Term_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_22, (MR_Integer) 1))));
          MR_Integer SeqNum_83;
          MR_Word MaybeItemOrMarker_84;

          mercury__counter__allocate_3_p_0(&SeqNum_83, STATE_VARIABLE_SeqNumCounter_0_25, STATE_VARIABLE_SeqNumCounter_26);
          parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_17, VarSet_63, Term_64, SeqNum_83, &MaybeItemOrMarker_84);
          if (((MR_tag((MR_Word) MaybeItemOrMarker_84)) == (MR_Integer) 0))
          {
            MR_Word Specs_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_84, (MR_Integer) 0))));
            MR_Word Var_88;

            Var_88 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_18 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_63));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_64));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_86));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_88));
            }
          }
          else
          {
            MR_Word ItemOrMarker_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_84, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarSet_63));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term_64));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_85));
            }
          }
        }
        break;
    }
  }
  else
  {
    MR_Word LookAheadVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_16, (MR_Integer) 0))));
    MR_Word LookAheadTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_16, (MR_Integer) 1))));
    MR_Integer SeqNum_43;
    MR_Word MaybeItemOrMarker_44;

    mercury__counter__allocate_3_p_0(&SeqNum_43, STATE_VARIABLE_SeqNumCounter_0_25, STATE_VARIABLE_SeqNumCounter_26);
    parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_17, LookAheadVarSet_23, LookAheadTerm_24, SeqNum_43, &MaybeItemOrMarker_44);
    if (((MR_tag((MR_Word) MaybeItemOrMarker_44)) == (MR_Integer) 0))
    {
      MR_Word Specs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_44, (MR_Integer) 0))));
      MR_Word Var_48;

      Var_48 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *ReadIOMResult_18 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LookAheadVarSet_23));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LookAheadTerm_24));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_46));
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_48));
      }
    }
    else
    {
      MR_Word ItemOrMarker_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_44, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ReadIOMResult_18 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (LookAheadVarSet_23));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LookAheadTerm_24));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_45));
      }
    }
    *STATE_VARIABLE_LineContext_28 = STATE_VARIABLE_LineContext_0_27;
    *STATE_VARIABLE_LinePosn_30 = STATE_VARIABLE_LinePosn_0_29;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_module_header_13_p_0(
  MR_String FileString_14,
  MR_Integer MaxOffset_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_String SourceFileName_18,
  MR_Word * MaybeModuleHeader_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_33,
  MR_Word * STATE_VARIABLE_Specs_34,
  MR_Word * STATE_VARIABLE_Errors_35,
  MR_Word STATE_VARIABLE_LineContext_0_36,
  MR_Word * STATE_VARIABLE_LineContext_37,
  MR_Word STATE_VARIABLE_LinePosn_0_38,
  MR_Word * STATE_VARIABLE_LinePosn_39)
{
  {
    MR_Word ModuleDeclPresent_25;
    MR_Word STATE_VARIABLE_Errors_41_41;
    MR_Word STATE_VARIABLE_SeqNumCounter_43_43;
    MR_Word STATE_VARIABLE_Specs_47_47;
    MR_Word STATE_VARIABLE_Errors_48_48;
    MR_String _SourceFileName_26;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_41_41);
    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_43_43);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_19_p_0(FileString_14, MaxOffset_15, DefaultModuleName_16, DefaultExpectationContexts_17, &ModuleDeclPresent_25, (MR_Integer) 0, SourceFileName_18, &_SourceFileName_26, STATE_VARIABLE_SeqNumCounter_43_43, STATE_VARIABLE_SeqNumCounter_33, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_47_47, STATE_VARIABLE_Errors_41_41, &STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_LineContext_0_36, STATE_VARIABLE_LineContext_37, STATE_VARIABLE_LinePosn_0_38, STATE_VARIABLE_LinePosn_39);
    switch (MR_tag((MR_Word) ModuleDeclPresent_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LookAhead_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_25, (MR_Integer) 0))));
          MR_Word LookAheadContext_28;
          MR_Word Var_56;
          MR_Word Spec_69;

          if ((LookAhead_27 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              LookAheadContext_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LookAheadContext_28, 0) = ((MR_Box) (SourceFileName_18));
              MR_hl_field(MR_mktag(0), LookAheadContext_28, 1) = ((MR_Box) ((MR_Integer) 1));
            }
          else
          {
            MR_Word LookAheadTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LookAhead_27, (MR_Integer) 1))));

            LookAheadContext_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LookAheadTerm_30);
          }
          {
            Spec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_missing_module_start\'/5"));
            MR_hl_field(MR_mktag(1), Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_69, 3) = ((MR_Box) (LookAheadContext_28));
            MR_hl_field(MR_mktag(1), Spec_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[70])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_34 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_69));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_47_47));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_35);
          Var_56 = mercury__term__context_init_0_f_0();
          *MaybeModuleHeader_19 = (MR_Word) ((MR_Word) (Var_56));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_25, (MR_Integer) 0))));
          MR_Word ModuleNameContext_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_25, (MR_Integer) 1))));

          parse_tree__parse_module__report_wrong_module_start_7_p_0(ModuleNameContext_32, DefaultModuleName_16, ModuleName_31, STATE_VARIABLE_Specs_47_47, STATE_VARIABLE_Specs_34, STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_35);
          *MaybeModuleHeader_19 = (MR_Word) ((MR_Word) (ModuleNameContext_32));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_25, (MR_Integer) 0))));
          MR_Word ModuleNameContext_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_25, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleHeader_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_57));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_58));
          }
          *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_47_47;
          *STATE_VARIABLE_Errors_35 = STATE_VARIABLE_Errors_48_48;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__report_wrong_module_start_7_p_0(
  MR_Word FirstContext_8,
  MR_Word Expected_9,
  MR_Word Actual_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16,
  MR_Word STATE_VARIABLE_Errors_0_17,
  MR_Word * STATE_VARIABLE_Errors_18)
{
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Expected_9));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Actual_10));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[87])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[86])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_21));
    }
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_wrong_module_start\'/7"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (FirstContext_8));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_0_17, STATE_VARIABLE_Errors_18);
  }
}

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_opt_3_p_0(
  MR_Word OptFileKind_4,
  MR_Word ModuleName_5,
  MR_Word * ParseTree_6)
{
  {
    MR_Word Var_7;

    Var_7 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(
  MR_Word IntFileKind_4,
  MR_Word ModuleName_5,
  MR_Word * ParseTree_6)
{
  {
    MR_Word Var_7;

    Var_7 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__make_dummy_parse_tree_src_2_p_0(
  MR_Word ModuleName_3,
  MR_Word * ParseTree_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;

    Var_5 = mercury__term__context_init_0_f_0();
    Var_6 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_6));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__expectation_context_to_msg_2_p_0(
  MR_Word Context_3,
  MR_Word * SubMsg_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SubMsg_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_3));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[9])));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_46;
    MR_Word conv1_STATE_VARIABLE_Errors_47;

    parse_tree__parse_module__read_parse_tree_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_46, &conv1_STATE_VARIABLE_Errors_47);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_46));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_47));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_opt_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_9_p_0(
  MR_Word Globals_10,
  MR_String FileName_11,
  MR_Word DefaultModuleName_12,
  MR_Word DefaultExpectationContexts_13,
  MR_Word * ParseTreeTransOpt_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_Word Dirs_18;
    MR_Word MaybeFileNameAndStream_19;
    MR_Word ParseTreeOpt_21;
    MR_Word ItemSpecs_22;
    MR_Word ModuleName_23;
    MR_Word NameSpecs_24;
    MR_Word Specs0_25;
    MR_Word Var_20;
    MR_Box conv4_ParseTreeOpt_21;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 679, &Dirs_18);
    libs__file_util__search_for_file_and_stream_5_p_0(Dirs_18, FileName_11, &MaybeFileNameAndStream_19);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_10, DefaultModuleName_12, DefaultExpectationContexts_13, MaybeFileNameAndStream_19, (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]), &Var_20, (MR_Word) (&parse_tree__parse_module_scalar_common_7[10]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[11]), &conv4_ParseTreeOpt_21, &ItemSpecs_22, Errors_16);
    ParseTreeOpt_21 = ((MR_Word) (conv4_ParseTreeOpt_21));
    ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_21, (MR_Integer) 0))));
    parse_tree__parse_module__check_module_has_expected_name_6_p_0(FileName_11, DefaultModuleName_12, DefaultExpectationContexts_13, ModuleName_23, (MR_Word) ((MR_Unsigned) 0U), &NameSpecs_24);
    Specs0_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_22, NameSpecs_24);
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(ParseTreeOpt_21, ParseTreeTransOpt_14, Specs0_25, Specs_15);
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_46;
    MR_Word conv1_STATE_VARIABLE_Errors_47;

    parse_tree__parse_module__read_parse_tree_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_46, &conv1_STATE_VARIABLE_Errors_47);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_46));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_47));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_opt_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_9_p_0(
  MR_Word Globals_10,
  MR_String FileName_11,
  MR_Word DefaultModuleName_12,
  MR_Word DefaultExpectationContexts_13,
  MR_Word * ParseTreePlainOpt_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_Word Dirs_18;
    MR_Word MaybeFileNameAndStream_19;
    MR_Word ParseTreeOpt_21;
    MR_Word ItemSpecs_22;
    MR_Word ModuleName_23;
    MR_Word NameSpecs_24;
    MR_Word Specs0_25;
    MR_Word Var_20;
    MR_Box conv4_ParseTreeOpt_21;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 679, &Dirs_18);
    libs__file_util__search_for_file_and_stream_5_p_0(Dirs_18, FileName_11, &MaybeFileNameAndStream_19);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_10, DefaultModuleName_12, DefaultExpectationContexts_13, MaybeFileNameAndStream_19, (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]), &Var_20, (MR_Word) (&parse_tree__parse_module_scalar_common_7[8]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[9]), &conv4_ParseTreeOpt_21, &ItemSpecs_22, Errors_16);
    ParseTreeOpt_21 = ((MR_Word) (conv4_ParseTreeOpt_21));
    ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_21, (MR_Integer) 0))));
    parse_tree__parse_module__check_module_has_expected_name_6_p_0(FileName_11, DefaultModuleName_12, DefaultExpectationContexts_13, ModuleName_23, (MR_Word) ((MR_Unsigned) 0U), &NameSpecs_24);
    Specs0_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_22, NameSpecs_24);
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(ParseTreeOpt_21, ParseTreePlainOpt_14, Specs0_25, Specs_15);
  }
}

static void MR_CALL 
parse_tree__parse_module__check_module_has_expected_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_SubMsg_4;

    parse_tree__parse_module__expectation_context_to_msg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SubMsg_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_SubMsg_4));
  }
}

void MR_CALL 
parse_tree__parse_module__check_module_has_expected_name_6_p_0(
  MR_String FileName_7,
  MR_Word ExpectedName_8,
  MR_Word ExpectationContexts_9,
  MR_Word ActualName_10,
  MR_Word MaybeActualContext_11,
  MR_Word * Specs_12)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ActualName_10, ExpectedName_8);
    if (succeeded)
      *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Spec_13;
      MR_Word MaybeContext_23;
      MR_Word MainPieces_24;
      MR_Word MainMsg_25;
      MR_Word SortedExpectationContexts0_26;
      MR_Word SortedExpectationContexts_27;
      MR_Word SubMsgs_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_60;
      MR_Word Var_67;
      MR_Word ActualContext_22;

      succeeded = (MaybeActualContext_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ActualContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualContext_11, (MR_Integer) 0))));
        succeeded = mercury__term__is_dummy_context_1_p_0(ActualContext_22);
        succeeded = !(succeeded);
      }
      if (succeeded)
        MaybeContext_23 = MaybeActualContext_11;
      else
        MaybeContext_23 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (FileName_7));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ExpectedName_8));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (ActualName_10));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[83])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        MainPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), MainPieces_24, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (MainPieces_24));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainMsg_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MainMsg_25, 0) = ((MR_Box) (MaybeContext_23));
        MR_hl_field(MR_mktag(2), MainMsg_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), MainMsg_25, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), MainMsg_25, 3) = ((MR_Box) (Var_57));
      }
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ExpectationContexts_9, &SortedExpectationContexts0_26);
      Var_60 = mercury__term__context_init_0_f_0();
      mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedExpectationContexts0_26, ((MR_Box) (Var_60)), &SortedExpectationContexts_27);
      mercury__list__map_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_4[3]), SortedExpectationContexts_27, &SubMsgs_28);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MainMsg_25));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (SubMsgs_28));
      }
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
        MR_hl_field(MR_mktag(2), Spec_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 30) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Spec_13, 3) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(2), Spec_13, 4) = ((MR_Box) (Var_67));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_Word Globals_14,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeModuleTimestampRes_19,
  MR_Word * ParseTreeInt_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22)
{
  switch (IntFileKind_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_24;

        parse_tree__parse_module__actually_read_module_int0_11_p_0(Globals_14, DefaultModuleName_15, DefaultExpectationContexts_16, MaybeFileNameAndStream_17, ReadModuleAndTimestamps_18, MaybeModuleTimestampRes_19, &ParseTreeInt0_24, Specs_21, Errors_22);
        *ParseTreeInt_20 = parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0(ParseTreeInt0_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_25;

        parse_tree__parse_module__actually_read_module_int1_11_p_0(Globals_14, DefaultModuleName_15, DefaultExpectationContexts_16, MaybeFileNameAndStream_17, ReadModuleAndTimestamps_18, MaybeModuleTimestampRes_19, &ParseTreeInt1_25, Specs_21, Errors_22);
        *ParseTreeInt_20 = parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0(ParseTreeInt1_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_26;

        parse_tree__parse_module__actually_read_module_int2_11_p_0(Globals_14, DefaultModuleName_15, DefaultExpectationContexts_16, MaybeFileNameAndStream_17, ReadModuleAndTimestamps_18, MaybeModuleTimestampRes_19, &ParseTreeInt2_26, Specs_21, Errors_22);
        *ParseTreeInt_20 = parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0(ParseTreeInt2_26);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ParseTreeInt3_27;

        parse_tree__parse_module__actually_read_module_int3_11_p_0(Globals_14, DefaultModuleName_15, DefaultExpectationContexts_16, MaybeFileNameAndStream_17, ReadModuleAndTimestamps_18, MaybeModuleTimestampRes_19, &ParseTreeInt3_27, Specs_21, Errors_22);
        *ParseTreeInt_20 = parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0(ParseTreeInt3_27);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_55;
    MR_Word conv1_STATE_VARIABLE_Errors_56;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_55, &conv1_STATE_VARIABLE_Errors_56);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_55));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_56));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_11_p_0(
  MR_Word Globals_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word MaybeFileNameAndStream_15,
  MR_Word ReadModuleAndTimestamps_16,
  MR_Word * MaybeModuleTimestampRes_17,
  MR_Word * ParseTreeInt3_18,
  MR_Word * Specs_19,
  MR_Word * Errors_20)
{
  {
    MR_Word InitParseTreeInt_23;
    MR_Word ReadSpecs_24;
    MR_Word ReadConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_49;
    MR_Box conv4_InitParseTreeInt_23;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[6]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[7]), &conv4_InitParseTreeInt_23, &ReadSpecs_24, Errors_20);
    InitParseTreeInt_23 = ((MR_Word) (conv4_InitParseTreeInt_23));
    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(InitParseTreeInt_23, ParseTreeInt3_18, ReadSpecs_24, &ReadConvertSpecs_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 6, &HaltAtInvalidInterface_49);
    switch (HaltAtInvalidInterface_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Specs_19 = ReadSpecs_24;
        break;
      case (MR_Integer) 1:
        *Specs_19 = ReadConvertSpecs_25;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_55;
    MR_Word conv1_STATE_VARIABLE_Errors_56;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_55, &conv1_STATE_VARIABLE_Errors_56);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_55));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_56));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_11_p_0(
  MR_Word Globals_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word MaybeFileNameAndStream_15,
  MR_Word ReadModuleAndTimestamps_16,
  MR_Word * MaybeModuleTimestampRes_17,
  MR_Word * ParseTreeInt2_18,
  MR_Word * Specs_19,
  MR_Word * Errors_20)
{
  {
    MR_Word InitParseTreeInt_23;
    MR_Word ReadSpecs_24;
    MR_Word ReadConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_49;
    MR_Box conv4_InitParseTreeInt_23;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[4]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[5]), &conv4_InitParseTreeInt_23, &ReadSpecs_24, Errors_20);
    InitParseTreeInt_23 = ((MR_Word) (conv4_InitParseTreeInt_23));
    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(InitParseTreeInt_23, ParseTreeInt2_18, ReadSpecs_24, &ReadConvertSpecs_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 6, &HaltAtInvalidInterface_49);
    switch (HaltAtInvalidInterface_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Specs_19 = ReadSpecs_24;
        break;
      case (MR_Integer) 1:
        *Specs_19 = ReadConvertSpecs_25;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_55;
    MR_Word conv1_STATE_VARIABLE_Errors_56;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_55, &conv1_STATE_VARIABLE_Errors_56);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_55));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_56));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_11_p_0(
  MR_Word Globals_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word MaybeFileNameAndStream_15,
  MR_Word ReadModuleAndTimestamps_16,
  MR_Word * MaybeModuleTimestampRes_17,
  MR_Word * ParseTreeInt1_18,
  MR_Word * Specs_19,
  MR_Word * Errors_20)
{
  {
    MR_Word InitParseTreeInt_23;
    MR_Word ReadSpecs_24;
    MR_Word ReadConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_49;
    MR_Box conv4_InitParseTreeInt_23;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[2]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[3]), &conv4_InitParseTreeInt_23, &ReadSpecs_24, Errors_20);
    InitParseTreeInt_23 = ((MR_Word) (conv4_InitParseTreeInt_23));
    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(InitParseTreeInt_23, ParseTreeInt1_18, ReadSpecs_24, &ReadConvertSpecs_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 6, &HaltAtInvalidInterface_49);
    switch (HaltAtInvalidInterface_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Specs_19 = ReadSpecs_24;
        break;
      case (MR_Integer) 1:
        *Specs_19 = ReadConvertSpecs_25;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_22;
    MR_Word conv2_STATE_VARIABLE_Specs_55;
    MR_Word conv1_STATE_VARIABLE_Errors_56;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_55, &conv1_STATE_VARIABLE_Errors_56);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_55));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_56));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_6;

    parse_tree__parse_module__make_dummy_parse_tree_int_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_6));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_11_p_0(
  MR_Word Globals_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word MaybeFileNameAndStream_15,
  MR_Word ReadModuleAndTimestamps_16,
  MR_Word * MaybeModuleTimestampRes_17,
  MR_Word * ParseTreeInt0_18,
  MR_Word * Specs_19,
  MR_Word * Errors_20)
{
  {
    MR_Word InitParseTreeInt_23;
    MR_Word ReadSpecs_24;
    MR_Word ReadConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_49;
    MR_Box conv4_InitParseTreeInt_23;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[0]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[1]), &conv4_InitParseTreeInt_23, &ReadSpecs_24, Errors_20);
    InitParseTreeInt_23 = ((MR_Word) (conv4_InitParseTreeInt_23));
    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(InitParseTreeInt_23, ParseTreeInt0_18, ReadSpecs_24, &ReadConvertSpecs_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 6, &HaltAtInvalidInterface_49);
    switch (HaltAtInvalidInterface_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Specs_19 = ReadSpecs_24;
        break;
      case (MR_Integer) 1:
        *Specs_19 = ReadConvertSpecs_25;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_20;
    MR_Word conv2_STATE_VARIABLE_Specs_39;
    MR_Word conv1_STATE_VARIABLE_Errors_40;

    parse_tree__parse_module__read_parse_tree_src_11_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_20, &conv2_STATE_VARIABLE_Specs_39, &conv1_STATE_VARIABLE_Errors_40);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_20));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_39));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_40));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTree_4;

    parse_tree__parse_module__make_dummy_parse_tree_src_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ParseTree_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ParseTree_4));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_src_11_p_0(
  MR_Word Globals_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word MaybeFileNameAndStream_15,
  MR_Word ReadModuleAndTimestamps_16,
  MR_Word * MaybeModuleTimestampRes_17,
  MR_Word * ParseTree_18,
  MR_Word * Specs_19,
  MR_Word * Errors_20)
{
  {
    MR_Box conv4_ParseTree_18;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_4[1]), (MR_Word) (&parse_tree__parse_module_scalar_common_4[2]), &conv4_ParseTree_18, Specs_19, Errors_20);
    *ParseTree_18 = ((MR_Word) (conv4_ParseTree_18));
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeModuleTimestampRes_19,
  MR_Word MakeDummyParseTree_20,
  MR_Word ReadParseTree_21,
  MR_Box * ParseTree_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) MaybeFileNameAndStream_17)) == (MR_Integer) 1))
    {
      MR_String ErrorMsg_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

      func_0(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
      *MaybeModuleTimestampRes_19 = (MR_Word) ((MR_Unsigned) 0U);
      parse_tree__parse_module__read_error_msg_4_p_0(ErrorMsg_64, Specs_23);
      *Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word FileStream_27;
      MR_String FileStreamName_28;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      MR_Word OldTimestamp_33;
      MR_Word Var_55;
      MR_Word Var_69;

      FileStream_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
      mercury__io__input_stream_name_4_p_0(FileStream_27, &FileStreamName_28);
      if (((MR_tag((MR_Word) ReadModuleAndTimestamps_18)) == (MR_Integer) 0))
      {
        MR_Word Var_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReadModuleAndTimestamps_18, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_86) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TimestampResult_30;

              mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_30);
              if (((MR_tag((MR_Word) TimestampResult_30)) == (MR_Integer) 1))
              {
                MR_Word Var_52 = (MR_Word) (TimestampResult_30);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
                }
              }
              else
              {
                MR_Word Timestamp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_30, (MR_Integer) 0))));
                MR_Word Var_53;
                MR_Word Var_54;

                Var_54 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_31);
                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            *MaybeModuleTimestampRes_19 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      else
      {
        MR_Word TimestampResult_80;

        mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_80);
        if (((MR_tag((MR_Word) TimestampResult_80)) == (MR_Integer) 1))
        {
          MR_Word Var_71 = (MR_Word) (TimestampResult_80);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_71));
          }
        }
        else
        {
          MR_Word Timestamp_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_80, (MR_Integer) 0))));
          MR_Word Var_73;
          MR_Word Var_74;

          Var_74 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_72);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_73));
          }
        }
      }
      succeeded = ((MR_tag((MR_Word) ReadModuleAndTimestamps_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        OldTimestamp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadModuleAndTimestamps_18, (MR_Integer) 0))));
        succeeded = (*MaybeModuleTimestampRes_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *MaybeModuleTimestampRes_19, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
            succeeded = libs__timestamp____Unify____timestamp_0_0(OldTimestamp_33, Var_69);
          }
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

        func_1(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
        *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_24);
      }
      else
      {
        MR_Word MaybeResult_34;

        mercury__io__read_file_as_string_4_p_0(FileStream_27, &MaybeResult_34);
        if (((MR_tag((MR_Word) MaybeResult_34)) == (MR_Integer) 1))
        {
          MR_Word ErrorCode_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResult_34, (MR_Integer) 1))));
          MR_String ErrorMsg0_41;
          MR_String ErrorMsg_42;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

          func_2(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
          mercury__io__error_message_2_p_0(ErrorCode_40, &ErrorMsg0_41);
          ErrorMsg_42 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_41);
          parse_tree__parse_module__read_error_msg_4_p_0(ErrorMsg_42, Specs_23);
          *Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
        }
        else
        {
          MR_String FileString_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeResult_34, (MR_Integer) 0))));
          MR_Integer MaxOffset_36;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
          MR_Box conv5_Specs_23;
          MR_Box conv4_Errors_24;

          MaxOffset_36 = mercury__string__length_1_f_0(FileString_35);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), ReadParseTree_21, (MR_Integer) 1))));
          func_3(((MR_Box) (ReadParseTree_21)), ((MR_Box) (FileStreamName_28)), ((MR_Box) (FileString_35)), ((MR_Box) (MaxOffset_36)), ((MR_Box) (&parse_tree__parse_module_scalar_common_1[85])), ((MR_Box) (((MR_Box) ((MR_Integer) 0)))), ((MR_Box) (Globals_14)), ((MR_Box) (DefaultModuleName_15)), ((MR_Box) (DefaultExpectationContexts_16)), ParseTree_22, &conv5_Specs_23, &conv4_Errors_24);
          *Specs_23 = ((MR_Word) (conv5_Specs_23));
          *Errors_24 = ((MR_Word) (conv4_Errors_24));
        }
      }
      mercury__io__close_input_3_p_0(FileStream_27);
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_error_msg_4_p_0(
  MR_String ErrorMsg_5,
  MR_Word * Specs_6)
{
  {
    MR_String ProgName_8;
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_33;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_15, 0) = ((MR_Box) (ProgName_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ErrorMsg_5));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[84])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Var_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_28, 3) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_error_msg\'/4"));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 3) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
parse_tree__parse_module__peek_at_file_8_p_0(
  MR_Word FileStream_9,
  MR_Word DefaultModuleName_10,
  MR_Word DefaultExpectationContexts_11,
  MR_String SourceFileName0_12,
  MR_Word * ModuleName_13,
  MR_Word * Specs_14)
{
  {
    MR_Word MaybeResult_16;

    mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_9, &MaybeResult_16);
    if (((MR_tag((MR_Word) MaybeResult_16)) == (MR_Integer) 1))
    {
      MR_Word ErrorCode_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResult_16, (MR_Integer) 2))));
      MR_String ErrorMsg0_33;
      MR_String ErrorMsg_34;
      MR_String ProgName_55;
      MR_Word Pieces_56;
      MR_Word Spec_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_77;
      MR_Word Var_78;

      *ModuleName_13 = DefaultModuleName_10;
      mercury__io__error_message_2_p_0(ErrorCode_32, &ErrorMsg0_33);
      ErrorMsg_34 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_33);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_55);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (ProgName_55));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (ErrorMsg_34));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[84])));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_56, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Pieces_56, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Pieces_56));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Var_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_73, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_73, 3) = ((MR_Box) (Var_77));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_error_msg\'/4"));
        MR_hl_field(MR_mktag(0), Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_57, 3) = ((MR_Box) (Var_72));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_57));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String FileString_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeResult_16, (MR_Integer) 0))));
      MR_Integer MaxOffset_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeResult_16, (MR_Integer) 1))));
      MR_Word SeqNumCounter0_19;
      MR_Word ModuleDeclPresent_22;
      MR_Word Var_47;
      MR_String _SourceFileName_23;
      MR_Word _SeqNumCounter_24;
      MR_Word _Errors_25;
      MR_Word _LineContext_26;
      MR_Word _LinePosn_27;

      mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_19);
      Var_47 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_19_p_0(FileString_17, MaxOffset_18, DefaultModuleName_10, DefaultExpectationContexts_11, &ModuleDeclPresent_22, (MR_Integer) 1, SourceFileName0_12, &_SourceFileName_23, SeqNumCounter0_19, &_SeqNumCounter_24, (MR_Word) ((MR_Unsigned) 0U), Specs_14, Var_47, &_Errors_25, (MR_Word) (&parse_tree__parse_module_scalar_common_1[85]), &_LineContext_26, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_27);
      switch (MR_tag((MR_Word) ModuleDeclPresent_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ModuleName_13 = DefaultModuleName_10;
          break;
        case (MR_Integer) 1:
          *ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_22, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          *ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_22, (MR_Integer) 0))));
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer MaxOffset_21,
  MR_Word DefaultModuleName_23,
  MR_Word DefaultExpectationContexts_24,
  MR_Word * ModuleDeclPresent_25,
  MR_Word MayChangeSourceFileName_26,
  MR_String STATE_VARIABLE_SourceFileName_0_61,
  MR_String * STATE_VARIABLE_SourceFileName_62,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_63,
  MR_Word * STATE_VARIABLE_SeqNumCounter_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66,
  MR_Word STATE_VARIABLE_Errors_0_67,
  MR_Word * STATE_VARIABLE_Errors_68,
  MR_Word STATE_VARIABLE_LineContext_0_69,
  MR_Word * STATE_VARIABLE_LineContext_70,
  MR_Word STATE_VARIABLE_LinePosn_0_71,
  MR_Word * STATE_VARIABLE_LinePosn_72)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstReadTerm_33;
    MR_Word MaybeFirstIOM_34;
    MR_Word STATE_VARIABLE_LineContext_73_73;
    MR_Word STATE_VARIABLE_LinePosn_74_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_SeqNumCounter_76_76;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_SourceFileName_0_61, FileString_20, MaxOffset_21, STATE_VARIABLE_LineContext_0_69, &STATE_VARIABLE_LineContext_73_73, STATE_VARIABLE_LinePosn_0_71, &STATE_VARIABLE_LinePosn_74_74, &FirstReadTerm_33);
    Var_75 = parse_tree__parse_sym_name__root_module_name_0_f_0();
    parse_tree__parse_module__read_term_to_iom_result_6_p_0(Var_75, STATE_VARIABLE_SourceFileName_0_61, FirstReadTerm_33, STATE_VARIABLE_SeqNumCounter_0_63, &STATE_VARIABLE_SeqNumCounter_76_76, &MaybeFirstIOM_34);
    switch (MR_tag((MR_Word) MaybeFirstIOM_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FirstContext_104;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_61, (MR_Integer) 1, &FirstContext_104);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_104, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
          *ModuleDeclPresent_25 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[1]);
          *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
          *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
          *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
          *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstContext_104;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_61, (MR_Integer) 1, &FirstContext_104);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_104, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
          *ModuleDeclPresent_25 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[1]);
          *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
          *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
          *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
          *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LookAhead_59;
          MR_Word FirstVarSet_101 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_34, (MR_Integer) 0))));
          MR_Word FirstTerm_102 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_34, (MR_Integer) 1))));
          MR_Word FirstContext_103;

          FirstContext_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_102);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_103, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
          {
            LookAhead_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LookAhead_59, 0) = ((MR_Box) (FirstVarSet_101));
            MR_hl_field(MR_mktag(1), LookAhead_59, 1) = ((MR_Box) (FirstTerm_102));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_25 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LookAhead_59));
          }
          *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
          *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
          *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
          *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FirstVarSet_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_34, (MR_Integer) 0))));
          MR_Word FirstTerm_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_34, (MR_Integer) 1))));
          MR_Word FirstIOM_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_34, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) FirstIOM_37)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word FirstContext_99;
                MR_Word FirstLookAhead_100;

                FirstContext_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_36);
                parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_99, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
                {
                  FirstLookAhead_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_100, 0) = ((MR_Box) (FirstVarSet_35));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_100, 1) = ((MR_Box) (FirstTerm_36));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *ModuleDeclPresent_25 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_100));
                }
                *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
                *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
                *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
                *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstIOM_37, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                  {
                    MR_Word FirstContext_99;
                    MR_Word FirstLookAhead_100;

                    FirstContext_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_36);
                    parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_99, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
                    {
                      FirstLookAhead_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_100, 0) = ((MR_Box) (FirstVarSet_35));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_100, 1) = ((MR_Box) (FirstTerm_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *ModuleDeclPresent_25 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_100));
                    }
                    *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
                    *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
                    *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
                    *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_89_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), FirstIOM_37, (MR_Integer) 1))));

                    switch (MayChangeSourceFileName_26) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_61 = STATE_VARIABLE_SourceFileName_89_89;
                          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_63 = STATE_VARIABLE_SeqNumCounter_76_76;
                          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_69 = STATE_VARIABLE_LineContext_73_73;
                          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_71 = STATE_VARIABLE_LinePosn_74_74;

                          // direct tailcall eliminated
                          ;
                          STATE_VARIABLE_SourceFileName_0_61 = next_value_of_STATE_VARIABLE_SourceFileName_0_61;
                          STATE_VARIABLE_SeqNumCounter_0_63 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_63;
                          STATE_VARIABLE_LineContext_0_69 = next_value_of_STATE_VARIABLE_LineContext_0_69;
                          STATE_VARIABLE_LinePosn_0_71 = next_value_of_STATE_VARIABLE_LinePosn_0_71;
                          continue;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word FirstContext_38;
                          MR_Word FirstLookAhead_39;

                          FirstContext_38 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_36);
                          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_38, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
                          {
                            FirstLookAhead_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), FirstLookAhead_39, 0) = ((MR_Box) (FirstVarSet_35));
                            MR_hl_field(MR_mktag(1), FirstLookAhead_39, 1) = ((MR_Box) (FirstTerm_36));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            *ModuleDeclPresent_25 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_39));
                          }
                          *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_89_89;
                          *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
                          *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
                          *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word StartModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_37, (MR_Integer) 1))));
                    MR_Word ModuleNameContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_37, (MR_Integer) 2))));

                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_23, StartModuleName_40);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_25 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (StartModuleName_40));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_41));
                      }
                      *STATE_VARIABLE_Errors_68 = STATE_VARIABLE_Errors_0_67;
                      *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                    }
                    else
                    {
                      MR_Word NameSpec_44;
                      MR_Word Var_85;

                      {
                        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (ModuleNameContext_41));
                      }
                      parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_61, DefaultModuleName_23, DefaultExpectationContexts_24, StartModuleName_40, Var_85, &NameSpec_44);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_Specs_66 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_44));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_65));
                      }
                      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_25 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartModuleName_40));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_41));
                      }
                    }
                    *STATE_VARIABLE_SourceFileName_62 = STATE_VARIABLE_SourceFileName_0_61;
                    *STATE_VARIABLE_SeqNumCounter_64 = STATE_VARIABLE_SeqNumCounter_76_76;
                    *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_73_73;
                    *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_74_74;
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__report_missing_module_start_5_p_0(
  MR_Word FirstContext_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12,
  MR_Word STATE_VARIABLE_Errors_0_13,
  MR_Word * STATE_VARIABLE_Errors_14)
{
  {
    MR_Word Spec_10;

    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_missing_module_start\'/5"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (FirstContext_6));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[70])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_0_13, STATE_VARIABLE_Errors_14);
  }
}

static void MR_CALL 
parse_tree__parse_module__read_term_to_iom_result_6_p_0(
  MR_Word ModuleName_7,
  MR_String FileName_8,
  MR_Word ReadTermResult_9,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_20,
  MR_Word * ReadIOMResult_11)
{
  switch (MR_tag((MR_Word) ReadTermResult_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ReadIOMResult_11 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_20 = STATE_VARIABLE_SeqNumCounter_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ErrorMsg_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTermResult_9, (MR_Integer) 0))));
        MR_Integer LineNumber_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ReadTermResult_9, (MR_Integer) 1))));
        MR_Word Context_14;
        MR_Word Pieces_15;
        MR_Word Spec_16;
        MR_Word Var_22;

        Context_14 = mercury__term__context_init_2_f_0(FileName_8, LineNumber_13);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ErrorMsg_12));
        }
        {
          Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
        }
        {
          Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
          MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ReadIOMResult_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        }
        *STATE_VARIABLE_SeqNumCounter_20 = STATE_VARIABLE_SeqNumCounter_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_9, (MR_Integer) 0))));
        MR_Word Term_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_9, (MR_Integer) 1))));
        MR_Integer SeqNum_39;
        MR_Word MaybeItemOrMarker_40;

        mercury__counter__allocate_3_p_0(&SeqNum_39, STATE_VARIABLE_SeqNumCounter_0_19, STATE_VARIABLE_SeqNumCounter_20);
        parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_7, VarSet_17, Term_18, SeqNum_39, &MaybeItemOrMarker_40);
        if (((MR_tag((MR_Word) MaybeItemOrMarker_40)) == (MR_Integer) 0))
        {
          MR_Word Specs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_40, (MR_Integer) 0))));
          MR_Word Var_44;

          Var_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_18));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_42));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_44));
          }
        }
        else
        {
          MR_Word ItemOrMarker_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_40, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_41));
          }
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_SubMsg_4;

    parse_tree__parse_module__expectation_context_to_msg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SubMsg_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_SubMsg_4));
  }
}

static void MR_CALL 
parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(
  MR_String FileName_7,
  MR_Word ExpectedName_8,
  MR_Word ExpectationContexts_9,
  MR_Word ActualName_10,
  MR_Word MaybeActualContext_11,
  MR_Word * Spec_12)
{
  {
    MR_bool succeeded = (MaybeActualContext_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word MaybeContext_14;
    MR_Word MainPieces_15;
    MR_Word MainMsg_16;
    MR_Word SortedExpectationContexts0_17;
    MR_Word SortedExpectationContexts_18;
    MR_Word SubMsgs_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_58;
    MR_Word ActualContext_13;

    if (succeeded)
    {
      ActualContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualContext_11, (MR_Integer) 0))));
      succeeded = mercury__term__is_dummy_context_1_p_0(ActualContext_13);
      succeeded = !(succeeded);
    }
    if (succeeded)
      MaybeContext_14 = MaybeActualContext_11;
    else
      MaybeContext_14 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (FileName_7));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (ExpectedName_8));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (ActualName_10));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[79])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MainPieces_15));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MainMsg_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MainMsg_16, 0) = ((MR_Box) (MaybeContext_14));
      MR_hl_field(MR_mktag(2), MainMsg_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), MainMsg_16, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), MainMsg_16, 3) = ((MR_Box) (Var_48));
    }
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ExpectationContexts_9, &SortedExpectationContexts0_17);
    Var_51 = mercury__term__context_init_0_f_0();
    mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedExpectationContexts0_17, ((MR_Box) (Var_51)), &SortedExpectationContexts_18);
    mercury__list__map_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_4[0]), SortedExpectationContexts_18, &SubMsgs_19);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MainMsg_16));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (SubMsgs_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Spec_12 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
      MR_hl_field(MR_mktag(2), base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 30) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Var_58));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____may_change_source_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____may_change_source_file_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____may_change_source_file_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____maybe_lookahead_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____maybe_module_decl_present_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____maybe_module_decl_present_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____maybe_module_header_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____maybe_module_header_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____maybe_require_module_decl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____maybe_require_module_decl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____missing_section_start_warning_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____missing_section_start_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____read_iom_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____read_iom_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____read_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____read_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_module____Unify____version_number_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_module____Compare____version_number_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_module__init(void)
{
}

void mercury__parse_tree__parse_module__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_make_dummy_parse_tree_1);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_may_change_source_file_name_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_decl_present_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_header_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_require_module_decl_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_missing_section_start_warning_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_iom_result_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_parse_tree_1);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_version_number_info_0);
}

void mercury__parse_tree__parse_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_module.
