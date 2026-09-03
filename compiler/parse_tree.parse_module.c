/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_item.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

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

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

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
parse_tree__parse_module__IntroducedFrom__pred__read_term_msg_to_pieces__1629__1_2_p_0(
  MR_Char HeadVar__1_8,
  MR_Char HeadVar__2_10);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__471__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__468__1_1_p_0(
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
parse_tree__parse_module__line_to_pieces_2_p_0(
  MR_String Line_3,
  MR_Word * Pieces_4);

static void MR_CALL 
parse_tree__parse_module__expectation_context_to_msg_2_p_0(
  MR_Word Context_3,
  MR_Word * SubMsg_4);

static void MR_CALL 
parse_tree__parse_module__parse_src_file_components_19_p_0(
  MR_String FileString_20,
  MR_Integer FileStringLen_21,
  MR_Word CurModuleName_22,
  MR_Word ContainingModules_23,
  MR_Word MaybePrevSection_24,
  MR_Word InitLookAhead_25,
  MR_Word * FinalLookAhead_26,
  MR_Word STATE_VARIABLE_ModuleComponents_0_79,
  MR_Word * STATE_VARIABLE_ModuleComponents_80,
  MR_String STATE_VARIABLE_SourceFileName_0_81,
  MR_String * STATE_VARIABLE_SourceFileName_82,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_83,
  MR_Word * STATE_VARIABLE_SeqNumCounter_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86,
  MR_Word STATE_VARIABLE_LineContext_0_87,
  MR_Word * STATE_VARIABLE_LineContext_88,
  MR_Word STATE_VARIABLE_LinePosn_0_89,
  MR_Word * STATE_VARIABLE_LinePosn_90);

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
parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(
  MR_Word CurModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Errors_0_10,
  MR_Word * STATE_VARIABLE_Errors_11);

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
  MR_Word STATE_VARIABLE_Errors_0_34,
  MR_Word * STATE_VARIABLE_Errors_35,
  MR_Word LineContext_20,
  MR_Word LinePosn_21);

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
  MR_Word STATE_VARIABLE_SeqNumCounter_0_65,
  MR_Word * STATE_VARIABLE_SeqNumCounter_66,
  MR_Word STATE_VARIABLE_Errors_0_67,
  MR_Word * STATE_VARIABLE_Errors_68,
  MR_Word STATE_VARIABLE_LineContext_0_69,
  MR_Word * STATE_VARIABLE_LineContext_70,
  MR_Word STATE_VARIABLE_LinePosn_0_71,
  MR_Word * STATE_VARIABLE_LinePosn_72);

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
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_71,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_72,
  MR_Word ReadIOMResult_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_InclsCord_0_73,
  MR_Word * STATE_VARIABLE_InclsCord_74,
  MR_Word STATE_VARIABLE_AvailsCord_0_75,
  MR_Word * STATE_VARIABLE_AvailsCord_76,
  MR_Word STATE_VARIABLE_FIMsCord_0_77,
  MR_Word * STATE_VARIABLE_FIMsCord_78,
  MR_Word STATE_VARIABLE_ItemsCord_0_79,
  MR_Word * STATE_VARIABLE_ItemsCord_80,
  MR_String STATE_VARIABLE_SourceFileName_0_81,
  MR_String * STATE_VARIABLE_SourceFileName_82,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_83,
  MR_Word * STATE_VARIABLE_SeqNumCounter_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86,
  MR_Word STATE_VARIABLE_LineContext_0_87,
  MR_Word * STATE_VARIABLE_LineContext_88,
  MR_Word STATE_VARIABLE_LinePosn_0_89,
  MR_Word * STATE_VARIABLE_LinePosn_90);

static void MR_CALL 
parse_tree__parse_module__parse_any_version_number_item_13_p_0(
  MR_String FileString_14,
  MR_Integer FileStringLen_15,
  MR_Word ModuleName_16,
  MR_String SourceFileName_17,
  MR_Word InitLookAhead_18,
  MR_Word * FinalLookAhead_19,
  MR_Word * VersionNumberResult_20,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_51,
  MR_Word * STATE_VARIABLE_SeqNumCounter_52,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word * STATE_VARIABLE_LineContext_54,
  MR_Word STATE_VARIABLE_LinePosn_0_55,
  MR_Word * STATE_VARIABLE_LinePosn_56);

static void MR_CALL 
parse_tree__parse_module__parse_next_item_or_marker_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_module__parse_next_item_or_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__parse_module__parse_first_module_decl_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_module__parse_first_module_decl_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_module__parse_first_module_decl_14_p_0(
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word MaybeDefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * ModuleDeclPresent_19,
  MR_Word MayChangeSourceFileName_20,
  MR_String STATE_VARIABLE_SourceFileName_0_57,
  MR_String * STATE_VARIABLE_SourceFileName_58,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_59,
  MR_Word * STATE_VARIABLE_SeqNumCounter_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64);

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
parse_tree__parse_module____Unify____read_iom_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____read_iom_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_module____Unify____version_number_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module____Compare____version_number_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[127][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[3][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[3][4];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[127][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not start with a"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "interface sections."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not have two consecutive"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: an interface file"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected the start of an"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section,"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unexpected version_numbers record"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the contents of module"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "after the"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by either an"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[68])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "missing"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at whose end it appears,"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not for the module"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "version number records"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "generated interface files."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "anywhere except in automaticly"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not appear"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module must start with a"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[18])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for the wrong module"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: module starts with a"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got moduile"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: there should be no code"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[10])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[125])))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_module__report_module_has_unexpected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_module__parse_first_module_decl_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_module__parse_next_item_or_marker_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_module__parse_first_module_decl_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 10))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_module__parse_next_item_or_marker_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 10))
  },
  /* row   2 */
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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0) }
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
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0)
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
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0)
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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) };

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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_read_iom_result_0_2[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__term__ti_term_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_2 = {
  (MR_String) "read_iom_parse_item_errors",
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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_version_number_result_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_version_numbers_0) };

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
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0),
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
parse_tree__parse_module__IntroducedFrom__pred__read_term_msg_to_pieces__1629__1_2_p_0(
  MR_Char HeadVar__1_8,
  MR_Char HeadVar__2_10)
{
  MR_bool succeeded = (HeadVar__1_8 == HeadVar__2_10);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__471__1_2_p_0(
  MR_Word Imports_33,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_33)), ((MR_Box) (HeadVar__2_61)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__468__1_1_p_0(
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 15);
      MR_Word ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 15);
      MR_Word SubResult1_8;

      parse_tree__error_spec____Compare____err_spec_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    parse_tree__prog_parse_tree____Compare____maybe_version_numbers_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 15);
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 15);
      succeeded = parse_tree__error_spec____Unify____err_spec_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = (ArgX2_7 == ArgY2_8);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = parse_tree__prog_parse_tree____Unify____maybe_version_numbers_0_0(ArgX1_3, ArgY1_4);
    }
  }
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
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
                  parse_tree__error_spec____Compare____err_spec_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
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
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
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
                  parse_tree__error_spec____Compare____err_spec_0_0(HeadVar__1_1, ArgX3_18, ArgY3_19);
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
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
            succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
                succeeded = parse_tree__error_spec____Unify____err_spec_0_0(ArgX3_7, ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
                succeeded = parse_tree__error_spec____Unify____err_spec_0_0(ArgX3_13, ArgY3_14);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              parse_tree__error_spec____Compare____err_spec_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_Word ArgY4_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 3))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                {
                  MR_Word SubResult3_14;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), &SubResult3_14, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
                  succeeded = (SubResult3_14 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_14;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
                }
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
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
              MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
              MR_Word ArgY3_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
              MR_Word SubResult1_19;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &SubResult1_19, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
              succeeded = (SubResult1_19 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_19;
              else
              {
                MR_Word SubResult2_22;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), &SubResult2_22, ((MR_Box) (ArgX2_20)), ((MR_Box) (ArgY2_21)));
                succeeded = (SubResult2_22 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_22;
                else
                  parse_tree__parse_types____Compare____item_or_marker_0_0(HeadVar__1_1, ArgX3_23, ArgY3_24);
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__parse_module____Unify____read_iom_result_0_0(ArgX1_3, ArgY1_4);
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
          MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_20 == CastX_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = parse_tree__error_spec____Unify____err_spec_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_26_26;
          MR_Word TypeInfo_27_27;
          MR_Word TypeInfo_28_28;
          MR_Word TypeInfo_29_29;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_10;
          MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_Word ArgY4_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
            TypeInfo_26_26 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
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
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
          MR_Word ArgY3_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
            TypeInfo_23_23 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
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
parse_tree__parse_module__line_to_pieces_2_p_0(
  MR_String Line_3,
  MR_Word * Pieces_4)
{
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (Line_3));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Pieces_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
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
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[28])));
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
  MR_Word STATE_VARIABLE_Errors_1_37;
  MR_Word STATE_VARIABLE_SeqNumCounter_1_39;
  MR_Word Var_40;
  MR_String STATE_VARIABLE_SourceFileName_1_42;
  MR_Word STATE_VARIABLE_SeqNumCounter_2_43;
  MR_Word STATE_VARIABLE_LineContext_2_44;
  MR_Word STATE_VARIABLE_LinePosn_2_45;
  MR_Word STATE_VARIABLE_Errors_2_47;
  MR_Word Var_50;
  MR_String STATE_VARIABLE_SourceFileName_2_51;
  MR_Word STATE_VARIABLE_SeqNumCounter_3_52;
  MR_Word STATE_VARIABLE_Errors_4_53;
  MR_Word STATE_VARIABLE_LineContext_3_54;
  MR_Word STATE_VARIABLE_LinePosn_3_55;

  STATE_VARIABLE_Errors_1_37 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_1_39);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (DefaultModuleName_11));
  }
  parse_tree__parse_module__parse_first_module_decl_14_p_0(FileString_9, FileStringLen_10, Var_40, DefaultExpectationContexts_12, &ModuleDeclPresent_18, (MR_Integer) 1, STATE_VARIABLE_SourceFileName_0_30, &STATE_VARIABLE_SourceFileName_1_42, STATE_VARIABLE_SeqNumCounter_1_39, &STATE_VARIABLE_SeqNumCounter_2_43, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), &STATE_VARIABLE_LineContext_2_44, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_2_45);
  switch (MR_tag((MR_Word) ModuleDeclPresent_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_21;

        InitLookAhead_19 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, 1))));
        NoModuleSpec_21 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_18, 2))));
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, NoModuleSpec_21, STATE_VARIABLE_Errors_1_37, &STATE_VARIABLE_Errors_2_47);
        ModuleName_22 = DefaultModuleName_11;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WrongSpec_24;

        ModuleName_22 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, 1))));
        WrongSpec_24 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_18, 2))));
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, WrongSpec_24, STATE_VARIABLE_Errors_1_37, &STATE_VARIABLE_Errors_2_47);
        InitLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        ModuleName_22 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_18, 0))));
        ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_18, 1))));
        InitLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Errors_2_47 = STATE_VARIABLE_Errors_1_37;
      }
      break;
  }
  Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_component_0));
  parse_tree__parse_module__parse_src_file_components_19_p_0(FileString_9, FileStringLen_10, ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), InitLookAhead_19, &FinalLookAhead_27, Var_50, &ModuleComponents_28, STATE_VARIABLE_SourceFileName_1_42, &STATE_VARIABLE_SourceFileName_2_51, STATE_VARIABLE_SeqNumCounter_2_43, &STATE_VARIABLE_SeqNumCounter_3_52, STATE_VARIABLE_Errors_2_47, &STATE_VARIABLE_Errors_4_53, STATE_VARIABLE_LineContext_2_44, &STATE_VARIABLE_LineContext_3_54, STATE_VARIABLE_LinePosn_2_45, &STATE_VARIABLE_LinePosn_3_55);
  parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(STATE_VARIABLE_SourceFileName_2_51, FileString_9, FileStringLen_10, ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_27, STATE_VARIABLE_SeqNumCounter_3_52, STATE_VARIABLE_Errors_4_53, STATE_VARIABLE_Errors_31, STATE_VARIABLE_LineContext_3_54, STATE_VARIABLE_LinePosn_3_55);
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
parse_tree__parse_module__parse_src_file_components_19_p_0(
  MR_String FileString_20,
  MR_Integer FileStringLen_21,
  MR_Word CurModuleName_22,
  MR_Word ContainingModules_23,
  MR_Word MaybePrevSection_24,
  MR_Word InitLookAhead_25,
  MR_Word * FinalLookAhead_26,
  MR_Word STATE_VARIABLE_ModuleComponents_0_79,
  MR_Word * STATE_VARIABLE_ModuleComponents_80,
  MR_String STATE_VARIABLE_SourceFileName_0_81,
  MR_String * STATE_VARIABLE_SourceFileName_82,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_83,
  MR_Word * STATE_VARIABLE_SeqNumCounter_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86,
  MR_Word STATE_VARIABLE_LineContext_0_87,
  MR_Word * STATE_VARIABLE_LineContext_88,
  MR_Word STATE_VARIABLE_LinePosn_0_89,
  MR_Word * STATE_VARIABLE_LinePosn_90)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_33;
    MR_Word STATE_VARIABLE_SeqNumCounter_1_91;
    MR_Word STATE_VARIABLE_LineContext_1_92;
    MR_Word STATE_VARIABLE_LinePosn_1_93;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__get_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_20, FileStringLen_21, InitLookAhead_25, CurModuleName_22, &ReadIOMResult_33, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_1_91, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_1_92, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_1_93);
    switch (MR_tag((MR_Word) ReadIOMResult_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_26 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_80 = STATE_VARIABLE_ModuleComponents_0_79;
          *STATE_VARIABLE_SourceFileName_82 = STATE_VARIABLE_SourceFileName_0_81;
          *STATE_VARIABLE_SeqNumCounter_84 = STATE_VARIABLE_SeqNumCounter_1_91;
          *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
          *STATE_VARIABLE_LineContext_88 = STATE_VARIABLE_LineContext_1_92;
          *STATE_VARIABLE_LinePosn_90 = STATE_VARIABLE_LinePosn_1_93;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_34 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_33, 0))));
          MR_Word STATE_VARIABLE_Errors_1_95;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

          parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, ItemSpec_34, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_1_95);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_1_91;
          next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_1_95;
          next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_1_92;
          next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_1_93;
          InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
          STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
          STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
          STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMTerm_36 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_33, 1))));
          MR_Word Context_39;
          MR_Word SectionContext_41;
          MR_Word ItemSeqInitLookAhead_42;
          MR_Word ItemSeqFinalLookAhead_43;
          MR_Word InclsCord_44;
          MR_Word AvailsCord_45;
          MR_Word FIMsCord_46;
          MR_Word ItemsCord_47;
          MR_Word STATE_VARIABLE_Errors_3_103;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_String STATE_VARIABLE_SourceFileName_2_108;
          MR_Word STATE_VARIABLE_SeqNumCounter_3_109;
          MR_Word STATE_VARIABLE_Errors_4_110;
          MR_Word STATE_VARIABLE_LineContext_3_111;
          MR_Word STATE_VARIABLE_LinePosn_3_112;
          MR_Word STATE_VARIABLE_ModuleComponents_2_113;
          MR_Word Var_114;
          MR_Word Var_121;
          MR_Word next_value_of_MaybePrevSection_24;
          MR_Word next_value_of_InitLookAhead_25;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

          Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_36);
          parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_39, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_3_103);
          SectionContext_41 = mercury__term_context__dummy_context_0_f_0();
          {
            ItemSeqInitLookAhead_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ItemSeqInitLookAhead_42, 0) = ((MR_Box) (ReadIOMResult_33));
          }
          Var_104 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_105 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_106 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
          Var_107 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_42, &ItemSeqFinalLookAhead_43, Var_104, &InclsCord_44, Var_105, &AvailsCord_45, Var_106, &FIMsCord_46, Var_107, &ItemsCord_47, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_2_108, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_3_109, STATE_VARIABLE_Errors_3_103, &STATE_VARIABLE_Errors_4_110, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_3_111, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_3_112);
          parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, (MR_Integer) 1, SectionContext_41, InclsCord_44, AvailsCord_45, FIMsCord_46, ItemsCord_47, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_2_113);
          {
            Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_121, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_121, 1) = ((MR_Box) (SectionContext_41));
          }
          {
            Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_121));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_24 = Var_114;
          next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_43;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_2_113;
          next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_2_108;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_109;
          next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_4_110;
          next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_111;
          next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_112;
          MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
          InitLookAhead_25 = next_value_of_InitLookAhead_25;
          STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
          STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
          STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
          STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
          STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
          STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_48 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_33, 2))));
          MR_Word IOMTerm_266 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_33, 1))));

          switch (MR_tag((MR_Word) IOM_48)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Errors_14_288;
                MR_Word Var_289;
                MR_Word Var_290;
                MR_Word Var_291;
                MR_Word Var_292;
                MR_String STATE_VARIABLE_SourceFileName_9_293;
                MR_Word STATE_VARIABLE_SeqNumCounter_9_294;
                MR_Word STATE_VARIABLE_Errors_15_295;
                MR_Word STATE_VARIABLE_LineContext_9_296;
                MR_Word STATE_VARIABLE_LinePosn_9_297;
                MR_Word STATE_VARIABLE_ModuleComponents_8_298;
                MR_Word Var_299;
                MR_Word Var_300;
                MR_Word SectionKind_302;
                MR_Word SectionContext_303;
                MR_Word ItemSeqInitLookAhead_304;
                MR_Word ItemSeqFinalLookAhead_305;
                MR_Word InclsCord_306;
                MR_Word AvailsCord_307;
                MR_Word FIMsCord_308;
                MR_Word ItemsCord_309;
                MR_Word next_value_of_MaybePrevSection_24;
                MR_Word next_value_of_InitLookAhead_25;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_280;

                  Context_280 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_280, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_14_288);
                  SectionKind_302 = (MR_Integer) 1;
                  SectionContext_303 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_282 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                  SectionKind_302 = ((MR_Word) ((MR_hl_field(0, Var_282, 0))));
                  SectionContext_303 = ((MR_Word) ((MR_hl_field(0, Var_282, 1))));
                  STATE_VARIABLE_Errors_14_288 = STATE_VARIABLE_Errors_0_85;
                }
                {
                  ItemSeqInitLookAhead_304 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_304, 0) = ((MR_Box) (ReadIOMResult_33));
                }
                Var_289 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_290 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_291 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_292 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_304, &ItemSeqFinalLookAhead_305, Var_289, &InclsCord_306, Var_290, &AvailsCord_307, Var_291, &FIMsCord_308, Var_292, &ItemsCord_309, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_293, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_294, STATE_VARIABLE_Errors_14_288, &STATE_VARIABLE_Errors_15_295, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_296, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_297);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_302, SectionContext_303, InclsCord_306, AvailsCord_307, FIMsCord_308, ItemsCord_309, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_298);
                {
                  Var_300 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_300, 0) = ((MR_Box) (SectionKind_302));
                  MR_hl_field(0, Var_300, 1) = ((MR_Box) (SectionContext_303));
                }
                {
                  Var_299 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_299, 0) = ((MR_Box) (Var_300));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_24 = Var_299;
                next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_305;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_298;
                next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_293;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_294;
                next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_295;
                next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_296;
                next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_297;
                MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                InitLookAhead_25 = next_value_of_InitLookAhead_25;
                STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Errors_14_323;
                MR_Word Var_324;
                MR_Word Var_325;
                MR_Word Var_326;
                MR_Word Var_327;
                MR_String STATE_VARIABLE_SourceFileName_9_328;
                MR_Word STATE_VARIABLE_SeqNumCounter_9_329;
                MR_Word STATE_VARIABLE_Errors_15_330;
                MR_Word STATE_VARIABLE_LineContext_9_331;
                MR_Word STATE_VARIABLE_LinePosn_9_332;
                MR_Word STATE_VARIABLE_ModuleComponents_8_333;
                MR_Word Var_334;
                MR_Word Var_335;
                MR_Word SectionKind_337;
                MR_Word SectionContext_338;
                MR_Word ItemSeqInitLookAhead_339;
                MR_Word ItemSeqFinalLookAhead_340;
                MR_Word InclsCord_341;
                MR_Word AvailsCord_342;
                MR_Word FIMsCord_343;
                MR_Word ItemsCord_344;
                MR_Word next_value_of_MaybePrevSection_24;
                MR_Word next_value_of_InitLookAhead_25;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_315;

                  Context_315 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_315, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_14_323);
                  SectionKind_337 = (MR_Integer) 1;
                  SectionContext_338 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_317 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                  SectionKind_337 = ((MR_Word) ((MR_hl_field(0, Var_317, 0))));
                  SectionContext_338 = ((MR_Word) ((MR_hl_field(0, Var_317, 1))));
                  STATE_VARIABLE_Errors_14_323 = STATE_VARIABLE_Errors_0_85;
                }
                {
                  ItemSeqInitLookAhead_339 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_339, 0) = ((MR_Box) (ReadIOMResult_33));
                }
                Var_324 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_325 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_326 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_327 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_339, &ItemSeqFinalLookAhead_340, Var_324, &InclsCord_341, Var_325, &AvailsCord_342, Var_326, &FIMsCord_343, Var_327, &ItemsCord_344, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_328, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_329, STATE_VARIABLE_Errors_14_323, &STATE_VARIABLE_Errors_15_330, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_331, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_332);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_337, SectionContext_338, InclsCord_341, AvailsCord_342, FIMsCord_343, ItemsCord_344, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_333);
                {
                  Var_335 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_335, 0) = ((MR_Box) (SectionKind_337));
                  MR_hl_field(0, Var_335, 1) = ((MR_Box) (SectionContext_338));
                }
                {
                  Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_334, 0) = ((MR_Box) (Var_335));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_24 = Var_334;
                next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_340;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_333;
                next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_328;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_329;
                next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_330;
                next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_331;
                next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_332;
                MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                InitLookAhead_25 = next_value_of_InitLookAhead_25;
                STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemSpecs_242 = ((MR_Word) ((MR_hl_field(2, IOM_48, 1))));
                MR_Word STATE_VARIABLE_Errors_12_356;
                MR_Word STATE_VARIABLE_Errors_14_358;
                MR_Word Var_359;
                MR_Word Var_360;
                MR_Word Var_361;
                MR_Word Var_362;
                MR_String STATE_VARIABLE_SourceFileName_9_363;
                MR_Word STATE_VARIABLE_SeqNumCounter_9_364;
                MR_Word STATE_VARIABLE_Errors_15_365;
                MR_Word STATE_VARIABLE_LineContext_9_366;
                MR_Word STATE_VARIABLE_LinePosn_9_367;
                MR_Word STATE_VARIABLE_ModuleComponents_8_368;
                MR_Word Var_369;
                MR_Word Var_370;
                MR_Word SectionKind_372;
                MR_Word SectionContext_373;
                MR_Word ItemSeqInitLookAhead_374;
                MR_Word ItemSeqFinalLookAhead_375;
                MR_Word InclsCord_376;
                MR_Word AvailsCord_377;
                MR_Word FIMsCord_378;
                MR_Word ItemsCord_379;
                MR_Word next_value_of_MaybePrevSection_24;
                MR_Word next_value_of_InitLookAhead_25;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 8, ItemSpecs_242, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_12_356);
                if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_350;

                  Context_350 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                  parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_350, STATE_VARIABLE_Errors_12_356, &STATE_VARIABLE_Errors_14_358);
                  SectionKind_372 = (MR_Integer) 1;
                  SectionContext_373 = mercury__term_context__dummy_context_0_f_0();
                }
                else
                {
                  MR_Word Var_352 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                  SectionKind_372 = ((MR_Word) ((MR_hl_field(0, Var_352, 0))));
                  SectionContext_373 = ((MR_Word) ((MR_hl_field(0, Var_352, 1))));
                  STATE_VARIABLE_Errors_14_358 = STATE_VARIABLE_Errors_12_356;
                }
                {
                  ItemSeqInitLookAhead_374 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ItemSeqInitLookAhead_374, 0) = ((MR_Box) (ReadIOMResult_33));
                }
                Var_359 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_360 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_361 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_362 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_374, &ItemSeqFinalLookAhead_375, Var_359, &InclsCord_376, Var_360, &AvailsCord_377, Var_361, &FIMsCord_378, Var_362, &ItemsCord_379, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_363, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_364, STATE_VARIABLE_Errors_14_358, &STATE_VARIABLE_Errors_15_365, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_366, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_367);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_372, SectionContext_373, InclsCord_376, AvailsCord_377, FIMsCord_378, ItemsCord_379, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_368);
                {
                  Var_370 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_370, 0) = ((MR_Box) (SectionKind_372));
                  MR_hl_field(0, Var_370, 1) = ((MR_Box) (SectionContext_373));
                }
                {
                  Var_369 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_369, 0) = ((MR_Box) (Var_370));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_24 = Var_369;
                next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_375;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_368;
                next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_363;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_364;
                next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_365;
                next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_366;
                next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_367;
                MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                InitLookAhead_25 = next_value_of_InitLookAhead_25;
                STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, IOM_48, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Errors_14_463;
                    MR_Word Var_464;
                    MR_Word Var_465;
                    MR_Word Var_466;
                    MR_Word Var_467;
                    MR_String STATE_VARIABLE_SourceFileName_9_468;
                    MR_Word STATE_VARIABLE_SeqNumCounter_9_469;
                    MR_Word STATE_VARIABLE_Errors_15_470;
                    MR_Word STATE_VARIABLE_LineContext_9_471;
                    MR_Word STATE_VARIABLE_LinePosn_9_472;
                    MR_Word STATE_VARIABLE_ModuleComponents_8_473;
                    MR_Word Var_474;
                    MR_Word Var_475;
                    MR_Word SectionKind_477;
                    MR_Word SectionContext_478;
                    MR_Word ItemSeqInitLookAhead_479;
                    MR_Word ItemSeqFinalLookAhead_480;
                    MR_Word InclsCord_481;
                    MR_Word AvailsCord_482;
                    MR_Word FIMsCord_483;
                    MR_Word ItemsCord_484;
                    MR_Word next_value_of_MaybePrevSection_24;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_455;

                      Context_455 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_455, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_14_463);
                      SectionKind_477 = (MR_Integer) 1;
                      SectionContext_478 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_457 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                      SectionKind_477 = ((MR_Word) ((MR_hl_field(0, Var_457, 0))));
                      SectionContext_478 = ((MR_Word) ((MR_hl_field(0, Var_457, 1))));
                      STATE_VARIABLE_Errors_14_463 = STATE_VARIABLE_Errors_0_85;
                    }
                    {
                      ItemSeqInitLookAhead_479 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_479, 0) = ((MR_Box) (ReadIOMResult_33));
                    }
                    Var_464 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_465 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_466 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_467 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_479, &ItemSeqFinalLookAhead_480, Var_464, &InclsCord_481, Var_465, &AvailsCord_482, Var_466, &FIMsCord_483, Var_467, &ItemsCord_484, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_468, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_469, STATE_VARIABLE_Errors_14_463, &STATE_VARIABLE_Errors_15_470, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_471, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_472);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_477, SectionContext_478, InclsCord_481, AvailsCord_482, FIMsCord_483, ItemsCord_484, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_473);
                    {
                      Var_475 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_475, 0) = ((MR_Box) (SectionKind_477));
                      MR_hl_field(0, Var_475, 1) = ((MR_Box) (SectionContext_478));
                    }
                    {
                      Var_474 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_474, 0) = ((MR_Box) (Var_475));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_24 = Var_474;
                    next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_480;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_473;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_468;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_469;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_470;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_471;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_472;
                    MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Errors_14_393;
                    MR_Word Var_394;
                    MR_Word Var_395;
                    MR_Word Var_396;
                    MR_Word Var_397;
                    MR_String STATE_VARIABLE_SourceFileName_9_398;
                    MR_Word STATE_VARIABLE_SeqNumCounter_9_399;
                    MR_Word STATE_VARIABLE_Errors_15_400;
                    MR_Word STATE_VARIABLE_LineContext_9_401;
                    MR_Word STATE_VARIABLE_LinePosn_9_402;
                    MR_Word STATE_VARIABLE_ModuleComponents_8_403;
                    MR_Word Var_404;
                    MR_Word Var_405;
                    MR_Word SectionKind_407;
                    MR_Word SectionContext_408;
                    MR_Word ItemSeqInitLookAhead_409;
                    MR_Word ItemSeqFinalLookAhead_410;
                    MR_Word InclsCord_411;
                    MR_Word AvailsCord_412;
                    MR_Word FIMsCord_413;
                    MR_Word ItemsCord_414;
                    MR_Word next_value_of_MaybePrevSection_24;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_385;

                      Context_385 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_385, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_14_393);
                      SectionKind_407 = (MR_Integer) 1;
                      SectionContext_408 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_387 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                      SectionKind_407 = ((MR_Word) ((MR_hl_field(0, Var_387, 0))));
                      SectionContext_408 = ((MR_Word) ((MR_hl_field(0, Var_387, 1))));
                      STATE_VARIABLE_Errors_14_393 = STATE_VARIABLE_Errors_0_85;
                    }
                    {
                      ItemSeqInitLookAhead_409 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_409, 0) = ((MR_Box) (ReadIOMResult_33));
                    }
                    Var_394 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_395 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_396 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_397 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_409, &ItemSeqFinalLookAhead_410, Var_394, &InclsCord_411, Var_395, &AvailsCord_412, Var_396, &FIMsCord_413, Var_397, &ItemsCord_414, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_398, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_399, STATE_VARIABLE_Errors_14_393, &STATE_VARIABLE_Errors_15_400, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_401, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_402);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_407, SectionContext_408, InclsCord_411, AvailsCord_412, FIMsCord_413, ItemsCord_414, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_403);
                    {
                      Var_405 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_405, 0) = ((MR_Box) (SectionKind_407));
                      MR_hl_field(0, Var_405, 1) = ((MR_Box) (SectionContext_408));
                    }
                    {
                      Var_404 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_404, 0) = ((MR_Box) (Var_405));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_24 = Var_404;
                    next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_410;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_403;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_398;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_399;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_400;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_401;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_402;
                    MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Errors_14_428;
                    MR_Word Var_429;
                    MR_Word Var_430;
                    MR_Word Var_431;
                    MR_Word Var_432;
                    MR_String STATE_VARIABLE_SourceFileName_9_433;
                    MR_Word STATE_VARIABLE_SeqNumCounter_9_434;
                    MR_Word STATE_VARIABLE_Errors_15_435;
                    MR_Word STATE_VARIABLE_LineContext_9_436;
                    MR_Word STATE_VARIABLE_LinePosn_9_437;
                    MR_Word STATE_VARIABLE_ModuleComponents_8_438;
                    MR_Word Var_439;
                    MR_Word Var_440;
                    MR_Word SectionKind_442;
                    MR_Word SectionContext_443;
                    MR_Word ItemSeqInitLookAhead_444;
                    MR_Word ItemSeqFinalLookAhead_445;
                    MR_Word InclsCord_446;
                    MR_Word AvailsCord_447;
                    MR_Word FIMsCord_448;
                    MR_Word ItemsCord_449;
                    MR_Word next_value_of_MaybePrevSection_24;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_420;

                      Context_420 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_420, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_14_428);
                      SectionKind_442 = (MR_Integer) 1;
                      SectionContext_443 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_422 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                      SectionKind_442 = ((MR_Word) ((MR_hl_field(0, Var_422, 0))));
                      SectionContext_443 = ((MR_Word) ((MR_hl_field(0, Var_422, 1))));
                      STATE_VARIABLE_Errors_14_428 = STATE_VARIABLE_Errors_0_85;
                    }
                    {
                      ItemSeqInitLookAhead_444 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_444, 0) = ((MR_Box) (ReadIOMResult_33));
                    }
                    Var_429 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_430 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_431 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_432 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_444, &ItemSeqFinalLookAhead_445, Var_429, &InclsCord_446, Var_430, &AvailsCord_447, Var_431, &FIMsCord_448, Var_432, &ItemsCord_449, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_433, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_434, STATE_VARIABLE_Errors_14_428, &STATE_VARIABLE_Errors_15_435, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_436, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_437);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_442, SectionContext_443, InclsCord_446, AvailsCord_447, FIMsCord_448, ItemsCord_449, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_438);
                    {
                      Var_440 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_440, 0) = ((MR_Box) (SectionKind_442));
                      MR_hl_field(0, Var_440, 1) = ((MR_Box) (SectionContext_443));
                    }
                    {
                      Var_439 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_439, 0) = ((MR_Box) (Var_440));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_24 = Var_439;
                    next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_445;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_438;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_433;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_434;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_435;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_436;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_437;
                    MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Pieces_50;
                    MR_Word Spec_51;
                    MR_Word Var_134;
                    MR_Word Var_135;
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_Errors_7_151;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    Var_135 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[50])));
                    Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
                    Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])), Var_134);
                    Var_149 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                    {
                      Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_components\'/19"));
                      MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(0, Spec_51, 3) = ((MR_Box) (Var_149));
                      MR_hl_field(0, Spec_51, 4) = ((MR_Box) (Pieces_50));
                    }
                    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_51, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_7_151);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_1_91;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_7_151;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_1_92;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_1_93;
                    InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_4_122 = ((MR_String) ((MR_hl_field(3, IOM_48, 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_4_122;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_1_91;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_1_92;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_1_93;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word RawStartModuleName_52 = ((MR_Word) ((MR_hl_field(3, IOM_48, 1))));
                    MR_Word StartContext_53 = ((MR_Word) ((MR_hl_field(3, IOM_48, 2))));
                    MR_Word StartModuleName_56;
                    MR_Word SubModuleFinalLookAhead_58;
                    MR_Word STATE_VARIABLE_Errors_9_191;
                    MR_Word STATE_VARIABLE_ModuleComponents_6_193;
                    MR_String STATE_VARIABLE_SourceFileName_7_194;
                    MR_Word STATE_VARIABLE_SeqNumCounter_7_195;
                    MR_Word STATE_VARIABLE_Errors_10_196;
                    MR_Word STATE_VARIABLE_LineContext_7_197;
                    MR_Word STATE_VARIABLE_LinePosn_7_198;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    if (((MR_tag((MR_Word) RawStartModuleName_52)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_57 = ((MR_Word) ((MR_hl_field(1, RawStartModuleName_52, 0))));
                      MR_String RawBaseName_237 = ((MR_String) ((MR_hl_field(1, RawStartModuleName_52, 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_57, CurModuleName_22);
                      if (succeeded)
                      {
                        {
                          StartModuleName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_56, 0) = ((MR_Box) (CurModuleName_22));
                          MR_hl_field(1, StartModuleName_56, 1) = ((MR_Box) (RawBaseName_237));
                        }
                        STATE_VARIABLE_Errors_9_191 = STATE_VARIABLE_Errors_0_85;
                      }
                      else
                      {
                        MR_Word Var_166;
                        MR_Word Var_167;
                        MR_Word Var_168;
                        MR_Word Var_169;
                        MR_Word Var_171;
                        MR_Word Var_176;
                        MR_Word Var_177;
                        MR_Word Var_178;
                        MR_Word Var_179;
                        MR_Word Pieces_231;
                        MR_Word Spec_232;

                        {
                          Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                          MR_hl_field(3, Var_169, 1) = ((MR_Box) (RawStartModuleName_52));
                        }
                        {
                          Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
                          MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_167 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_168);
                        {
                          Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                          MR_hl_field(3, Var_179, 1) = ((MR_Box) (CurModuleName_22));
                        }
                        {
                          Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
                          MR_hl_field(1, Var_178, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
                        }
                        Var_177 = parse_tree__error_spec__color_as_correct_1_f_0(Var_178);
                        Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_177, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
                        Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[46])), Var_176);
                        Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, Var_171);
                        Pieces_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[44])), Var_166);
                        {
                          Spec_232 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Spec_232, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_components\'/19"));
                          MR_hl_field(0, Spec_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, Spec_232, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                          MR_hl_field(0, Spec_232, 3) = ((MR_Box) (StartContext_53));
                          MR_hl_field(0, Spec_232, 4) = ((MR_Box) (Pieces_231));
                        }
                        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_232, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_9_191);
                        {
                          StartModuleName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, StartModuleName_56, 0) = ((MR_Box) (CurModuleName_22));
                          MR_hl_field(1, StartModuleName_56, 1) = ((MR_Box) (RawBaseName_237));
                        }
                      }
                    }
                    else
                    {
                      MR_String RawBaseName_55 = ((MR_String) ((MR_hl_field(0, RawStartModuleName_52, 0))));

                      {
                        StartModuleName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, StartModuleName_56, 0) = ((MR_Box) (CurModuleName_22));
                        MR_hl_field(1, StartModuleName_56, 1) = ((MR_Box) (RawBaseName_55));
                      }
                      STATE_VARIABLE_Errors_9_191 = STATE_VARIABLE_Errors_0_85;
                    }
                    parse_tree__parse_module__parse_src_file_submodule_21_p_0(FileString_20, FileStringLen_21, ContainingModules_23, MaybePrevSection_24, CurModuleName_22, StartModuleName_56, StartContext_53, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_58, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_6_193, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_7_194, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_7_195, STATE_VARIABLE_Errors_9_191, &STATE_VARIABLE_Errors_10_196, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_7_197, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_7_198);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_25 = SubModuleFinalLookAhead_58;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_6_193;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_7_194;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_7_195;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_10_196;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_7_197;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_7_198;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word EndedModuleName_76 = ((MR_Word) ((MR_hl_field(3, IOM_48, 1))));
                    MR_Word EndContext_77 = ((MR_Word) ((MR_hl_field(3, IOM_48, 2))));

                    parse_tree__parse_module__handle_module_end_marker_8_p_0(CurModuleName_22, ContainingModules_23, ReadIOMResult_33, EndedModuleName_76, EndContext_77, FinalLookAhead_26, STATE_VARIABLE_Errors_0_85, STATE_VARIABLE_Errors_86);
                    *STATE_VARIABLE_ModuleComponents_80 = STATE_VARIABLE_ModuleComponents_0_79;
                    *STATE_VARIABLE_SourceFileName_82 = STATE_VARIABLE_SourceFileName_0_81;
                    *STATE_VARIABLE_SeqNumCounter_84 = STATE_VARIABLE_SeqNumCounter_1_91;
                    *STATE_VARIABLE_LineContext_88 = STATE_VARIABLE_LineContext_1_92;
                    *STATE_VARIABLE_LinePosn_90 = STATE_VARIABLE_LinePosn_1_93;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Var_491;
                    MR_Word Var_492;
                    MR_Word Var_493;
                    MR_Word Var_494;
                    MR_String STATE_VARIABLE_SourceFileName_9_495;
                    MR_Word STATE_VARIABLE_SeqNumCounter_9_496;
                    MR_Word STATE_VARIABLE_Errors_15_497;
                    MR_Word STATE_VARIABLE_LineContext_9_498;
                    MR_Word STATE_VARIABLE_LinePosn_9_499;
                    MR_Word STATE_VARIABLE_ModuleComponents_8_500;
                    MR_Word Var_501;
                    MR_Word Var_502;
                    MR_Word SectionKind_503 = ((MR_Unsigned) ((MR_hl_field(3, IOM_48, 1))) & (MR_Integer) 1);
                    MR_Word SectionContext_504 = ((MR_Word) ((MR_hl_field(3, IOM_48, 2))));
                    MR_Word ItemSeqFinalLookAhead_506;
                    MR_Word InclsCord_507;
                    MR_Word AvailsCord_508;
                    MR_Word FIMsCord_509;
                    MR_Word ItemsCord_510;
                    MR_Word next_value_of_MaybePrevSection_24;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    Var_491 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_492 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_493 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_494 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, (MR_Word) ((MR_Unsigned) 0U), &ItemSeqFinalLookAhead_506, Var_491, &InclsCord_507, Var_492, &AvailsCord_508, Var_493, &FIMsCord_509, Var_494, &ItemsCord_510, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_495, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_496, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_15_497, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_498, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_499);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_503, SectionContext_504, InclsCord_507, AvailsCord_508, FIMsCord_509, ItemsCord_510, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_500);
                    {
                      Var_502 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_502, 0) = ((MR_Box) (SectionKind_503));
                      MR_hl_field(0, Var_502, 1) = ((MR_Box) (SectionContext_504));
                    }
                    {
                      Var_501 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_501, 0) = ((MR_Box) (Var_502));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_24 = Var_501;
                    next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_506;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_500;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_495;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_496;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_497;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_498;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_499;
                    MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                    continue;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ItemSpecs_74 = ((MR_Word) ((MR_hl_field(3, IOM_48, 1))));
                    MR_Word STATE_VARIABLE_Errors_12_206;
                    MR_Word STATE_VARIABLE_Errors_14_210;
                    MR_Word Var_211;
                    MR_Word Var_212;
                    MR_Word Var_213;
                    MR_Word Var_214;
                    MR_String STATE_VARIABLE_SourceFileName_9_215;
                    MR_Word STATE_VARIABLE_SeqNumCounter_9_216;
                    MR_Word STATE_VARIABLE_Errors_15_217;
                    MR_Word STATE_VARIABLE_LineContext_9_218;
                    MR_Word STATE_VARIABLE_LinePosn_9_219;
                    MR_Word STATE_VARIABLE_ModuleComponents_8_220;
                    MR_Word Var_221;
                    MR_Word Var_228;
                    MR_Word SectionKind_248;
                    MR_Word SectionContext_249;
                    MR_Word ItemSeqInitLookAhead_250;
                    MR_Word ItemSeqFinalLookAhead_251;
                    MR_Word InclsCord_252;
                    MR_Word AvailsCord_253;
                    MR_Word FIMsCord_254;
                    MR_Word ItemsCord_255;
                    MR_Word next_value_of_MaybePrevSection_24;
                    MR_Word next_value_of_InitLookAhead_25;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                    parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 8, ItemSpecs_74, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_12_206);
                    if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Context_243;

                      Context_243 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_266);
                      parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(CurModuleName_22, Context_243, STATE_VARIABLE_Errors_12_206, &STATE_VARIABLE_Errors_14_210);
                      SectionKind_248 = (MR_Integer) 1;
                      SectionContext_249 = mercury__term_context__dummy_context_0_f_0();
                    }
                    else
                    {
                      MR_Word Var_209 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_24, 0))));

                      SectionKind_248 = ((MR_Word) ((MR_hl_field(0, Var_209, 0))));
                      SectionContext_249 = ((MR_Word) ((MR_hl_field(0, Var_209, 1))));
                      STATE_VARIABLE_Errors_14_210 = STATE_VARIABLE_Errors_12_206;
                    }
                    {
                      ItemSeqInitLookAhead_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ItemSeqInitLookAhead_250, 0) = ((MR_Box) (ReadIOMResult_33));
                    }
                    Var_211 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_212 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_213 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_214 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_20, FileStringLen_21, CurModuleName_22, ItemSeqInitLookAhead_250, &ItemSeqFinalLookAhead_251, Var_211, &InclsCord_252, Var_212, &AvailsCord_253, Var_213, &FIMsCord_254, Var_214, &ItemsCord_255, STATE_VARIABLE_SourceFileName_0_81, &STATE_VARIABLE_SourceFileName_9_215, STATE_VARIABLE_SeqNumCounter_1_91, &STATE_VARIABLE_SeqNumCounter_9_216, STATE_VARIABLE_Errors_14_210, &STATE_VARIABLE_Errors_15_217, STATE_VARIABLE_LineContext_1_92, &STATE_VARIABLE_LineContext_9_218, STATE_VARIABLE_LinePosn_1_93, &STATE_VARIABLE_LinePosn_9_219);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_22, SectionKind_248, SectionContext_249, InclsCord_252, AvailsCord_253, FIMsCord_254, ItemsCord_255, STATE_VARIABLE_ModuleComponents_0_79, &STATE_VARIABLE_ModuleComponents_8_220);
                    {
                      Var_228 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_228, 0) = ((MR_Box) (SectionKind_248));
                      MR_hl_field(0, Var_228, 1) = ((MR_Box) (SectionContext_249));
                    }
                    {
                      Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var_228));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_24 = Var_221;
                    next_value_of_InitLookAhead_25 = ItemSeqFinalLookAhead_251;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_79 = STATE_VARIABLE_ModuleComponents_8_220;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_9_215;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_9_216;
                    next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_15_217;
                    next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_9_218;
                    next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_9_219;
                    MaybePrevSection_24 = next_value_of_MaybePrevSection_24;
                    InitLookAhead_25 = next_value_of_InitLookAhead_25;
                    STATE_VARIABLE_ModuleComponents_0_79 = next_value_of_STATE_VARIABLE_ModuleComponents_0_79;
                    STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                    STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                    STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                    STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
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
  MR_Word STATE_VARIABLE_Errors_1_120;
  MR_Word Var_121;

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

    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (StartModuleName_27));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[75])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[77])));
    Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[63])));
    Var_91 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[67])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[83])));
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[65])), Var_90);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_85);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[79])), Var_76);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_71);
    NoSectionPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_65);
    {
      NoSectionSpec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NoSectionSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_src_file_submodule\'/21"));
      MR_hl_field(0, NoSectionSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NoSectionSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, NoSectionSpec_40, 3) = ((MR_Box) (StartContext_28));
      MR_hl_field(0, NoSectionSpec_40, 4) = ((MR_Box) (NoSectionPieces_39));
    }
    parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, NoSectionSpec_40, STATE_VARIABLE_Errors_0_52, &STATE_VARIABLE_Errors_1_120);
    SectionKind_37 = (MR_Integer) 0;
    SectionContext_38 = mercury__term_context__dummy_context_0_f_0();
  }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePrevSection_25, 0))));

    SectionKind_37 = ((MR_Word) ((MR_hl_field(0, Var_58, 0))));
    SectionContext_38 = ((MR_Word) ((MR_hl_field(0, Var_58, 1))));
    STATE_VARIABLE_Errors_1_120 = STATE_VARIABLE_Errors_0_52;
  }
  {
    NestedContainingModules_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NestedContainingModules_41, 0) = ((MR_Box) (StartModuleName_27));
    MR_hl_field(1, NestedContainingModules_41, 1) = ((MR_Box) (ContainingModules_24));
  }
  Var_121 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_component_0));
  parse_tree__parse_module__parse_src_file_components_19_p_0(FileString_22, FileStringLen_23, StartModuleName_27, NestedContainingModules_41, (MR_Word) ((MR_Unsigned) 0U), InitLookAhead_29, FinalLookAhead_30, Var_121, &NestedModuleComponents_43, STATE_VARIABLE_SourceFileName_0_48, STATE_VARIABLE_SourceFileName_49, STATE_VARIABLE_SeqNumCounter_0_50, STATE_VARIABLE_SeqNumCounter_51, STATE_VARIABLE_Errors_1_120, STATE_VARIABLE_Errors_53, STATE_VARIABLE_LineContext_0_54, STATE_VARIABLE_LineContext_55, STATE_VARIABLE_LinePosn_0_56, STATE_VARIABLE_LinePosn_57);
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
  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_component_0), ((MR_Box) (Component_45)), STATE_VARIABLE_ModuleComponents_0_46, STATE_VARIABLE_ModuleComponents_47);
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

        Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[87])));
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
        }
        Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[89])), Var_41);
        Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_36);
        Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])), Var_24);
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (EndedModuleName_12));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[92])));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[84])));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
        }
        Var_64 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
        Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[96])));
        {
          Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_91, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
        }
        Var_89 = parse_tree__error_spec__color_as_correct_1_f_0(Var_90);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[98])), Var_88);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_83);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_74);
        Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[91])), Var_63);
        {
          Spec_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/8"));
          MR_hl_field(0, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
      ContainingModule_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ContainingModules_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
parse_tree__parse_module__generate_missing_start_section_warning_src_4_p_0(
  MR_Word CurModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Errors_0_10,
  MR_Word * STATE_VARIABLE_Errors_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_51;
  MR_Word Var_56;
  MR_Word Var_57;

  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (CurModuleName_5));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[57])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[52])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[51])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_16));
  }
  Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[59])));
  Var_43 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[63])));
  Var_57 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[67])));
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[74])));
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[65])), Var_56);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_51);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[61])), Var_42);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_31);
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.generate_missing_start_section_warning_src\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 2, Spec_9, STATE_VARIABLE_Errors_0_10, STATE_VARIABLE_Errors_11);
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
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_component_0), ((MR_Box) (Component_18)), STATE_VARIABLE_ModuleComponents_0_19, STATE_VARIABLE_ModuleComponents_20);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__471__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_trans_opt_file_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__468__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
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
  MR_Word STATE_VARIABLE_LineContext_1_43;
  MR_Word STATE_VARIABLE_LinePosn_1_44;

  parse_tree__parse_module__parse_module_header_11_p_0(FileStr_8, FileStrLen_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), FileName_7, &MaybeModuleHeader_26, &SeqNumCounter1_27, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), &STATE_VARIABLE_LineContext_1_43, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_1_44);
  if (((MR_tag((MR_Word) MaybeModuleHeader_26)) == (MR_Integer) 0))
  {
    *Errors_12 = (MR_Word) ((MR_Word) (MaybeModuleHeader_26));
    *MaybeParseTreeTransOpt_11 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ParseTreeOpt_18;
    MR_Word ParseTreeTransOpt_19;
    MR_Word ConvertErrSpecs_20;
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, 1))));
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
    MR_Word STATE_VARIABLE_Errors_2_51;
    MR_Word STATE_VARIABLE_LineContext_2_52;
    MR_Word STATE_VARIABLE_LinePosn_2_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Errors0_68;

    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_50 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    parse_tree__parse_module__parse_item_sequence_23_p_0(FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_30, Var_46, &InclsCord_31, Var_47, &AvailsCord_32, Var_48, &FIMsCord_33, Var_49, &ItemsCord_34, FileName_7, &SourceFileName_35, SeqNumCounter1_27, &SeqNumCounter_36, Var_50, &STATE_VARIABLE_Errors_2_51, STATE_VARIABLE_LineContext_1_43, &STATE_VARIABLE_LineContext_2_52, STATE_VARIABLE_LinePosn_1_44, &STATE_VARIABLE_LinePosn_2_53);
    parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_35, FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) (MR_mkword(2, &parse_tree__parse_module_scalar_common_2[3])), FinalLookAhead_30, SeqNumCounter_36, STATE_VARIABLE_Errors_2_51, &Errors0_68, STATE_VARIABLE_LineContext_2_52, STATE_VARIABLE_LinePosn_2_53);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_5[2]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_module__parse_trans_opt_file_6_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (InclsCord_31));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Incls != []");
    Avails_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_32);
    parse_tree__convert_import_use__avail_imports_uses_3_p_0(Avails_37, &Imports_38, &Uses_39);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[3]));
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
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(ParseTreeOpt_18, &ParseTreeTransOpt_19, (MR_Word) ((MR_Unsigned) 0U), &ConvertErrSpecs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeTransOpt_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeTransOpt_19));
    }
    parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertErrSpecs_20, Errors0_68, Errors_12);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__471__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_plain_opt_file_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__parse_opt_file__468__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
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
  MR_Word STATE_VARIABLE_LineContext_1_43;
  MR_Word STATE_VARIABLE_LinePosn_1_44;

  parse_tree__parse_module__parse_module_header_11_p_0(FileStr_8, FileStrLen_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), FileName_7, &MaybeModuleHeader_26, &SeqNumCounter1_27, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), &STATE_VARIABLE_LineContext_1_43, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &STATE_VARIABLE_LinePosn_1_44);
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
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, MaybeModuleHeader_26, 1))));
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
    MR_Word STATE_VARIABLE_Errors_2_51;
    MR_Word STATE_VARIABLE_LineContext_2_52;
    MR_Word STATE_VARIABLE_LinePosn_2_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Errors0_68;

    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_50 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    parse_tree__parse_module__parse_item_sequence_23_p_0(FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_30, Var_46, &InclsCord_31, Var_47, &AvailsCord_32, Var_48, &FIMsCord_33, Var_49, &ItemsCord_34, FileName_7, &SourceFileName_35, SeqNumCounter1_27, &SeqNumCounter_36, Var_50, &STATE_VARIABLE_Errors_2_51, STATE_VARIABLE_LineContext_1_43, &STATE_VARIABLE_LineContext_2_52, STATE_VARIABLE_LinePosn_1_44, &STATE_VARIABLE_LinePosn_2_53);
    parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_35, FileStr_8, FileStrLen_9, ModuleName_28, (MR_Word) (MR_mkword(2, &parse_tree__parse_module_scalar_common_2[2])), FinalLookAhead_30, SeqNumCounter_36, STATE_VARIABLE_Errors_2_51, &Errors0_68, STATE_VARIABLE_LineContext_2_52, STATE_VARIABLE_LinePosn_2_53);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_5[2]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_module__parse_plain_opt_file_6_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (InclsCord_31));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140parse_tree.parse_module.parse_opt_file\'/10", (MR_String) "Incls != []");
    Avails_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_32);
    parse_tree__convert_import_use__avail_imports_uses_3_p_0(Avails_37, &Imports_38, &Uses_39);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[3]));
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
  MR_Word STATE_VARIABLE_SeqNumCounter_1_38;
  MR_Word Var_39;
  MR_String _SourceFileName_22;

  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_1_38);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (DefaultModuleName_14));
  }
  parse_tree__parse_module__parse_first_module_decl_14_p_0(FileString_12, FileStringLen_13, Var_39, DefaultExpectationContexts_15, &ModuleDeclPresent_21, (MR_Integer) 0, SourceFileName_16, &_SourceFileName_22, STATE_VARIABLE_SeqNumCounter_1_38, STATE_VARIABLE_SeqNumCounter_32, STATE_VARIABLE_LineContext_0_33, STATE_VARIABLE_LineContext_34, STATE_VARIABLE_LinePosn_0_35, STATE_VARIABLE_LinePosn_36);
  switch (MR_tag((MR_Word) ModuleDeclPresent_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_25 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_21, 2))));
        MR_Word Errors0_26;
        MR_Word Errors_27;

        Errors0_26 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, NoModuleSpec_25, Errors0_26, &Errors_27);
        *MaybeModuleHeader_17 = (MR_Word) ((MR_Word) (Errors_27));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, 0))));
        MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, 1))));
        MR_Word WrongModuleSpec_30 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_21, 2))));
        MR_Word Errors1_31;
        MR_Word NoModuleSpec_47;
        MR_Word Errors0_48;
        MR_Word Errors_49;
        MR_Word Pieces_52;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_62;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (DefaultModuleName_14));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[22])));
        }
        Var_55 = parse_tree__error_spec__color_as_correct_1_f_0(Var_56);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (ModuleName_28));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
        }
        Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_69);
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[118])), Var_67);
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_62);
        Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[116])), Var_54);
        {
          NoModuleSpec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NoModuleSpec_47, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_wrong_module_start\'/3"));
          MR_hl_field(0, NoModuleSpec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, NoModuleSpec_47, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, NoModuleSpec_47, 3) = ((MR_Box) (ModuleNameContext_29));
          MR_hl_field(0, NoModuleSpec_47, 4) = ((MR_Box) (Pieces_52));
        }
        Errors0_48 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, NoModuleSpec_47, Errors0_48, &Errors1_31);
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, WrongModuleSpec_30, Errors1_31, &Errors_49);
        *MaybeModuleHeader_17 = (MR_Word) ((MR_Word) (Errors_49));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_21, 0))));
        MR_Word ModuleNameContext_51 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_21, 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModuleHeader_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_50));
          MR_hl_field(1, base, 1) = ((MR_Box) (ModuleNameContext_51));
        }
      }
      break;
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

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 3, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt3_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, 0))));
    MR_Word ParseTreeInt3_22;
    MR_Word ConvertErrSpecs_23;
    MR_Word ConvertWarnSpecs_24;
    MR_Word HaltAtInvalidInterface_31;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0(ParseTreeInt_21, &ParseTreeInt3_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertErrSpecs_23, (MR_Word) ((MR_Unsigned) 0U), &ConvertWarnSpecs_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt3_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt3_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 256, &HaltAtInvalidInterface_31);
    switch (HaltAtInvalidInterface_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Errors_1_33;

          parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertErrSpecs_23, Errors0_20, &STATE_VARIABLE_Errors_1_33);
          parse_tree__parse_error__add_warnings_3_p_0(ConvertWarnSpecs_24, STATE_VARIABLE_Errors_1_33, Errors_16);
        }
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

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 2, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt2_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, 0))));
    MR_Word ParseTreeInt2_22;
    MR_Word ConvertErrSpecs_23;
    MR_Word ConvertWarnSpecs_24;
    MR_Word HaltAtInvalidInterface_31;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0(ParseTreeInt_21, &ParseTreeInt2_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertErrSpecs_23, (MR_Word) ((MR_Unsigned) 0U), &ConvertWarnSpecs_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt2_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt2_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 256, &HaltAtInvalidInterface_31);
    switch (HaltAtInvalidInterface_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Errors_1_33;

          parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertErrSpecs_23, Errors0_20, &STATE_VARIABLE_Errors_1_33);
          parse_tree__parse_error__add_warnings_3_p_0(ConvertWarnSpecs_24, STATE_VARIABLE_Errors_1_33, Errors_16);
        }
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

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 1, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt1_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, 0))));
    MR_Word ParseTreeInt1_22;
    MR_Word ConvertErrSpecs_23;
    MR_Word ConvertWarnSpecs_24;
    MR_Word HaltAtInvalidInterface_31;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0(ParseTreeInt_21, &ParseTreeInt1_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertErrSpecs_23, (MR_Word) ((MR_Unsigned) 0U), &ConvertWarnSpecs_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt1_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt1_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 256, &HaltAtInvalidInterface_31);
    switch (HaltAtInvalidInterface_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Errors_1_33;

          parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertErrSpecs_23, Errors0_20, &STATE_VARIABLE_Errors_1_33);
          parse_tree__parse_error__add_warnings_3_p_0(ConvertWarnSpecs_24, STATE_VARIABLE_Errors_1_33, Errors_16);
        }
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

  parse_tree__parse_module__parse_int_file_10_p_0((MR_Integer) 0, FileName_10, FileStr_11, FileStrLen_12, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), (MR_Word) (((MR_Box) ((MR_Integer) 0))), DefaultModuleName_13, DefaultExpectationContexts_14, &MaybeParseTreeInt_19, &Errors0_20);
  if ((MaybeParseTreeInt_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeParseTreeInt0_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_16 = Errors0_20;
  }
  else
  {
    MR_Word ParseTreeInt_21 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt_19, 0))));
    MR_Word ParseTreeInt0_22;
    MR_Word ConvertErrSpecs_23;
    MR_Word ConvertWarnSpecs_24;
    MR_Word HaltAtInvalidInterface_31;

    parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0(ParseTreeInt_21, &ParseTreeInt0_22, (MR_Word) ((MR_Unsigned) 0U), &ConvertErrSpecs_23, (MR_Word) ((MR_Unsigned) 0U), &ConvertWarnSpecs_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeParseTreeInt0_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt0_22));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 256, &HaltAtInvalidInterface_31);
    switch (HaltAtInvalidInterface_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Errors_16 = Errors0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Errors_1_33;

          parse_tree__parse_error__add_any_nec_errors_3_p_0(ConvertErrSpecs_23, Errors0_20, &STATE_VARIABLE_Errors_1_33);
          parse_tree__parse_error__add_warnings_3_p_0(ConvertWarnSpecs_24, STATE_VARIABLE_Errors_1_33, Errors_16);
        }
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
  MR_Word STATE_VARIABLE_SeqNumCounter_1_33;
  MR_Word STATE_VARIABLE_LineContext_1_34;
  MR_Word STATE_VARIABLE_LinePosn_1_35;
  MR_Word ModuleDeclPresent_50;
  MR_Word STATE_VARIABLE_SeqNumCounter_1_62;
  MR_Word Var_63;
  MR_String _SourceFileName_51;

  mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_1_62);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (DefaultModuleName_17));
  }
  parse_tree__parse_module__parse_first_module_decl_14_p_0(FileString_13, FileStringLen_14, Var_63, DefaultExpectationContexts_18, &ModuleDeclPresent_50, (MR_Integer) 0, SourceFileName_12, &_SourceFileName_51, STATE_VARIABLE_SeqNumCounter_1_62, &STATE_VARIABLE_SeqNumCounter_1_33, STATE_VARIABLE_LineContext_0_30, &STATE_VARIABLE_LineContext_1_34, STATE_VARIABLE_LinePosn_0_31, &STATE_VARIABLE_LinePosn_1_35);
  switch (MR_tag((MR_Word) ModuleDeclPresent_50)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoModuleSpec_54 = ((MR_Word) ((MR_hl_field(0, ModuleDeclPresent_50, 2))));
        MR_Word Errors0_55;

        Errors0_55 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, NoModuleSpec_54, Errors0_55, STATE_VARIABLE_Errors_32);
        *MaybeParseTreeInt_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_57 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_50, 0))));
        MR_Word ModuleNameContext_58 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_50, 1))));
        MR_Word WrongModuleSpec_59 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_50, 2))));
        MR_Word Errors1_60;
        MR_Word NoModuleSpec_68;
        MR_Word Errors0_69;
        MR_Word Pieces_73;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_83;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;

        {
          Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_78, 1) = ((MR_Box) (DefaultModuleName_17));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[22])));
        }
        Var_76 = parse_tree__error_spec__color_as_correct_1_f_0(Var_77);
        {
          Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_91, 1) = ((MR_Box) (ModuleName_57));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
        }
        Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_90);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[118])), Var_88);
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_83);
        Pieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[116])), Var_75);
        {
          NoModuleSpec_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NoModuleSpec_68, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_wrong_module_start\'/3"));
          MR_hl_field(0, NoModuleSpec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, NoModuleSpec_68, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, NoModuleSpec_68, 3) = ((MR_Box) (ModuleNameContext_58));
          MR_hl_field(0, NoModuleSpec_68, 4) = ((MR_Box) (Pieces_73));
        }
        Errors0_69 = parse_tree__parse_error__init_read_module_errors_0_f_0();
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 1, NoModuleSpec_68, Errors0_69, &Errors1_60);
        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 0, WrongModuleSpec_59, Errors1_60, STATE_VARIABLE_Errors_32);
        *MaybeParseTreeInt_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_50, 0))));
        MR_Word ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_50, 1))));
        MR_Word VersionNumbersResult_26;
        MR_Word STATE_VARIABLE_LookAhead_2_38;
        MR_Word STATE_VARIABLE_SeqNumCounter_2_39;
        MR_Word STATE_VARIABLE_LineContext_2_40;
        MR_Word STATE_VARIABLE_LinePosn_2_41;

        parse_tree__parse_module__parse_any_version_number_item_13_p_0(FileString_13, FileStringLen_14, ModuleName_24, SourceFileName_12, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_LookAhead_2_38, &VersionNumbersResult_26, STATE_VARIABLE_SeqNumCounter_1_33, &STATE_VARIABLE_SeqNumCounter_2_39, STATE_VARIABLE_LineContext_1_34, &STATE_VARIABLE_LineContext_2_40, STATE_VARIABLE_LinePosn_1_35, &STATE_VARIABLE_LinePosn_2_41);
        if (((MR_tag((MR_Word) VersionNumbersResult_26)) == (MR_Integer) 1))
        {
          MR_Word Spec_27 = ((MR_Word) ((MR_hl_field(1, VersionNumbersResult_26, 0))));
          MR_Word Error_28 = ((MR_Unsigned) ((MR_hl_field(1, VersionNumbersResult_26, 1))) & (MR_Integer) 15);
          MR_Word STATE_VARIABLE_Errors_2_42;

          STATE_VARIABLE_Errors_2_42 = parse_tree__parse_error__init_read_module_errors_0_f_0();
          parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_28, Spec_27, STATE_VARIABLE_Errors_2_42, STATE_VARIABLE_Errors_32);
          *MaybeParseTreeInt_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word MaybeVersionNumbers_29 = ((MR_Word) ((MR_hl_field(0, VersionNumbersResult_26, 0))));
          MR_Word STATE_VARIABLE_LookAhead_3_44;
          MR_Word STATE_VARIABLE_SeqNumCounter_3_45;
          MR_Word STATE_VARIABLE_Errors_4_46;
          MR_Word STATE_VARIABLE_LineContext_3_47;
          MR_Word STATE_VARIABLE_LinePosn_3_48;
          MR_Word Var_49;

          parse_tree__parse_module__parse_int_file_sections_17_p_0(FileString_13, FileStringLen_14, ModuleName_24, ModuleNameContext_25, IntFileKind_11, SourceFileName_12, MaybeVersionNumbers_29, STATE_VARIABLE_LookAhead_2_38, &STATE_VARIABLE_LookAhead_3_44, MaybeParseTreeInt_19, STATE_VARIABLE_SeqNumCounter_2_39, &STATE_VARIABLE_SeqNumCounter_3_45, &STATE_VARIABLE_Errors_4_46, STATE_VARIABLE_LineContext_2_40, &STATE_VARIABLE_LineContext_3_47, STATE_VARIABLE_LinePosn_2_41, &STATE_VARIABLE_LinePosn_3_48);
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_11));
          }
          parse_tree__parse_module__check_for_unexpected_item_at_end_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_24, Var_49, STATE_VARIABLE_LookAhead_3_44, STATE_VARIABLE_SeqNumCounter_3_45, STATE_VARIABLE_Errors_4_46, STATE_VARIABLE_Errors_32, STATE_VARIABLE_LineContext_3_47, STATE_VARIABLE_LinePosn_3_48);
        }
      }
      break;
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
  MR_Word STATE_VARIABLE_Errors_0_34,
  MR_Word * STATE_VARIABLE_Errors_35,
  MR_Word LineContext_20,
  MR_Word LinePosn_21)
{
  MR_Word IOMResult_22;

  if ((FinalLookAhead_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word _SeqNumCounter_83;
    MR_Word Var_84;
    MR_Word Var_85;

    parse_tree__parse_module__parse_next_item_or_marker_11_p_0(SourceFileName_12, FileString_13, FileStringLen_14, ModuleName_15, &IOMResult_22, SeqNumCounter0_18, &_SeqNumCounter_83, LineContext_20, &Var_84, LinePosn_21, &Var_85);
  }
  else
    IOMResult_22 = ((MR_Word) ((MR_hl_field(1, FinalLookAhead_17, 0))));
  switch (MR_tag((MR_Word) IOMResult_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Errors_35 = STATE_VARIABLE_Errors_0_34;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemSpec_26 = ((MR_Word) ((MR_hl_field(1, IOMResult_22, 0))));

        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, ItemSpec_26, STATE_VARIABLE_Errors_0_34, STATE_VARIABLE_Errors_35);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term_28 = ((MR_Word) ((MR_hl_field(2, IOMResult_22, 1))));
        MR_Word OoMErrSpecs_29 = ((MR_Word) ((MR_hl_field(2, IOMResult_22, 2))));
        MR_Word WarnSpecs_30 = ((MR_Word) ((MR_hl_field(2, IOMResult_22, 3))));
        MR_Word STATE_VARIABLE_Errors_2_39;
        MR_Word STATE_VARIABLE_Errors_3_40;
        MR_Word Context_62;
        MR_Word Error_63;
        MR_Word Pieces_64;
        MR_Word Spec_67;

        parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 6, OoMErrSpecs_29, STATE_VARIABLE_Errors_0_34, &STATE_VARIABLE_Errors_2_39);
        parse_tree__parse_error__add_warnings_3_p_0(WarnSpecs_30, STATE_VARIABLE_Errors_2_39, &STATE_VARIABLE_Errors_3_40);
        Context_62 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_28);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_72;
              MR_Word Var_73;

              Error_63 = (MR_Integer) 3;
              Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[126])));
              Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
              Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[124])), Var_72);
            }
            break;
          case (MR_Integer) 1:
            {
              Error_63 = (MR_Integer) 4;
              Pieces_64 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[120]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_63 = (MR_Integer) 4;
              Pieces_64 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[122]));
            }
            break;
        }
        {
          Spec_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(0, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_67, 3) = ((MR_Box) (Context_62));
          MR_hl_field(0, Spec_67, 4) = ((MR_Box) (Pieces_64));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_63, Spec_67, STATE_VARIABLE_Errors_3_40, STATE_VARIABLE_Errors_35);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOMTerm_32 = ((MR_Word) ((MR_hl_field(3, IOMResult_22, 1))));
        MR_Word Context_41;
        MR_Word Error_42;
        MR_Word Pieces_43;
        MR_Word Spec_46;

        Context_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_32);
        switch (MR_tag((MR_Word) FileKind_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_51;
              MR_Word Var_52;

              Error_42 = (MR_Integer) 3;
              Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[126])));
              Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
              Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[124])), Var_51);
            }
            break;
          case (MR_Integer) 1:
            {
              Error_42 = (MR_Integer) 4;
              Pieces_43 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[120]));
            }
            break;
          case (MR_Integer) 2:
            {
              Error_42 = (MR_Integer) 4;
              Pieces_43 = (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[122]));
            }
            break;
        }
        {
          Spec_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/4"));
          MR_hl_field(0, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_46, 3) = ((MR_Box) (Context_41));
          MR_hl_field(0, Spec_46, 4) = ((MR_Box) (Pieces_43));
        }
        parse_tree__parse_error__add_nonfatal_error_4_p_0(Error_42, Spec_46, STATE_VARIABLE_Errors_0_34, STATE_VARIABLE_Errors_35);
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
  MR_Word STATE_VARIABLE_LookAhead_1_62;
  MR_Word STATE_VARIABLE_SeqNumCounter_1_63;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_Errors_1_65;
  MR_Word STATE_VARIABLE_LineContext_1_66;
  MR_Word STATE_VARIABLE_LinePosn_1_67;

  Var_64 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__parse_module__parse_int_file_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "interface", STATE_VARIABLE_LookAhead_0_52, &STATE_VARIABLE_LookAhead_1_62, &MaybeFirstRawItemBlock_31, STATE_VARIABLE_SeqNumCounter_0_54, &STATE_VARIABLE_SeqNumCounter_1_63, Var_64, &STATE_VARIABLE_Errors_1_65, STATE_VARIABLE_LineContext_0_57, &STATE_VARIABLE_LineContext_1_66, STATE_VARIABLE_LinePosn_0_59, &STATE_VARIABLE_LinePosn_1_67);
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
    *STATE_VARIABLE_LookAhead_53 = STATE_VARIABLE_LookAhead_1_62;
    *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_1_63;
    *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_1_65;
    *STATE_VARIABLE_LineContext_58 = STATE_VARIABLE_LineContext_1_66;
    *STATE_VARIABLE_LinePosn_60 = STATE_VARIABLE_LinePosn_1_67;
  }
  else
  {
    MR_Word FirstRawItemBlock_33;
    MR_Word FirstSectionKind_36;
    MR_Word FirstIncls_37;
    MR_Word FirstAvails_38;
    MR_Word FirstFIMs_39;
    MR_Word FirstItems_40;
    MR_Tuple Var_77 = ((MR_Tuple) ((MR_hl_field(1, MaybeFirstRawItemBlock_31, 0))));

    FirstRawItemBlock_33 = ((MR_Word) ((MR_hl_field(0, Var_77, 0))));
    FirstSectionKind_36 = ((MR_Unsigned) ((MR_hl_field(0, FirstRawItemBlock_33, 1))) & (MR_Integer) 1);
    FirstIncls_37 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, 2))));
    FirstAvails_38 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, 3))));
    FirstFIMs_39 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, 4))));
    FirstItems_40 = ((MR_Word) ((MR_hl_field(0, FirstRawItemBlock_33, 5))));
    switch (FirstSectionKind_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ParseTreeInt_115;

          {
            ParseTreeInt_115 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ParseTreeInt_115, 0) = ((MR_Box) (ModuleName_20));
            MR_hl_field(0, ParseTreeInt_115, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
            MR_hl_field(0, ParseTreeInt_115, 2) = ((MR_Box) (ModuleNameContext_21));
            MR_hl_field(0, ParseTreeInt_115, 3) = ((MR_Box) (MaybeVersionNumbers_24));
            MR_hl_field(0, ParseTreeInt_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_115, 5) = ((MR_Box) (FirstIncls_37));
            MR_hl_field(0, ParseTreeInt_115, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_115, 7) = ((MR_Box) (FirstAvails_38));
            MR_hl_field(0, ParseTreeInt_115, 8) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_115, 9) = ((MR_Box) (FirstFIMs_39));
            MR_hl_field(0, ParseTreeInt_115, 10) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ParseTreeInt_115, 11) = ((MR_Box) (FirstItems_40));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeParseTreeInt_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_115));
          }
          *STATE_VARIABLE_LookAhead_53 = STATE_VARIABLE_LookAhead_1_62;
          *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_1_63;
          *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_1_65;
          *STATE_VARIABLE_LineContext_58 = STATE_VARIABLE_LineContext_1_66;
          *STATE_VARIABLE_LinePosn_60 = STATE_VARIABLE_LinePosn_1_67;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word MaybeSecondRawItemBlock_41;
          MR_Word STATE_VARIABLE_Errors_2_81;

          parse_tree__parse_module__parse_int_file_section_16_p_0(FileString_18, FileStringLen_19, ModuleName_20, SourceFileName_23, (MR_String) "implementation", STATE_VARIABLE_LookAhead_1_62, STATE_VARIABLE_LookAhead_53, &MaybeSecondRawItemBlock_41, STATE_VARIABLE_SeqNumCounter_1_63, STATE_VARIABLE_SeqNumCounter_55, STATE_VARIABLE_Errors_1_65, &STATE_VARIABLE_Errors_2_81, STATE_VARIABLE_LineContext_1_66, STATE_VARIABLE_LineContext_58, STATE_VARIABLE_LinePosn_1_67, STATE_VARIABLE_LinePosn_60);
          if ((MaybeSecondRawItemBlock_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ParseTreeInt_109;

            {
              ParseTreeInt_109 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParseTreeInt_109, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(0, ParseTreeInt_109, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
              MR_hl_field(0, ParseTreeInt_109, 2) = ((MR_Box) (ModuleNameContext_21));
              MR_hl_field(0, ParseTreeInt_109, 3) = ((MR_Box) (MaybeVersionNumbers_24));
              MR_hl_field(0, ParseTreeInt_109, 4) = ((MR_Box) (FirstIncls_37));
              MR_hl_field(0, ParseTreeInt_109, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_109, 6) = ((MR_Box) (FirstAvails_38));
              MR_hl_field(0, ParseTreeInt_109, 7) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_109, 8) = ((MR_Box) (FirstFIMs_39));
              MR_hl_field(0, ParseTreeInt_109, 9) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ParseTreeInt_109, 10) = ((MR_Box) (FirstItems_40));
              MR_hl_field(0, ParseTreeInt_109, 11) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeParseTreeInt_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_109));
            }
            *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_2_81;
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
            MR_Tuple Var_88 = ((MR_Tuple) ((MR_hl_field(1, MaybeSecondRawItemBlock_41, 0))));

            SecondRawItemBlock_42 = ((MR_Word) ((MR_hl_field(0, Var_88, 0))));
            SectionContext_43 = ((MR_Word) ((MR_hl_field(0, Var_88, 1))));
            SecondSectionKind_45 = ((MR_Unsigned) ((MR_hl_field(0, SecondRawItemBlock_42, 1))) & (MR_Integer) 1);
            SecondIncls_46 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, 2))));
            SecondAvails_47 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, 3))));
            SecondFIMs_48 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, 4))));
            SecondItems_49 = ((MR_Word) ((MR_hl_field(0, SecondRawItemBlock_42, 5))));
            switch (SecondSectionKind_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ParseTreeInt_110;

                  {
                    ParseTreeInt_110 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ParseTreeInt_110, 0) = ((MR_Box) (ModuleName_20));
                    MR_hl_field(0, ParseTreeInt_110, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_22));
                    MR_hl_field(0, ParseTreeInt_110, 2) = ((MR_Box) (ModuleNameContext_21));
                    MR_hl_field(0, ParseTreeInt_110, 3) = ((MR_Box) (MaybeVersionNumbers_24));
                    MR_hl_field(0, ParseTreeInt_110, 4) = ((MR_Box) (FirstIncls_37));
                    MR_hl_field(0, ParseTreeInt_110, 5) = ((MR_Box) (SecondIncls_46));
                    MR_hl_field(0, ParseTreeInt_110, 6) = ((MR_Box) (FirstAvails_38));
                    MR_hl_field(0, ParseTreeInt_110, 7) = ((MR_Box) (SecondAvails_47));
                    MR_hl_field(0, ParseTreeInt_110, 8) = ((MR_Box) (FirstFIMs_39));
                    MR_hl_field(0, ParseTreeInt_110, 9) = ((MR_Box) (SecondFIMs_48));
                    MR_hl_field(0, ParseTreeInt_110, 10) = ((MR_Box) (FirstItems_40));
                    MR_hl_field(0, ParseTreeInt_110, 11) = ((MR_Box) (SecondItems_49));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeParseTreeInt_26 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ParseTreeInt_110));
                  }
                  *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_2_81;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Spec_51;

                  {
                    Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_sections\'/17"));
                    MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_51, 3) = ((MR_Box) (SectionContext_43));
                    MR_hl_field(0, Spec_51, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[34])));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_51, STATE_VARIABLE_Errors_2_81, STATE_VARIABLE_Errors_56);
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
  MR_Word STATE_VARIABLE_SeqNumCounter_0_65,
  MR_Word * STATE_VARIABLE_SeqNumCounter_66,
  MR_Word STATE_VARIABLE_Errors_0_67,
  MR_Word * STATE_VARIABLE_Errors_68,
  MR_Word STATE_VARIABLE_LineContext_0_69,
  MR_Word * STATE_VARIABLE_LineContext_70,
  MR_Word STATE_VARIABLE_LinePosn_0_71,
  MR_Word * STATE_VARIABLE_LinePosn_72)
{
  MR_Word ReadIOMResult_29;
  MR_Word STATE_VARIABLE_SeqNumCounter_1_73;
  MR_Word STATE_VARIABLE_LineContext_1_74;
  MR_Word STATE_VARIABLE_LinePosn_1_75;

  parse_tree__parse_module__get_next_item_or_marker_12_p_0(SourceFileName_20, FileString_17, FileStringLen_18, InitLookAhead_22, ModuleName_19, &ReadIOMResult_29, STATE_VARIABLE_SeqNumCounter_0_65, &STATE_VARIABLE_SeqNumCounter_1_73, STATE_VARIABLE_LineContext_0_69, &STATE_VARIABLE_LineContext_1_74, STATE_VARIABLE_LinePosn_0_71, &STATE_VARIABLE_LinePosn_1_75);
  switch (MR_tag((MR_Word) ReadIOMResult_29)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Errors_68 = STATE_VARIABLE_Errors_0_67;
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_66 = STATE_VARIABLE_SeqNumCounter_1_73;
        *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_1_74;
        *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_1_75;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemSpec_30 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_29, 0))));

        parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, ItemSpec_30, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_66 = STATE_VARIABLE_SeqNumCounter_1_73;
        *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_1_74;
        *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_1_75;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OoMErrSpecs_33 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_29, 2))));
        MR_Word WarnSpecs_34 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_29, 3))));
        MR_Word STATE_VARIABLE_Errors_2_79;

        parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 6, OoMErrSpecs_33, STATE_VARIABLE_Errors_0_67, &STATE_VARIABLE_Errors_2_79);
        parse_tree__parse_error__add_warnings_3_p_0(WarnSpecs_34, STATE_VARIABLE_Errors_2_79, STATE_VARIABLE_Errors_68);
        *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
        *FinalLookAhead_23 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SeqNumCounter_66 = STATE_VARIABLE_SeqNumCounter_1_73;
        *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_1_74;
        *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_1_75;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOMTerm_35 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_29, 1))));
        MR_Word IOM_36 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_29, 2))));

        switch (MR_tag((MR_Word) IOM_36)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Context_61;
              MR_Word IOMPieces_62;
              MR_Word Pieces_63;
              MR_Word Spec_64;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_107;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;

              Context_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_35);
              IOMPieces_62 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_36);
              {
                Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_102, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[38])));
              }
              Var_100 = parse_tree__error_spec__color_as_correct_1_f_0(Var_101);
              Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
              Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_114);
              Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
              Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[40])), Var_112);
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
              Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[36])), Var_99);
              {
                Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_section\'/16"));
                MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Context_61));
                MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
              }
              parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_64, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *FinalLookAhead_23 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_29));
              }
              *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_SeqNumCounter_66 = STATE_VARIABLE_SeqNumCounter_1_73;
              *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_1_74;
              *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_1_75;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, IOM_36, 0))))) {
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
                  MR_Word Context_61;
                  MR_Word IOMPieces_62;
                  MR_Word Pieces_63;
                  MR_Word Spec_64;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word Var_107;
                  MR_Word Var_112;
                  MR_Word Var_113;
                  MR_Word Var_114;

                  Context_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_35);
                  IOMPieces_62 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_36);
                  {
                    Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(3, Var_102, 1) = ((MR_Box) (ExpectedSectionKindStr_21));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[38])));
                  }
                  Var_100 = parse_tree__error_spec__color_as_correct_1_f_0(Var_101);
                  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IOMPieces_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
                  Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_114);
                  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
                  Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[40])), Var_112);
                  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
                  Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[36])), Var_99);
                  {
                    Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_int_file_section\'/16"));
                    MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Context_61));
                    MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_64, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *FinalLookAhead_23 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_29));
                  }
                  *MaybeRawItemBlock_24 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_SeqNumCounter_66 = STATE_VARIABLE_SeqNumCounter_1_73;
                  *STATE_VARIABLE_LineContext_70 = STATE_VARIABLE_LineContext_1_74;
                  *STATE_VARIABLE_LinePosn_72 = STATE_VARIABLE_LinePosn_1_75;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word SectionKind_37 = ((MR_Unsigned) ((MR_hl_field(3, IOM_36, 1))) & (MR_Integer) 1);
                  MR_Word SectionContext_38 = ((MR_Word) ((MR_hl_field(3, IOM_36, 2))));
                  MR_Word InclsCord_40;
                  MR_Word AvailsCord_41;
                  MR_Word FIMsCord_42;
                  MR_Word ItemsCord_43;
                  MR_Word RawItemBlock_45;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Tuple Var_94;
                  MR_String _UpdatedSourceFileName_44;

                  Var_82 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                  Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                  Var_84 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                  Var_85 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                  parse_tree__parse_module__parse_item_sequence_23_p_0(FileString_17, FileStringLen_18, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_23, Var_82, &InclsCord_40, Var_83, &AvailsCord_41, Var_84, &FIMsCord_42, Var_85, &ItemsCord_43, SourceFileName_20, &_UpdatedSourceFileName_44, STATE_VARIABLE_SeqNumCounter_1_73, STATE_VARIABLE_SeqNumCounter_66, STATE_VARIABLE_Errors_0_67, STATE_VARIABLE_Errors_68, STATE_VARIABLE_LineContext_1_74, STATE_VARIABLE_LineContext_70, STATE_VARIABLE_LinePosn_1_75, STATE_VARIABLE_LinePosn_72);
                  Var_90 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_40);
                  Var_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_41);
                  Var_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_42);
                  Var_93 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_43);
                  {
                    RawItemBlock_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, RawItemBlock_45, 0) = ((MR_Box) (ModuleName_19));
                    MR_hl_field(0, RawItemBlock_45, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_37));
                    MR_hl_field(0, RawItemBlock_45, 2) = ((MR_Box) (Var_90));
                    MR_hl_field(0, RawItemBlock_45, 3) = ((MR_Box) (Var_91));
                    MR_hl_field(0, RawItemBlock_45, 4) = ((MR_Box) (Var_92));
                    MR_hl_field(0, RawItemBlock_45, 5) = ((MR_Box) (Var_93));
                  }
                  {
                    Var_94 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_94, 0) = ((MR_Box) (RawItemBlock_45));
                    MR_hl_field(0, Var_94, 1) = ((MR_Box) (SectionContext_38));
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
    *ReadIOMResult_18 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_16, 0))));
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
    MR_Word STATE_VARIABLE_SeqNumCounter_1_59;
    MR_Word STATE_VARIABLE_LineContext_1_60;
    MR_Word STATE_VARIABLE_LinePosn_1_61;
    MR_Word STATE_VARIABLE_InclsCord_1_63;
    MR_Word STATE_VARIABLE_AvailsCord_1_64;
    MR_Word STATE_VARIABLE_FIMsCord_1_65;
    MR_Word STATE_VARIABLE_ItemsCord_1_66;
    MR_String STATE_VARIABLE_SourceFileName_1_67;
    MR_Word STATE_VARIABLE_SeqNumCounter_2_68;
    MR_Word STATE_VARIABLE_Errors_1_69;
    MR_Word STATE_VARIABLE_LineContext_2_70;
    MR_Word STATE_VARIABLE_LinePosn_2_71;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((InitLookAhead_27 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_49, FileString_24, FileStringLen_25, ModuleName_26, &ReadIOMResult_38, STATE_VARIABLE_SeqNumCounter_0_51, &STATE_VARIABLE_SeqNumCounter_1_59, STATE_VARIABLE_LineContext_0_55, &STATE_VARIABLE_LineContext_1_60, STATE_VARIABLE_LinePosn_0_57, &STATE_VARIABLE_LinePosn_1_61);
    else
    {
      ReadIOMResult_38 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_27, 0))));
      STATE_VARIABLE_SeqNumCounter_1_59 = STATE_VARIABLE_SeqNumCounter_0_51;
      STATE_VARIABLE_LineContext_1_60 = STATE_VARIABLE_LineContext_0_55;
      STATE_VARIABLE_LinePosn_1_61 = STATE_VARIABLE_LinePosn_0_57;
    }
    parse_tree__parse_module__parse_item_sequence_inner_25_p_0(FileString_24, FileStringLen_25, ModuleName_26, (MR_Integer) 1024, &NumItemsLeft_39, ReadIOMResult_38, &MidLookAhead_40, STATE_VARIABLE_InclsCord_0_41, &STATE_VARIABLE_InclsCord_1_63, STATE_VARIABLE_AvailsCord_0_43, &STATE_VARIABLE_AvailsCord_1_64, STATE_VARIABLE_FIMsCord_0_45, &STATE_VARIABLE_FIMsCord_1_65, STATE_VARIABLE_ItemsCord_0_47, &STATE_VARIABLE_ItemsCord_1_66, STATE_VARIABLE_SourceFileName_0_49, &STATE_VARIABLE_SourceFileName_1_67, STATE_VARIABLE_SeqNumCounter_1_59, &STATE_VARIABLE_SeqNumCounter_2_68, STATE_VARIABLE_Errors_0_53, &STATE_VARIABLE_Errors_1_69, STATE_VARIABLE_LineContext_1_60, &STATE_VARIABLE_LineContext_2_70, STATE_VARIABLE_LinePosn_1_61, &STATE_VARIABLE_LinePosn_2_71);
    succeeded = (NumItemsLeft_39 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word next_value_of_InitLookAhead_27 = MidLookAhead_40;
      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_41 = STATE_VARIABLE_InclsCord_1_63;
      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_43 = STATE_VARIABLE_AvailsCord_1_64;
      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_45 = STATE_VARIABLE_FIMsCord_1_65;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_47 = STATE_VARIABLE_ItemsCord_1_66;
      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_49 = STATE_VARIABLE_SourceFileName_1_67;
      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_51 = STATE_VARIABLE_SeqNumCounter_2_68;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_53 = STATE_VARIABLE_Errors_1_69;
      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_55 = STATE_VARIABLE_LineContext_2_70;
      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_57 = STATE_VARIABLE_LinePosn_2_71;

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
      *STATE_VARIABLE_LinePosn_58 = STATE_VARIABLE_LinePosn_2_71;
      *STATE_VARIABLE_LineContext_56 = STATE_VARIABLE_LineContext_2_70;
      *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_1_69;
      *STATE_VARIABLE_SeqNumCounter_52 = STATE_VARIABLE_SeqNumCounter_2_68;
      *STATE_VARIABLE_SourceFileName_50 = STATE_VARIABLE_SourceFileName_1_67;
      *STATE_VARIABLE_ItemsCord_48 = STATE_VARIABLE_ItemsCord_1_66;
      *STATE_VARIABLE_FIMsCord_46 = STATE_VARIABLE_FIMsCord_1_65;
      *STATE_VARIABLE_AvailsCord_44 = STATE_VARIABLE_AvailsCord_1_64;
      *STATE_VARIABLE_InclsCord_42 = STATE_VARIABLE_InclsCord_1_63;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__parse_item_sequence_inner_25_p_0(
  MR_String FileString_26,
  MR_Integer FileStringLen_27,
  MR_Word ModuleName_28,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_71,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_72,
  MR_Word ReadIOMResult_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_InclsCord_0_73,
  MR_Word * STATE_VARIABLE_InclsCord_74,
  MR_Word STATE_VARIABLE_AvailsCord_0_75,
  MR_Word * STATE_VARIABLE_AvailsCord_76,
  MR_Word STATE_VARIABLE_FIMsCord_0_77,
  MR_Word * STATE_VARIABLE_FIMsCord_78,
  MR_Word STATE_VARIABLE_ItemsCord_0_79,
  MR_Word * STATE_VARIABLE_ItemsCord_80,
  MR_String STATE_VARIABLE_SourceFileName_0_81,
  MR_String * STATE_VARIABLE_SourceFileName_82,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_83,
  MR_Word * STATE_VARIABLE_SeqNumCounter_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86,
  MR_Word STATE_VARIABLE_LineContext_0_87,
  MR_Word * STATE_VARIABLE_LineContext_88,
  MR_Word STATE_VARIABLE_LinePosn_0_89,
  MR_Word * STATE_VARIABLE_LinePosn_90)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumItemsLeft_0_71 <= (MR_Integer) 0);

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
      *STATE_VARIABLE_LinePosn_90 = STATE_VARIABLE_LinePosn_0_89;
      *STATE_VARIABLE_LineContext_88 = STATE_VARIABLE_LineContext_0_87;
      *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
      *STATE_VARIABLE_SeqNumCounter_84 = STATE_VARIABLE_SeqNumCounter_0_83;
      *STATE_VARIABLE_SourceFileName_82 = STATE_VARIABLE_SourceFileName_0_81;
      *STATE_VARIABLE_ItemsCord_80 = STATE_VARIABLE_ItemsCord_0_79;
      *STATE_VARIABLE_FIMsCord_78 = STATE_VARIABLE_FIMsCord_0_77;
      *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
      *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
      *STATE_VARIABLE_NumItemsLeft_72 = STATE_VARIABLE_NumItemsLeft_0_71;
    }
    else
      switch (MR_tag((MR_Word) ReadIOMResult_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *FinalLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_NumItemsLeft_72 = STATE_VARIABLE_NumItemsLeft_0_71;
            *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
            *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
            *STATE_VARIABLE_FIMsCord_78 = STATE_VARIABLE_FIMsCord_0_77;
            *STATE_VARIABLE_ItemsCord_80 = STATE_VARIABLE_ItemsCord_0_79;
            *STATE_VARIABLE_SourceFileName_82 = STATE_VARIABLE_SourceFileName_0_81;
            *STATE_VARIABLE_SeqNumCounter_84 = STATE_VARIABLE_SeqNumCounter_0_83;
            *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
            *STATE_VARIABLE_LineContext_88 = STATE_VARIABLE_LineContext_0_87;
            *STATE_VARIABLE_LinePosn_90 = STATE_VARIABLE_LinePosn_0_89;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemSpec_41 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_30, 0))));
            MR_Word NextReadIOMResult_262;
            MR_Word STATE_VARIABLE_Errors_1_263;
            MR_Word STATE_VARIABLE_SeqNumCounter_1_264;
            MR_Word STATE_VARIABLE_LineContext_1_265;
            MR_Word STATE_VARIABLE_LinePosn_1_266;
            MR_Word next_value_of_ReadIOMResult_30;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

            parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 5, ItemSpec_41, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_1_263);
            parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_262, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_1_264, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_1_265, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_1_266);
            // direct tailcall eliminated
            ;
            next_value_of_ReadIOMResult_30 = NextReadIOMResult_262;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_1_264;
            next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_1_263;
            next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_1_265;
            next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_1_266;
            ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
            STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
            STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
            STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
            STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OoMErrSpecs_44 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_30, 2))));
            MR_Word WarnSpecs_45 = ((MR_Word) ((MR_hl_field(2, ReadIOMResult_30, 3))));
            MR_Word NextReadIOMResult_46;
            MR_Word STATE_VARIABLE_Errors_1_93;
            MR_Word STATE_VARIABLE_Errors_2_95;
            MR_Word STATE_VARIABLE_SeqNumCounter_1_97;
            MR_Word STATE_VARIABLE_LineContext_1_98;
            MR_Word STATE_VARIABLE_LinePosn_1_99;
            MR_Word next_value_of_ReadIOMResult_30;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

            parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 6, OoMErrSpecs_44, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_2_95);
            parse_tree__parse_error__add_warnings_3_p_0(WarnSpecs_45, STATE_VARIABLE_Errors_2_95, &STATE_VARIABLE_Errors_1_93);
            parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_46, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_1_97, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_1_98, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_1_99);
            // direct tailcall eliminated
            ;
            next_value_of_ReadIOMResult_30 = NextReadIOMResult_46;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_1_97;
            next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_1_93;
            next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_1_98;
            next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_1_99;
            ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
            STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
            STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
            STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
            STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOMTerm_48 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_30, 1))));
            MR_Word IOM_49 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_30, 2))));
            MR_Integer STATE_VARIABLE_NumItemsLeft_2_110 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumItemsLeft_0_71 - (MR_Unsigned) 1);

            switch (MR_tag((MR_Word) IOM_49)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_SeqNumCounter_3_188;
                  MR_Word STATE_VARIABLE_LineContext_3_189;
                  MR_Word STATE_VARIABLE_LinePosn_3_190;
                  MR_Word NextReadIOMResult_191;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_191, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_188, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_189, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_190);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_191;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_188;
                  next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_189;
                  next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_190;
                  STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                  STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Item_69 = ((MR_Word) ((MR_hl_field(1, IOM_49, 0))));
                  MR_Word STATE_VARIABLE_ItemsCord_2_197;
                  MR_Word STATE_VARIABLE_SeqNumCounter_3_198;
                  MR_Word STATE_VARIABLE_LineContext_3_199;
                  MR_Word STATE_VARIABLE_LinePosn_3_200;
                  MR_Word NextReadIOMResult_201;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_79;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_69)), STATE_VARIABLE_ItemsCord_0_79, &STATE_VARIABLE_ItemsCord_2_197);
                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_201, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_198, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_199, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_200);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_201;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_79 = STATE_VARIABLE_ItemsCord_2_197;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_198;
                  next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_199;
                  next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_200;
                  STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_ItemsCord_0_79 = next_value_of_STATE_VARIABLE_ItemsCord_0_79;
                  STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                  STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word OoMErrSpecs_170 = ((MR_Word) ((MR_hl_field(2, IOM_49, 1))));
                  MR_Word Item_171 = ((MR_Word) ((MR_hl_field(2, IOM_49, 0))));
                  MR_Word STATE_VARIABLE_Errors_5_203;
                  MR_Word STATE_VARIABLE_ItemsCord_2_207;
                  MR_Word STATE_VARIABLE_SeqNumCounter_3_208;
                  MR_Word STATE_VARIABLE_LineContext_3_209;
                  MR_Word STATE_VARIABLE_LinePosn_3_210;
                  MR_Word NextReadIOMResult_211;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  MR_Word next_value_of_ReadIOMResult_30;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_79;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_171)), STATE_VARIABLE_ItemsCord_0_79, &STATE_VARIABLE_ItemsCord_2_207);
                  parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 8, OoMErrSpecs_170, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_5_203);
                  parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_211, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_208, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_209, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_210);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                  next_value_of_ReadIOMResult_30 = NextReadIOMResult_211;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_79 = STATE_VARIABLE_ItemsCord_2_207;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_208;
                  next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_5_203;
                  next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_209;
                  next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_210;
                  STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                  ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                  STATE_VARIABLE_ItemsCord_0_79 = next_value_of_STATE_VARIABLE_ItemsCord_0_79;
                  STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                  STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                  STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                  STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IOM_49, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Incls_62 = ((MR_Word) ((MR_hl_field(3, IOM_49, 1))));
                      MR_Word HeadIncl_63 = ((MR_Word) ((MR_hl_field(0, Incls_62, 0))));
                      MR_Word TailIncls_64 = ((MR_Word) ((MR_hl_field(0, Incls_62, 1))));
                      MR_Word Var_145;
                      MR_Word Var_146;
                      MR_Word STATE_VARIABLE_InclsCord_2_234;
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_238;
                      MR_Word STATE_VARIABLE_LineContext_3_239;
                      MR_Word STATE_VARIABLE_LinePosn_3_240;
                      MR_Word NextReadIOMResult_241;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_73;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      {
                        Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_146, 0) = ((MR_Box) (HeadIncl_63));
                        MR_hl_field(1, Var_146, 1) = ((MR_Box) (TailIncls_64));
                      }
                      Var_145 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_146);
                      STATE_VARIABLE_InclsCord_2_234 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_73, Var_145);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_241, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_238, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_239, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_240);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_241;
                      next_value_of_STATE_VARIABLE_InclsCord_0_73 = STATE_VARIABLE_InclsCord_2_234;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_238;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_239;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_240;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_InclsCord_0_73 = next_value_of_STATE_VARIABLE_InclsCord_0_73;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Avails_65 = ((MR_Word) ((MR_hl_field(3, IOM_49, 1))));
                      MR_Word HeadAvail_66 = ((MR_Word) ((MR_hl_field(0, Avails_65, 0))));
                      MR_Word TailAvails_67 = ((MR_Word) ((MR_hl_field(0, Avails_65, 1))));
                      MR_Word Var_148;
                      MR_Word Var_149;
                      MR_Word STATE_VARIABLE_AvailsCord_2_215;
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_218;
                      MR_Word STATE_VARIABLE_LineContext_3_219;
                      MR_Word STATE_VARIABLE_LinePosn_3_220;
                      MR_Word NextReadIOMResult_221;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_75;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      {
                        Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_149, 0) = ((MR_Box) (HeadAvail_66));
                        MR_hl_field(1, Var_149, 1) = ((MR_Box) (TailAvails_67));
                      }
                      Var_148 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_149);
                      STATE_VARIABLE_AvailsCord_2_215 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_75, Var_148);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_221, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_218, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_219, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_220);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_221;
                      next_value_of_STATE_VARIABLE_AvailsCord_0_75 = STATE_VARIABLE_AvailsCord_2_215;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_218;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_219;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_220;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_AvailsCord_0_75 = next_value_of_STATE_VARIABLE_AvailsCord_0_75;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FIM_68 = ((MR_Word) ((MR_hl_field(3, IOM_49, 1))));
                      MR_Word STATE_VARIABLE_FIMsCord_2_226;
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_228;
                      MR_Word STATE_VARIABLE_LineContext_3_229;
                      MR_Word STATE_VARIABLE_LinePosn_3_230;
                      MR_Word NextReadIOMResult_231;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ((MR_Box) (FIM_68)), STATE_VARIABLE_FIMsCord_0_77, &STATE_VARIABLE_FIMsCord_2_226);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_231, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_228, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_229, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_230);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_231;
                      next_value_of_STATE_VARIABLE_FIMsCord_0_77 = STATE_VARIABLE_FIMsCord_2_226;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_228;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_229;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_230;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_FIMsCord_0_77 = next_value_of_STATE_VARIABLE_FIMsCord_0_77;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Pieces_60;
                      MR_Word Spec_61;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_Word Var_123;
                      MR_Word Var_124;
                      MR_Word Var_141;
                      MR_Word STATE_VARIABLE_Errors_5_253;
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_258;
                      MR_Word STATE_VARIABLE_LineContext_3_259;
                      MR_Word STATE_VARIABLE_LinePosn_3_260;
                      MR_Word NextReadIOMResult_261;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      Var_118 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[100])));
                      Var_124 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[106])));
                      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_124, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
                      Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_123);
                      Pieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])), Var_117);
                      Var_141 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_48);
                      {
                        Spec_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.parse_item_sequence_inner\'/25"));
                        MR_hl_field(0, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                        MR_hl_field(0, Spec_61, 3) = ((MR_Box) (Var_141));
                        MR_hl_field(0, Spec_61, 4) = ((MR_Box) (Pieces_60));
                      }
                      parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 8, Spec_61, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_5_253);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_261, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_258, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_259, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_260);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_261;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_258;
                      next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_5_253;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_259;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_260;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
                      continue;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_2_242 = ((MR_String) ((MR_hl_field(3, IOM_49, 1))));
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_248;
                      MR_Word STATE_VARIABLE_LineContext_3_249;
                      MR_Word STATE_VARIABLE_LinePosn_3_250;
                      MR_Word NextReadIOMResult_251;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_2_242, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_251, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_248, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_249, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_250);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_251;
                      next_value_of_STATE_VARIABLE_SourceFileName_0_81 = STATE_VARIABLE_SourceFileName_2_242;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_248;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_249;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_250;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SourceFileName_0_81 = next_value_of_STATE_VARIABLE_SourceFileName_0_81;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
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
                      *STATE_VARIABLE_NumItemsLeft_72 = STATE_VARIABLE_NumItemsLeft_2_110;
                      *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
                      *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
                      *STATE_VARIABLE_FIMsCord_78 = STATE_VARIABLE_FIMsCord_0_77;
                      *STATE_VARIABLE_ItemsCord_80 = STATE_VARIABLE_ItemsCord_0_79;
                      *STATE_VARIABLE_SourceFileName_82 = STATE_VARIABLE_SourceFileName_0_81;
                      *STATE_VARIABLE_SeqNumCounter_84 = STATE_VARIABLE_SeqNumCounter_0_83;
                      *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
                      *STATE_VARIABLE_LineContext_88 = STATE_VARIABLE_LineContext_0_87;
                      *STATE_VARIABLE_LinePosn_90 = STATE_VARIABLE_LinePosn_0_89;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word HandledSpecs_70 = ((MR_Word) ((MR_hl_field(3, IOM_49, 1))));
                      MR_Word STATE_VARIABLE_Errors_5_143;
                      MR_Word STATE_VARIABLE_SeqNumCounter_3_157;
                      MR_Word STATE_VARIABLE_LineContext_3_158;
                      MR_Word STATE_VARIABLE_LinePosn_3_159;
                      MR_Word NextReadIOMResult_174;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      MR_Word next_value_of_ReadIOMResult_30;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_89;

                      parse_tree__parse_error__add_nonfatal_errors_4_p_0((MR_Integer) 8, HandledSpecs_70, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_5_143);
                      parse_tree__parse_module__parse_next_item_or_marker_11_p_0(STATE_VARIABLE_SourceFileName_0_81, FileString_26, FileStringLen_27, ModuleName_28, &NextReadIOMResult_174, STATE_VARIABLE_SeqNumCounter_0_83, &STATE_VARIABLE_SeqNumCounter_3_157, STATE_VARIABLE_LineContext_0_87, &STATE_VARIABLE_LineContext_3_158, STATE_VARIABLE_LinePosn_0_89, &STATE_VARIABLE_LinePosn_3_159);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_71 = STATE_VARIABLE_NumItemsLeft_2_110;
                      next_value_of_ReadIOMResult_30 = NextReadIOMResult_174;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_83 = STATE_VARIABLE_SeqNumCounter_3_157;
                      next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_5_143;
                      next_value_of_STATE_VARIABLE_LineContext_0_87 = STATE_VARIABLE_LineContext_3_158;
                      next_value_of_STATE_VARIABLE_LinePosn_0_89 = STATE_VARIABLE_LinePosn_3_159;
                      STATE_VARIABLE_NumItemsLeft_0_71 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_71;
                      ReadIOMResult_30 = next_value_of_ReadIOMResult_30;
                      STATE_VARIABLE_SeqNumCounter_0_83 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_83;
                      STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                      STATE_VARIABLE_LineContext_0_87 = next_value_of_STATE_VARIABLE_LineContext_0_87;
                      STATE_VARIABLE_LinePosn_0_89 = next_value_of_STATE_VARIABLE_LinePosn_0_89;
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
parse_tree__parse_module__parse_any_version_number_item_13_p_0(
  MR_String FileString_14,
  MR_Integer FileStringLen_15,
  MR_Word ModuleName_16,
  MR_String SourceFileName_17,
  MR_Word InitLookAhead_18,
  MR_Word * FinalLookAhead_19,
  MR_Word * VersionNumberResult_20,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_51,
  MR_Word * STATE_VARIABLE_SeqNumCounter_52,
  MR_Word STATE_VARIABLE_LineContext_0_53,
  MR_Word * STATE_VARIABLE_LineContext_54,
  MR_Word STATE_VARIABLE_LinePosn_0_55,
  MR_Word * STATE_VARIABLE_LinePosn_56)
{
  MR_Word ReadIOMResult_24;

  if ((InitLookAhead_18 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_module__parse_next_item_or_marker_11_p_0(SourceFileName_17, FileString_14, FileStringLen_15, ModuleName_16, &ReadIOMResult_24, STATE_VARIABLE_SeqNumCounter_0_51, STATE_VARIABLE_SeqNumCounter_52, STATE_VARIABLE_LineContext_0_53, STATE_VARIABLE_LineContext_54, STATE_VARIABLE_LinePosn_0_55, STATE_VARIABLE_LinePosn_56);
  else
  {
    ReadIOMResult_24 = ((MR_Word) ((MR_hl_field(1, InitLookAhead_18, 0))));
    *STATE_VARIABLE_SeqNumCounter_52 = STATE_VARIABLE_SeqNumCounter_0_51;
    *STATE_VARIABLE_LineContext_54 = STATE_VARIABLE_LineContext_0_53;
    *STATE_VARIABLE_LinePosn_56 = STATE_VARIABLE_LinePosn_0_55;
  }
  switch (MR_tag((MR_Word) ReadIOMResult_24)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *FinalLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
        *VersionNumberResult_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemSpec_25 = ((MR_Word) ((MR_hl_field(1, ReadIOMResult_24, 0))));

        *FinalLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *VersionNumberResult_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ItemSpec_25));
          MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FinalLookAhead_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_24));
        }
        *VersionNumberResult_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOM_32 = ((MR_Word) ((MR_hl_field(3, ReadIOMResult_24, 2))));

        switch (MR_tag((MR_Word) IOM_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *FinalLookAhead_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_24));
              }
              *VersionNumberResult_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, IOM_32, 0))))) {
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
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *FinalLookAhead_19 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ReadIOMResult_24));
                  }
                  *VersionNumberResult_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word VN_33 = ((MR_Word) ((MR_hl_field(3, IOM_32, 1))));
                  MR_Word Var_63;

                  *FinalLookAhead_19 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_63, 0) = ((MR_Box) (VN_33));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *VersionNumberResult_20 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
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
parse_tree__parse_module__parse_next_item_or_marker_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  parse_tree__parse_module__line_to_pieces_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Pieces_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_next_item_or_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_term_msg_to_pieces__1629__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(0, closure, 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
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
  MR_bool succeeded;
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
        MR_String ErrorMsg_28 = ((MR_String) ((MR_hl_field(1, ReadTermResult_20, 0))));
        MR_Integer LineNumber_29 = ((MR_Integer) ((MR_hl_field(1, ReadTermResult_20, 1))));
        MR_Word Context_30;
        MR_Word Pieces_31;
        MR_Word Spec_32;
        MR_Word Lines_45;
        MR_Word LinePieceLists_46;

        Context_30 = mercury__term_context__context_init_2_f_0(FileName_12, LineNumber_29);
        Lines_45 = mercury__string__words_separator_2_f_0((MR_Word) (&parse_tree__parse_module_scalar_common_5[1]), ErrorMsg_28);
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_module_scalar_common_4[2]), Lines_45, &LinePieceLists_46);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LinePieceLists_46, &Pieces_31);
        {
          Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
          MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
        MR_Word VarSet_33 = ((MR_Word) ((MR_hl_field(2, ReadTermResult_20, 0))));
        MR_Word Term_34 = ((MR_Word) ((MR_hl_field(2, ReadTermResult_20, 1))));
        MR_Integer SeqNum_35;
        MR_Word MaybeItemOrMarker_36;
        MR_Word WarnSpecs_37;
        MR_Word Var_43;

        mercury__counter__allocate_3_p_0(&SeqNum_35, STATE_VARIABLE_SeqNumCounter_0_21, STATE_VARIABLE_SeqNumCounter_22);
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (SeqNum_35));
        }
        parse_tree__parse_item__parse_item_or_marker_7_p_0(ModuleName_15, VarSet_33, Term_34, Var_43, &MaybeItemOrMarker_36, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_37);
        if (((MR_tag((MR_Word) MaybeItemOrMarker_36)) == (MR_Integer) 0))
        {
          MR_Word OoMErrSpecs_39 = ((MR_Word) ((MR_hl_field(0, MaybeItemOrMarker_36, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_16 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (VarSet_33));
            MR_hl_field(2, base, 1) = ((MR_Box) (Term_34));
            MR_hl_field(2, base, 2) = ((MR_Box) (OoMErrSpecs_39));
            MR_hl_field(2, base, 3) = ((MR_Box) (WarnSpecs_37));
          }
        }
        else
        {
          MR_Word ItemOrMarker_38 = ((MR_Word) ((MR_hl_field(1, MaybeItemOrMarker_36, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_16 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) (VarSet_33));
            MR_hl_field(3, base, 1) = ((MR_Box) (Term_34));
            MR_hl_field(3, base, 2) = ((MR_Box) (ItemOrMarker_38));
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
  MR_Word MaybeDefaultModuleName_9,
  MR_Word * MaybeModuleName_10)
{
  MR_Word MaybeResult_12;

  mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_7, &MaybeResult_12);
  if (((MR_tag((MR_Word) MaybeResult_12)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_34 = ((MR_Word) ((MR_hl_field(1, MaybeResult_12, 2))));
    MR_String ErrorMsg0_35;
    MR_String ErrorMsg_36;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Spec_83;

    mercury__io__error_message_2_p_0(ErrorCode_34, &ErrorMsg0_35);
    ErrorMsg_36 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_35);
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (SourceFileName0_8));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__parse_error__io_error_to_err_spec_5_p_0(Var_75, ErrorMsg_36, &Spec_83);
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (Spec_83));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_String FileString_13 = ((MR_String) ((MR_hl_field(0, MaybeResult_12, 0))));
    MR_Integer FileStringLen_14 = ((MR_Integer) ((MR_hl_field(0, MaybeResult_12, 1))));
    MR_Word SeqNumCounter0_16;
    MR_Word ModuleDeclPresent_19;
    MR_String _SourceFileName_20;
    MR_Word _SeqNumCounter_21;
    MR_Word _LineContext_22;
    MR_Word _LinePosn_23;

    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_16);
    parse_tree__parse_module__parse_first_module_decl_14_p_0(FileString_13, FileStringLen_14, MaybeDefaultModuleName_9, (MR_Word) ((MR_Unsigned) 0U), &ModuleDeclPresent_19, (MR_Integer) 1, SourceFileName0_8, &_SourceFileName_20, SeqNumCounter0_16, &_SeqNumCounter_21, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), &_LineContext_22, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_23);
    switch (MR_tag((MR_Word) ModuleDeclPresent_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Pieces_27;
          MR_Word Spec_28;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_72;

          {
            Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_52, 1) = ((MR_Box) (SourceFileName0_8));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_50 = parse_tree__error_spec__color_as_subject_1_f_0(Var_51);
          Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[14])));
          Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
          Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_54);
          Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[8])), Var_49);
          {
            Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.peek_at_file\'/6"));
            MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_28, 3) = ((MR_Box) (Pieces_27));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (Spec_28));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeModuleName_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(1, ModuleDeclPresent_19, 0))));

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
          MR_Word ModuleName_81 = ((MR_Word) ((MR_hl_field(2, ModuleDeclPresent_19, 0))));

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
parse_tree__parse_module__parse_first_module_decl_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  parse_tree__parse_module__line_to_pieces_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Pieces_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
}

static MR_bool MR_CALL 
parse_tree__parse_module__parse_first_module_decl_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_term_msg_to_pieces__1629__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(0, closure, 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_module__parse_first_module_decl_14_p_0(
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word MaybeDefaultModuleName_17,
  MR_Word DefaultExpectationContexts_18,
  MR_Word * ModuleDeclPresent_19,
  MR_Word MayChangeSourceFileName_20,
  MR_String STATE_VARIABLE_SourceFileName_0_57,
  MR_String * STATE_VARIABLE_SourceFileName_58,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_59,
  MR_Word * STATE_VARIABLE_SeqNumCounter_60,
  MR_Word STATE_VARIABLE_LineContext_0_61,
  MR_Word * STATE_VARIABLE_LineContext_62,
  MR_Word STATE_VARIABLE_LinePosn_0_63,
  MR_Word * STATE_VARIABLE_LinePosn_64)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstReadTerm_25;
    MR_Word STATE_VARIABLE_LineContext_1_65;
    MR_Word STATE_VARIABLE_LinePosn_1_66;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_SourceFileName_0_57, FileString_15, FileStringLen_16, STATE_VARIABLE_LineContext_0_61, &STATE_VARIABLE_LineContext_1_65, STATE_VARIABLE_LinePosn_0_63, &STATE_VARIABLE_LinePosn_1_66, &FirstReadTerm_25);
    switch (MR_tag((MR_Word) FirstReadTerm_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word FirstContext_87;

          FirstContext_87 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_57, (MR_Integer) 1);
          Var_81 = mercury__term_context__dummy_context_0_f_0();
          Var_82 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_87);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_19 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
          }
          *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
          *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_0_59;
          *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
          *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ErrorMsg_90 = ((MR_String) ((MR_hl_field(1, FirstReadTerm_25, 0))));
          MR_Integer LineNumber_91 = ((MR_Integer) ((MR_hl_field(1, FirstReadTerm_25, 1))));
          MR_Word Lines_107;
          MR_Word LinePieceLists_108;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word FirstContext_122;
          MR_Word Context_92;
          MR_Word Pieces_93;

          Context_92 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_57, LineNumber_91);
          Lines_107 = mercury__string__words_separator_2_f_0((MR_Word) (&parse_tree__parse_module_scalar_common_5[0]), ErrorMsg_90);
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_module_scalar_common_4[1]), Lines_107, &LinePieceLists_108);
          mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LinePieceLists_108, &Pieces_93);
          FirstContext_122 = mercury__term_context__context_init_2_f_0(STATE_VARIABLE_SourceFileName_0_57, (MR_Integer) 1);
          Var_120 = mercury__term_context__dummy_context_0_f_0();
          Var_121 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_122);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_19 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_120));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_121));
          }
          *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
          *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_0_59;
          *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
          *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_95 = ((MR_Word) ((MR_hl_field(2, FirstReadTerm_25, 0))));
          MR_Word Term_96 = ((MR_Word) ((MR_hl_field(2, FirstReadTerm_25, 1))));
          MR_Integer SeqNum_97;
          MR_Word MaybeItemOrMarker_98;
          MR_Word WarnSpecs_99;
          MR_Word Var_105;
          MR_Word STATE_VARIABLE_SeqNumCounter_1_124;

          mercury__counter__allocate_3_p_0(&SeqNum_97, STATE_VARIABLE_SeqNumCounter_0_59, &STATE_VARIABLE_SeqNumCounter_1_124);
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (SeqNum_97));
          }
          parse_tree__parse_item__parse_item_or_marker_7_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_2[1]), VarSet_95, Term_96, Var_105, &MaybeItemOrMarker_98, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_99);
          if (((MR_tag((MR_Word) MaybeItemOrMarker_98)) == (MR_Integer) 0))
          {
            MR_Word LookAhead_55;
            MR_Word Var_78;
            MR_Word FirstContext_86;
            MR_Word OoMErrSpecs_101 = ((MR_Word) ((MR_hl_field(0, MaybeItemOrMarker_98, 0))));
            MR_Word MaybeFirstIOM_123;

            {
              MaybeFirstIOM_123 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, MaybeFirstIOM_123, 0) = ((MR_Box) (VarSet_95));
              MR_hl_field(2, MaybeFirstIOM_123, 1) = ((MR_Box) (Term_96));
              MR_hl_field(2, MaybeFirstIOM_123, 2) = ((MR_Box) (OoMErrSpecs_101));
              MR_hl_field(2, MaybeFirstIOM_123, 3) = ((MR_Box) (WarnSpecs_99));
            }
            {
              LookAhead_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LookAhead_55, 0) = ((MR_Box) (MaybeFirstIOM_123));
            }
            FirstContext_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
            Var_78 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_86);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *ModuleDeclPresent_19 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (LookAhead_55));
              MR_hl_field(0, base, 1) = ((MR_Box) (FirstContext_86));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_78));
            }
            *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
            *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_1_124;
            *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
            *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
          }
          else
          {
            MR_Word FirstIOM_30 = ((MR_Word) ((MR_hl_field(1, MaybeItemOrMarker_98, 0))));
            MR_Word MaybeFirstIOM_125;

            {
              MaybeFirstIOM_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, MaybeFirstIOM_125, 0) = ((MR_Box) (VarSet_95));
              MR_hl_field(3, MaybeFirstIOM_125, 1) = ((MR_Box) (Term_96));
              MR_hl_field(3, MaybeFirstIOM_125, 2) = ((MR_Box) (FirstIOM_30));
            }
            switch (MR_tag((MR_Word) FirstIOM_30)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_76;
                  MR_Word Var_77;
                  MR_Word FirstLookAhead_83;
                  MR_Word FirstContext_84;

                  {
                    FirstLookAhead_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, FirstLookAhead_83, 0) = ((MR_Box) (MaybeFirstIOM_125));
                  }
                  FirstContext_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
                  Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
                  Var_77 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_84);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *ModuleDeclPresent_19 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_83));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
                  }
                  *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
                  *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_1_124;
                  *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
                  *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, FirstIOM_30, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_76;
                      MR_Word Var_77;
                      MR_Word FirstLookAhead_83;
                      MR_Word FirstContext_84;

                      {
                        FirstLookAhead_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, FirstLookAhead_83, 0) = ((MR_Box) (MaybeFirstIOM_125));
                      }
                      FirstContext_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
                      Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
                      Var_77 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_84);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        *ModuleDeclPresent_19 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_83));
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
                      }
                      *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
                      *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_1_124;
                      *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
                      *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_1_69 = ((MR_String) ((MR_hl_field(3, FirstIOM_30, 1))));

                      switch (MayChangeSourceFileName_20) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_57 = STATE_VARIABLE_SourceFileName_1_69;
                            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_59 = STATE_VARIABLE_SeqNumCounter_1_124;
                            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_61 = STATE_VARIABLE_LineContext_1_65;
                            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_63 = STATE_VARIABLE_LinePosn_1_66;

                            // direct tailcall eliminated
                            ;
                            STATE_VARIABLE_SourceFileName_0_57 = next_value_of_STATE_VARIABLE_SourceFileName_0_57;
                            STATE_VARIABLE_SeqNumCounter_0_59 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_59;
                            STATE_VARIABLE_LineContext_0_61 = next_value_of_STATE_VARIABLE_LineContext_0_61;
                            STATE_VARIABLE_LinePosn_0_63 = next_value_of_STATE_VARIABLE_LinePosn_0_63;
                            continue;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word FirstLookAhead_31;
                            MR_Word FirstContext_32;
                            MR_Word Var_70;

                            {
                              FirstLookAhead_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, FirstLookAhead_31, 0) = ((MR_Box) (MaybeFirstIOM_125));
                            }
                            FirstContext_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_96);
                            Var_70 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_32);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                              *ModuleDeclPresent_19 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (FirstLookAhead_31));
                              MR_hl_field(0, base, 1) = ((MR_Box) (FirstContext_32));
                              MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
                            }
                            *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_1_69;
                            *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_1_124;
                            *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
                            *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word StartModuleName_33 = ((MR_Word) ((MR_hl_field(3, FirstIOM_30, 1))));
                      MR_Word ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(3, FirstIOM_30, 2))));
                      MR_Word DefaultModuleName_36;

                      succeeded = (MaybeDefaultModuleName_17 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        DefaultModuleName_36 = ((MR_Word) ((MR_hl_field(1, MaybeDefaultModuleName_17, 0))));
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_36, StartModuleName_33);
                        succeeded = !(succeeded);
                      }
                      if (succeeded)
                      {
                        MR_Word NameSpec_37;
                        MR_Word Var_75;

                        {
                          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_75, 0) = ((MR_Box) (ModuleNameContext_34));
                        }
                        parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_57, DefaultModuleName_36, DefaultExpectationContexts_18, StartModuleName_33, Var_75, &NameSpec_37);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_19 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (StartModuleName_33));
                          MR_hl_field(1, base, 1) = ((MR_Box) (ModuleNameContext_34));
                          MR_hl_field(1, base, 2) = ((MR_Box) (NameSpec_37));
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_19 = base;
                          MR_hl_field(2, base, 0) = ((MR_Box) (StartModuleName_33));
                          MR_hl_field(2, base, 1) = ((MR_Box) (ModuleNameContext_34));
                        }
                      *STATE_VARIABLE_SourceFileName_58 = STATE_VARIABLE_SourceFileName_0_57;
                      *STATE_VARIABLE_SeqNumCounter_60 = STATE_VARIABLE_SeqNumCounter_1_124;
                      *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_1_65;
                      *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_1_66;
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

  Var_15 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[110])));
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
  Pieces_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[108])), Var_14);
  {
    Spec_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
    MR_hl_field(0, Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
  MR_Word Var_66;
  MR_Word ActualContext_13;

  if (succeeded)
  {
    ActualContext_13 = ((MR_Word) ((MR_hl_field(1, MaybeActualContext_11, 0))));
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
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[20])));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_module_scalar_common_1[16])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (ExpectedName_8));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[22])));
  }
  Var_33 = parse_tree__error_spec__color_as_correct_1_f_0(Var_34);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (ActualName_10));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[26])));
  }
  Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_47);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[15])));
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_module_scalar_common_1[24])), Var_45);
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
    MainMsg_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainMsg_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MainMsg_16, 1) = ((MR_Box) (MaybeContext_14));
    MR_hl_field(3, MainMsg_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MainMsg_16, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MainMsg_16, 4) = ((MR_Box) (Var_58));
  }
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ExpectationContexts_9, &SortedExpectationContexts0_17);
  Var_61 = mercury__term_context__dummy_context_0_f_0();
  mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedExpectationContexts0_17, ((MR_Box) (Var_61)), &SortedExpectationContexts_18);
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_4[0]), SortedExpectationContexts_18, &SubMsgs_19);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MainMsg_16));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (SubMsgs_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Spec_12 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(2, base, 3) = ((MR_Box) (Var_66));
  }
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

  MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_may_change_source_file_name_0);
  MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0);
  MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_decl_present_0);
  MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_header_0);
  MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_iom_result_0);
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
