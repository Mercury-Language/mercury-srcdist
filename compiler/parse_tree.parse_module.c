/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2019-07-04
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s {
  MR_Word parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModules_13;
  MR_Word parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16;
  MR_bool parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded;
  jmp_buf parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__commit_0;
  MR_Word parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModule_90;
  MR_Box parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

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
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__551__1_2_p_0(
  MR_Word Imports_47,
  MR_Word HeadVar__2_78);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__548__1_1_p_0(
  MR_Word InclsCord_39);

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
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_84,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_85,
  MR_Word * STATE_VARIABLE_ModuleComponents_86,
  MR_String STATE_VARIABLE_SourceFileName_0_87,
  MR_String * STATE_VARIABLE_SourceFileName_88,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_89,
  MR_Word * STATE_VARIABLE_SeqNumCounter_90,
  MR_Word STATE_VARIABLE_Specs_0_91,
  MR_Word * STATE_VARIABLE_Specs_92,
  MR_Word STATE_VARIABLE_Errors_0_93,
  MR_Word * STATE_VARIABLE_Errors_94,
  MR_Word STATE_VARIABLE_LineContext_0_95,
  MR_Word * STATE_VARIABLE_LineContext_96,
  MR_Word STATE_VARIABLE_LinePosn_0_97,
  MR_Word * STATE_VARIABLE_LinePosn_98);

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
parse_tree__parse_module__handle_module_end_marker_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0(
  MR_Word CurModuleName_12,
  MR_Word ContainingModules_13,
  MR_Word IOMVarSet_14,
  MR_Word IOMTerm_15,
  MR_Word EndedModuleName_16,
  MR_Word EndContext_17,
  MR_Word * FinalLookAhead_18,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25,
  MR_Word STATE_VARIABLE_Errors_0_26,
  MR_Word * STATE_VARIABLE_Errors_27);

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
parse_tree__parse_module__add_section_component_8_p_0(
  MR_Word ModuleName_9,
  MR_Word SectionKind_10,
  MR_Word SectionContext_11,
  MR_Word InclsCord_12,
  MR_Word AvailsCord_13,
  MR_Word ItemsCord_14,
  MR_Word STATE_VARIABLE_ModuleComponents_0_17,
  MR_Word * STATE_VARIABLE_ModuleComponents_18);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word STATE_VARIABLE_LinePosn_0_51,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word * STATE_VARIABLE_Errors_53);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word STATE_VARIABLE_LinePosn_0_51,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word * STATE_VARIABLE_Errors_53);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_115_95_95_91_51_93_95_48_21_p_0(
  MR_String FileString_22,
  MR_Integer MaxOffset_23,
  MR_Word CurModuleName_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word * RawItemBlocks_29,
  MR_String STATE_VARIABLE_SourceFileName_0_42,
  MR_String * STATE_VARIABLE_SourceFileName_43,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_44,
  MR_Word * STATE_VARIABLE_SeqNumCounter_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47,
  MR_Word STATE_VARIABLE_Errors_0_48,
  MR_Word * STATE_VARIABLE_Errors_49,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word * STATE_VARIABLE_LineContext_51,
  MR_Word STATE_VARIABLE_LinePosn_0_52,
  MR_Word * STATE_VARIABLE_LinePosn_53);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_22_p_0(
  MR_String FileString_23,
  MR_Integer MaxOffset_24,
  MR_Word CurModuleName_26,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_65,
  MR_Word InitLookAhead_28,
  MR_Word * FinalLookAhead_29,
  MR_Word STATE_VARIABLE_VNInfo_0_66,
  MR_Word * STATE_VARIABLE_VNInfo_67,
  MR_Word * MaybeRawItemBlock_31,
  MR_String STATE_VARIABLE_SourceFileName_0_68,
  MR_String * STATE_VARIABLE_SourceFileName_69,
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_95_104_100_114_95_102_105_108_101_95_119_105_116_104_111_117_116_95_115_101_99_116_105_111_110_95_109_97_114_107_101_114_95_95_91_51_93_95_48_22_p_0(
  MR_String FileString_23,
  MR_Integer MaxOffset_24,
  MR_Word CurModuleName_26,
  MR_Word IOMVarSet_27,
  MR_Word IOMTerm_28,
  MR_Word * FinalLookAhead_29,
  MR_Word STATE_VARIABLE_VNInfo_0_44,
  MR_Word * STATE_VARIABLE_VNInfo_45,
  MR_Word * MaybeRawItemBlock_31,
  MR_String STATE_VARIABLE_SourceFileName_0_46,
  MR_String * STATE_VARIABLE_SourceFileName_47,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_48,
  MR_Word * STATE_VARIABLE_SeqNumCounter_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53,
  MR_Word STATE_VARIABLE_LineContext_0_54,
  MR_Word * STATE_VARIABLE_LineContext_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word * STATE_VARIABLE_LinePosn_57);

static void MR_CALL 
parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(
  MR_Word CurModuleName_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_16,
  MR_Word * STATE_VARIABLE_MissingStartSectionWarning_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_Errors_0_20,
  MR_Word * STATE_VARIABLE_Errors_21);

static void MR_CALL 
parse_tree__parse_module__separate_int_imp_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_48,
  MR_Word STATE_VARIABLE_LinePosn_0_49,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * STATE_VARIABLE_Errors_51);

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
  MR_Word STATE_VARIABLE_LineContext_0_48,
  MR_Word STATE_VARIABLE_LinePosn_0_49,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * STATE_VARIABLE_Errors_51);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(
  MR_String FileString_27,
  MR_Integer MaxOffset_28,
  MR_Word ModuleName_30,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_VNInfo_0_45,
  MR_Word * STATE_VARIABLE_VNInfo_46,
  MR_Word STATE_VARIABLE_InclsCord_0_47,
  MR_Word * STATE_VARIABLE_InclsCord_48,
  MR_Word STATE_VARIABLE_AvailsCord_0_49,
  MR_Word * STATE_VARIABLE_AvailsCord_50,
  MR_Word STATE_VARIABLE_ItemsCord_0_51,
  MR_Word * STATE_VARIABLE_ItemsCord_52,
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer MaxOffset_30,
  MR_Word ModuleName_32,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_73,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_74,
  MR_Word InitLookAhead_34,
  MR_Word * FinalLookAhead_35,
  MR_Word STATE_VARIABLE_VNInfo_0_75,
  MR_Word * STATE_VARIABLE_VNInfo_76,
  MR_Word STATE_VARIABLE_InclsCord_0_77,
  MR_Word * STATE_VARIABLE_InclsCord_78,
  MR_Word STATE_VARIABLE_AvailsCord_0_79,
  MR_Word * STATE_VARIABLE_AvailsCord_80,
  MR_Word STATE_VARIABLE_ItemsCord_0_81,
  MR_Word * STATE_VARIABLE_ItemsCord_82,
  MR_String STATE_VARIABLE_SourceFileName_0_83,
  MR_String * STATE_VARIABLE_SourceFileName_84,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_85,
  MR_Word * STATE_VARIABLE_SeqNumCounter_86,
  MR_Word STATE_VARIABLE_Specs_0_87,
  MR_Word * STATE_VARIABLE_Specs_88,
  MR_Word STATE_VARIABLE_Errors_0_89,
  MR_Word * STATE_VARIABLE_Errors_90,
  MR_Word STATE_VARIABLE_LineContext_0_91,
  MR_Word * STATE_VARIABLE_LineContext_92,
  MR_Word STATE_VARIABLE_LinePosn_0_93,
  MR_Word * STATE_VARIABLE_LinePosn_94);

static void MR_CALL 
parse_tree__parse_module__record_version_numbers_6_p_0(
  MR_Word MVN_7,
  MR_Word IOMTerm_8,
  MR_Word STATE_VARIABLE_VNInfo_0_15,
  MR_Word * STATE_VARIABLE_VNInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_15_p_0(
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
parse_tree__parse_module__report_wrong_module_start_7_p_0(
  MR_Word FirstContext_8,
  MR_Word Expected_9,
  MR_Word Actual_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19);

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
parse_tree__parse_module__actually_read_module_opt_10_p_0_2(
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
parse_tree__parse_module__actually_read_module_opt_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int_12_p_0_2(
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
parse_tree__parse_module__actually_read_module_int_12_p_0_1(
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(
  MR_String FileString_19,
  MR_Integer MaxOffset_20,
  MR_Word DefaultModuleName_22,
  MR_Word DefaultExpectationContexts_23,
  MR_Word * ModuleDeclPresent_24,
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
parse_tree__parse_module__report_missing_module_start_5_p_0(
  MR_Word FirstContext_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Errors_0_14,
  MR_Word * STATE_VARIABLE_Errors_15);

static void MR_CALL 
parse_tree__parse_module__read_term_to_iom_result_6_p_0(
  MR_Word ModuleName_7,
  MR_String FileName_8,
  MR_Word ReadTermResult_9,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_20,
  MR_Word * ReadIOMResult_11);

static void MR_CALL 
parse_tree__parse_module__check_module_has_expected_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[106][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][14];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[2][15];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[1][4];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[106][2] = {
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
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should start with either an"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 87 */
  {
    (MR_Box) (((((MR_Unsigned) 28U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[4][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 28U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_module__check_module_has_expected_name_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[69])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[9])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[56])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[64])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[30])))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[3][5] = {
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

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[2][15] = {
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

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  MR_SECTAG_NONE_DIRECT_ARG,
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
    MR_SECTAG_NONE_DIRECT_ARG,
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
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__551__1_2_p_0(
  MR_Word Imports_47,
  MR_Word HeadVar__2_78)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_47)), ((MR_Box) (HeadVar__2_78)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__548__1_1_p_0(
  MR_Word InclsCord_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_39);
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
            MR_Word Var_90 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_14 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

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
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY4_43)));
                      }
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
            MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
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
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
        }
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
    MR_String STATE_VARIABLE_SourceFileName_46_46;
    MR_Word STATE_VARIABLE_SeqNumCounter_47_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word STATE_VARIABLE_Errors_49_49;
    MR_Word STATE_VARIABLE_LineContext_50_50;
    MR_Word STATE_VARIABLE_LinePosn_51_51;
    MR_Word Var_53;
    MR_String STATE_VARIABLE_SourceFileName_54_54;
    MR_Word STATE_VARIABLE_SeqNumCounter_55_55;
    MR_Word STATE_VARIABLE_Specs_56_56;
    MR_Word STATE_VARIABLE_Errors_57_57;
    MR_Word STATE_VARIABLE_LineContext_58_58;
    MR_Word STATE_VARIABLE_LinePosn_59_59;
    MR_Word _LineContext_34;
    MR_Word _LinePosn_35;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_42_42);
    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_44_44);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(FileString_13, MaxOffset_14, DefaultModuleName_18, DefaultExpectationContexts_19, &ModuleDeclPresent_24, STATE_VARIABLE_SourceFileName_0_36, &STATE_VARIABLE_SourceFileName_46_46, STATE_VARIABLE_SeqNumCounter_44_44, &STATE_VARIABLE_SeqNumCounter_47_47, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Errors_42_42, &STATE_VARIABLE_Errors_49_49, STATE_VARIABLE_LineContext_0_37, &STATE_VARIABLE_LineContext_50_50, STATE_VARIABLE_LinePosn_0_38, &STATE_VARIABLE_LinePosn_51_51);
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
    Var_53 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_13, MaxOffset_14, ModuleName_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_25, &FinalLookAhead_32, Var_53, &ModuleComponents_33, STATE_VARIABLE_SourceFileName_46_46, &STATE_VARIABLE_SourceFileName_54_54, STATE_VARIABLE_SeqNumCounter_47_47, &STATE_VARIABLE_SeqNumCounter_55_55, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Errors_49_49, &STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_LineContext_50_50, &STATE_VARIABLE_LineContext_58_58, STATE_VARIABLE_LinePosn_51_51, &STATE_VARIABLE_LinePosn_59_59);
    parse_tree__parse_module__check_for_unexpected_item_15_p_0(STATE_VARIABLE_SourceFileName_54_54, FileString_13, MaxOffset_14, ModuleName_26, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_32, STATE_VARIABLE_SeqNumCounter_55_55, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_39, STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_Errors_40, STATE_VARIABLE_LineContext_58_58, &_LineContext_34, STATE_VARIABLE_LinePosn_59_59, &_LinePosn_35);
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
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_84,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_85,
  MR_Word * STATE_VARIABLE_ModuleComponents_86,
  MR_String STATE_VARIABLE_SourceFileName_0_87,
  MR_String * STATE_VARIABLE_SourceFileName_88,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_89,
  MR_Word * STATE_VARIABLE_SeqNumCounter_90,
  MR_Word STATE_VARIABLE_Specs_0_91,
  MR_Word * STATE_VARIABLE_Specs_92,
  MR_Word STATE_VARIABLE_Errors_0_93,
  MR_Word * STATE_VARIABLE_Errors_94,
  MR_Word STATE_VARIABLE_LineContext_0_95,
  MR_Word * STATE_VARIABLE_LineContext_96,
  MR_Word STATE_VARIABLE_LinePosn_0_97,
  MR_Word * STATE_VARIABLE_LinePosn_98)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_40;
    MR_Word STATE_VARIABLE_SeqNumCounter_99_99;
    MR_Word STATE_VARIABLE_LineContext_100_100;
    MR_Word STATE_VARIABLE_LinePosn_101_101;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_87, FileString_24, MaxOffset_25, InitLookAhead_31, CurModuleName_27, &ReadIOMResult_40, STATE_VARIABLE_SeqNumCounter_0_89, &STATE_VARIABLE_SeqNumCounter_99_99, STATE_VARIABLE_LineContext_0_95, &STATE_VARIABLE_LineContext_100_100, STATE_VARIABLE_LinePosn_0_97, &STATE_VARIABLE_LinePosn_101_101);
    switch (MR_tag((MR_Word) ReadIOMResult_40)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_32 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_86 = STATE_VARIABLE_ModuleComponents_0_85;
          *STATE_VARIABLE_SourceFileName_88 = STATE_VARIABLE_SourceFileName_0_87;
          *STATE_VARIABLE_SeqNumCounter_90 = STATE_VARIABLE_SeqNumCounter_99_99;
          *STATE_VARIABLE_Specs_92 = STATE_VARIABLE_Specs_0_91;
          *STATE_VARIABLE_Errors_94 = STATE_VARIABLE_Errors_0_93;
          *STATE_VARIABLE_LineContext_96 = STATE_VARIABLE_LineContext_100_100;
          *STATE_VARIABLE_LinePosn_98 = STATE_VARIABLE_LinePosn_101_101;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_41 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_40), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Specs_226_226;
          MR_Word STATE_VARIABLE_Errors_228_228;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_93;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

          {
            STATE_VARIABLE_Specs_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_226_226, 0) = ((MR_Box) (ItemSpec_41));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_226_226, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_91));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_228_228);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_99_99;
          next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_226_226;
          next_value_of_STATE_VARIABLE_Errors_0_93 = STATE_VARIABLE_Errors_228_228;
          next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_100_100;
          next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_101_101;
          InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
          STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
          STATE_VARIABLE_Errors_0_93 = next_value_of_STATE_VARIABLE_Errors_0_93;
          STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
          STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
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
          MR_Word ItemsCord_55;
          MR_Word STATE_VARIABLE_Specs_203_203;
          MR_Word STATE_VARIABLE_Errors_204_204;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_String STATE_VARIABLE_SourceFileName_209_209;
          MR_Word STATE_VARIABLE_SeqNumCounter_210_210;
          MR_Word STATE_VARIABLE_Specs_211_211;
          MR_Word STATE_VARIABLE_Errors_212_212;
          MR_Word STATE_VARIABLE_LineContext_213_213;
          MR_Word STATE_VARIABLE_LinePosn_214_214;
          MR_Word STATE_VARIABLE_ModuleComponents_215_215;
          MR_Word Var_216;
          MR_Word Var_225;
          MR_Word _MissingStartSectionWarning_47;
          MR_Word Var_52;
          MR_Word next_value_of_MaybePrevSection_29;
          MR_Word next_value_of_InitLookAhead_31;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_87;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_93;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

          Context_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_43);
          parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_46, STATE_VARIABLE_MissingStartSectionWarning_0_84, &_MissingStartSectionWarning_47, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_203_203, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_204_204);
          SectionContext_49 = mercury__term__context_init_0_f_0();
          {
            ItemSeqInitLookAhead_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 0) = ((MR_Box) (IOMVarSet_42));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 1) = ((MR_Box) (IOMTerm_43));
          }
          Var_206 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_207 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_208 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_50, &ItemSeqFinalLookAhead_51, (MR_Word) ((MR_Unsigned) 0U), &Var_52, Var_206, &InclsCord_53, Var_207, &AvailsCord_54, Var_208, &ItemsCord_55, STATE_VARIABLE_SourceFileName_0_87, &STATE_VARIABLE_SourceFileName_209_209, STATE_VARIABLE_SeqNumCounter_99_99, &STATE_VARIABLE_SeqNumCounter_210_210, STATE_VARIABLE_Specs_203_203, &STATE_VARIABLE_Specs_211_211, STATE_VARIABLE_Errors_204_204, &STATE_VARIABLE_Errors_212_212, STATE_VARIABLE_LineContext_100_100, &STATE_VARIABLE_LineContext_213_213, STATE_VARIABLE_LinePosn_101_101, &STATE_VARIABLE_LinePosn_214_214);
          parse_tree__parse_module__add_section_component_8_p_0(CurModuleName_27, (MR_Integer) 1, SectionContext_49, InclsCord_53, AvailsCord_54, ItemsCord_55, STATE_VARIABLE_ModuleComponents_0_85, &STATE_VARIABLE_ModuleComponents_215_215);
          {
            Var_225 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_225, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_225, 1) = ((MR_Box) (SectionContext_49));
          }
          {
            Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (Var_225));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_29 = Var_216;
          next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_51;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_85 = STATE_VARIABLE_ModuleComponents_215_215;
          next_value_of_STATE_VARIABLE_SourceFileName_0_87 = STATE_VARIABLE_SourceFileName_209_209;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_210_210;
          next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_211_211;
          next_value_of_STATE_VARIABLE_Errors_0_93 = STATE_VARIABLE_Errors_212_212;
          next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_213_213;
          next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_214_214;
          MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
          STATE_VARIABLE_MissingStartSectionWarning_0_84 = (MR_Integer) 0;
          InitLookAhead_31 = next_value_of_InitLookAhead_31;
          STATE_VARIABLE_ModuleComponents_0_85 = next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
          STATE_VARIABLE_SourceFileName_0_87 = next_value_of_STATE_VARIABLE_SourceFileName_0_87;
          STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
          STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
          STATE_VARIABLE_Errors_0_93 = next_value_of_STATE_VARIABLE_Errors_0_93;
          STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
          STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 2))));
          MR_Word IOMVarSet_280 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word IOMTerm_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_56)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_104_104;
                MR_Word STATE_VARIABLE_Errors_105_105;
                MR_Word Var_108;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_String STATE_VARIABLE_SourceFileName_111_111;
                MR_Word STATE_VARIABLE_SeqNumCounter_112_112;
                MR_Word STATE_VARIABLE_Specs_113_113;
                MR_Word STATE_VARIABLE_Errors_114_114;
                MR_Word STATE_VARIABLE_LineContext_115_115;
                MR_Word STATE_VARIABLE_LinePosn_116_116;
                MR_Word STATE_VARIABLE_ModuleComponents_117_117;
                MR_Word Var_118;
                MR_Word Var_127;
                MR_Word SectionKind_264;
                MR_Word SectionContext_265;
                MR_Word ItemSeqInitLookAhead_266;
                MR_Word ItemSeqFinalLookAhead_267;
                MR_Word InclsCord_268;
                MR_Word AvailsCord_269;
                MR_Word ItemsCord_270;
                MR_Word Var_80;
                MR_Word next_value_of_MaybePrevSection_29;
                MR_Word next_value_of_InitLookAhead_31;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_93;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

                switch (MR_tag((MR_Word) IOM_56)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_254;
                        MR_Word _MissingStartSectionWarning_253;

                        Context_254 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_281);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_254, STATE_VARIABLE_MissingStartSectionWarning_0_84, &_MissingStartSectionWarning_253, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_105_105);
                        SectionKind_264 = (MR_Integer) 1;
                        SectionContext_265 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                        SectionKind_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
                        SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                        STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                      }
                      {
                        ItemSeqInitLookAhead_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 0) = ((MR_Box) (IOMVarSet_280));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 1) = ((MR_Box) (IOMTerm_281));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 4:
                        {
                          SectionKind_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 1))) & (MR_Integer) 1);
                          SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 2))));
                          ItemSeqInitLookAhead_266 = (MR_Word) ((MR_Unsigned) 0U);
                          STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                          STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_254;
                            MR_Word _MissingStartSectionWarning_253;

                            Context_254 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_281);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_254, STATE_VARIABLE_MissingStartSectionWarning_0_84, &_MissingStartSectionWarning_253, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_105_105);
                            SectionKind_264 = (MR_Integer) 1;
                            SectionContext_265 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
                            SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                            STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                          }
                          {
                            ItemSeqInitLookAhead_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 0) = ((MR_Box) (IOMVarSet_280));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 1) = ((MR_Box) (IOMTerm_281));
                          }
                        }
                        break;
                    }
                    break;
                }
                Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_266, &ItemSeqFinalLookAhead_267, (MR_Word) ((MR_Unsigned) 0U), &Var_80, Var_108, &InclsCord_268, Var_109, &AvailsCord_269, Var_110, &ItemsCord_270, STATE_VARIABLE_SourceFileName_0_87, &STATE_VARIABLE_SourceFileName_111_111, STATE_VARIABLE_SeqNumCounter_99_99, &STATE_VARIABLE_SeqNumCounter_112_112, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_113_113, STATE_VARIABLE_Errors_105_105, &STATE_VARIABLE_Errors_114_114, STATE_VARIABLE_LineContext_100_100, &STATE_VARIABLE_LineContext_115_115, STATE_VARIABLE_LinePosn_101_101, &STATE_VARIABLE_LinePosn_116_116);
                parse_tree__parse_module__add_section_component_8_p_0(CurModuleName_27, SectionKind_264, SectionContext_265, InclsCord_268, AvailsCord_269, ItemsCord_270, STATE_VARIABLE_ModuleComponents_0_85, &STATE_VARIABLE_ModuleComponents_117_117);
                {
                  Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (SectionKind_264));
                  MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (SectionContext_265));
                }
                {
                  Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_127));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_29 = Var_118;
                next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_267;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_85 = STATE_VARIABLE_ModuleComponents_117_117;
                next_value_of_STATE_VARIABLE_SourceFileName_0_87 = STATE_VARIABLE_SourceFileName_111_111;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_112_112;
                next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_113_113;
                next_value_of_STATE_VARIABLE_Errors_0_93 = STATE_VARIABLE_Errors_114_114;
                next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_115_115;
                next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_116_116;
                MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                STATE_VARIABLE_MissingStartSectionWarning_0_84 = (MR_Integer) 0;
                InitLookAhead_31 = next_value_of_InitLookAhead_31;
                STATE_VARIABLE_ModuleComponents_0_85 = next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                STATE_VARIABLE_SourceFileName_0_87 = next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
                STATE_VARIABLE_Errors_0_93 = next_value_of_STATE_VARIABLE_Errors_0_93;
                STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
                STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Msg_59;
                    MR_Word Spec_60;
                    MR_Word Var_177;
                    MR_Word Var_183;
                    MR_Word STATE_VARIABLE_Specs_185_185;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

                    Var_177 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_281);
                    {
                      Msg_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Msg_59, 0) = ((MR_Box) (Var_177));
                      MR_hl_field(MR_mktag(0), Msg_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[105])));
                    }
                    {
                      Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Msg_59));
                      MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_60, 2) = ((MR_Box) (Var_183));
                    }
                    {
                      STATE_VARIABLE_Specs_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_185_185, 0) = ((MR_Box) (Spec_60));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_185_185, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_91));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_99_99;
                    next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_185_185;
                    next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_100_100;
                    next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_101_101;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
                    STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
                    STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_194_194 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_87 = STATE_VARIABLE_SourceFileName_194_194;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_99_99;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_100_100;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_101_101;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_87 = next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                    STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
                    STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RawStartModuleName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 1))));
                    MR_Word StartContext_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 2))));
                    MR_Word StartModuleName_65;
                    MR_Word SubModuleFinalLookAhead_67;
                    MR_Word STATE_VARIABLE_Specs_153_153;
                    MR_Word STATE_VARIABLE_ModuleComponents_155_155;
                    MR_String STATE_VARIABLE_SourceFileName_156_156;
                    MR_Word STATE_VARIABLE_SeqNumCounter_157_157;
                    MR_Word STATE_VARIABLE_Specs_158_158;
                    MR_Word STATE_VARIABLE_Errors_159_159;
                    MR_Word STATE_VARIABLE_LineContext_160_160;
                    MR_Word STATE_VARIABLE_LinePosn_161_161;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

                    if (((MR_tag((MR_Word) RawStartModuleName_61)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 0))));
                      MR_String RawBaseName_246 = ((MR_String) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_66, CurModuleName_27);
                      if (succeeded)
                      {
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_246));
                        }
                        STATE_VARIABLE_Specs_153_153 = STATE_VARIABLE_Specs_0_91;
                      }
                      else
                      {
                        MR_Word Var_130;
                        MR_Word Var_133;
                        MR_Word Var_134;
                        MR_Word Var_135;
                        MR_Word Var_138;
                        MR_Word Var_139;
                        MR_Word Var_148;
                        MR_Word Var_149;
                        MR_Word Var_150;
                        MR_Word Pieces_237;
                        MR_Word Msg_238;
                        MR_Word Spec_239;

                        {
                          Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (RawStartModuleName_61));
                        }
                        {
                          Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (CurModuleName_27));
                        }
                        {
                          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
                        }
                        {
                          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[104])));
                          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
                        }
                        {
                          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
                          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
                        }
                        {
                          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[103])));
                          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
                        }
                        {
                          Pieces_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[102])));
                          MR_hl_field(MR_mktag(1), Pieces_237, 1) = ((MR_Box) (Var_130));
                        }
                        {
                          Msg_238 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Msg_238, 0) = ((MR_Box) (Pieces_237));
                        }
                        {
                          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Msg_238));
                          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (StartContext_62));
                          MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (Var_150));
                        }
                        {
                          Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                          MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Spec_239 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Spec_239, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), Spec_239, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), Spec_239, 2) = ((MR_Box) (Var_148));
                        }
                        {
                          STATE_VARIABLE_Specs_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_153_153, 0) = ((MR_Box) (Spec_239));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_153_153, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_91));
                        }
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_246));
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
                      STATE_VARIABLE_Specs_153_153 = STATE_VARIABLE_Specs_0_91;
                    }
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(FileString_24, MaxOffset_25, ContainingModules_28, MaybePrevSection_29, CurModuleName_27, StartModuleName_65, StartContext_62, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_67, STATE_VARIABLE_ModuleComponents_0_85, &STATE_VARIABLE_ModuleComponents_155_155, STATE_VARIABLE_SourceFileName_0_87, &STATE_VARIABLE_SourceFileName_156_156, STATE_VARIABLE_SeqNumCounter_99_99, &STATE_VARIABLE_SeqNumCounter_157_157, STATE_VARIABLE_Specs_153_153, &STATE_VARIABLE_Specs_158_158, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_159_159, STATE_VARIABLE_LineContext_100_100, &STATE_VARIABLE_LineContext_160_160, STATE_VARIABLE_LinePosn_101_101, &STATE_VARIABLE_LinePosn_161_161);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_31 = SubModuleFinalLookAhead_67;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_85 = STATE_VARIABLE_ModuleComponents_155_155;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_87 = STATE_VARIABLE_SourceFileName_156_156;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_157_157;
                    next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_158_158;
                    next_value_of_STATE_VARIABLE_Errors_0_93 = STATE_VARIABLE_Errors_159_159;
                    next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_160_160;
                    next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_161_161;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_85 = next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                    STATE_VARIABLE_SourceFileName_0_87 = next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                    STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
                    STATE_VARIABLE_Errors_0_93 = next_value_of_STATE_VARIABLE_Errors_0_93;
                    STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
                    STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word EndedModuleName_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 1))));
                    MR_Word EndContext_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 2))));

                    parse_tree__parse_module__handle_module_end_marker_11_p_0(CurModuleName_27, ContainingModules_28, IOMVarSet_280, IOMTerm_281, EndedModuleName_81, EndContext_82, FinalLookAhead_32, STATE_VARIABLE_Specs_0_91, STATE_VARIABLE_Specs_92, STATE_VARIABLE_Errors_0_93, STATE_VARIABLE_Errors_94);
                    *STATE_VARIABLE_ModuleComponents_86 = STATE_VARIABLE_ModuleComponents_0_85;
                    *STATE_VARIABLE_SourceFileName_88 = STATE_VARIABLE_SourceFileName_0_87;
                    *STATE_VARIABLE_SeqNumCounter_90 = STATE_VARIABLE_SeqNumCounter_99_99;
                    *STATE_VARIABLE_LineContext_96 = STATE_VARIABLE_LineContext_100_100;
                    *STATE_VARIABLE_LinePosn_98 = STATE_VARIABLE_LinePosn_101_101;
                  }
                  break;
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  {
                    MR_Word STATE_VARIABLE_Specs_104_104;
                    MR_Word STATE_VARIABLE_Errors_105_105;
                    MR_Word Var_108;
                    MR_Word Var_109;
                    MR_Word Var_110;
                    MR_String STATE_VARIABLE_SourceFileName_111_111;
                    MR_Word STATE_VARIABLE_SeqNumCounter_112_112;
                    MR_Word STATE_VARIABLE_Specs_113_113;
                    MR_Word STATE_VARIABLE_Errors_114_114;
                    MR_Word STATE_VARIABLE_LineContext_115_115;
                    MR_Word STATE_VARIABLE_LinePosn_116_116;
                    MR_Word STATE_VARIABLE_ModuleComponents_117_117;
                    MR_Word Var_118;
                    MR_Word Var_127;
                    MR_Word SectionKind_264;
                    MR_Word SectionContext_265;
                    MR_Word ItemSeqInitLookAhead_266;
                    MR_Word ItemSeqFinalLookAhead_267;
                    MR_Word InclsCord_268;
                    MR_Word AvailsCord_269;
                    MR_Word ItemsCord_270;
                    MR_Word Var_80;
                    MR_Word next_value_of_MaybePrevSection_29;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_91;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_97;

                    switch (MR_tag((MR_Word) IOM_56)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_254;
                            MR_Word _MissingStartSectionWarning_253;

                            Context_254 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_281);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_254, STATE_VARIABLE_MissingStartSectionWarning_0_84, &_MissingStartSectionWarning_253, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_105_105);
                            SectionKind_264 = (MR_Integer) 1;
                            SectionContext_265 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
                            SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                            STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                          }
                          {
                            ItemSeqInitLookAhead_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 0) = ((MR_Box) (IOMVarSet_280));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 1) = ((MR_Box) (IOMTerm_281));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 0))))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 4:
                            {
                              SectionKind_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 1))) & (MR_Integer) 1);
                              SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_56, (MR_Integer) 2))));
                              ItemSeqInitLookAhead_266 = (MR_Word) ((MR_Unsigned) 0U);
                              STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                              STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                MR_Word Context_254;
                                MR_Word _MissingStartSectionWarning_253;

                                Context_254 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_281);
                                parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_254, STATE_VARIABLE_MissingStartSectionWarning_0_84, &_MissingStartSectionWarning_253, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Errors_0_93, &STATE_VARIABLE_Errors_105_105);
                                SectionKind_264 = (MR_Integer) 1;
                                SectionContext_265 = mercury__term__context_init_0_f_0();
                              }
                              else
                              {
                                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                                SectionKind_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
                                SectionContext_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                                STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_91;
                                STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_93;
                              }
                              {
                                ItemSeqInitLookAhead_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 0) = ((MR_Box) (IOMVarSet_280));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_266, 1) = ((MR_Box) (IOMTerm_281));
                              }
                            }
                            break;
                        }
                        break;
                    }
                    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_24, MaxOffset_25, CurModuleName_27, ItemSeqInitLookAhead_266, &ItemSeqFinalLookAhead_267, (MR_Word) ((MR_Unsigned) 0U), &Var_80, Var_108, &InclsCord_268, Var_109, &AvailsCord_269, Var_110, &ItemsCord_270, STATE_VARIABLE_SourceFileName_0_87, &STATE_VARIABLE_SourceFileName_111_111, STATE_VARIABLE_SeqNumCounter_99_99, &STATE_VARIABLE_SeqNumCounter_112_112, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_113_113, STATE_VARIABLE_Errors_105_105, &STATE_VARIABLE_Errors_114_114, STATE_VARIABLE_LineContext_100_100, &STATE_VARIABLE_LineContext_115_115, STATE_VARIABLE_LinePosn_101_101, &STATE_VARIABLE_LinePosn_116_116);
                    parse_tree__parse_module__add_section_component_8_p_0(CurModuleName_27, SectionKind_264, SectionContext_265, InclsCord_268, AvailsCord_269, ItemsCord_270, STATE_VARIABLE_ModuleComponents_0_85, &STATE_VARIABLE_ModuleComponents_117_117);
                    {
                      Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (SectionKind_264));
                      MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (SectionContext_265));
                    }
                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_127));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_29 = Var_118;
                    next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_267;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_85 = STATE_VARIABLE_ModuleComponents_117_117;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_87 = STATE_VARIABLE_SourceFileName_111_111;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_89 = STATE_VARIABLE_SeqNumCounter_112_112;
                    next_value_of_STATE_VARIABLE_Specs_0_91 = STATE_VARIABLE_Specs_113_113;
                    next_value_of_STATE_VARIABLE_Errors_0_93 = STATE_VARIABLE_Errors_114_114;
                    next_value_of_STATE_VARIABLE_LineContext_0_95 = STATE_VARIABLE_LineContext_115_115;
                    next_value_of_STATE_VARIABLE_LinePosn_0_97 = STATE_VARIABLE_LinePosn_116_116;
                    MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                    STATE_VARIABLE_MissingStartSectionWarning_0_84 = (MR_Integer) 0;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_85 = next_value_of_STATE_VARIABLE_ModuleComponents_0_85;
                    STATE_VARIABLE_SourceFileName_0_87 = next_value_of_STATE_VARIABLE_SourceFileName_0_87;
                    STATE_VARIABLE_SeqNumCounter_0_89 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_89;
                    STATE_VARIABLE_Specs_0_91 = next_value_of_STATE_VARIABLE_Specs_0_91;
                    STATE_VARIABLE_Errors_0_93 = next_value_of_STATE_VARIABLE_Errors_0_93;
                    STATE_VARIABLE_LineContext_0_95 = next_value_of_STATE_VARIABLE_LineContext_0_95;
                    STATE_VARIABLE_LinePosn_0_97 = next_value_of_STATE_VARIABLE_LinePosn_0_97;
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
    MR_Word STATE_VARIABLE_Specs_112_112;
    MR_Word STATE_VARIABLE_Errors_114_114;
    MR_Word Var_117;

    if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NoSectionPieces_44;
      MR_Word NoSectionSpec_45;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;

      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (StartModuleName_31));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[48])));
      }
      {
        NoSectionPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[101])));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (NoSectionPieces_44));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (StartContext_32));
        MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NoSectionSpec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NoSectionSpec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoSectionSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), NoSectionSpec_45, 2) = ((MR_Box) (Var_106));
      }
      {
        STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (NoSectionSpec_45));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
      }
      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_Errors_0_59, &STATE_VARIABLE_Errors_114_114);
      SectionKind_42 = (MR_Integer) 0;
      SectionContext_43 = mercury__term__context_init_0_f_0();
    }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

      SectionKind_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0))));
      SectionContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 1))));
      STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_57;
      STATE_VARIABLE_Errors_114_114 = STATE_VARIABLE_Errors_0_59;
    }
    {
      NestedContainingModules_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NestedContainingModules_46, 0) = ((MR_Box) (StartModuleName_31));
      MR_hl_field(MR_mktag(1), NestedContainingModules_46, 1) = ((MR_Box) (ContainingModules_28));
    }
    Var_117 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_25, MaxOffset_26, StartModuleName_31, NestedContainingModules_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_33, FinalLookAhead_34, Var_117, &NestedModuleComponents_48, STATE_VARIABLE_SourceFileName_0_53, STATE_VARIABLE_SourceFileName_54, STATE_VARIABLE_SeqNumCounter_0_55, STATE_VARIABLE_SeqNumCounter_56, STATE_VARIABLE_Specs_112_112, STATE_VARIABLE_Specs_58, STATE_VARIABLE_Errors_114_114, STATE_VARIABLE_Errors_60, STATE_VARIABLE_LineContext_0_61, STATE_VARIABLE_LineContext_62, STATE_VARIABLE_LinePosn_0_63, STATE_VARIABLE_LinePosn_64);
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
parse_tree__parse_module__handle_module_end_marker_11_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s * env_ptr = (struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s * env_ptr = (struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModule_90 = ((MR_Word) ((env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90));
    parse_tree__parse_module__handle_module_end_marker_11_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s * env_ptr = (struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModule_90);
    if ((env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded)
      parse_tree__parse_module__handle_module_end_marker_11_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_module__handle_module_end_marker_11_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s * env_ptr = (struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &(env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90, (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModules_13, parse_tree__parse_module__handle_module_end_marker_11_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25,
  MR_Word STATE_VARIABLE_Errors_0_26,
  MR_Word * STATE_VARIABLE_Errors_27)
{
  {
    struct parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0_s env;

    (env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__ContainingModules_13 = ContainingModules_13;
    (env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16 = EndedModuleName_16;
    (env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_12, (env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16);
    if ((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded)
    {
      *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_27 = STATE_VARIABLE_Errors_0_26;
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    }
    else
    {
      (env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, CurModuleName_12);
      if ((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded)
      {
        *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Errors_27 = STATE_VARIABLE_Errors_0_26;
        *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      }
      else
      {
        parse_tree__parse_module__handle_module_end_marker_11_p_0_4(&env);
        if ((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__succeeded)
        {
          MR_Word Pieces_22;
          MR_Word Spec_23;
          MR_Word Var_30;
          MR_Word Var_33;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_22));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_46));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_Errors_0_26, STATE_VARIABLE_Errors_27);
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
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Pieces_91;
          MR_Word Spec_92;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) ((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[100])));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[99])));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_91, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Pieces_91));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_92 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_92, 2) = ((MR_Box) (Var_81));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_92));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_Errors_0_26, STATE_VARIABLE_Errors_27);
          *FinalLookAhead_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
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
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        *STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[43])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_3[7])));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (MissingSectionPieces_14));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 2) = ((MR_Box) (Var_67));
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
parse_tree__parse_module__add_section_component_8_p_0(
  MR_Word ModuleName_9,
  MR_Word SectionKind_10,
  MR_Word SectionContext_11,
  MR_Word InclsCord_12,
  MR_Word AvailsCord_13,
  MR_Word ItemsCord_14,
  MR_Word STATE_VARIABLE_ModuleComponents_0_17,
  MR_Word * STATE_VARIABLE_ModuleComponents_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeCtorInfo_22_22;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_12);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
      succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_21_21, AvailsCord_13);
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
        succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_22_22, ItemsCord_14);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_ModuleComponents_18 = STATE_VARIABLE_ModuleComponents_0_17;
    else
    {
      MR_Word Component_16;

      {
        Component_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Component_16, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Component_16, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_10));
        MR_hl_field(MR_mktag(0), Component_16, 2) = ((MR_Box) (SectionContext_11));
        MR_hl_field(MR_mktag(0), Component_16, 3) = ((MR_Box) (InclsCord_12));
        MR_hl_field(MR_mktag(0), Component_16, 4) = ((MR_Box) (AvailsCord_13));
        MR_hl_field(MR_mktag(0), Component_16, 5) = ((MR_Box) (ItemsCord_14));
      }
      *STATE_VARIABLE_ModuleComponents_18 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_17, ((MR_Box) (Component_16)));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word STATE_VARIABLE_LinePosn_0_51,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word * STATE_VARIABLE_Errors_53)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(IntFileKind_13, SourceFileName0_14, FileString_15, MaxOffset_16, STATE_VARIABLE_LineContext_0_50, STATE_VARIABLE_LinePosn_0_51, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_52, STATE_VARIABLE_Errors_53);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word STATE_VARIABLE_LinePosn_0_51,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word * STATE_VARIABLE_Errors_53)
{
  {
    MR_Word SeqNumCounter0_25;
    MR_Word ModuleDeclPresent_26;
    MR_String SourceFileName1_27;
    MR_Word SeqNumCounter1_28;
    MR_Word ModuleName_33;
    MR_Word ModuleNameContext_34;
    MR_Word MaybeVersionNumbers_35;
    MR_Word IntIncls_36;
    MR_Word ImpIncls_37;
    MR_Word IntAvails_38;
    MR_Word ImpAvails_39;
    MR_Word IntItems_40;
    MR_Word ImpItems_41;
    MR_Word STATE_VARIABLE_Errors_55_55;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word STATE_VARIABLE_Errors_59_59;
    MR_Word STATE_VARIABLE_LineContext_60_60;
    MR_Word STATE_VARIABLE_LinePosn_61_61;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_55_55);
    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_25);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(FileString_15, MaxOffset_16, DefaultModuleName_20, DefaultExpectationContexts_21, &ModuleDeclPresent_26, SourceFileName0_14, &SourceFileName1_27, SeqNumCounter0_25, &SeqNumCounter1_28, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Errors_55_55, &STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_LineContext_0_50, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_51, &STATE_VARIABLE_LinePosn_61_61);
    switch (MR_tag((MR_Word) ModuleDeclPresent_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LookAhead_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_26, (MR_Integer) 0))));
          MR_Word LookAheadContext_30;

          if ((LookAhead_29 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              LookAheadContext_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LookAheadContext_30, 0) = ((MR_Box) (SourceFileName0_14));
              MR_hl_field(MR_mktag(0), LookAheadContext_30, 1) = ((MR_Box) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word LookAheadTerm_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LookAhead_29, (MR_Integer) 1))));

            LookAheadContext_30 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LookAheadTerm_32);
          }
          parse_tree__parse_module__report_missing_module_start_5_p_0(LookAheadContext_30, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_52, STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_Errors_53);
          ModuleName_33 = DefaultModuleName_20;
          ModuleNameContext_34 = mercury__term__context_init_0_f_0();
          MaybeVersionNumbers_35 = (MR_Word) ((MR_Unsigned) 0U);
          IntIncls_36 = (MR_Word) ((MR_Unsigned) 0U);
          ImpIncls_37 = (MR_Word) ((MR_Unsigned) 0U);
          IntAvails_38 = (MR_Word) ((MR_Unsigned) 0U);
          ImpAvails_39 = (MR_Word) ((MR_Unsigned) 0U);
          IntItems_40 = (MR_Word) ((MR_Unsigned) 0U);
          ImpItems_41 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_26, (MR_Integer) 0))));
          ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_26, (MR_Integer) 1))));
          parse_tree__parse_module__report_wrong_module_start_7_p_0(ModuleNameContext_34, DefaultModuleName_20, ModuleName_33, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_52, STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_Errors_53);
          MaybeVersionNumbers_35 = (MR_Word) ((MR_Unsigned) 0U);
          IntIncls_36 = (MR_Word) ((MR_Unsigned) 0U);
          ImpIncls_37 = (MR_Word) ((MR_Unsigned) 0U);
          IntAvails_38 = (MR_Word) ((MR_Unsigned) 0U);
          ImpAvails_39 = (MR_Word) ((MR_Unsigned) 0U);
          IntItems_40 = (MR_Word) ((MR_Unsigned) 0U);
          ImpItems_41 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FinalLookAhead_42;
          MR_Word VNInfo_43;
          MR_Word RawItemBlocks_44;
          MR_String SourceFileName_45;
          MR_Word SeqNumCounter_46;
          MR_Word STATE_VARIABLE_Specs_64_64;
          MR_Word STATE_VARIABLE_Errors_65_65;
          MR_Word STATE_VARIABLE_LineContext_66_66;
          MR_Word STATE_VARIABLE_LinePosn_67_67;
          MR_Word Var_70;
          MR_Word _LineContext_48;
          MR_Word _LinePosn_49;

          ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_26, (MR_Integer) 0))));
          ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_26, (MR_Integer) 1))));
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_115_95_95_91_51_93_95_48_21_p_0(FileString_15, MaxOffset_16, ModuleName_33, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_42, (MR_Word) ((MR_Unsigned) 4U), &VNInfo_43, &RawItemBlocks_44, SourceFileName1_27, &SourceFileName_45, SeqNumCounter1_28, &SeqNumCounter_46, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Errors_59_59, &STATE_VARIABLE_Errors_65_65, STATE_VARIABLE_LineContext_60_60, &STATE_VARIABLE_LineContext_66_66, STATE_VARIABLE_LinePosn_61_61, &STATE_VARIABLE_LinePosn_67_67);
          switch (MR_tag((MR_Word) VNInfo_43)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(VNInfo_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int\'/12", (MR_String) "dont_allow_version_numbers");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  MaybeVersionNumbers_35 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MVN_47 = (MR_Word) (MR_body((MR_Word) (VNInfo_43), (MR_Integer) 1));

                {
                  MaybeVersionNumbers_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeVersionNumbers_35, 0) = ((MR_Box) (MVN_47));
                }
              }
              break;
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
          }
          parse_tree__parse_module__check_for_unexpected_item_15_p_0(SourceFileName_45, FileString_15, MaxOffset_16, ModuleName_33, Var_70, FinalLookAhead_42, SeqNumCounter_46, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_52, STATE_VARIABLE_Errors_65_65, STATE_VARIABLE_Errors_53, STATE_VARIABLE_LineContext_66_66, &_LineContext_48, STATE_VARIABLE_LinePosn_67_67, &_LinePosn_49);
          parse_tree__parse_module__separate_int_imp_items_7_p_0(RawItemBlocks_44, &IntIncls_36, &ImpIncls_37, &IntAvails_38, &ImpAvails_39, &IntItems_40, &ImpItems_41);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_33));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_41));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_115_95_95_91_51_93_95_48_21_p_0(
  MR_String FileString_22,
  MR_Integer MaxOffset_23,
  MR_Word CurModuleName_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word * RawItemBlocks_29,
  MR_String STATE_VARIABLE_SourceFileName_0_42,
  MR_String * STATE_VARIABLE_SourceFileName_43,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_44,
  MR_Word * STATE_VARIABLE_SeqNumCounter_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47,
  MR_Word STATE_VARIABLE_Errors_0_48,
  MR_Word * STATE_VARIABLE_Errors_49,
  MR_Word STATE_VARIABLE_LineContext_0_50,
  MR_Word * STATE_VARIABLE_LineContext_51,
  MR_Word STATE_VARIABLE_LinePosn_0_52,
  MR_Word * STATE_VARIABLE_LinePosn_53)
{
  {
    MR_Word MidLookAhead_36;
    MR_Word MaybeHeadRawItemBlock_37;
    MR_Word STATE_VARIABLE_VNInfo_55_55;
    MR_String STATE_VARIABLE_SourceFileName_56_56;
    MR_Word STATE_VARIABLE_SeqNumCounter_57_57;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word STATE_VARIABLE_Errors_59_59;
    MR_Word STATE_VARIABLE_LineContext_60_60;
    MR_Word STATE_VARIABLE_LinePosn_61_61;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_22_p_0(FileString_22, MaxOffset_23, CurModuleName_25, (MR_Integer) 0, InitLookAhead_26, &MidLookAhead_36, STATE_VARIABLE_VNInfo_0_40, &STATE_VARIABLE_VNInfo_55_55, &MaybeHeadRawItemBlock_37, STATE_VARIABLE_SourceFileName_0_42, &STATE_VARIABLE_SourceFileName_56_56, STATE_VARIABLE_SeqNumCounter_0_44, &STATE_VARIABLE_SeqNumCounter_57_57, STATE_VARIABLE_Specs_0_46, &STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Errors_0_48, &STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_LineContext_0_50, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_52, &STATE_VARIABLE_LinePosn_61_61);
    if ((MaybeHeadRawItemBlock_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FinalLookAhead_27 = MidLookAhead_36;
      *RawItemBlocks_29 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VNInfo_41 = STATE_VARIABLE_VNInfo_55_55;
      *STATE_VARIABLE_SourceFileName_43 = STATE_VARIABLE_SourceFileName_56_56;
      *STATE_VARIABLE_SeqNumCounter_45 = STATE_VARIABLE_SeqNumCounter_57_57;
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_58_58;
      *STATE_VARIABLE_Errors_49 = STATE_VARIABLE_Errors_59_59;
      *STATE_VARIABLE_LineContext_51 = STATE_VARIABLE_LineContext_60_60;
      *STATE_VARIABLE_LinePosn_53 = STATE_VARIABLE_LinePosn_61_61;
    }
    else
    {
      MR_Word HeadRawItemBlock_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadRawItemBlock_37, (MR_Integer) 0))));
      MR_Word TailRawItemBlocks_39;

      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_115_95_95_91_51_93_95_48_21_p_0(FileString_22, MaxOffset_23, CurModuleName_25, MidLookAhead_36, FinalLookAhead_27, STATE_VARIABLE_VNInfo_55_55, STATE_VARIABLE_VNInfo_41, &TailRawItemBlocks_39, STATE_VARIABLE_SourceFileName_56_56, STATE_VARIABLE_SourceFileName_43, STATE_VARIABLE_SeqNumCounter_57_57, STATE_VARIABLE_SeqNumCounter_45, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_47, STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_Errors_49, STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LineContext_51, STATE_VARIABLE_LinePosn_61_61, STATE_VARIABLE_LinePosn_53);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RawItemBlocks_29 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadRawItemBlock_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRawItemBlocks_39));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_22_p_0(
  MR_String FileString_23,
  MR_Integer MaxOffset_24,
  MR_Word CurModuleName_26,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_65,
  MR_Word InitLookAhead_28,
  MR_Word * FinalLookAhead_29,
  MR_Word STATE_VARIABLE_VNInfo_0_66,
  MR_Word * STATE_VARIABLE_VNInfo_67,
  MR_Word * MaybeRawItemBlock_31,
  MR_String STATE_VARIABLE_SourceFileName_0_68,
  MR_String * STATE_VARIABLE_SourceFileName_69,
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
  while (MR_TRUE)
  {
    MR_Word ReadIOMResult_38;
    MR_Word STATE_VARIABLE_SeqNumCounter_80_80;
    MR_Word STATE_VARIABLE_LineContext_81_81;
    MR_Word STATE_VARIABLE_LinePosn_82_82;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_68, FileString_23, MaxOffset_24, InitLookAhead_28, CurModuleName_26, &ReadIOMResult_38, STATE_VARIABLE_SeqNumCounter_0_70, &STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_LineContext_0_76, &STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LinePosn_0_78, &STATE_VARIABLE_LinePosn_82_82);
    switch (MR_tag((MR_Word) ReadIOMResult_38)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeRawItemBlock_31 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_29 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_VNInfo_67 = STATE_VARIABLE_VNInfo_0_66;
          *STATE_VARIABLE_SourceFileName_69 = STATE_VARIABLE_SourceFileName_0_68;
          *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
          *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_0_72;
          *STATE_VARIABLE_Errors_75 = STATE_VARIABLE_Errors_0_74;
          *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
          *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_39 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_38), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Specs_133_133;
          MR_Word STATE_VARIABLE_Errors_135_135;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_70;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_72;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_74;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_76;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_78;

          {
            STATE_VARIABLE_Specs_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 0) = ((MR_Box) (ItemSpec_39));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_72));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_74, &STATE_VARIABLE_Errors_135_135);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_70 = STATE_VARIABLE_SeqNumCounter_80_80;
          next_value_of_STATE_VARIABLE_Specs_0_72 = STATE_VARIABLE_Specs_133_133;
          next_value_of_STATE_VARIABLE_Errors_0_74 = STATE_VARIABLE_Errors_135_135;
          next_value_of_STATE_VARIABLE_LineContext_0_76 = STATE_VARIABLE_LineContext_81_81;
          next_value_of_STATE_VARIABLE_LinePosn_0_78 = STATE_VARIABLE_LinePosn_82_82;
          InitLookAhead_28 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_70 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_70;
          STATE_VARIABLE_Specs_0_72 = next_value_of_STATE_VARIABLE_Specs_0_72;
          STATE_VARIABLE_Errors_0_74 = next_value_of_STATE_VARIABLE_Errors_0_74;
          STATE_VARIABLE_LineContext_0_76 = next_value_of_STATE_VARIABLE_LineContext_0_76;
          STATE_VARIABLE_LinePosn_0_78 = next_value_of_STATE_VARIABLE_LinePosn_0_78;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMVarSet_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_38, (MR_Integer) 0))));
          MR_Word IOMTerm_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_38, (MR_Integer) 1))));
          MR_Word Context_44;
          MR_Word STATE_VARIABLE_Specs_124_124;
          MR_Word STATE_VARIABLE_Errors_125_125;
          MR_Word _MissingStartSectionWarning_45;

          Context_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
          parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(CurModuleName_26, Context_44, STATE_VARIABLE_MissingStartSectionWarning_0_65, &_MissingStartSectionWarning_45, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_124_124, STATE_VARIABLE_Errors_0_74, &STATE_VARIABLE_Errors_125_125);
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_95_104_100_114_95_102_105_108_101_95_119_105_116_104_111_117_116_95_115_101_99_116_105_111_110_95_109_97_114_107_101_114_95_95_91_51_93_95_48_22_p_0(FileString_23, MaxOffset_24, CurModuleName_26, IOMVarSet_40, IOMTerm_41, FinalLookAhead_29, STATE_VARIABLE_VNInfo_0_66, STATE_VARIABLE_VNInfo_67, MaybeRawItemBlock_31, STATE_VARIABLE_SourceFileName_0_68, STATE_VARIABLE_SourceFileName_69, STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_SeqNumCounter_71, STATE_VARIABLE_Specs_124_124, STATE_VARIABLE_Specs_73, STATE_VARIABLE_Errors_125_125, STATE_VARIABLE_Errors_75, STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LineContext_77, STATE_VARIABLE_LinePosn_82_82, STATE_VARIABLE_LinePosn_79);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_38, (MR_Integer) 2))));
          MR_Word IOMVarSet_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_38, (MR_Integer) 0))));
          MR_Word IOMTerm_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_38, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_46)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_83_83;
                MR_Word STATE_VARIABLE_Errors_84_84;
                MR_Word Context_145;
                MR_Word _MissingStartSectionWarning_144;

                Context_145 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_150);
                parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(CurModuleName_26, Context_145, STATE_VARIABLE_MissingStartSectionWarning_0_65, &_MissingStartSectionWarning_144, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Errors_0_74, &STATE_VARIABLE_Errors_84_84);
                parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_95_104_100_114_95_102_105_108_101_95_119_105_116_104_111_117_116_95_115_101_99_116_105_111_110_95_109_97_114_107_101_114_95_95_91_51_93_95_48_22_p_0(FileString_23, MaxOffset_24, CurModuleName_26, IOMVarSet_149, IOMTerm_150, FinalLookAhead_29, STATE_VARIABLE_VNInfo_0_66, STATE_VARIABLE_VNInfo_67, MaybeRawItemBlock_31, STATE_VARIABLE_SourceFileName_0_68, STATE_VARIABLE_SourceFileName_69, STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_SeqNumCounter_71, STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Specs_73, STATE_VARIABLE_Errors_84_84, STATE_VARIABLE_Errors_75, STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LineContext_77, STATE_VARIABLE_LinePosn_82_82, STATE_VARIABLE_LinePosn_79);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_46, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MVN_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_46, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_VNInfo_92_92;
                    MR_Word STATE_VARIABLE_Specs_93_93;
                    MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_66;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_70;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_72;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_76;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_78;

                    parse_tree__parse_module__record_version_numbers_6_p_0(MVN_54, IOMTerm_150, STATE_VARIABLE_VNInfo_0_66, &STATE_VARIABLE_VNInfo_92_92, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_93_93);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_VNInfo_0_66 = STATE_VARIABLE_VNInfo_92_92;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_70 = STATE_VARIABLE_SeqNumCounter_80_80;
                    next_value_of_STATE_VARIABLE_Specs_0_72 = STATE_VARIABLE_Specs_93_93;
                    next_value_of_STATE_VARIABLE_LineContext_0_76 = STATE_VARIABLE_LineContext_81_81;
                    next_value_of_STATE_VARIABLE_LinePosn_0_78 = STATE_VARIABLE_LinePosn_82_82;
                    STATE_VARIABLE_VNInfo_0_66 = next_value_of_STATE_VARIABLE_VNInfo_0_66;
                    STATE_VARIABLE_SeqNumCounter_0_70 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_70;
                    STATE_VARIABLE_Specs_0_72 = next_value_of_STATE_VARIABLE_Specs_0_72;
                    STATE_VARIABLE_LineContext_0_76 = next_value_of_STATE_VARIABLE_LineContext_0_76;
                    STATE_VARIABLE_LinePosn_0_78 = next_value_of_STATE_VARIABLE_LinePosn_0_78;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_115_115 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_46, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_68 = STATE_VARIABLE_SourceFileName_115_115;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_70 = STATE_VARIABLE_SeqNumCounter_80_80;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_76 = STATE_VARIABLE_LineContext_81_81;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_78 = STATE_VARIABLE_LinePosn_82_82;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_28 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_68 = next_value_of_STATE_VARIABLE_SourceFileName_0_68;
                    STATE_VARIABLE_SeqNumCounter_0_70 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_70;
                    STATE_VARIABLE_LineContext_0_76 = next_value_of_STATE_VARIABLE_LineContext_0_76;
                    STATE_VARIABLE_LinePosn_0_78 = next_value_of_STATE_VARIABLE_LinePosn_0_78;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_29 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_149));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_150));
                    }
                    *MaybeRawItemBlock_31 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_VNInfo_67 = STATE_VARIABLE_VNInfo_0_66;
                    *STATE_VARIABLE_SourceFileName_69 = STATE_VARIABLE_SourceFileName_0_68;
                    *STATE_VARIABLE_SeqNumCounter_71 = STATE_VARIABLE_SeqNumCounter_80_80;
                    *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_0_72;
                    *STATE_VARIABLE_Errors_75 = STATE_VARIABLE_Errors_0_74;
                    *STATE_VARIABLE_LineContext_77 = STATE_VARIABLE_LineContext_81_81;
                    *STATE_VARIABLE_LinePosn_79 = STATE_VARIABLE_LinePosn_82_82;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SectionKind_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_46, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word InclsCord_50;
                    MR_Word AvailsCord_51;
                    MR_Word ItemsCord_52;
                    MR_Word RawItemBlock_53;
                    MR_Word Var_103;
                    MR_Word Var_104;
                    MR_Word Var_105;
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_Word Var_114;

                    Var_103 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_104 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_105 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_23, MaxOffset_24, CurModuleName_26, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_29, STATE_VARIABLE_VNInfo_0_66, STATE_VARIABLE_VNInfo_67, Var_103, &InclsCord_50, Var_104, &AvailsCord_51, Var_105, &ItemsCord_52, STATE_VARIABLE_SourceFileName_0_68, STATE_VARIABLE_SourceFileName_69, STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_SeqNumCounter_71, STATE_VARIABLE_Specs_0_72, STATE_VARIABLE_Specs_73, STATE_VARIABLE_Errors_0_74, STATE_VARIABLE_Errors_75, STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LineContext_77, STATE_VARIABLE_LinePosn_82_82, STATE_VARIABLE_LinePosn_79);
                    Var_112 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_50);
                    Var_113 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_51);
                    Var_114 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_52);
                    {
                      RawItemBlock_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RawItemBlock_53, 0) = ((MR_Box) (CurModuleName_26));
                      MR_hl_field(MR_mktag(0), RawItemBlock_53, 1) = ((MR_Box) (SectionKind_47));
                      MR_hl_field(MR_mktag(0), RawItemBlock_53, 2) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(0), RawItemBlock_53, 3) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(0), RawItemBlock_53, 4) = ((MR_Box) (Var_114));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeRawItemBlock_31 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RawItemBlock_53));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word STATE_VARIABLE_Specs_83_83;
                    MR_Word STATE_VARIABLE_Errors_84_84;
                    MR_Word Context_145;
                    MR_Word _MissingStartSectionWarning_144;

                    Context_145 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_150);
                    parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(CurModuleName_26, Context_145, STATE_VARIABLE_MissingStartSectionWarning_0_65, &_MissingStartSectionWarning_144, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Errors_0_74, &STATE_VARIABLE_Errors_84_84);
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_95_104_100_114_95_102_105_108_101_95_119_105_116_104_111_117_116_95_115_101_99_116_105_111_110_95_109_97_114_107_101_114_95_95_91_51_93_95_48_22_p_0(FileString_23, MaxOffset_24, CurModuleName_26, IOMVarSet_149, IOMTerm_150, FinalLookAhead_29, STATE_VARIABLE_VNInfo_0_66, STATE_VARIABLE_VNInfo_67, MaybeRawItemBlock_31, STATE_VARIABLE_SourceFileName_0_68, STATE_VARIABLE_SourceFileName_69, STATE_VARIABLE_SeqNumCounter_80_80, STATE_VARIABLE_SeqNumCounter_71, STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Specs_73, STATE_VARIABLE_Errors_84_84, STATE_VARIABLE_Errors_75, STATE_VARIABLE_LineContext_81_81, STATE_VARIABLE_LineContext_77, STATE_VARIABLE_LinePosn_82_82, STATE_VARIABLE_LinePosn_79);
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_95_104_100_114_95_102_105_108_101_95_119_105_116_104_111_117_116_95_115_101_99_116_105_111_110_95_109_97_114_107_101_114_95_95_91_51_93_95_48_22_p_0(
  MR_String FileString_23,
  MR_Integer MaxOffset_24,
  MR_Word CurModuleName_26,
  MR_Word IOMVarSet_27,
  MR_Word IOMTerm_28,
  MR_Word * FinalLookAhead_29,
  MR_Word STATE_VARIABLE_VNInfo_0_44,
  MR_Word * STATE_VARIABLE_VNInfo_45,
  MR_Word * MaybeRawItemBlock_31,
  MR_String STATE_VARIABLE_SourceFileName_0_46,
  MR_String * STATE_VARIABLE_SourceFileName_47,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_48,
  MR_Word * STATE_VARIABLE_SeqNumCounter_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53,
  MR_Word STATE_VARIABLE_LineContext_0_54,
  MR_Word * STATE_VARIABLE_LineContext_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word * STATE_VARIABLE_LinePosn_57)
{
  {
    MR_Word ItemSeqInitLookAhead_39;
    MR_Word InclsCord_40;
    MR_Word AvailsCord_41;
    MR_Word ItemsCord_42;
    MR_Word RawItemBlock_43;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    {
      ItemSeqInitLookAhead_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_39, 0) = ((MR_Box) (IOMVarSet_27));
      MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_39, 1) = ((MR_Box) (IOMTerm_28));
    }
    Var_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_61 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_23, MaxOffset_24, CurModuleName_26, ItemSeqInitLookAhead_39, FinalLookAhead_29, STATE_VARIABLE_VNInfo_0_44, STATE_VARIABLE_VNInfo_45, Var_59, &InclsCord_40, Var_60, &AvailsCord_41, Var_61, &ItemsCord_42, STATE_VARIABLE_SourceFileName_0_46, STATE_VARIABLE_SourceFileName_47, STATE_VARIABLE_SeqNumCounter_0_48, STATE_VARIABLE_SeqNumCounter_49, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53, STATE_VARIABLE_LineContext_0_54, STATE_VARIABLE_LineContext_55, STATE_VARIABLE_LinePosn_0_56, STATE_VARIABLE_LinePosn_57);
    Var_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_40);
    Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_41);
    Var_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_42);
    {
      RawItemBlock_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawItemBlock_43, 0) = ((MR_Box) (CurModuleName_26));
      MR_hl_field(MR_mktag(0), RawItemBlock_43, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), RawItemBlock_43, 2) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), RawItemBlock_43, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), RawItemBlock_43, 4) = ((MR_Box) (Var_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRawItemBlock_31 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RawItemBlock_43));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(
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
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_25;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;

        *STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_3[7])));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Pieces_14));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_64));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
        }
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_Errors_0_20, STATE_VARIABLE_Errors_21);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__separate_int_imp_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ItemBlock_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ItemBlocks_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word IntIncls0_16;
    MR_Word ImpIncls0_17;
    MR_Word IntAvails0_18;
    MR_Word ImpAvails0_19;
    MR_Word IntItems0_20;
    MR_Word ImpItems0_21;
    MR_Word Section_23;
    MR_Word Incls_24;
    MR_Word Avails_25;
    MR_Word Items_26;

    parse_tree__parse_module__separate_int_imp_items_7_p_0(ItemBlocks_9, &IntIncls0_16, &ImpIncls0_17, &IntAvails0_18, &ImpAvails0_19, &IntItems0_20, &ImpItems0_21);
    Section_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 1))));
    Incls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 2))));
    Avails_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 3))));
    Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 4))));
    switch (Section_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *HeadVar__2_2 = IntIncls0_16;
          *HeadVar__4_4 = IntAvails0_18;
          *HeadVar__6_6 = IntItems0_20;
          *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_24, ImpIncls0_17);
          *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_25, ImpAvails0_19);
          *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_26, ImpItems0_21);
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_24, IntIncls0_16);
          *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_25, IntAvails0_18);
          *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_26, IntItems0_20);
          *HeadVar__3_3 = ImpIncls0_17;
          *HeadVar__5_5 = ImpAvails0_19;
          *HeadVar__7_7 = ImpItems0_21;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_48,
  MR_Word STATE_VARIABLE_LinePosn_0_49,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * STATE_VARIABLE_Errors_51)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(OptFileKind_13, SourceFileName0_14, FileString_15, MaxOffset_16, STATE_VARIABLE_LineContext_0_48, STATE_VARIABLE_LinePosn_0_49, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_50, STATE_VARIABLE_Errors_51);
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__551__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__548__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer MaxOffset_16,
  MR_Word STATE_VARIABLE_LineContext_0_48,
  MR_Word STATE_VARIABLE_LinePosn_0_49,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * STATE_VARIABLE_Errors_51)
{
  {
    MR_bool succeeded;
    MR_Word SeqNumCounter0_25;
    MR_Word ModuleDeclPresent_26;
    MR_String SourceFileName1_27;
    MR_Word SeqNumCounter1_28;
    MR_Word ModuleName_33;
    MR_Word ModuleNameContext_34;
    MR_Word Uses_35;
    MR_Word Items_36;
    MR_Word STATE_VARIABLE_Errors_53_53;
    MR_Word STATE_VARIABLE_Specs_56_56;
    MR_Word STATE_VARIABLE_Errors_57_57;
    MR_Word STATE_VARIABLE_LineContext_58_58;
    MR_Word STATE_VARIABLE_LinePosn_59_59;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_53_53);
    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_25);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(FileString_15, MaxOffset_16, DefaultModuleName_20, DefaultExpectationContexts_21, &ModuleDeclPresent_26, SourceFileName0_14, &SourceFileName1_27, SeqNumCounter0_25, &SeqNumCounter1_28, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Errors_53_53, &STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_LineContext_0_48, &STATE_VARIABLE_LineContext_58_58, STATE_VARIABLE_LinePosn_0_49, &STATE_VARIABLE_LinePosn_59_59);
    switch (MR_tag((MR_Word) ModuleDeclPresent_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LookAhead_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_26, (MR_Integer) 0))));
          MR_Word LookAheadContext_30;

          if ((LookAhead_29 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              LookAheadContext_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LookAheadContext_30, 0) = ((MR_Box) (SourceFileName0_14));
              MR_hl_field(MR_mktag(0), LookAheadContext_30, 1) = ((MR_Box) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word LookAheadTerm_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LookAhead_29, (MR_Integer) 1))));

            LookAheadContext_30 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LookAheadTerm_32);
          }
          parse_tree__parse_module__report_missing_module_start_5_p_0(LookAheadContext_30, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_50, STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_Errors_51);
          ModuleName_33 = DefaultModuleName_20;
          ModuleNameContext_34 = mercury__term__context_init_0_f_0();
          Uses_35 = (MR_Word) ((MR_Unsigned) 0U);
          Items_36 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_26, (MR_Integer) 0))));
          ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_26, (MR_Integer) 1))));
          parse_tree__parse_module__report_wrong_module_start_7_p_0(ModuleNameContext_34, DefaultModuleName_20, ModuleName_33, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_50, STATE_VARIABLE_Errors_57_57, STATE_VARIABLE_Errors_51);
          Uses_35 = (MR_Word) ((MR_Unsigned) 0U);
          Items_36 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FinalLookAhead_37;
          MR_Word InclsCord_39;
          MR_Word AvailsCord_40;
          MR_Word ItemsCord_41;
          MR_String SourceFileName_42;
          MR_Word SeqNumCounter_43;
          MR_Word Avails_46;
          MR_Word Imports_47;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word STATE_VARIABLE_Specs_65_65;
          MR_Word STATE_VARIABLE_Errors_66_66;
          MR_Word STATE_VARIABLE_LineContext_67_67;
          MR_Word STATE_VARIABLE_LinePosn_68_68;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_38;
          MR_Word _LineContext_44;
          MR_Word _LinePosn_45;

          ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_26, (MR_Integer) 0))));
          ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_26, (MR_Integer) 1))));
          Var_62 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_63 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(FileString_15, MaxOffset_16, ModuleName_33, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_37, (MR_Word) ((MR_Unsigned) 0U), &Var_38, Var_62, &InclsCord_39, Var_63, &AvailsCord_40, Var_64, &ItemsCord_41, SourceFileName1_27, &SourceFileName_42, SeqNumCounter1_28, &SeqNumCounter_43, STATE_VARIABLE_Specs_56_56, &STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Errors_57_57, &STATE_VARIABLE_Errors_66_66, STATE_VARIABLE_LineContext_58_58, &STATE_VARIABLE_LineContext_67_67, STATE_VARIABLE_LinePosn_59_59, &STATE_VARIABLE_LinePosn_68_68);
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_69, 0) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
          }
          parse_tree__parse_module__check_for_unexpected_item_15_p_0(SourceFileName_42, FileString_15, MaxOffset_16, ModuleName_33, Var_69, FinalLookAhead_37, SeqNumCounter_43, STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Specs_50, STATE_VARIABLE_Errors_66_66, STATE_VARIABLE_Errors_51, STATE_VARIABLE_LineContext_67_67, &_LineContext_44, STATE_VARIABLE_LinePosn_68_68, &_LinePosn_45);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (InclsCord_39));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Incls != []");
          Avails_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_40);
          parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_46, &Imports_47, &Uses_35);
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Imports_47));
            MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Imports != []");
          Items_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_41);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_33));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Uses_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Items_36));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_26_p_0(
  MR_String FileString_27,
  MR_Integer MaxOffset_28,
  MR_Word ModuleName_30,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_VNInfo_0_45,
  MR_Word * STATE_VARIABLE_VNInfo_46,
  MR_Word STATE_VARIABLE_InclsCord_0_47,
  MR_Word * STATE_VARIABLE_InclsCord_48,
  MR_Word STATE_VARIABLE_AvailsCord_0_49,
  MR_Word * STATE_VARIABLE_AvailsCord_50,
  MR_Word STATE_VARIABLE_ItemsCord_0_51,
  MR_Word * STATE_VARIABLE_ItemsCord_52,
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
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumItemsLeft_43;
    MR_Word MidLookAhead_44;
    MR_Word STATE_VARIABLE_VNInfo_66_66;
    MR_Word STATE_VARIABLE_InclsCord_67_67;
    MR_Word STATE_VARIABLE_AvailsCord_68_68;
    MR_Word STATE_VARIABLE_ItemsCord_69_69;
    MR_String STATE_VARIABLE_SourceFileName_70_70;
    MR_Word STATE_VARIABLE_SeqNumCounter_71_71;
    MR_Word STATE_VARIABLE_Specs_72_72;
    MR_Word STATE_VARIABLE_Errors_73_73;
    MR_Word STATE_VARIABLE_LineContext_74_74;
    MR_Word STATE_VARIABLE_LinePosn_75_75;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_28_p_0(FileString_27, MaxOffset_28, ModuleName_30, (MR_Integer) 1024, &NumItemsLeft_43, InitLookAhead_31, &MidLookAhead_44, STATE_VARIABLE_VNInfo_0_45, &STATE_VARIABLE_VNInfo_66_66, STATE_VARIABLE_InclsCord_0_47, &STATE_VARIABLE_InclsCord_67_67, STATE_VARIABLE_AvailsCord_0_49, &STATE_VARIABLE_AvailsCord_68_68, STATE_VARIABLE_ItemsCord_0_51, &STATE_VARIABLE_ItemsCord_69_69, STATE_VARIABLE_SourceFileName_0_53, &STATE_VARIABLE_SourceFileName_70_70, STATE_VARIABLE_SeqNumCounter_0_55, &STATE_VARIABLE_SeqNumCounter_71_71, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Errors_0_59, &STATE_VARIABLE_Errors_73_73, STATE_VARIABLE_LineContext_0_61, &STATE_VARIABLE_LineContext_74_74, STATE_VARIABLE_LinePosn_0_63, &STATE_VARIABLE_LinePosn_75_75);
    succeeded = (NumItemsLeft_43 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word next_value_of_InitLookAhead_31 = MidLookAhead_44;
      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_45 = STATE_VARIABLE_VNInfo_66_66;
      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_47 = STATE_VARIABLE_InclsCord_67_67;
      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_49 = STATE_VARIABLE_AvailsCord_68_68;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_51 = STATE_VARIABLE_ItemsCord_69_69;
      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_53 = STATE_VARIABLE_SourceFileName_70_70;
      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_55 = STATE_VARIABLE_SeqNumCounter_71_71;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_72_72;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_59 = STATE_VARIABLE_Errors_73_73;
      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_61 = STATE_VARIABLE_LineContext_74_74;
      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_63 = STATE_VARIABLE_LinePosn_75_75;

      // direct tailcall eliminated
      ;
      InitLookAhead_31 = next_value_of_InitLookAhead_31;
      STATE_VARIABLE_VNInfo_0_45 = next_value_of_STATE_VARIABLE_VNInfo_0_45;
      STATE_VARIABLE_InclsCord_0_47 = next_value_of_STATE_VARIABLE_InclsCord_0_47;
      STATE_VARIABLE_AvailsCord_0_49 = next_value_of_STATE_VARIABLE_AvailsCord_0_49;
      STATE_VARIABLE_ItemsCord_0_51 = next_value_of_STATE_VARIABLE_ItemsCord_0_51;
      STATE_VARIABLE_SourceFileName_0_53 = next_value_of_STATE_VARIABLE_SourceFileName_0_53;
      STATE_VARIABLE_SeqNumCounter_0_55 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_55;
      STATE_VARIABLE_Specs_0_57 = next_value_of_STATE_VARIABLE_Specs_0_57;
      STATE_VARIABLE_Errors_0_59 = next_value_of_STATE_VARIABLE_Errors_0_59;
      STATE_VARIABLE_LineContext_0_61 = next_value_of_STATE_VARIABLE_LineContext_0_61;
      STATE_VARIABLE_LinePosn_0_63 = next_value_of_STATE_VARIABLE_LinePosn_0_63;
      continue;
    }
    else
    {
      *FinalLookAhead_32 = MidLookAhead_44;
      *STATE_VARIABLE_LinePosn_64 = STATE_VARIABLE_LinePosn_75_75;
      *STATE_VARIABLE_LineContext_62 = STATE_VARIABLE_LineContext_74_74;
      *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_73_73;
      *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_72_72;
      *STATE_VARIABLE_SeqNumCounter_56 = STATE_VARIABLE_SeqNumCounter_71_71;
      *STATE_VARIABLE_SourceFileName_54 = STATE_VARIABLE_SourceFileName_70_70;
      *STATE_VARIABLE_ItemsCord_52 = STATE_VARIABLE_ItemsCord_69_69;
      *STATE_VARIABLE_AvailsCord_50 = STATE_VARIABLE_AvailsCord_68_68;
      *STATE_VARIABLE_InclsCord_48 = STATE_VARIABLE_InclsCord_67_67;
      *STATE_VARIABLE_VNInfo_46 = STATE_VARIABLE_VNInfo_66_66;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer MaxOffset_30,
  MR_Word ModuleName_32,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_73,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_74,
  MR_Word InitLookAhead_34,
  MR_Word * FinalLookAhead_35,
  MR_Word STATE_VARIABLE_VNInfo_0_75,
  MR_Word * STATE_VARIABLE_VNInfo_76,
  MR_Word STATE_VARIABLE_InclsCord_0_77,
  MR_Word * STATE_VARIABLE_InclsCord_78,
  MR_Word STATE_VARIABLE_AvailsCord_0_79,
  MR_Word * STATE_VARIABLE_AvailsCord_80,
  MR_Word STATE_VARIABLE_ItemsCord_0_81,
  MR_Word * STATE_VARIABLE_ItemsCord_82,
  MR_String STATE_VARIABLE_SourceFileName_0_83,
  MR_String * STATE_VARIABLE_SourceFileName_84,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_85,
  MR_Word * STATE_VARIABLE_SeqNumCounter_86,
  MR_Word STATE_VARIABLE_Specs_0_87,
  MR_Word * STATE_VARIABLE_Specs_88,
  MR_Word STATE_VARIABLE_Errors_0_89,
  MR_Word * STATE_VARIABLE_Errors_90,
  MR_Word STATE_VARIABLE_LineContext_0_91,
  MR_Word * STATE_VARIABLE_LineContext_92,
  MR_Word STATE_VARIABLE_LinePosn_0_93,
  MR_Word * STATE_VARIABLE_LinePosn_94)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumItemsLeft_0_73 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *FinalLookAhead_35 = InitLookAhead_34;
      *STATE_VARIABLE_LinePosn_94 = STATE_VARIABLE_LinePosn_0_93;
      *STATE_VARIABLE_LineContext_92 = STATE_VARIABLE_LineContext_0_91;
      *STATE_VARIABLE_Errors_90 = STATE_VARIABLE_Errors_0_89;
      *STATE_VARIABLE_Specs_88 = STATE_VARIABLE_Specs_0_87;
      *STATE_VARIABLE_SeqNumCounter_86 = STATE_VARIABLE_SeqNumCounter_0_85;
      *STATE_VARIABLE_SourceFileName_84 = STATE_VARIABLE_SourceFileName_0_83;
      *STATE_VARIABLE_ItemsCord_82 = STATE_VARIABLE_ItemsCord_0_81;
      *STATE_VARIABLE_AvailsCord_80 = STATE_VARIABLE_AvailsCord_0_79;
      *STATE_VARIABLE_InclsCord_78 = STATE_VARIABLE_InclsCord_0_77;
      *STATE_VARIABLE_VNInfo_76 = STATE_VARIABLE_VNInfo_0_75;
      *STATE_VARIABLE_NumItemsLeft_74 = STATE_VARIABLE_NumItemsLeft_0_73;
    }
    else
    {
      MR_Word ReadIOMResult_46;
      MR_Word STATE_VARIABLE_SeqNumCounter_96_96;
      MR_Word STATE_VARIABLE_LineContext_97_97;
      MR_Word STATE_VARIABLE_LinePosn_98_98;

      parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_83, FileString_29, MaxOffset_30, InitLookAhead_34, ModuleName_32, &ReadIOMResult_46, STATE_VARIABLE_SeqNumCounter_0_85, &STATE_VARIABLE_SeqNumCounter_96_96, STATE_VARIABLE_LineContext_0_91, &STATE_VARIABLE_LineContext_97_97, STATE_VARIABLE_LinePosn_0_93, &STATE_VARIABLE_LinePosn_98_98);
      switch (MR_tag((MR_Word) ReadIOMResult_46)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *FinalLookAhead_35 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_NumItemsLeft_74 = STATE_VARIABLE_NumItemsLeft_0_73;
            *STATE_VARIABLE_VNInfo_76 = STATE_VARIABLE_VNInfo_0_75;
            *STATE_VARIABLE_InclsCord_78 = STATE_VARIABLE_InclsCord_0_77;
            *STATE_VARIABLE_AvailsCord_80 = STATE_VARIABLE_AvailsCord_0_79;
            *STATE_VARIABLE_ItemsCord_82 = STATE_VARIABLE_ItemsCord_0_81;
            *STATE_VARIABLE_SourceFileName_84 = STATE_VARIABLE_SourceFileName_0_83;
            *STATE_VARIABLE_SeqNumCounter_86 = STATE_VARIABLE_SeqNumCounter_96_96;
            *STATE_VARIABLE_Specs_88 = STATE_VARIABLE_Specs_0_87;
            *STATE_VARIABLE_Errors_90 = STATE_VARIABLE_Errors_0_89;
            *STATE_VARIABLE_LineContext_92 = STATE_VARIABLE_LineContext_97_97;
            *STATE_VARIABLE_LinePosn_94 = STATE_VARIABLE_LinePosn_98_98;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemSpec_47 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_46), (MR_Integer) 1));
            MR_Word ItemSpecs_183;
            MR_Word ItemErrors_184;
            MR_Word STATE_VARIABLE_Specs_138_185;
            MR_Word STATE_VARIABLE_Errors_139_186;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_87;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_89;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

            {
              ItemSpecs_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ItemSpecs_183, 0) = ((MR_Box) (ItemSpec_47));
              MR_hl_field(MR_mktag(1), ItemSpecs_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ItemErrors_184 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
            STATE_VARIABLE_Specs_138_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_183, STATE_VARIABLE_Specs_0_87);
            STATE_VARIABLE_Errors_139_186 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_89, ItemErrors_184);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
            next_value_of_STATE_VARIABLE_Specs_0_87 = STATE_VARIABLE_Specs_138_185;
            next_value_of_STATE_VARIABLE_Errors_0_89 = STATE_VARIABLE_Errors_139_186;
            next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
            next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
            InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
            STATE_VARIABLE_Specs_0_87 = next_value_of_STATE_VARIABLE_Specs_0_87;
            STATE_VARIABLE_Errors_0_89 = next_value_of_STATE_VARIABLE_Errors_0_89;
            STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
            STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemSpecs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_46, (MR_Integer) 2))));
            MR_Word ItemErrors_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_46, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_Specs_138_138;
            MR_Word STATE_VARIABLE_Errors_139_139;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_87;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_89;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

            STATE_VARIABLE_Specs_138_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_48, STATE_VARIABLE_Specs_0_87);
            STATE_VARIABLE_Errors_139_139 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_89, ItemErrors_49);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
            next_value_of_STATE_VARIABLE_Specs_0_87 = STATE_VARIABLE_Specs_138_138;
            next_value_of_STATE_VARIABLE_Errors_0_89 = STATE_VARIABLE_Errors_139_139;
            next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
            next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
            InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
            STATE_VARIABLE_Specs_0_87 = next_value_of_STATE_VARIABLE_Specs_0_87;
            STATE_VARIABLE_Errors_0_89 = next_value_of_STATE_VARIABLE_Errors_0_89;
            STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
            STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOMVarSet_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_46, (MR_Integer) 0))));
            MR_Word IOMTerm_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_46, (MR_Integer) 1))));
            MR_Word IOM_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_46, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_NumItemsLeft_99_99 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumItemsLeft_0_73 - (MR_Unsigned) 1);

            switch (MR_tag((MR_Word) IOM_54)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Item_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOM_54, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_ItemsCord_102_160;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_81;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

                  STATE_VARIABLE_ItemsCord_102_160 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_81, ((MR_Box) (Item_71)));
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_81 = STATE_VARIABLE_ItemsCord_102_160;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                  next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                  next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
                  STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_ItemsCord_0_81 = next_value_of_STATE_VARIABLE_ItemsCord_0_81;
                  STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                  STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Incls_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_54, (MR_Integer) 0))));
                  MR_Word HeadIncl_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_65, (MR_Integer) 0))));
                  MR_Word TailIncls_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_65, (MR_Integer) 1))));
                  MR_Word Var_107;
                  MR_Word Var_108;
                  MR_Word STATE_VARIABLE_InclsCord_106_174;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

                  {
                    Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (HeadIncl_66));
                    MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (TailIncls_67));
                  }
                  Var_107 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_108);
                  STATE_VARIABLE_InclsCord_106_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_77, Var_107);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                  next_value_of_STATE_VARIABLE_InclsCord_0_77 = STATE_VARIABLE_InclsCord_106_174;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                  next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                  next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
                  STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_InclsCord_0_77 = next_value_of_STATE_VARIABLE_InclsCord_0_77;
                  STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                  STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Avails_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOM_54, (MR_Integer) 0))));
                  MR_Word HeadAvail_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_68, (MR_Integer) 0))));
                  MR_Word TailAvails_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_68, (MR_Integer) 1))));
                  MR_Word Var_104;
                  MR_Word Var_105;
                  MR_Word STATE_VARIABLE_AvailsCord_103_167;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_79;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

                  {
                    Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (HeadAvail_69));
                    MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (TailAvails_70));
                  }
                  Var_104 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_105);
                  STATE_VARIABLE_AvailsCord_103_167 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_79, Var_104);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                  next_value_of_STATE_VARIABLE_AvailsCord_0_79 = STATE_VARIABLE_AvailsCord_103_167;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                  next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                  next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
                  STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                  InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AvailsCord_0_79 = next_value_of_STATE_VARIABLE_AvailsCord_0_79;
                  STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                  STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                  STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_54, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word MVN_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_54, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_VNInfo_122_122;
                      MR_Word STATE_VARIABLE_Specs_123_123;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_75;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

                      parse_tree__parse_module__record_version_numbers_6_p_0(MVN_64, IOMTerm_53, STATE_VARIABLE_VNInfo_0_75, &STATE_VARIABLE_VNInfo_122_122, STATE_VARIABLE_Specs_0_87, &STATE_VARIABLE_Specs_123_123);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                      next_value_of_STATE_VARIABLE_VNInfo_0_75 = STATE_VARIABLE_VNInfo_122_122;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                      next_value_of_STATE_VARIABLE_Specs_0_87 = STATE_VARIABLE_Specs_123_123;
                      next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                      next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
                      STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                      InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_VNInfo_0_75 = next_value_of_STATE_VARIABLE_VNInfo_0_75;
                      STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                      STATE_VARIABLE_Specs_0_87 = next_value_of_STATE_VARIABLE_Specs_0_87;
                      STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                      STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_109_181 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_54, (MR_Integer) 1))));
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_83 = STATE_VARIABLE_SourceFileName_109_181;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;

                      // direct tailcall eliminated
                      ;
                      STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                      InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_SourceFileName_0_83 = next_value_of_STATE_VARIABLE_SourceFileName_0_83;
                      STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                      STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                      STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *FinalLookAhead_35 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_52));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_53));
                      }
                      *STATE_VARIABLE_NumItemsLeft_74 = STATE_VARIABLE_NumItemsLeft_99_99;
                      *STATE_VARIABLE_VNInfo_76 = STATE_VARIABLE_VNInfo_0_75;
                      *STATE_VARIABLE_InclsCord_78 = STATE_VARIABLE_InclsCord_0_77;
                      *STATE_VARIABLE_AvailsCord_80 = STATE_VARIABLE_AvailsCord_0_79;
                      *STATE_VARIABLE_ItemsCord_82 = STATE_VARIABLE_ItemsCord_0_81;
                      *STATE_VARIABLE_SourceFileName_84 = STATE_VARIABLE_SourceFileName_0_83;
                      *STATE_VARIABLE_SeqNumCounter_86 = STATE_VARIABLE_SeqNumCounter_96_96;
                      *STATE_VARIABLE_Specs_88 = STATE_VARIABLE_Specs_0_87;
                      *STATE_VARIABLE_Errors_90 = STATE_VARIABLE_Errors_0_89;
                      *STATE_VARIABLE_LineContext_92 = STATE_VARIABLE_LineContext_97_97;
                      *STATE_VARIABLE_LinePosn_94 = STATE_VARIABLE_LinePosn_98_98;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word HandledSpecs_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_54, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Specs_101_101;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_87;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_93;

                      STATE_VARIABLE_Specs_101_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HandledSpecs_72, STATE_VARIABLE_Specs_0_87);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_73 = STATE_VARIABLE_NumItemsLeft_99_99;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_85 = STATE_VARIABLE_SeqNumCounter_96_96;
                      next_value_of_STATE_VARIABLE_Specs_0_87 = STATE_VARIABLE_Specs_101_101;
                      next_value_of_STATE_VARIABLE_LineContext_0_91 = STATE_VARIABLE_LineContext_97_97;
                      next_value_of_STATE_VARIABLE_LinePosn_0_93 = STATE_VARIABLE_LinePosn_98_98;
                      STATE_VARIABLE_NumItemsLeft_0_73 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_73;
                      InitLookAhead_34 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_SeqNumCounter_0_85 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_85;
                      STATE_VARIABLE_Specs_0_87 = next_value_of_STATE_VARIABLE_Specs_0_87;
                      STATE_VARIABLE_LineContext_0_91 = next_value_of_STATE_VARIABLE_LineContext_0_91;
                      STATE_VARIABLE_LinePosn_0_93 = next_value_of_STATE_VARIABLE_LinePosn_0_93;
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
  MR_Word STATE_VARIABLE_VNInfo_0_15,
  MR_Word * STATE_VARIABLE_VNInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_VNInfo_0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_VNInfo_0_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_33;
            MR_Word Var_39;
            MR_Word Msg_67;
            MR_Word Spec_68;

            Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
            {
              Msg_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_67, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), Msg_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[93])));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_67));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_68, 2) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_68));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
            }
            *STATE_VARIABLE_VNInfo_16 = STATE_VARIABLE_VNInfo_0_15;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_VNInfo_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MVN_7)));
            *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Msg_13;
        MR_Word Spec_14;
        MR_Word Var_56;
        MR_Word Var_62;

        Var_56 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
        {
          Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[92])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Msg_13));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_62));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
        }
        *STATE_VARIABLE_VNInfo_16 = STATE_VARIABLE_VNInfo_0_15;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_15_p_0(
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
          MR_Word ItemSpec_29 = (MR_Word) (MR_body((MR_Word) (IOMResult_27), (MR_Integer) 1));

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
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
    switch (MR_tag((MR_Word) FileKind_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Error_12 = (MR_Integer) 4;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[77]));
        }
        break;
      case (MR_Integer) 1:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[71]));
        }
        break;
      case (MR_Integer) 2:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[73]));
        }
        break;
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_44));
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
    parse_tree__parse_module__read_term_to_iom_result_6_p_0(ModuleName_17, FileName_13, ReadTermResult_22, STATE_VARIABLE_SeqNumCounter_0_25, STATE_VARIABLE_SeqNumCounter_26, ReadIOMResult_18);
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
parse_tree__parse_module__report_wrong_module_start_7_p_0(
  MR_Word FirstContext_8,
  MR_Word Expected_9,
  MR_Word Actual_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19)
{
  {
    MR_Word Pieces_13;
    MR_Word Msgs_14;
    MR_Word Spec_15;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_49;
    MR_Word Var_53;
    MR_Word Var_54;

    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Expected_9));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Actual_10));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[91])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[90])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_14, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Msgs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (FirstContext_8));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Msgs_14));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
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
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
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
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *SubMsg_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[88])));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_opt_10_p_0_2(
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
    MR_Word conv2_STATE_VARIABLE_Specs_50;
    MR_Word conv1_STATE_VARIABLE_Errors_51;

    parse_tree__parse_module__read_parse_tree_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_50, &conv1_STATE_VARIABLE_Errors_51);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_50));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_51));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_opt_10_p_0_1(
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
parse_tree__parse_module__actually_read_module_opt_10_p_0(
  MR_Word OptFileKind_11,
  MR_Word Globals_12,
  MR_String FileName_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_Word * ParseTreeOpt_16,
  MR_Word * Specs_17,
  MR_Word * Errors_18)
{
  {
    MR_Word Dirs_20;
    MR_Word MaybeFileNameAndStream_21;
    MR_Word ItemSpecs_23;
    MR_Word ModuleName_24;
    MR_Word NameSpecs_25;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_22;
    MR_Box conv4_ParseTreeOpt_16;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 671, &Dirs_20);
    libs__file_util__search_for_file_and_stream_5_p_0(Dirs_20, FileName_13, &MaybeFileNameAndStream_21);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_opt_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OptFileKind_11));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_opt_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (OptFileKind_11));
    }
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_14, DefaultExpectationContexts_15, MaybeFileNameAndStream_21, (MR_Word) (&parse_tree__parse_module_scalar_common_3[3]), &Var_22, Var_31, Var_32, &conv4_ParseTreeOpt_16, &ItemSpecs_23, Errors_18);
    *ParseTreeOpt_16 = ((MR_Word) (conv4_ParseTreeOpt_16));
    ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeOpt_16, (MR_Integer) 0))));
    parse_tree__parse_module__check_module_has_expected_name_6_p_0(FileName_13, DefaultModuleName_14, DefaultExpectationContexts_15, ModuleName_24, (MR_Word) ((MR_Unsigned) 0U), &NameSpecs_25);
    *Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_23, NameSpecs_25);
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int_12_p_0_2(
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
    MR_Word conv2_STATE_VARIABLE_Specs_52;
    MR_Word conv1_STATE_VARIABLE_Errors_53;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_52, &conv1_STATE_VARIABLE_Errors_53);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_52));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_53));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_int_12_p_0_1(
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
parse_tree__parse_module__actually_read_module_int_12_p_0(
  MR_Word IntFileKind_13,
  MR_Word Globals_14,
  MR_Word DefaultModuleName_15,
  MR_Word DefaultExpectationContexts_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeModuleTimestampRes_19,
  MR_Word * ParseTree_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22)
{
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv4_ParseTree_20;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_int_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (IntFileKind_13));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_int_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (IntFileKind_13));
    }
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_14, DefaultModuleName_15, DefaultExpectationContexts_16, MaybeFileNameAndStream_17, ReadModuleAndTimestamps_18, MaybeModuleTimestampRes_19, Var_26, Var_27, &conv4_ParseTree_20, Specs_21, Errors_22);
    *ParseTree_20 = ((MR_Word) (conv4_ParseTree_20));
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

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_2[2]), (MR_Word) (&parse_tree__parse_module_scalar_common_2[3]), &conv4_ParseTree_18, Specs_19, Errors_20);
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
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_32;

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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_27, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_27, 3) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_26));
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
      MR_String ProgName_54;
      MR_Word Pieces_55;
      MR_Word Spec_56;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_75;
      MR_Word Var_76;

      *ModuleName_13 = DefaultModuleName_10;
      mercury__io__error_message_2_p_0(ErrorCode_32, &ErrorMsg0_33);
      ErrorMsg_34 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_33);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_54);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (ProgName_54));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (ErrorMsg_34));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[84])));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Pieces_55));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_71, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_71, 3) = ((MR_Box) (Var_75));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_56, 2) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String FileString_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeResult_16, (MR_Integer) 0))));
      MR_Integer MaxOffset_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeResult_16, (MR_Integer) 1))));
      MR_Word SeqNumCounter0_19;
      MR_Word ModuleDeclPresent_22;
      MR_Word Var_46;
      MR_String _SourceFileName_23;
      MR_Word _SeqNumCounter_24;
      MR_Word _Errors_25;
      MR_Word _LineContext_26;
      MR_Word _LinePosn_27;

      mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_19);
      Var_46 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(FileString_17, MaxOffset_18, DefaultModuleName_10, DefaultExpectationContexts_11, &ModuleDeclPresent_22, SourceFileName0_12, &_SourceFileName_23, SeqNumCounter0_19, &_SeqNumCounter_24, (MR_Word) ((MR_Unsigned) 0U), Specs_14, Var_46, &_Errors_25, (MR_Word) (&parse_tree__parse_module_scalar_common_1[85]), &_LineContext_26, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_27);
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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_18_p_0(
  MR_String FileString_19,
  MR_Integer MaxOffset_20,
  MR_Word DefaultModuleName_22,
  MR_Word DefaultExpectationContexts_23,
  MR_Word * ModuleDeclPresent_24,
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
    MR_Word FirstReadTerm_31;
    MR_Word MaybeFirstIOM_32;
    MR_Word STATE_VARIABLE_LineContext_70_70;
    MR_Word STATE_VARIABLE_LinePosn_71_71;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_SeqNumCounter_73_73;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_SourceFileName_0_58, FileString_19, MaxOffset_20, STATE_VARIABLE_LineContext_0_66, &STATE_VARIABLE_LineContext_70_70, STATE_VARIABLE_LinePosn_0_68, &STATE_VARIABLE_LinePosn_71_71, &FirstReadTerm_31);
    Var_72 = parse_tree__parse_sym_name__root_module_name_0_f_0();
    parse_tree__parse_module__read_term_to_iom_result_6_p_0(Var_72, STATE_VARIABLE_SourceFileName_0_58, FirstReadTerm_31, STATE_VARIABLE_SeqNumCounter_0_60, &STATE_VARIABLE_SeqNumCounter_73_73, &MaybeFirstIOM_32);
    switch (MR_tag((MR_Word) MaybeFirstIOM_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FirstContext_99;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_58, (MR_Integer) 1, &FirstContext_99);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_99, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63, STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
          *ModuleDeclPresent_24 = (MR_Word) (&parse_tree__parse_module_scalar_common_3[2]);
          *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
          *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
          *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
          *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstContext_99;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_58, (MR_Integer) 1, &FirstContext_99);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_99, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63, STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
          *ModuleDeclPresent_24 = (MR_Word) (&parse_tree__parse_module_scalar_common_3[2]);
          *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
          *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
          *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
          *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LookAhead_56;
          MR_Word FirstVarSet_96 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_32, (MR_Integer) 0))));
          MR_Word FirstTerm_97 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_32, (MR_Integer) 1))));
          MR_Word FirstContext_98;

          FirstContext_98 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_97);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_98, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63, STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
          {
            LookAhead_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LookAhead_56, 0) = ((MR_Box) (FirstVarSet_96));
            MR_hl_field(MR_mktag(1), LookAhead_56, 1) = ((MR_Box) (FirstTerm_97));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LookAhead_56));
          }
          *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
          *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
          *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
          *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FirstVarSet_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_32, (MR_Integer) 0))));
          MR_Word FirstTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_32, (MR_Integer) 1))));
          MR_Word FirstIOM_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_32, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) FirstIOM_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word FirstContext_52;
                MR_Word FirstLookAhead_53;

                FirstContext_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_34);
                parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_52, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63, STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
                {
                  FirstLookAhead_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_53, 0) = ((MR_Box) (FirstVarSet_33));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_53, 1) = ((MR_Box) (FirstTerm_34));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *ModuleDeclPresent_24 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_53));
                }
                *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
                *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
                *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
                *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstIOM_35, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  {
                    MR_Word FirstContext_52;
                    MR_Word FirstLookAhead_53;

                    FirstContext_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_34);
                    parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_52, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63, STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
                    {
                      FirstLookAhead_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_53, 0) = ((MR_Box) (FirstVarSet_33));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_53, 1) = ((MR_Box) (FirstTerm_34));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *ModuleDeclPresent_24 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_53));
                    }
                    *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
                    *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
                    *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
                    *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_86_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), FirstIOM_35, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_58 = STATE_VARIABLE_SourceFileName_86_86;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_60 = STATE_VARIABLE_SeqNumCounter_73_73;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_66 = STATE_VARIABLE_LineContext_70_70;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_68 = STATE_VARIABLE_LinePosn_71_71;

                    // direct tailcall eliminated
                    ;
                    STATE_VARIABLE_SourceFileName_0_58 = next_value_of_STATE_VARIABLE_SourceFileName_0_58;
                    STATE_VARIABLE_SeqNumCounter_0_60 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_60;
                    STATE_VARIABLE_LineContext_0_66 = next_value_of_STATE_VARIABLE_LineContext_0_66;
                    STATE_VARIABLE_LinePosn_0_68 = next_value_of_STATE_VARIABLE_LinePosn_0_68;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word StartModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_35, (MR_Integer) 1))));
                    MR_Word ModuleNameContext_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_35, (MR_Integer) 2))));

                    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(DefaultModuleName_22, StartModuleName_36);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_24 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (StartModuleName_36));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_37));
                      }
                      *STATE_VARIABLE_Errors_65 = STATE_VARIABLE_Errors_0_64;
                      *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
                    }
                    else
                    {
                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(StartModuleName_36, DefaultModuleName_22);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_24 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (DefaultModuleName_22));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_37));
                        }
                        *STATE_VARIABLE_Errors_65 = STATE_VARIABLE_Errors_0_64;
                        *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
                      }
                      else
                      {
                        MR_Word NameSpecs_40;
                        MR_Word Var_82;

                        {
                          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (ModuleNameContext_37));
                        }
                        parse_tree__parse_module__check_module_has_expected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_58, DefaultModuleName_22, DefaultExpectationContexts_23, StartModuleName_36, Var_82, &NameSpecs_40);
                        *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_40, STATE_VARIABLE_Specs_0_62);
                        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Errors_0_64, STATE_VARIABLE_Errors_65);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_24 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartModuleName_36));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_37));
                        }
                      }
                    }
                    *STATE_VARIABLE_SourceFileName_59 = STATE_VARIABLE_SourceFileName_0_58;
                    *STATE_VARIABLE_SeqNumCounter_61 = STATE_VARIABLE_SeqNumCounter_73_73;
                    *STATE_VARIABLE_LineContext_67 = STATE_VARIABLE_LineContext_70_70;
                    *STATE_VARIABLE_LinePosn_69 = STATE_VARIABLE_LinePosn_71_71;
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
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Errors_0_14,
  MR_Word * STATE_VARIABLE_Errors_15)
{
  {
    MR_Word Spec_11;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (FirstContext_6));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[83])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_0_14, STATE_VARIABLE_Errors_15);
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
        MR_Word Pieces_14;
        MR_Word Context_15;
        MR_Word Spec_16;
        MR_Word Var_22;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;

        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ErrorMsg_12));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
        }
        Context_15 = mercury__term__context_init_2_f_0(FileName_8, LineNumber_13);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_14));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_31));
        }
        *ReadIOMResult_11 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Spec_16)));
        *STATE_VARIABLE_SeqNumCounter_20 = STATE_VARIABLE_SeqNumCounter_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_9, (MR_Integer) 0))));
        MR_Word Term_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_9, (MR_Integer) 1))));
        MR_Integer SeqNum_44;
        MR_Word MaybeItemOrMarker_45;

        mercury__counter__allocate_3_p_0(&SeqNum_44, STATE_VARIABLE_SeqNumCounter_0_19, STATE_VARIABLE_SeqNumCounter_20);
        parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_7, VarSet_17, Term_18, SeqNum_44, &MaybeItemOrMarker_45);
        if (((MR_tag((MR_Word) MaybeItemOrMarker_45)) == (MR_Integer) 0))
        {
          MR_Word Specs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_45, (MR_Integer) 0))));
          MR_Word Var_49;

          Var_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_18));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_47));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_49));
          }
        }
        else
        {
          MR_Word ItemOrMarker_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_45, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_46));
          }
        }
      }
      break;
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
      MR_Word MaybeContext_14;
      MR_Word MainPieces_15;
      MR_Word MainComponent_17;
      MR_Word MainMsg_18;
      MR_Word SortedExpectationContexts0_19;
      MR_Word SortedExpectationContexts_20;
      MR_Word SubMsgs_21;
      MR_Word Spec_22;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word ActualContext_13;
      MR_Word Var_71;

      succeeded = (MaybeActualContext_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ActualContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualContext_11, (MR_Integer) 0))));
        Var_71 = mercury__term__context_init_0_f_0();
        succeeded = mercury__term____Unify____context_0_0(ActualContext_13, Var_71);
        succeeded = !(succeeded);
      }
      if (succeeded)
        MaybeContext_14 = MaybeActualContext_11;
      else
        MaybeContext_14 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (FileName_7));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ExpectedName_8));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ActualName_10));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
      }
      {
        MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[78])));
        MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (MainPieces_15));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainComponent_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainComponent_17, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), MainComponent_17, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MainComponent_17));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainMsg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainMsg_18, 0) = ((MR_Box) (MaybeContext_14));
        MR_hl_field(MR_mktag(1), MainMsg_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), MainMsg_18, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), MainMsg_18, 3) = ((MR_Box) (Var_60));
      }
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ExpectationContexts_9, &SortedExpectationContexts0_19);
      Var_62 = mercury__term__context_init_0_f_0();
      mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedExpectationContexts0_19, ((MR_Box) (Var_62)), &SortedExpectationContexts_20);
      mercury__list__map_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_2[1]), SortedExpectationContexts_20, &SubMsgs_21);
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MainMsg_18));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (SubMsgs_21));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
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
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0);
	MR_register_type_ctor_info(&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_module_decl_present_0);
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
