/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2018-08-16
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

static const MR_VA_PseudoTypeInfo_Struct10 parse_tree__parse_module____vpti_pred_10__plain_io__type_ctor_info_input_stream_0__plain_builtin__type_ctor_info_string_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__509__1_2_p_0(
  MR_Word Imports_42,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__506__1_1_p_0(
  MR_Word InclsCord_36);

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
parse_tree__parse_module__read_parse_tree_src_10_p_0(
  MR_Word Stream_11,
  MR_String STATE_VARIABLE_SourceFileName_0_31,
  MR_Word Globals_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_Word * ParseTree_16,
  MR_Word * STATE_VARIABLE_Specs_32,
  MR_Word * STATE_VARIABLE_Errors_33);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_components_20_p_0(
  MR_Word Stream_21,
  MR_Word Globals_22,
  MR_Word CurModuleName_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_77,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_78,
  MR_Word * STATE_VARIABLE_ModuleComponents_79,
  MR_String STATE_VARIABLE_SourceFileName_0_80,
  MR_String * STATE_VARIABLE_SourceFileName_81,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_82,
  MR_Word * STATE_VARIABLE_SeqNumCounter_83,
  MR_Word STATE_VARIABLE_Specs_0_84,
  MR_Word * STATE_VARIABLE_Specs_85,
  MR_Word STATE_VARIABLE_Errors_0_86,
  MR_Word * STATE_VARIABLE_Errors_87);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_submodule_20_p_0(
  MR_Word Stream_21,
  MR_Word Globals_22,
  MR_Word ContainingModules_23,
  MR_Word MaybePrevSection_24,
  MR_Word StartModuleName_25,
  MR_Word StartContext_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_44,
  MR_Word * STATE_VARIABLE_ModuleComponents_45,
  MR_String STATE_VARIABLE_SourceFileName_0_46,
  MR_String * STATE_VARIABLE_SourceFileName_47,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_48,
  MR_Word * STATE_VARIABLE_SeqNumCounter_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53);

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
parse_tree__parse_module__add_section_component_7_p_0(
  MR_Word SectionKind_8,
  MR_Word SectionContext_9,
  MR_Word InclsCord_10,
  MR_Word AvailsCord_11,
  MR_Word ItemsCord_12,
  MR_Word STATE_VARIABLE_ModuleComponents_0_15,
  MR_Word * STATE_VARIABLE_ModuleComponents_16);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_11_p_0(
  MR_Word IntFileKind_12,
  MR_Word Stream_13,
  MR_String SourceFileName0_14,
  MR_Word Globals_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_Word * ParseTree_18,
  MR_Word * STATE_VARIABLE_Specs_45,
  MR_Word * STATE_VARIABLE_Errors_46);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_sections_18_p_0(
  MR_Word Stream_19,
  MR_Word Globals_20,
  MR_Word CurModuleName_21,
  MR_Word InitLookAhead_22,
  MR_Word * FinalLookAhead_23,
  MR_Word STATE_VARIABLE_VNInfo_0_35,
  MR_Word * STATE_VARIABLE_VNInfo_36,
  MR_Word * RawItemBlocks_25,
  MR_String STATE_VARIABLE_SourceFileName_0_37,
  MR_String * STATE_VARIABLE_SourceFileName_38,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_39,
  MR_Word * STATE_VARIABLE_SeqNumCounter_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42,
  MR_Word STATE_VARIABLE_Errors_0_43,
  MR_Word * STATE_VARIABLE_Errors_44);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_section_19_p_0(
  MR_Word Stream_20,
  MR_Word Globals_21,
  MR_Word CurModuleName_22,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_59,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word STATE_VARIABLE_VNInfo_0_60,
  MR_Word * STATE_VARIABLE_VNInfo_61,
  MR_Word * MaybeRawItemBlock_27,
  MR_String STATE_VARIABLE_SourceFileName_0_62,
  MR_String * STATE_VARIABLE_SourceFileName_63,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_64,
  MR_Word * STATE_VARIABLE_SeqNumCounter_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67,
  MR_Word STATE_VARIABLE_Errors_0_68,
  MR_Word * STATE_VARIABLE_Errors_69);

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_in_hdr_file_without_section_marker_19_p_0(
  MR_Word Stream_20,
  MR_Word Globals_21,
  MR_Word CurModuleName_22,
  MR_Word IOMVarSet_23,
  MR_Word IOMTerm_24,
  MR_Word * FinalLookAhead_25,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word * MaybeRawItemBlock_27,
  MR_String STATE_VARIABLE_SourceFileName_0_42,
  MR_String * STATE_VARIABLE_SourceFileName_43,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_44,
  MR_Word * STATE_VARIABLE_SeqNumCounter_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47,
  MR_Word STATE_VARIABLE_Errors_0_48,
  MR_Word * STATE_VARIABLE_Errors_49);

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

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0(
  MR_Word OptFileKind_12,
  MR_Word Stream_13,
  MR_String SourceFileName0_14,
  MR_Word Globals_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_Word * ParseTree_18,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44);

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_12_p_0(
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_Word FinalLookAhead_16,
  MR_String SourceFileName_17,
  MR_Word SeqNumCounter0_18,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_Errors_0_34,
  MR_Word * STATE_VARIABLE_Errors_35);

static void MR_CALL 
parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(
  MR_Word FileKind_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18,
  MR_Word STATE_VARIABLE_Errors_0_19,
  MR_Word * STATE_VARIABLE_Errors_20);

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
parse_tree__parse_module__read_item_sequence_23_p_0(
  MR_Word Stream_24,
  MR_Word Globals_25,
  MR_Word ModuleName_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word STATE_VARIABLE_InclsCord_0_42,
  MR_Word * STATE_VARIABLE_InclsCord_43,
  MR_Word STATE_VARIABLE_AvailsCord_0_44,
  MR_Word * STATE_VARIABLE_AvailsCord_45,
  MR_Word STATE_VARIABLE_ItemsCord_0_46,
  MR_Word * STATE_VARIABLE_ItemsCord_47,
  MR_String STATE_VARIABLE_SourceFileName_0_48,
  MR_String * STATE_VARIABLE_SourceFileName_49,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_50,
  MR_Word * STATE_VARIABLE_SeqNumCounter_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_Errors_0_54,
  MR_Word * STATE_VARIABLE_Errors_55);

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_inner_25_p_0(
  MR_Word Stream_26,
  MR_Word Globals_27,
  MR_Word ModuleName_28,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_69,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_70,
  MR_Word InitLookAhead_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_VNInfo_0_71,
  MR_Word * STATE_VARIABLE_VNInfo_72,
  MR_Word STATE_VARIABLE_InclsCord_0_73,
  MR_Word * STATE_VARIABLE_InclsCord_74,
  MR_Word STATE_VARIABLE_AvailsCord_0_75,
  MR_Word * STATE_VARIABLE_AvailsCord_76,
  MR_Word STATE_VARIABLE_ItemsCord_0_77,
  MR_Word * STATE_VARIABLE_ItemsCord_78,
  MR_String STATE_VARIABLE_SourceFileName_0_79,
  MR_String * STATE_VARIABLE_SourceFileName_80,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_81,
  MR_Word * STATE_VARIABLE_SeqNumCounter_82,
  MR_Word STATE_VARIABLE_Specs_0_83,
  MR_Word * STATE_VARIABLE_Specs_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86);

static void MR_CALL 
parse_tree__parse_module__read_next_item_or_marker_9_p_0(
  MR_Word Stream_10,
  MR_Word InitLookAhead_11,
  MR_Word ModuleName_12,
  MR_String SourceFileName_13,
  MR_Word * ReadIOMResult_14,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_20,
  MR_Word * STATE_VARIABLE_SeqNumCounter_21);

static void MR_CALL 
parse_tree__parse_module__process_item_nothing_warning_7_p_0(
  MR_Word Globals_8,
  MR_Word ItemNothingInfo_9,
  MR_Word * NoWarnItem_10,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_Errors_0_28,
  MR_Word * STATE_VARIABLE_Errors_29);

static void MR_CALL 
parse_tree__parse_module__record_version_numbers_6_p_0(
  MR_Word MVN_7,
  MR_Word IOMTerm_8,
  MR_Word STATE_VARIABLE_VNInfo_0_15,
  MR_Word * STATE_VARIABLE_VNInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

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
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(
  MR_Word Stream_16,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ModuleDeclPresent_20,
  MR_String STATE_VARIABLE_SourceFileName_0_52,
  MR_String * STATE_VARIABLE_SourceFileName_53,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_54,
  MR_Word * STATE_VARIABLE_SeqNumCounter_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_Errors_0_58,
  MR_Word * STATE_VARIABLE_Errors_59);

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

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[2][4];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[3][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[1][13];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[2][6];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[2][14];




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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with either an"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[11])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 86 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 1))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_module__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
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
    ((MR_Box) ((MR_Integer) 1))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_module__check_module_has_expected_name_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_src_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[2][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_module__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____make_dummy_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____make_dummy_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "make_dummy_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_lookahead_0_0 = {
  (MR_String) "no_lookahead",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_lookahead_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_lookahead_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_lookahead_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_lookahead",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0 = {
  (MR_String) "no_module_decl_present",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_module_decl_present_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_module_decl_present_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_module_decl_present",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____maybe_require_module_decl_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____maybe_require_module_decl_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "maybe_require_module_decl",
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_maybe_require_module_decl_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_require_module_decl_0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_module__parse_tree__parse_module__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_module____Unify____missing_section_start_warning_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____missing_section_start_warning_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "missing_section_start_warning",
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_value_ordered_missing_section_start_warning_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_missing_section_start_warning_0
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_read_iom_result_0_0 = {
  (MR_String) "read_iom_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
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
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_read_iom_result_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____read_iom_result_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_iom_result_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_iom_result",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct10 parse_tree__parse_module____vpti_pred_10__plain_io__type_ctor_info_input_stream_0__plain_builtin__type_ctor_info_string_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 10,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_input_stream_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_module__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_read_parse_tree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____read_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_10__plain_io__type_ctor_info_input_stream_0__plain_builtin__type_ctor_info_string_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_0 = {
  (MR_String) "dont_allow_version_numbers",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_version_number_info_0_1 = {
  (MR_String) "allow_version_numbers_not_seen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
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
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____version_number_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____version_number_info_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "version_number_info",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_info_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_info_0
};

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__509__1_2_p_0(
  MR_Word Imports_42,
  MR_Word HeadVar__2_72)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_42)), ((MR_Box) (HeadVar__2_72)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__506__1_1_p_0(
  MR_Word InclsCord_36)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_36);
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
                  MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word Var_41;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &Var_41, ((MR_Box) (Var_89)), ((MR_Box) (ArgY1_34)));
                  succeeded = (Var_41 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_41;
                  else
                  {
                    MR_Word Var_42;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &Var_42, ((MR_Box) (Var_88)), ((MR_Box) (ArgY2_36)));
                    succeeded = (Var_42 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_42;
                    else
                    {
                      MR_Word Var_43;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), &Var_43, ((MR_Box) (Var_87)), ((MR_Box) (ArgY3_38)));
                      succeeded = (Var_43 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_43;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY4_40)));
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
                  MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word Var_71;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &Var_71, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_66)));
                  succeeded = (Var_71 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_71;
                  else
                  {
                    MR_Word Var_72;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), &Var_72, ((MR_Box) (Var_84)), ((MR_Box) (ArgY2_68)));
                    succeeded = (Var_72 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_72;
                    else
                      parse_tree__parse_types____Compare____item_or_marker_0_0(HeadVar__1_1, Var_83, ArgY3_70);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
                  MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_19;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&Var_19, Var_47, ArgY1_16);
                  succeeded = (Var_19 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_19;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_46, ArgY2_18);
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
                  MR_Word ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_35;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&Var_35, Var_45, ArgY1_32);
                  succeeded = (Var_35 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_35;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_44, ArgY2_34);
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
        MR_Word ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[1]), &Var_12, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_11)));
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
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
parse_tree__parse_module__read_parse_tree_src_10_p_0(
  MR_Word Stream_11,
  MR_String STATE_VARIABLE_SourceFileName_0_31,
  MR_Word Globals_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_Word * ParseTree_16,
  MR_Word * STATE_VARIABLE_Specs_32,
  MR_Word * STATE_VARIABLE_Errors_33)
{
  {
    MR_Word ModuleDeclPresent_21;
    MR_Word InitLookAhead_22;
    MR_Word ModuleName_23;
    MR_Word ModuleNameContext_24;
    MR_Word FinalLookAhead_29;
    MR_Word ModuleComponents_30;
    MR_Word STATE_VARIABLE_Errors_37_37;
    MR_Word STATE_VARIABLE_SeqNumCounter_39_39;
    MR_String STATE_VARIABLE_SourceFileName_41_41;
    MR_Word STATE_VARIABLE_SeqNumCounter_42_42;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word STATE_VARIABLE_Errors_44_44;
    MR_Word Var_47;
    MR_String STATE_VARIABLE_SourceFileName_48_48;
    MR_Word STATE_VARIABLE_SeqNumCounter_49_49;
    MR_Word STATE_VARIABLE_Specs_50_50;
    MR_Word STATE_VARIABLE_Errors_51_51;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_37_37);
    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_39_39);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(Stream_11, DefaultModuleName_14, DefaultExpectationContexts_15, &ModuleDeclPresent_21, STATE_VARIABLE_SourceFileName_0_31, &STATE_VARIABLE_SourceFileName_41_41, STATE_VARIABLE_SeqNumCounter_39_39, &STATE_VARIABLE_SeqNumCounter_42_42, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Errors_37_37, &STATE_VARIABLE_Errors_44_44);
    switch (MR_tag((MR_Word) ModuleDeclPresent_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          InitLookAhead_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_21, (MR_Integer) 0))));
          ModuleName_23 = DefaultModuleName_14;
          if ((InitLookAhead_22 == (MR_Word) ((MR_Unsigned) 0U)))
            ModuleNameContext_24 = mercury__term__context_init_0_f_0();
          else
          {
            MR_Word InitLookAheadTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_22, (MR_Integer) 1))));

            ModuleNameContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InitLookAheadTerm_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 0))));
          ModuleNameContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 1))));
          InitLookAhead_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_21, (MR_Integer) 0))));
          ModuleNameContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_21, (MR_Integer) 1))));
          InitLookAhead_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__read_parse_tree_src_components_20_p_0(Stream_11, Globals_13, ModuleName_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_22, &FinalLookAhead_29, Var_47, &ModuleComponents_30, STATE_VARIABLE_SourceFileName_41_41, &STATE_VARIABLE_SourceFileName_48_48, STATE_VARIABLE_SeqNumCounter_42_42, &STATE_VARIABLE_SeqNumCounter_49_49, STATE_VARIABLE_Specs_43_43, &STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Errors_44_44, &STATE_VARIABLE_Errors_51_51);
    parse_tree__parse_module__check_for_unexpected_item_12_p_0(Stream_11, ModuleName_23, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_29, STATE_VARIABLE_SourceFileName_48_48, STATE_VARIABLE_SeqNumCounter_49_49, STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Specs_32, STATE_VARIABLE_Errors_51_51, STATE_VARIABLE_Errors_33);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleComponents_30));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_src_components_20_p_0(
  MR_Word Stream_21,
  MR_Word Globals_22,
  MR_Word CurModuleName_23,
  MR_Word ContainingModules_24,
  MR_Word MaybePrevSection_25,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_77,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_78,
  MR_Word * STATE_VARIABLE_ModuleComponents_79,
  MR_String STATE_VARIABLE_SourceFileName_0_80,
  MR_String * STATE_VARIABLE_SourceFileName_81,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_82,
  MR_Word * STATE_VARIABLE_SeqNumCounter_83,
  MR_Word STATE_VARIABLE_Specs_0_84,
  MR_Word * STATE_VARIABLE_Specs_85,
  MR_Word STATE_VARIABLE_Errors_0_86,
  MR_Word * STATE_VARIABLE_Errors_87)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_35;
    MR_Word STATE_VARIABLE_SeqNumCounter_90_90;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_9_p_0(Stream_21, InitLookAhead_27, CurModuleName_23, STATE_VARIABLE_SourceFileName_0_80, &ReadIOMResult_35, STATE_VARIABLE_SeqNumCounter_0_82, &STATE_VARIABLE_SeqNumCounter_90_90);
    switch (MR_tag((MR_Word) ReadIOMResult_35)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_28 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_79 = STATE_VARIABLE_ModuleComponents_0_78;
          *STATE_VARIABLE_SourceFileName_81 = STATE_VARIABLE_SourceFileName_0_80;
          *STATE_VARIABLE_SeqNumCounter_83 = STATE_VARIABLE_SeqNumCounter_90_90;
          *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_0_84;
          *STATE_VARIABLE_Errors_87 = STATE_VARIABLE_Errors_0_86;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_36 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_35), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Specs_208_208;
          MR_Word STATE_VARIABLE_Errors_210_210;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_86;

          {
            STATE_VARIABLE_Specs_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_208_208, 0) = ((MR_Box) (ItemSpec_36));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_208_208, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_84));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_86, &STATE_VARIABLE_Errors_210_210);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_90_90;
          next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_208_208;
          next_value_of_STATE_VARIABLE_Errors_0_86 = STATE_VARIABLE_Errors_210_210;
          InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
          STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
          STATE_VARIABLE_Errors_0_86 = next_value_of_STATE_VARIABLE_Errors_0_86;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMVarSet_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_35, (MR_Integer) 0))));
          MR_Word IOMTerm_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_35, (MR_Integer) 1))));
          MR_Word Context_41;
          MR_Word SectionContext_44;
          MR_Word ItemSeqInitLookAhead_45;
          MR_Word ItemSeqFinalLookAhead_46;
          MR_Word InclsCord_48;
          MR_Word AvailsCord_49;
          MR_Word ItemsCord_50;
          MR_Word STATE_VARIABLE_Specs_187_187;
          MR_Word STATE_VARIABLE_Errors_188_188;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_String STATE_VARIABLE_SourceFileName_193_193;
          MR_Word STATE_VARIABLE_SeqNumCounter_194_194;
          MR_Word STATE_VARIABLE_Specs_195_195;
          MR_Word STATE_VARIABLE_Errors_196_196;
          MR_Word STATE_VARIABLE_ModuleComponents_198_198;
          MR_Word Var_199;
          MR_Word Var_207;
          MR_Word _MissingStartSectionWarning_42;
          MR_Word Var_47;
          MR_Word next_value_of_MaybePrevSection_25;
          MR_Word next_value_of_InitLookAhead_27;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_86;

          Context_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_38);
          parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_23, Context_41, STATE_VARIABLE_MissingStartSectionWarning_0_77, &_MissingStartSectionWarning_42, STATE_VARIABLE_Specs_0_84, &STATE_VARIABLE_Specs_187_187, STATE_VARIABLE_Errors_0_86, &STATE_VARIABLE_Errors_188_188);
          SectionContext_44 = mercury__term__context_init_0_f_0();
          {
            ItemSeqInitLookAhead_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_45, 0) = ((MR_Box) (IOMVarSet_37));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_45, 1) = ((MR_Box) (IOMTerm_38));
          }
          Var_190 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_191 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_192 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__read_item_sequence_23_p_0(Stream_21, Globals_22, CurModuleName_23, ItemSeqInitLookAhead_45, &ItemSeqFinalLookAhead_46, (MR_Word) ((MR_Unsigned) 0U), &Var_47, Var_190, &InclsCord_48, Var_191, &AvailsCord_49, Var_192, &ItemsCord_50, STATE_VARIABLE_SourceFileName_0_80, &STATE_VARIABLE_SourceFileName_193_193, STATE_VARIABLE_SeqNumCounter_90_90, &STATE_VARIABLE_SeqNumCounter_194_194, STATE_VARIABLE_Specs_187_187, &STATE_VARIABLE_Specs_195_195, STATE_VARIABLE_Errors_188_188, &STATE_VARIABLE_Errors_196_196);
          parse_tree__parse_module__add_section_component_7_p_0((MR_Integer) 1, SectionContext_44, InclsCord_48, AvailsCord_49, ItemsCord_50, STATE_VARIABLE_ModuleComponents_0_78, &STATE_VARIABLE_ModuleComponents_198_198);
          {
            Var_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (SectionContext_44));
          }
          {
            Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_207));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_25 = Var_199;
          next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_46;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_78 = STATE_VARIABLE_ModuleComponents_198_198;
          next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_193_193;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_194_194;
          next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_195_195;
          next_value_of_STATE_VARIABLE_Errors_0_86 = STATE_VARIABLE_Errors_196_196;
          MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
          STATE_VARIABLE_MissingStartSectionWarning_0_77 = (MR_Integer) 0;
          InitLookAhead_27 = next_value_of_InitLookAhead_27;
          STATE_VARIABLE_ModuleComponents_0_78 = next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
          STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
          STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
          STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
          STATE_VARIABLE_Errors_0_86 = next_value_of_STATE_VARIABLE_Errors_0_86;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_35, (MR_Integer) 2))));
          MR_Word IOMVarSet_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_35, (MR_Integer) 0))));
          MR_Word IOMTerm_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_35, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_51)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_94_94;
                MR_Word STATE_VARIABLE_Errors_95_95;
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word Var_100;
                MR_String STATE_VARIABLE_SourceFileName_101_101;
                MR_Word STATE_VARIABLE_SeqNumCounter_102_102;
                MR_Word STATE_VARIABLE_Specs_103_103;
                MR_Word STATE_VARIABLE_Errors_104_104;
                MR_Word STATE_VARIABLE_ModuleComponents_106_106;
                MR_Word Var_107;
                MR_Word Var_115;
                MR_Word SectionKind_245;
                MR_Word SectionContext_246;
                MR_Word ItemSeqInitLookAhead_247;
                MR_Word ItemSeqFinalLookAhead_248;
                MR_Word InclsCord_249;
                MR_Word AvailsCord_250;
                MR_Word ItemsCord_251;
                MR_Word Var_73;
                MR_Word next_value_of_MaybePrevSection_25;
                MR_Word next_value_of_InitLookAhead_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_86;

                switch (MR_tag((MR_Word) IOM_51)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_235;
                        MR_Word _MissingStartSectionWarning_234;

                        Context_235 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_262);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_23, Context_235, STATE_VARIABLE_MissingStartSectionWarning_0_77, &_MissingStartSectionWarning_234, STATE_VARIABLE_Specs_0_84, &STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Errors_0_86, &STATE_VARIABLE_Errors_95_95);
                        SectionKind_245 = (MR_Integer) 1;
                        SectionContext_246 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_25, (MR_Integer) 0))));

                        SectionKind_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
                        SectionContext_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_84;
                        STATE_VARIABLE_Errors_95_95 = STATE_VARIABLE_Errors_0_86;
                      }
                      {
                        ItemSeqInitLookAhead_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_247, 0) = ((MR_Box) (IOMVarSet_261));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_247, 1) = ((MR_Box) (IOMTerm_262));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      SectionKind_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 1))));
                      SectionContext_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 2))));
                      ItemSeqInitLookAhead_247 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_84;
                      STATE_VARIABLE_Errors_95_95 = STATE_VARIABLE_Errors_0_86;
                    }
                    break;
                }
                Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_100 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__read_item_sequence_23_p_0(Stream_21, Globals_22, CurModuleName_23, ItemSeqInitLookAhead_247, &ItemSeqFinalLookAhead_248, (MR_Word) ((MR_Unsigned) 0U), &Var_73, Var_98, &InclsCord_249, Var_99, &AvailsCord_250, Var_100, &ItemsCord_251, STATE_VARIABLE_SourceFileName_0_80, &STATE_VARIABLE_SourceFileName_101_101, STATE_VARIABLE_SeqNumCounter_90_90, &STATE_VARIABLE_SeqNumCounter_102_102, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_103_103, STATE_VARIABLE_Errors_95_95, &STATE_VARIABLE_Errors_104_104);
                parse_tree__parse_module__add_section_component_7_p_0(SectionKind_245, SectionContext_246, InclsCord_249, AvailsCord_250, ItemsCord_251, STATE_VARIABLE_ModuleComponents_0_78, &STATE_VARIABLE_ModuleComponents_106_106);
                {
                  Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (SectionKind_245));
                  MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (SectionContext_246));
                }
                {
                  Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_115));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_25 = Var_107;
                next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_248;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_78 = STATE_VARIABLE_ModuleComponents_106_106;
                next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_101_101;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_102_102;
                next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_103_103;
                next_value_of_STATE_VARIABLE_Errors_0_86 = STATE_VARIABLE_Errors_104_104;
                MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                STATE_VARIABLE_MissingStartSectionWarning_0_77 = (MR_Integer) 0;
                InitLookAhead_27 = next_value_of_InitLookAhead_27;
                STATE_VARIABLE_ModuleComponents_0_78 = next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
                STATE_VARIABLE_Errors_0_86 = next_value_of_STATE_VARIABLE_Errors_0_86;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Msg_54;
                    MR_Word Spec_55;
                    MR_Word Var_163;
                    MR_Word Var_169;
                    MR_Word STATE_VARIABLE_Specs_171_171;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;

                    Var_163 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_262);
                    {
                      Msg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Msg_54, 0) = ((MR_Box) (Var_163));
                      MR_hl_field(MR_mktag(0), Msg_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[105])));
                    }
                    {
                      Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Msg_54));
                      MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_55, 2) = ((MR_Box) (Var_169));
                    }
                    {
                      STATE_VARIABLE_Specs_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_171_171, 0) = ((MR_Box) (Spec_55));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_171_171, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_84));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_90_90;
                    next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_171_171;
                    InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_179_179 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_179_179;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_90_90;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                    STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RawStartModuleName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 1))));
                    MR_Word StartContext_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 2))));
                    MR_Word StartModuleName_60;
                    MR_Word SubModuleFinalLookAhead_62;
                    MR_Word STATE_VARIABLE_Specs_141_141;
                    MR_Word STATE_VARIABLE_ModuleComponents_143_143;
                    MR_String STATE_VARIABLE_SourceFileName_144_144;
                    MR_Word STATE_VARIABLE_SeqNumCounter_145_145;
                    MR_Word STATE_VARIABLE_Specs_146_146;
                    MR_Word STATE_VARIABLE_Errors_147_147;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_86;

                    if (((MR_tag((MR_Word) RawStartModuleName_56)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawStartModuleName_56, (MR_Integer) 0))));
                      MR_String RawBaseName_227 = ((MR_String) ((MR_hl_field(MR_mktag(1), RawStartModuleName_56, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_61, CurModuleName_23);
                      if (succeeded)
                      {
                        {
                          StartModuleName_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_60, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(MR_mktag(1), StartModuleName_60, 1) = ((MR_Box) (RawBaseName_227));
                        }
                        STATE_VARIABLE_Specs_141_141 = STATE_VARIABLE_Specs_0_84;
                      }
                      else
                      {
                        MR_Word Var_118;
                        MR_Word Var_121;
                        MR_Word Var_122;
                        MR_Word Var_123;
                        MR_Word Var_126;
                        MR_Word Var_127;
                        MR_Word Var_136;
                        MR_Word Var_137;
                        MR_Word Var_138;
                        MR_Word Pieces_218;
                        MR_Word Msg_219;
                        MR_Word Spec_220;

                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (RawStartModuleName_56));
                        }
                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (CurModuleName_23));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
                          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
                        }
                        {
                          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[104])));
                          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
                        }
                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
                          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
                        }
                        {
                          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[103])));
                          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_121));
                        }
                        {
                          Pieces_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_218, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[102])));
                          MR_hl_field(MR_mktag(1), Pieces_218, 1) = ((MR_Box) (Var_118));
                        }
                        {
                          Msg_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Msg_219, 0) = ((MR_Box) (Pieces_218));
                        }
                        {
                          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Msg_219));
                          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (StartContext_57));
                          MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (Var_138));
                        }
                        {
                          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Spec_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Spec_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), Spec_220, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(0), Spec_220, 2) = ((MR_Box) (Var_136));
                        }
                        {
                          STATE_VARIABLE_Specs_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_141_141, 0) = ((MR_Box) (Spec_220));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_141_141, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_84));
                        }
                        {
                          StartModuleName_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_60, 0) = ((MR_Box) (CurModuleName_23));
                          MR_hl_field(MR_mktag(1), StartModuleName_60, 1) = ((MR_Box) (RawBaseName_227));
                        }
                      }
                    }
                    else
                    {
                      MR_String RawBaseName_59 = ((MR_String) ((MR_hl_field(MR_mktag(0), RawStartModuleName_56, (MR_Integer) 0))));

                      {
                        StartModuleName_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), StartModuleName_60, 0) = ((MR_Box) (CurModuleName_23));
                        MR_hl_field(MR_mktag(1), StartModuleName_60, 1) = ((MR_Box) (RawBaseName_59));
                      }
                      STATE_VARIABLE_Specs_141_141 = STATE_VARIABLE_Specs_0_84;
                    }
                    parse_tree__parse_module__read_parse_tree_src_submodule_20_p_0(Stream_21, Globals_22, ContainingModules_24, MaybePrevSection_25, StartModuleName_60, StartContext_57, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_62, STATE_VARIABLE_ModuleComponents_0_78, &STATE_VARIABLE_ModuleComponents_143_143, STATE_VARIABLE_SourceFileName_0_80, &STATE_VARIABLE_SourceFileName_144_144, STATE_VARIABLE_SeqNumCounter_90_90, &STATE_VARIABLE_SeqNumCounter_145_145, STATE_VARIABLE_Specs_141_141, &STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Errors_0_86, &STATE_VARIABLE_Errors_147_147);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_27 = SubModuleFinalLookAhead_62;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_78 = STATE_VARIABLE_ModuleComponents_143_143;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_144_144;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_145_145;
                    next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_146_146;
                    next_value_of_STATE_VARIABLE_Errors_0_86 = STATE_VARIABLE_Errors_147_147;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_78 = next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                    STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                    STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
                    STATE_VARIABLE_Errors_0_86 = next_value_of_STATE_VARIABLE_Errors_0_86;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word EndedModuleName_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 1))));
                    MR_Word EndContext_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 2))));

                    parse_tree__parse_module__handle_module_end_marker_11_p_0(CurModuleName_23, ContainingModules_24, IOMVarSet_261, IOMTerm_262, EndedModuleName_74, EndContext_75, FinalLookAhead_28, STATE_VARIABLE_Specs_0_84, STATE_VARIABLE_Specs_85, STATE_VARIABLE_Errors_0_86, STATE_VARIABLE_Errors_87);
                    *STATE_VARIABLE_ModuleComponents_79 = STATE_VARIABLE_ModuleComponents_0_78;
                    *STATE_VARIABLE_SourceFileName_81 = STATE_VARIABLE_SourceFileName_0_80;
                    *STATE_VARIABLE_SeqNumCounter_83 = STATE_VARIABLE_SeqNumCounter_90_90;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word STATE_VARIABLE_Specs_94_94;
                    MR_Word STATE_VARIABLE_Errors_95_95;
                    MR_Word Var_98;
                    MR_Word Var_99;
                    MR_Word Var_100;
                    MR_String STATE_VARIABLE_SourceFileName_101_101;
                    MR_Word STATE_VARIABLE_SeqNumCounter_102_102;
                    MR_Word STATE_VARIABLE_Specs_103_103;
                    MR_Word STATE_VARIABLE_Errors_104_104;
                    MR_Word STATE_VARIABLE_ModuleComponents_106_106;
                    MR_Word Var_107;
                    MR_Word Var_115;
                    MR_Word SectionKind_245;
                    MR_Word SectionContext_246;
                    MR_Word ItemSeqInitLookAhead_247;
                    MR_Word ItemSeqFinalLookAhead_248;
                    MR_Word InclsCord_249;
                    MR_Word AvailsCord_250;
                    MR_Word ItemsCord_251;
                    MR_Word Var_73;
                    MR_Word next_value_of_MaybePrevSection_25;
                    MR_Word next_value_of_InitLookAhead_27;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_84;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_86;

                    switch (MR_tag((MR_Word) IOM_51)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          if ((MaybePrevSection_25 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_235;
                            MR_Word _MissingStartSectionWarning_234;

                            Context_235 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_262);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_23, Context_235, STATE_VARIABLE_MissingStartSectionWarning_0_77, &_MissingStartSectionWarning_234, STATE_VARIABLE_Specs_0_84, &STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Errors_0_86, &STATE_VARIABLE_Errors_95_95);
                            SectionKind_245 = (MR_Integer) 1;
                            SectionContext_246 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_25, (MR_Integer) 0))));

                            SectionKind_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
                            SectionContext_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_84;
                            STATE_VARIABLE_Errors_95_95 = STATE_VARIABLE_Errors_0_86;
                          }
                          {
                            ItemSeqInitLookAhead_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_247, 0) = ((MR_Box) (IOMVarSet_261));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_247, 1) = ((MR_Box) (IOMTerm_262));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          SectionKind_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 1))));
                          SectionContext_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_51, (MR_Integer) 2))));
                          ItemSeqInitLookAhead_247 = (MR_Word) ((MR_Unsigned) 0U);
                          STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_84;
                          STATE_VARIABLE_Errors_95_95 = STATE_VARIABLE_Errors_0_86;
                        }
                        break;
                    }
                    Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_100 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(Stream_21, Globals_22, CurModuleName_23, ItemSeqInitLookAhead_247, &ItemSeqFinalLookAhead_248, (MR_Word) ((MR_Unsigned) 0U), &Var_73, Var_98, &InclsCord_249, Var_99, &AvailsCord_250, Var_100, &ItemsCord_251, STATE_VARIABLE_SourceFileName_0_80, &STATE_VARIABLE_SourceFileName_101_101, STATE_VARIABLE_SeqNumCounter_90_90, &STATE_VARIABLE_SeqNumCounter_102_102, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_103_103, STATE_VARIABLE_Errors_95_95, &STATE_VARIABLE_Errors_104_104);
                    parse_tree__parse_module__add_section_component_7_p_0(SectionKind_245, SectionContext_246, InclsCord_249, AvailsCord_250, ItemsCord_251, STATE_VARIABLE_ModuleComponents_0_78, &STATE_VARIABLE_ModuleComponents_106_106);
                    {
                      Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (SectionKind_245));
                      MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (SectionContext_246));
                    }
                    {
                      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_115));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_25 = Var_107;
                    next_value_of_InitLookAhead_27 = ItemSeqFinalLookAhead_248;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_78 = STATE_VARIABLE_ModuleComponents_106_106;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_80 = STATE_VARIABLE_SourceFileName_101_101;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_82 = STATE_VARIABLE_SeqNumCounter_102_102;
                    next_value_of_STATE_VARIABLE_Specs_0_84 = STATE_VARIABLE_Specs_103_103;
                    next_value_of_STATE_VARIABLE_Errors_0_86 = STATE_VARIABLE_Errors_104_104;
                    MaybePrevSection_25 = next_value_of_MaybePrevSection_25;
                    STATE_VARIABLE_MissingStartSectionWarning_0_77 = (MR_Integer) 0;
                    InitLookAhead_27 = next_value_of_InitLookAhead_27;
                    STATE_VARIABLE_ModuleComponents_0_78 = next_value_of_STATE_VARIABLE_ModuleComponents_0_78;
                    STATE_VARIABLE_SourceFileName_0_80 = next_value_of_STATE_VARIABLE_SourceFileName_0_80;
                    STATE_VARIABLE_SeqNumCounter_0_82 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_82;
                    STATE_VARIABLE_Specs_0_84 = next_value_of_STATE_VARIABLE_Specs_0_84;
                    STATE_VARIABLE_Errors_0_86 = next_value_of_STATE_VARIABLE_Errors_0_86;
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
parse_tree__parse_module__read_parse_tree_src_submodule_20_p_0(
  MR_Word Stream_21,
  MR_Word Globals_22,
  MR_Word ContainingModules_23,
  MR_Word MaybePrevSection_24,
  MR_Word StartModuleName_25,
  MR_Word StartContext_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_ModuleComponents_0_44,
  MR_Word * STATE_VARIABLE_ModuleComponents_45,
  MR_String STATE_VARIABLE_SourceFileName_0_46,
  MR_String * STATE_VARIABLE_SourceFileName_47,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_48,
  MR_Word * STATE_VARIABLE_SeqNumCounter_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_Errors_0_52,
  MR_Word * STATE_VARIABLE_Errors_53)
{
  {
    MR_Word SectionKind_35;
    MR_Word SectionContext_36;
    MR_Word NestedContainingModules_39;
    MR_Word NestedModuleComponents_41;
    MR_Word SubModuleParseTreeSrc_42;
    MR_Word Component_43;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word STATE_VARIABLE_Errors_105_105;
    MR_Word Var_108;

    if ((MaybePrevSection_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NoSectionPieces_37;
      MR_Word NoSectionSpec_38;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;

      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (StartModuleName_25));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[48])));
      }
      {
        NoSectionPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[101])));
        MR_hl_field(MR_mktag(1), NoSectionPieces_37, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (NoSectionPieces_37));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (StartContext_26));
        MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NoSectionSpec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NoSectionSpec_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoSectionSpec_38, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), NoSectionSpec_38, 2) = ((MR_Box) (Var_97));
      }
      {
        STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (NoSectionSpec_38));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
      }
      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_Errors_0_52, &STATE_VARIABLE_Errors_105_105);
      SectionKind_35 = (MR_Integer) 0;
      SectionContext_36 = mercury__term__context_init_0_f_0();
    }
    else
    {
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_24, (MR_Integer) 0))));

      SectionKind_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
      SectionContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
      STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_0_50;
      STATE_VARIABLE_Errors_105_105 = STATE_VARIABLE_Errors_0_52;
    }
    {
      NestedContainingModules_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NestedContainingModules_39, 0) = ((MR_Box) (StartModuleName_25));
      MR_hl_field(MR_mktag(1), NestedContainingModules_39, 1) = ((MR_Box) (ContainingModules_23));
    }
    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__read_parse_tree_src_components_20_p_0(Stream_21, Globals_22, StartModuleName_25, NestedContainingModules_39, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_27, FinalLookAhead_28, Var_108, &NestedModuleComponents_41, STATE_VARIABLE_SourceFileName_0_46, STATE_VARIABLE_SourceFileName_47, STATE_VARIABLE_SeqNumCounter_0_48, STATE_VARIABLE_SeqNumCounter_49, STATE_VARIABLE_Specs_103_103, STATE_VARIABLE_Specs_51, STATE_VARIABLE_Errors_105_105, STATE_VARIABLE_Errors_53);
    {
      SubModuleParseTreeSrc_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_42, 0) = ((MR_Box) (StartModuleName_25));
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_42, 1) = ((MR_Box) (StartContext_26));
      MR_hl_field(MR_mktag(0), SubModuleParseTreeSrc_42, 2) = ((MR_Box) (NestedModuleComponents_41));
    }
    {
      Component_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Component_43, 0) = ((MR_Box) (SectionKind_35));
      MR_hl_field(MR_mktag(1), Component_43, 1) = ((MR_Box) (SectionContext_36));
      MR_hl_field(MR_mktag(1), Component_43, 2) = ((MR_Box) (SubModuleParseTreeSrc_42));
    }
    *STATE_VARIABLE_ModuleComponents_45 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_44, ((MR_Box) (Component_43)));
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
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[95])));
            MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_22));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_46));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_Errors_0_26, STATE_VARIABLE_Errors_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) ((env).parse_tree__parse_module__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (CurModuleName_12));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[100])));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[99])));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_91, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Pieces_91));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (EndContext_17));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_92, 2) = ((MR_Box) (Var_81));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[43])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_3[7])));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (MissingSectionPieces_14));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), MissingSectionSpec_15, 2) = ((MR_Box) (Var_67));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
parse_tree__parse_module__add_section_component_7_p_0(
  MR_Word SectionKind_8,
  MR_Word SectionContext_9,
  MR_Word InclsCord_10,
  MR_Word AvailsCord_11,
  MR_Word ItemsCord_12,
  MR_Word STATE_VARIABLE_ModuleComponents_0_15,
  MR_Word * STATE_VARIABLE_ModuleComponents_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_20_20;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_10);
    if (succeeded)
    {
      TypeCtorInfo_19_19 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
      succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_19_19, AvailsCord_11);
      if (succeeded)
      {
        TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
        succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_20_20, ItemsCord_12);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_ModuleComponents_16 = STATE_VARIABLE_ModuleComponents_0_15;
    else
    {
      MR_Word Component_14;

      {
        Component_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Component_14, 0) = ((MR_Box) (SectionKind_8));
        MR_hl_field(MR_mktag(0), Component_14, 1) = ((MR_Box) (SectionContext_9));
        MR_hl_field(MR_mktag(0), Component_14, 2) = ((MR_Box) (InclsCord_10));
        MR_hl_field(MR_mktag(0), Component_14, 3) = ((MR_Box) (AvailsCord_11));
        MR_hl_field(MR_mktag(0), Component_14, 4) = ((MR_Box) (ItemsCord_12));
      }
      *STATE_VARIABLE_ModuleComponents_16 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), STATE_VARIABLE_ModuleComponents_0_15, ((MR_Box) (Component_14)));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_11_p_0(
  MR_Word IntFileKind_12,
  MR_Word Stream_13,
  MR_String SourceFileName0_14,
  MR_Word Globals_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_Word * ParseTree_18,
  MR_Word * STATE_VARIABLE_Specs_45,
  MR_Word * STATE_VARIABLE_Errors_46)
{
  {
    MR_Word SeqNumCounter0_22;
    MR_Word ModuleDeclPresent_23;
    MR_String SourceFileName1_24;
    MR_Word SeqNumCounter1_25;
    MR_Word ModuleName_30;
    MR_Word ModuleNameContext_31;
    MR_Word MaybeVersionNumbers_32;
    MR_Word IntIncls_33;
    MR_Word ImpIncls_34;
    MR_Word IntAvails_35;
    MR_Word ImpAvails_36;
    MR_Word IntItems_37;
    MR_Word ImpItems_38;
    MR_Word STATE_VARIABLE_Errors_50_50;
    MR_Word STATE_VARIABLE_Specs_53_53;
    MR_Word STATE_VARIABLE_Errors_54_54;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_50_50);
    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_22);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(Stream_13, DefaultModuleName_16, DefaultExpectationContexts_17, &ModuleDeclPresent_23, SourceFileName0_14, &SourceFileName1_24, SeqNumCounter0_22, &SeqNumCounter1_25, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Errors_50_50, &STATE_VARIABLE_Errors_54_54);
    switch (MR_tag((MR_Word) ModuleDeclPresent_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LookAhead_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_23, (MR_Integer) 0))));
          MR_Word LookAheadContext_27;

          if ((LookAhead_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              LookAheadContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LookAheadContext_27, 0) = ((MR_Box) (SourceFileName0_14));
              MR_hl_field(MR_mktag(0), LookAheadContext_27, 1) = ((MR_Box) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word LookAheadTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LookAhead_26, (MR_Integer) 1))));

            LookAheadContext_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LookAheadTerm_29);
          }
          parse_tree__parse_module__report_missing_module_start_5_p_0(LookAheadContext_27, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_45, STATE_VARIABLE_Errors_54_54, STATE_VARIABLE_Errors_46);
          ModuleName_30 = DefaultModuleName_16;
          ModuleNameContext_31 = mercury__term__context_init_0_f_0();
          MaybeVersionNumbers_32 = (MR_Word) ((MR_Unsigned) 0U);
          IntIncls_33 = (MR_Word) ((MR_Unsigned) 0U);
          ImpIncls_34 = (MR_Word) ((MR_Unsigned) 0U);
          IntAvails_35 = (MR_Word) ((MR_Unsigned) 0U);
          ImpAvails_36 = (MR_Word) ((MR_Unsigned) 0U);
          IntItems_37 = (MR_Word) ((MR_Unsigned) 0U);
          ImpItems_38 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_23, (MR_Integer) 0))));
          ModuleNameContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_23, (MR_Integer) 1))));
          parse_tree__parse_module__report_wrong_module_start_7_p_0(ModuleNameContext_31, DefaultModuleName_16, ModuleName_30, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_45, STATE_VARIABLE_Errors_54_54, STATE_VARIABLE_Errors_46);
          MaybeVersionNumbers_32 = (MR_Word) ((MR_Unsigned) 0U);
          IntIncls_33 = (MR_Word) ((MR_Unsigned) 0U);
          ImpIncls_34 = (MR_Word) ((MR_Unsigned) 0U);
          IntAvails_35 = (MR_Word) ((MR_Unsigned) 0U);
          ImpAvails_36 = (MR_Word) ((MR_Unsigned) 0U);
          IntItems_37 = (MR_Word) ((MR_Unsigned) 0U);
          ImpItems_38 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FinalLookAhead_39;
          MR_Word VNInfo_40;
          MR_Word RawItemBlocks_41;
          MR_String SourceFileName_42;
          MR_Word SeqNumCounter_43;
          MR_Word STATE_VARIABLE_Specs_58_58;
          MR_Word STATE_VARIABLE_Errors_59_59;
          MR_Word Var_63;

          ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_23, (MR_Integer) 0))));
          ModuleNameContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_23, (MR_Integer) 1))));
          parse_tree__parse_module__read_parse_tree_int_sections_18_p_0(Stream_13, Globals_15, ModuleName_30, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_39, (MR_Word) ((MR_Unsigned) 4U), &VNInfo_40, &RawItemBlocks_41, SourceFileName1_24, &SourceFileName_42, SeqNumCounter1_25, &SeqNumCounter_43, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Errors_54_54, &STATE_VARIABLE_Errors_59_59);
          switch (MR_tag((MR_Word) VNInfo_40)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(VNInfo_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int\'/11", (MR_String) "dont_allow_version_numbers");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  MaybeVersionNumbers_32 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MVN_44 = (MR_Word) (MR_body((MR_Word) (VNInfo_40), (MR_Integer) 1));

                {
                  MaybeVersionNumbers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeVersionNumbers_32, 0) = ((MR_Box) (MVN_44));
                }
              }
              break;
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (IntFileKind_12));
          }
          parse_tree__parse_module__check_for_unexpected_item_12_p_0(Stream_13, ModuleName_30, Var_63, FinalLookAhead_39, SourceFileName_42, SeqNumCounter_43, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_45, STATE_VARIABLE_Errors_59_59, STATE_VARIABLE_Errors_46);
          parse_tree__parse_module__separate_int_imp_items_7_p_0(RawItemBlocks_41, &IntIncls_33, &ImpIncls_34, &IntAvails_35, &ImpAvails_36, &IntItems_37, &ImpItems_38);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntFileKind_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_35));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_36));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_37));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_38));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_sections_18_p_0(
  MR_Word Stream_19,
  MR_Word Globals_20,
  MR_Word CurModuleName_21,
  MR_Word InitLookAhead_22,
  MR_Word * FinalLookAhead_23,
  MR_Word STATE_VARIABLE_VNInfo_0_35,
  MR_Word * STATE_VARIABLE_VNInfo_36,
  MR_Word * RawItemBlocks_25,
  MR_String STATE_VARIABLE_SourceFileName_0_37,
  MR_String * STATE_VARIABLE_SourceFileName_38,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_39,
  MR_Word * STATE_VARIABLE_SeqNumCounter_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42,
  MR_Word STATE_VARIABLE_Errors_0_43,
  MR_Word * STATE_VARIABLE_Errors_44)
{
  {
    MR_Word MidLookAhead_31;
    MR_Word MaybeHeadRawItemBlock_32;
    MR_Word STATE_VARIABLE_VNInfo_48_48;
    MR_String STATE_VARIABLE_SourceFileName_49_49;
    MR_Word STATE_VARIABLE_SeqNumCounter_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_Errors_52_52;

    parse_tree__parse_module__read_parse_tree_int_section_19_p_0(Stream_19, Globals_20, CurModuleName_21, (MR_Integer) 0, InitLookAhead_22, &MidLookAhead_31, STATE_VARIABLE_VNInfo_0_35, &STATE_VARIABLE_VNInfo_48_48, &MaybeHeadRawItemBlock_32, STATE_VARIABLE_SourceFileName_0_37, &STATE_VARIABLE_SourceFileName_49_49, STATE_VARIABLE_SeqNumCounter_0_39, &STATE_VARIABLE_SeqNumCounter_50_50, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Errors_0_43, &STATE_VARIABLE_Errors_52_52);
    if ((MaybeHeadRawItemBlock_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FinalLookAhead_23 = MidLookAhead_31;
      *RawItemBlocks_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VNInfo_36 = STATE_VARIABLE_VNInfo_48_48;
      *STATE_VARIABLE_SourceFileName_38 = STATE_VARIABLE_SourceFileName_49_49;
      *STATE_VARIABLE_SeqNumCounter_40 = STATE_VARIABLE_SeqNumCounter_50_50;
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_51_51;
      *STATE_VARIABLE_Errors_44 = STATE_VARIABLE_Errors_52_52;
    }
    else
    {
      MR_Word HeadRawItemBlock_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadRawItemBlock_32, (MR_Integer) 0))));
      MR_Word TailRawItemBlocks_34;

      parse_tree__parse_module__read_parse_tree_int_sections_18_p_0(Stream_19, Globals_20, CurModuleName_21, MidLookAhead_31, FinalLookAhead_23, STATE_VARIABLE_VNInfo_48_48, STATE_VARIABLE_VNInfo_36, &TailRawItemBlocks_34, STATE_VARIABLE_SourceFileName_49_49, STATE_VARIABLE_SourceFileName_38, STATE_VARIABLE_SeqNumCounter_50_50, STATE_VARIABLE_SeqNumCounter_40, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_42, STATE_VARIABLE_Errors_52_52, STATE_VARIABLE_Errors_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *RawItemBlocks_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadRawItemBlock_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRawItemBlocks_34));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_int_section_19_p_0(
  MR_Word Stream_20,
  MR_Word Globals_21,
  MR_Word CurModuleName_22,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_59,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word STATE_VARIABLE_VNInfo_0_60,
  MR_Word * STATE_VARIABLE_VNInfo_61,
  MR_Word * MaybeRawItemBlock_27,
  MR_String STATE_VARIABLE_SourceFileName_0_62,
  MR_String * STATE_VARIABLE_SourceFileName_63,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_64,
  MR_Word * STATE_VARIABLE_SeqNumCounter_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67,
  MR_Word STATE_VARIABLE_Errors_0_68,
  MR_Word * STATE_VARIABLE_Errors_69)
{
  while (MR_TRUE)
  {
    MR_Word ReadIOMResult_33;
    MR_Word STATE_VARIABLE_SeqNumCounter_72_72;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_9_p_0(Stream_20, InitLookAhead_24, CurModuleName_22, STATE_VARIABLE_SourceFileName_0_62, &ReadIOMResult_33, STATE_VARIABLE_SeqNumCounter_0_64, &STATE_VARIABLE_SeqNumCounter_72_72);
    switch (MR_tag((MR_Word) ReadIOMResult_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeRawItemBlock_27 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_VNInfo_61 = STATE_VARIABLE_VNInfo_0_60;
          *STATE_VARIABLE_SourceFileName_63 = STATE_VARIABLE_SourceFileName_0_62;
          *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
          *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
          *STATE_VARIABLE_Errors_69 = STATE_VARIABLE_Errors_0_68;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_34 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_33), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Specs_119_119;
          MR_Word STATE_VARIABLE_Errors_121_121;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_64;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_66;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_68;

          {
            STATE_VARIABLE_Specs_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_119_119, 0) = ((MR_Box) (ItemSpec_34));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_119_119, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_68, &STATE_VARIABLE_Errors_121_121);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_64 = STATE_VARIABLE_SeqNumCounter_72_72;
          next_value_of_STATE_VARIABLE_Specs_0_66 = STATE_VARIABLE_Specs_119_119;
          next_value_of_STATE_VARIABLE_Errors_0_68 = STATE_VARIABLE_Errors_121_121;
          InitLookAhead_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_64 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_64;
          STATE_VARIABLE_Specs_0_66 = next_value_of_STATE_VARIABLE_Specs_0_66;
          STATE_VARIABLE_Errors_0_68 = next_value_of_STATE_VARIABLE_Errors_0_68;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOMVarSet_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_33, (MR_Integer) 0))));
          MR_Word IOMTerm_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_33, (MR_Integer) 1))));
          MR_Word Context_39;
          MR_Word STATE_VARIABLE_Specs_111_111;
          MR_Word STATE_VARIABLE_Errors_112_112;
          MR_Word _MissingStartSectionWarning_40;

          Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_36);
          parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(CurModuleName_22, Context_39, STATE_VARIABLE_MissingStartSectionWarning_0_59, &_MissingStartSectionWarning_40, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_68, &STATE_VARIABLE_Errors_112_112);
          parse_tree__parse_module__read_item_sequence_in_hdr_file_without_section_marker_19_p_0(Stream_20, Globals_21, CurModuleName_22, IOMVarSet_35, IOMTerm_36, FinalLookAhead_25, STATE_VARIABLE_VNInfo_0_60, STATE_VARIABLE_VNInfo_61, MaybeRawItemBlock_27, STATE_VARIABLE_SourceFileName_0_62, STATE_VARIABLE_SourceFileName_63, STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_SeqNumCounter_65, STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Specs_67, STATE_VARIABLE_Errors_112_112, STATE_VARIABLE_Errors_69);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_33, (MR_Integer) 2))));
          MR_Word IOMVarSet_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_33, (MR_Integer) 0))));
          MR_Word IOMTerm_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_33, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_41)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_74_74;
                MR_Word STATE_VARIABLE_Errors_75_75;
                MR_Word Context_130;
                MR_Word _MissingStartSectionWarning_129;

                Context_130 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_135);
                parse_tree__parse_module__generate_missing_start_section_warning_int_8_p_0(CurModuleName_22, Context_130, STATE_VARIABLE_MissingStartSectionWarning_0_59, &_MissingStartSectionWarning_129, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Errors_0_68, &STATE_VARIABLE_Errors_75_75);
                parse_tree__parse_module__read_item_sequence_in_hdr_file_without_section_marker_19_p_0(Stream_20, Globals_21, CurModuleName_22, IOMVarSet_134, IOMTerm_135, FinalLookAhead_25, STATE_VARIABLE_VNInfo_0_60, STATE_VARIABLE_VNInfo_61, MaybeRawItemBlock_27, STATE_VARIABLE_SourceFileName_0_62, STATE_VARIABLE_SourceFileName_63, STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_SeqNumCounter_65, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_67, STATE_VARIABLE_Errors_75_75, STATE_VARIABLE_Errors_69);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IOM_41, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MVN_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_41, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_VNInfo_82_82;
                    MR_Word STATE_VARIABLE_Specs_83_83;
                    MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_60;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_64;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_66;

                    parse_tree__parse_module__record_version_numbers_6_p_0(MVN_49, IOMTerm_135, STATE_VARIABLE_VNInfo_0_60, &STATE_VARIABLE_VNInfo_82_82, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_83_83);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_VNInfo_0_60 = STATE_VARIABLE_VNInfo_82_82;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_64 = STATE_VARIABLE_SeqNumCounter_72_72;
                    next_value_of_STATE_VARIABLE_Specs_0_66 = STATE_VARIABLE_Specs_83_83;
                    STATE_VARIABLE_VNInfo_0_60 = next_value_of_STATE_VARIABLE_VNInfo_0_60;
                    STATE_VARIABLE_SeqNumCounter_0_64 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_64;
                    STATE_VARIABLE_Specs_0_66 = next_value_of_STATE_VARIABLE_Specs_0_66;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_103_103 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_41, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_62 = STATE_VARIABLE_SourceFileName_103_103;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_64 = STATE_VARIABLE_SeqNumCounter_72_72;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_24 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_62 = next_value_of_STATE_VARIABLE_SourceFileName_0_62;
                    STATE_VARIABLE_SeqNumCounter_0_64 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_64;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_134));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_135));
                    }
                    *MaybeRawItemBlock_27 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_VNInfo_61 = STATE_VARIABLE_VNInfo_0_60;
                    *STATE_VARIABLE_SourceFileName_63 = STATE_VARIABLE_SourceFileName_0_62;
                    *STATE_VARIABLE_SeqNumCounter_65 = STATE_VARIABLE_SeqNumCounter_72_72;
                    *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
                    *STATE_VARIABLE_Errors_69 = STATE_VARIABLE_Errors_0_68;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SectionKind_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_41, (MR_Integer) 1))));
                    MR_Word SectionContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_41, (MR_Integer) 2))));
                    MR_Word InclsCord_45;
                    MR_Word AvailsCord_46;
                    MR_Word ItemsCord_47;
                    MR_Word RawItemBlock_48;
                    MR_Word Var_92;
                    MR_Word Var_93;
                    MR_Word Var_94;
                    MR_Word Var_100;
                    MR_Word Var_101;
                    MR_Word Var_102;

                    Var_92 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_93 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_94 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__read_item_sequence_23_p_0(Stream_20, Globals_21, CurModuleName_22, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_25, STATE_VARIABLE_VNInfo_0_60, STATE_VARIABLE_VNInfo_61, Var_92, &InclsCord_45, Var_93, &AvailsCord_46, Var_94, &ItemsCord_47, STATE_VARIABLE_SourceFileName_0_62, STATE_VARIABLE_SourceFileName_63, STATE_VARIABLE_SeqNumCounter_72_72, STATE_VARIABLE_SeqNumCounter_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67, STATE_VARIABLE_Errors_0_68, STATE_VARIABLE_Errors_69);
                    Var_100 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_45);
                    Var_101 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_46);
                    Var_102 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_47);
                    {
                      RawItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RawItemBlock_48, 0) = ((MR_Box) (SectionKind_42));
                      MR_hl_field(MR_mktag(0), RawItemBlock_48, 1) = ((MR_Box) (SectionContext_43));
                      MR_hl_field(MR_mktag(0), RawItemBlock_48, 2) = ((MR_Box) (Var_100));
                      MR_hl_field(MR_mktag(0), RawItemBlock_48, 3) = ((MR_Box) (Var_101));
                      MR_hl_field(MR_mktag(0), RawItemBlock_48, 4) = ((MR_Box) (Var_102));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeRawItemBlock_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RawItemBlock_48));
                    }
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
parse_tree__parse_module__read_item_sequence_in_hdr_file_without_section_marker_19_p_0(
  MR_Word Stream_20,
  MR_Word Globals_21,
  MR_Word CurModuleName_22,
  MR_Word IOMVarSet_23,
  MR_Word IOMTerm_24,
  MR_Word * FinalLookAhead_25,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word * MaybeRawItemBlock_27,
  MR_String STATE_VARIABLE_SourceFileName_0_42,
  MR_String * STATE_VARIABLE_SourceFileName_43,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_44,
  MR_Word * STATE_VARIABLE_SeqNumCounter_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47,
  MR_Word STATE_VARIABLE_Errors_0_48,
  MR_Word * STATE_VARIABLE_Errors_49)
{
  {
    MR_Word SectionContext_34;
    MR_Word ItemSeqInitLookAhead_35;
    MR_Word InclsCord_36;
    MR_Word AvailsCord_37;
    MR_Word ItemsCord_38;
    MR_Word RawItemBlock_39;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;

    SectionContext_34 = mercury__term__context_init_0_f_0();
    {
      ItemSeqInitLookAhead_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_35, 0) = ((MR_Box) (IOMVarSet_23));
      MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_35, 1) = ((MR_Box) (IOMTerm_24));
    }
    Var_53 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__parse_module__read_item_sequence_23_p_0(Stream_20, Globals_21, CurModuleName_22, ItemSeqInitLookAhead_35, FinalLookAhead_25, STATE_VARIABLE_VNInfo_0_40, STATE_VARIABLE_VNInfo_41, Var_53, &InclsCord_36, Var_54, &AvailsCord_37, Var_55, &ItemsCord_38, STATE_VARIABLE_SourceFileName_0_42, STATE_VARIABLE_SourceFileName_43, STATE_VARIABLE_SeqNumCounter_0_44, STATE_VARIABLE_SeqNumCounter_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47, STATE_VARIABLE_Errors_0_48, STATE_VARIABLE_Errors_49);
    Var_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_36);
    Var_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_37);
    Var_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_38);
    {
      RawItemBlock_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawItemBlock_39, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), RawItemBlock_39, 1) = ((MR_Box) (SectionContext_34));
      MR_hl_field(MR_mktag(0), RawItemBlock_39, 2) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), RawItemBlock_39, 3) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), RawItemBlock_39, 4) = ((MR_Box) (Var_63));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRawItemBlock_27 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RawItemBlock_39));
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
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (CurModuleName_9));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[94])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_3[7])));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Pieces_14));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_64));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Section_22;
    MR_Word Incls_24;
    MR_Word Avails_25;
    MR_Word Items_26;

    parse_tree__parse_module__separate_int_imp_items_7_p_0(ItemBlocks_9, &IntIncls0_16, &ImpIncls0_17, &IntAvails0_18, &ImpAvails0_19, &IntItems0_20, &ImpItems0_21);
    Section_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 0))));
    Incls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 2))));
    Avails_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 3))));
    Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_8, (MR_Integer) 4))));
    switch (Section_22) {
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

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__509__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__506__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_11_p_0(
  MR_Word OptFileKind_12,
  MR_Word Stream_13,
  MR_String SourceFileName0_14,
  MR_Word Globals_15,
  MR_Word DefaultModuleName_16,
  MR_Word DefaultExpectationContexts_17,
  MR_Word * ParseTree_18,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44)
{
  {
    MR_bool succeeded;
    MR_Word SeqNumCounter0_22;
    MR_Word ModuleDeclPresent_23;
    MR_String SourceFileName1_24;
    MR_Word SeqNumCounter1_25;
    MR_Word ModuleName_30;
    MR_Word ModuleNameContext_31;
    MR_Word Uses_32;
    MR_Word Items_33;
    MR_Word STATE_VARIABLE_Errors_48_48;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_Errors_52_52;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_48_48);
    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_22);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(Stream_13, DefaultModuleName_16, DefaultExpectationContexts_17, &ModuleDeclPresent_23, SourceFileName0_14, &SourceFileName1_24, SeqNumCounter0_22, &SeqNumCounter1_25, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Errors_48_48, &STATE_VARIABLE_Errors_52_52);
    switch (MR_tag((MR_Word) ModuleDeclPresent_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LookAhead_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_23, (MR_Integer) 0))));
          MR_Word LookAheadContext_27;

          if ((LookAhead_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              LookAheadContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LookAheadContext_27, 0) = ((MR_Box) (SourceFileName0_14));
              MR_hl_field(MR_mktag(0), LookAheadContext_27, 1) = ((MR_Box) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word LookAheadTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LookAhead_26, (MR_Integer) 1))));

            LookAheadContext_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LookAheadTerm_29);
          }
          parse_tree__parse_module__report_missing_module_start_5_p_0(LookAheadContext_27, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_43, STATE_VARIABLE_Errors_52_52, STATE_VARIABLE_Errors_44);
          ModuleName_30 = DefaultModuleName_16;
          ModuleNameContext_31 = mercury__term__context_init_0_f_0();
          Uses_32 = (MR_Word) ((MR_Unsigned) 0U);
          Items_33 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_23, (MR_Integer) 0))));
          ModuleNameContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_23, (MR_Integer) 1))));
          parse_tree__parse_module__report_wrong_module_start_7_p_0(ModuleNameContext_31, DefaultModuleName_16, ModuleName_30, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_43, STATE_VARIABLE_Errors_52_52, STATE_VARIABLE_Errors_44);
          Uses_32 = (MR_Word) ((MR_Unsigned) 0U);
          Items_33 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FinalLookAhead_34;
          MR_Word InclsCord_36;
          MR_Word AvailsCord_37;
          MR_Word ItemsCord_38;
          MR_String SourceFileName_39;
          MR_Word SeqNumCounter_40;
          MR_Word Avails_41;
          MR_Word Imports_42;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word STATE_VARIABLE_Specs_59_59;
          MR_Word STATE_VARIABLE_Errors_60_60;
          MR_Word Var_62;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_35;

          ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_23, (MR_Integer) 0))));
          ModuleNameContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_23, (MR_Integer) 1))));
          Var_56 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__read_item_sequence_23_p_0(Stream_13, Globals_15, ModuleName_30, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_34, (MR_Word) ((MR_Unsigned) 0U), &Var_35, Var_56, &InclsCord_36, Var_57, &AvailsCord_37, Var_58, &ItemsCord_38, SourceFileName1_24, &SourceFileName_39, SeqNumCounter1_25, &SeqNumCounter_40, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Errors_52_52, &STATE_VARIABLE_Errors_60_60);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (OptFileKind_12));
          }
          parse_tree__parse_module__check_for_unexpected_item_12_p_0(Stream_13, ModuleName_30, Var_62, FinalLookAhead_34, SourceFileName_39, SeqNumCounter_40, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_43, STATE_VARIABLE_Errors_60_60, STATE_VARIABLE_Errors_44);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_module__read_parse_tree_opt_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (InclsCord_36));
          }
          mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/11", (MR_String) "Incls != []");
          Avails_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_37);
          parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_41, &Imports_42, &Uses_32);
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_module__read_parse_tree_opt_11_p_0_2));
            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Imports_42));
            MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/11", (MR_String) "Imports != []");
          Items_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_38);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OptFileKind_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Uses_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Items_33));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__check_for_unexpected_item_12_p_0(
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_Word FinalLookAhead_16,
  MR_String SourceFileName_17,
  MR_Word SeqNumCounter0_18,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_Errors_0_34,
  MR_Word * STATE_VARIABLE_Errors_35)
{
  {
    MR_Word IOMResult_22;
    MR_Word _SeqNumCounter_23;

    parse_tree__parse_module__read_next_item_or_marker_9_p_0(Stream_13, FinalLookAhead_16, ModuleName_14, SourceFileName_17, &IOMResult_22, SeqNumCounter0_18, &_SeqNumCounter_23);
    switch (MR_tag((MR_Word) IOMResult_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          *STATE_VARIABLE_Errors_35 = STATE_VARIABLE_Errors_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_24 = (MR_Word) (MR_body((MR_Word) (IOMResult_22), (MR_Integer) 1));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_33 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemSpec_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_34, STATE_VARIABLE_Errors_35);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_22, (MR_Integer) 1))));
          MR_Word ItemSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_22, (MR_Integer) 2))));
          MR_Word ItemErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOMResult_22, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Specs_41_41;
          MR_Word STATE_VARIABLE_Errors_42_42;

          STATE_VARIABLE_Specs_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_27, STATE_VARIABLE_Specs_0_32);
          STATE_VARIABLE_Errors_42_42 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_34, ItemErrors_28);
          parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(FileKind_15, Term_26, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_33, STATE_VARIABLE_Errors_42_42, STATE_VARIABLE_Errors_35);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOMTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOMResult_22, (MR_Integer) 1))));

          parse_tree__parse_module__report_unexpected_term_at_end_6_p_0(FileKind_15, IOMTerm_30, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33, STATE_VARIABLE_Errors_0_34, STATE_VARIABLE_Errors_35);
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
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) (Error_12)), STATE_VARIABLE_Errors_0_19, STATE_VARIABLE_Errors_20);
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
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Expected_9));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Actual_10));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[91])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_14, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Msgs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (FirstContext_8));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Msgs_14));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Errors_0_18, STATE_VARIABLE_Errors_19);
  }
}

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_23_p_0(
  MR_Word Stream_24,
  MR_Word Globals_25,
  MR_Word ModuleName_26,
  MR_Word InitLookAhead_27,
  MR_Word * FinalLookAhead_28,
  MR_Word STATE_VARIABLE_VNInfo_0_40,
  MR_Word * STATE_VARIABLE_VNInfo_41,
  MR_Word STATE_VARIABLE_InclsCord_0_42,
  MR_Word * STATE_VARIABLE_InclsCord_43,
  MR_Word STATE_VARIABLE_AvailsCord_0_44,
  MR_Word * STATE_VARIABLE_AvailsCord_45,
  MR_Word STATE_VARIABLE_ItemsCord_0_46,
  MR_Word * STATE_VARIABLE_ItemsCord_47,
  MR_String STATE_VARIABLE_SourceFileName_0_48,
  MR_String * STATE_VARIABLE_SourceFileName_49,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_50,
  MR_Word * STATE_VARIABLE_SeqNumCounter_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_Errors_0_54,
  MR_Word * STATE_VARIABLE_Errors_55)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumItemsLeft_38;
    MR_Word MidLookAhead_39;
    MR_Word STATE_VARIABLE_VNInfo_59_59;
    MR_Word STATE_VARIABLE_InclsCord_60_60;
    MR_Word STATE_VARIABLE_AvailsCord_61_61;
    MR_Word STATE_VARIABLE_ItemsCord_62_62;
    MR_String STATE_VARIABLE_SourceFileName_63_63;
    MR_Word STATE_VARIABLE_SeqNumCounter_64_64;
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_Errors_66_66;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_item_sequence_inner_25_p_0(Stream_24, Globals_25, ModuleName_26, (MR_Integer) 1024, &NumItemsLeft_38, InitLookAhead_27, &MidLookAhead_39, STATE_VARIABLE_VNInfo_0_40, &STATE_VARIABLE_VNInfo_59_59, STATE_VARIABLE_InclsCord_0_42, &STATE_VARIABLE_InclsCord_60_60, STATE_VARIABLE_AvailsCord_0_44, &STATE_VARIABLE_AvailsCord_61_61, STATE_VARIABLE_ItemsCord_0_46, &STATE_VARIABLE_ItemsCord_62_62, STATE_VARIABLE_SourceFileName_0_48, &STATE_VARIABLE_SourceFileName_63_63, STATE_VARIABLE_SeqNumCounter_0_50, &STATE_VARIABLE_SeqNumCounter_64_64, STATE_VARIABLE_Specs_0_52, &STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Errors_0_54, &STATE_VARIABLE_Errors_66_66);
    succeeded = (NumItemsLeft_38 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word next_value_of_InitLookAhead_27 = MidLookAhead_39;
      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_40 = STATE_VARIABLE_VNInfo_59_59;
      MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_42 = STATE_VARIABLE_InclsCord_60_60;
      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_44 = STATE_VARIABLE_AvailsCord_61_61;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_46 = STATE_VARIABLE_ItemsCord_62_62;
      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_48 = STATE_VARIABLE_SourceFileName_63_63;
      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_50 = STATE_VARIABLE_SeqNumCounter_64_64;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_52 = STATE_VARIABLE_Specs_65_65;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_54 = STATE_VARIABLE_Errors_66_66;

      // direct tailcall eliminated
      ;
      InitLookAhead_27 = next_value_of_InitLookAhead_27;
      STATE_VARIABLE_VNInfo_0_40 = next_value_of_STATE_VARIABLE_VNInfo_0_40;
      STATE_VARIABLE_InclsCord_0_42 = next_value_of_STATE_VARIABLE_InclsCord_0_42;
      STATE_VARIABLE_AvailsCord_0_44 = next_value_of_STATE_VARIABLE_AvailsCord_0_44;
      STATE_VARIABLE_ItemsCord_0_46 = next_value_of_STATE_VARIABLE_ItemsCord_0_46;
      STATE_VARIABLE_SourceFileName_0_48 = next_value_of_STATE_VARIABLE_SourceFileName_0_48;
      STATE_VARIABLE_SeqNumCounter_0_50 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_50;
      STATE_VARIABLE_Specs_0_52 = next_value_of_STATE_VARIABLE_Specs_0_52;
      STATE_VARIABLE_Errors_0_54 = next_value_of_STATE_VARIABLE_Errors_0_54;
      continue;
    }
    else
    {
      *FinalLookAhead_28 = MidLookAhead_39;
      *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_66_66;
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_65_65;
      *STATE_VARIABLE_SeqNumCounter_51 = STATE_VARIABLE_SeqNumCounter_64_64;
      *STATE_VARIABLE_SourceFileName_49 = STATE_VARIABLE_SourceFileName_63_63;
      *STATE_VARIABLE_ItemsCord_47 = STATE_VARIABLE_ItemsCord_62_62;
      *STATE_VARIABLE_AvailsCord_45 = STATE_VARIABLE_AvailsCord_61_61;
      *STATE_VARIABLE_InclsCord_43 = STATE_VARIABLE_InclsCord_60_60;
      *STATE_VARIABLE_VNInfo_41 = STATE_VARIABLE_VNInfo_59_59;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_item_sequence_inner_25_p_0(
  MR_Word Stream_26,
  MR_Word Globals_27,
  MR_Word ModuleName_28,
  MR_Integer STATE_VARIABLE_NumItemsLeft_0_69,
  MR_Integer * STATE_VARIABLE_NumItemsLeft_70,
  MR_Word InitLookAhead_30,
  MR_Word * FinalLookAhead_31,
  MR_Word STATE_VARIABLE_VNInfo_0_71,
  MR_Word * STATE_VARIABLE_VNInfo_72,
  MR_Word STATE_VARIABLE_InclsCord_0_73,
  MR_Word * STATE_VARIABLE_InclsCord_74,
  MR_Word STATE_VARIABLE_AvailsCord_0_75,
  MR_Word * STATE_VARIABLE_AvailsCord_76,
  MR_Word STATE_VARIABLE_ItemsCord_0_77,
  MR_Word * STATE_VARIABLE_ItemsCord_78,
  MR_String STATE_VARIABLE_SourceFileName_0_79,
  MR_String * STATE_VARIABLE_SourceFileName_80,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_81,
  MR_Word * STATE_VARIABLE_SeqNumCounter_82,
  MR_Word STATE_VARIABLE_Specs_0_83,
  MR_Word * STATE_VARIABLE_Specs_84,
  MR_Word STATE_VARIABLE_Errors_0_85,
  MR_Word * STATE_VARIABLE_Errors_86)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumItemsLeft_0_69 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *FinalLookAhead_31 = InitLookAhead_30;
      *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
      *STATE_VARIABLE_Specs_84 = STATE_VARIABLE_Specs_0_83;
      *STATE_VARIABLE_SeqNumCounter_82 = STATE_VARIABLE_SeqNumCounter_0_81;
      *STATE_VARIABLE_SourceFileName_80 = STATE_VARIABLE_SourceFileName_0_79;
      *STATE_VARIABLE_ItemsCord_78 = STATE_VARIABLE_ItemsCord_0_77;
      *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
      *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
      *STATE_VARIABLE_VNInfo_72 = STATE_VARIABLE_VNInfo_0_71;
      *STATE_VARIABLE_NumItemsLeft_70 = STATE_VARIABLE_NumItemsLeft_0_69;
    }
    else
    {
      MR_Word ReadIOMResult_41;
      MR_Word STATE_VARIABLE_SeqNumCounter_90_90;

      parse_tree__parse_module__read_next_item_or_marker_9_p_0(Stream_26, InitLookAhead_30, ModuleName_28, STATE_VARIABLE_SourceFileName_0_79, &ReadIOMResult_41, STATE_VARIABLE_SeqNumCounter_0_81, &STATE_VARIABLE_SeqNumCounter_90_90);
      switch (MR_tag((MR_Word) ReadIOMResult_41)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *FinalLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_NumItemsLeft_70 = STATE_VARIABLE_NumItemsLeft_0_69;
            *STATE_VARIABLE_VNInfo_72 = STATE_VARIABLE_VNInfo_0_71;
            *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
            *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
            *STATE_VARIABLE_ItemsCord_78 = STATE_VARIABLE_ItemsCord_0_77;
            *STATE_VARIABLE_SourceFileName_80 = STATE_VARIABLE_SourceFileName_0_79;
            *STATE_VARIABLE_SeqNumCounter_82 = STATE_VARIABLE_SeqNumCounter_90_90;
            *STATE_VARIABLE_Specs_84 = STATE_VARIABLE_Specs_0_83;
            *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemSpec_42 = (MR_Word) (MR_body((MR_Word) (ReadIOMResult_41), (MR_Integer) 1));
            MR_Word ItemSpecs_170;
            MR_Word ItemErrors_171;
            MR_Word STATE_VARIABLE_Specs_130_172;
            MR_Word STATE_VARIABLE_Errors_131_173;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_83;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;

            {
              ItemSpecs_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ItemSpecs_170, 0) = ((MR_Box) (ItemSpec_42));
              MR_hl_field(MR_mktag(1), ItemSpecs_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ItemErrors_171 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
            STATE_VARIABLE_Specs_130_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_170, STATE_VARIABLE_Specs_0_83);
            STATE_VARIABLE_Errors_131_173 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_85, ItemErrors_171);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
            next_value_of_STATE_VARIABLE_Specs_0_83 = STATE_VARIABLE_Specs_130_172;
            next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_131_173;
            InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
            STATE_VARIABLE_Specs_0_83 = next_value_of_STATE_VARIABLE_Specs_0_83;
            STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemSpecs_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_41, (MR_Integer) 2))));
            MR_Word ItemErrors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_41, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_Specs_130_130;
            MR_Word STATE_VARIABLE_Errors_131_131;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_83;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;

            STATE_VARIABLE_Specs_130_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_43, STATE_VARIABLE_Specs_0_83);
            STATE_VARIABLE_Errors_131_131 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_85, ItemErrors_44);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
            next_value_of_STATE_VARIABLE_Specs_0_83 = STATE_VARIABLE_Specs_130_130;
            next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_131_131;
            InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
            STATE_VARIABLE_Specs_0_83 = next_value_of_STATE_VARIABLE_Specs_0_83;
            STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOMVarSet_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_41, (MR_Integer) 0))));
            MR_Word IOMTerm_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_41, (MR_Integer) 1))));
            MR_Word IOM_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_41, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_NumItemsLeft_92_92 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumItemsLeft_0_69 - (MR_Unsigned) (MR_Integer) 1);

            switch (MR_tag((MR_Word) IOM_49)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Item0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOM_49, (MR_Integer) 0))));
                  MR_Word Item_68;
                  MR_Word STATE_VARIABLE_Specs_94_94;
                  MR_Word STATE_VARIABLE_Errors_95_95;
                  MR_Word STATE_VARIABLE_ItemsCord_96_96;
                  MR_Word ItemNothingInfo_67;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                  MR_Word next_value_of_STATE_VARIABLE_Specs_0_83;
                  MR_Word next_value_of_STATE_VARIABLE_Errors_0_85;

                  succeeded = ((((MR_tag((MR_Word) Item0_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item0_66, (MR_Integer) 0))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ItemNothingInfo_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_66, (MR_Integer) 1))));
                    parse_tree__parse_module__process_item_nothing_warning_7_p_0(Globals_27, ItemNothingInfo_67, &Item_68, STATE_VARIABLE_Specs_0_83, &STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Errors_0_85, &STATE_VARIABLE_Errors_95_95);
                  }
                  else
                  {
                    Item_68 = Item0_66;
                    STATE_VARIABLE_Errors_95_95 = STATE_VARIABLE_Errors_0_85;
                    STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_83;
                  }
                  STATE_VARIABLE_ItemsCord_96_96 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_77, ((MR_Box) (Item_68)));
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_69 = STATE_VARIABLE_NumItemsLeft_92_92;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_77 = STATE_VARIABLE_ItemsCord_96_96;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
                  next_value_of_STATE_VARIABLE_Specs_0_83 = STATE_VARIABLE_Specs_94_94;
                  next_value_of_STATE_VARIABLE_Errors_0_85 = STATE_VARIABLE_Errors_95_95;
                  STATE_VARIABLE_NumItemsLeft_0_69 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_ItemsCord_0_77 = next_value_of_STATE_VARIABLE_ItemsCord_0_77;
                  STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                  STATE_VARIABLE_Specs_0_83 = next_value_of_STATE_VARIABLE_Specs_0_83;
                  STATE_VARIABLE_Errors_0_85 = next_value_of_STATE_VARIABLE_Errors_0_85;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Incls_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_49, (MR_Integer) 0))));
                  MR_Word HeadIncl_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_60, (MR_Integer) 0))));
                  MR_Word TailIncls_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_60, (MR_Integer) 1))));
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word STATE_VARIABLE_InclsCord_100_160;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_73;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;

                  {
                    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (HeadIncl_61));
                    MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (TailIncls_62));
                  }
                  Var_101 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_102);
                  STATE_VARIABLE_InclsCord_100_160 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_73, Var_101);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_69 = STATE_VARIABLE_NumItemsLeft_92_92;
                  next_value_of_STATE_VARIABLE_InclsCord_0_73 = STATE_VARIABLE_InclsCord_100_160;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
                  STATE_VARIABLE_NumItemsLeft_0_69 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_InclsCord_0_73 = next_value_of_STATE_VARIABLE_InclsCord_0_73;
                  STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Avails_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOM_49, (MR_Integer) 0))));
                  MR_Word HeadAvail_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_63, (MR_Integer) 0))));
                  MR_Word TailAvails_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_63, (MR_Integer) 1))));
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word STATE_VARIABLE_AvailsCord_97_152;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_75;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;

                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (HeadAvail_64));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (TailAvails_65));
                  }
                  Var_98 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_99);
                  STATE_VARIABLE_AvailsCord_97_152 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_75, Var_98);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_69 = STATE_VARIABLE_NumItemsLeft_92_92;
                  next_value_of_STATE_VARIABLE_AvailsCord_0_75 = STATE_VARIABLE_AvailsCord_97_152;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
                  STATE_VARIABLE_NumItemsLeft_0_69 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                  InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AvailsCord_0_75 = next_value_of_STATE_VARIABLE_AvailsCord_0_75;
                  STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IOM_49, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word MVN_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_49, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_VNInfo_115_115;
                      MR_Word STATE_VARIABLE_Specs_116_116;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_71;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_83;

                      parse_tree__parse_module__record_version_numbers_6_p_0(MVN_59, IOMTerm_48, STATE_VARIABLE_VNInfo_0_71, &STATE_VARIABLE_VNInfo_115_115, STATE_VARIABLE_Specs_0_83, &STATE_VARIABLE_Specs_116_116);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_69 = STATE_VARIABLE_NumItemsLeft_92_92;
                      next_value_of_STATE_VARIABLE_VNInfo_0_71 = STATE_VARIABLE_VNInfo_115_115;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;
                      next_value_of_STATE_VARIABLE_Specs_0_83 = STATE_VARIABLE_Specs_116_116;
                      STATE_VARIABLE_NumItemsLeft_0_69 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                      InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_VNInfo_0_71 = next_value_of_STATE_VARIABLE_VNInfo_0_71;
                      STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                      STATE_VARIABLE_Specs_0_83 = next_value_of_STATE_VARIABLE_Specs_0_83;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_103_168 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_49, (MR_Integer) 1))));
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_69 = STATE_VARIABLE_NumItemsLeft_92_92;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_79 = STATE_VARIABLE_SourceFileName_103_168;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_81 = STATE_VARIABLE_SeqNumCounter_90_90;

                      // direct tailcall eliminated
                      ;
                      STATE_VARIABLE_NumItemsLeft_0_69 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_69;
                      InitLookAhead_30 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_SourceFileName_0_79 = next_value_of_STATE_VARIABLE_SourceFileName_0_79;
                      STATE_VARIABLE_SeqNumCounter_0_81 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_81;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *FinalLookAhead_31 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_47));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_48));
                      }
                      *STATE_VARIABLE_NumItemsLeft_70 = STATE_VARIABLE_NumItemsLeft_92_92;
                      *STATE_VARIABLE_VNInfo_72 = STATE_VARIABLE_VNInfo_0_71;
                      *STATE_VARIABLE_InclsCord_74 = STATE_VARIABLE_InclsCord_0_73;
                      *STATE_VARIABLE_AvailsCord_76 = STATE_VARIABLE_AvailsCord_0_75;
                      *STATE_VARIABLE_ItemsCord_78 = STATE_VARIABLE_ItemsCord_0_77;
                      *STATE_VARIABLE_SourceFileName_80 = STATE_VARIABLE_SourceFileName_0_79;
                      *STATE_VARIABLE_SeqNumCounter_82 = STATE_VARIABLE_SeqNumCounter_90_90;
                      *STATE_VARIABLE_Specs_84 = STATE_VARIABLE_Specs_0_83;
                      *STATE_VARIABLE_Errors_86 = STATE_VARIABLE_Errors_0_85;
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
parse_tree__parse_module__read_next_item_or_marker_9_p_0(
  MR_Word Stream_10,
  MR_Word InitLookAhead_11,
  MR_Word ModuleName_12,
  MR_String SourceFileName_13,
  MR_Word * ReadIOMResult_14,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_20,
  MR_Word * STATE_VARIABLE_SeqNumCounter_21)
{
  if ((InitLookAhead_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadTermResult_17;

    mercury__parser__read_term_filename_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Stream_10, SourceFileName_13, &ReadTermResult_17);
    switch (MR_tag((MR_Word) ReadTermResult_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ReadIOMResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_21 = STATE_VARIABLE_SeqNumCounter_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ErrorMsg_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTermResult_17, (MR_Integer) 0))));
          MR_Integer LineNumber_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ReadTermResult_17, (MR_Integer) 1))));
          MR_Word Pieces_52;
          MR_Word Context_53;
          MR_Word Spec_54;
          MR_Word Var_58;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ErrorMsg_50));
          }
          {
            Pieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_52, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Pieces_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
          }
          Context_53 = mercury__term__context_init_2_f_0(SourceFileName_13, LineNumber_51);
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_52));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Context_53));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_54, 2) = ((MR_Box) (Var_67));
          }
          *ReadIOMResult_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Spec_54)));
          *STATE_VARIABLE_SeqNumCounter_21 = STATE_VARIABLE_SeqNumCounter_0_20;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_17, (MR_Integer) 0))));
          MR_Word Term_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_17, (MR_Integer) 1))));
          MR_Integer SeqNum_80;
          MR_Word MaybeItemOrMarker_81;

          mercury__counter__allocate_3_p_0(&SeqNum_80, STATE_VARIABLE_SeqNumCounter_0_20, STATE_VARIABLE_SeqNumCounter_21);
          parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_12, VarSet_55, Term_56, SeqNum_80, &MaybeItemOrMarker_81);
          if (((MR_tag((MR_Word) MaybeItemOrMarker_81)) == (MR_Integer) 0))
          {
            MR_Word Specs_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_81, (MR_Integer) 0))));
            MR_Word Var_85;

            Var_85 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_14 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_55));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_56));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_83));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_85));
            }
          }
          else
          {
            MR_Word ItemOrMarker_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_81, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarSet_55));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term_56));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_82));
            }
          }
        }
        break;
    }
  }
  else
  {
    MR_Word LookAheadVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_11, (MR_Integer) 0))));
    MR_Word LookAheadTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_11, (MR_Integer) 1))));
    MR_Integer SeqNum_35;
    MR_Word MaybeItemOrMarker_36;

    mercury__counter__allocate_3_p_0(&SeqNum_35, STATE_VARIABLE_SeqNumCounter_0_20, STATE_VARIABLE_SeqNumCounter_21);
    parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_12, LookAheadVarSet_18, LookAheadTerm_19, SeqNum_35, &MaybeItemOrMarker_36);
    if (((MR_tag((MR_Word) MaybeItemOrMarker_36)) == (MR_Integer) 0))
    {
      MR_Word Specs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_36, (MR_Integer) 0))));
      MR_Word Var_40;

      Var_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *ReadIOMResult_14 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LookAheadVarSet_18));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LookAheadTerm_19));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_38));
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_40));
      }
    }
    else
    {
      MR_Word ItemOrMarker_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_36, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *ReadIOMResult_14 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (LookAheadVarSet_18));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LookAheadTerm_19));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_37));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__process_item_nothing_warning_7_p_0(
  MR_Word Globals_8,
  MR_Word ItemNothingInfo_9,
  MR_Word * NoWarnItem_10,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_Errors_0_28,
  MR_Word * STATE_VARIABLE_Errors_29)
{
  {
    MR_Word MaybeWarning_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNothingInfo_9, (MR_Integer) 0))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNothingInfo_9, (MR_Integer) 1))));
    MR_Integer NothingSeqNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemNothingInfo_9, (MR_Integer) 2))));

    if ((MaybeWarning_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *NoWarnItem_10 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemNothingInfo_9));
      }
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      *STATE_VARIABLE_Errors_29 = STATE_VARIABLE_Errors_0_28;
    }
    else
    {
      MR_Word Warning_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarning_13, (MR_Integer) 0))));
      MR_Word MaybeOption_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_16, (MR_Integer) 0))));
      MR_String Msg_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Warning_16, (MR_Integer) 1))));
      MR_Word Term_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_16, (MR_Integer) 2))));
      MR_Word Warn_21;
      MR_Word NoWarnItemNothingInfo_25;

      if ((MaybeOption_17 == (MR_Word) ((MR_Unsigned) 0U)))
        Warn_21 = (MR_Integer) 1;
      else
      {
        MR_Word Option_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOption_17, (MR_Integer) 0))));

        libs__globals__lookup_bool_option_3_p_0(Globals_8, Option_20, &Warn_21);
      }
      switch (Warn_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
            *STATE_VARIABLE_Errors_29 = STATE_VARIABLE_Errors_0_28;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pieces_22;
            MR_Word Spec_23;
            MR_Word Halt_24;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;

            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Msg_18));
            }
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])));
            }
            {
              Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[90])));
              MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_32));
            }
            Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_19);
            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Pieces_22));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_42));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 3, &Halt_24);
            switch (Halt_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Errors_29 = STATE_VARIABLE_Errors_0_28;
                break;
              case (MR_Integer) 1:
                {
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 10)), STATE_VARIABLE_Errors_0_28, STATE_VARIABLE_Errors_29);
                }
                break;
            }
          }
          break;
      }
      {
        NoWarnItemNothingInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NoWarnItemNothingInfo_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoWarnItemNothingInfo_25, 1) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), NoWarnItemNothingInfo_25, 2) = ((MR_Box) (NothingSeqNum_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *NoWarnItem_10 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NoWarnItemNothingInfo_25));
      }
    }
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
              Msg_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_67, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), Msg_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[89])));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_67));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_68, 2) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[88])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Msg_13));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_62));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OptFileKind_4));
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntFileKind_4));
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *SubMsg_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[87])));
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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_18;
    MR_Word conv2_STATE_VARIABLE_Specs_43;
    MR_Word conv1_STATE_VARIABLE_Errors_44;

    parse_tree__parse_module__read_parse_tree_opt_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv3_ParseTree_18, &conv2_STATE_VARIABLE_Specs_43, &conv1_STATE_VARIABLE_Errors_44);
    *wrapper_arg_6 = ((MR_Box) (conv3_ParseTree_18));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_43));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_44));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 662, &Dirs_20);
    libs__file_util__search_for_file_and_stream_5_p_0(Dirs_20, FileName_13, &MaybeFileNameAndStream_21);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_opt_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OptFileKind_11));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_opt_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_18;
    MR_Word conv2_STATE_VARIABLE_Specs_45;
    MR_Word conv1_STATE_VARIABLE_Errors_46;

    parse_tree__parse_module__read_parse_tree_int_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv3_ParseTree_18, &conv2_STATE_VARIABLE_Specs_45, &conv1_STATE_VARIABLE_Errors_46);
    *wrapper_arg_6 = ((MR_Box) (conv3_ParseTree_18));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_45));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_46));
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
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_int_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (IntFileKind_13));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_module__actually_read_module_int_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ParseTree_16;
    MR_Word conv2_STATE_VARIABLE_Specs_32;
    MR_Word conv1_STATE_VARIABLE_Errors_33;

    parse_tree__parse_module__read_parse_tree_src_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv3_ParseTree_16, &conv2_STATE_VARIABLE_Specs_32, &conv1_STATE_VARIABLE_Errors_33);
    *wrapper_arg_6 = ((MR_Box) (conv3_ParseTree_16));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_32));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_33));
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

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_12, DefaultModuleName_13, DefaultExpectationContexts_14, MaybeFileNameAndStream_15, ReadModuleAndTimestamps_16, MaybeModuleTimestampRes_17, (MR_Word) (&parse_tree__parse_module_scalar_common_5[1]), (MR_Word) (&parse_tree__parse_module_scalar_common_5[2]), &conv4_ParseTree_18, Specs_19, Errors_20);
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
      MR_String ErrorMsg_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      MR_String Progname_35;
      MR_Word Pieces_36;
      MR_Word Spec_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_58;
      MR_Word Var_59;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

      func_0(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
      *MaybeModuleTimestampRes_19 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_35);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (Progname_35));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (ErrorMsg_34));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[5])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[84])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_36));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_54, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_54, 3) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_53));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word FileStream_27;
      MR_String FileStreamName_28;
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      MR_Word OldTimestamp_33;
      MR_Word Var_72;
      MR_Word Var_78;

      FileStream_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
      mercury__io__input_stream_name_4_p_0(FileStream_27, &FileStreamName_28);
      if (((MR_tag((MR_Word) ReadModuleAndTimestamps_18)) == (MR_Integer) 0))
      {
        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadModuleAndTimestamps_18, (MR_Integer) 0))));

        switch (Var_95) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TimestampResult_30;

              mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_30);
              if (((MR_tag((MR_Word) TimestampResult_30)) == (MR_Integer) 1))
              {
                MR_Word Var_69 = (MR_Word) (TimestampResult_30);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
                }
              }
              else
              {
                MR_Word Timestamp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_30, (MR_Integer) 0))));
                MR_Word Var_70;
                MR_Word Var_71;

                Var_71 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_31);
                {
                  Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_70));
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
        MR_Word TimestampResult_89;

        mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_89);
        if (((MR_tag((MR_Word) TimestampResult_89)) == (MR_Integer) 1))
        {
          MR_Word Var_80 = (MR_Word) (TimestampResult_89);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
          }
        }
        else
        {
          MR_Word Timestamp_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_89, (MR_Integer) 0))));
          MR_Word Var_82;
          MR_Word Var_83;

          Var_83 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_81);
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_82));
          }
        }
      }
      succeeded = ((MR_tag((MR_Word) ReadModuleAndTimestamps_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        OldTimestamp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadModuleAndTimestamps_18, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) *MaybeModuleTimestampRes_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *MaybeModuleTimestampRes_19, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
            succeeded = libs__timestamp____Unify____timestamp_0_0(OldTimestamp_33, Var_78);
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
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ReadParseTree_21, (MR_Integer) 1))));
        MR_Box conv5_Specs_23;
        MR_Box conv4_Errors_24;
        MR_Box conv3_STATE_VARIABLE_IO_73_73;

        func_2(((MR_Box) (ReadParseTree_21)), ((MR_Box) (FileStream_27)), ((MR_Box) (FileStreamName_28)), ((MR_Box) (Globals_14)), ((MR_Box) (DefaultModuleName_15)), ((MR_Box) (DefaultExpectationContexts_16)), ParseTree_22, &conv5_Specs_23, &conv4_Errors_24, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_73_73);
        *Specs_23 = ((MR_Word) (conv5_Specs_23));
        *Errors_24 = ((MR_Word) (conv4_Errors_24));
      }
      mercury__io__close_input_3_p_0(FileStream_27);
    }
  }
}

void MR_CALL 
parse_tree__parse_module__peek_at_file_8_p_0(
  MR_Word Stream_9,
  MR_Word DefaultModuleName_10,
  MR_Word DefaultExpectationContexts_11,
  MR_String SourceFileName0_12,
  MR_Word * ModuleName_13,
  MR_Word * Specs_14)
{
  {
    MR_Word SeqNumCounter0_16;
    MR_Word ModuleDeclPresent_17;
    MR_Word Var_28;
    MR_String _SourceFileName_18;
    MR_Word _SeqNumCounter_19;
    MR_Word _Errors_20;

    mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_16);
    Var_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(Stream_9, DefaultModuleName_10, DefaultExpectationContexts_11, &ModuleDeclPresent_17, SourceFileName0_12, &_SourceFileName_18, SeqNumCounter0_16, &_SeqNumCounter_19, (MR_Word) ((MR_Unsigned) 0U), Specs_14, Var_28, &_Errors_20);
    switch (MR_tag((MR_Word) ModuleDeclPresent_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ModuleName_13 = DefaultModuleName_10;
        break;
      case (MR_Integer) 1:
        *ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_17, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        *ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_17, (MR_Integer) 0))));
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_50_93_95_48_15_p_0(
  MR_Word Stream_16,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ModuleDeclPresent_20,
  MR_String STATE_VARIABLE_SourceFileName_0_52,
  MR_String * STATE_VARIABLE_SourceFileName_53,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_54,
  MR_Word * STATE_VARIABLE_SeqNumCounter_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_Errors_0_58,
  MR_Word * STATE_VARIABLE_Errors_59)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstReadTerm_26;
    MR_Word MaybeFirstIOM_27;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_SeqNumCounter_64_64;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__parser__read_term_filename_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Stream_16, STATE_VARIABLE_SourceFileName_0_52, &FirstReadTerm_26);
    Var_63 = parse_tree__parse_sym_name__root_module_name_0_f_0();
    parse_tree__parse_module__read_term_to_iom_result_6_p_0(Var_63, STATE_VARIABLE_SourceFileName_0_52, FirstReadTerm_26, STATE_VARIABLE_SeqNumCounter_0_54, &STATE_VARIABLE_SeqNumCounter_64_64, &MaybeFirstIOM_27);
    switch (MR_tag((MR_Word) MaybeFirstIOM_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FirstContext_89;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_52, (MR_Integer) 1, &FirstContext_89);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_89, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
          *ModuleDeclPresent_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_3[2]);
          *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
          *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstContext_89;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_52, (MR_Integer) 1, &FirstContext_89);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_89, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
          *ModuleDeclPresent_20 = (MR_Word) (&parse_tree__parse_module_scalar_common_3[2]);
          *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
          *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LookAhead_50;
          MR_Word FirstVarSet_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_27, (MR_Integer) 0))));
          MR_Word FirstTerm_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_27, (MR_Integer) 1))));
          MR_Word FirstContext_88;

          FirstContext_88 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_87);
          parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_88, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
          {
            LookAhead_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LookAhead_50, 0) = ((MR_Box) (FirstVarSet_86));
            MR_hl_field(MR_mktag(1), LookAhead_50, 1) = ((MR_Box) (FirstTerm_87));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_20 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LookAhead_50));
          }
          *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
          *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FirstVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_27, (MR_Integer) 0))));
          MR_Word FirstTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_27, (MR_Integer) 1))));
          MR_Word FirstIOM_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_27, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) FirstIOM_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word FirstContext_46;
                MR_Word FirstLookAhead_47;

                FirstContext_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_29);
                parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_46, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
                {
                  FirstLookAhead_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_47, 0) = ((MR_Box) (FirstVarSet_28));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_47, 1) = ((MR_Box) (FirstTerm_29));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *ModuleDeclPresent_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_47));
                }
                *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
                *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstIOM_30, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                  {
                    MR_Word FirstContext_46;
                    MR_Word FirstLookAhead_47;

                    FirstContext_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_29);
                    parse_tree__parse_module__report_missing_module_start_5_p_0(FirstContext_46, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
                    {
                      FirstLookAhead_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_47, 0) = ((MR_Box) (FirstVarSet_28));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_47, 1) = ((MR_Box) (FirstTerm_29));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *ModuleDeclPresent_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_47));
                    }
                    *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
                    *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_77_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), FirstIOM_30, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_52 = STATE_VARIABLE_SourceFileName_77_77;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_54 = STATE_VARIABLE_SeqNumCounter_64_64;

                    // direct tailcall eliminated
                    ;
                    STATE_VARIABLE_SourceFileName_0_52 = next_value_of_STATE_VARIABLE_SourceFileName_0_52;
                    STATE_VARIABLE_SeqNumCounter_0_54 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_54;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word StartModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_30, (MR_Integer) 1))));
                    MR_Word ModuleNameContext_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_30, (MR_Integer) 2))));

                    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(DefaultModuleName_18, StartModuleName_31);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_20 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (StartModuleName_31));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_32));
                      }
                      *STATE_VARIABLE_Errors_59 = STATE_VARIABLE_Errors_0_58;
                      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
                    }
                    else
                    {
                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(StartModuleName_31, DefaultModuleName_18);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_20 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (DefaultModuleName_18));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_32));
                        }
                        *STATE_VARIABLE_Errors_59 = STATE_VARIABLE_Errors_0_58;
                        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
                      }
                      else
                      {
                        MR_Word NameSpecs_35;
                        MR_Word Var_73;

                        {
                          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ModuleNameContext_32));
                        }
                        parse_tree__parse_module__check_module_has_expected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_52, DefaultModuleName_18, DefaultExpectationContexts_19, StartModuleName_31, Var_73, &NameSpecs_35);
                        *STATE_VARIABLE_Specs_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_35, STATE_VARIABLE_Specs_0_56);
                        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Errors_0_58, STATE_VARIABLE_Errors_59);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ModuleDeclPresent_20 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartModuleName_31));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_32));
                        }
                      }
                    }
                    *STATE_VARIABLE_SourceFileName_53 = STATE_VARIABLE_SourceFileName_0_52;
                    *STATE_VARIABLE_SeqNumCounter_55 = STATE_VARIABLE_SeqNumCounter_64_64;
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
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (FirstContext_6));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[83])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ErrorMsg_12));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
        }
        Context_15 = mercury__term__context_init_2_f_0(FileName_8, LineNumber_13);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_14));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
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
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
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
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
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

      succeeded = ((MR_tag((MR_Word) MaybeActualContext_11)) == (MR_Integer) 1);
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
        Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (FileName_7));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ExpectedName_8));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ActualName_10));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[7])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[82])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
      }
      {
        MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[78])));
        MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (MainPieces_15));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainComponent_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainComponent_17, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), MainComponent_17, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MainComponent_17));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainMsg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainMsg_18, 0) = ((MR_Box) (MaybeContext_14));
        MR_hl_field(MR_mktag(1), MainMsg_18, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), MainMsg_18, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), MainMsg_18, 3) = ((MR_Box) (Var_60));
      }
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ExpectationContexts_9, &SortedExpectationContexts0_19);
      Var_62 = mercury__term__context_init_0_f_0();
      mercury__list__delete_all_3_p_1((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedExpectationContexts0_19, ((MR_Box) (Var_62)), &SortedExpectationContexts_20);
      mercury__list__map_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__parse_module_scalar_common_5[0]), SortedExpectationContexts_20, &SubMsgs_21);
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MainMsg_18));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (SubMsgs_21));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
