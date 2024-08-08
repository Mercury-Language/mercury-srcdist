/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2024-08-08
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
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




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
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__486__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__483__1_1_p_0(
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
  MR_Word TypeInfo_for_PT_4,
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
  MR_Word TypeInfo_for_PT_3,
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
parse_tree__parse_module____Compare____maybe_require_module_decl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____maybe_require_module_decl_0_0(
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
  MR_Word TypeInfo_for_PT_4,
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
  MR_Word TypeInfo_for_PT_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_109_111_100_117_108_101_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_module__expectation_context_to_msg_2_p_0(
  MR_Word Context_3,
  MR_Word * SubMsg_4);

static void MR_CALL 
parse_tree__parse_module__parse_src_file_components_20_p_0(
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
parse_tree__parse_module__parse_src_file_submodule_21_p_0(
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

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_module__parse_int_file_10_p_0(
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
parse_tree__parse_module__parse_module_header_11_p_0(
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
parse_tree__parse_module__parse_int_file_sections_17_p_0(
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
parse_tree__parse_module__parse_int_file_section_16_p_0(
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

static void MR_CALL 
parse_tree__parse_module__parse_item_sequence_23_p_0(
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
parse_tree__parse_module__parse_item_sequence_inner_25_p_0(
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
parse_tree__parse_module__parse_next_item_or_marker_11_p_0(
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(
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

static MR_Word MR_CALL 
parse_tree__parse_module__report_missing_module_start_1_f_0(
  MR_Word FirstContext_3);

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


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[124][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[1][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][4];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[124][2] = {
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
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not start with a"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "interface sections."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not have two consecutive"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an interface file"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected the start of an"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "section,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unexpected version_numbers record"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[66])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by either an"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[63])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[56])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "missing"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at whose end it appears,"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not for the module"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "version number records"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "generated interface files."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "anywhere except in automaticly"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not appear"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[6])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module must start with a"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[16])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for the wrong module"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module starts with a"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got moduile"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: there should be no code"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "after the"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[121])))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
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

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][4] = {
  /* row   0 */
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
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__486__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_33)), ((MR_Box) (HeadVar__2_61)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__483__1_1_p_0(
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word SubResult1_8;

      parse_tree__error_spec____Compare____error_spec_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Integer Var_16 = (MR_Integer) (ArgX2_9);
        MR_Integer Var_17 = (MR_Integer) (ArgY2_10);

        succeeded = (Var_16 < Var_17);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_16 > Var_17);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
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

    parse_tree__prog_item____Compare____maybe_version_numbers_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
  MR_Word TypeInfo_for_PT_4,
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
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____read_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_3,
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

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
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

static void MR_CALL 
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

static MR_bool MR_CALL 
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_8;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
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
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_6;

              parse_tree__parse_module____Compare____maybe_lookahead_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                  parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
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
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_14;

              mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
              succeeded = (SubResult1_14 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_14;
              else
              {
                MR_Word SubResult2_17;

                mercury__term_context____Compare____term_context_0_0(&SubResult2_17, ArgX2_15, ArgY2_16);
                succeeded = (SubResult2_17 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_17;
                else
                  parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX3_18, ArgY3_19);
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
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
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_22;

              mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_22, ArgX1_20, ArgY1_21);
              succeeded = (SubResult1_22 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_22;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_23, ArgY2_24);
            }
            break;
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
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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

    parse_tree__parse_module____Compare____read_iom_result_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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

              parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_16;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &SubResult1_16, ((MR_Box) (ArgX1_14)), ((MR_Box) (ArgY1_15)));
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Word SubResult2_19;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult2_19, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                succeeded = (SubResult2_19 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_19;
                else
                  parse_tree__parse_types____Compare____item_or_marker_0_0(HeadVar__1_1, ArgX3_20, ArgY3_21);
              }
            }
            break;
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
  MR_Word TypeInfo_for_PT_4,
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
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_3,
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

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
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
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
  }
}

void MR_CALL 
parse_tree__parse_module__parse_src_file_7_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_30,
  MR_String FileString_9,
  MR_Integer FileStringLen_10,
  MR_Word DefaultModuleName_11,
  MR_Word DefaultExpectationContexts_12,
  MR_Word * MaybeParseTree_13,
  MR_Word * STATE_VARIABLE_Errors_31)
{
  MR_Word ModuleDeclPresent_18;
  MR_Word InitLookAhead_19;
  MR_Word ModuleName_22;
  MR_Word ModuleNameContext_23;
  MR_Word FinalLookAhead_27;
  MR_Word ModuleComponents_28;
  MR_Word ParseTree_29;
  MR_Word STATE_VARIABLE_Errors_37_37;
  MR_Word STATE_VARIABLE_SeqNumCounter_39_39;
  MR_String STATE_VARIABLE_SourceFileName_42_42;
  MR_Word STATE_VARIABLE_SeqNumCounter_43_43;
  MR_Word STATE_VARIABLE_LineContext_44_44;
  MR_Word STATE_VARIABLE_LinePosn_45_45;
  MR_Word STATE_VARIABLE_Errors_48_48;
  MR_Word Var_55;
  MR_String STATE_VARIABLE_SourceFileName_56_56;
  MR_Word STATE_VARIABLE_SeqNumCounter_57_57;
  MR_Word STATE_VARIABLE_Errors_58_58;
  MR_Word STATE_VARIABLE_LineContext_59_59;
  MR_Word STATE_VARIABLE_LinePosn_60_60;

  STATE_VARIABLE_Errors_37_37 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_39_39);
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_9, FileStringLen_10, DefaultModuleName_11, DefaultExpectationContexts_12, &ModuleDeclPresent_18, (MR_Integer) 1, STATE_VARIABLE_SourceFileName_0_30, &STATE_VARIABLE_SourceFileName_42_42, STATE_VARIABLE_SeqNumCounter_39_39, &STATE_VARIABLE_SeqNumCounter_43_43, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &STATE_VARIABLE_LineContext_44_44, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_45_45);
  switch (MR_tag((MR_Word) ModuleDeclPresent_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_21;
        MR_Word Var_47;

        InitLookAhead_19 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, (MR_Integer) 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, (MR_Integer) 1))));
        NoModuleSpec_21 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, (MR_Integer) 2))));
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (NoModuleSpec_21));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, Var_47, STATE_VARIABLE_Errors_37_37, &STATE_VARIABLE_Errors_48_48);
        ModuleName_22 = DefaultModuleName_11;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WrongSpec_24;
        MR_Word Var_51;

        ModuleName_22 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, (MR_Integer) 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, (MR_Integer) 1))));
        WrongSpec_24 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, (MR_Integer) 2))));
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (WrongSpec_24));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, Var_51, STATE_VARIABLE_Errors_37_37, &STATE_VARIABLE_Errors_48_48);
        InitLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        ModuleName_22 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_18, (MR_Integer) 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_18, (MR_Integer) 1))));
        InitLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Errors_48_48 = STATE_VARIABLE_Errors_37_37;
      }
      break;
  }
  Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
  parse_tree__parse_module__parse_src_file_components_20_p_0(FileString_9, FileStringLen_10, ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_19, &FinalLookAhead_27, Var_55, &ModuleComponents_28, STATE_VARIABLE_SourceFileName_42_42, &STATE_VARIABLE_SourceFileName_56_56, STATE_VARIABLE_SeqNumCounter_43_43, &STATE_VARIABLE_SeqNumCounter_57_57, STATE_VARIABLE_Errors_48_48, &STATE_VARIABLE_Errors_58_58, STATE_VARIABLE_LineContext_44_44, &STATE_VARIABLE_LineContext_59_59, STATE_VARIABLE_LinePosn_45_45, &STATE_VARIABLE_LinePosn_60_60);
  parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(STATE_VARIABLE_SourceFileName_56_56, FileString_9, FileStringLen_10, ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_27, STATE_VARIABLE_SeqNumCounter_57_57, STATE_VARIABLE_Errors_58_58, STATE_VARIABLE_Errors_31, STATE_VARIABLE_LineContext_59_59, STATE_VARIABLE_LinePosn_60_60);
  {
    ParseTree_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree_29, 0) = ((MR_Box) (ModuleName_22));
    MR_hl_field(0, ParseTree_29, 1) = ((MR_Box) (ModuleNameContext_23));
    MR_hl_field(0, ParseTree_29, 2) = ((MR_Box) (ModuleComponents_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *MaybeParseTree_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ParseTree_29));
  }
}

static void MR_CALL 
parse_tree__parse_module__parse_src_file_components_20_p_0(
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
          parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_44, &ItemSeqFinalLookAhead_45, Var_109, &InclsCord_46, Var_110, &AvailsCord_47, Var_111, &FIMsCord_48, Var_112, &ItemsCord_49, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_113_113, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_114_114, STATE_VARIABLE_Errors_108_108, &STATE_VARIABLE_Errors_115_115, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_116_116, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_117_117);
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
          MR_Word IOMTerm_284 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_35, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Errors_220_382;
                MR_Word Var_383;
                MR_Word Var_384;
                MR_Word Var_385;
                MR_Word Var_386;
                MR_String STATE_VARIABLE_SourceFileName_225_387;
                MR_Word STATE_VARIABLE_SeqNumCounter_226_388;
                MR_Word STATE_VARIABLE_Errors_227_389;
                MR_Word STATE_VARIABLE_LineContext_228_390;
                MR_Word STATE_VARIABLE_LinePosn_229_391;
                MR_Word STATE_VARIABLE_ModuleComponents_230_392;
                MR_Word Var_393;
                MR_Word Var_395;
                MR_Word SectionKind_396;
                MR_Word SectionContext_397;
                MR_Word ItemSeqInitLookAhead_398;
                MR_Word ItemSeqFinalLookAhead_399;
                MR_Word InclsCord_400;
                MR_Word AvailsCord_401;
                MR_Word FIMsCord_402;
                MR_Word ItemsCord_403;
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
                  MR_Word Context_300;
                  MR_Word _MissingStartSectionWarning_298;

                  Context_300 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_300, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_298, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_220_382);
                  SectionKind_396 = (MR_Integer) 1;
                  SectionContext_397 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_302 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_396 = ((MR_Word) ((MR_hl_field(0, Var_302, (MR_Integer) 0))));
                  SectionContext_397 = ((MR_Word) ((MR_hl_field(0, Var_302, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_220_382 = STATE_VARIABLE_Errors_0_88;
                }
                {
                  ItemSeqInitLookAhead_398 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_398, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_383 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_384 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_385 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_386 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_398, &ItemSeqFinalLookAhead_399, Var_383, &InclsCord_400, Var_384, &AvailsCord_401, Var_385, &FIMsCord_402, Var_386, &ItemsCord_403, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_387, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_388, STATE_VARIABLE_Errors_220_382, &STATE_VARIABLE_Errors_227_389, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_390, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_391);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_396, SectionContext_397, InclsCord_400, AvailsCord_401, FIMsCord_402, ItemsCord_403, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_392);
                {
                  Var_395 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_395, 0) = ((MR_Box) (SectionKind_396));
                  MR_hl_field(0, Var_395, 1) = ((MR_Box) (SectionContext_397));
                }
                {
                  Var_393 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_393, 0) = ((MR_Box) (Var_395));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_393;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_399;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_392;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_387;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_388;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_389;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_390;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_391;
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
                MR_Word STATE_VARIABLE_Errors_220_408;
                MR_Word Var_409;
                MR_Word Var_410;
                MR_Word Var_411;
                MR_Word Var_412;
                MR_String STATE_VARIABLE_SourceFileName_225_413;
                MR_Word STATE_VARIABLE_SeqNumCounter_226_414;
                MR_Word STATE_VARIABLE_Errors_227_415;
                MR_Word STATE_VARIABLE_LineContext_228_416;
                MR_Word STATE_VARIABLE_LinePosn_229_417;
                MR_Word STATE_VARIABLE_ModuleComponents_230_418;
                MR_Word Var_419;
                MR_Word Var_421;
                MR_Word SectionKind_422;
                MR_Word SectionContext_423;
                MR_Word ItemSeqInitLookAhead_424;
                MR_Word ItemSeqFinalLookAhead_425;
                MR_Word InclsCord_426;
                MR_Word AvailsCord_427;
                MR_Word FIMsCord_428;
                MR_Word ItemsCord_429;
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
                  MR_Word Context_314;
                  MR_Word _MissingStartSectionWarning_312;

                  Context_314 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_314, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_312, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_220_408);
                  SectionKind_422 = (MR_Integer) 1;
                  SectionContext_423 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_316 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_422 = ((MR_Word) ((MR_hl_field(0, Var_316, (MR_Integer) 0))));
                  SectionContext_423 = ((MR_Word) ((MR_hl_field(0, Var_316, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_220_408 = STATE_VARIABLE_Errors_0_88;
                }
                {
                  ItemSeqInitLookAhead_424 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_424, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_409 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_410 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_411 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_412 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_424, &ItemSeqFinalLookAhead_425, Var_409, &InclsCord_426, Var_410, &AvailsCord_427, Var_411, &FIMsCord_428, Var_412, &ItemsCord_429, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_413, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_414, STATE_VARIABLE_Errors_220_408, &STATE_VARIABLE_Errors_227_415, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_416, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_417);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_422, SectionContext_423, InclsCord_426, AvailsCord_427, FIMsCord_428, ItemsCord_429, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_418);
                {
                  Var_421 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_421, 0) = ((MR_Box) (SectionKind_422));
                  MR_hl_field(0, Var_421, 1) = ((MR_Box) (SectionContext_423));
                }
                {
                  Var_419 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_419, 0) = ((MR_Box) (Var_421));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_419;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_425;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_418;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_413;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_414;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_415;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_416;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_417;
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
                MR_Word ItemSpecs_253 = ((MR_Word) ((MR_hl_field(2, IOM_50, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_Errors_216_335;
                MR_Word STATE_VARIABLE_Errors_220_434;
                MR_Word Var_435;
                MR_Word Var_436;
                MR_Word Var_437;
                MR_Word Var_438;
                MR_String STATE_VARIABLE_SourceFileName_225_439;
                MR_Word STATE_VARIABLE_SeqNumCounter_226_440;
                MR_Word STATE_VARIABLE_Errors_227_441;
                MR_Word STATE_VARIABLE_LineContext_228_442;
                MR_Word STATE_VARIABLE_LinePosn_229_443;
                MR_Word STATE_VARIABLE_ModuleComponents_230_444;
                MR_Word Var_445;
                MR_Word Var_447;
                MR_Word SectionKind_448;
                MR_Word SectionContext_449;
                MR_Word ItemSeqInitLookAhead_450;
                MR_Word ItemSeqFinalLookAhead_451;
                MR_Word InclsCord_452;
                MR_Word AvailsCord_453;
                MR_Word FIMsCord_454;
                MR_Word ItemsCord_455;
                MR_Word next_value_of_MaybePrevSection_25;
                MR_Word next_value_of_InitLookAhead_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_253, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_216_335);
                if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_328;
                  MR_Word _MissingStartSectionWarning_326;

                  Context_328 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_328, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_326, STATE_VARIABLE_Errors_216_335, &STATE_VARIABLE_Errors_220_434);
                  SectionKind_448 = (MR_Integer) 1;
                  SectionContext_449 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_330 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                  SectionKind_448 = ((MR_Word) ((MR_hl_field(0, Var_330, (MR_Integer) 0))));
                  SectionContext_449 = ((MR_Word) ((MR_hl_field(0, Var_330, (MR_Integer) 1))));
                  STATE_VARIABLE_Errors_220_434 = STATE_VARIABLE_Errors_216_335;
                }
                {
                  ItemSeqInitLookAhead_450 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_450, 0) = ((MR_Box) (ReadIOMResult_35));
                }
                Var_435 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_436 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_437 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_438 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_450, &ItemSeqFinalLookAhead_451, Var_435, &InclsCord_452, Var_436, &AvailsCord_453, Var_437, &FIMsCord_454, Var_438, &ItemsCord_455, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_439, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_440, STATE_VARIABLE_Errors_220_434, &STATE_VARIABLE_Errors_227_441, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_442, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_443);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_448, SectionContext_449, InclsCord_452, AvailsCord_453, FIMsCord_454, ItemsCord_455, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_444);
                {
                  Var_447 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_447, 0) = ((MR_Box) (SectionKind_448));
                  MR_hl_field(0, Var_447, 1) = ((MR_Box) (SectionContext_449));
                }
                {
                  Var_445 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_445, 0) = ((MR_Box) (Var_447));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_445;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_451;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_444;
                next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_439;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_440;
                next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_441;
                next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_442;
                next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_443;
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
                    MR_Word STATE_VARIABLE_Errors_220_512;
                    MR_Word Var_513;
                    MR_Word Var_514;
                    MR_Word Var_515;
                    MR_Word Var_516;
                    MR_String STATE_VARIABLE_SourceFileName_225_517;
                    MR_Word STATE_VARIABLE_SeqNumCounter_226_518;
                    MR_Word STATE_VARIABLE_Errors_227_519;
                    MR_Word STATE_VARIABLE_LineContext_228_520;
                    MR_Word STATE_VARIABLE_LinePosn_229_521;
                    MR_Word STATE_VARIABLE_ModuleComponents_230_522;
                    MR_Word Var_523;
                    MR_Word Var_525;
                    MR_Word SectionKind_526;
                    MR_Word SectionContext_527;
                    MR_Word ItemSeqInitLookAhead_528;
                    MR_Word ItemSeqFinalLookAhead_529;
                    MR_Word InclsCord_530;
                    MR_Word AvailsCord_531;
                    MR_Word FIMsCord_532;
                    MR_Word ItemsCord_533;
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
                      MR_Word Context_370;
                      MR_Word _MissingStartSectionWarning_368;

                      Context_370 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_370, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_368, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_220_512);
                      SectionKind_526 = (MR_Integer) 1;
                      SectionContext_527 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_372 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_526 = ((MR_Word) ((MR_hl_field(0, Var_372, (MR_Integer) 0))));
                      SectionContext_527 = ((MR_Word) ((MR_hl_field(0, Var_372, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_220_512 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_528 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_528, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_513 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_514 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_515 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_516 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_528, &ItemSeqFinalLookAhead_529, Var_513, &InclsCord_530, Var_514, &AvailsCord_531, Var_515, &FIMsCord_532, Var_516, &ItemsCord_533, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_517, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_518, STATE_VARIABLE_Errors_220_512, &STATE_VARIABLE_Errors_227_519, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_520, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_521);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_526, SectionContext_527, InclsCord_530, AvailsCord_531, FIMsCord_532, ItemsCord_533, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_522);
                    {
                      Var_525 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_525, 0) = ((MR_Box) (SectionKind_526));
                      MR_hl_field(0, Var_525, 1) = ((MR_Box) (SectionContext_527));
                    }
                    {
                      Var_523 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_523, 0) = ((MR_Box) (Var_525));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_523;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_529;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_522;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_517;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_518;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_519;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_520;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_521;
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
                    MR_Word STATE_VARIABLE_Errors_220_460;
                    MR_Word Var_461;
                    MR_Word Var_462;
                    MR_Word Var_463;
                    MR_Word Var_464;
                    MR_String STATE_VARIABLE_SourceFileName_225_465;
                    MR_Word STATE_VARIABLE_SeqNumCounter_226_466;
                    MR_Word STATE_VARIABLE_Errors_227_467;
                    MR_Word STATE_VARIABLE_LineContext_228_468;
                    MR_Word STATE_VARIABLE_LinePosn_229_469;
                    MR_Word STATE_VARIABLE_ModuleComponents_230_470;
                    MR_Word Var_471;
                    MR_Word Var_473;
                    MR_Word SectionKind_474;
                    MR_Word SectionContext_475;
                    MR_Word ItemSeqInitLookAhead_476;
                    MR_Word ItemSeqFinalLookAhead_477;
                    MR_Word InclsCord_478;
                    MR_Word AvailsCord_479;
                    MR_Word FIMsCord_480;
                    MR_Word ItemsCord_481;
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
                      MR_Word Context_342;
                      MR_Word _MissingStartSectionWarning_340;

                      Context_342 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_342, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_340, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_220_460);
                      SectionKind_474 = (MR_Integer) 1;
                      SectionContext_475 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_344 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_474 = ((MR_Word) ((MR_hl_field(0, Var_344, (MR_Integer) 0))));
                      SectionContext_475 = ((MR_Word) ((MR_hl_field(0, Var_344, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_220_460 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_476 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_476, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_461 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_462 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_463 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_464 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_476, &ItemSeqFinalLookAhead_477, Var_461, &InclsCord_478, Var_462, &AvailsCord_479, Var_463, &FIMsCord_480, Var_464, &ItemsCord_481, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_465, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_466, STATE_VARIABLE_Errors_220_460, &STATE_VARIABLE_Errors_227_467, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_468, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_469);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_474, SectionContext_475, InclsCord_478, AvailsCord_479, FIMsCord_480, ItemsCord_481, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_470);
                    {
                      Var_473 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_473, 0) = ((MR_Box) (SectionKind_474));
                      MR_hl_field(0, Var_473, 1) = ((MR_Box) (SectionContext_475));
                    }
                    {
                      Var_471 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_471, 0) = ((MR_Box) (Var_473));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_471;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_477;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_470;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_465;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_466;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_467;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_468;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_469;
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
                    MR_Word STATE_VARIABLE_Errors_220_486;
                    MR_Word Var_487;
                    MR_Word Var_488;
                    MR_Word Var_489;
                    MR_Word Var_490;
                    MR_String STATE_VARIABLE_SourceFileName_225_491;
                    MR_Word STATE_VARIABLE_SeqNumCounter_226_492;
                    MR_Word STATE_VARIABLE_Errors_227_493;
                    MR_Word STATE_VARIABLE_LineContext_228_494;
                    MR_Word STATE_VARIABLE_LinePosn_229_495;
                    MR_Word STATE_VARIABLE_ModuleComponents_230_496;
                    MR_Word Var_497;
                    MR_Word Var_499;
                    MR_Word SectionKind_500;
                    MR_Word SectionContext_501;
                    MR_Word ItemSeqInitLookAhead_502;
                    MR_Word ItemSeqFinalLookAhead_503;
                    MR_Word InclsCord_504;
                    MR_Word AvailsCord_505;
                    MR_Word FIMsCord_506;
                    MR_Word ItemsCord_507;
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
                      MR_Word Context_356;
                      MR_Word _MissingStartSectionWarning_354;

                      Context_356 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_356, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_354, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_220_486);
                      SectionKind_500 = (MR_Integer) 1;
                      SectionContext_501 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_358 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_500 = ((MR_Word) ((MR_hl_field(0, Var_358, (MR_Integer) 0))));
                      SectionContext_501 = ((MR_Word) ((MR_hl_field(0, Var_358, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_220_486 = STATE_VARIABLE_Errors_0_88;
                    }
                    {
                      ItemSeqInitLookAhead_502 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_502, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_487 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_488 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_489 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_490 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_502, &ItemSeqFinalLookAhead_503, Var_487, &InclsCord_504, Var_488, &AvailsCord_505, Var_489, &FIMsCord_506, Var_490, &ItemsCord_507, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_491, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_492, STATE_VARIABLE_Errors_220_486, &STATE_VARIABLE_Errors_227_493, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_494, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_495);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_500, SectionContext_501, InclsCord_504, AvailsCord_505, FIMsCord_506, ItemsCord_507, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_496);
                    {
                      Var_499 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_499, 0) = ((MR_Box) (SectionKind_500));
                      MR_hl_field(0, Var_499, 1) = ((MR_Box) (SectionContext_501));
                    }
                    {
                      Var_497 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_497, 0) = ((MR_Box) (Var_499));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_497;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_503;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_496;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_491;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_492;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_493;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_494;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_495;
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
                    MR_Word Pieces_52;
                    MR_Word Spec_53;
                    MR_Word Var_140;
                    MR_Word Var_141;
                    MR_Word Var_155;
                    MR_Word Var_157;
                    MR_Word STATE_VARIABLE_Errors_158_158;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    Var_141 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[48])));
                    Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
                    Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[6])), Var_140);
                    Var_155 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                    {
                      Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_components\'/20"));
                      MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(0, Spec_53, 3) = ((MR_Box) (Var_155));
                      MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
                    }
                    {
                      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_157, 0) = ((MR_Box) (Spec_53));
                      MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_157, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_158_158);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_94_94;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_158_158;
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
                    MR_Word STATE_VARIABLE_Errors_200_200;
                    MR_Word STATE_VARIABLE_ModuleComponents_203_203;
                    MR_String STATE_VARIABLE_SourceFileName_204_204;
                    MR_Word STATE_VARIABLE_SeqNumCounter_205_205;
                    MR_Word STATE_VARIABLE_Errors_206_206;
                    MR_Word STATE_VARIABLE_LineContext_207_207;
                    MR_Word STATE_VARIABLE_LinePosn_208_208;
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
                      MR_String RawBaseName_248 = ((MR_String) ((MR_hl_field(1, RawStartModuleName_54, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_59, CurModuleName_23);
                      if (succeeded)
                      {
                        {
                          StartModuleName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_58, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(1, StartModuleName_58, 1) = ((MR_Box) (RawBaseName_248));
                        }
                        STATE_VARIABLE_Errors_200_200 = STATE_VARIABLE_Errors_0_88;
                      }
                      else
                      {
                        MR_Word Var_174;
                        MR_Word Var_175;
                        MR_Word Var_176;
                        MR_Word Var_177;
                        MR_Word Var_179;
                        MR_Word Var_184;
                        MR_Word Var_185;
                        MR_Word Var_186;
                        MR_Word Var_187;
                        MR_Word Var_199;
                        MR_Word Pieces_242;
                        MR_Word Spec_243;

                        {
                          Var_177 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_177, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(3, Var_177, 1) = ((MR_Box) (RawStartModuleName_54));
                        }
                        {
                          Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_176, 0) = ((MR_Box) (Var_177));
                          MR_hl_field(1, Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_175 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_176);
                        {
                          Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(3, Var_187, 1) = ((MR_Box) (CurModuleName_23));
                        }
                        {
                          Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
                          MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
                        }
                        Var_185 = parse_tree__error_spec__color_as_correct_1_f_0(Var_186);
                        Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
                        Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[44])), Var_184);
                        Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_179);
                        Pieces_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[42])), Var_174);
                        {
                          Spec_243 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_components\'/20"));
                          MR_hl_field(0, Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                          MR_hl_field(0, Spec_243, 3) = ((MR_Box) (StartContext_55));
                          MR_hl_field(0, Spec_243, 4) = ((MR_Box) (Pieces_242));
                        }
                        {
                          Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_199, 0) = ((MR_Box) (Spec_243));
                          MR_hl_field(1, Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_199, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_200_200);
                        {
                          StartModuleName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_58, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(1, StartModuleName_58, 1) = ((MR_Box) (RawBaseName_248));
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
                      STATE_VARIABLE_Errors_200_200 = STATE_VARIABLE_Errors_0_88;
                    }
                    parse_tree__parse_module__parse_src_file_submodule_21_p_0(FileString_21, FileStringLen_22, ContainingModules_24, MaybePrevSection_25, CurModuleName_23, StartModuleName_58, StartContext_55, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_60, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_203_203, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_204_204, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_205_205, STATE_VARIABLE_Errors_200_200, &STATE_VARIABLE_Errors_206_206, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_207_207, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_208_208);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_27 = SubModuleFinalLookAhead_60;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_203_203;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_204_204;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_205_205;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_206_206;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_207_207;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_208_208;
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
                    MR_Word Var_539;
                    MR_Word Var_540;
                    MR_Word Var_541;
                    MR_Word Var_542;
                    MR_String STATE_VARIABLE_SourceFileName_225_543;
                    MR_Word STATE_VARIABLE_SeqNumCounter_226_544;
                    MR_Word STATE_VARIABLE_Errors_227_545;
                    MR_Word STATE_VARIABLE_LineContext_228_546;
                    MR_Word STATE_VARIABLE_LinePosn_229_547;
                    MR_Word STATE_VARIABLE_ModuleComponents_230_548;
                    MR_Word Var_549;
                    MR_Word Var_551;
                    MR_Word SectionKind_552 = ((MR_Unsigned) ((MR_hl_field(3, IOM_50, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word SectionContext_553 = ((MR_Word) ((MR_hl_field(3, IOM_50, (MR_Integer) 2))));
                    MR_Word ItemSeqFinalLookAhead_555;
                    MR_Word InclsCord_556;
                    MR_Word AvailsCord_557;
                    MR_Word FIMsCord_558;
                    MR_Word ItemsCord_559;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    Var_539 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_540 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_541 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_542 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, (MR_Word) ((MR_Unsigned) 0U), &ItemSeqFinalLookAhead_555, Var_539, &InclsCord_556, Var_540, &AvailsCord_557, Var_541, &FIMsCord_558, Var_542, &ItemsCord_559, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_543, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_544, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_227_545, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_546, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_547);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_552, SectionContext_553, InclsCord_556, AvailsCord_557, FIMsCord_558, ItemsCord_559, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_548);
                    {
                      Var_551 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_551, 0) = ((MR_Box) (SectionKind_552));
                      MR_hl_field(0, Var_551, 1) = ((MR_Box) (SectionContext_553));
                    }
                    {
                      Var_549 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_549, 0) = ((MR_Box) (Var_551));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_549;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_555;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_548;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_543;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_544;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_545;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_546;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_547;
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
                    MR_Word STATE_VARIABLE_Errors_216_216;
                    MR_Word STATE_VARIABLE_Errors_220_220;
                    MR_Word Var_221;
                    MR_Word Var_222;
                    MR_Word Var_223;
                    MR_Word Var_224;
                    MR_String STATE_VARIABLE_SourceFileName_225_225;
                    MR_Word STATE_VARIABLE_SeqNumCounter_226_226;
                    MR_Word STATE_VARIABLE_Errors_227_227;
                    MR_Word STATE_VARIABLE_LineContext_228_228;
                    MR_Word STATE_VARIABLE_LinePosn_229_229;
                    MR_Word STATE_VARIABLE_ModuleComponents_230_230;
                    MR_Word Var_231;
                    MR_Word Var_239;
                    MR_Word SectionKind_265;
                    MR_Word SectionContext_266;
                    MR_Word ItemSeqInitLookAhead_267;
                    MR_Word ItemSeqFinalLookAhead_268;
                    MR_Word InclsCord_269;
                    MR_Word AvailsCord_270;
                    MR_Word FIMsCord_271;
                    MR_Word ItemsCord_272;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_82;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_86;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_88;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_90;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_92;

                    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_76, STATE_VARIABLE_Errors_0_88, &STATE_VARIABLE_Errors_216_216);
                    if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_255;
                      MR_Word _MissingStartSectionWarning_254;

                      Context_255 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_284);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_6_p_0(CurModuleName_23, Context_255, STATE_VARIABLE_MissingStartSectionWarning_0_81, &_MissingStartSectionWarning_254, STATE_VARIABLE_Errors_216_216, &STATE_VARIABLE_Errors_220_220);
                      SectionKind_265 = (MR_Integer) 1;
                      SectionContext_266 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_219 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

                      SectionKind_265 = ((MR_Word) ((MR_hl_field(0, Var_219, (MR_Integer) 0))));
                      SectionContext_266 = ((MR_Word) ((MR_hl_field(0, Var_219, (MR_Integer) 1))));
                      STATE_VARIABLE_Errors_220_220 = STATE_VARIABLE_Errors_216_216;
                    }
                    {
                      ItemSeqInitLookAhead_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_267, 0) = ((MR_Box) (ReadIOMResult_35));
                    }
                    Var_221 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_222 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_223 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_224 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_21, FileStringLen_22, CurModuleName_23, ItemSeqInitLookAhead_267, &ItemSeqFinalLookAhead_268, Var_221, &InclsCord_269, Var_222, &AvailsCord_270, Var_223, &FIMsCord_271, Var_224, &ItemsCord_272, STATE_VARIABLE_SourceFileName_0_84, &STATE_VARIABLE_SourceFileName_225_225, STATE_VARIABLE_SeqNumCounter_94_94, &STATE_VARIABLE_SeqNumCounter_226_226, STATE_VARIABLE_Errors_220_220, &STATE_VARIABLE_Errors_227_227, STATE_VARIABLE_LineContext_95_95, &STATE_VARIABLE_LineContext_228_228, STATE_VARIABLE_LinePosn_96_96, &STATE_VARIABLE_LinePosn_229_229);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_23, SectionKind_265, SectionContext_266, InclsCord_269, AvailsCord_270, FIMsCord_271, ItemsCord_272, STATE_VARIABLE_ModuleComponents_0_82, &STATE_VARIABLE_ModuleComponents_230_230);
                    {
                      Var_239 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_239, 0) = ((MR_Box) (SectionKind_265));
                      MR_hl_field(0, Var_239, 1) = ((MR_Box) (SectionContext_266));
                    }
                    {
                      Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_231, 0) = ((MR_Box) (Var_239));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_231;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_268;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_82 = STATE_VARIABLE_ModuleComponents_230_230;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_84 = STATE_VARIABLE_SourceFileName_225_225;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_86 = STATE_VARIABLE_SeqNumCounter_226_226;
                    next_value_of_STATE_VARIABLE_Errors_0_88 = STATE_VARIABLE_Errors_227_227;
                    next_value_of_STATE_VARIABLE_LineContext_0_90 = STATE_VARIABLE_LineContext_228_228;
                    next_value_of_STATE_VARIABLE_LinePosn_0_92 = STATE_VARIABLE_LinePosn_229_229;
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
parse_tree__parse_module__parse_src_file_submodule_21_p_0(
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
  MR_Word STATE_VARIABLE_Errors_121_121;
  MR_Word Var_124;

  if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NoSectionPieces_39;
    MR_Word NoSectionSpec_40;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_71;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_85;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_120;

    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (StartModuleName_27));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[70])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[72])));
    Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[58])));
    Var_91 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[62])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[78])));
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[60])), Var_90);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_85);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[74])), Var_76);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_71);
    NoSectionPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_65);
    {
      NoSectionSpec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NoSectionSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_submodule\'/21"));
      MR_hl_field(0, NoSectionSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NoSectionSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, NoSectionSpec_40, 3) = ((MR_Box) (StartContext_28));
      MR_hl_field(0, NoSectionSpec_40, 4) = ((MR_Box) (NoSectionPieces_39));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) (NoSectionSpec_40));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, Var_120, STATE_VARIABLE_Errors_0_52, &STATE_VARIABLE_Errors_121_121);
    SectionKind_37 = (MR_Integer) 0;
    SectionContext_38 = mercury__term_context__dummy_context_0_f_0();
  }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, (MR_Integer) 0))));

    SectionKind_37 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 0))));
    SectionContext_38 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
    STATE_VARIABLE_Errors_121_121 = STATE_VARIABLE_Errors_0_52;
  }
  {
    NestedContainingModules_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NestedContainingModules_41, 0) = ((MR_Box) (StartModuleName_27));
    MR_hl_field(1, NestedContainingModules_41, 1) = ((MR_Box) (ContainingModules_24));
  }
  Var_124 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
  parse_tree__parse_module__parse_src_file_components_20_p_0(FileString_22, FileStringLen_23, StartModuleName_27, NestedContainingModules_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_29, FinalLookAhead_30, Var_124, &NestedModuleComponents_43, STATE_VARIABLE_SourceFileName_0_48, STATE_VARIABLE_SourceFileName_49, STATE_VARIABLE_SeqNumCounter_0_50, STATE_VARIABLE_SeqNumCounter_51, STATE_VARIABLE_Errors_121_121, STATE_VARIABLE_Errors_53, STATE_VARIABLE_LineContext_0_54, STATE_VARIABLE_LineContext_55, STATE_VARIABLE_LinePosn_0_56, STATE_VARIABLE_LinePosn_57);
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
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_36;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_56;

        Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[82])));
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
        }
        Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[84])), Var_41);
        Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_36);
        Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[6])), Var_24);
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_17, 3) = ((MR_Box) (EndContext_13));
          MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_fatal_error_4_p_0((MR_Integer) 4, Var_56, STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FinalLookAhead_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_11));
        }
      }
      else
      {
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_83;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_103;
        MR_Word Pieces_106;
        MR_Word Spec_107;

        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (EndedModuleName_12));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[87])));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[79])));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
        }
        Var_64 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
        Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[91])));
        {
          Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_91, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
        }
        Var_89 = parse_tree__error_spec__color_as_correct_1_f_0(Var_90);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[93])), Var_88);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_83);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_74);
        Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[86])), Var_63);
        {
          Spec_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(0, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_107, 3) = ((MR_Box) (EndContext_13));
          MR_hl_field(0, Spec_107, 4) = ((MR_Box) (Pieces_106));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Spec_107));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_fatal_error_4_p_0((MR_Integer) 4, Var_103, STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
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
        MR_Word Var_18;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_34;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_48;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_83;

        *STATE_VARIABLE_MissingStartSectionWarning_14 = (MR_Integer) 1;
        {
          Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_26, 1) = ((MR_Box) (CurModuleName_7));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[50])));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[49])));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_22));
        }
        Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[52])));
        Var_40 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[58])));
        Var_54 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[62])));
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[69])));
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[60])), Var_53);
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_48);
        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[54])), Var_39);
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_34);
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_28);
        {
          Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.generate_missing_start_section_warning_src\'/6"));
          MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_8));
          MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, Var_83, STATE_VARIABLE_Errors_0_15, STATE_VARIABLE_Errors_16);
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

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__486__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__483__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0(
  MR_String FileName_7,
  MR_String FileStr_8,
  MR_Integer FileStrLen_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreeTransOpt_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word MaybeModuleHeader_26;
  MR_Word SeqNumCounter1_27;
  MR_Word STATE_VARIABLE_LineContext_41_43;
  MR_Word STATE_VARIABLE_LinePosn_42_44;

  parse_tree__parse_module__parse_module_header_11_p_0(FileStr_8, FileStrLen_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), FileName_7, &MaybeModuleHeader_26, &SeqNumCounter1_27, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &STATE_VARIABLE_LineContext_41_43, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_42_44);
  if (((MR_tag((MR_Word) MaybeModuleHeader_26)) == (MR_Integer) 0))
  {
    *Errors_12 = (MR_Word) ((MR_Word) (MaybeModuleHeader_26));
    *MaybeParseTreeTransOpt_11 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ParseTreeOpt_18;
    MR_Word ParseTreeTransOpt_19;
    MR_Word ConvertSpecs_20;
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, (MR_Integer) 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, (MR_Integer) 1))));
    MR_Word FinalLookAhead_30;
    MR_Word InclsCord_31;
    MR_Word AvailsCord_32;
    MR_Word FIMsCord_33;
    MR_Word ItemsCord_34;
    MR_String SourceFileName_35;
    MR_Word SeqNumCounter_36;
    MR_Word Avails_37;
    MR_Word Imports_38;
    MR_Word Uses_39;
    MR_Word FIMs_40;
    MR_Word Items_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Errors_50_51;
    MR_Word STATE_VARIABLE_LineContext_51_52;
    MR_Word STATE_VARIABLE_LinePosn_52_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Errors0_68;

    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_50 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    parse_tree__parse_module__parse_item_sequence_23_p_0(FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_30, Var_46, &InclsCord_31, Var_47, &AvailsCord_32, Var_48, &FIMsCord_33, Var_49, &ItemsCord_34, FileName_7, &SourceFileName_35, SeqNumCounter1_27, &SeqNumCounter_36, Var_50, &STATE_VARIABLE_Errors_50_51, STATE_VARIABLE_LineContext_41_43, &STATE_VARIABLE_LineContext_51_52, STATE_VARIABLE_LinePosn_42_44, &STATE_VARIABLE_LinePosn_52_53);
    parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_35, FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) (MR_mkword(2, &parse_tree__parse_module_scalar_common_2[2])), FinalLookAhead_30, SeqNumCounter_36, STATE_VARIABLE_Errors_50_51, &Errors0_68, STATE_VARIABLE_LineContext_51_52, STATE_VARIABLE_LinePosn_52_53);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_5[0]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_module__parse_trans_opt_file_6_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (InclsCord_31));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Incls != []");
    Avails_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_32);
    parse_tree__item_util__avail_imports_uses_3_p_0(Avails_37, &Imports_38, &Uses_39);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_module__parse_trans_opt_file_6_p_0_2));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (Imports_38));
      MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Imports != []");
    FIMs_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_33);
    Items_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_34);
    {
      ParseTreeOpt_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParseTreeOpt_18, 0) = ((MR_Box) (ModuleName_28));
      MR_hl_field(0, ParseTreeOpt_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, ParseTreeOpt_18, 2) = ((MR_Box) (ModuleNameContext_29));
      MR_hl_field(0, ParseTreeOpt_18, 3) = ((MR_Box) (Uses_39));
      MR_hl_field(0, ParseTreeOpt_18, 4) = ((MR_Box) (FIMs_40));
      MR_hl_field(0, ParseTreeOpt_18, 5) = ((MR_Box) (Items_41));
    }
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(ParseTreeOpt_18, &ParseTreeTransOpt_19, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeTransOpt_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeTransOpt_19));
    }
    parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_20, Errors0_68, Errors_12);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__486__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__483__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0(
  MR_String FileName_7,
  MR_String FileStr_8,
  MR_Integer FileStrLen_9,
  MR_Word DefaultModuleName_10,
  MR_Word * MaybeParseTreePlainOpt_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word MaybeModuleHeader_26;
  MR_Word SeqNumCounter1_27;
  MR_Word STATE_VARIABLE_LineContext_41_43;
  MR_Word STATE_VARIABLE_LinePosn_42_44;

  parse_tree__parse_module__parse_module_header_11_p_0(FileStr_8, FileStrLen_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), FileName_7, &MaybeModuleHeader_26, &SeqNumCounter1_27, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &STATE_VARIABLE_LineContext_41_43, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_42_44);
  if (((MR_tag((MR_Word) MaybeModuleHeader_26)) == (MR_Integer) 0))
  {
    *Errors_12 = (MR_Word) ((MR_Word) (MaybeModuleHeader_26));
    *MaybeParseTreePlainOpt_11 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ParseTreeOpt_18;
    MR_Word ParseTreePlainOpt_19;
    MR_Word ConvertSpecs_20;
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, (MR_Integer) 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, (MR_Integer) 1))));
    MR_Word FinalLookAhead_30;
    MR_Word InclsCord_31;
    MR_Word AvailsCord_32;
    MR_Word FIMsCord_33;
    MR_Word ItemsCord_34;
    MR_String SourceFileName_35;
    MR_Word SeqNumCounter_36;
    MR_Word Avails_37;
    MR_Word Imports_38;
    MR_Word Uses_39;
    MR_Word FIMs_40;
    MR_Word Items_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Errors_50_51;
    MR_Word STATE_VARIABLE_LineContext_51_52;
    MR_Word STATE_VARIABLE_LinePosn_52_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Errors0_68;

    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_50 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    parse_tree__parse_module__parse_item_sequence_23_p_0(FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_30, Var_46, &InclsCord_31, Var_47, &AvailsCord_32, Var_48, &FIMsCord_33, Var_49, &ItemsCord_34, FileName_7, &SourceFileName_35, SeqNumCounter1_27, &SeqNumCounter_36, Var_50, &STATE_VARIABLE_Errors_50_51, STATE_VARIABLE_LineContext_41_43, &STATE_VARIABLE_LineContext_51_52, STATE_VARIABLE_LinePosn_42_44, &STATE_VARIABLE_LinePosn_52_53);
    parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_35, FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) (MR_mkword(2, &parse_tree__parse_module_scalar_common_2[1])), FinalLookAhead_30, SeqNumCounter_36, STATE_VARIABLE_Errors_50_51, &Errors0_68, STATE_VARIABLE_LineContext_51_52, STATE_VARIABLE_LinePosn_52_53);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_5[0]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_module__parse_plain_opt_file_6_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (InclsCord_31));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Incls != []");
    Avails_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_32);
    parse_tree__item_util__avail_imports_uses_3_p_0(Avails_37, &Imports_38, &Uses_39);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_module__parse_plain_opt_file_6_p_0_2));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (Imports_38));
      MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Imports != []");
    FIMs_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_33);
    Items_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_34);
    {
      ParseTreeOpt_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParseTreeOpt_18, 0) = ((MR_Box) (ModuleName_28));
      MR_hl_field(0, ParseTreeOpt_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, ParseTreeOpt_18, 2) = ((MR_Box) (ModuleNameContext_29));
      MR_hl_field(0, ParseTreeOpt_18, 3) = ((MR_Box) (Uses_39));
      MR_hl_field(0, ParseTreeOpt_18, 4) = ((MR_Box) (FIMs_40));
      MR_hl_field(0, ParseTreeOpt_18, 5) = ((MR_Box) (Items_41));
    }
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(ParseTreeOpt_18, &ParseTreePlainOpt_19, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreePlainOpt_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreePlainOpt_19));
    }
    parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_20, Errors0_68, Errors_12);
  }
}

void MR_CALL 
parse_tree__parse_module__parse_int3_file_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer FileStrLen_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word * MaybeParseTreeInt3_15,
  MR_Word * Errors_16)
{
  MR_Word MaybeParseTreeInt_19;
  MR_Word Errors0_20;

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 3, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt3_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, (MR_Integer) 0))));
    MR_Word ParseTreeInt3_22;
    MR_Word ConvertSpecs_23;
    MR_Word HaltAtInvalidInterface_29;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(ParseTreeInt_21, &ParseTreeInt3_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt3_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt3_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 8, &HaltAtInvalidInterface_29);
    switch (HaltAtInvalidInterface_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_23, Errors0_20, Errors_16);
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_module__parse_int2_file_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer FileStrLen_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word * MaybeParseTreeInt2_15,
  MR_Word * Errors_16)
{
  MR_Word MaybeParseTreeInt_19;
  MR_Word Errors0_20;

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 2, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt2_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, (MR_Integer) 0))));
    MR_Word ParseTreeInt2_22;
    MR_Word ConvertSpecs_23;
    MR_Word HaltAtInvalidInterface_29;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(ParseTreeInt_21, &ParseTreeInt2_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt2_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt2_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 8, &HaltAtInvalidInterface_29);
    switch (HaltAtInvalidInterface_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_23, Errors0_20, Errors_16);
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_module__parse_int1_file_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer FileStrLen_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word * MaybeParseTreeInt1_15,
  MR_Word * Errors_16)
{
  MR_Word MaybeParseTreeInt_19;
  MR_Word Errors0_20;

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 1, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt1_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, (MR_Integer) 0))));
    MR_Word ParseTreeInt1_22;
    MR_Word ConvertSpecs_23;
    MR_Word HaltAtInvalidInterface_29;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(ParseTreeInt_21, &ParseTreeInt1_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt1_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt1_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 8, &HaltAtInvalidInterface_29);
    switch (HaltAtInvalidInterface_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_23, Errors0_20, Errors_16);
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_module__parse_int0_file_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer FileStrLen_12,
  MR_Word DefaultModuleName_13,
  MR_Word DefaultExpectationContexts_14,
  MR_Word * MaybeParseTreeInt0_15,
  MR_Word * Errors_16)
{
  MR_Word MaybeParseTreeInt_19;
  MR_Word Errors0_20;

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 0, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt0_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, (MR_Integer) 0))));
    MR_Word ParseTreeInt0_22;
    MR_Word ConvertSpecs_23;
    MR_Word HaltAtInvalidInterface_29;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(ParseTreeInt_21, &ParseTreeInt0_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertSpecs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt0_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt0_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 8, &HaltAtInvalidInterface_29);
    switch (HaltAtInvalidInterface_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertSpecs_23, Errors0_20, Errors_16);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__parse_int_file_10_p_0(
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

  parse_tree__parse_module__parse_module_header_11_p_0(FileString_13, FileStringLen_14, DefaultModuleName_17, DefaultExpectationContexts_18, SourceFileName_12, &MaybeModuleHeader_23, &STATE_VARIABLE_SeqNumCounter_33_33, STATE_VARIABLE_LineContext_0_30, &STATE_VARIABLE_LineContext_34_34, STATE_VARIABLE_LinePosn_0_31, &STATE_VARIABLE_LinePosn_35_35);
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

    parse_tree__parse_module__parse_next_item_or_marker_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_24, &ReadIOMResult_52, STATE_VARIABLE_SeqNumCounter_33_33, &STATE_VARIABLE_SeqNumCounter_39_39, STATE_VARIABLE_LineContext_34_34, &STATE_VARIABLE_LineContext_40_40, STATE_VARIABLE_LinePosn_35_35, &STATE_VARIABLE_LinePosn_41_41);
    switch (MR_tag((MR_Word) ReadIOMResult_52)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_LookAhead_38_38 = (MR_Word) ((MR_Unsigned) 0U);
          VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
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
          VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_59 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_52, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) IOM_59)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  STATE_VARIABLE_LookAhead_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_LookAhead_38_38, 0) = ((MR_Box) (ReadIOMResult_52));
                }
                VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
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
                    VersionNumbersResult_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
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

      parse_tree__parse_module__parse_int_file_sections_17_p_0(FileString_13, FileStringLen_14, ModuleName_24, ModuleNameContext_25, IntFileKind_11, SourceFileName_12, MaybeVersionNumbers_29, STATE_VARIABLE_LookAhead_38_38, &STATE_VARIABLE_LookAhead_46_46, MaybeParseTreeInt_19, STATE_VARIABLE_SeqNumCounter_39_39, &STATE_VARIABLE_SeqNumCounter_47_47, &STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_LineContext_40_40, &STATE_VARIABLE_LineContext_49_49, STATE_VARIABLE_LinePosn_41_41, &STATE_VARIABLE_LinePosn_50_50);
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_11));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_24, Var_51, STATE_VARIABLE_LookAhead_46_46, STATE_VARIABLE_SeqNumCounter_47_47, STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_32, STATE_VARIABLE_LineContext_49_49, STATE_VARIABLE_LinePosn_50_50);
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
    MR_Word _SeqNumCounter_89;
    MR_Word Var_90;
    MR_Word Var_91;

    parse_tree__parse_module__parse_next_item_or_marker_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_15, &IOMResult_22, SeqNumCounter0_18, &_SeqNumCounter_89, STATE_VARIABLE_LineContext_0_35, &Var_90, STATE_VARIABLE_LinePosn_0_36, &Var_91);
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
        MR_Word Context_66;
        MR_Word Error_67;
        MR_Word Pieces_68;
        MR_Word Spec_71;
        MR_Word Var_85;

        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 6, ItemSpecs_29, STATE_VARIABLE_Errors_0_33, &STATE_VARIABLE_Errors_42_42);
        Context_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_28);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_76;
              MR_Word Var_77;

              Error_67 = (MR_Integer) 3;
              Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[123])));
              Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
              Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[120])), Var_76);
            }
            break;
          case (MR_Integer) 1:
            {
              Error_67 = (MR_Integer) 4;
              Pieces_68 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[116]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_67 = (MR_Integer) 4;
              Pieces_68 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[118]));
            }
            break;
        }
        {
          Spec_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(0, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_71, 3) = ((MR_Box) (Context_66));
          MR_hl_field(0, Spec_71, 4) = ((MR_Box) (Pieces_68));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_71));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_67, Var_85, STATE_VARIABLE_Errors_42_42, STATE_VARIABLE_Errors_34);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOMTerm_31 = ((MR_Word) ((MR_hl_field(3, IOMResult_22, (MR_Integer) 1))));
        MR_Word Context_43;
        MR_Word Error_44;
        MR_Word Pieces_45;
        MR_Word Spec_48;
        MR_Word Var_62;

        Context_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_31);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_53;
              MR_Word Var_54;

              Error_44 = (MR_Integer) 3;
              Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[123])));
              Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
              Pieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[120])), Var_53);
            }
            break;
          case (MR_Integer) 1:
            {
              Error_44 = (MR_Integer) 4;
              Pieces_45 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[116]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_44 = (MR_Integer) 4;
              Pieces_45 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[118]));
            }
            break;
        }
        {
          Spec_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(0, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_48, 3) = ((MR_Box) (Context_43));
          MR_hl_field(0, Spec_48, 4) = ((MR_Box) (Pieces_45));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_48));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_44, Var_62, STATE_VARIABLE_Errors_0_33, STATE_VARIABLE_Errors_34);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__parse_module_header_11_p_0(
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
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_12, FileStringLen_13, DefaultModuleName_14, DefaultExpectationContexts_15, &ModuleDeclPresent_21, (MR_Integer) 0, SourceFileName_16, &_SourceFileName_22, STATE_VARIABLE_SeqNumCounter_38_38, STATE_VARIABLE_SeqNumCounter_32, STATE_VARIABLE_LineContext_0_33, STATE_VARIABLE_LineContext_34, STATE_VARIABLE_LinePosn_0_35, STATE_VARIABLE_LinePosn_36);
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
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;

        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (DefaultModuleName_14));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[20])));
        }
        Var_61 = parse_tree__error_spec__color_as_correct_1_f_0(Var_62);
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (ModuleName_28));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
        }
        Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_75);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[114])), Var_73);
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_68);
        Pieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[112])), Var_60);
        {
          NoModuleSpec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NoModuleSpec_53, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_wrong_module_start\'/3"));
          MR_hl_field(0, NoModuleSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, NoModuleSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, NoModuleSpec_53, 3) = ((MR_Box) (ModuleNameContext_29));
          MR_hl_field(0, NoModuleSpec_53, 4) = ((MR_Box) (Pieces_58));
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
parse_tree__parse_module__parse_int_file_sections_17_p_0(
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
  parse_tree__parse_module__parse_int_file_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "interface", STATE_VARIABLE_LookAhead_0_52, &STATE_VARIABLE_LookAhead_62_62, &MaybeFirstRawItemBlock_31, STATE_VARIABLE_SeqNumCounter_0_54, &STATE_VARIABLE_SeqNumCounter_63_63, Var_64, &STATE_VARIABLE_Errors_65_65, STATE_VARIABLE_LineContext_0_57, &STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LinePosn_0_59, &STATE_VARIABLE_LinePosn_67_67);
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

          parse_tree__parse_module__parse_int_file_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "implementation", STATE_VARIABLE_LookAhead_62_62, STATE_VARIABLE_LookAhead_53, &MaybeSecondRawItemBlock_41, STATE_VARIABLE_SeqNumCounter_63_63, STATE_VARIABLE_SeqNumCounter_55, STATE_VARIABLE_Errors_65_65, &STATE_VARIABLE_Errors_81_81, STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LineContext_58, STATE_VARIABLE_LinePosn_67_67, STATE_VARIABLE_LinePosn_60);
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
                    Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_sections\'/17"));
                    MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(0, Spec_51, 3) = ((MR_Box) (SectionContext_43));
                    MR_hl_field(0, Spec_51, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[32])));
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
parse_tree__parse_module__parse_int_file_section_16_p_0(
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
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Context_60;
              MR_Word IOMPieces_61;
              MR_Word Pieces_62;
              MR_Word Spec_63;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_107;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_126;

              Context_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_34);
              IOMPieces_61 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_35);
              {
                Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_102, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[36])));
              }
              Var_100 = parse_tree__error_spec__color_as_correct_1_f_0(Var_101);
              Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
              Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_114);
              Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
              Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[38])), Var_112);
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
              Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])), Var_99);
              {
                Spec_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_section\'/16"));
                MR_hl_field(0, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, Spec_63, 3) = ((MR_Box) (Context_60));
                MR_hl_field(0, Spec_63, 4) = ((MR_Box) (Pieces_62));
              }
              {
                Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_126, 0) = ((MR_Box) (Spec_63));
                MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_126, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
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
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word Var_107;
                  MR_Word Var_112;
                  MR_Word Var_113;
                  MR_Word Var_114;
                  MR_Word Var_126;

                  Context_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_34);
                  IOMPieces_61 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_35);
                  {
                    Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_102, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[36])));
                  }
                  Var_100 = parse_tree__error_spec__color_as_correct_1_f_0(Var_101);
                  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
                  Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_114);
                  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
                  Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[38])), Var_112);
                  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
                  Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])), Var_99);
                  {
                    Spec_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_section\'/16"));
                    MR_hl_field(0, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(0, Spec_63, 3) = ((MR_Box) (Context_60));
                    MR_hl_field(0, Spec_63, 4) = ((MR_Box) (Pieces_62));
                  }
                  {
                    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_126, 0) = ((MR_Box) (Spec_63));
                    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_126, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67);
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
                  parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_17, FileStringLen_18, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_23, Var_82, &InclsCord_39, Var_83, &AvailsCord_40, Var_84, &FIMsCord_41, Var_85, &ItemsCord_42, SourceFileName_20, &_UpdatedSourceFileName_43, STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_SeqNumCounter_65, STATE_VARIABLE_Errors_0_66, STATE_VARIABLE_Errors_67, STATE_VARIABLE_LineContext_73_73, STATE_VARIABLE_LineContext_69, STATE_VARIABLE_LinePosn_74_74, STATE_VARIABLE_LinePosn_71);
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
    parse_tree__parse_module__parse_next_item_or_marker_11_p_0(FileName_13, FileString_14, FileStringLen_15, ModuleName_17, ReadIOMResult_18, STATE_VARIABLE_SeqNumCounter_0_22, STATE_VARIABLE_SeqNumCounter_23, STATE_VARIABLE_LineContext_0_24, STATE_VARIABLE_LineContext_25, STATE_VARIABLE_LinePosn_0_26, STATE_VARIABLE_LinePosn_27);
  else
  {
    *ReadIOMResult_18 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_16, (MR_Integer) 0))));
    *STATE_VARIABLE_SeqNumCounter_23 = STATE_VARIABLE_SeqNumCounter_0_22;
    *STATE_VARIABLE_LineContext_25 = STATE_VARIABLE_LineContext_0_24;
    *STATE_VARIABLE_LinePosn_27 = STATE_VARIABLE_LinePosn_0_26;
  }
}

static void MR_CALL 
parse_tree__parse_module__parse_item_sequence_23_p_0(
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
      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_49, FileString_24, FileStringLen_25, ModuleName_26, &ReadIOMResult_38, STATE_VARIABLE_SeqNumCounter_0_51, &STATE_VARIABLE_SeqNumCounter_59_59, STATE_VARIABLE_LineContext_0_55, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_57, &STATE_VARIABLE_LinePosn_61_61);
    else
    {
      ReadIOMResult_38 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_27, (MR_Integer) 0))));
      STATE_VARIABLE_SeqNumCounter_59_59 = STATE_VARIABLE_SeqNumCounter_0_51;
      STATE_VARIABLE_LineContext_60_60 = STATE_VARIABLE_LineContext_0_55;
      STATE_VARIABLE_LinePosn_61_61 = STATE_VARIABLE_LinePosn_0_57;
    }
    parse_tree__parse_module__parse_item_sequence_inner_25_p_0(FileString_24, FileStringLen_25, ModuleName_26, (MR_Integer) 1024, &NumItemsLeft_39, ReadIOMResult_38, &MidLookAhead_40, STATE_VARIABLE_InclsCord_0_41, &STATE_VARIABLE_InclsCord_63_63, STATE_VARIABLE_AvailsCord_0_43, &STATE_VARIABLE_AvailsCord_64_64, STATE_VARIABLE_FIMsCord_0_45, &STATE_VARIABLE_FIMsCord_65_65, STATE_VARIABLE_ItemsCord_0_47, &STATE_VARIABLE_ItemsCord_66_66, STATE_VARIABLE_SourceFileName_0_49, &STATE_VARIABLE_SourceFileName_67_67, STATE_VARIABLE_SeqNumCounter_59_59, &STATE_VARIABLE_SeqNumCounter_68_68, STATE_VARIABLE_Errors_0_53, &STATE_VARIABLE_Errors_69_69, STATE_VARIABLE_LineContext_60_60, &STATE_VARIABLE_LineContext_70_70, STATE_VARIABLE_LinePosn_61_61, &STATE_VARIABLE_LinePosn_71_71);
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
parse_tree__parse_module__parse_item_sequence_inner_25_p_0(
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
            MR_Word NextReadIOMResult_264;
            MR_Word STATE_VARIABLE_Errors_93_265;
            MR_Word STATE_VARIABLE_SeqNumCounter_97_266;
            MR_Word STATE_VARIABLE_LineContext_98_267;
            MR_Word STATE_VARIABLE_LinePosn_99_268;
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
            parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, Var_92, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_93_265);
            parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_264, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_97_266, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_98_267, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_99_268);
            // direct tailcall eliminated
            ;
            next_value_of_ReadIOMResult_30 = NextReadIOMResult_264;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_97_266;
            next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_93_265;
            next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_98_267;
            next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_99_268;
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
            parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_45, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_97_97, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_98_98, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_99_99);
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
                  MR_Word STATE_VARIABLE_SeqNumCounter_159_190;
                  MR_Word STATE_VARIABLE_LineContext_160_191;
                  MR_Word STATE_VARIABLE_LinePosn_161_192;
                  MR_Word NextReadIOMResult_193;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_193, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_190, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_191, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_192);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_193;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_190;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_191;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_192;
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
                  MR_Word STATE_VARIABLE_ItemsCord_153_199;
                  MR_Word STATE_VARIABLE_SeqNumCounter_159_200;
                  MR_Word STATE_VARIABLE_LineContext_160_201;
                  MR_Word STATE_VARIABLE_LinePosn_161_202;
                  MR_Word NextReadIOMResult_203;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  STATE_VARIABLE_ItemsCord_153_199 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_78, ((MR_Box) (Item_68)));
                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_203, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_200, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_201, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_202);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_203;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_78 = STATE_VARIABLE_ItemsCord_153_199;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_200;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_201;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_202;
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
                  MR_Word ItemSpecs_172 = ((MR_Word) ((MR_hl_field(2, IOM_48, (MR_Integer) 1))));
                  MR_Word Item_173 = ((MR_Word) ((MR_hl_field(2, IOM_48, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_Errors_144_205;
                  MR_Word STATE_VARIABLE_ItemsCord_153_209;
                  MR_Word STATE_VARIABLE_SeqNumCounter_159_210;
                  MR_Word STATE_VARIABLE_LineContext_160_211;
                  MR_Word STATE_VARIABLE_LinePosn_161_212;
                  MR_Word NextReadIOMResult_213;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_78;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                  MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                  STATE_VARIABLE_ItemsCord_153_209 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_78, ((MR_Box) (Item_173)));
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, ItemSpecs_172, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_144_205);
                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_213, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_210, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_211, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_212);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_213;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_78 = STATE_VARIABLE_ItemsCord_153_209;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_210;
                  next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_144_205;
                  next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_211;
                  next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_212;
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
                      MR_Word Var_147;
                      MR_Word Var_148;
                      MR_Word STATE_VARIABLE_InclsCord_146_236;
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_240;
                      MR_Word STATE_VARIABLE_LineContext_160_241;
                      MR_Word STATE_VARIABLE_LinePosn_161_242;
                      MR_Word NextReadIOMResult_243;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_72;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      {
                        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_148, 0) = ((MR_Box) (HeadIncl_62));
                        MR_hl_field(1, Var_148, 1) = ((MR_Box) (TailIncls_63));
                      }
                      Var_147 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_148);
                      STATE_VARIABLE_InclsCord_146_236 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_72, Var_147);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_243, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_240, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_241, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_242);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_243;
                      next_value_of_STATE_VARIABLE_InclsCord_0_72 = STATE_VARIABLE_InclsCord_146_236;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_240;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_241;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_242;
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
                      MR_Word Var_150;
                      MR_Word Var_151;
                      MR_Word STATE_VARIABLE_AvailsCord_149_217;
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_220;
                      MR_Word STATE_VARIABLE_LineContext_160_221;
                      MR_Word STATE_VARIABLE_LinePosn_161_222;
                      MR_Word NextReadIOMResult_223;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_74;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      {
                        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_151, 0) = ((MR_Box) (HeadAvail_65));
                        MR_hl_field(1, Var_151, 1) = ((MR_Box) (TailAvails_66));
                      }
                      Var_150 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_151);
                      STATE_VARIABLE_AvailsCord_149_217 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_74, Var_150);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_223, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_220, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_221, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_222);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_223;
                      next_value_of_STATE_VARIABLE_AvailsCord_0_74 = STATE_VARIABLE_AvailsCord_149_217;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_220;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_221;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_222;
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
                      MR_Word STATE_VARIABLE_FIMsCord_152_228;
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_230;
                      MR_Word STATE_VARIABLE_LineContext_160_231;
                      MR_Word STATE_VARIABLE_LinePosn_161_232;
                      MR_Word NextReadIOMResult_233;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_76;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      STATE_VARIABLE_FIMsCord_152_228 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_FIMsCord_0_76, ((MR_Box) (FIM_67)));
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_233, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_230, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_231, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_232);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_233;
                      next_value_of_STATE_VARIABLE_FIMsCord_0_76 = STATE_VARIABLE_FIMsCord_152_228;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_230;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_231;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_232;
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
                      MR_Word Pieces_59;
                      MR_Word Spec_60;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_Word Var_123;
                      MR_Word Var_124;
                      MR_Word Var_141;
                      MR_Word Var_143;
                      MR_Word STATE_VARIABLE_Errors_144_255;
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_260;
                      MR_Word STATE_VARIABLE_LineContext_160_261;
                      MR_Word STATE_VARIABLE_LinePosn_161_262;
                      MR_Word NextReadIOMResult_263;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      Var_118 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[95])));
                      Var_124 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[101])));
                      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_124, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
                      Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_123);
                      Pieces_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[6])), Var_117);
                      Var_141 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_47);
                      {
                        Spec_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_item_sequence_inner\'/25"));
                        MR_hl_field(0, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                        MR_hl_field(0, Spec_60, 3) = ((MR_Box) (Var_141));
                        MR_hl_field(0, Spec_60, 4) = ((MR_Box) (Pieces_59));
                      }
                      {
                        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_143, 0) = ((MR_Box) (Spec_60));
                        MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Var_143, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_144_255);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_263, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_260, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_261, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_262);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_263;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_260;
                      next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_144_255;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_261;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_262;
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
                      MR_String STATE_VARIABLE_SourceFileName_112_244 = ((MR_String) ((MR_hl_field(3, IOM_48, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_250;
                      MR_Word STATE_VARIABLE_LineContext_160_251;
                      MR_Word STATE_VARIABLE_LinePosn_161_252;
                      MR_Word NextReadIOMResult_253;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_112_244, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_253, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_250, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_251, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_252);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_253;
                      next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_112_244;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_250;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_251;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_252;
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
                      MR_Word STATE_VARIABLE_Errors_144_144;
                      MR_Word STATE_VARIABLE_SeqNumCounter_159_159;
                      MR_Word STATE_VARIABLE_LineContext_160_160;
                      MR_Word STATE_VARIABLE_LinePosn_161_161;
                      MR_Word NextReadIOMResult_176;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_70;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_84;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_86;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_88;

                      parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, HandledSpecs_69, STATE_VARIABLE_Errors_0_84, &STATE_VARIABLE_Errors_144_144);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_80, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_176, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_159_159, STATE_VARIABLE_LineContext_0_86, &STATE_VARIABLE_LineContext_160_160, STATE_VARIABLE_LinePosn_0_88, &STATE_VARIABLE_LinePosn_161_161);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_70 = STATE_VARIABLE_NumItemsLeft_110_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_176;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_159_159;
                      next_value_of_STATE_VARIABLE_Errors_0_84 = STATE_VARIABLE_Errors_144_144;
                      next_value_of_STATE_VARIABLE_LineContext_0_86 = STATE_VARIABLE_LineContext_160_160;
                      next_value_of_STATE_VARIABLE_LinePosn_0_88 = STATE_VARIABLE_LinePosn_161_161;
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
parse_tree__parse_module__parse_next_item_or_marker_11_p_0(
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
          MR_hl_field(1, Pieces_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[102])));
        }
        {
          Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
          MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_30));
          MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
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

void MR_CALL 
parse_tree__parse_module__peek_at_file_6_p_0(
  MR_Word FileStream_7,
  MR_String SourceFileName0_8,
  MR_Word DefaultModuleName_9,
  MR_Word * MaybeModuleName_10)
{
  MR_Word MaybeResult_12;

  mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_7, &MaybeResult_12);
  if (((MR_tag((MR_Word) MaybeResult_12)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_34 = ((MR_Word) ((MR_hl_field(1, MaybeResult_12, (MR_Integer) 2))));
    MR_String ErrorMsg0_35;
    MR_String ErrorMsg_36;
    MR_Word Var_78;
    MR_Word Spec_83;

    mercury__io__error_message_2_p_0(ErrorCode_34, &ErrorMsg0_35);
    ErrorMsg_36 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_35);
    parse_tree__parse_error__io_error_to_error_spec_5_p_0((MR_Word) ((MR_Unsigned) 16U), ErrorMsg_36, &Spec_83);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_83));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModuleName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
    }
  }
  else
  {
    MR_String FileString_13 = ((MR_String) ((MR_hl_field(0, MaybeResult_12, (MR_Integer) 0))));
    MR_Integer FileStringLen_14 = ((MR_Integer) ((MR_hl_field(0, MaybeResult_12, (MR_Integer) 1))));
    MR_Word SeqNumCounter0_16;
    MR_Word ModuleDeclPresent_19;
    MR_String _SourceFileName_20;
    MR_Word _SeqNumCounter_21;
    MR_Word _LineContext_22;
    MR_Word _LinePosn_23;

    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_16);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_13, FileStringLen_14, DefaultModuleName_9, (MR_Word) ((MR_Unsigned) 0U), &ModuleDeclPresent_19, (MR_Integer) 1, SourceFileName0_8, &_SourceFileName_20, SeqNumCounter0_16, &_SeqNumCounter_21, (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &_LineContext_22, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_23);
    switch (MR_tag((MR_Word) ModuleDeclPresent_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Pieces_27;
          MR_Word Spec_28;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_73;

          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (SourceFileName0_8));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_51 = parse_tree__error_spec__color_as_subject_1_f_0(Var_52);
          Var_56 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])));
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_55);
          Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[6])), Var_50);
          {
            Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.peek_at_file\'/6"));
            MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_28, 3) = ((MR_Box) (Pieces_27));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_28));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeModuleName_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_19, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleName_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_81 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_19, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleName_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_81));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(
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
          MR_Word Pieces_106;
          MR_Word Var_108;
          MR_Word Var_109;

          FirstContext_86 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1);
          Var_80 = mercury__term_context__dummy_context_0_f_0();
          Var_109 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[106])));
          Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
          Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[104])), Var_108);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_81, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
            MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Var_81, 3) = ((MR_Box) (FirstContext_86));
            MR_hl_field(0, Var_81, 4) = ((MR_Box) (Pieces_106));
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
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word FirstContext_127;
          MR_Word Pieces_128;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Context_91;

          Context_91 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, LineNumber_90);
          FirstContext_127 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1);
          Var_125 = mercury__term_context__dummy_context_0_f_0();
          Var_131 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[106])));
          Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
          Pieces_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[104])), Var_130);
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_126, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
            MR_hl_field(0, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Var_126, 3) = ((MR_Box) (FirstContext_127));
            MR_hl_field(0, Var_126, 4) = ((MR_Box) (Pieces_128));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_125));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_126));
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
          MR_Word STATE_VARIABLE_SeqNumCounter_66_139;

          mercury__counter__allocate_3_p_0(&SeqNum_96, STATE_VARIABLE_SeqNumCounter_0_58, &STATE_VARIABLE_SeqNumCounter_66_139);
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
            MR_Word MaybeFirstIOM_138;

            {
              MaybeFirstIOM_138 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, MaybeFirstIOM_138, 0) = ((MR_Box) (VarSet_94));
              MR_hl_field(2, MaybeFirstIOM_138, 1) = ((MR_Box) (Term_95));
              MR_hl_field(2, MaybeFirstIOM_138, 2) = ((MR_Box) (Specs_99));
            }
            {
              LookAhead_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LookAhead_54, 0) = ((MR_Box) (MaybeFirstIOM_138));
            }
            FirstContext_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
            Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
            Var_77 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_85);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *ModuleDeclPresent_21 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (LookAhead_54));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
            }
            *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
            *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_139;
            *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
            *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
          }
          else
          {
            MR_Word FirstIOM_31 = ((MR_Word) ((MR_hl_field(1, MaybeItemOrMarker_97, (MR_Integer) 0))));
            MR_Word MaybeFirstIOM_140;

            {
              MaybeFirstIOM_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, MaybeFirstIOM_140, 0) = ((MR_Box) (VarSet_94));
              MR_hl_field(3, MaybeFirstIOM_140, 1) = ((MR_Box) (Term_95));
              MR_hl_field(3, MaybeFirstIOM_140, 2) = ((MR_Box) (FirstIOM_31));
            }
            switch (MR_tag((MR_Word) FirstIOM_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word FirstLookAhead_82;
                  MR_Word FirstContext_83;

                  {
                    FirstLookAhead_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, FirstLookAhead_82, 0) = ((MR_Box) (MaybeFirstIOM_140));
                  }
                  FirstContext_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                  Var_75 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_83);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *ModuleDeclPresent_21 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_82));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
                  }
                  *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                  *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_139;
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
                        MR_hl_field(1, FirstLookAhead_82, 0) = ((MR_Box) (MaybeFirstIOM_140));
                      }
                      FirstContext_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                      Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                      Var_75 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_83);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        *ModuleDeclPresent_21 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_82));
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
                      }
                      *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                      *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_139;
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
                            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_58 = STATE_VARIABLE_SeqNumCounter_66_139;
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
                              MR_hl_field(1, FirstLookAhead_32, 0) = ((MR_Box) (MaybeFirstIOM_140));
                            }
                            FirstContext_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_95);
                            Var_68 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_33);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                              *ModuleDeclPresent_21 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_32));
                              MR_hl_field(0, base, 1) = ((MR_Box) (FirstContext_33));
                              MR_hl_field(0, base, 2) = ((MR_Box) (Var_68));
                            }
                            *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_67_67;
                            *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_139;
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
                      *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_66_139;
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

static MR_Word MR_CALL 
parse_tree__parse_module__report_missing_module_start_1_f_0(
  MR_Word FirstContext_3)
{
  MR_Word Spec_4;
  MR_Word Pieces_5;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_15 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[106])));
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
  Pieces_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[104])), Var_14);
  {
    Spec_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
    MR_hl_field(0, Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_4, 3) = ((MR_Box) (FirstContext_3));
    MR_hl_field(0, Spec_4, 4) = ((MR_Box) (Pieces_5));
  }
  return Spec_4;
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
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_40;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_68;
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
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (FileName_7));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[18])));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[14])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (ExpectedName_8));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[20])));
  }
  Var_33 = parse_tree__error_spec__color_as_correct_1_f_0(Var_34);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (ActualName_10));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])));
  }
  Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_47);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[13])));
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[22])), Var_45);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_40);
  MainPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_32);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (MainPieces_15));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MainMsg_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainMsg_16, 0) = ((MR_Box) (MaybeContext_14));
    MR_hl_field(3, MainMsg_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MainMsg_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MainMsg_16, 3) = ((MR_Box) (Var_58));
  }
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ExpectationContexts_9, &SortedExpectationContexts0_17);
  Var_61 = mercury__term_context__dummy_context_0_f_0();
  mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedExpectationContexts0_17, ((MR_Box) (Var_61)), &SortedExpectationContexts_18);
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_4[0]), SortedExpectationContexts_18, &SubMsgs_19);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MainMsg_16));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (SubMsgs_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
    MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_68));
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
