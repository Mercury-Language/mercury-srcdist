/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2024-01-26
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_item.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_may_change_source_file_name_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_may_change_source_file_name_0[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_lookahead_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[3];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[3];

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

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_maybe_require_module_decl_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_missing_section_start_warning_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2[3];

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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__parse_module____vpti_pred_9__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0__pseudo_maybe__pti_maybe_1__pseudo_1__plain_parse_tree__parse_error__type_ctor_info_read_module_errors_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_1[2];

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_version_number_result_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_result_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_result_0[2];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_result_0[2];

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__582__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__579__1_1_p_0(
  MR_Word InclsCord_26);

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_result_0_0(
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
parse_tree__parse_module____Compare____missing_section_start_warning_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____missing_section_start_warning_0_0(
  MR_Word HeadVar__1_1,
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

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____may_change_source_file_name_0_0(
  MR_Word HeadVar__1_1,
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
parse_tree__parse_module__read_parse_tree_src_9_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_32,
  MR_String FileString_11,
  MR_Integer FileStringLen_12,
  MR_Word STATE_VARIABLE_LineContext_0_33,
  MR_Word STATE_VARIABLE_LinePosn_0_34,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * STATE_VARIABLE_Errors_35);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_components_20_p_0(
  MR_String FileString_21,
  MR_Integer FileStringLen_22,
  MR_Word CurModuleName_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_81,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_82,
  MR_Word * STATE_VARIABLE_ModuleComponents_83,
  MR_String STATE_VARIABLE_SourceFileName_0_84,
  MR_String * STATE_VARIABLE_SourceFileName_85,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_86,
  MR_Word * STATE_VARIABLE_SeqNumCounter_87,
  MR_Word STATE_VARIABLE_Errors_0_88,
  MR_Word * STATE_VARIABLE_Errors_89,
  MR_Word STATE_VARIABLE_LineContext_0_90,
  MR_Word * STATE_VARIABLE_LineContext_91,
  MR_Word STATE_VARIABLE_LinePosn_0_92,
  MR_Word * STATE_VARIABLE_LinePosn_93);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_submodule_21_p_0(
  MR_String FileString_22,
  MR_Integer FileStringLen_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word ContainingModuleName_26,
  MR_Word StartModuleName_27,
  MR_Word StartContext_28,
  MR_Word InitLookAhead_29,
  MR_Word * FinalLookAhead_30,
  MR_Word STATE_VARIABLE_ModuleComponents_0_46,
  MR_Word * STATE_VARIABLE_ModuleComponents_47,
  MR_String STATE_VARIABLE_SourceFileName_0_48,
  MR_String * STATE_VARIABLE_SourceFileName_49,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_50,
  MR_Word * STATE_VARIABLE_SeqNumCounter_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53,
  MR_Word STATE_VARIABLE_LineContext_0_54,
  MR_Word * STATE_VARIABLE_LineContext_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word * STATE_VARIABLE_LinePosn_57);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_8_p_0(
  MR_Word CurModuleName_9,
  MR_Word ContainingModules_10,
  MR_Word ReadIOMResult_11,
  MR_Word EndedModuleName_12,
  MR_Word EndContext_13,
  MR_Word * FinalLookAhead_14,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19);

static MR_bool MR_CALL 
parse_tree__parse_module__is_for_containing_module_2_p_0(
  MR_Word EndedModuleName_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(
  MR_Word CurModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_13,
  MR_Word * STATE_VARIABLE_MissingStartSectionWarning_14,
  MR_Word STATE_VARIABLE_Errors_0_15,
  MR_Word * STATE_VARIABLE_Errors_16);

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
parse_tree__parse_module__read_parse_tree_int_10_p_0(
  MR_Word IntFileKind_11,
  MR_String SourceFileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_30,
  MR_Word STATE_VARIABLE_LinePosn_0_31,
  MR_Word DefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * MaybeParseTreeInt_19,
  MR_Word * STATE_VARIABLE_Errors_32);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_sections_17_p_0(
  MR_String FileString_18,
  MR_Integer FileStringLen_19,
  MR_Word ModuleName_20,
  MR_Word ModuleNameContext_21,
  MR_Word IntFileKind_22,
  MR_String SourceFileName_23,
  MR_Word MaybeVersionNumbers_24,
  MR_Word STATE_VARIABLE_LookAhead_0_52,
  MR_Word * STATE_VARIABLE_LookAhead_53,
  MR_Word * MaybeParseTreeInt_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_54,
  MR_Word * STATE_VARIABLE_SeqNumCounter_55,
  MR_Word * STATE_VARIABLE_Errors_56,
  MR_Word STATE_VARIABLE_LineContext_0_57,
  MR_Word * STATE_VARIABLE_LineContext_58,
  MR_Word STATE_VARIABLE_LinePosn_0_59,
  MR_Word * STATE_VARIABLE_LinePosn_60);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_section_16_p_0(
  MR_String FileString_17,
  MR_Integer FileStringLen_18,
  MR_Word ModuleName_19,
  MR_String SourceFileName_20,
  MR_String ExpectedSectionKindStr_21,
  MR_Word InitLookAhead_22,
  MR_Word * FinalLookAhead_23,
  MR_Word * MaybeRawItemBlock_24,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_64,
  MR_Word * STATE_VARIABLE_SeqNumCounter_65,
  MR_Word STATE_VARIABLE_Errors_0_66,
  MR_Word * STATE_VARIABLE_Errors_67,
  MR_Word STATE_VARIABLE_LineContext_0_68,
  MR_Word * STATE_VARIABLE_LineContext_69,
  MR_Word STATE_VARIABLE_LinePosn_0_70,
  MR_Word * STATE_VARIABLE_LinePosn_71);

static void MR_CALL 
parse_tree__parse_module__get_next_item_or_marker_12_p_0(
  MR_String FileName_13,
  MR_String FileString_14,
  MR_Integer FileStringLen_15,
  MR_Word InitLookAhead_16,
  MR_Word ModuleName_17,
  MR_Word * ReadIOMResult_18,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_22,
  MR_Word * STATE_VARIABLE_SeqNumCounter_23,
  MR_Word STATE_VARIABLE_LineContext_0_24,
  MR_Word * STATE_VARIABLE_LineContext_25,
  MR_Word STATE_VARIABLE_LinePosn_0_26,
  MR_Word * STATE_VARIABLE_LinePosn_27);

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0(
  MR_Word OptFileKind_11,
  MR_String SourceFileName0_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_38,
  MR_Word STATE_VARIABLE_LinePosn_0_39,
  MR_Word DefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * MaybeParseTree_19,
  MR_Word * STATE_VARIABLE_Errors_40);

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(
  MR_String SourceFileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word ModuleName_15,
  MR_Word FileKind_16,
  MR_Word FinalLookAhead_17,
  MR_Word SeqNumCounter0_18,
  MR_Word STATE_VARIABLE_Errors_0_33,
  MR_Word * STATE_VARIABLE_Errors_34,
  MR_Word STATE_VARIABLE_LineContext_0_35,
  MR_Word STATE_VARIABLE_LinePosn_0_36);

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_23_p_0(
  MR_String FileString_24,
  MR_Integer FileStringLen_25,
  MR_Word ModuleName_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_InclsCord_0_41,
  MR_Word * STATE_VARIABLE_InclsCord_42,
  MR_Word STATE_VARIABLE_AvailsCord_0_43,
  MR_Word * STATE_VARIABLE_AvailsCord_44,
  MR_Word STATE_VARIABLE_FIMsCord_0_45,
  MR_Word * STATE_VARIABLE_FIMsCord_46,
  MR_Word STATE_VARIABLE_ItemsCord_0_47,
  MR_Word * STATE_VARIABLE_ItemsCord_48,
  MR_String STATE_VARIABLE_SourceFileName_0_49,
  MR_String * STATE_VARIABLE_SourceFileName_50,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_51,
  MR_Word * STATE_VARIABLE_SeqNumCounter_52,
  MR_Word STATE_VARIABLE_Errors_0_53,
  MR_Word * STATE_VARIABLE_Errors_54,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word * STATE_VARIABLE_LineContext_56,
  MR_Word STATE_VARIABLE_LinePosn_0_57,
  MR_Word * STATE_VARIABLE_LinePosn_58);

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_inner_25_p_0(
  MR_String FileString_26,
  MR_Integer FileStringLen_27,
  MR_Word ModuleName_28,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_70,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_71,
  MR_Word ReadIOMResult_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_InclsCord_0_72,
  MR_Word * STATE_VARIABLE_InclsCord_73,
  MR_Word STATE_VARIABLE_AvailsCord_0_74,
  MR_Word * STATE_VARIABLE_AvailsCord_75,
  MR_Word STATE_VARIABLE_FIMsCord_0_76,
  MR_Word * STATE_VARIABLE_FIMsCord_77,
  MR_Word STATE_VARIABLE_ItemsCord_0_78,
  MR_Word * STATE_VARIABLE_ItemsCord_79,
  MR_String STATE_VARIABLE_SourceFileName_0_80,
  MR_String * STATE_VARIABLE_SourceFileName_81,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_82,
  MR_Word * STATE_VARIABLE_SeqNumCounter_83,
  MR_Word STATE_VARIABLE_Errors_0_84,
  MR_Word * STATE_VARIABLE_Errors_85,
  MR_Word STATE_VARIABLE_LineContext_0_86,
  MR_Word * STATE_VARIABLE_LineContext_87,
  MR_Word STATE_VARIABLE_LinePosn_0_88,
  MR_Word * STATE_VARIABLE_LinePosn_89);

static void MR_CALL 
parse_tree__parse_module__read_next_item_or_marker_11_p_0(
  MR_String FileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word ModuleName_15,
  MR_Word * ReadIOMResult_16,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_21,
  MR_Word * STATE_VARIABLE_SeqNumCounter_22,
  MR_Word STATE_VARIABLE_LineContext_0_23,
  MR_Word * STATE_VARIABLE_LineContext_24,
  MR_Word STATE_VARIABLE_LinePosn_0_25,
  MR_Word * STATE_VARIABLE_LinePosn_26);

static void MR_CALL 
parse_tree__parse_module__read_module_header_11_p_0(
  MR_String FileString_12,
  MR_Integer FileStringLen_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_String SourceFileName_16,
  MR_Word * MaybeModuleHeader_17,
  MR_Word * STATE_VARIABLE_SeqNumCounter_32,
  MR_Word STATE_VARIABLE_LineContext_0_33,
  MR_Word * STATE_VARIABLE_LineContext_34,
  MR_Word STATE_VARIABLE_LinePosn_0_35,
  MR_Word * STATE_VARIABLE_LinePosn_36);

static void MR_CALL 
parse_tree__parse_module__expectation_context_to_msg_2_p_0(
  MR_Word Context_3,
  MR_Word * SubMsg_4);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_112_108_97_105_110_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_115_114_99_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(
  MR_Word FileNameAndStream_11,
  MR_Word DefaultModuleName_12,
  MR_Word DefaultExpectationContexts_13,
  MR_Word ReadModuleAndTimestamps_14,
  MR_Word * MaybeModuleTimestampRes_15,
  MR_Word ReadParseTree_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * Errors_18);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(
  MR_String FileString_16,
  MR_Integer FileStringLen_17,
  MR_Word DefaultModuleName_19,
  MR_Word DefaultExpectationContexts_20,
  MR_Word * ModuleDeclPresent_21,
  MR_Word MayChangeSourceFileName_22,
  MR_String STATE_VARIABLE_SourceFileName_0_56,
  MR_String * STATE_VARIABLE_SourceFileName_57,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_58,
  MR_Word * STATE_VARIABLE_SeqNumCounter_59,
  MR_Word STATE_VARIABLE_LineContext_0_60,
  MR_Word * STATE_VARIABLE_LineContext_61,
  MR_Word STATE_VARIABLE_LinePosn_0_62,
  MR_Word * STATE_VARIABLE_LinePosn_63);

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
parse_tree__parse_module____Unify____version_number_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[90][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[2][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][12];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][13];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[7][4];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[90][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "interface sections."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not have two consecutive"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an interface file"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected the start of an"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "section, got"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "automatically generated interface files."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not appear anywhere except in"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[87])))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_115_114_99_95_95_91_49_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_src_0)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[7][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int0_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int1_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int2_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_int3_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_112_108_97_105_110_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__plain_parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0) }
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "make_dummy_parse_tree",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_0 = {
  (MR_String) "may_not_change_source_file_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_may_change_source_file_name_0_1 = {
  (MR_String) "may_change_source_file_name",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_may_change_source_file_name_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____may_change_source_file_name_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____may_change_source_file_name_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "may_change_source_file_name",
  { parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0 },
  { parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_may_change_source_file_name_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_may_change_source_file_name_0,

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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_lookahead_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_iom_result_0) };

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1 = {
  (MR_String) "lookahead",
  INT16_C(1),
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

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_1 };

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_lookahead",
  { parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0 },
  { parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0 = {
  (MR_String) "no_module_decl_present",
  INT16_C(3),
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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1 = {
  (MR_String) "wrong_module_decl_present",
  INT16_C(3),
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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2 };

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_module_decl_present",
  { parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0 },
  { parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0) };

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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_0[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_1[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_1 };

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_header_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_module_header_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_module_header_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_module_header",
  { parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_header_0 },
  { parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_header_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_maybe_require_module_decl_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_require_module_decl",
  { parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0 },
  { parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_maybe_require_module_decl_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_missing_section_start_warning_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "missing_section_start_warning",
  { parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0 },
  { parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_missing_section_start_warning_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0,

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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1 = {
  (MR_String) "read_iom_parse_term_error",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2 = {
  (MR_String) "read_iom_parse_item_errors",
  INT16_C(3),
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

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_3[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_3 };

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____read_iom_result_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_iom_result_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_iom_result",
  { parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0 },
  { parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__parse_module____vpti_pred_9__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0__pseudo_maybe__pti_maybe_1__pseudo_1__plain_parse_tree__parse_error__type_ctor_info_read_module_errors_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0),
    (MR_PseudoTypeInfo) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1term_context__type_ctor_info_term_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__maybe__pti_maybe_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_parse_tree_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____read_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_parse_tree",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_9__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0__pseudo_maybe__pti_maybe_1__pseudo_1__plain_parse_tree__parse_error__type_ctor_info_read_module_errors_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_version_numbers_0) };

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_0 = {
  (MR_String) "vnr_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0)
};

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_version_number_result_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_1 = {
  (MR_String) "vnr_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_1,
  NULL,
  parse_tree__parse_module__parse_tree__parse_module__field_locns_version_number_result_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_0[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_1[1] = { &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_1 };

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_result_0[2] = {
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_1,
  &parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_result_0_0
};

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_version_number_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____version_number_result_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____version_number_result_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "version_number_result",
  { parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_result_0 },
  { parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_result_0,

};

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__582__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_33)), ((MR_Box) (HeadVar__2_61)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__579__1_1_p_0(
  MR_Word InclsCord_26)
{
  MR_bool succeeded;

  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_26);
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_result_0_0(
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
  {
    MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 15);
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word SubResult1_14;

      parse_tree__error_spec____Compare____error_spec_0_0(&SubResult1_14, Var_23, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_Integer Var_25 = (MR_Integer) (Var_22);
        MR_Integer Var_26 = (MR_Integer) (ArgY2_16);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__prog_item____Compare____maybe_version_numbers_0_0(HeadVar__1_1, Var_24, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 15);
      succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = (ArgX2_7 == ArgY2_8);
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
      succeeded = parse_tree__prog_item____Unify____maybe_version_numbers_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
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
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0(
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
parse_tree__parse_module____Unify____missing_section_start_warning_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0(
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

MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_22 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, Var_22, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_14, Var_24, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_23, ArgY2_16);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_57 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_58 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_57 == CastY_58);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;

                parse_tree__parse_module____Compare____maybe_lookahead_0_0(&SubResult1_6, Var_69, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mercury__term_context____Compare____term_context_0_0(&SubResult2_9, Var_68, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                    parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, Var_67, ArgY3_11);
                }
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
          MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_31;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_31, Var_74, ArgY1_30);
                succeeded = (SubResult1_31 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_31;
                else
                {
                  MR_Word SubResult2_34;

                  mercury__term_context____Compare____term_context_0_0(&SubResult2_34, Var_73, ArgY2_33);
                  succeeded = (SubResult2_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_34;
                  else
                    parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, Var_72, ArgY3_36);
                }
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
          MR_Word Var_70 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_53 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_56 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_54;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_54, Var_71, ArgY1_53);
                succeeded = (SubResult1_54 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_54;
                else
                  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_70, ArgY2_56);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
                succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX3_7, ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
                succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX3_13, ArgY3_14);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_17, ArgY2_18);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__parse_module____Compare____read_iom_result_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
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
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, Var_79, ArgY1_13);
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
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_31;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_31, ((MR_Box) (Var_78)), ((MR_Box) (ArgY1_30)));
                succeeded = (SubResult1_31 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_31;
                else
                {
                  MR_Word SubResult2_34;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_34, ((MR_Box) (Var_77)), ((MR_Box) (ArgY2_33)));
                  succeeded = (SubResult2_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_34;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_76)), ((MR_Box) (ArgY3_36)));
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
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_58;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_58, ((MR_Box) (Var_75)), ((MR_Box) (ArgY1_57)));
                succeeded = (SubResult1_58 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_58;
                else
                {
                  MR_Word SubResult2_61;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_61, ((MR_Box) (Var_74)), ((MR_Box) (ArgY2_60)));
                  succeeded = (SubResult2_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_61;
                  else
                    parse_tree__parse_types____Compare____item_or_marker_0_0(HeadVar__1_1, Var_73, ArgY3_63);
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__parse_module____Unify____read_iom_result_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_24_24;
          MR_Word TypeInfo_25_25;
          MR_Word TypeInfo_26_26;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_24_24 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeInfo_22_22;
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_21_21 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
              if (succeeded)
                succeeded = parse_tree__parse_types____Unify____item_or_marker_0_0(ArgX3_17, ArgY3_18);
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0(
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
parse_tree__parse_module____Unify____may_change_source_file_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_9_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_32,
  MR_String FileString_11,
  MR_Integer FileStringLen_12,
  MR_Word STATE_VARIABLE_LineContext_0_33,
  MR_Word STATE_VARIABLE_LinePosn_0_34,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * STATE_VARIABLE_Errors_35)
{
  MR_Word ModuleDeclPresent_20;
  MR_Word InitLookAhead_21;
  MR_Word ModuleName_24;
  MR_Word ModuleNameContext_25;
  MR_Word FinalLookAhead_29;
  MR_Word ModuleComponents_30;
  MR_Word ParseTree_31;
  MR_Word STATE_VARIABLE_Errors_36_36;
  MR_Word STATE_VARIABLE_SeqNumCounter_38_38;
  MR_String STATE_VARIABLE_SourceFileName_41_41;
  MR_Word STATE_VARIABLE_SeqNumCounter_42_42;
  MR_Word STATE_VARIABLE_LineContext_43_43;
  MR_Word STATE_VARIABLE_LinePosn_44_44;
  MR_Word STATE_VARIABLE_Errors_47_47;
  MR_Word Var_54;
  MR_String STATE_VARIABLE_SourceFileName_55_55;
  MR_Word STATE_VARIABLE_SeqNumCounter_56_56;
  MR_Word STATE_VARIABLE_Errors_57_57;
  MR_Word STATE_VARIABLE_LineContext_58_58;
  MR_Word STATE_VARIABLE_LinePosn_59_59;

  STATE_VARIABLE_Errors_36_36 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_38_38);
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_11, FileStringLen_12, DefaultModuleName_15, DefaultExpectationContexts_16, &ModuleDeclPresent_20, (MR_Integer) 1, STATE_VARIABLE_SourceFileName_0_32, &STATE_VARIABLE_SourceFileName_41_41, STATE_VARIABLE_SeqNumCounter_38_38, &STATE_VARIABLE_SeqNumCounter_42_42, STATE_VARIABLE_LineContext_0_33, &STATE_VARIABLE_LineContext_43_43, STATE_VARIABLE_LinePosn_0_34, &STATE_VARIABLE_LinePosn_44_44);
  switch (MR_tag((MR_Word) ModuleDeclPresent_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_23;
        MR_Word Var_46;

        InitLookAhead_21 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_20, (MR_Integer) 0))));
        ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_20, (MR_Integer) 1))));
        NoModuleSpec_23 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_20, (MR_Integer) 2))));
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (NoModuleSpec_23));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, Var_46, STATE_VARIABLE_Errors_36_36, &STATE_VARIABLE_Errors_47_47);
        ModuleName_24 = DefaultModuleName_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WrongSpec_26;
        MR_Word Var_50;

        ModuleName_24 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_20, (MR_Integer) 0))));
        ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_20, (MR_Integer) 1))));
        WrongSpec_26 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_20, (MR_Integer) 2))));
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (WrongSpec_26));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, Var_50, STATE_VARIABLE_Errors_36_36, &STATE_VARIABLE_Errors_47_47);
        InitLookAhead_21 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        ModuleName_24 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_20, (MR_Integer) 0))));
        ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_20, (MR_Integer) 1))));
        InitLookAhead_21 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Errors_47_47 = STATE_VARIABLE_Errors_36_36;
      }
      break;
  }
  Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
  parse_tree__parse_module__read_parse_tree_src_components_20_p_0(FileString_11, FileStringLen_12, ModuleName_24, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_21, &FinalLookAhead_29, Var_54, &ModuleComponents_30, STATE_VARIABLE_SourceFileName_41_41, &STATE_VARIABLE_SourceFileName_55_55, STATE_VARIABLE_SeqNumCounter_42_42, &STATE_VARIABLE_SeqNumCounter_56_56, STATE_VARIABLE_Errors_47_47, &STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_LineContext_43_43, &STATE_VARIABLE_LineContext_58_58, STATE_VARIABLE_LinePosn_44_44, &STATE_VARIABLE_LinePosn_59_59);
  parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(STATE_VARIABLE_SourceFileName_55_55, FileString_11, FileStringLen_12, ModuleName_24, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_29, STATE_VARIABLE_SeqNumCounter_56_56, STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_Errors_35, STATE_VARIABLE_LineContext_58_58, STATE_VARIABLE_LinePosn_59_59);
  {
    ParseTree_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree_31, 0) = ((MR_Box) (ModuleName_24));
    MR_hl_field(0, ParseTree_31, 1) = ((MR_Box) (ModuleNameContext_25));
    MR_hl_field(0, ParseTree_31, 2) = ((MR_Box) (ModuleComponents_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *MaybeParseTree_17 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ParseTree_31));
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_components_20_p_0(
  MR_String FileString_21,
  MR_Integer FileStringLen_22,
  MR_Word CurModuleName_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_81,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_82,
  MR_Word * STATE_VARIABLE_ModuleComponents_83,
  MR_String STATE_VARIABLE_SourceFileName_0_84,
  MR_String * STATE_VARIABLE_SourceFileName_85,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_86,
  MR_Word * STATE_VARIABLE_SeqNumCounter_87,
  MR_Word STATE_VARIABLE_Errors_0_88,
  MR_Word * STATE_VARIABLE_Errors_89,
  MR_Word STATE_VARIABLE_LineContext_0_90,
  MR_Word * STATE_VARIABLE_LineContext_91,
  MR_Word STATE_VARIABLE_LinePosn_0_92,
  MR_Word * STATE_VARIABLE_LinePosn_93)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_35;
    MR_Word STATE_VARIABLE_SeqNumCounter_94_94;
    MR_Word STATE_VARIABLE_LineContext_95_95;
    MR_Word STATE_VARIABLE_LinePosn_96_96;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__get_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_84, FileString_21, FileStringLen_22, InitLookAhead_27, CurModuleName_23, &ReadIOMResult_35, STATE_VARIABLE_SeqNumCounter_0_86, &STATE_VARIABLE_SeqNumCounter_94_94, STATE_VARIABLE_LineContext_0_90, &STATE_VARIABLE_LineContext_95_95, STATE_VARIABLE_LinePosn_0_92, &STATE_VARIABLE_LinePosn_96_96);
    switch (MR_tag((MR_Word) ReadIOMResult_35)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_28 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_83 = STATE_VARIABLE_ModuleComponents_0_82;
          *STATE_VARIABLE_SourceFileName_85 = STATE_VARIABLE_SourceFileName_0_84;
          *STATE_VARIABLE_SeqNumCounter_87 = STATE_VARIABLE_SeqNumCounter_94_94;
          *STATE_VARIABLE_Errors_89 = STATE_VARIABLE_Errors_0_88;
          *STATE_VARIABLE_LineContext_91 = STATE_VARIABLE_LineContext_95_95;
          *STATE_VARIABLE_LinePosn_93 = STATE_VARIABLE_LinePosn_96_96;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_36 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_35, (MR_Integer) 0))));
          MR_Word Var_98;
          MR_Word STATE_VARIABLE_Errors_99_99;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (ItemSpec_36));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, Var_98, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_99_99);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_94_94;
          next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_99_99;
          next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_95_95;
          next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_96_96;
          InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
          STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
          STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
          STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMTerm_38 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_35, (MR_Integer) 1))));
          MR_Word Context_40;
          MR_Word SectionContext_43;
          MR_Word ItemSeqInitLookAhead_44;
          MR_Word ItemSeqFinalLookAhead_45;
          MR_Word InclsCord_46;
          MR_Word AvailsCord_47;
          MR_Word FIMsCord_48;
          MR_Word ItemsCord_49;
          MR_Word STATE_VARIABLE_Errors_108_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_112;
          MR_String STATE_VARIABLE_SourceFileName_113_113;
          MR_Word STATE_VARIABLE_SeqNumCounter_114_114;
          MR_Word STATE_VARIABLE_Errors_115_115;
          MR_Word STATE_VARIABLE_LineContext_116_116;
          MR_Word STATE_VARIABLE_LinePosn_117_117;
          MR_Word STATE_VARIABLE_ModuleComponents_118_118;
          MR_Word Var_119;
          MR_Word Var_127;
          MR_Word _MissingStartSectionWarning_41;
          MR_Word next_value_of_MaybePrevSection_25;
          MR_Word next_value_of_InitLookAhead_27;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

          Context_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_38);
          parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_40, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_41, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_108_108);
          SectionContext_43 = mercury__term_context__dummy_context_0_f_0();
          {
            ItemSeqInitLookAhead_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ItemSeqInitLookAhead_44, 0) = ((MR_Box) (ReadIOMResult_35));
          }
          Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_111 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
          Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_44, &ItemSeqFinalLookAhead_45, Var_109, &InclsCord_46, Var_110, &AvailsCord_47, Var_111, &FIMsCord_48, Var_112, &ItemsCord_49, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_113_113, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_114_114, STATE_VARIABLE_Errors_108_108, &STATE_VARIABLE_Errors_115_115, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_116_116, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_117_117);
          parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, (MR_Integer) 1, SectionContext_43, InclsCord_46, AvailsCord_47, FIMsCord_48, ItemsCord_49, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_118_118);
          {
            Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_127, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_127, 1) = ((MR_Box) (SectionContext_43));
          }
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_127));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_25 = Var_119;
          next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_45;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_118_118;
          next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_113_113;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_114_114;
          next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_115_115;
          next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_116_116;
          next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_117_117;
          MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
          STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
          InitLookAhead_27 = next_value_of_InitLookAhead_27;
          STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
          STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
          STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
          STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
          STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
          STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_50 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_35, (MR_Integer) 2))));
          MR_Word IOMTerm_266 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_35, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Errors_202_362;
                MR_Word Var_363;
                MR_Word Var_364;
                MR_Word Var_365;
                MR_Word Var_366;
                MR_String STATE_VARIABLE_SourceFileName_207_367;
                MR_Word STATE_VARIABLE_SeqNumCounter_208_368;
                MR_Word STATE_VARIABLE_Errors_209_369;
                MR_Word STATE_VARIABLE_LineContext_210_370;
                MR_Word STATE_VARIABLE_LinePosn_211_371;
                MR_Word STATE_VARIABLE_ModuleComponents_212_372;
                MR_Word Var_373;
                MR_Word Var_375;
                MR_Word SectionKind_376;
                MR_Word SectionContext_377;
                MR_Word ItemSeqInitLookAhead_378;
                MR_Word ItemSeqFinalLookAhead_379;
                MR_Word InclsCord_380;
                MR_Word AvailsCord_381;
                MR_Word FIMsCord_382;
                MR_Word ItemsCord_383;
                MR_Word next_value_of_MaybePrevSection_25;
                MR_Word next_value_of_InitLookAhead_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_280;
                  MR_Word _MissingStartSectionWarning_278;

                  Context_280 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_280, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_278, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_202_362);
                  SectionKind_376 = (MR_Integer) 1;
                  SectionContext_377 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_282 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_376 = ((MR_Word) ((MR_hl_field(0, Var_282, (MR_Integer) 0))));
                  SectionContext_377 = ((MR_Word) ((MR_hl_field(0, Var_282, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_202_362 = STATE_VARIABLE_Errors_0_88;
                }
                {
                  ItemSeqInitLookAhead_378 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_378, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_363 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_364 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_365 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_366 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_378, &ItemSeqFinalLookAhead_379, Var_363, &InclsCord_380, Var_364, &AvailsCord_381, Var_365, &FIMsCord_382, Var_366, &ItemsCord_383, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_367, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_368, STATE_VARIABLE_Errors_202_362, &STATE_VARIABLE_Errors_209_369, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_370, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_371);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_376, SectionContext_377, InclsCord_380, AvailsCord_381, FIMsCord_382, ItemsCord_383, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_372);
                {
                  Var_375 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_375, 0) = ((MR_Box) (SectionKind_376));
                  MR_hl_field(0, Var_375, 1) = ((MR_Box) (SectionContext_377));
                }
                {
                  Var_373 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_373, 0) = ((MR_Box) (Var_375));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_373;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_379;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_372;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_367;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_368;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_369;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_370;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_371;
                MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                InitLookAhead_27 = next_value_of_InitLookAhead_27;
                STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Errors_202_388;
                MR_Word Var_389;
                MR_Word Var_390;
                MR_Word Var_391;
                MR_Word Var_392;
                MR_String STATE_VARIABLE_SourceFileName_207_393;
                MR_Word STATE_VARIABLE_SeqNumCounter_208_394;
                MR_Word STATE_VARIABLE_Errors_209_395;
                MR_Word STATE_VARIABLE_LineContext_210_396;
                MR_Word STATE_VARIABLE_LinePosn_211_397;
                MR_Word STATE_VARIABLE_ModuleComponents_212_398;
                MR_Word Var_399;
                MR_Word Var_401;
                MR_Word SectionKind_402;
                MR_Word SectionContext_403;
                MR_Word ItemSeqInitLookAhead_404;
                MR_Word ItemSeqFinalLookAhead_405;
                MR_Word InclsCord_406;
                MR_Word AvailsCord_407;
                MR_Word FIMsCord_408;
                MR_Word ItemsCord_409;
                MR_Word next_value_of_MaybePrevSection_25;
                MR_Word next_value_of_InitLookAhead_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_294;
                  MR_Word _MissingStartSectionWarning_292;

                  Context_294 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_294, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_292, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_202_388);
                  SectionKind_402 = (MR_Integer) 1;
                  SectionContext_403 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_296 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_402 = ((MR_Word) ((MR_hl_field(0, Var_296, (MR_Integer) 0))));
                  SectionContext_403 = ((MR_Word) ((MR_hl_field(0, Var_296, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_202_388 = STATE_VARIABLE_Errors_0_88;
                }
                {
                  ItemSeqInitLookAhead_404 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_404, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_389 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_390 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_391 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_392 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_404, &ItemSeqFinalLookAhead_405, Var_389, &InclsCord_406, Var_390, &AvailsCord_407, Var_391, &FIMsCord_408, Var_392, &ItemsCord_409, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_393, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_394, STATE_VARIABLE_Errors_202_388, &STATE_VARIABLE_Errors_209_395, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_396, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_397);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_402, SectionContext_403, InclsCord_406, AvailsCord_407, FIMsCord_408, ItemsCord_409, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_398);
                {
                  Var_401 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_401, 0) = ((MR_Box) (SectionKind_402));
                  MR_hl_field(0, Var_401, 1) = ((MR_Box) (SectionContext_403));
                }
                {
                  Var_399 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_399, 0) = ((MR_Box) (Var_401));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_399;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_405;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_398;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_393;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_394;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_395;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_396;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_397;
                MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                InitLookAhead_27 = next_value_of_InitLookAhead_27;
                STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemSpecs_235 = ((MR_Word) ((MR_hl_field(2, IOM_50, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_Errors_198_315;
                MR_Word STATE_VARIABLE_Errors_202_414;
                MR_Word Var_415;
                MR_Word Var_416;
                MR_Word Var_417;
                MR_Word Var_418;
                MR_String STATE_VARIABLE_SourceFileName_207_419;
                MR_Word STATE_VARIABLE_SeqNumCounter_208_420;
                MR_Word STATE_VARIABLE_Errors_209_421;
                MR_Word STATE_VARIABLE_LineContext_210_422;
                MR_Word STATE_VARIABLE_LinePosn_211_423;
                MR_Word STATE_VARIABLE_ModuleComponents_212_424;
                MR_Word Var_425;
                MR_Word Var_427;
                MR_Word SectionKind_428;
                MR_Word SectionContext_429;
                MR_Word ItemSeqInitLookAhead_430;
                MR_Word ItemSeqFinalLookAhead_431;
                MR_Word InclsCord_432;
                MR_Word AvailsCord_433;
                MR_Word FIMsCord_434;
                MR_Word ItemsCord_435;
                MR_Word next_value_of_MaybePrevSection_25;
                MR_Word next_value_of_InitLookAhead_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_235, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_198_315);
                if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_308;
                  MR_Word _MissingStartSectionWarning_306;

                  Context_308 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_308, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_306, STATE_VARIABLE_Errors_198_315, &STATE_VARIABLE_Errors_202_414);
                  SectionKind_428 = (MR_Integer) 1;
                  SectionContext_429 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_310 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_428 = ((MR_Word) ((MR_hl_field(0, Var_310, (MR_Integer) 0))));
                  SectionContext_429 = ((MR_Word) ((MR_hl_field(0, Var_310, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_202_414 = STATE_VARIABLE_Errors_198_315;
                }
                {
                  ItemSeqInitLookAhead_430 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_430, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_415 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_416 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_417 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_418 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_430, &ItemSeqFinalLookAhead_431, Var_415, &InclsCord_432, Var_416, &AvailsCord_433, Var_417, &FIMsCord_434, Var_418, &ItemsCord_435, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_419, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_420, STATE_VARIABLE_Errors_202_414, &STATE_VARIABLE_Errors_209_421, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_422, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_423);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_428, SectionContext_429, InclsCord_432, AvailsCord_433, FIMsCord_434, ItemsCord_435, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_424);
                {
                  Var_427 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_427, 0) = ((MR_Box) (SectionKind_428));
                  MR_hl_field(0, Var_427, 1) = ((MR_Box) (SectionContext_429));
                }
                {
                  Var_425 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_425, 0) = ((MR_Box) (Var_427));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_425;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_431;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_424;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_419;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_420;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_421;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_422;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_423;
                MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                InitLookAhead_27 = next_value_of_InitLookAhead_27;
                STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, IOM_50, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Errors_202_492;
                    MR_Word Var_493;
                    MR_Word Var_494;
                    MR_Word Var_495;
                    MR_Word Var_496;
                    MR_String STATE_VARIABLE_SourceFileName_207_497;
                    MR_Word STATE_VARIABLE_SeqNumCounter_208_498;
                    MR_Word STATE_VARIABLE_Errors_209_499;
                    MR_Word STATE_VARIABLE_LineContext_210_500;
                    MR_Word STATE_VARIABLE_LinePosn_211_501;
                    MR_Word STATE_VARIABLE_ModuleComponents_212_502;
                    MR_Word Var_503;
                    MR_Word Var_505;
                    MR_Word SectionKind_506;
                    MR_Word SectionContext_507;
                    MR_Word ItemSeqInitLookAhead_508;
                    MR_Word ItemSeqFinalLookAhead_509;
                    MR_Word InclsCord_510;
                    MR_Word AvailsCord_511;
                    MR_Word FIMsCord_512;
                    MR_Word ItemsCord_513;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_350;
                      MR_Word _MissingStartSectionWarning_348;

                      Context_350 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_350, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_348, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_202_492);
                      SectionKind_506 = (MR_Integer) 1;
                      SectionContext_507 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_352 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_506 = ((MR_Word) ((MR_hl_field(0, Var_352, (MR_Integer) 0))));
                      SectionContext_507 = ((MR_Word) ((MR_hl_field(0, Var_352, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_202_492 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_508 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_508, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_493 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_494 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_495 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_496 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_508, &ItemSeqFinalLookAhead_509, Var_493, &InclsCord_510, Var_494, &AvailsCord_511, Var_495, &FIMsCord_512, Var_496, &ItemsCord_513, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_497, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_498, STATE_VARIABLE_Errors_202_492, &STATE_VARIABLE_Errors_209_499, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_500, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_501);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_506, SectionContext_507, InclsCord_510, AvailsCord_511, FIMsCord_512, ItemsCord_513, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_502);
                    {
                      Var_505 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_505, 0) = ((MR_Box) (SectionKind_506));
                      MR_hl_field(0, Var_505, 1) = ((MR_Box) (SectionContext_507));
                    }
                    {
                      Var_503 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_503, 0) = ((MR_Box) (Var_505));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_503;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_509;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_502;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_497;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_498;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_499;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_500;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_501;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Errors_202_440;
                    MR_Word Var_441;
                    MR_Word Var_442;
                    MR_Word Var_443;
                    MR_Word Var_444;
                    MR_String STATE_VARIABLE_SourceFileName_207_445;
                    MR_Word STATE_VARIABLE_SeqNumCounter_208_446;
                    MR_Word STATE_VARIABLE_Errors_209_447;
                    MR_Word STATE_VARIABLE_LineContext_210_448;
                    MR_Word STATE_VARIABLE_LinePosn_211_449;
                    MR_Word STATE_VARIABLE_ModuleComponents_212_450;
                    MR_Word Var_451;
                    MR_Word Var_453;
                    MR_Word SectionKind_454;
                    MR_Word SectionContext_455;
                    MR_Word ItemSeqInitLookAhead_456;
                    MR_Word ItemSeqFinalLookAhead_457;
                    MR_Word InclsCord_458;
                    MR_Word AvailsCord_459;
                    MR_Word FIMsCord_460;
                    MR_Word ItemsCord_461;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_322;
                      MR_Word _MissingStartSectionWarning_320;

                      Context_322 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_322, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_320, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_202_440);
                      SectionKind_454 = (MR_Integer) 1;
                      SectionContext_455 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_324 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_454 = ((MR_Word) ((MR_hl_field(0, Var_324, (MR_Integer) 0))));
                      SectionContext_455 = ((MR_Word) ((MR_hl_field(0, Var_324, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_202_440 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_456 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_456, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_441 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_442 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_443 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_444 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_456, &ItemSeqFinalLookAhead_457, Var_441, &InclsCord_458, Var_442, &AvailsCord_459, Var_443, &FIMsCord_460, Var_444, &ItemsCord_461, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_445, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_446, STATE_VARIABLE_Errors_202_440, &STATE_VARIABLE_Errors_209_447, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_448, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_449);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_454, SectionContext_455, InclsCord_458, AvailsCord_459, FIMsCord_460, ItemsCord_461, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_450);
                    {
                      Var_453 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_453, 0) = ((MR_Box) (SectionKind_454));
                      MR_hl_field(0, Var_453, 1) = ((MR_Box) (SectionContext_455));
                    }
                    {
                      Var_451 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_451, 0) = ((MR_Box) (Var_453));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_451;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_457;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_450;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_445;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_446;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_447;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_448;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_449;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Errors_202_466;
                    MR_Word Var_467;
                    MR_Word Var_468;
                    MR_Word Var_469;
                    MR_Word Var_470;
                    MR_String STATE_VARIABLE_SourceFileName_207_471;
                    MR_Word STATE_VARIABLE_SeqNumCounter_208_472;
                    MR_Word STATE_VARIABLE_Errors_209_473;
                    MR_Word STATE_VARIABLE_LineContext_210_474;
                    MR_Word STATE_VARIABLE_LinePosn_211_475;
                    MR_Word STATE_VARIABLE_ModuleComponents_212_476;
                    MR_Word Var_477;
                    MR_Word Var_479;
                    MR_Word SectionKind_480;
                    MR_Word SectionContext_481;
                    MR_Word ItemSeqInitLookAhead_482;
                    MR_Word ItemSeqFinalLookAhead_483;
                    MR_Word InclsCord_484;
                    MR_Word AvailsCord_485;
                    MR_Word FIMsCord_486;
                    MR_Word ItemsCord_487;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_336;
                      MR_Word _MissingStartSectionWarning_334;

                      Context_336 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_336, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_334, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_202_466);
                      SectionKind_480 = (MR_Integer) 1;
                      SectionContext_481 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_338 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_480 = ((MR_Word) ((MR_hl_field(0, Var_338, (MR_Integer) 0))));
                      SectionContext_481 = ((MR_Word) ((MR_hl_field(0, Var_338, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_202_466 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_482 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_482, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_467 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_468 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_469 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_470 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_482, &ItemSeqFinalLookAhead_483, Var_467, &InclsCord_484, Var_468, &AvailsCord_485, Var_469, &FIMsCord_486, Var_470, &ItemsCord_487, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_471, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_472, STATE_VARIABLE_Errors_202_466, &STATE_VARIABLE_Errors_209_473, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_474, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_475);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_480, SectionContext_481, InclsCord_484, AvailsCord_485, FIMsCord_486, ItemsCord_487, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_476);
                    {
                      Var_479 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_479, 0) = ((MR_Box) (SectionKind_480));
                      MR_hl_field(0, Var_479, 1) = ((MR_Box) (SectionContext_481));
                    }
                    {
                      Var_477 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_477, 0) = ((MR_Box) (Var_479));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_477;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_483;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_476;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_471;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_472;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_473;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_474;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_475;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Spec_53;
                    MR_Word Var_147;
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_Errors_150_150;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    Var_147 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                    {
                      Spec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/20"));
                      MR_hl_field(1, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(1, Spec_53, 3) = ((MR_Box) (Var_147));
                      MR_hl_field(1, Spec_53, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[30])));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_149, 0) = ((MR_Box) (Spec_53));
                      MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_149, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_150_150);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_94_94;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_150_150;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_95_95;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_96_96;
                    InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_128_128 = ((MR_String) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_128_128;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_94_94;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_95_95;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_96_96;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word RawStartModuleName_54 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))));
                    MR_Word StartContext_55 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 2))));
                    MR_Word StartModuleName_58;
                    MR_Word SubModuleFinalLookAhead_60;
                    MR_Word STATE_VARIABLE_Errors_182_182;
                    MR_Word STATE_VARIABLE_ModuleComponents_185_185;
                    MR_String STATE_VARIABLE_SourceFileName_186_186;
                    MR_Word STATE_VARIABLE_SeqNumCounter_187_187;
                    MR_Word STATE_VARIABLE_Errors_188_188;
                    MR_Word STATE_VARIABLE_LineContext_189_189;
                    MR_Word STATE_VARIABLE_LinePosn_190_190;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    if (((MR_tag((MR_Word) RawStartModuleName_54)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_59 = ((MR_Word) ((MR_hl_field(1, RawStartModuleName_54, (MR_Integer) 0))));
                      MR_String RawBaseName_230 = ((MR_String) ((MR_hl_field(1, RawStartModuleName_54, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_59, CurModuleName_23);
                      if (succeeded)
                      {
                        {
                          StartModuleName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_58, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(1, StartModuleName_58, 1) = ((MR_Box) (RawBaseName_230));
                        }
                        STATE_VARIABLE_Errors_182_182 = STATE_VARIABLE_Errors_0_88;
                      }
                      else
                      {
                        MR_Word Var_161;
                        MR_Word Var_164;
                        MR_Word Var_165;
                        MR_Word Var_166;
                        MR_Word Var_169;
                        MR_Word Var_170;
                        MR_Word Var_181;
                        MR_Word Pieces_224;
                        MR_Word Spec_225;

                        {
                          Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(3, Var_165, 1) = ((MR_Box) (RawStartModuleName_54));
                        }
                        {
                          Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(3, Var_170, 1) = ((MR_Box) (CurModuleName_23));
                        }
                        {
                          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_169, 0) = ((MR_Box) (Var_170));
                          MR_hl_field(1, Var_169, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
                        }
                        {
                          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[26])));
                          MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
                        }
                        {
                          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
                          MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_166));
                        }
                        {
                          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[25])));
                          MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
                        }
                        {
                          Pieces_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_224, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[24])));
                          MR_hl_field(1, Pieces_224, 1) = ((MR_Box) (Var_161));
                        }
                        {
                          Spec_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Spec_225, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/20"));
                          MR_hl_field(1, Spec_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(1, Spec_225, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                          MR_hl_field(1, Spec_225, 3) = ((MR_Box) (StartContext_55));
                          MR_hl_field(1, Spec_225, 4) = ((MR_Box) (Pieces_224));
                        }
                        {
                          Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_181, 0) = ((MR_Box) (Spec_225));
                          MR_hl_field(1, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_181, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_182_182);
                        {
                          StartModuleName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_58, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(1, StartModuleName_58, 1) = ((MR_Box) (RawBaseName_230));
                        }
                      }
                    }
                    else
                    {
                      MR_String RawBaseName_57 = ((MR_String) ((MR_hl_field(0, RawStartModuleName_54, (MR_Integer) 0))));

                      {
                        StartModuleName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, StartModuleName_58, 0) = ((MR_Box) (CurModuleName_23));
                        MR_hl_field(1, StartModuleName_58, 1) = ((MR_Box) (RawBaseName_57));
                      }
                      STATE_VARIABLE_Errors_182_182 = STATE_VARIABLE_Errors_0_88;
                    }
                    parse_tree__parse_module__read_parse_tree_src_submodule_21_p_0(FileString_21, FileStringLen_22, ContainingModules_24, MaybePrevSection_25, CurModuleName_23, StartModuleName_58, StartContext_55, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_60, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_185_185, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_186_186, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_187_187, STATE_VARIABLE_Errors_182_182, &STATE_VARIABLE_Errors_188_188, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_189_189, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_190_190);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_27 = SubModuleFinalLookAhead_60;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_185_185;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_186_186;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_187_187;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_188_188;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_189_189;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_190_190;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word EndedModuleName_78 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))));
                    MR_Word EndContext_79 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 2))));

                    parse_tree__parse_module__handle_module_end_marker_8_p_0(CurModuleName_23, ContainingModules_24, ReadIOMResult_35, EndedModuleName_78, EndContext_79, FinalLookAhead_28, STATE_VARIABLE_Errors_0_88, STATE_VARIABLE_Errors_89);
                    *STATE_VARIABLE_ModuleComponents_83 = STATE_VARIABLE_ModuleComponents_0_82;
                    *STATE_VARIABLE_SourceFileName_85 = STATE_VARIABLE_SourceFileName_0_84;
                    *STATE_VARIABLE_SeqNumCounter_87 = STATE_VARIABLE_SeqNumCounter_94_94;
                    *STATE_VARIABLE_LineContext_91 = STATE_VARIABLE_LineContext_95_95;
                    *STATE_VARIABLE_LinePosn_93 = STATE_VARIABLE_LinePosn_96_96;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Var_519;
                    MR_Word Var_520;
                    MR_Word Var_521;
                    MR_Word Var_522;
                    MR_String STATE_VARIABLE_SourceFileName_207_523;
                    MR_Word STATE_VARIABLE_SeqNumCounter_208_524;
                    MR_Word STATE_VARIABLE_Errors_209_525;
                    MR_Word STATE_VARIABLE_LineContext_210_526;
                    MR_Word STATE_VARIABLE_LinePosn_211_527;
                    MR_Word STATE_VARIABLE_ModuleComponents_212_528;
                    MR_Word Var_529;
                    MR_Word Var_531;
                    MR_Word SectionKind_532 = ((MR_Unsigned) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word SectionContext_533 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 2))));
                    MR_Word ItemSeqFinalLookAhead_535;
                    MR_Word InclsCord_536;
                    MR_Word AvailsCord_537;
                    MR_Word FIMsCord_538;
                    MR_Word ItemsCord_539;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    Var_519 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_520 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_521 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_522 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, (MR_Word) ((MR_Unsigned) 0U), &ItemSeqFinalLookAhead_535, Var_519, &InclsCord_536, Var_520, &AvailsCord_537, Var_521, &FIMsCord_538, Var_522, &ItemsCord_539, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_523, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_524, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_209_525, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_526, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_527);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_532, SectionContext_533, InclsCord_536, AvailsCord_537, FIMsCord_538, ItemsCord_539, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_528);
                    {
                      Var_531 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_531, 0) = ((MR_Box) (SectionKind_532));
                      MR_hl_field(0, Var_531, 1) = ((MR_Box) (SectionContext_533));
                    }
                    {
                      Var_529 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_529, 0) = ((MR_Box) (Var_531));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_529;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_535;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_528;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_523;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_524;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_525;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_526;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_527;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ItemSpecs_76 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Errors_198_198;
                    MR_Word STATE_VARIABLE_Errors_202_202;
                    MR_Word Var_203;
                    MR_Word Var_204;
                    MR_Word Var_205;
                    MR_Word Var_206;
                    MR_String STATE_VARIABLE_SourceFileName_207_207;
                    MR_Word STATE_VARIABLE_SeqNumCounter_208_208;
                    MR_Word STATE_VARIABLE_Errors_209_209;
                    MR_Word STATE_VARIABLE_LineContext_210_210;
                    MR_Word STATE_VARIABLE_LinePosn_211_211;
                    MR_Word STATE_VARIABLE_ModuleComponents_212_212;
                    MR_Word Var_213;
                    MR_Word Var_221;
                    MR_Word SectionKind_247;
                    MR_Word SectionContext_248;
                    MR_Word ItemSeqInitLookAhead_249;
                    MR_Word ItemSeqFinalLookAhead_250;
                    MR_Word InclsCord_251;
                    MR_Word AvailsCord_252;
                    MR_Word FIMsCord_253;
                    MR_Word ItemsCord_254;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_76, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_198_198);
                    if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_237;
                      MR_Word _MissingStartSectionWarning_236;

                      Context_237 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_237, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_236, STATE_VARIABLE_Errors_198_198, &STATE_VARIABLE_Errors_202_202);
                      SectionKind_247 = (MR_Integer) 1;
                      SectionContext_248 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_201 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_247 = ((MR_Word) ((MR_hl_field(0, Var_201, (MR_Integer) 0))));
                      SectionContext_248 = ((MR_Word) ((MR_hl_field(0, Var_201, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_202_202 = STATE_VARIABLE_Errors_198_198;
                    }
                    {
                      ItemSeqInitLookAhead_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_249, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_203 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_204 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_205 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_206 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_249, &ItemSeqFinalLookAhead_250, Var_203, &InclsCord_251, Var_204, &AvailsCord_252, Var_205, &FIMsCord_253, Var_206, &ItemsCord_254, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_207_207, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_208_208, STATE_VARIABLE_Errors_202_202, &STATE_VARIABLE_Errors_209_209, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_210_210, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_211_211);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_247, SectionContext_248, InclsCord_251, AvailsCord_252, FIMsCord_253, ItemsCord_254, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_212_212);
                    {
                      Var_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_221, 0) = ((MR_Box) (SectionKind_247));
                      MR_hl_field(0, Var_221, 1) = ((MR_Box) (SectionContext_248));
                    }
                    {
                      Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_213, 0) = ((MR_Box) (Var_221));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_213;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_250;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_212_212;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_207_207;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_208_208;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_209_209;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_210_210;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_211_211;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_81 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_82 = next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    STATE_VARIABLE_SourceFileName_0_84 = next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    STATE_VARIABLE_SeqNumCounter_0_86 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    STATE_VARIABLE_Errors_0_88 = next_value_of_STATE_VARIABLE_Errors_0_88;
                    STATE_VARIABLE_LineContext_0_90 = next_value_of_STATE_VARIABLE_LineContext_0_90;
                    STATE_VARIABLE_LinePosn_0_92 = next_value_of_STATE_VARIABLE_LinePosn_0_92;
                    continue;
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
parse_tree__parse_module__read_parse_tree_src_submodule_21_p_0(
  MR_String FileString_22,
  MR_Integer FileStringLen_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word ContainingModuleName_26,
  MR_Word StartModuleName_27,
  MR_Word StartContext_28,
  MR_Word InitLookAhead_29,
  MR_Word * FinalLookAhead_30,
  MR_Word STATE_VARIABLE_ModuleComponents_0_46,
  MR_Word * STATE_VARIABLE_ModuleComponents_47,
  MR_String STATE_VARIABLE_SourceFileName_0_48,
  MR_String * STATE_VARIABLE_SourceFileName_49,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_50,
  MR_Word * STATE_VARIABLE_SeqNumCounter_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53,
  MR_Word STATE_VARIABLE_LineContext_0_54,
  MR_Word * STATE_VARIABLE_LineContext_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word * STATE_VARIABLE_LinePosn_57)
{
  MR_Word SectionKind_37;
  MR_Word SectionContext_38;
  MR_Word NestedContainingModules_41;
  MR_Word NestedModuleComponents_43;
  MR_Word SubModuleParseTreeSrc_44;
  MR_Word Component_45;
  MR_Word STATE_VARIABLE_Errors_103_103;
  MR_Word Var_106;

  if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NoSectionPieces_39;
    MR_Word NoSectionSpec_40;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_102;

    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (StartModuleName_27));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[63])));
    }
    {
      NoSectionPieces_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NoSectionPieces_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[52])));
      MR_hl_field(1, NoSectionPieces_39, 1) = ((MR_Box) (Var_61));
    }
    {
      NoSectionSpec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NoSectionSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_submodule\'/21"));
      MR_hl_field(1, NoSectionSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, NoSectionSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, NoSectionSpec_40, 3) = ((MR_Box) (StartContext_28));
      MR_hl_field(1, NoSectionSpec_40, 4) = ((MR_Box) (NoSectionPieces_39));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (NoSectionSpec_40));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, Var_102, STATE_VARIABLE_Errors_0_52, &STATE_VARIABLE_Errors_103_103);
    SectionKind_37 = (MR_Integer) 0;
    SectionContext_38 = mercury__term_context__dummy_context_0_f_0();
  }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

    SectionKind_37 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 0))));
    SectionContext_38 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
    STATE_VARIABLE_Errors_103_103 = STATE_VARIABLE_Errors_0_52;
  }
  {
    NestedContainingModules_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NestedContainingModules_41, 0) = ((MR_Box) (StartModuleName_27));
    MR_hl_field(1, NestedContainingModules_41, 1) = ((MR_Box) (ContainingModules_24));
  }
  Var_106 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
  parse_tree__parse_module__read_parse_tree_src_components_20_p_0(FileString_22, FileStringLen_23, StartModuleName_27, NestedContainingModules_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_29, FinalLookAhead_30, Var_106, &NestedModuleComponents_43, STATE_VARIABLE_SourceFileName_0_48, STATE_VARIABLE_SourceFileName_49, STATE_VARIABLE_SeqNumCounter_0_50, STATE_VARIABLE_SeqNumCounter_51, STATE_VARIABLE_Errors_103_103, STATE_VARIABLE_Errors_53, STATE_VARIABLE_LineContext_0_54, STATE_VARIABLE_LineContext_55, STATE_VARIABLE_LinePosn_0_56, STATE_VARIABLE_LinePosn_57);
  {
    SubModuleParseTreeSrc_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubModuleParseTreeSrc_44, 0) = ((MR_Box) (StartModuleName_27));
    MR_hl_field(0, SubModuleParseTreeSrc_44, 1) = ((MR_Box) (StartContext_28));
    MR_hl_field(0, SubModuleParseTreeSrc_44, 2) = ((MR_Box) (NestedModuleComponents_43));
  }
  {
    Component_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Component_45, 0) = ((MR_Box) (ContainingModuleName_26));
    MR_hl_field(1, Component_45, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_37));
    MR_hl_field(1, Component_45, 2) = ((MR_Box) (SectionContext_38));
    MR_hl_field(1, Component_45, 3) = ((MR_Box) (SubModuleParseTreeSrc_44));
  }
  *STATE_VARIABLE_ModuleComponents_47 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_46, ((MR_Box) (Component_45)));
}

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_8_p_0(
  MR_Word CurModuleName_9,
  MR_Word ContainingModules_10,
  MR_Word ReadIOMResult_11,
  MR_Word EndedModuleName_12,
  MR_Word EndContext_13,
  MR_Word * FinalLookAhead_14,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_9, EndedModuleName_12);
  if (succeeded)
  {
    *FinalLookAhead_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Errors_19 = STATE_VARIABLE_Errors_0_18;
  }
  else
  {
    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(EndedModuleName_12, CurModuleName_9);
    if (succeeded)
    {
      *FinalLookAhead_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_19 = STATE_VARIABLE_Errors_0_18;
    }
    else
    {
      succeeded = parse_tree__parse_module__is_for_containing_module_2_p_0(EndedModuleName_12, ContainingModules_10);
      if (succeeded)
      {
        MR_Word Pieces_16;
        MR_Word Spec_17;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_40;

        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[66])));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[65])));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[64])));
          MR_hl_field(1, Pieces_16, 1) = ((MR_Box) (Var_22));
        }
        {
          Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_17, 3) = ((MR_Box) (EndContext_13));
          MR_hl_field(1, Spec_17, 4) = ((MR_Box) (Pieces_16));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_fatal_error_4_p_0((MR_Integer) 4, Var_40, STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FinalLookAhead_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_11));
        }
      }
      else
      {
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_71;
        MR_Word Pieces_74;
        MR_Word Spec_75;

        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (EndedModuleName_12));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[69])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[68])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[66])));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[65])));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
        }
        {
          Pieces_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_74, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[67])));
          MR_hl_field(1, Pieces_74, 1) = ((MR_Box) (Var_45));
        }
        {
          Spec_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(1, Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_75, 3) = ((MR_Box) (EndContext_13));
          MR_hl_field(1, Spec_75, 4) = ((MR_Box) (Pieces_74));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_75));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_fatal_error_4_p_0((MR_Integer) 4, Var_71, STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
        *FinalLookAhead_14 = (MR_Word) ((MR_Unsigned) 0U);
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
      ContainingModule_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ContainingModules_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(
  MR_Word CurModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_13,
  MR_Word * STATE_VARIABLE_MissingStartSectionWarning_14,
  MR_Word STATE_VARIABLE_Errors_0_15,
  MR_Word * STATE_VARIABLE_Errors_16)
{
  switch (STATE_VARIABLE_MissingStartSectionWarning_0_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_MissingStartSectionWarning_14 = STATE_VARIABLE_MissingStartSectionWarning_0_13;
        *STATE_VARIABLE_Errors_16 = STATE_VARIABLE_Errors_0_15;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Pieces_11;
        MR_Word Spec_12;
        MR_Word Var_21;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_65;

        *STATE_VARIABLE_MissingStartSectionWarning_14 = (MR_Integer) 1;
        {
          Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_25, 1) = ((MR_Box) (CurModuleName_7));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[51])));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[32])));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
        }
        {
          Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[31])));
          MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_21));
        }
        {
          Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.generate_missing_start_section_warning_src\'/6"));
          MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_8));
          MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_11));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, Var_65, STATE_VARIABLE_Errors_0_15, STATE_VARIABLE_Errors_16);
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_22_22;
  MR_Word TypeCtorInfo_23_23;
  MR_Word TypeCtorInfo_24_24;

  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_13);
  if (succeeded)
  {
    TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
    succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_22_22, AvailsCord_14);
    if (succeeded)
    {
      TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0);
      succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_23_23, FIMsCord_15);
      if (succeeded)
      {
        TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
        succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_24_24, ItemsCord_16);
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
      MR_hl_field(0, Component_18, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(0, Component_18, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_11));
      MR_hl_field(0, Component_18, 2) = ((MR_Box) (SectionContext_12));
      MR_hl_field(0, Component_18, 3) = ((MR_Box) (InclsCord_13));
      MR_hl_field(0, Component_18, 4) = ((MR_Box) (AvailsCord_14));
      MR_hl_field(0, Component_18, 5) = ((MR_Box) (FIMsCord_15));
      MR_hl_field(0, Component_18, 6) = ((MR_Box) (ItemsCord_16));
    }
    *STATE_VARIABLE_ModuleComponents_20 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_19, ((MR_Box) (Component_18)));
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_10_p_0(
  MR_Word IntFileKind_11,
  MR_String SourceFileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_30,
  MR_Word STATE_VARIABLE_LinePosn_0_31,
  MR_Word DefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * MaybeParseTreeInt_19,
  MR_Word * STATE_VARIABLE_Errors_32)
{
  MR_Word MaybeModuleHeader_23;
  MR_Word STATE_VARIABLE_SeqNumCounter_33_33;
  MR_Word STATE_VARIABLE_LineContext_34_34;
  MR_Word STATE_VARIABLE_LinePosn_35_35;

  parse_tree__parse_module__read_module_header_11_p_0(FileString_13, FileStringLen_14, DefaultModuleName_17, DefaultExpectationContexts_18, SourceFileName_12, &MaybeModuleHeader_23, &STATE_VARIABLE_SeqNumCounter_33_33, STATE_VARIABLE_LineContext_0_30, &STATE_VARIABLE_LineContext_34_34, STATE_VARIABLE_LinePosn_0_31, &STATE_VARIABLE_LinePosn_35_35);
  if (((MR_tag((MR_Word) MaybeModuleHeader_23)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_Errors_32 = (MR_Word) ((MR_Word) (MaybeModuleHeader_23));
    *MaybeParseTreeInt_19 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_23, (MR_Integer) 0))));
    MR_Word ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_23, (MR_Integer) 1))));
    MR_Word VersionNumbersResult_26;
    MR_Word STATE_VARIABLE_LookAhead_38_38;
    MR_Word STATE_VARIABLE_SeqNumCounter_39_39;
    MR_Word STATE_VARIABLE_LineContext_40_40;
    MR_Word STATE_VARIABLE_LinePosn_41_41;
    MR_Word ReadIOMResult_52;

    parse_tree__parse_module__read_next_item_or_marker_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_24, &ReadIOMResult_52, STATE_VARIABLE_SeqNumCounter_33_33, &STATE_VARIABLE_SeqNumCounter_39_39, STATE_VARIABLE_LineContext_34_34, &STATE_VARIABLE_LineContext_40_40, STATE_VARIABLE_LinePosn_35_35, &STATE_VARIABLE_LinePosn_41_41);
    switch (MR_tag((MR_Word) ReadIOMResult_52)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_LookAhead_38_38 = (MR_Word) ((MR_Unsigned) 0U);
          VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_53 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_52, (MR_Integer) 0))));

          STATE_VARIABLE_LookAhead_38_38 = (MR_Word) ((MR_Unsigned) 0U);
          {
            VersionNumbersResult_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VersionNumbersResult_26, 0) = ((MR_Box) (ItemSpec_53));
            MR_hl_field(1, VersionNumbersResult_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            STATE_VARIABLE_LookAhead_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_LookAhead_38_38, 0) = ((MR_Box) (ReadIOMResult_52));
          }
          VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_59 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_52, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) IOM_59)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  STATE_VARIABLE_LookAhead_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_LookAhead_38_38, 0) = ((MR_Box) (ReadIOMResult_52));
                }
                VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  STATE_VARIABLE_LookAhead_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_LookAhead_38_38, 0) = ((MR_Box) (ReadIOMResult_52));
                }
                VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, IOM_59, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 8:
                  {
                    {
                      STATE_VARIABLE_LookAhead_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_LookAhead_38_38, 0) = ((MR_Box) (ReadIOMResult_52));
                    }
                    VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word VN_60 = ((MR_Word) ((MR_hl_field(3, IOM_59, (MR_Integer) 1))));
                    MR_Word Var_81;

                    STATE_VARIABLE_LookAhead_38_38 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_81, 0) = ((MR_Box) (VN_60));
                    }
                    {
                      VersionNumbersResult_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, VersionNumbersResult_26, 0) = ((MR_Box) (Var_81));
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    if (((MR_tag((MR_Word) VersionNumbersResult_26)) == (MR_Integer) 1))
    {
      MR_Word Spec_27 = ((MR_Word) ((MR_hl_field(1, VersionNumbersResult_26, (MR_Integer) 0))));
      MR_Word Error_28 = ((MR_Unsigned) ((MR_hl_field(1, VersionNumbersResult_26, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word STATE_VARIABLE_Errors_42_42;
      MR_Word Var_43;

      STATE_VARIABLE_Errors_42_42 = parse_tree__parse_error__init_read_module_errors_0_f_0();
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_28, Var_43, STATE_VARIABLE_Errors_42_42, STATE_VARIABLE_Errors_32);
      *MaybeParseTreeInt_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word MaybeVersionNumbers_29 = ((MR_Word) ((MR_hl_field(0, VersionNumbersResult_26, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_LookAhead_46_46;
      MR_Word STATE_VARIABLE_SeqNumCounter_47_47;
      MR_Word STATE_VARIABLE_Errors_48_48;
      MR_Word STATE_VARIABLE_LineContext_49_49;
      MR_Word STATE_VARIABLE_LinePosn_50_50;
      MR_Word Var_51;

      parse_tree__parse_module__read_parse_tree_int_sections_17_p_0(FileString_13, FileStringLen_14, ModuleName_24, ModuleNameContext_25, IntFileKind_11, SourceFileName_12, MaybeVersionNumbers_29, STATE_VARIABLE_LookAhead_38_38, &STATE_VARIABLE_LookAhead_46_46, MaybeParseTreeInt_19, STATE_VARIABLE_SeqNumCounter_39_39, &STATE_VARIABLE_SeqNumCounter_47_47, &STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_LineContext_40_40, &STATE_VARIABLE_LineContext_49_49, STATE_VARIABLE_LinePosn_41_41, &STATE_VARIABLE_LinePosn_50_50);
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_11));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_24, Var_51, STATE_VARIABLE_LookAhead_46_46, STATE_VARIABLE_SeqNumCounter_47_47, STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_32, STATE_VARIABLE_LineContext_49_49, STATE_VARIABLE_LinePosn_50_50);
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_sections_17_p_0(
  MR_String FileString_18,
  MR_Integer FileStringLen_19,
  MR_Word ModuleName_20,
  MR_Word ModuleNameContext_21,
  MR_Word IntFileKind_22,
  MR_String SourceFileName_23,
  MR_Word MaybeVersionNumbers_24,
  MR_Word STATE_VARIABLE_LookAhead_0_52,
  MR_Word * STATE_VARIABLE_LookAhead_53,
  MR_Word * MaybeParseTreeInt_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_54,
  MR_Word * STATE_VARIABLE_SeqNumCounter_55,
  MR_Word * STATE_VARIABLE_Errors_56,
  MR_Word STATE_VARIABLE_LineContext_0_57,
  MR_Word * STATE_VARIABLE_LineContext_58,
  MR_Word STATE_VARIABLE_LinePosn_0_59,
  MR_Word * STATE_VARIABLE_LinePosn_60)
{
  MR_Word MaybeFirstRawItemBlock_31;
  MR_Word STATE_VARIABLE_LookAhead_62_62;
  MR_Word STATE_VARIABLE_SeqNumCounter_63_63;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_Errors_65_65;
  MR_Word STATE_VARIABLE_LineContext_66_66;
  MR_Word STATE_VARIABLE_LinePosn_67_67;

  Var_64 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__parse_module__read_parse_tree_int_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "interface", STATE_VARIABLE_LookAhead_0_52, &STATE_VARIABLE_LookAhead_62_62, &MaybeFirstRawItemBlock_31, STATE_VARIABLE_SeqNumCounter_0_54, &STATE_VARIABLE_SeqNumCounter_63_63, Var_64, &STATE_VARIABLE_Errors_65_65, STATE_VARIABLE_LineContext_0_57, &STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LinePosn_0_59, &STATE_VARIABLE_LinePosn_67_67);
  if ((MaybeFirstRawItemBlock_31 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ParseTreeInt_32;

    {
      ParseTreeInt_32 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParseTreeInt_32, 0) = ((MR_Box) (ModuleName_20));
      MR_hl_field(0, ParseTreeInt_32, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
      MR_hl_field(0, ParseTreeInt_32, 2) = ((MR_Box) (ModuleNameContext_21));
      MR_hl_field(0, ParseTreeInt_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParseTreeInt_32, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_32));
    }
    *STATE_VARIABLE_LookAhead_53 = STATE_VARIABLE_LookAhead_62_62;
    *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_63_63;
    *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_65_65;
    *STATE_VARIABLE_LineContext_58 = STATE_VARIABLE_LineContext_66_66;
    *STATE_VARIABLE_LinePosn_60 = STATE_VARIABLE_LinePosn_67_67;
  }
  else
  {
    MR_Word FirstRawItemBlock_33;
    MR_Word FirstSectionKind_36;
    MR_Word FirstIncls_37;
    MR_Word FirstAvails_38;
    MR_Word FirstFIMs_39;
    MR_Word FirstItems_40;
    MR_Tuple Var_77 = ((MR_Tuple) ((MR_hl_field(1, MaybeFirstRawItemBlock_31, (MR_Integer) 0))));

    FirstRawItemBlock_33 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
    FirstSectionKind_36 = ((MR_Unsigned) ((MR_hl_field(0, FirstRawItemBlock_33, (MR_Integer) 1))) & (MR_Integer) 1);
    FirstIncls_37 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, (MR_Integer) 2))));
    FirstAvails_38 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, (MR_Integer) 3))));
    FirstFIMs_39 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, (MR_Integer) 4))));
    FirstItems_40 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, (MR_Integer) 5))));
    switch (FirstSectionKind_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ParseTreeInt_117;

          {
            ParseTreeInt_117 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ParseTreeInt_117, 0) = ((MR_Box) (ModuleName_20));
            MR_hl_field(0, ParseTreeInt_117, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
            MR_hl_field(0, ParseTreeInt_117, 2) = ((MR_Box) (ModuleNameContext_21));
            MR_hl_field(0, ParseTreeInt_117, 3) = ((MR_Box) (MaybeVersionNumbers_24));
            MR_hl_field(0, ParseTreeInt_117, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_117, 5) = ((MR_Box) (FirstIncls_37));
            MR_hl_field(0, ParseTreeInt_117, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_117, 7) = ((MR_Box) (FirstAvails_38));
            MR_hl_field(0, ParseTreeInt_117, 8) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_117, 9) = ((MR_Box) (FirstFIMs_39));
            MR_hl_field(0, ParseTreeInt_117, 10) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_117, 11) = ((MR_Box) (FirstItems_40));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeParseTreeInt_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_117));
          }
          *STATE_VARIABLE_LookAhead_53 = STATE_VARIABLE_LookAhead_62_62;
          *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_63_63;
          *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_65_65;
          *STATE_VARIABLE_LineContext_58 = STATE_VARIABLE_LineContext_66_66;
          *STATE_VARIABLE_LinePosn_60 = STATE_VARIABLE_LinePosn_67_67;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word MaybeSecondRawItemBlock_41;
          MR_Word STATE_VARIABLE_Errors_81_81;

          parse_tree__parse_module__read_parse_tree_int_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "implementation", STATE_VARIABLE_LookAhead_62_62, STATE_VARIABLE_LookAhead_53, &MaybeSecondRawItemBlock_41, STATE_VARIABLE_SeqNumCounter_63_63, STATE_VARIABLE_SeqNumCounter_55, STATE_VARIABLE_Errors_65_65, &STATE_VARIABLE_Errors_81_81, STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LineContext_58, STATE_VARIABLE_LinePosn_67_67, STATE_VARIABLE_LinePosn_60);
          if ((MaybeSecondRawItemBlock_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ParseTreeInt_111;

            {
              ParseTreeInt_111 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParseTreeInt_111, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(0, ParseTreeInt_111, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
              MR_hl_field(0, ParseTreeInt_111, 2) = ((MR_Box) (ModuleNameContext_21));
              MR_hl_field(0, ParseTreeInt_111, 3) = ((MR_Box) (MaybeVersionNumbers_24));
              MR_hl_field(0, ParseTreeInt_111, 4) = ((MR_Box) (FirstIncls_37));
              MR_hl_field(0, ParseTreeInt_111, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_111, 6) = ((MR_Box) (FirstAvails_38));
              MR_hl_field(0, ParseTreeInt_111, 7) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_111, 8) = ((MR_Box) (FirstFIMs_39));
              MR_hl_field(0, ParseTreeInt_111, 9) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_111, 10) = ((MR_Box) (FirstItems_40));
              MR_hl_field(0, ParseTreeInt_111, 11) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeParseTreeInt_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_111));
            }
            *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_81_81;
          }
          else
          {
            MR_Word SecondRawItemBlock_42;
            MR_Word SectionContext_43;
            MR_Word SecondSectionKind_45;
            MR_Word SecondIncls_46;
            MR_Word SecondAvails_47;
            MR_Word SecondFIMs_48;
            MR_Word SecondItems_49;
            MR_Tuple Var_88 = ((MR_Tuple) ((MR_hl_field(1, MaybeSecondRawItemBlock_41, (MR_Integer) 0))));

            SecondRawItemBlock_42 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
            SectionContext_43 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 1))));
            SecondSectionKind_45 = ((MR_Unsigned) ((MR_hl_field(0, SecondRawItemBlock_42, (MR_Integer) 1))) & (MR_Integer) 1);
            SecondIncls_46 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, (MR_Integer) 2))));
            SecondAvails_47 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, (MR_Integer) 3))));
            SecondFIMs_48 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, (MR_Integer) 4))));
            SecondItems_49 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, (MR_Integer) 5))));
            switch (SecondSectionKind_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ParseTreeInt_112;

                  {
                    ParseTreeInt_112 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ParseTreeInt_112, 0) = ((MR_Box) (ModuleName_20));
                    MR_hl_field(0, ParseTreeInt_112, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
                    MR_hl_field(0, ParseTreeInt_112, 2) = ((MR_Box) (ModuleNameContext_21));
                    MR_hl_field(0, ParseTreeInt_112, 3) = ((MR_Box) (MaybeVersionNumbers_24));
                    MR_hl_field(0, ParseTreeInt_112, 4) = ((MR_Box) (FirstIncls_37));
                    MR_hl_field(0, ParseTreeInt_112, 5) = ((MR_Box) (SecondIncls_46));
                    MR_hl_field(0, ParseTreeInt_112, 6) = ((MR_Box) (FirstAvails_38));
                    MR_hl_field(0, ParseTreeInt_112, 7) = ((MR_Box) (SecondAvails_47));
                    MR_hl_field(0, ParseTreeInt_112, 8) = ((MR_Box) (FirstFIMs_39));
                    MR_hl_field(0, ParseTreeInt_112, 9) = ((MR_Box) (SecondFIMs_48));
                    MR_hl_field(0, ParseTreeInt_112, 10) = ((MR_Box) (FirstItems_40));
                    MR_hl_field(0, ParseTreeInt_112, 11) = ((MR_Box) (SecondItems_49));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeParseTreeInt_26 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_112));
                  }
                  *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_81_81;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Spec_51;
                  MR_Word Var_104;

                  {
                    Spec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_sections\'/17"));
                    MR_hl_field(1, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_51, 3) = ((MR_Box) (SectionContext_43));
                    MR_hl_field(1, Spec_51, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[20])));
                  }
                  {
                    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_104, 0) = ((MR_Box) (Spec_51));
                    MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_104, STATE_VARIABLE_Errors_81_81, STATE_VARIABLE_Errors_56);
                  *MaybeParseTreeInt_26 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_section_16_p_0(
  MR_String FileString_17,
  MR_Integer FileStringLen_18,
  MR_Word ModuleName_19,
  MR_String SourceFileName_20,
  MR_String ExpectedSectionKindStr_21,
  MR_Word InitLookAhead_22,
  MR_Word * FinalLookAhead_23,
  MR_Word * MaybeRawItemBlock_24,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_64,
  MR_Word * STATE_VARIABLE_SeqNumCounter_65,
  MR_Word STATE_VARIABLE_Errors_0_66,
  MR_Word * STATE_VARIABLE_Errors_67,
  MR_Word STATE_VARIABLE_LineContext_0_68,
  MR_Word * STATE_VARIABLE_LineContext_69,
  MR_Word STATE_VARIABLE_LinePosn_0_70,
  MR_Word * STATE_VARIABLE_LinePosn_71)
{
  MR_Word ReadIOMResult_29;
  MR_Word STATE_VARIABLE_SeqNumCounter_72_72;
  MR_Word STATE_VARIABLE_LineContext_73_73;
  MR_Word STATE_VARIABLE_LinePosn_74_74;

  parse_tree__parse_module__get_next_item_or_marker_12_p_0(SourceFileName_20, FileString_17, FileStringLen_18, InitLookAhead_22, ModuleName_19, &ReadIOMResult_29, STATE_VARIABLE_SeqNumCounter_0_64, &STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_LineContext_0_68, &STATE_VARIABLE_LineContext_73_73, STATE_VARIABLE_LinePosn_0_70, &STATE_VARIABLE_LinePosn_74_74);
  switch (MR_tag((MR_Word) ReadIOMResult_29)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Errors_67 = STATE_VARIABLE_Errors_0_66;
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
        *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
        *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemSpec_30 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_29, (MR_Integer) 0))));
        MR_Word Var_76;

        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (ItemSpec_30));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, Var_76, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
        *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
        *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemSpecs_33 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_29, (MR_Integer) 2))));

        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 6, ItemSpecs_33, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
        *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
        *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOMTerm_34 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_29, (MR_Integer) 1))));
        MR_Word IOM_35 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_29, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) IOM_35)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_60;
              MR_Word IOMPieces_61;
              MR_Word Pieces_62;
              MR_Word Spec_63;
              MR_Word Var_95;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_104;
              MR_Word Var_115;

              Context_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_34);
              IOMPieces_61 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_35);
              {
                Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_99, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[23])));
              }
              {
                Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[21])));
                MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
              }
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
              Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_104);
              {
                Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/16"));
                MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Context_60));
                MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_62));
              }
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) (Spec_63));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_115, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *FinalLookAhead_23 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_29));
              }
              *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
              *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
              *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Context_60;
              MR_Word IOMPieces_61;
              MR_Word Pieces_62;
              MR_Word Spec_63;
              MR_Word Var_95;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_104;
              MR_Word Var_115;

              Context_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_34);
              IOMPieces_61 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_35);
              {
                Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_99, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[23])));
              }
              {
                Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[21])));
                MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
              }
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
              Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_104);
              {
                Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/16"));
                MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Context_60));
                MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_62));
              }
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) (Spec_63));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_115, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *FinalLookAhead_23 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_29));
              }
              *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
              *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
              *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, IOM_35, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
                {
                  MR_Word Context_60;
                  MR_Word IOMPieces_61;
                  MR_Word Pieces_62;
                  MR_Word Spec_63;
                  MR_Word Var_95;
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word Var_104;
                  MR_Word Var_115;

                  Context_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_34);
                  IOMPieces_61 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_35);
                  {
                    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_99, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
                  }
                  {
                    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                    MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[23])));
                  }
                  {
                    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[21])));
                    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
                  }
                  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
                  Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_104);
                  {
                    Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/16"));
                    MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Context_60));
                    MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_62));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_115, 0) = ((MR_Box) (Spec_63));
                    MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_115, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *FinalLookAhead_23 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_29));
                  }
                  *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
                  *STATE_VARIABLE_LineContext_69 = STATE_VARIABLE_LineContext_73_73;
                  *STATE_VARIABLE_LinePosn_71 = STATE_VARIABLE_LinePosn_74_74;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word SectionKind_36 = ((MR_Unsigned) ((MR_hl_field(3, IOM_35, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SectionContext_37 = ((MR_Word) ((MR_hl_field(3, IOM_35, (MR_Integer) 2))));
                  MR_Word InclsCord_39;
                  MR_Word AvailsCord_40;
                  MR_Word FIMsCord_41;
                  MR_Word ItemsCord_42;
                  MR_Word RawItemBlock_44;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Tuple Var_94;
                  MR_String _UpdatedSourceFileName_43;

                  Var_82 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                  Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                  Var_84 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                  Var_85 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                  parse_tree__parse_module__read_item_sequence_23_p_0(FileString_17, FileStringLen_18, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_23, Var_82, &InclsCord_39, Var_83, &AvailsCord_40, Var_84, &FIMsCord_41, Var_85, &ItemsCord_42, SourceFileName_20, &_UpdatedSourceFileName_43, STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_SeqNumCounter_65, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67, STATE_VARIABLE_LineContext_73_73, STATE_VARIABLE_LineContext_69, STATE_VARIABLE_LinePosn_74_74, STATE_VARIABLE_LinePosn_71);
                  Var_90 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_39);
                  Var_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_40);
                  Var_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_41);
                  Var_93 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_42);
                  {
                    RawItemBlock_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, RawItemBlock_44, 0) = ((MR_Box) (ModuleName_19));
                    MR_hl_field(0, RawItemBlock_44, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_36));
                    MR_hl_field(0, RawItemBlock_44, 2) = ((MR_Box) (Var_90));
                    MR_hl_field(0, RawItemBlock_44, 3) = ((MR_Box) (Var_91));
                    MR_hl_field(0, RawItemBlock_44, 4) = ((MR_Box) (Var_92));
                    MR_hl_field(0, RawItemBlock_44, 5) = ((MR_Box) (Var_93));
                  }
                  {
                    Var_94 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_94, 0) = ((MR_Box) (RawItemBlock_44));
                    MR_hl_field(0, Var_94, 1) = ((MR_Box) (SectionContext_37));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeRawItemBlock_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_94));
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

static void MR_CALL 
parse_tree__parse_module__get_next_item_or_marker_12_p_0(
  MR_String FileName_13,
  MR_String FileString_14,
  MR_Integer FileStringLen_15,
  MR_Word InitLookAhead_16,
  MR_Word ModuleName_17,
  MR_Word * ReadIOMResult_18,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_22,
  MR_Word * STATE_VARIABLE_SeqNumCounter_23,
  MR_Word STATE_VARIABLE_LineContext_0_24,
  MR_Word * STATE_VARIABLE_LineContext_25,
  MR_Word STATE_VARIABLE_LinePosn_0_26,
  MR_Word * STATE_VARIABLE_LinePosn_27)
{
  if ((InitLookAhead_16 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_module__read_next_item_or_marker_11_p_0(FileName_13, FileString_14, FileStringLen_15, ModuleName_17, ReadIOMResult_18, STATE_VARIABLE_SeqNumCounter_0_22, STATE_VARIABLE_SeqNumCounter_23, STATE_VARIABLE_LineContext_0_24, STATE_VARIABLE_LineContext_25, STATE_VARIABLE_LinePosn_0_26, STATE_VARIABLE_LinePosn_27);
  else
  {
    *ReadIOMResult_18 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_16, (MR_Integer) 0))));
    *STATE_VARIABLE_SeqNumCounter_23 = STATE_VARIABLE_SeqNumCounter_0_22;
    *STATE_VARIABLE_LineContext_25 = STATE_VARIABLE_LineContext_0_24;
    *STATE_VARIABLE_LinePosn_27 = STATE_VARIABLE_LinePosn_0_26;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__582__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__579__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_10_p_0(
  MR_Word OptFileKind_11,
  MR_String SourceFileName0_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_38,
  MR_Word STATE_VARIABLE_LinePosn_0_39,
  MR_Word DefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * MaybeParseTree_19,
  MR_Word * STATE_VARIABLE_Errors_40)
{
  MR_bool succeeded;
  MR_Word MaybeModuleHeader_21;
  MR_Word SeqNumCounter1_22;
  MR_Word STATE_VARIABLE_LineContext_41_41;
  MR_Word STATE_VARIABLE_LinePosn_42_42;

  parse_tree__parse_module__read_module_header_11_p_0(FileString_13, FileStringLen_14, DefaultModuleName_17, DefaultExpectationContexts_18, SourceFileName0_12, &MaybeModuleHeader_21, &SeqNumCounter1_22, STATE_VARIABLE_LineContext_0_38, &STATE_VARIABLE_LineContext_41_41, STATE_VARIABLE_LinePosn_0_39, &STATE_VARIABLE_LinePosn_42_42);
  if (((MR_tag((MR_Word) MaybeModuleHeader_21)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_Errors_40 = (MR_Word) ((MR_Word) (MaybeModuleHeader_21));
    *MaybeParseTree_19 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_21, (MR_Integer) 0))));
    MR_Word ModuleNameContext_24 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_21, (MR_Integer) 1))));
    MR_Word FinalLookAhead_25;
    MR_Word InclsCord_26;
    MR_Word AvailsCord_27;
    MR_Word FIMsCord_28;
    MR_Word ItemsCord_29;
    MR_String SourceFileName_30;
    MR_Word SeqNumCounter_31;
    MR_Word Avails_32;
    MR_Word Imports_33;
    MR_Word Uses_34;
    MR_Word FIMs_35;
    MR_Word Items_36;
    MR_Word ParseTree_37;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_Errors_50_50;
    MR_Word STATE_VARIABLE_LineContext_51_51;
    MR_Word STATE_VARIABLE_LinePosn_52_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_58;

    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_49 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    parse_tree__parse_module__read_item_sequence_23_p_0(FileString_13, FileStringLen_14, ModuleName_23, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_25, Var_45, &InclsCord_26, Var_46, &AvailsCord_27, Var_47, &FIMsCord_28, Var_48, &ItemsCord_29, SourceFileName0_12, &SourceFileName_30, SeqNumCounter1_22, &SeqNumCounter_31, Var_49, &STATE_VARIABLE_Errors_50_50, STATE_VARIABLE_LineContext_41_41, &STATE_VARIABLE_LineContext_51_51, STATE_VARIABLE_LinePosn_42_42, &STATE_VARIABLE_LinePosn_52_52);
    {
      Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_53, 0) = (MR_Box) ((MR_Unsigned) (OptFileKind_11));
    }
    parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_30, FileString_13, FileStringLen_14, ModuleName_23, Var_53, FinalLookAhead_25, SeqNumCounter_31, STATE_VARIABLE_Errors_50_50, STATE_VARIABLE_Errors_40, STATE_VARIABLE_LineContext_51_51, STATE_VARIABLE_LinePosn_52_52);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[6]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_module__read_parse_tree_opt_10_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (InclsCord_26));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/10", (MR_String) "Incls != []");
    Avails_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_27);
    parse_tree__item_util__avail_imports_uses_3_p_0(Avails_32, &Imports_33, &Uses_34);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_module__read_parse_tree_opt_10_p_0_2));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (Imports_33));
      MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/10", (MR_String) "Imports != []");
    FIMs_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_28);
    Items_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_29);
    {
      ParseTree_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParseTree_37, 0) = ((MR_Box) (ModuleName_23));
      MR_hl_field(0, ParseTree_37, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_11));
      MR_hl_field(0, ParseTree_37, 2) = ((MR_Box) (ModuleNameContext_24));
      MR_hl_field(0, ParseTree_37, 3) = ((MR_Box) (Uses_34));
      MR_hl_field(0, ParseTree_37, 4) = ((MR_Box) (FIMs_35));
      MR_hl_field(0, ParseTree_37, 5) = ((MR_Box) (Items_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTree_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTree_37));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(
  MR_String SourceFileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word ModuleName_15,
  MR_Word FileKind_16,
  MR_Word FinalLookAhead_17,
  MR_Word SeqNumCounter0_18,
  MR_Word STATE_VARIABLE_Errors_0_33,
  MR_Word * STATE_VARIABLE_Errors_34,
  MR_Word STATE_VARIABLE_LineContext_0_35,
  MR_Word STATE_VARIABLE_LinePosn_0_36)
{
  MR_Word IOMResult_22;

  if ((FinalLookAhead_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word _SeqNumCounter_67;
    MR_Word Var_68;
    MR_Word Var_69;

    parse_tree__parse_module__read_next_item_or_marker_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_15, &IOMResult_22, SeqNumCounter0_18, &_SeqNumCounter_67, STATE_VARIABLE_LineContext_0_35, &Var_68, STATE_VARIABLE_LinePosn_0_36, &Var_69);
  }
  else
    IOMResult_22 = ((MR_Word) ((MR_hl_field(1, FinalLookAhead_17, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) IOMResult_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Errors_34 = STATE_VARIABLE_Errors_0_33;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemSpec_26 = ((MR_Word) ((MR_hl_field(1, IOMResult_22, (MR_Integer) 0))));
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (ItemSpec_26));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, Var_38, STATE_VARIABLE_Errors_0_33, STATE_VARIABLE_Errors_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term_28 = ((MR_Word) ((MR_hl_field(2, IOMResult_22, (MR_Integer) 1))));
        MR_Word ItemSpecs_29 = ((MR_Word) ((MR_hl_field(2, IOMResult_22, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_Errors_42_42;
        MR_Word Context_55;
        MR_Word Error_56;
        MR_Word Pieces_57;
        MR_Word Spec_60;
        MR_Word Var_64;

        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 6, ItemSpecs_29, STATE_VARIABLE_Errors_0_33, &STATE_VARIABLE_Errors_42_42);
        Context_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_28);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Error_56 = (MR_Integer) 3;
              Pieces_57 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[89]));
            }
            break;
          case (MR_Integer) 1:
            {
              Error_56 = (MR_Integer) 4;
              Pieces_57 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[84]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_56 = (MR_Integer) 4;
              Pieces_57 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[86]));
            }
            break;
        }
        {
          Spec_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(1, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_60, 3) = ((MR_Box) (Context_55));
          MR_hl_field(1, Spec_60, 4) = ((MR_Box) (Pieces_57));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_60));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_56, Var_64, STATE_VARIABLE_Errors_42_42, STATE_VARIABLE_Errors_34);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOMTerm_31 = ((MR_Word) ((MR_hl_field(3, IOMResult_22, (MR_Integer) 1))));
        MR_Word Context_43;
        MR_Word Error_44;
        MR_Word Pieces_45;
        MR_Word Spec_48;
        MR_Word Var_52;

        Context_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_31);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Error_44 = (MR_Integer) 3;
              Pieces_45 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[89]));
            }
            break;
          case (MR_Integer) 1:
            {
              Error_44 = (MR_Integer) 4;
              Pieces_45 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[84]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_44 = (MR_Integer) 4;
              Pieces_45 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[86]));
            }
            break;
        }
        {
          Spec_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(1, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_48, 3) = ((MR_Box) (Context_43));
          MR_hl_field(1, Spec_48, 4) = ((MR_Box) (Pieces_45));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_48));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_44, Var_52, STATE_VARIABLE_Errors_0_33, STATE_VARIABLE_Errors_34);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_23_p_0(
  MR_String FileString_24,
  MR_Integer FileStringLen_25,
  MR_Word ModuleName_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_InclsCord_0_41,
  MR_Word * STATE_VARIABLE_InclsCord_42,
  MR_Word STATE_VARIABLE_AvailsCord_0_43,
  MR_Word * STATE_VARIABLE_AvailsCord_44,
  MR_Word STATE_VARIABLE_FIMsCord_0_45,
  MR_Word * STATE_VARIABLE_FIMsCord_46,
  MR_Word STATE_VARIABLE_ItemsCord_0_47,
  MR_Word * STATE_VARIABLE_ItemsCord_48,
  MR_String STATE_VARIABLE_SourceFileName_0_49,
  MR_String * STATE_VARIABLE_SourceFileName_50,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_51,
  MR_Word * STATE_VARIABLE_SeqNumCounter_52,
  MR_Word STATE_VARIABLE_Errors_0_53,
  MR_Word * STATE_VARIABLE_Errors_54,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word * STATE_VARIABLE_LineContext_56,
  MR_Word STATE_VARIABLE_LinePosn_0_57,
  MR_Word * STATE_VARIABLE_LinePosn_58)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_38;
    MR_Integer NumItemsLeft_39;
    MR_Word MidLookAhead_40;
    MR_Word STATE_VARIABLE_SeqNumCounter_59_59;
    MR_Word STATE_VARIABLE_LineContext_60_60;
    MR_Word STATE_VARIABLE_LinePosn_61_61;
    MR_Word STATE_VARIABLE_InclsCord_63_63;
    MR_Word STATE_VARIABLE_AvailsCord_64_64;
    MR_Word STATE_VARIABLE_FIMsCord_65_65;
    MR_Word STATE_VARIABLE_ItemsCord_66_66;
    MR_String STATE_VARIABLE_SourceFileName_67_67;
    MR_Word STATE_VARIABLE_SeqNumCounter_68_68;
    MR_Word STATE_VARIABLE_Errors_69_69;
    MR_Word STATE_VARIABLE_LineContext_70_70;
    MR_Word STATE_VARIABLE_LinePosn_71_71;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((InitLookAhead_27 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_49, FileString_24, FileStringLen_25, ModuleName_26, &ReadIOMResult_38, STATE_VARIABLE_SeqNumCounter_0_51, &STATE_VARIABLE_SeqNumCounter_59_59, STATE_VARIABLE_LineContext_0_55, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_57, &STATE_VARIABLE_LinePosn_61_61);
    else
    {
      ReadIOMResult_38 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_27, (MR_Integer) 0))));
      STATE_VARIABLE_SeqNumCounter_59_59 = STATE_VARIABLE_SeqNumCounter_0_51;
      STATE_VARIABLE_LineContext_60_60 = STATE_VARIABLE_LineContext_0_55;
      STATE_VARIABLE_LinePosn_61_61 = STATE_VARIABLE_LinePosn_0_57;
    }
    parse_tree__parse_module__read_item_sequence_inner_25_p_0(FileString_24, FileStringLen_25, ModuleName_26, (MR_Integer) 1024, &NumItemsLeft_39, ReadIOMResult_38, &MidLookAhead_40, STATE_VARIABLE_InclsCord_0_41, &STATE_VARIABLE_InclsCord_63_63, STATE_VARIABLE_AvailsCord_0_43, &STATE_VARIABLE_AvailsCord_64_64, STATE_VARIABLE_FIMsCord_0_45, &STATE_VARIABLE_FIMsCord_65_65, STATE_VARIABLE_ItemsCord_0_47, &STATE_VARIABLE_ItemsCord_66_66, STATE_VARIABLE_SourceFileName_0_49, &STATE_VARIABLE_SourceFileName_67_67, STATE_VARIABLE_SeqNumCounter_59_59, &STATE_VARIABLE_SeqNumCounter_68_68, STATE_VARIABLE_Errors_0_53, &STATE_VARIABLE_Errors_69_69, STATE_VARIABLE_LineContext_60_60, &STATE_VARIABLE_LineContext_70_70, STATE_VARIABLE_LinePosn_61_61, &STATE_VARIABLE_LinePosn_71_71);
    succeeded = (NumItemsLeft_39 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word next_value_of_InitLookAhead_27 = MidLookAhead_40;
      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_41 = STATE_VARIABLE_InclsCord_63_63;
      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_43 = STATE_VARIABLE_AvailsCord_64_64;
      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_45 = STATE_VARIABLE_FIMsCord_65_65;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_47 = STATE_VARIABLE_ItemsCord_66_66;
      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_49 = STATE_VARIABLE_SourceFileName_67_67;
      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_51 = STATE_VARIABLE_SeqNumCounter_68_68;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_53 = STATE_VARIABLE_Errors_69_69;
      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_55 = STATE_VARIABLE_LineContext_70_70;
      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_57 = STATE_VARIABLE_LinePosn_71_71;

      // direct tailcall eliminated
      ;
      InitLookAhead_27 = next_value_of_InitLookAhead_27;
      STATE_VARIABLE_InclsCord_0_41 = next_value_of_STATE_VARIABLE_InclsCord_0_41;
      STATE_VARIABLE_AvailsCord_0_43 = next_value_of_STATE_VARIABLE_AvailsCord_0_43;
      STATE_VARIABLE_FIMsCord_0_45 = next_value_of_STATE_VARIABLE_FIMsCord_0_45;
      STATE_VARIABLE_ItemsCord_0_47 = next_value_of_STATE_VARIABLE_ItemsCord_0_47;
      STATE_VARIABLE_SourceFileName_0_49 = next_value_of_STATE_VARIABLE_SourceFileName_0_49;
      STATE_VARIABLE_SeqNumCounter_0_51 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_51;
      STATE_VARIABLE_Errors_0_53 = next_value_of_STATE_VARIABLE_Errors_0_53;
      STATE_VARIABLE_LineContext_0_55 = next_value_of_STATE_VARIABLE_LineContext_0_55;
      STATE_VARIABLE_LinePosn_0_57 = next_value_of_STATE_VARIABLE_LinePosn_0_57;
      continue;
    }
    else
    {
      *FinalLookAhead_28 = MidLookAhead_40;
      *STATE_VARIABLE_LinePosn_58 = STATE_VARIABLE_LinePosn_71_71;
      *STATE_VARIABLE_LineContext_56 = STATE_VARIABLE_LineContext_70_70;
      *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_69_69;
      *STATE_VARIABLE_SeqNumCounter_52 = STATE_VARIABLE_SeqNumCounter_68_68;
      *STATE_VARIABLE_SourceFileName_50 = STATE_VARIABLE_SourceFileName_67_67;
      *STATE_VARIABLE_ItemsCord_48 = STATE_VARIABLE_ItemsCord_66_66;
      *STATE_VARIABLE_FIMsCord_46 = STATE_VARIABLE_FIMsCord_65_65;
      *STATE_VARIABLE_AvailsCord_44 = STATE_VARIABLE_AvailsCord_64_64;
      *STATE_VARIABLE_InclsCord_42 = STATE_VARIABLE_InclsCord_63_63;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_inner_25_p_0(
  MR_String FileString_26,
  MR_Integer FileStringLen_27,
  MR_Word ModuleName_28,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_70,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_71,
  MR_Word ReadIOMResult_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_InclsCord_0_72,
  MR_Word * STATE_VARIABLE_InclsCord_73,
  MR_Word STATE_VARIABLE_AvailsCord_0_74,
  MR_Word * STATE_VARIABLE_AvailsCord_75,
  MR_Word STATE_VARIABLE_FIMsCord_0_76,
  MR_Word * STATE_VARIABLE_FIMsCord_77,
  MR_Word STATE_VARIABLE_ItemsCord_0_78,
  MR_Word * STATE_VARIABLE_ItemsCord_79,
  MR_String STATE_VARIABLE_SourceFileName_0_80,
  MR_String * STATE_VARIABLE_SourceFileName_81,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_82,
  MR_Word * STATE_VARIABLE_SeqNumCounter_83,
  MR_Word STATE_VARIABLE_Errors_0_84,
  MR_Word * STATE_VARIABLE_Errors_85,
  MR_Word STATE_VARIABLE_LineContext_0_86,
  MR_Word * STATE_VARIABLE_LineContext_87,
  MR_Word STATE_VARIABLE_LinePosn_0_88,
  MR_Word * STATE_VARIABLE_LinePosn_89)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumItemsLeft_0_70 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *FinalLookAhead_31 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_30));
      }
      *STATE_VARIABLE_LinePosn_89 = STATE_VARIABLE_LinePosn_0_88;
      *STATE_VARIABLE_LineContext_87 = STATE_VARIABLE_LineContext_0_86;
      *STATE_VARIABLE_Errors_85 = STATE_VARIABLE_Errors_0_84;
      *STATE_VARIABLE_SeqNumCounter_83 = STATE_VARIABLE_SeqNumCounter_0_82;
      *STATE_VARIABLE_SourceFileName_81 = STATE_VARIABLE_SourceFileName_0_80;
      *STATE_VARIABLE_ItemsCord_79 = STATE_VARIABLE_ItemsCord_0_78;
      *STATE_VARIABLE_FIMsCord_77 = STATE_VARIABLE_FIMsCord_0_76;
      *STATE_VARIABLE_AvailsCord_75 = STATE_VARIABLE_AvailsCord_0_74;
      *STATE_VARIABLE_InclsCord_73 = STATE_VARIABLE_InclsCord_0_72;
      *STATE_VARIABLE_NumItemsLeft_71 = STATE_VARIABLE_NumItemsLeft_0_70;
    }
    else
      switch (MR_tag((MR_Word) ReadIOMResult_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *FinalLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_NumItemsLeft_71 = STATE_VARIABLE_NumItemsLeft_0_70;
            *STATE_VARIABLE_InclsCord_73 = STATE_VARIABLE_InclsCord_0_72;
            *STATE_VARIABLE_AvailsCord_75 = STATE_VARIABLE_AvailsCord_0_74;
            *STATE_VARIABLE_FIMsCord_77 = STATE_VARIABLE_FIMsCord_0_76;
            *STATE_VARIABLE_ItemsCord_79 = STATE_VARIABLE_ItemsCord_0_78;
            *STATE_VARIABLE_SourceFileName_81 = STATE_VARIABLE_SourceFileName_0_80;
            *STATE_VARIABLE_SeqNumCounter_83 = STATE_VARIABLE_SeqNumCounter_0_82;
            *STATE_VARIABLE_Errors_85 = STATE_VARIABLE_Errors_0_84;
            *STATE_VARIABLE_LineContext_87 = STATE_VARIABLE_LineContext_0_86;
            *STATE_VARIABLE_LinePosn_89 = STATE_VARIABLE_LinePosn_0_88;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemSpec_41 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_30, (MR_Integer) 0))));
            MR_Word Var_92;
            MR_Word NextReadIOMResult_249;
            MR_Word STATE_VARIABLE_Errors_93_250;
            MR_Word STATE_VARIABLE_SeqNumCounter_97_251;
            MR_Word STATE_VARIABLE_LineContext_98_252;
            MR_Word STATE_VARIABLE_LinePosn_99_253;
            MR_Word next_value_of_ReadIOMResult_30;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (ItemSpec_41));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, Var_92, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_93_250);
            parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_249, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_97_251, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_98_252, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_99_253);
            // direct tailcall eliminated
            ;
            next_value_of_ReadIOMResult_30 = NextReadIOMResult_249;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_97_251;
            next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_93_250;
            next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_98_252;
            next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_99_253;
            ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
            STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
            STATE_VARIABLE_Errors_0_84 = next_value_of_STATE_VARIABLE_Errors_0_84;
            STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
            STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemSpecs_44 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_30, (MR_Integer) 2))));
            MR_Word NextReadIOMResult_45;
            MR_Word STATE_VARIABLE_Errors_93_93;
            MR_Word STATE_VARIABLE_SeqNumCounter_97_97;
            MR_Word STATE_VARIABLE_LineContext_98_98;
            MR_Word STATE_VARIABLE_LinePosn_99_99;
            MR_Word next_value_of_ReadIOMResult_30;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

            parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 6, ItemSpecs_44, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_93_93);
            parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_45, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_97_97, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_98_98, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_99_99);
            // direct tailcall eliminated
            ;
            next_value_of_ReadIOMResult_30 = NextReadIOMResult_45;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_97_97;
            next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_93_93;
            next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_98_98;
            next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_99_99;
            ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
            STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
            STATE_VARIABLE_Errors_0_84 = next_value_of_STATE_VARIABLE_Errors_0_84;
            STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
            STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOMTerm_47 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_30, (MR_Integer) 1))));
            MR_Word IOM_48 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_30, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_NumItemsLeft_110_110 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumItemsLeft_0_70 - (MR_Unsigned) 1);

            switch (MR_tag((MR_Word) IOM_48)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_SeqNumCounter_145_175;
                  MR_Word STATE_VARIABLE_LineContext_146_176;
                  MR_Word STATE_VARIABLE_LinePosn_147_177;
                  MR_Word NextReadIOMResult_178;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_178, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_175, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_176, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_177);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_178;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_175;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_176;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_177;
                  STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                  STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Item_68 = ((MR_Word) ((MR_hl_field(1, IOM_48, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_ItemsCord_139_184;
                  MR_Word STATE_VARIABLE_SeqNumCounter_145_185;
                  MR_Word STATE_VARIABLE_LineContext_146_186;
                  MR_Word STATE_VARIABLE_LinePosn_147_187;
                  MR_Word NextReadIOMResult_188;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  STATE_VARIABLE_ItemsCord_139_184 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_78, ((MR_Box) (Item_68)));
                  parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_188, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_185, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_186, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_187);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_188;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_78 = STATE_VARIABLE_ItemsCord_139_184;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_185;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_186;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_187;
                  STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_ItemsCord_0_78 = next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                  STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ItemSpecs_158 = ((MR_Word) ((MR_hl_field(2, IOM_48, (MR_Integer) 1))));
                  MR_Word Item_159 = ((MR_Word) ((MR_hl_field(2, IOM_48, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_Errors_130_190;
                  MR_Word STATE_VARIABLE_ItemsCord_139_194;
                  MR_Word STATE_VARIABLE_SeqNumCounter_145_195;
                  MR_Word STATE_VARIABLE_LineContext_146_196;
                  MR_Word STATE_VARIABLE_LinePosn_147_197;
                  MR_Word NextReadIOMResult_198;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  STATE_VARIABLE_ItemsCord_139_194 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_78, ((MR_Box) (Item_159)));
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_158, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_130_190);
                  parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_198, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_195, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_196, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_197);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_198;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_78 = STATE_VARIABLE_ItemsCord_139_194;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_195;
                  next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_130_190;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_196;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_197;
                  STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_ItemsCord_0_78 = next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  STATE_VARIABLE_Errors_0_84 = next_value_of_STATE_VARIABLE_Errors_0_84;
                  STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                  STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IOM_48, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Incls_61 = ((MR_Word) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word HeadIncl_62 = ((MR_Word) ((MR_hl_field(0, Incls_61, (MR_Integer) 0))));
                      MR_Word TailIncls_63 = ((MR_Word) ((MR_hl_field(0, Incls_61, (MR_Integer) 1))));
                      MR_Word Var_133;
                      MR_Word Var_134;
                      MR_Word STATE_VARIABLE_InclsCord_132_221;
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_225;
                      MR_Word STATE_VARIABLE_LineContext_146_226;
                      MR_Word STATE_VARIABLE_LinePosn_147_227;
                      MR_Word NextReadIOMResult_228;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_72;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      {
                        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_134, 0) = ((MR_Box) (HeadIncl_62));
                        MR_hl_field(1, Var_134, 1) = ((MR_Box) (TailIncls_63));
                      }
                      Var_133 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_134);
                      STATE_VARIABLE_InclsCord_132_221 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_72, Var_133);
                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_228, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_225, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_226, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_227);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_228;
                      next_value_of_STATE_VARIABLE_InclsCord_0_72 = STATE_VARIABLE_InclsCord_132_221;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_225;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_226;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_227;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_InclsCord_0_72 = next_value_of_STATE_VARIABLE_InclsCord_0_72;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Avails_64 = ((MR_Word) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word HeadAvail_65 = ((MR_Word) ((MR_hl_field(0, Avails_64, (MR_Integer) 0))));
                      MR_Word TailAvails_66 = ((MR_Word) ((MR_hl_field(0, Avails_64, (MR_Integer) 1))));
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_Word STATE_VARIABLE_AvailsCord_135_202;
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_205;
                      MR_Word STATE_VARIABLE_LineContext_146_206;
                      MR_Word STATE_VARIABLE_LinePosn_147_207;
                      MR_Word NextReadIOMResult_208;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_74;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      {
                        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_137, 0) = ((MR_Box) (HeadAvail_65));
                        MR_hl_field(1, Var_137, 1) = ((MR_Box) (TailAvails_66));
                      }
                      Var_136 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_137);
                      STATE_VARIABLE_AvailsCord_135_202 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_74, Var_136);
                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_208, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_205, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_206, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_207);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_208;
                      next_value_of_STATE_VARIABLE_AvailsCord_0_74 = STATE_VARIABLE_AvailsCord_135_202;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_205;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_206;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_207;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_AvailsCord_0_74 = next_value_of_STATE_VARIABLE_AvailsCord_0_74;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FIM_67 = ((MR_Word) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_FIMsCord_138_213;
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_215;
                      MR_Word STATE_VARIABLE_LineContext_146_216;
                      MR_Word STATE_VARIABLE_LinePosn_147_217;
                      MR_Word NextReadIOMResult_218;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_76;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      STATE_VARIABLE_FIMsCord_138_213 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_FIMsCord_0_76, ((MR_Box) (FIM_67)));
                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_218, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_215, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_216, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_217);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_218;
                      next_value_of_STATE_VARIABLE_FIMsCord_0_76 = STATE_VARIABLE_FIMsCord_138_213;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_215;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_216;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_217;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_FIMsCord_0_76 = next_value_of_STATE_VARIABLE_FIMsCord_0_76;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Spec_60;
                      MR_Word Var_127;
                      MR_Word Var_129;
                      MR_Word STATE_VARIABLE_Errors_130_240;
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_245;
                      MR_Word STATE_VARIABLE_LineContext_146_246;
                      MR_Word STATE_VARIABLE_LinePosn_147_247;
                      MR_Word NextReadIOMResult_248;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      Var_127 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_47);
                      {
                        Spec_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_item_sequence_inner\'/25"));
                        MR_hl_field(1, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                        MR_hl_field(1, Spec_60, 3) = ((MR_Box) (Var_127));
                        MR_hl_field(1, Spec_60, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[75])));
                      }
                      {
                        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_129, 0) = ((MR_Box) (Spec_60));
                        MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_129, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_130_240);
                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_248, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_245, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_246, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_247);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_248;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_245;
                      next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_130_240;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_246;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_247;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_Errors_0_84 = next_value_of_STATE_VARIABLE_Errors_0_84;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_112_229 = ((MR_String) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_235;
                      MR_Word STATE_VARIABLE_LineContext_146_236;
                      MR_Word STATE_VARIABLE_LinePosn_147_237;
                      MR_Word NextReadIOMResult_238;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_112_229, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_238, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_235, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_236, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_237);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_238;
                      next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_112_229;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_235;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_236;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_237;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *FinalLookAhead_31 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_30));
                      }
                      *STATE_VARIABLE_NumItemsLeft_71 = STATE_VARIABLE_NumItemsLeft_110_110;
                      *STATE_VARIABLE_InclsCord_73 = STATE_VARIABLE_InclsCord_0_72;
                      *STATE_VARIABLE_AvailsCord_75 = STATE_VARIABLE_AvailsCord_0_74;
                      *STATE_VARIABLE_FIMsCord_77 = STATE_VARIABLE_FIMsCord_0_76;
                      *STATE_VARIABLE_ItemsCord_79 = STATE_VARIABLE_ItemsCord_0_78;
                      *STATE_VARIABLE_SourceFileName_81 = STATE_VARIABLE_SourceFileName_0_80;
                      *STATE_VARIABLE_SeqNumCounter_83 = STATE_VARIABLE_SeqNumCounter_0_82;
                      *STATE_VARIABLE_Errors_85 = STATE_VARIABLE_Errors_0_84;
                      *STATE_VARIABLE_LineContext_87 = STATE_VARIABLE_LineContext_0_86;
                      *STATE_VARIABLE_LinePosn_89 = STATE_VARIABLE_LinePosn_0_88;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word HandledSpecs_69 = ((MR_Word) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Errors_130_130;
                      MR_Word STATE_VARIABLE_SeqNumCounter_145_145;
                      MR_Word STATE_VARIABLE_LineContext_146_146;
                      MR_Word STATE_VARIABLE_LinePosn_147_147;
                      MR_Word NextReadIOMResult_162;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, HandledSpecs_69, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_130_130);
                      parse_tree__parse_module__read_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_162, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_145_145, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_146_146, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_147_147);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_162;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_145;
                      next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_130_130;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_146_146;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_147_147;
                      STATE_VARIABLE_NumItemsLeft_0_70 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      STATE_VARIABLE_Errors_0_84 = next_value_of_STATE_VARIABLE_Errors_0_84;
                      STATE_VARIABLE_LineContext_0_86 = next_value_of_STATE_VARIABLE_LineContext_0_86;
                      STATE_VARIABLE_LinePosn_0_88 = next_value_of_STATE_VARIABLE_LinePosn_0_88;
                      continue;
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
parse_tree__parse_module__read_next_item_or_marker_11_p_0(
  MR_String FileName_12,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word ModuleName_15,
  MR_Word * ReadIOMResult_16,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_21,
  MR_Word * STATE_VARIABLE_SeqNumCounter_22,
  MR_Word STATE_VARIABLE_LineContext_0_23,
  MR_Word * STATE_VARIABLE_LineContext_24,
  MR_Word STATE_VARIABLE_LinePosn_0_25,
  MR_Word * STATE_VARIABLE_LinePosn_26)
{
  MR_Word ReadTermResult_20;

  mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_12, FileString_13, FileStringLen_14, STATE_VARIABLE_LineContext_0_23, STATE_VARIABLE_LineContext_24, STATE_VARIABLE_LinePosn_0_25, STATE_VARIABLE_LinePosn_26, &ReadTermResult_20);
  switch (MR_tag((MR_Word) ReadTermResult_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ReadIOMResult_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_22 = STATE_VARIABLE_SeqNumCounter_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ErrorMsg_28 = ((MR_String) ((MR_hl_field(1, ReadTermResult_20, (MR_Integer) 0))));
        MR_Integer LineNumber_29 = ((MR_Integer) ((MR_hl_field(1, ReadTermResult_20, (MR_Integer) 1))));
        MR_Word Context_30;
        MR_Word Pieces_31;
        MR_Word Spec_32;
        MR_Word Var_39;

        Context_30 = mercury__term_context__context_init_2_f_0(FileName_12, LineNumber_29);
        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (ErrorMsg_28));
        }
        {
          Pieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_31, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Pieces_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
        }
        {
          Spec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
          MR_hl_field(1, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_32, 3) = ((MR_Box) (Context_30));
          MR_hl_field(1, Spec_32, 4) = ((MR_Box) (Pieces_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ReadIOMResult_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
        }
        *STATE_VARIABLE_SeqNumCounter_22 = STATE_VARIABLE_SeqNumCounter_0_21;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarSet_33 = ((MR_Word) ((MR_hl_field(2, ReadTermResult_20, (MR_Integer) 0))));
        MR_Word Term_34 = ((MR_Word) ((MR_hl_field(2, ReadTermResult_20, (MR_Integer) 1))));
        MR_Integer SeqNum_35;
        MR_Word MaybeItemOrMarker_36;
        MR_Word Var_44;

        mercury__counter__allocate_3_p_0(&SeqNum_35, STATE_VARIABLE_SeqNumCounter_0_21, STATE_VARIABLE_SeqNumCounter_22);
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (SeqNum_35));
        }
        parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_15, VarSet_33, Term_34, Var_44, &MaybeItemOrMarker_36);
        if (((MR_tag((MR_Word) MaybeItemOrMarker_36)) == (MR_Integer) 0))
        {
          MR_Word Specs_38 = ((MR_Word) ((MR_hl_field(0, MaybeItemOrMarker_36, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_16 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (VarSet_33));
            MR_hl_field(2, base, 1) = ((MR_Box) (Term_34));
            MR_hl_field(2, base, 2) = ((MR_Box) (Specs_38));
          }
        }
        else
        {
          MR_Word ItemOrMarker_37 = ((MR_Word) ((MR_hl_field(1, MaybeItemOrMarker_36, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_16 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) (VarSet_33));
            MR_hl_field(3, base, 1) = ((MR_Box) (Term_34));
            MR_hl_field(3, base, 2) = ((MR_Box) (ItemOrMarker_37));
          }
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_module_header_11_p_0(
  MR_String FileString_12,
  MR_Integer FileStringLen_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_String SourceFileName_16,
  MR_Word * MaybeModuleHeader_17,
  MR_Word * STATE_VARIABLE_SeqNumCounter_32,
  MR_Word STATE_VARIABLE_LineContext_0_33,
  MR_Word * STATE_VARIABLE_LineContext_34,
  MR_Word STATE_VARIABLE_LinePosn_0_35,
  MR_Word * STATE_VARIABLE_LinePosn_36)
{
  MR_Word ModuleDeclPresent_21;
  MR_Word STATE_VARIABLE_SeqNumCounter_38_38;
  MR_String _SourceFileName_22;

  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_38_38);
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_12, FileStringLen_13, DefaultModuleName_14, DefaultExpectationContexts_15, &ModuleDeclPresent_21, (MR_Integer) 0, SourceFileName_16, &_SourceFileName_22, STATE_VARIABLE_SeqNumCounter_38_38, STATE_VARIABLE_SeqNumCounter_32, STATE_VARIABLE_LineContext_0_33, STATE_VARIABLE_LineContext_34, STATE_VARIABLE_LinePosn_0_35, STATE_VARIABLE_LinePosn_36);
  switch (MR_tag((MR_Word) ModuleDeclPresent_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_25 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_21, (MR_Integer) 2))));
        MR_Word Errors0_26;
        MR_Word Errors_27;
        MR_Word Var_45;

        Errors0_26 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (NoModuleSpec_25));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, Var_45, Errors0_26, &Errors_27);
        *MaybeModuleHeader_17 = (MR_Word) ((MR_Word) (Errors_27));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, (MR_Integer) 0))));
        MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, (MR_Integer) 1))));
        MR_Word WrongModuleSpec_30 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, (MR_Integer) 2))));
        MR_Word Errors1_31;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word NoModuleSpec_53;
        MR_Word Errors0_54;
        MR_Word Errors_55;
        MR_Word Pieces_58;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_81;

        {
          Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_73, 1) = ((MR_Box) (DefaultModuleName_14));
        }
        {
          Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_81, 1) = ((MR_Box) (ModuleName_28));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9])));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[8])));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[7])));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[76])));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
        }
        {
          Pieces_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[82])));
          MR_hl_field(1, Pieces_58, 1) = ((MR_Box) (Var_61));
        }
        {
          NoModuleSpec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NoModuleSpec_53, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_wrong_module_start\'/3"));
          MR_hl_field(1, NoModuleSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, NoModuleSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, NoModuleSpec_53, 3) = ((MR_Box) (ModuleNameContext_29));
          MR_hl_field(1, NoModuleSpec_53, 4) = ((MR_Box) (Pieces_58));
        }
        Errors0_54 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (NoModuleSpec_53));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, Var_48, Errors0_54, &Errors1_31);
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (WrongModuleSpec_30));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, Var_51, Errors1_31, &Errors_55);
        *MaybeModuleHeader_17 = (MR_Word) ((MR_Word) (Errors_55));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_56 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_21, (MR_Integer) 0))));
        MR_Word ModuleNameContext_57 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_21, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModuleHeader_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_56));
          MR_hl_field(1, base, 1) = ((MR_Box) (ModuleNameContext_57));
        }
      }
      break;
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
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[14])));
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_7_p_0(
  MR_Word _Globals_8,
  MR_Word FileNameAndStream_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreeTransOpt_11,
  MR_Word * Errors_12)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_7_p_0(FileNameAndStream_9, DefaultModuleName_10, MaybeParseTreeTransOpt_11, Errors_12);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTree_19;
  MR_Word conv0_STATE_VARIABLE_Errors_40;

  parse_tree__parse_module__read_parse_tree_opt_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTree_19, &conv0_STATE_VARIABLE_Errors_40);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTree_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_40));
}

void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word FileNameAndStream_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreeTransOpt_11,
  MR_Word * Errors_12)
{
  MR_Word MaybeParseTreeOpt_16;
  MR_Word Errors0_17;
  MR_Word Var_15;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]), &Var_15, (MR_Word) (&parse_tree__parse_module_scalar_common_7[5]), &MaybeParseTreeOpt_16, &Errors0_17);
  if ((MaybeParseTreeOpt_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeTransOpt_11 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_12 = Errors0_17;
  }
  else
  {
    MR_Word ParseTreeOpt_18 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeOpt_16, (MR_Integer) 0))));
    MR_Word ParseTreeTransOpt_19;
    MR_Word ConvertSpecs_20;

    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(ParseTreeOpt_18, &ParseTreeTransOpt_19, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeTransOpt_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeTransOpt_19));
    }
    parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_20, Errors0_17, Errors_12);
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_7_p_0(
  MR_Word _Globals_8,
  MR_Word FileNameAndStream_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreePlainOpt_11,
  MR_Word * Errors_12)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_112_108_97_105_110_95_111_112_116_95_95_91_49_93_95_48_7_p_0(FileNameAndStream_9, DefaultModuleName_10, MaybeParseTreePlainOpt_11, Errors_12);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_112_108_97_105_110_95_111_112_116_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTree_19;
  MR_Word conv0_STATE_VARIABLE_Errors_40;

  parse_tree__parse_module__read_parse_tree_opt_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTree_19, &conv0_STATE_VARIABLE_Errors_40);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTree_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_40));
}

void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_112_108_97_105_110_95_111_112_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word FileNameAndStream_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreePlainOpt_11,
  MR_Word * Errors_12)
{
  MR_Word MaybeParseTreeOpt_16;
  MR_Word Errors0_17;
  MR_Word Var_15;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]), &Var_15, (MR_Word) (&parse_tree__parse_module_scalar_common_7[4]), &MaybeParseTreeOpt_16, &Errors0_17);
  if ((MaybeParseTreeOpt_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreePlainOpt_11 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_12 = Errors0_17;
  }
  else
  {
    MR_Word ParseTreeOpt_18 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeOpt_16, (MR_Integer) 0))));
    MR_Word ParseTreePlainOpt_19;
    MR_Word ConvertSpecs_20;

    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(ParseTreeOpt_18, &ParseTreePlainOpt_19, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreePlainOpt_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreePlainOpt_19));
    }
    parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_20, Errors0_17, Errors_12);
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTreeInt_19;
  MR_Word conv0_STATE_VARIABLE_Errors_32;

  parse_tree__parse_module__read_parse_tree_int_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTreeInt_19, &conv0_STATE_VARIABLE_Errors_32);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTreeInt_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_32));
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int3_10_p_0(
  MR_Word Globals_11,
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTreeInt3_17,
  MR_Word * Errors_18)
{
  MR_Word MaybeInitParseTreeInt_21;
  MR_Word Errors0_22;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, (MR_Word) (&parse_tree__parse_module_scalar_common_7[3]), &MaybeInitParseTreeInt_21, &Errors0_22);
  if ((MaybeInitParseTreeInt_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt3_17 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_18 = Errors0_22;
  }
  else
  {
    MR_Word InitParseTreeInt_23 = ((MR_Word) ((MR_hl_field(1, MaybeInitParseTreeInt_21, (MR_Integer) 0))));
    MR_Word ParseTreeInt3_24;
    MR_Word ConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_41;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(InitParseTreeInt_23, &ParseTreeInt3_24, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt3_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt3_24));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 8, &HaltAtInvalidInterface_41);
    switch (HaltAtInvalidInterface_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_18 = Errors0_22;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_25, Errors0_22, Errors_18);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTreeInt_19;
  MR_Word conv0_STATE_VARIABLE_Errors_32;

  parse_tree__parse_module__read_parse_tree_int_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTreeInt_19, &conv0_STATE_VARIABLE_Errors_32);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTreeInt_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_32));
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int2_10_p_0(
  MR_Word Globals_11,
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTreeInt2_17,
  MR_Word * Errors_18)
{
  MR_Word MaybeInitParseTreeInt_21;
  MR_Word Errors0_22;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, (MR_Word) (&parse_tree__parse_module_scalar_common_7[2]), &MaybeInitParseTreeInt_21, &Errors0_22);
  if ((MaybeInitParseTreeInt_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt2_17 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_18 = Errors0_22;
  }
  else
  {
    MR_Word InitParseTreeInt_23 = ((MR_Word) ((MR_hl_field(1, MaybeInitParseTreeInt_21, (MR_Integer) 0))));
    MR_Word ParseTreeInt2_24;
    MR_Word ConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_41;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(InitParseTreeInt_23, &ParseTreeInt2_24, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt2_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt2_24));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 8, &HaltAtInvalidInterface_41);
    switch (HaltAtInvalidInterface_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_18 = Errors0_22;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_25, Errors0_22, Errors_18);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTreeInt_19;
  MR_Word conv0_STATE_VARIABLE_Errors_32;

  parse_tree__parse_module__read_parse_tree_int_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTreeInt_19, &conv0_STATE_VARIABLE_Errors_32);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTreeInt_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_32));
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int1_10_p_0(
  MR_Word Globals_11,
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTreeInt1_17,
  MR_Word * Errors_18)
{
  MR_Word MaybeInitParseTreeInt_21;
  MR_Word Errors0_22;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, (MR_Word) (&parse_tree__parse_module_scalar_common_7[1]), &MaybeInitParseTreeInt_21, &Errors0_22);
  if ((MaybeInitParseTreeInt_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt1_17 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_18 = Errors0_22;
  }
  else
  {
    MR_Word InitParseTreeInt_23 = ((MR_Word) ((MR_hl_field(1, MaybeInitParseTreeInt_21, (MR_Integer) 0))));
    MR_Word ParseTreeInt1_24;
    MR_Word ConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_41;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(InitParseTreeInt_23, &ParseTreeInt1_24, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt1_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt1_24));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 8, &HaltAtInvalidInterface_41);
    switch (HaltAtInvalidInterface_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_18 = Errors0_22;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_25, Errors0_22, Errors_18);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTreeInt_19;
  MR_Word conv0_STATE_VARIABLE_Errors_32;

  parse_tree__parse_module__read_parse_tree_int_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTreeInt_19, &conv0_STATE_VARIABLE_Errors_32);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTreeInt_19));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_32));
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_int0_10_p_0(
  MR_Word Globals_11,
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTreeInt0_17,
  MR_Word * Errors_18)
{
  MR_Word MaybeInitParseTreeInt_21;
  MR_Word Errors0_22;

  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, (MR_Word) (&parse_tree__parse_module_scalar_common_7[0]), &MaybeInitParseTreeInt_21, &Errors0_22);
  if ((MaybeInitParseTreeInt_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt0_17 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_18 = Errors0_22;
  }
  else
  {
    MR_Word InitParseTreeInt_23 = ((MR_Word) ((MR_hl_field(1, MaybeInitParseTreeInt_21, (MR_Integer) 0))));
    MR_Word ParseTreeInt0_24;
    MR_Word ConvertSpecs_25;
    MR_Word HaltAtInvalidInterface_41;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(InitParseTreeInt_23, &ParseTreeInt0_24, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt0_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt0_24));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 8, &HaltAtInvalidInterface_41);
    switch (HaltAtInvalidInterface_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_18 = Errors0_22;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_25, Errors0_22, Errors_18);
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_module__actually_read_module_src_10_p_0(
  MR_Word _Globals_11,
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * Errors_18)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_115_114_99_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, MaybeParseTree_17, Errors_18);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_115_114_99_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeParseTree_17;
  MR_Word conv0_STATE_VARIABLE_Errors_35;

  parse_tree__parse_module__read_parse_tree_src_9_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv1_MaybeParseTree_17, &conv0_STATE_VARIABLE_Errors_35);
  *wrapper_arg_8 = ((MR_Box) (conv1_MaybeParseTree_17));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_35));
}

void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_115_114_99_95_95_91_49_93_95_48_10_p_0(
  MR_Word FileNameAndStream_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * MaybeModuleTimestampRes_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * Errors_18)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(FileNameAndStream_12, DefaultModuleName_13, DefaultExpectationContexts_14, ReadModuleAndTimestamps_15, MaybeModuleTimestampRes_16, (MR_Word) (&parse_tree__parse_module_scalar_common_4[1]), MaybeParseTree_17, Errors_18);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_10_p_0(
  MR_Word FileNameAndStream_11,
  MR_Word DefaultModuleName_12,
  MR_Word DefaultExpectationContexts_13,
  MR_Word ReadModuleAndTimestamps_14,
  MR_Word * MaybeModuleTimestampRes_15,
  MR_Word ReadParseTree_16,
  MR_Word * MaybeParseTree_17,
  MR_Word * Errors_18)
{
  MR_bool succeeded;
  MR_Word FileStream_21 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_11, (MR_Integer) 1))));
  MR_String FileStreamName_22;
  MR_Word OldTimestamp_27;
  MR_Word Var_49;
  MR_Word Var_68;

  mercury__io__input_stream_name_4_p_0(FileStream_21, &FileStreamName_22);
  if (((MR_tag((MR_Word) ReadModuleAndTimestamps_14)) == (MR_Integer) 0))
  {
    MR_Word Var_85 = ((MR_Unsigned) ((MR_hl_field(0, ReadModuleAndTimestamps_14, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Var_85) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TimestampResult_24;

          mercury__io__file__file_modification_time_4_p_0(FileStreamName_22, &TimestampResult_24);
          if (((MR_tag((MR_Word) TimestampResult_24)) == (MR_Integer) 1))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeModuleTimestampRes_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (TimestampResult_24));
            }
          else
          {
            MR_Word Timestamp_25 = ((MR_Word) ((MR_hl_field(0, TimestampResult_24, (MR_Integer) 0))));
            MR_Word Var_45;
            MR_Word Var_46;

            Var_46 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_25);
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeModuleTimestampRes_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        *MaybeModuleTimestampRes_15 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
  else
  {
    MR_Word TimestampResult_79;

    mercury__io__file__file_modification_time_4_p_0(FileStreamName_22, &TimestampResult_79);
    if (((MR_tag((MR_Word) TimestampResult_79)) == (MR_Integer) 1))
    {
      MR_Word Var_70 = (MR_Word) (TimestampResult_79);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModuleTimestampRes_15 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_70));
      }
    }
    else
    {
      MR_Word Timestamp_71 = ((MR_Word) ((MR_hl_field(0, TimestampResult_79, (MR_Integer) 0))));
      MR_Word Var_72;
      MR_Word Var_73;

      Var_73 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_71);
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModuleTimestampRes_15 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) ReadModuleAndTimestamps_14)) == (MR_Integer) 1);
  if (succeeded)
  {
    OldTimestamp_27 = ((MR_Word) ((MR_hl_field(1, ReadModuleAndTimestamps_14, (MR_Integer) 0))));
    succeeded = (*MaybeModuleTimestampRes_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(1, *MaybeModuleTimestampRes_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_68 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 0))));
        succeeded = libs__timestamp____Unify____timestamp_0_0(OldTimestamp_27, Var_68);
      }
    }
  }
  if (succeeded)
  {
    *MaybeParseTree_17 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_18 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  }
  else
  {
    MR_Word MaybeResult_28;

    mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_21, &MaybeResult_28);
    if (((MR_tag((MR_Word) MaybeResult_28)) == (MR_Integer) 1))
    {
      MR_Word ErrorCode_37 = ((MR_Word) ((MR_hl_field(1, MaybeResult_28, (MR_Integer) 2))));
      MR_String ErrorMsg0_38;
      MR_String ErrorMsg_39;

      *MaybeParseTree_17 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__io__error_message_2_p_0(ErrorCode_37, &ErrorMsg0_38);
      ErrorMsg_39 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_38);
      parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 2, (MR_Word) ((MR_Unsigned) 16U), ErrorMsg_39, Errors_18);
    }
    else
    {
      MR_String FileString_29 = ((MR_String) ((MR_hl_field(0, MaybeResult_28, (MR_Integer) 0))));
      MR_Integer NumCodeUnits_30 = ((MR_Integer) ((MR_hl_field(0, MaybeResult_28, (MR_Integer) 1))));
      MR_Integer FileStringLen_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
      MR_Box conv2_MaybeParseTree_17;
      MR_Box conv1_Errors_18;

      FileStringLen_31 = mercury__string__length_1_f_0(FileString_29);
      succeeded = (NumCodeUnits_30 == FileStringLen_31);
      if (!(succeeded))
      {
        MR_String Msg_32;
        MR_String Var_87;
        MR_String Var_89;
        MR_String Var_90;
        MR_String Var_97;
        MR_String Var_99;
        MR_String Var_100;
        MR_String Var_107;

        Var_87 = mercury__string__f_43_43_2_f_0(FileString_29, (MR_String) ">>>\n");
        Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "\n<<<\n", Var_87);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_2[1]), FileStringLen_31, &Var_90);
        Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
        Var_99 = mercury__string__f_43_43_2_f_0((MR_String) ", FileStringLen = ", Var_97);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_2[1]), NumCodeUnits_30, &Var_100);
        Var_107 = mercury__string__f_43_43_2_f_0(Var_100, Var_99);
        Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "NumCodeUnits = ", Var_107);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_module.do_actually_read_module\'/10", Msg_32);
          return;
        }
      }
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, ReadParseTree_16, (MR_Integer) 1))));
      func_0(((MR_Box) (ReadParseTree_16)), ((MR_Box) (FileStreamName_22)), ((MR_Box) (FileString_29)), ((MR_Box) (FileStringLen_31)), ((MR_Box) (&parse_tree__parse_module_scalar_common_1[4])), ((MR_Box) (((MR_Box) ((MR_Integer) 0)))), ((MR_Box) (DefaultModuleName_12)), ((MR_Box) (DefaultExpectationContexts_13)), &conv2_MaybeParseTree_17, &conv1_Errors_18);
      *MaybeParseTree_17 = ((MR_Word) (conv2_MaybeParseTree_17));
      *Errors_18 = ((MR_Word) (conv1_Errors_18));
    }
  }
  mercury__io__close_input_3_p_0(FileStream_21);
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
  MR_Word MaybeResult_16;

  mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_9, &MaybeResult_16);
  if (((MR_tag((MR_Word) MaybeResult_16)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_34 = ((MR_Word) ((MR_hl_field(1, MaybeResult_16, (MR_Integer) 2))));
    MR_String ErrorMsg0_35;
    MR_String ErrorMsg_36;
    MR_Word Spec_37;

    *ModuleName_13 = DefaultModuleName_10;
    mercury__io__error_message_2_p_0(ErrorCode_34, &ErrorMsg0_35);
    ErrorMsg_36 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_35);
    parse_tree__parse_error__io_error_to_error_spec_5_p_0((MR_Word) ((MR_Unsigned) 16U), ErrorMsg_36, &Spec_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_37));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_String FileString_17 = ((MR_String) ((MR_hl_field(0, MaybeResult_16, (MR_Integer) 0))));
    MR_Integer FileStringLen_18 = ((MR_Integer) ((MR_hl_field(0, MaybeResult_16, (MR_Integer) 1))));
    MR_Word SeqNumCounter0_19;
    MR_Word ModuleDeclPresent_22;
    MR_String _SourceFileName_23;
    MR_Word _SeqNumCounter_24;
    MR_Word _LineContext_25;
    MR_Word _LinePosn_26;

    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_19);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_17, FileStringLen_18, DefaultModuleName_10, DefaultExpectationContexts_11, &ModuleDeclPresent_22, (MR_Integer) 1, SourceFileName0_12, &_SourceFileName_23, SeqNumCounter0_19, &_SeqNumCounter_24, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &_LineContext_25, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_26);
    switch (MR_tag((MR_Word) ModuleDeclPresent_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ModuleName_13 = DefaultModuleName_10;
        break;
      case (MR_Integer) 1:
        *ModuleName_13 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_22, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        *ModuleName_13 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_22, (MR_Integer) 0))));
        break;
    }
    *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(
  MR_String FileString_16,
  MR_Integer FileStringLen_17,
  MR_Word DefaultModuleName_19,
  MR_Word DefaultExpectationContexts_20,
  MR_Word * ModuleDeclPresent_21,
  MR_Word MayChangeSourceFileName_22,
  MR_String STATE_VARIABLE_SourceFileName_0_56,
  MR_String * STATE_VARIABLE_SourceFileName_57,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_58,
  MR_Word * STATE_VARIABLE_SeqNumCounter_59,
  MR_Word STATE_VARIABLE_LineContext_0_60,
  MR_Word * STATE_VARIABLE_LineContext_61,
  MR_Word STATE_VARIABLE_LinePosn_0_62,
  MR_Word * STATE_VARIABLE_LinePosn_63)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstReadTerm_27;
    MR_Word STATE_VARIABLE_LineContext_64_64;
    MR_Word STATE_VARIABLE_LinePosn_65_65;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_SourceFileName_0_56, FileString_16, FileStringLen_17, STATE_VARIABLE_LineContext_0_60, &STATE_VARIABLE_LineContext_64_64, STATE_VARIABLE_LinePosn_0_62, &STATE_VARIABLE_LinePosn_65_65, &FirstReadTerm_27);
    switch (MR_tag((MR_Word) FirstReadTerm_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word FirstContext_86;

          FirstContext_86 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1);
          Var_80 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_81, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Var_81, 3) = ((MR_Box) (FirstContext_86));
            MR_hl_field(1, Var_81, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_80));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_81));
          }
          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_0_58;
          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer LineNumber_90 = ((MR_Integer) ((MR_hl_field(1, FirstReadTerm_27, (MR_Integer) 1))));
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word FirstContext_131;
          MR_Word Context_91;

          Context_91 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, LineNumber_90);
          FirstContext_131 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1);
          Var_129 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_130, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
            MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_130, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Var_130, 3) = ((MR_Box) (FirstContext_131));
            MR_hl_field(1, Var_130, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_129));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_130));
          }
          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_0_58;
          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_94 = ((MR_Word) ((MR_hl_field(2, FirstReadTerm_27, (MR_Integer) 0))));
          MR_Word Term_95 = ((MR_Word) ((MR_hl_field(2, FirstReadTerm_27, (MR_Integer) 1))));
          MR_Integer SeqNum_96;
          MR_Word MaybeItemOrMarker_97;
          MR_Word Var_105;
          MR_Word STATE_VARIABLE_SeqNumCounter_66_137;

          mercury__counter__allocate_3_p_0(&SeqNum_96, STATE_VARIABLE_SeqNumCounter_0_58, &STATE_VARIABLE_SeqNumCounter_66_137);
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (SeqNum_96));
          }
          parse_tree__parse_item__parse_item_or_marker_5_p_0(DefaultModuleName_19, VarSet_94, Term_95, Var_105, &MaybeItemOrMarker_97);
          if (((MR_tag((MR_Word) MaybeItemOrMarker_97)) == (MR_Integer) 0))
          {
            MR_Word LookAhead_54;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word FirstContext_85;
            MR_Word Specs_99 = ((MR_Word) ((MR_hl_field(0, MaybeItemOrMarker_97, (MR_Integer) 0))));
            MR_Word MaybeFirstIOM_136;

            {
              MaybeFirstIOM_136 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, MaybeFirstIOM_136, 0) = ((MR_Box) (VarSet_94));
              MR_hl_field(2, MaybeFirstIOM_136, 1) = ((MR_Box) (Term_95));
              MR_hl_field(2, MaybeFirstIOM_136, 2) = ((MR_Box) (Specs_99));
            }
            {
              LookAhead_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LookAhead_54, 0) = ((MR_Box) (MaybeFirstIOM_136));
            }
            FirstContext_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
            Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Var_77, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Var_77, 3) = ((MR_Box) (FirstContext_85));
              MR_hl_field(1, Var_77, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *ModuleDeclPresent_21 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (LookAhead_54));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
            }
            *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
            *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
            *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
            *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
          }
          else
          {
            MR_Word FirstIOM_31 = ((MR_Word) ((MR_hl_field(1, MaybeItemOrMarker_97, (MR_Integer) 0))));
            MR_Word MaybeFirstIOM_138;

            {
              MaybeFirstIOM_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, MaybeFirstIOM_138, 0) = ((MR_Box) (VarSet_94));
              MR_hl_field(3, MaybeFirstIOM_138, 1) = ((MR_Box) (Term_95));
              MR_hl_field(3, MaybeFirstIOM_138, 2) = ((MR_Box) (FirstIOM_31));
            }
            switch (MR_tag((MR_Word) FirstIOM_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word FirstLookAhead_82;
                  MR_Word FirstContext_83;

                  {
                    FirstLookAhead_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, FirstLookAhead_82, 0) = ((MR_Box) (MaybeFirstIOM_138));
                  }
                  FirstContext_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  {
                    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
                    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_75, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Var_75, 3) = ((MR_Box) (FirstContext_83));
                    MR_hl_field(1, Var_75, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *ModuleDeclPresent_21 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_82));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
                  }
                  *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                  *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
                  *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                  *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word FirstLookAhead_82;
                  MR_Word FirstContext_83;

                  {
                    FirstLookAhead_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, FirstLookAhead_82, 0) = ((MR_Box) (MaybeFirstIOM_138));
                  }
                  FirstContext_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  {
                    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
                    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_75, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Var_75, 3) = ((MR_Box) (FirstContext_83));
                    MR_hl_field(1, Var_75, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *ModuleDeclPresent_21 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_82));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
                  }
                  *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                  *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
                  *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                  *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, FirstIOM_31, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_74;
                      MR_Word Var_75;
                      MR_Word FirstLookAhead_82;
                      MR_Word FirstContext_83;

                      {
                        FirstLookAhead_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, FirstLookAhead_82, 0) = ((MR_Box) (MaybeFirstIOM_138));
                      }
                      FirstContext_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                      Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                      {
                        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
                        MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Var_75, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Var_75, 3) = ((MR_Box) (FirstContext_83));
                        MR_hl_field(1, Var_75, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        *ModuleDeclPresent_21 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_82));
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
                      }
                      *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                      *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
                      *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                      *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_67_67 = ((MR_String) ((MR_hl_field(3, FirstIOM_31, (MR_Integer) 1))));

                      switch (MayChangeSourceFileName_22) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_56 = STATE_VARIABLE_SourceFileName_67_67;
                            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_58 = STATE_VARIABLE_SeqNumCounter_66_137;
                            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_60 = STATE_VARIABLE_LineContext_64_64;
                            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_62 = STATE_VARIABLE_LinePosn_65_65;

                            // direct tailcall eliminated
                            ;
                            STATE_VARIABLE_SourceFileName_0_56 = next_value_of_STATE_VARIABLE_SourceFileName_0_56;
                            STATE_VARIABLE_SeqNumCounter_0_58 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_58;
                            STATE_VARIABLE_LineContext_0_60 = next_value_of_STATE_VARIABLE_LineContext_0_60;
                            STATE_VARIABLE_LinePosn_0_62 = next_value_of_STATE_VARIABLE_LinePosn_0_62;
                            continue;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word FirstLookAhead_32;
                            MR_Word FirstContext_33;
                            MR_Word Var_68;

                            {
                              FirstLookAhead_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, FirstLookAhead_32, 0) = ((MR_Box) (MaybeFirstIOM_138));
                            }
                            FirstContext_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                            {
                              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_68, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
                              MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Var_68, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                              MR_hl_field(1, Var_68, 3) = ((MR_Box) (FirstContext_33));
                              MR_hl_field(1, Var_68, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                              *ModuleDeclPresent_21 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_32));
                              MR_hl_field(0, base, 1) = ((MR_Box) (FirstContext_33));
                              MR_hl_field(0, base, 2) = ((MR_Box) (Var_68));
                            }
                            *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_67_67;
                            *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
                            *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                            *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word StartModuleName_34 = ((MR_Word) ((MR_hl_field(3, FirstIOM_31, (MR_Integer) 1))));
                      MR_Word ModuleNameContext_35 = ((MR_Word) ((MR_hl_field(3, FirstIOM_31, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_19, StartModuleName_34);
                      if (succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_21 = base;
                          MR_hl_field(2, base, 0) = ((MR_Box) (StartModuleName_34));
                          MR_hl_field(2, base, 1) = ((MR_Box) (ModuleNameContext_35));
                        }
                      else
                      {
                        MR_Word NameSpec_37;
                        MR_Word Var_73;

                        {
                          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_73, 0) = ((MR_Box) (ModuleNameContext_35));
                        }
                        parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_56, DefaultModuleName_19, DefaultExpectationContexts_20, StartModuleName_34, Var_73, &NameSpec_37);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_21 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (StartModuleName_34));
                          MR_hl_field(1, base, 1) = ((MR_Box) (ModuleNameContext_35));
                          MR_hl_field(1, base, 2) = ((MR_Box) (NameSpec_37));
                        }
                      }
                      *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                      *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_137;
                      *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                      *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                    }
                    break;
                }
                break;
            }
          }
        }
        break;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_SubMsg_4;

  parse_tree__parse_module__expectation_context_to_msg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SubMsg_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_SubMsg_4));
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
    ActualContext_13 = ((MR_Word) ((MR_hl_field(1, MaybeActualContext_11, (MR_Integer) 0))));
    succeeded = mercury__term_context__is_dummy_context_1_p_0(ActualContext_13);
    succeeded = !(succeeded);
  }
  if (succeeded)
    MaybeContext_14 = MaybeActualContext_11;
  else
    MaybeContext_14 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (FileName_7));
  }
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (ExpectedName_8));
  }
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (ActualName_10));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[8])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[7])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[6])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    MainPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[5])));
    MR_hl_field(1, MainPieces_15, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (MainPieces_15));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainMsg_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainMsg_16, 0) = ((MR_Box) (MaybeContext_14));
    MR_hl_field(3, MainMsg_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MainMsg_16, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, MainMsg_16, 3) = ((MR_Box) (Var_48));
  }
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ExpectationContexts_9, &SortedExpectationContexts0_17);
  Var_51 = mercury__term_context__dummy_context_0_f_0();
  mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedExpectationContexts0_17, ((MR_Box) (Var_51)), &SortedExpectationContexts_18);
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_4[0]), SortedExpectationContexts_18, &SubMsgs_19);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (MainMsg_16));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (SubMsgs_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
    MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_58));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____may_change_source_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____may_change_source_file_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____may_change_source_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____may_change_source_file_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____maybe_lookahead_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____maybe_module_decl_present_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____maybe_module_decl_present_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_module_header_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____maybe_module_header_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_module_header_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____maybe_module_header_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____maybe_require_module_decl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____maybe_require_module_decl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____missing_section_start_warning_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____missing_section_start_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_iom_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____read_iom_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____read_iom_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____read_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____read_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_module____Unify____version_number_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_module____Compare____version_number_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_version_number_result_0);
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
