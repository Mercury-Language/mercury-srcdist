/*
** Automatically generated from `parse_module.m'
** by the Mercury compiler,
** version rotd-2022-01-27
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
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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

static const MR_EnumFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_may_change_source_file_name_0[2];

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

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[3];

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_0[3];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[4];

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_1[4];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_2[2];

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_2;

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_maybe_module_decl_present_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0[3];

static const MR_Integer parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0[3];

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

static const MR_VA_PseudoTypeInfo_Struct11 parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

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
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__659__1_2_p_0(
  MR_Word Imports_42,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__656__1_1_p_0(
  MR_Word InclsCord_33);

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__do_actually_read_module__572__1_2_p_0(
  MR_Integer NumCodeUnits_36,
  MR_Integer FileStringLen_37);

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
  MR_String STATE_VARIABLE_SourceFileName_0_40,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word STATE_VARIABLE_LinePosn_0_42,
  MR_Word Globals_17,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_40,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word STATE_VARIABLE_LinePosn_0_42,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(
  MR_String FileString_24,
  MR_Integer FileStringLen_25,
  MR_Word CurModuleName_27,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_90,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_91,
  MR_Word * STATE_VARIABLE_ModuleComponents_92,
  MR_String STATE_VARIABLE_SourceFileName_0_93,
  MR_String * STATE_VARIABLE_SourceFileName_94,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_95,
  MR_Word * STATE_VARIABLE_SeqNumCounter_96,
  MR_Word STATE_VARIABLE_Specs_0_97,
  MR_Word * STATE_VARIABLE_Specs_98,
  MR_Word STATE_VARIABLE_Errors_0_99,
  MR_Word * STATE_VARIABLE_Errors_100,
  MR_Word STATE_VARIABLE_LineContext_0_101,
  MR_Word * STATE_VARIABLE_LineContext_102,
  MR_Word STATE_VARIABLE_LinePosn_0_103,
  MR_Word * STATE_VARIABLE_LinePosn_104);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(
  MR_String FileString_25,
  MR_Integer FileStringLen_26,
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
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word * STATE_VARIABLE_Errors_58);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word * STATE_VARIABLE_Errors_58);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer FileStringLen_21,
  MR_Word CurModuleName_23,
  MR_String SourceFileName_24,
  MR_String ExpectedSectionKindStr_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word * MaybeRawItemBlock_28,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_71,
  MR_Word * STATE_VARIABLE_SeqNumCounter_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74,
  MR_Word STATE_VARIABLE_Errors_0_75,
  MR_Word * STATE_VARIABLE_Errors_76,
  MR_Word STATE_VARIABLE_LineContext_0_77,
  MR_Word * STATE_VARIABLE_LineContext_78,
  MR_Word STATE_VARIABLE_LinePosn_0_79,
  MR_Word * STATE_VARIABLE_LinePosn_80);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_121_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_105_116_101_109_95_95_91_51_93_95_48_18_p_0(
  MR_String FileString_19,
  MR_Integer FileStringLen_20,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word * MaybeVersionNumbers_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_57,
  MR_Word * STATE_VARIABLE_SeqNumCounter_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60,
  MR_Word STATE_VARIABLE_Errors_0_61,
  MR_Word * STATE_VARIABLE_Errors_62,
  MR_Word STATE_VARIABLE_LineContext_0_63,
  MR_Word * STATE_VARIABLE_LineContext_64,
  MR_Word STATE_VARIABLE_LinePosn_0_65,
  MR_Word * STATE_VARIABLE_LinePosn_66);

static void MR_CALL 
parse_tree__parse_module__read_parse_tree_opt_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_46,
  MR_Word STATE_VARIABLE_LinePosn_0_47,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_48,
  MR_Word * STATE_VARIABLE_Errors_49);

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
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_46,
  MR_Word STATE_VARIABLE_LinePosn_0_47,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_48,
  MR_Word * STATE_VARIABLE_Errors_49);

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer FileStringLen_30,
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
  MR_Integer FileStringLen_32,
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
  MR_Integer FileStringLen_18,
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
  MR_Integer FileStringLen_15,
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
parse_tree__parse_module__read_module_header_11_p_0(
  MR_String FileString_12,
  MR_Integer FileStringLen_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_String SourceFileName_16,
  MR_Word * MaybeModuleHeader_17,
  MR_Word * STATE_VARIABLE_SeqNumCounter_30,
  MR_Word STATE_VARIABLE_LineContext_0_31,
  MR_Word * STATE_VARIABLE_LineContext_32,
  MR_Word STATE_VARIABLE_LinePosn_0_33,
  MR_Word * STATE_VARIABLE_LinePosn_34);

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
parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_2(
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
parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_2(
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
parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_1(
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

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0_1(
  MR_Box closure_arg);

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

static MR_Word MR_CALL 
parse_tree__parse_module__report_missing_module_start_1_f_0(
  MR_Word FirstContext_3);

static void MR_CALL 
parse_tree__parse_module__read_term_to_iom_result_6_p_0(
  MR_Word ModuleName_7,
  MR_String FileName_8,
  MR_Word ReadTermResult_9,
  MR_Word * ReadIOMResult_10,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_20);

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


static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[98][2];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_4[4][3];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_5[1][14];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_7[13][4];

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_8[2][15];




static /* final */ const MR_Box parse_tree__parse_module_scalar_common_1[98][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The expected name is specified here."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "interface sections."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have two consecutive"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an interface file"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected the start of an"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section, got"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Mercury compiler that generated this file."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This indicates an internal error in the"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers record."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "automatically generated interface files."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not appear anywhere except in"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[36])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[95])))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_2[3][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_module_scalar_common_3[4][5] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 3 */
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
    ((MR_Box) (&parse_tree__parse_module_scalar_common_3[2])),
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
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
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
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0))
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
    ((MR_Box) (parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_module_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_2)),
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
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0)),
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
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0)),
    ((MR_Box) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_module__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0)),
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
  UINT8_C(18),
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
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_may_change_source_file_name_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_may_change_source_file_name_0 },
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
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_lookahead_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_lookahead_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_lookahead_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__parse_tree__parse_module__type_ctor_info_maybe_lookahead_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_0[3] = {
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
    (MR_Integer) 4
  }
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
  parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuArgLocn parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_1[4] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_decl_present_0_1 = {
  (MR_String) "wrong_module_decl_present",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_decl_present_0_1,
  NULL,
  parse_tree__parse_module__parse_tree__parse_module__field_locns_maybe_module_decl_present_0_1,
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
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_decl_present_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_decl_present_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_maybe_module_decl_present_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_module__parse_tree__parse_module__field_types_maybe_module_header_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_module__list__ti_list_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuFunctorDesc parse_tree__parse_module__parse_tree__parse_module__du_functor_desc_maybe_module_header_0_0 = {
  (MR_String) "no_valid_module_header",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
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
    MR_SECTAG_NONE,
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
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_maybe_module_header_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_maybe_module_header_0 },
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
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_maybe_require_module_decl_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_maybe_require_module_decl_0 },
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
  {     parse_tree__parse_module__parse_tree__parse_module__enum_name_ordered_missing_section_start_warning_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__enum_ordinal_ordered_missing_section_start_warning_0 },
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
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_read_iom_result_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_read_iom_result_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_read_iom_result_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_module__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct11 parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 11,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_context_0),
    (MR_PseudoTypeInfo) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_line_posn_0),
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_module____Unify____read_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____read_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "read_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_module____vpti_pred_11__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_mercury_term_lexer__type_ctor_info_line_context_0__plain_mercury_term_lexer__type_ctor_info_line_posn_0__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_module__parse_tree__parse_module__du_stag_ordered_version_number_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_module____Unify____version_number_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_module____Compare____version_number_info_0_0_10001)),
  (MR_String) "parse_tree.parse_module",
  (MR_String) "version_number_info",
  {     parse_tree__parse_module__parse_tree__parse_module__du_name_ordered_version_number_info_0 },
  {     parse_tree__parse_module__parse_tree__parse_module__du_ptag_ordered_version_number_info_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_module__parse_tree__parse_module__functor_number_map_version_number_info_0,

};

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__659__1_2_p_0(
  MR_Word Imports_42,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[0]), ((MR_Box) (Imports_42)), ((MR_Box) (HeadVar__2_73)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__656__1_1_p_0(
  MR_Word InclsCord_33)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_33);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_module__IntroducedFrom__pred__do_actually_read_module__572__1_2_p_0(
  MR_Integer NumCodeUnits_36,
  MR_Integer FileStringLen_37)
{
  {
    MR_bool succeeded = (NumCodeUnits_36 == FileStringLen_37);

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

                  recompilation____Compare____module_item_version_numbers_0_0(HeadVar__1_1, Var_13, ArgY1_9);
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
              succeeded = recompilation____Unify____module_item_version_numbers_0_0(ArgX1_7, ArgY1_8);
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
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY4_43)));
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
                    TypeInfo_29_29 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[5]);
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
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__term____Compare____context_0_0(&SubResult1_6, Var_36, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (Var_35)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_module_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY3_11)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_24;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_24, Var_38, ArgY1_23);
        succeeded = (SubResult1_24 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_24;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, Var_37, ArgY2_26);
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
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&parse_tree__parse_module_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          }
        }
      }
    }
    else
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX2_11, ArgY2_12);
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
    MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_64 == CastY_65);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 15);
                  MR_Word SubResult1_6;

                  parse_tree__parse_module____Compare____maybe_lookahead_0_0(&SubResult1_6, Var_77, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    parse_tree__error_util____Compare____error_spec_0_0(&SubResult2_9, Var_76, ArgY2_8);
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                    {
                      MR_Integer Var_84 = (MR_Integer) (Var_75);
                      MR_Integer Var_85 = (MR_Integer) (ArgY3_11);

                      succeeded = (Var_84 < Var_85);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_84 > Var_85);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
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
            MR_Word Var_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
            MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 15);
                  MR_Word SubResult1_33;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_33, Var_83, ArgY1_32);
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                  {
                    MR_Word SubResult2_36;

                    mercury__term____Compare____context_0_0(&SubResult2_36, Var_82, ArgY2_35);
                    succeeded = (SubResult2_36 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_36;
                    else
                    {
                      MR_Word SubResult3_39;

                      parse_tree__error_util____Compare____error_spec_0_0(&SubResult3_39, Var_81, ArgY3_38);
                      succeeded = (SubResult3_39 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_39;
                      else
                      {
                        MR_Integer Var_86 = (MR_Integer) (Var_80);
                        MR_Integer Var_87 = (MR_Integer) (ArgY4_41);

                        succeeded = (Var_86 < Var_87);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_86 > Var_87);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
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
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_61;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_61, Var_79, ArgY1_60);
                  succeeded = (SubResult1_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_61;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_78, ArgY2_63);
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 15);
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
              succeeded = parse_tree__parse_module____Unify____maybe_lookahead_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
              {
                succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX2_5, ArgY2_6);
                if (succeeded)
                  succeeded = (ArgX3_7 == ArgY3_8);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;
            MR_Word ArgX4_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 15);
            MR_Word ArgY4_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = mercury__term____Unify____context_0_0(ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX3_13, ArgY3_14);
                  if (succeeded)
                    succeeded = (ArgX4_15 == ArgY4_16);
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_18;
            MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_17, ArgY1_18);
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_19, ArgY2_20);
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
  MR_String STATE_VARIABLE_SourceFileName_0_40,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word STATE_VARIABLE_LinePosn_0_42,
  MR_Word Globals_17,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(STATE_VARIABLE_SourceFileName_0_40, FileString_13, FileStringLen_14, STATE_VARIABLE_LineContext_0_41, STATE_VARIABLE_LinePosn_0_42, DefaultModuleName_18, DefaultExpectationContexts_19, ParseTree_20, STATE_VARIABLE_Specs_43, STATE_VARIABLE_Errors_44);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_95_91_54_93_95_48_11_p_0(
  MR_String STATE_VARIABLE_SourceFileName_0_40,
  MR_String FileString_13,
  MR_Integer FileStringLen_14,
  MR_Word STATE_VARIABLE_LineContext_0_41,
  MR_Word STATE_VARIABLE_LinePosn_0_42,
  MR_Word DefaultModuleName_18,
  MR_Word DefaultExpectationContexts_19,
  MR_Word * ParseTree_20,
  MR_Word * STATE_VARIABLE_Specs_43,
  MR_Word * STATE_VARIABLE_Errors_44)
{
  {
    MR_Word ModuleDeclPresent_24;
    MR_Word InitLookAhead_25;
    MR_Word ModuleName_28;
    MR_Word ModuleNameContext_29;
    MR_Word FinalLookAhead_36;
    MR_Word ModuleComponents_37;
    MR_Word STATE_VARIABLE_Errors_46_46;
    MR_Word STATE_VARIABLE_SeqNumCounter_48_48;
    MR_String STATE_VARIABLE_SourceFileName_51_51;
    MR_Word STATE_VARIABLE_SeqNumCounter_52_52;
    MR_Word STATE_VARIABLE_LineContext_53_53;
    MR_Word STATE_VARIABLE_LinePosn_54_54;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word STATE_VARIABLE_Errors_58_58;
    MR_Word Var_60;
    MR_String STATE_VARIABLE_SourceFileName_61_61;
    MR_Word STATE_VARIABLE_SeqNumCounter_62_62;
    MR_Word STATE_VARIABLE_Specs_63_63;
    MR_Word STATE_VARIABLE_Errors_64_64;
    MR_Word STATE_VARIABLE_LineContext_65_65;
    MR_Word STATE_VARIABLE_LinePosn_66_66;
    MR_Word _LineContext_38;
    MR_Word _LinePosn_39;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &STATE_VARIABLE_Errors_46_46);
    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_48_48);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_13, FileStringLen_14, DefaultModuleName_18, DefaultExpectationContexts_19, &ModuleDeclPresent_24, (MR_Integer) 1, STATE_VARIABLE_SourceFileName_0_40, &STATE_VARIABLE_SourceFileName_51_51, STATE_VARIABLE_SeqNumCounter_48_48, &STATE_VARIABLE_SeqNumCounter_52_52, STATE_VARIABLE_LineContext_0_41, &STATE_VARIABLE_LineContext_53_53, STATE_VARIABLE_LinePosn_0_42, &STATE_VARIABLE_LinePosn_54_54);
    switch (MR_tag((MR_Word) ModuleDeclPresent_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NoModuleSpec_26;
          MR_Word NoModuleError_27;

          InitLookAhead_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_24, (MR_Integer) 0))));
          NoModuleSpec_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_24, (MR_Integer) 1))));
          NoModuleError_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_24, (MR_Integer) 2))) & (MR_Integer) 15);
          {
            STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (NoModuleSpec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) (NoModuleError_27)), STATE_VARIABLE_Errors_46_46, &STATE_VARIABLE_Errors_58_58);
          ModuleName_28 = DefaultModuleName_18;
          if ((InitLookAhead_25 == (MR_Word) ((MR_Unsigned) 0U)))
            ModuleNameContext_29 = mercury__term__context_init_0_f_0();
          else
          {
            MR_Word InitLookAheadTerm_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitLookAhead_25, (MR_Integer) 1))));

            ModuleNameContext_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InitLookAheadTerm_31);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word WrongSpec_32;
          MR_Word WrongError_33;

          ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 0))));
          ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 1))));
          WrongSpec_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 2))));
          WrongError_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_24, (MR_Integer) 3))) & (MR_Integer) 15);
          {
            STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (WrongSpec_32));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) (WrongError_33)), STATE_VARIABLE_Errors_46_46, &STATE_VARIABLE_Errors_58_58);
          InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_24, (MR_Integer) 0))));
          ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_24, (MR_Integer) 1))));
          InitLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Specs_57_57 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Errors_58_58 = STATE_VARIABLE_Errors_46_46;
        }
        break;
    }
    Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_13, FileStringLen_14, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_25, &FinalLookAhead_36, Var_60, &ModuleComponents_37, STATE_VARIABLE_SourceFileName_51_51, &STATE_VARIABLE_SourceFileName_61_61, STATE_VARIABLE_SeqNumCounter_52_52, &STATE_VARIABLE_SeqNumCounter_62_62, STATE_VARIABLE_Specs_57_57, &STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Errors_58_58, &STATE_VARIABLE_Errors_64_64, STATE_VARIABLE_LineContext_53_53, &STATE_VARIABLE_LineContext_65_65, STATE_VARIABLE_LinePosn_54_54, &STATE_VARIABLE_LinePosn_66_66);
    parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(STATE_VARIABLE_SourceFileName_61_61, FileString_13, FileStringLen_14, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_36, STATE_VARIABLE_SeqNumCounter_62_62, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_43, STATE_VARIABLE_Errors_64_64, STATE_VARIABLE_Errors_44, STATE_VARIABLE_LineContext_65_65, &_LineContext_38, STATE_VARIABLE_LinePosn_66_66, &_LinePosn_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTree_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleComponents_37));
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(
  MR_String FileString_24,
  MR_Integer FileStringLen_25,
  MR_Word CurModuleName_27,
  MR_Word ContainingModules_28,
  MR_Word MaybePrevSection_29,
  MR_Word STATE_VARIABLE_MissingStartSectionWarning_0_90,
  MR_Word InitLookAhead_31,
  MR_Word * FinalLookAhead_32,
  MR_Word STATE_VARIABLE_ModuleComponents_0_91,
  MR_Word * STATE_VARIABLE_ModuleComponents_92,
  MR_String STATE_VARIABLE_SourceFileName_0_93,
  MR_String * STATE_VARIABLE_SourceFileName_94,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_95,
  MR_Word * STATE_VARIABLE_SeqNumCounter_96,
  MR_Word STATE_VARIABLE_Specs_0_97,
  MR_Word * STATE_VARIABLE_Specs_98,
  MR_Word STATE_VARIABLE_Errors_0_99,
  MR_Word * STATE_VARIABLE_Errors_100,
  MR_Word STATE_VARIABLE_LineContext_0_101,
  MR_Word * STATE_VARIABLE_LineContext_102,
  MR_Word STATE_VARIABLE_LinePosn_0_103,
  MR_Word * STATE_VARIABLE_LinePosn_104)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadIOMResult_40;
    MR_Word STATE_VARIABLE_SeqNumCounter_105_105;
    MR_Word STATE_VARIABLE_LineContext_106_106;
    MR_Word STATE_VARIABLE_LinePosn_107_107;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_93, FileString_24, FileStringLen_25, InitLookAhead_31, CurModuleName_27, &ReadIOMResult_40, STATE_VARIABLE_SeqNumCounter_0_95, &STATE_VARIABLE_SeqNumCounter_105_105, STATE_VARIABLE_LineContext_0_101, &STATE_VARIABLE_LineContext_106_106, STATE_VARIABLE_LinePosn_0_103, &STATE_VARIABLE_LinePosn_107_107);
    switch (MR_tag((MR_Word) ReadIOMResult_40)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FinalLookAhead_32 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleComponents_92 = STATE_VARIABLE_ModuleComponents_0_91;
          *STATE_VARIABLE_SourceFileName_94 = STATE_VARIABLE_SourceFileName_0_93;
          *STATE_VARIABLE_SeqNumCounter_96 = STATE_VARIABLE_SeqNumCounter_105_105;
          *STATE_VARIABLE_Specs_98 = STATE_VARIABLE_Specs_0_97;
          *STATE_VARIABLE_Errors_100 = STATE_VARIABLE_Errors_0_99;
          *STATE_VARIABLE_LineContext_102 = STATE_VARIABLE_LineContext_106_106;
          *STATE_VARIABLE_LinePosn_104 = STATE_VARIABLE_LinePosn_107_107;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Specs_227_227;
          MR_Word STATE_VARIABLE_Errors_229_229;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_99;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

          {
            STATE_VARIABLE_Specs_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_227_227, 0) = ((MR_Box) (ItemSpec_41));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_227_227, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_97));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_229_229);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_105_105;
          next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_227_227;
          next_value_of_STATE_VARIABLE_Errors_0_99 = STATE_VARIABLE_Errors_229_229;
          next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_106_106;
          next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_107_107;
          InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
          STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
          STATE_VARIABLE_Errors_0_99 = next_value_of_STATE_VARIABLE_Errors_0_99;
          STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
          STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
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
          MR_Word STATE_VARIABLE_Specs_203_203;
          MR_Word STATE_VARIABLE_Errors_204_204;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_Word Var_209;
          MR_String STATE_VARIABLE_SourceFileName_210_210;
          MR_Word STATE_VARIABLE_SeqNumCounter_211_211;
          MR_Word STATE_VARIABLE_Specs_212_212;
          MR_Word STATE_VARIABLE_Errors_213_213;
          MR_Word STATE_VARIABLE_LineContext_214_214;
          MR_Word STATE_VARIABLE_LinePosn_215_215;
          MR_Word STATE_VARIABLE_ModuleComponents_216_216;
          MR_Word Var_217;
          MR_Word Var_226;
          MR_Word _MissingStartSectionWarning_47;
          MR_Word Var_52;
          MR_Word next_value_of_MaybePrevSection_29;
          MR_Word next_value_of_InitLookAhead_31;
          MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_93;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_99;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

          Context_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_43);
          parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_46, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_47, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_203_203, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_204_204);
          SectionContext_49 = mercury__term__context_init_0_f_0();
          {
            ItemSeqInitLookAhead_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 0) = ((MR_Box) (IOMVarSet_42));
            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_50, 1) = ((MR_Box) (IOMTerm_43));
          }
          Var_206 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
          Var_207 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
          Var_208 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
          Var_209 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, FileStringLen_25, CurModuleName_27, ItemSeqInitLookAhead_50, &ItemSeqFinalLookAhead_51, (MR_Word) ((MR_Unsigned) 0U), &Var_52, Var_206, &InclsCord_53, Var_207, &AvailsCord_54, Var_208, &FIMsCord_55, Var_209, &ItemsCord_56, STATE_VARIABLE_SourceFileName_0_93, &STATE_VARIABLE_SourceFileName_210_210, STATE_VARIABLE_SeqNumCounter_105_105, &STATE_VARIABLE_SeqNumCounter_211_211, STATE_VARIABLE_Specs_203_203, &STATE_VARIABLE_Specs_212_212, STATE_VARIABLE_Errors_204_204, &STATE_VARIABLE_Errors_213_213, STATE_VARIABLE_LineContext_106_106, &STATE_VARIABLE_LineContext_214_214, STATE_VARIABLE_LinePosn_107_107, &STATE_VARIABLE_LinePosn_215_215);
          parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, (MR_Integer) 1, SectionContext_49, InclsCord_53, AvailsCord_54, FIMsCord_55, ItemsCord_56, STATE_VARIABLE_ModuleComponents_0_91, &STATE_VARIABLE_ModuleComponents_216_216);
          {
            Var_226 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_226, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_226, 1) = ((MR_Box) (SectionContext_49));
          }
          {
            Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_226));
          }
          // direct tailcall eliminated
          ;
          next_value_of_MaybePrevSection_29 = Var_217;
          next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_51;
          next_value_of_STATE_VARIABLE_ModuleComponents_0_91 = STATE_VARIABLE_ModuleComponents_216_216;
          next_value_of_STATE_VARIABLE_SourceFileName_0_93 = STATE_VARIABLE_SourceFileName_210_210;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_211_211;
          next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_212_212;
          next_value_of_STATE_VARIABLE_Errors_0_99 = STATE_VARIABLE_Errors_213_213;
          next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_214_214;
          next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_215_215;
          MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
          STATE_VARIABLE_MissingStartSectionWarning_0_90 = (MR_Integer) 0;
          InitLookAhead_31 = next_value_of_InitLookAhead_31;
          STATE_VARIABLE_ModuleComponents_0_91 = next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
          STATE_VARIABLE_SourceFileName_0_93 = next_value_of_STATE_VARIABLE_SourceFileName_0_93;
          STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
          STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
          STATE_VARIABLE_Errors_0_99 = next_value_of_STATE_VARIABLE_Errors_0_99;
          STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
          STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 2))));
          MR_Word IOMVarSet_278 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 0))));
          MR_Word IOMTerm_279 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_40, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_57)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Specs_111_111;
                MR_Word STATE_VARIABLE_Errors_112_112;
                MR_Word Var_115;
                MR_Word Var_116;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_String STATE_VARIABLE_SourceFileName_119_119;
                MR_Word STATE_VARIABLE_SeqNumCounter_120_120;
                MR_Word STATE_VARIABLE_Specs_121_121;
                MR_Word STATE_VARIABLE_Errors_122_122;
                MR_Word STATE_VARIABLE_LineContext_123_123;
                MR_Word STATE_VARIABLE_LinePosn_124_124;
                MR_Word STATE_VARIABLE_ModuleComponents_125_125;
                MR_Word Var_126;
                MR_Word Var_135;
                MR_Word SectionKind_260;
                MR_Word SectionContext_261;
                MR_Word ItemSeqInitLookAhead_262;
                MR_Word ItemSeqFinalLookAhead_263;
                MR_Word InclsCord_264;
                MR_Word AvailsCord_265;
                MR_Word FIMsCord_266;
                MR_Word ItemsCord_267;
                MR_Word Var_86;
                MR_Word next_value_of_MaybePrevSection_29;
                MR_Word next_value_of_InitLookAhead_31;
                MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
                MR_Word next_value_of_STATE_VARIABLE_Errors_0_99;
                MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
                MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

                switch (MR_tag((MR_Word) IOM_57)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_305;
                        MR_Word _MissingStartSectionWarning_303;

                        Context_305 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_305, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_303, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                        SectionKind_260 = (MR_Integer) 1;
                        SectionContext_261 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                        SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 0))));
                        SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                        STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                      }
                      {
                        ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ItemSpecs_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Specs_110_326;

                      STATE_VARIABLE_Specs_110_326 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_85, STATE_VARIABLE_Specs_0_97);
                      if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_319;
                        MR_Word _MissingStartSectionWarning_317;

                        Context_319 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_319, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_317, STATE_VARIABLE_Specs_110_326, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                        SectionKind_260 = (MR_Integer) 1;
                        SectionContext_261 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                        SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 0))));
                        SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_110_326;
                        STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                      }
                      {
                        ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Context_361;
                        MR_Word _MissingStartSectionWarning_359;

                        Context_361 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                        parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_361, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_359, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                        SectionKind_260 = (MR_Integer) 1;
                        SectionContext_261 = mercury__term__context_init_0_f_0();
                      }
                      else
                      {
                        MR_Word Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                        SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 0))));
                        SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 1))));
                        STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                        STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                      }
                      {
                        ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                        MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_333;
                            MR_Word _MissingStartSectionWarning_331;

                            Context_333 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_333, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_331, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_347;
                            MR_Word _MissingStartSectionWarning_345;

                            Context_347 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_347, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_345, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          SectionKind_260 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))) & (MR_Integer) 1);
                          SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                          ItemSeqInitLookAhead_262 = (MR_Word) ((MR_Unsigned) 0U);
                          STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                          STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_250;
                            MR_Word _MissingStartSectionWarning_249;

                            Context_250 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_250, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_249, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                    }
                    break;
                }
                Var_115 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                Var_116 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                Var_117 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                Var_118 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, FileStringLen_25, CurModuleName_27, ItemSeqInitLookAhead_262, &ItemSeqFinalLookAhead_263, (MR_Word) ((MR_Unsigned) 0U), &Var_86, Var_115, &InclsCord_264, Var_116, &AvailsCord_265, Var_117, &FIMsCord_266, Var_118, &ItemsCord_267, STATE_VARIABLE_SourceFileName_0_93, &STATE_VARIABLE_SourceFileName_119_119, STATE_VARIABLE_SeqNumCounter_105_105, &STATE_VARIABLE_SeqNumCounter_120_120, STATE_VARIABLE_Specs_111_111, &STATE_VARIABLE_Specs_121_121, STATE_VARIABLE_Errors_112_112, &STATE_VARIABLE_Errors_122_122, STATE_VARIABLE_LineContext_106_106, &STATE_VARIABLE_LineContext_123_123, STATE_VARIABLE_LinePosn_107_107, &STATE_VARIABLE_LinePosn_124_124);
                parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, SectionKind_260, SectionContext_261, InclsCord_264, AvailsCord_265, FIMsCord_266, ItemsCord_267, STATE_VARIABLE_ModuleComponents_0_91, &STATE_VARIABLE_ModuleComponents_125_125);
                {
                  Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (SectionKind_260));
                  MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (SectionContext_261));
                }
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_135));
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybePrevSection_29 = Var_126;
                next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_263;
                next_value_of_STATE_VARIABLE_ModuleComponents_0_91 = STATE_VARIABLE_ModuleComponents_125_125;
                next_value_of_STATE_VARIABLE_SourceFileName_0_93 = STATE_VARIABLE_SourceFileName_119_119;
                next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_120_120;
                next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_121_121;
                next_value_of_STATE_VARIABLE_Errors_0_99 = STATE_VARIABLE_Errors_122_122;
                next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_123_123;
                next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_124_124;
                MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                STATE_VARIABLE_MissingStartSectionWarning_0_90 = (MR_Integer) 0;
                InitLookAhead_31 = next_value_of_InitLookAhead_31;
                STATE_VARIABLE_ModuleComponents_0_91 = next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                STATE_VARIABLE_SourceFileName_0_93 = next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
                STATE_VARIABLE_Errors_0_99 = next_value_of_STATE_VARIABLE_Errors_0_99;
                STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
                STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                  {
                    MR_Word STATE_VARIABLE_Specs_111_111;
                    MR_Word STATE_VARIABLE_Errors_112_112;
                    MR_Word Var_115;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_118;
                    MR_String STATE_VARIABLE_SourceFileName_119_119;
                    MR_Word STATE_VARIABLE_SeqNumCounter_120_120;
                    MR_Word STATE_VARIABLE_Specs_121_121;
                    MR_Word STATE_VARIABLE_Errors_122_122;
                    MR_Word STATE_VARIABLE_LineContext_123_123;
                    MR_Word STATE_VARIABLE_LinePosn_124_124;
                    MR_Word STATE_VARIABLE_ModuleComponents_125_125;
                    MR_Word Var_126;
                    MR_Word Var_135;
                    MR_Word SectionKind_260;
                    MR_Word SectionContext_261;
                    MR_Word ItemSeqInitLookAhead_262;
                    MR_Word ItemSeqFinalLookAhead_263;
                    MR_Word InclsCord_264;
                    MR_Word AvailsCord_265;
                    MR_Word FIMsCord_266;
                    MR_Word ItemsCord_267;
                    MR_Word Var_86;
                    MR_Word next_value_of_MaybePrevSection_29;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_99;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

                    switch (MR_tag((MR_Word) IOM_57)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_305;
                            MR_Word _MissingStartSectionWarning_303;

                            Context_305 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_305, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_303, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ItemSpecs_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_57, (MR_Integer) 1))));
                          MR_Word STATE_VARIABLE_Specs_110_326;

                          STATE_VARIABLE_Specs_110_326 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_85, STATE_VARIABLE_Specs_0_97);
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_319;
                            MR_Word _MissingStartSectionWarning_317;

                            Context_319 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_319, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_317, STATE_VARIABLE_Specs_110_326, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_110_326;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            MR_Word Context_361;
                            MR_Word _MissingStartSectionWarning_359;

                            Context_361 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                            parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_361, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_359, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                            SectionKind_260 = (MR_Integer) 1;
                            SectionContext_261 = mercury__term__context_init_0_f_0();
                          }
                          else
                          {
                            MR_Word Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                            SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 0))));
                            SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 1))));
                            STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                            STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                          }
                          {
                            ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                            MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                MR_Word Context_333;
                                MR_Word _MissingStartSectionWarning_331;

                                Context_333 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                                parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_333, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_331, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                                SectionKind_260 = (MR_Integer) 1;
                                SectionContext_261 = mercury__term__context_init_0_f_0();
                              }
                              else
                              {
                                MR_Word Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                                SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 0))));
                                SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 1))));
                                STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                                STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                              }
                              {
                                ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                MR_Word Context_347;
                                MR_Word _MissingStartSectionWarning_345;

                                Context_347 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                                parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_347, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_345, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                                SectionKind_260 = (MR_Integer) 1;
                                SectionContext_261 = mercury__term__context_init_0_f_0();
                              }
                              else
                              {
                                MR_Word Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                                SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 0))));
                                SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 1))));
                                STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                                STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                              }
                              {
                                ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                              }
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              SectionKind_260 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))) & (MR_Integer) 1);
                              SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                              ItemSeqInitLookAhead_262 = (MR_Word) ((MR_Unsigned) 0U);
                              STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                              STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                            }
                            break;
                          case (MR_Integer) 7:
                            {
                              if ((MaybePrevSection_29 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                MR_Word Context_250;
                                MR_Word _MissingStartSectionWarning_249;

                                Context_250 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                                parse_tree__parse_module__generate_missing_start_section_warning_src_8_p_0(CurModuleName_27, Context_250, STATE_VARIABLE_MissingStartSectionWarning_0_90, &_MissingStartSectionWarning_249, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_112_112);
                                SectionKind_260 = (MR_Integer) 1;
                                SectionContext_261 = mercury__term__context_init_0_f_0();
                              }
                              else
                              {
                                MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSection_29, (MR_Integer) 0))));

                                SectionKind_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0))));
                                SectionContext_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
                                STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_97;
                                STATE_VARIABLE_Errors_112_112 = STATE_VARIABLE_Errors_0_99;
                              }
                              {
                                ItemSeqInitLookAhead_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 0) = ((MR_Box) (IOMVarSet_278));
                                MR_hl_field(MR_mktag(1), ItemSeqInitLookAhead_262, 1) = ((MR_Box) (IOMTerm_279));
                              }
                            }
                            break;
                        }
                        break;
                    }
                    Var_115 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_116 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_117 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_118 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_24, FileStringLen_25, CurModuleName_27, ItemSeqInitLookAhead_262, &ItemSeqFinalLookAhead_263, (MR_Word) ((MR_Unsigned) 0U), &Var_86, Var_115, &InclsCord_264, Var_116, &AvailsCord_265, Var_117, &FIMsCord_266, Var_118, &ItemsCord_267, STATE_VARIABLE_SourceFileName_0_93, &STATE_VARIABLE_SourceFileName_119_119, STATE_VARIABLE_SeqNumCounter_105_105, &STATE_VARIABLE_SeqNumCounter_120_120, STATE_VARIABLE_Specs_111_111, &STATE_VARIABLE_Specs_121_121, STATE_VARIABLE_Errors_112_112, &STATE_VARIABLE_Errors_122_122, STATE_VARIABLE_LineContext_106_106, &STATE_VARIABLE_LineContext_123_123, STATE_VARIABLE_LinePosn_107_107, &STATE_VARIABLE_LinePosn_124_124);
                    parse_tree__parse_module__add_section_component_9_p_0(CurModuleName_27, SectionKind_260, SectionContext_261, InclsCord_264, AvailsCord_265, FIMsCord_266, ItemsCord_267, STATE_VARIABLE_ModuleComponents_0_91, &STATE_VARIABLE_ModuleComponents_125_125);
                    {
                      Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (SectionKind_260));
                      MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (SectionContext_261));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_135));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_MaybePrevSection_29 = Var_126;
                    next_value_of_InitLookAhead_31 = ItemSeqFinalLookAhead_263;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_91 = STATE_VARIABLE_ModuleComponents_125_125;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_93 = STATE_VARIABLE_SourceFileName_119_119;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_120_120;
                    next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_121_121;
                    next_value_of_STATE_VARIABLE_Errors_0_99 = STATE_VARIABLE_Errors_122_122;
                    next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_123_123;
                    next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_124_124;
                    MaybePrevSection_29 = next_value_of_MaybePrevSection_29;
                    STATE_VARIABLE_MissingStartSectionWarning_0_90 = (MR_Integer) 0;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_91 = next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                    STATE_VARIABLE_SourceFileName_0_93 = next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                    STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
                    STATE_VARIABLE_Errors_0_99 = next_value_of_STATE_VARIABLE_Errors_0_99;
                    STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
                    STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Spec_60;
                    MR_Word Var_184;
                    MR_Word STATE_VARIABLE_Specs_185_185;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

                    Var_184 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_279);
                    {
                      Spec_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/23"));
                      MR_hl_field(MR_mktag(1), Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_60, 3) = ((MR_Box) (Var_184));
                      MR_hl_field(MR_mktag(1), Spec_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[33])));
                    }
                    {
                      STATE_VARIABLE_Specs_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_185_185, 0) = ((MR_Box) (Spec_60));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_185_185, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_97));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_105_105;
                    next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_185_185;
                    next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_106_106;
                    next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_107_107;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
                    STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
                    STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_194_194 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_93 = STATE_VARIABLE_SourceFileName_194_194;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_105_105;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_106_106;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_107_107;

                    // direct tailcall eliminated
                    ;
                    InitLookAhead_31 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_SourceFileName_0_93 = next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                    STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
                    STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
                    continue;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word RawStartModuleName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_Word StartContext_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));
                    MR_Word StartModuleName_65;
                    MR_Word SubModuleFinalLookAhead_67;
                    MR_Word STATE_VARIABLE_Specs_157_157;
                    MR_Word STATE_VARIABLE_ModuleComponents_159_159;
                    MR_String STATE_VARIABLE_SourceFileName_160_160;
                    MR_Word STATE_VARIABLE_SeqNumCounter_161_161;
                    MR_Word STATE_VARIABLE_Specs_162_162;
                    MR_Word STATE_VARIABLE_Errors_163_163;
                    MR_Word STATE_VARIABLE_LineContext_164_164;
                    MR_Word STATE_VARIABLE_LinePosn_165_165;
                    MR_Word next_value_of_InitLookAhead_31;
                    MR_Word next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                    MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                    MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    MR_Word next_value_of_STATE_VARIABLE_Specs_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_Errors_0_99;
                    MR_Word next_value_of_STATE_VARIABLE_LineContext_0_101;
                    MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_103;

                    if (((MR_tag((MR_Word) RawStartModuleName_61)) == (MR_Integer) 1))
                    {
                      MR_Word RawModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 0))));
                      MR_String RawBaseName_244 = ((MR_String) ((MR_hl_field(MR_mktag(1), RawStartModuleName_61, (MR_Integer) 1))));

                      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(RawModuleName_66, CurModuleName_27);
                      if (succeeded)
                      {
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_244));
                        }
                        STATE_VARIABLE_Specs_157_157 = STATE_VARIABLE_Specs_0_97;
                      }
                      else
                      {
                        MR_Word Var_138;
                        MR_Word Var_141;
                        MR_Word Var_142;
                        MR_Word Var_143;
                        MR_Word Var_146;
                        MR_Word Var_147;
                        MR_Word Pieces_238;
                        MR_Word Spec_239;

                        {
                          Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (RawStartModuleName_61));
                        }
                        {
                          Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (CurModuleName_27));
                        }
                        {
                          Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
                          MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                        }
                        {
                          Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[29])));
                          MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
                        }
                        {
                          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_143));
                        }
                        {
                          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[28])));
                          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
                        }
                        {
                          Pieces_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Pieces_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[27])));
                          MR_hl_field(MR_mktag(1), Pieces_238, 1) = ((MR_Box) (Var_138));
                        }
                        {
                          Spec_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Spec_239, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_components\'/23"));
                          MR_hl_field(MR_mktag(1), Spec_239, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(1), Spec_239, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                          MR_hl_field(MR_mktag(1), Spec_239, 3) = ((MR_Box) (StartContext_62));
                          MR_hl_field(MR_mktag(1), Spec_239, 4) = ((MR_Box) (Pieces_238));
                        }
                        {
                          STATE_VARIABLE_Specs_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_157_157, 0) = ((MR_Box) (Spec_239));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_157_157, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_97));
                        }
                        {
                          StartModuleName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 0) = ((MR_Box) (CurModuleName_27));
                          MR_hl_field(MR_mktag(1), StartModuleName_65, 1) = ((MR_Box) (RawBaseName_244));
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
                      STATE_VARIABLE_Specs_157_157 = STATE_VARIABLE_Specs_0_97;
                    }
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_115_117_98_109_111_100_117_108_101_95_95_91_51_93_95_48_24_p_0(FileString_24, FileStringLen_25, ContainingModules_28, MaybePrevSection_29, CurModuleName_27, StartModuleName_65, StartContext_62, (MR_Word) ((MR_Unsigned) 0U), &SubModuleFinalLookAhead_67, STATE_VARIABLE_ModuleComponents_0_91, &STATE_VARIABLE_ModuleComponents_159_159, STATE_VARIABLE_SourceFileName_0_93, &STATE_VARIABLE_SourceFileName_160_160, STATE_VARIABLE_SeqNumCounter_105_105, &STATE_VARIABLE_SeqNumCounter_161_161, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_162_162, STATE_VARIABLE_Errors_0_99, &STATE_VARIABLE_Errors_163_163, STATE_VARIABLE_LineContext_106_106, &STATE_VARIABLE_LineContext_164_164, STATE_VARIABLE_LinePosn_107_107, &STATE_VARIABLE_LinePosn_165_165);
                    // direct tailcall eliminated
                    ;
                    next_value_of_InitLookAhead_31 = SubModuleFinalLookAhead_67;
                    next_value_of_STATE_VARIABLE_ModuleComponents_0_91 = STATE_VARIABLE_ModuleComponents_159_159;
                    next_value_of_STATE_VARIABLE_SourceFileName_0_93 = STATE_VARIABLE_SourceFileName_160_160;
                    next_value_of_STATE_VARIABLE_SeqNumCounter_0_95 = STATE_VARIABLE_SeqNumCounter_161_161;
                    next_value_of_STATE_VARIABLE_Specs_0_97 = STATE_VARIABLE_Specs_162_162;
                    next_value_of_STATE_VARIABLE_Errors_0_99 = STATE_VARIABLE_Errors_163_163;
                    next_value_of_STATE_VARIABLE_LineContext_0_101 = STATE_VARIABLE_LineContext_164_164;
                    next_value_of_STATE_VARIABLE_LinePosn_0_103 = STATE_VARIABLE_LinePosn_165_165;
                    InitLookAhead_31 = next_value_of_InitLookAhead_31;
                    STATE_VARIABLE_ModuleComponents_0_91 = next_value_of_STATE_VARIABLE_ModuleComponents_0_91;
                    STATE_VARIABLE_SourceFileName_0_93 = next_value_of_STATE_VARIABLE_SourceFileName_0_93;
                    STATE_VARIABLE_SeqNumCounter_0_95 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_95;
                    STATE_VARIABLE_Specs_0_97 = next_value_of_STATE_VARIABLE_Specs_0_97;
                    STATE_VARIABLE_Errors_0_99 = next_value_of_STATE_VARIABLE_Errors_0_99;
                    STATE_VARIABLE_LineContext_0_101 = next_value_of_STATE_VARIABLE_LineContext_0_101;
                    STATE_VARIABLE_LinePosn_0_103 = next_value_of_STATE_VARIABLE_LinePosn_0_103;
                    continue;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word EndedModuleName_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                    MR_Word EndContext_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 2))));

                    parse_tree__parse_module__handle_module_end_marker_11_p_0(CurModuleName_27, ContainingModules_28, IOMVarSet_278, IOMTerm_279, EndedModuleName_87, EndContext_88, FinalLookAhead_32, STATE_VARIABLE_Specs_0_97, STATE_VARIABLE_Specs_98, STATE_VARIABLE_Errors_0_99, STATE_VARIABLE_Errors_100);
                    *STATE_VARIABLE_ModuleComponents_92 = STATE_VARIABLE_ModuleComponents_0_91;
                    *STATE_VARIABLE_SourceFileName_94 = STATE_VARIABLE_SourceFileName_0_93;
                    *STATE_VARIABLE_SeqNumCounter_96 = STATE_VARIABLE_SeqNumCounter_105_105;
                    *STATE_VARIABLE_LineContext_102 = STATE_VARIABLE_LineContext_106_106;
                    *STATE_VARIABLE_LinePosn_104 = STATE_VARIABLE_LinePosn_107_107;
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
  MR_Integer FileStringLen_26,
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
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[65])));
      }
      {
        NoSectionPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[54])));
        MR_hl_field(MR_mktag(1), NoSectionPieces_44, 1) = ((MR_Box) (Var_67));
      }
      {
        NoSectionSpec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_src_submodule\'/24"));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), NoSectionSpec_45, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_115_114_99_95_99_111_109_112_111_110_101_110_116_115_95_95_91_51_93_95_48_23_p_0(FileString_25, FileStringLen_26, StartModuleName_31, NestedContainingModules_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, InitLookAhead_33, FinalLookAhead_34, Var_112, &NestedModuleComponents_48, STATE_VARIABLE_SourceFileName_0_53, STATE_VARIABLE_SourceFileName_54, STATE_VARIABLE_SeqNumCounter_0_55, STATE_VARIABLE_SeqNumCounter_56, STATE_VARIABLE_Specs_107_107, STATE_VARIABLE_Specs_58, STATE_VARIABLE_Errors_109_109, STATE_VARIABLE_Errors_60, STATE_VARIABLE_LineContext_0_61, STATE_VARIABLE_LineContext_62, STATE_VARIABLE_LinePosn_0_63, STATE_VARIABLE_LinePosn_64);
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
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[67])));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
          }
          {
            Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[66])));
            MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_29));
          }
          {
            Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/11"));
            MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[71])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[70])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[67])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Pieces_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[69])));
            MR_hl_field(MR_mktag(1), Pieces_79, 1) = ((MR_Box) (Var_51));
          }
          {
            Spec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.handle_module_end_marker\'/11"));
            MR_hl_field(MR_mktag(1), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[53])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_2[1])));
          MR_hl_field(MR_mktag(1), MissingSectionPieces_14, 1) = ((MR_Box) (Var_25));
        }
        {
          MissingSectionSpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.generate_missing_start_section_warning_src\'/8"));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), MissingSectionSpec_15, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word * STATE_VARIABLE_Errors_58)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(IntFileKind_13, SourceFileName_14, FileString_15, FileStringLen_16, STATE_VARIABLE_LineContext_0_55, STATE_VARIABLE_LinePosn_0_56, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_58);
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word IntFileKind_13,
  MR_String SourceFileName_14,
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_55,
  MR_Word STATE_VARIABLE_LinePosn_0_56,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word * STATE_VARIABLE_Errors_58)
{
  {
    MR_Word MaybeModuleHeader_26;
    MR_Word STATE_VARIABLE_SeqNumCounter_59_59;
    MR_Word STATE_VARIABLE_LineContext_60_60;
    MR_Word STATE_VARIABLE_LinePosn_61_61;

    parse_tree__parse_module__read_module_header_11_p_0(FileString_15, FileStringLen_16, DefaultModuleName_20, DefaultExpectationContexts_21, SourceFileName_14, &MaybeModuleHeader_26, &STATE_VARIABLE_SeqNumCounter_59_59, STATE_VARIABLE_LineContext_0_55, &STATE_VARIABLE_LineContext_60_60, STATE_VARIABLE_LinePosn_0_56, &STATE_VARIABLE_LinePosn_61_61);
    if (((MR_tag((MR_Word) MaybeModuleHeader_26)) == (MR_Integer) 0))
    {
      MR_Word ModuleNameContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_26, (MR_Integer) 0))));
      MR_Word NoModuleErrors_29;

      *STATE_VARIABLE_Specs_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_26, (MR_Integer) 1))));
      NoModuleErrors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_26, (MR_Integer) 2))));
      *STATE_VARIABLE_Errors_58 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), NoModuleErrors_29);
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
    }
    else
    {
      MR_Word MaybeVersionNumbers_32;
      MR_Word MaybeFirstRawItemBlock_33;
      MR_Word STATE_VARIABLE_LookAhead_63_63;
      MR_Word STATE_VARIABLE_SeqNumCounter_64_64;
      MR_Word STATE_VARIABLE_Specs_66_66;
      MR_Word Var_67;
      MR_Word STATE_VARIABLE_Errors_68_68;
      MR_Word STATE_VARIABLE_LineContext_69_69;
      MR_Word STATE_VARIABLE_LinePosn_70_70;
      MR_Word STATE_VARIABLE_LookAhead_72_72;
      MR_Word STATE_VARIABLE_SeqNumCounter_73_73;
      MR_Word STATE_VARIABLE_Specs_74_74;
      MR_Word STATE_VARIABLE_Errors_75_75;
      MR_Word STATE_VARIABLE_LineContext_76_76;
      MR_Word STATE_VARIABLE_LinePosn_77_77;
      MR_Word STATE_VARIABLE_LookAhead_84_84;
      MR_Word STATE_VARIABLE_SeqNumCounter_85_85;
      MR_Word STATE_VARIABLE_Errors_87_87;
      MR_Word STATE_VARIABLE_LineContext_88_88;
      MR_Word STATE_VARIABLE_LinePosn_89_89;
      MR_Word STATE_VARIABLE_Specs_105_105;
      MR_Word Var_127;
      MR_Word ModuleNameContext_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_26, (MR_Integer) 1))));
      MR_Word ModuleName_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_26, (MR_Integer) 0))));
      MR_Word _LineContext_53;
      MR_Word _LinePosn_54;

      Var_67 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_121_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_105_116_101_109_95_95_91_51_93_95_48_18_p_0(FileString_15, FileStringLen_16, ModuleName_142, SourceFileName_14, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_LookAhead_63_63, &MaybeVersionNumbers_32, STATE_VARIABLE_SeqNumCounter_59_59, &STATE_VARIABLE_SeqNumCounter_64_64, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_66_66, Var_67, &STATE_VARIABLE_Errors_68_68, STATE_VARIABLE_LineContext_60_60, &STATE_VARIABLE_LineContext_69_69, STATE_VARIABLE_LinePosn_61_61, &STATE_VARIABLE_LinePosn_70_70);
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(FileString_15, FileStringLen_16, ModuleName_142, SourceFileName_14, (MR_String) "interface", STATE_VARIABLE_LookAhead_63_63, &STATE_VARIABLE_LookAhead_72_72, &MaybeFirstRawItemBlock_33, STATE_VARIABLE_SeqNumCounter_64_64, &STATE_VARIABLE_SeqNumCounter_73_73, STATE_VARIABLE_Specs_66_66, &STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Errors_68_68, &STATE_VARIABLE_Errors_75_75, STATE_VARIABLE_LineContext_69_69, &STATE_VARIABLE_LineContext_76_76, STATE_VARIABLE_LinePosn_70_70, &STATE_VARIABLE_LinePosn_77_77);
      if ((MaybeFirstRawItemBlock_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          *ParseTree_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_142));
          MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_141));
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
        STATE_VARIABLE_LineContext_88_88 = STATE_VARIABLE_LineContext_76_76;
        STATE_VARIABLE_LinePosn_89_89 = STATE_VARIABLE_LinePosn_77_77;
        STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_74_74;
        STATE_VARIABLE_Errors_87_87 = STATE_VARIABLE_Errors_75_75;
        STATE_VARIABLE_SeqNumCounter_85_85 = STATE_VARIABLE_SeqNumCounter_73_73;
        STATE_VARIABLE_LookAhead_84_84 = STATE_VARIABLE_LookAhead_72_72;
      }
      else
      {
        MR_Word FirstRawItemBlock_34;
        MR_Word FirstSectionKind_37;
        MR_Word FirstIncls_38;
        MR_Word FirstAvails_39;
        MR_Word FirstFIMs_40;
        MR_Word FirstItems_41;
        MR_Tuple Var_78 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFirstRawItemBlock_33, (MR_Integer) 0))));

        FirstRawItemBlock_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
        FirstSectionKind_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_34, (MR_Integer) 1))));
        FirstIncls_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_34, (MR_Integer) 2))));
        FirstAvails_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_34, (MR_Integer) 3))));
        FirstFIMs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_34, (MR_Integer) 4))));
        FirstItems_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRawItemBlock_34, (MR_Integer) 5))));
        switch (FirstSectionKind_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                *ParseTree_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_142));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_141));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_32));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FirstIncls_38));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FirstAvails_39));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FirstFIMs_40));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (FirstItems_41));
              }
              STATE_VARIABLE_LineContext_88_88 = STATE_VARIABLE_LineContext_76_76;
              STATE_VARIABLE_LinePosn_89_89 = STATE_VARIABLE_LinePosn_77_77;
              STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_74_74;
              STATE_VARIABLE_Errors_87_87 = STATE_VARIABLE_Errors_75_75;
              STATE_VARIABLE_SeqNumCounter_85_85 = STATE_VARIABLE_SeqNumCounter_73_73;
              STATE_VARIABLE_LookAhead_84_84 = STATE_VARIABLE_LookAhead_72_72;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word MaybeSecondRawItemBlock_42;
              MR_Word STATE_VARIABLE_Specs_86_86;

              parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(FileString_15, FileStringLen_16, ModuleName_142, SourceFileName_14, (MR_String) "implementation", STATE_VARIABLE_LookAhead_72_72, &STATE_VARIABLE_LookAhead_84_84, &MaybeSecondRawItemBlock_42, STATE_VARIABLE_SeqNumCounter_73_73, &STATE_VARIABLE_SeqNumCounter_85_85, STATE_VARIABLE_Specs_74_74, &STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Errors_75_75, &STATE_VARIABLE_Errors_87_87, STATE_VARIABLE_LineContext_76_76, &STATE_VARIABLE_LineContext_88_88, STATE_VARIABLE_LinePosn_77_77, &STATE_VARIABLE_LinePosn_89_89);
              if ((MaybeSecondRawItemBlock_42 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                  *ParseTree_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_142));
                  MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_141));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_32));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FirstIncls_38));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FirstAvails_39));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FirstFIMs_40));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FirstItems_41));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_86_86;
              }
              else
              {
                MR_Word SecondRawItemBlock_43;
                MR_Word SectionContext_44;
                MR_Word SecondSectionKind_46;
                MR_Word SecondIncls_47;
                MR_Word SecondAvails_48;
                MR_Word SecondFIMs_49;
                MR_Word SecondItems_50;
                MR_Tuple Var_90 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeSecondRawItemBlock_42, (MR_Integer) 0))));

                SecondRawItemBlock_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 0))));
                SectionContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 1))));
                SecondSectionKind_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_43, (MR_Integer) 1))));
                SecondIncls_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_43, (MR_Integer) 2))));
                SecondAvails_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_43, (MR_Integer) 3))));
                SecondFIMs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_43, (MR_Integer) 4))));
                SecondItems_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRawItemBlock_43, (MR_Integer) 5))));
                switch (SecondSectionKind_46) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                        *ParseTree_22 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_142));
                        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_141));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_32));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FirstIncls_38));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SecondIncls_47));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FirstAvails_39));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SecondAvails_48));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FirstFIMs_40));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SecondFIMs_49));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FirstItems_41));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (SecondItems_50));
                      }
                      STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_86_86;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_52;

                      {
                        Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int\'/12"));
                        MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                        MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (SectionContext_44));
                        MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[23])));
                      }
                      {
                        STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (Spec_52));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_86_86));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                        *ParseTree_22 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_142));
                        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_141));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_32));
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
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_13));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(SourceFileName_14, FileString_15, FileStringLen_16, ModuleName_142, Var_127, STATE_VARIABLE_LookAhead_84_84, STATE_VARIABLE_SeqNumCounter_85_85, STATE_VARIABLE_Specs_105_105, STATE_VARIABLE_Specs_57, STATE_VARIABLE_Errors_87_87, STATE_VARIABLE_Errors_58, STATE_VARIABLE_LineContext_88_88, &_LineContext_53, STATE_VARIABLE_LinePosn_89_89, &_LinePosn_54);
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_95_115_101_99_116_105_111_110_95_95_91_51_93_95_48_19_p_0(
  MR_String FileString_20,
  MR_Integer FileStringLen_21,
  MR_Word CurModuleName_23,
  MR_String SourceFileName_24,
  MR_String ExpectedSectionKindStr_25,
  MR_Word InitLookAhead_26,
  MR_Word * FinalLookAhead_27,
  MR_Word * MaybeRawItemBlock_28,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_71,
  MR_Word * STATE_VARIABLE_SeqNumCounter_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74,
  MR_Word STATE_VARIABLE_Errors_0_75,
  MR_Word * STATE_VARIABLE_Errors_76,
  MR_Word STATE_VARIABLE_LineContext_0_77,
  MR_Word * STATE_VARIABLE_LineContext_78,
  MR_Word STATE_VARIABLE_LinePosn_0_79,
  MR_Word * STATE_VARIABLE_LinePosn_80)
{
  {
    MR_Word ReadIOMResult_34;
    MR_Word STATE_VARIABLE_SeqNumCounter_81_81;
    MR_Word STATE_VARIABLE_LineContext_82_82;
    MR_Word STATE_VARIABLE_LinePosn_83_83;

    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_24, FileString_20, FileStringLen_21, InitLookAhead_26, CurModuleName_23, &ReadIOMResult_34, STATE_VARIABLE_SeqNumCounter_0_71, &STATE_VARIABLE_SeqNumCounter_81_81, STATE_VARIABLE_LineContext_0_77, &STATE_VARIABLE_LineContext_82_82, STATE_VARIABLE_LinePosn_0_79, &STATE_VARIABLE_LinePosn_83_83);
    switch (MR_tag((MR_Word) ReadIOMResult_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Specs_74 = STATE_VARIABLE_Specs_0_73;
          *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
          *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
          *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_34, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_74 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemSpec_35));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_75, STATE_VARIABLE_Errors_76);
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
          *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
          *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemSpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_34, (MR_Integer) 2))));
          MR_Word ItemErrors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadIOMResult_34, (MR_Integer) 3))));

          *STATE_VARIABLE_Specs_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_73);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ItemErrors_39, STATE_VARIABLE_Errors_0_75, STATE_VARIABLE_Errors_76);
          *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_27 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
          *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
          *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
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
              {
                MR_Word Context_141;
                MR_Word IOMPieces_142;
                MR_Word Pieces_143;
                MR_Word Spec_144;
                MR_Word Var_146;
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_155;

                Context_141 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                IOMPieces_142 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                }
                {
                  Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                }
                {
                  Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                  MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_149));
                }
                Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_142, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                Pieces_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_146, Var_155);
                {
                  Spec_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_144, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                  MR_hl_field(MR_mktag(1), Spec_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_144, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_144, 3) = ((MR_Box) (Context_141));
                  MR_hl_field(MR_mktag(1), Spec_144, 4) = ((MR_Box) (Pieces_143));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_74 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_144));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_27 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                }
                *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemSpecs_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_42, (MR_Integer) 1))));
                MR_Word Context_162;
                MR_Word IOMPieces_163;
                MR_Word Pieces_164;
                MR_Word Spec_165;
                MR_Word STATE_VARIABLE_Specs_84_166;
                MR_Word Var_167;
                MR_Word Var_170;
                MR_Word Var_171;
                MR_Word Var_176;

                STATE_VARIABLE_Specs_84_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_126, STATE_VARIABLE_Specs_0_73);
                Context_162 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                IOMPieces_163 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                {
                  Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                }
                {
                  Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
                  MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                }
                {
                  Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                  MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_170));
                }
                Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_163, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_167, Var_176);
                {
                  Spec_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_165, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                  MR_hl_field(MR_mktag(1), Spec_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_165, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_165, 3) = ((MR_Box) (Context_162));
                  MR_hl_field(MR_mktag(1), Spec_165, 4) = ((MR_Box) (Pieces_164));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_74 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_165));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_84_166));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_27 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                }
                *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Context_225;
                MR_Word IOMPieces_226;
                MR_Word Pieces_227;
                MR_Word Spec_228;
                MR_Word Var_230;
                MR_Word Var_233;
                MR_Word Var_234;
                MR_Word Var_239;

                Context_225 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                IOMPieces_226 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                {
                  Var_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_234, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                }
                {
                  Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (Var_234));
                  MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                }
                {
                  Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                  MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_233));
                }
                Var_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_226, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                Pieces_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_230, Var_239);
                {
                  Spec_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_228, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                  MR_hl_field(MR_mktag(1), Spec_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_228, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_228, 3) = ((MR_Box) (Context_225));
                  MR_hl_field(MR_mktag(1), Spec_228, 4) = ((MR_Box) (Pieces_227));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_74 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_228));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_27 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                }
                *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Context_183;
                    MR_Word IOMPieces_184;
                    MR_Word Pieces_185;
                    MR_Word Spec_186;
                    MR_Word Var_188;
                    MR_Word Var_191;
                    MR_Word Var_192;
                    MR_Word Var_197;

                    Context_183 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_184 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
                      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_191));
                    }
                    Var_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_184, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_188, Var_197);
                    {
                      Spec_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_186, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_186, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_186, 3) = ((MR_Box) (Context_183));
                      MR_hl_field(MR_mktag(1), Spec_186, 4) = ((MR_Box) (Pieces_185));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_186));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Context_204;
                    MR_Word IOMPieces_205;
                    MR_Word Pieces_206;
                    MR_Word Spec_207;
                    MR_Word Var_209;
                    MR_Word Var_212;
                    MR_Word Var_213;
                    MR_Word Var_218;

                    Context_204 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_205 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_213));
                      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_212));
                    }
                    Var_218 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_205, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_209, Var_218);
                    {
                      Spec_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_207, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_207, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_207, 3) = ((MR_Box) (Context_204));
                      MR_hl_field(MR_mktag(1), Spec_207, 4) = ((MR_Box) (Pieces_206));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_207));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Context_309;
                    MR_Word IOMPieces_310;
                    MR_Word Pieces_311;
                    MR_Word Spec_312;
                    MR_Word Var_314;
                    MR_Word Var_317;
                    MR_Word Var_318;
                    MR_Word Var_323;

                    Context_309 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_310 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_318 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_318, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_318, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_317, 0) = ((MR_Box) (Var_318));
                      MR_hl_field(MR_mktag(1), Var_317, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_314, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_314, 1) = ((MR_Box) (Var_317));
                    }
                    Var_323 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_310, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_311 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_314, Var_323);
                    {
                      Spec_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_312, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_312, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_312, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_312, 3) = ((MR_Box) (Context_309));
                      MR_hl_field(MR_mktag(1), Spec_312, 4) = ((MR_Box) (Pieces_311));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_312));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Context_288;
                    MR_Word IOMPieces_289;
                    MR_Word Pieces_290;
                    MR_Word Spec_291;
                    MR_Word Var_293;
                    MR_Word Var_296;
                    MR_Word Var_297;
                    MR_Word Var_302;

                    Context_288 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_289 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_297 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_297, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_297, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_296, 0) = ((MR_Box) (Var_297));
                      MR_hl_field(MR_mktag(1), Var_296, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_293, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_293, 1) = ((MR_Box) (Var_296));
                    }
                    Var_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_289, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_293, Var_302);
                    {
                      Spec_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_291, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_291, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_291, 3) = ((MR_Box) (Context_288));
                      MR_hl_field(MR_mktag(1), Spec_291, 4) = ((MR_Box) (Pieces_290));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_291));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Context_267;
                    MR_Word IOMPieces_268;
                    MR_Word Pieces_269;
                    MR_Word Spec_270;
                    MR_Word Var_272;
                    MR_Word Var_275;
                    MR_Word Var_276;
                    MR_Word Var_281;

                    Context_267 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_268 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_276 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_276, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_276, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Var_276));
                      MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) (Var_275));
                    }
                    Var_281 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_268, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_269 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_272, Var_281);
                    {
                      Spec_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_270, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_270, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_270, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_270, 3) = ((MR_Box) (Context_267));
                      MR_hl_field(MR_mktag(1), Spec_270, 4) = ((MR_Box) (Pieces_269));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_270));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Context_246;
                    MR_Word IOMPieces_247;
                    MR_Word Pieces_248;
                    MR_Word Spec_249;
                    MR_Word Var_251;
                    MR_Word Var_254;
                    MR_Word Var_255;
                    MR_Word Var_260;

                    Context_246 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_247 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_255, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_255, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Var_255));
                      MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (Var_254));
                    }
                    Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_247, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_251, Var_260);
                    {
                      Spec_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_249, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_249, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_249, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_249, 3) = ((MR_Box) (Context_246));
                      MR_hl_field(MR_mktag(1), Spec_249, 4) = ((MR_Box) (Pieces_248));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_249));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SectionKind_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word SectionContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_42, (MR_Integer) 2))));
                    MR_Word InclsCord_47;
                    MR_Word AvailsCord_48;
                    MR_Word FIMsCord_49;
                    MR_Word ItemsCord_50;
                    MR_Word RawItemBlock_52;
                    MR_Word Var_107;
                    MR_Word Var_108;
                    MR_Word Var_109;
                    MR_Word Var_110;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_118;
                    MR_Word Var_119;
                    MR_Tuple Var_120;
                    MR_Word _VNInfo_46;
                    MR_String _UpdatedSourceFileName_51;

                    Var_107 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
                    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
                    Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
                    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_20, FileStringLen_21, CurModuleName_23, (MR_Word) ((MR_Unsigned) 0U), FinalLookAhead_27, (MR_Word) ((MR_Unsigned) 0U), &_VNInfo_46, Var_107, &InclsCord_47, Var_108, &AvailsCord_48, Var_109, &FIMsCord_49, Var_110, &ItemsCord_50, SourceFileName_24, &_UpdatedSourceFileName_51, STATE_VARIABLE_SeqNumCounter_81_81, STATE_VARIABLE_SeqNumCounter_72, STATE_VARIABLE_Specs_0_73, STATE_VARIABLE_Specs_74, STATE_VARIABLE_Errors_0_75, STATE_VARIABLE_Errors_76, STATE_VARIABLE_LineContext_82_82, STATE_VARIABLE_LineContext_78, STATE_VARIABLE_LinePosn_83_83, STATE_VARIABLE_LinePosn_80);
                    Var_116 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_47);
                    Var_117 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_48);
                    Var_118 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_49);
                    Var_119 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_50);
                    {
                      RawItemBlock_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 0) = ((MR_Box) (CurModuleName_23));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 1) = ((MR_Box) (SectionKind_43));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 2) = ((MR_Box) (Var_116));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 3) = ((MR_Box) (Var_117));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 4) = ((MR_Box) (Var_118));
                      MR_hl_field(MR_mktag(0), RawItemBlock_52, 5) = ((MR_Box) (Var_119));
                    }
                    {
                      Var_120 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (RawItemBlock_52));
                      MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (SectionContext_44));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeRawItemBlock_28 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_120));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Context_67;
                    MR_Word IOMPieces_68;
                    MR_Word Pieces_69;
                    MR_Word Spec_70;
                    MR_Word Var_85;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_94;

                    Context_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_41);
                    IOMPieces_68 = parse_tree__parse_types__iom_desc_pieces_1_f_0(IOM_42);
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ExpectedSectionKindStr_25));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[26])));
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[24])));
                      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
                    }
                    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOMPieces_68, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
                    Pieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, Var_94);
                    {
                      Spec_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_int_section\'/19"));
                      MR_hl_field(MR_mktag(1), Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), Spec_70, 3) = ((MR_Box) (Context_67));
                      MR_hl_field(MR_mktag(1), Spec_70, 4) = ((MR_Box) (Pieces_69));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_74 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_70));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_41));
                    }
                    *MaybeRawItemBlock_28 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_SeqNumCounter_72 = STATE_VARIABLE_SeqNumCounter_81_81;
                    *STATE_VARIABLE_Errors_76 = STATE_VARIABLE_Errors_0_75;
                    *STATE_VARIABLE_LineContext_78 = STATE_VARIABLE_LineContext_82_82;
                    *STATE_VARIABLE_LinePosn_80 = STATE_VARIABLE_LinePosn_83_83;
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
  MR_Integer FileStringLen_20,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word InitLookAhead_24,
  MR_Word * FinalLookAhead_25,
  MR_Word * MaybeVersionNumbers_26,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_57,
  MR_Word * STATE_VARIABLE_SeqNumCounter_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60,
  MR_Word STATE_VARIABLE_Errors_0_61,
  MR_Word * STATE_VARIABLE_Errors_62,
  MR_Word STATE_VARIABLE_LineContext_0_63,
  MR_Word * STATE_VARIABLE_LineContext_64,
  MR_Word STATE_VARIABLE_LinePosn_0_65,
  MR_Word * STATE_VARIABLE_LinePosn_66)
{
  while (MR_TRUE)
  {
    MR_Word ReadIOMResult_32;
    MR_Word STATE_VARIABLE_SeqNumCounter_67_67;
    MR_Word STATE_VARIABLE_LineContext_68_68;
    MR_Word STATE_VARIABLE_LinePosn_69_69;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_23, FileString_19, FileStringLen_20, InitLookAhead_24, ModuleName_22, &ReadIOMResult_32, STATE_VARIABLE_SeqNumCounter_0_57, &STATE_VARIABLE_SeqNumCounter_67_67, STATE_VARIABLE_LineContext_0_63, &STATE_VARIABLE_LineContext_68_68, STATE_VARIABLE_LinePosn_0_65, &STATE_VARIABLE_LinePosn_69_69);
    switch (MR_tag((MR_Word) ReadIOMResult_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
          *FinalLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SeqNumCounter_58 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
          *STATE_VARIABLE_Errors_62 = STATE_VARIABLE_Errors_0_61;
          *STATE_VARIABLE_LineContext_64 = STATE_VARIABLE_LineContext_68_68;
          *STATE_VARIABLE_LinePosn_66 = STATE_VARIABLE_LinePosn_69_69;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSpec_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadIOMResult_32, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Specs_71_71;
          MR_Word STATE_VARIABLE_Errors_73_73;
          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_57;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_59;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_61;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_63;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_65;

          {
            STATE_VARIABLE_Specs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 0) = ((MR_Box) (ItemSpec_33));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_Errors_0_61, &STATE_VARIABLE_Errors_73_73);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_SeqNumCounter_0_57 = STATE_VARIABLE_SeqNumCounter_67_67;
          next_value_of_STATE_VARIABLE_Specs_0_59 = STATE_VARIABLE_Specs_71_71;
          next_value_of_STATE_VARIABLE_Errors_0_61 = STATE_VARIABLE_Errors_73_73;
          next_value_of_STATE_VARIABLE_LineContext_0_63 = STATE_VARIABLE_LineContext_68_68;
          next_value_of_STATE_VARIABLE_LinePosn_0_65 = STATE_VARIABLE_LinePosn_69_69;
          InitLookAhead_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_SeqNumCounter_0_57 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_57;
          STATE_VARIABLE_Specs_0_59 = next_value_of_STATE_VARIABLE_Specs_0_59;
          STATE_VARIABLE_Errors_0_61 = next_value_of_STATE_VARIABLE_Errors_0_61;
          STATE_VARIABLE_LineContext_0_63 = next_value_of_STATE_VARIABLE_LineContext_0_63;
          STATE_VARIABLE_LinePosn_0_65 = next_value_of_STATE_VARIABLE_LinePosn_0_65;
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
          *STATE_VARIABLE_SeqNumCounter_58 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
          *STATE_VARIABLE_Errors_62 = STATE_VARIABLE_Errors_0_61;
          *STATE_VARIABLE_LineContext_64 = STATE_VARIABLE_LineContext_68_68;
          *STATE_VARIABLE_LinePosn_66 = STATE_VARIABLE_LinePosn_69_69;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IOM_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 2))));
          MR_Word IOMVarSet_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 0))));
          MR_Word IOMTerm_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadIOMResult_32, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) IOM_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              {
                *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_80));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_81));
                }
                *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemSpecs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_38, (MR_Integer) 1))));

                *STATE_VARIABLE_Specs_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_56, STATE_VARIABLE_Specs_0_59);
                *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *FinalLookAhead_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_80));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_81));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_38, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                  {
                    *MaybeVersionNumbers_26 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *FinalLookAhead_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOMVarSet_80));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOMTerm_81));
                    }
                    *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word VN_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_38, (MR_Integer) 1))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeVersionNumbers_26 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VN_39));
                    }
                    *FinalLookAhead_25 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_SeqNumCounter_58 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_Errors_62 = STATE_VARIABLE_Errors_0_61;
          *STATE_VARIABLE_LineContext_64 = STATE_VARIABLE_LineContext_68_68;
          *STATE_VARIABLE_LinePosn_66 = STATE_VARIABLE_LinePosn_69_69;
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
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_46,
  MR_Word STATE_VARIABLE_LinePosn_0_47,
  MR_Word Globals_19,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_48,
  MR_Word * STATE_VARIABLE_Errors_49)
{
  parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(OptFileKind_13, SourceFileName0_14, FileString_15, FileStringLen_16, STATE_VARIABLE_LineContext_0_46, STATE_VARIABLE_LinePosn_0_47, DefaultModuleName_20, DefaultExpectationContexts_21, ParseTree_22, STATE_VARIABLE_Specs_48, STATE_VARIABLE_Errors_49);
}

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__659__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__read_parse_tree_opt__656__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0(
  MR_Word OptFileKind_13,
  MR_String SourceFileName0_14,
  MR_String FileString_15,
  MR_Integer FileStringLen_16,
  MR_Word STATE_VARIABLE_LineContext_0_46,
  MR_Word STATE_VARIABLE_LinePosn_0_47,
  MR_Word DefaultModuleName_20,
  MR_Word DefaultExpectationContexts_21,
  MR_Word * ParseTree_22,
  MR_Word * STATE_VARIABLE_Specs_48,
  MR_Word * STATE_VARIABLE_Errors_49)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleHeader_25;
    MR_Word SeqNumCounter1_26;
    MR_Word STATE_VARIABLE_LineContext_50_50;
    MR_Word STATE_VARIABLE_LinePosn_51_51;

    parse_tree__parse_module__read_module_header_11_p_0(FileString_15, FileStringLen_16, DefaultModuleName_20, DefaultExpectationContexts_21, SourceFileName0_14, &MaybeModuleHeader_25, &SeqNumCounter1_26, STATE_VARIABLE_LineContext_0_46, &STATE_VARIABLE_LineContext_50_50, STATE_VARIABLE_LinePosn_0_47, &STATE_VARIABLE_LinePosn_51_51);
    if (((MR_tag((MR_Word) MaybeModuleHeader_25)) == (MR_Integer) 0))
    {
      MR_Word ModuleNameContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_25, (MR_Integer) 0))));
      MR_Word NoModuleErrors_29;

      *STATE_VARIABLE_Specs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_25, (MR_Integer) 1))));
      NoModuleErrors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleHeader_25, (MR_Integer) 2))));
      *STATE_VARIABLE_Errors_49 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), NoModuleErrors_29);
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
    }
    else
    {
      MR_Word FinalLookAhead_31;
      MR_Word InclsCord_33;
      MR_Word AvailsCord_34;
      MR_Word FIMsCord_35;
      MR_Word ItemsCord_36;
      MR_String SourceFileName_37;
      MR_Word SeqNumCounter_38;
      MR_Word Avails_41;
      MR_Word Imports_42;
      MR_Word Uses_43;
      MR_Word FIMs_44;
      MR_Word Items_45;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word Var_60;
      MR_Word STATE_VARIABLE_Errors_61_61;
      MR_Word STATE_VARIABLE_LineContext_62_62;
      MR_Word STATE_VARIABLE_LinePosn_63_63;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_70;
      MR_Word ModuleNameContext_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_25, (MR_Integer) 1))));
      MR_Word ModuleName_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleHeader_25, (MR_Integer) 0))));
      MR_Word Var_32;
      MR_Word _LineContext_39;
      MR_Word _LinePosn_40;

      Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
      Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
      Var_56 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
      Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
      Var_60 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(FileString_15, FileStringLen_16, ModuleName_80, (MR_Word) ((MR_Unsigned) 0U), &FinalLookAhead_31, (MR_Word) ((MR_Unsigned) 0U), &Var_32, Var_54, &InclsCord_33, Var_55, &AvailsCord_34, Var_56, &FIMsCord_35, Var_57, &ItemsCord_36, SourceFileName0_14, &SourceFileName_37, SeqNumCounter1_26, &SeqNumCounter_38, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_59_59, Var_60, &STATE_VARIABLE_Errors_61_61, STATE_VARIABLE_LineContext_50_50, &STATE_VARIABLE_LineContext_62_62, STATE_VARIABLE_LinePosn_51_51, &STATE_VARIABLE_LinePosn_63_63);
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_64, 0) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
      }
      parse_tree__parse_module__check_for_unexpected_item_at_end_15_p_0(SourceFileName_37, FileString_15, FileStringLen_16, ModuleName_80, Var_64, FinalLookAhead_31, SeqNumCounter_38, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_48, STATE_VARIABLE_Errors_61_61, STATE_VARIABLE_Errors_49, STATE_VARIABLE_LineContext_62_62, &_LineContext_39, STATE_VARIABLE_LinePosn_63_63, &_LinePosn_40);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_7[12]));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (InclsCord_33));
      }
      mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Incls != []");
      Avails_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_34);
      parse_tree__item_util__avail_imports_uses_3_p_0(Avails_41, &Imports_42, &Uses_43);
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_111_112_116_95_95_91_55_93_95_48_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Imports_42));
        MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140parse_tree.parse_module.read_parse_tree_opt\'/12", (MR_String) "Imports != []");
      FIMs_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_35);
      Items_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_36);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *ParseTree_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_80));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_79));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Uses_43));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FIMs_44));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Items_45));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_95_91_51_93_95_48_28_p_0(
  MR_String FileString_29,
  MR_Integer FileStringLen_30,
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
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_95_115_101_113_117_101_110_99_101_95_105_110_110_101_114_95_95_91_51_93_95_48_30_p_0(FileString_29, FileStringLen_30, ModuleName_32, (MR_Integer) 1024, &NumItemsLeft_46, InitLookAhead_33, &MidLookAhead_47, STATE_VARIABLE_VNInfo_0_48, &STATE_VARIABLE_VNInfo_71_71, STATE_VARIABLE_InclsCord_0_50, &STATE_VARIABLE_InclsCord_72_72, STATE_VARIABLE_AvailsCord_0_52, &STATE_VARIABLE_AvailsCord_73_73, STATE_VARIABLE_FIMsCord_0_54, &STATE_VARIABLE_FIMsCord_74_74, STATE_VARIABLE_ItemsCord_0_56, &STATE_VARIABLE_ItemsCord_75_75, STATE_VARIABLE_SourceFileName_0_58, &STATE_VARIABLE_SourceFileName_76_76, STATE_VARIABLE_SeqNumCounter_0_60, &STATE_VARIABLE_SeqNumCounter_77_77, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_78_78, STATE_VARIABLE_Errors_0_64, &STATE_VARIABLE_Errors_79_79, STATE_VARIABLE_LineContext_0_66, &STATE_VARIABLE_LineContext_80_80, STATE_VARIABLE_LinePosn_0_68, &STATE_VARIABLE_LinePosn_81_81);
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
  MR_Integer FileStringLen_32,
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

      parse_tree__parse_module__read_next_item_or_marker_12_p_0(STATE_VARIABLE_SourceFileName_0_89, FileString_31, FileStringLen_32, InitLookAhead_36, ModuleName_34, &ReadIOMResult_49, STATE_VARIABLE_SeqNumCounter_0_91, &STATE_VARIABLE_SeqNumCounter_102_102, STATE_VARIABLE_LineContext_0_97, &STATE_VARIABLE_LineContext_103_103, STATE_VARIABLE_LinePosn_0_99, &STATE_VARIABLE_LinePosn_104_104);
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
            MR_Word ItemSpecs_222;
            MR_Word ItemErrors_223;
            MR_Word STATE_VARIABLE_Specs_149_224;
            MR_Word STATE_VARIABLE_Errors_150_225;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

            {
              ItemSpecs_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ItemSpecs_222, 0) = ((MR_Box) (ItemSpec_50));
              MR_hl_field(MR_mktag(1), ItemSpecs_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ItemErrors_223 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
            STATE_VARIABLE_Specs_149_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_222, STATE_VARIABLE_Specs_0_93);
            STATE_VARIABLE_Errors_150_225 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_95, ItemErrors_223);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
            next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_149_224;
            next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_150_225;
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
            MR_Word STATE_VARIABLE_Specs_149_149;
            MR_Word STATE_VARIABLE_Errors_150_150;
            MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
            MR_Word next_value_of_STATE_VARIABLE_Errors_0_95;
            MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
            MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

            STATE_VARIABLE_Specs_149_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_51, STATE_VARIABLE_Specs_0_93);
            STATE_VARIABLE_Errors_150_150 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), STATE_VARIABLE_Errors_0_95, ItemErrors_52);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
            next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_149_149;
            next_value_of_STATE_VARIABLE_Errors_0_95 = STATE_VARIABLE_Errors_150_150;
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
                  MR_Word STATE_VARIABLE_ItemsCord_110_181;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  STATE_VARIABLE_ItemsCord_110_181 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_87, ((MR_Box) (Item_75)));
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_87 = STATE_VARIABLE_ItemsCord_110_181;
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
                  MR_Word ItemSpecs_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_57, (MR_Integer) 1))));
                  MR_Word Item_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_57, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_Specs_109_187;
                  MR_Word STATE_VARIABLE_ItemsCord_110_188;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_87;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  STATE_VARIABLE_ItemsCord_110_188 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_87, ((MR_Box) (Item_165)));
                  STATE_VARIABLE_Specs_109_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_164, STATE_VARIABLE_Specs_0_93);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_ItemsCord_0_87 = STATE_VARIABLE_ItemsCord_110_188;
                  next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                  next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_109_187;
                  next_value_of_STATE_VARIABLE_LineContext_0_97 = STATE_VARIABLE_LineContext_103_103;
                  next_value_of_STATE_VARIABLE_LinePosn_0_99 = STATE_VARIABLE_LinePosn_104_104;
                  STATE_VARIABLE_NumItemsLeft_0_77 = next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  InitLookAhead_36 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_ItemsCord_0_87 = next_value_of_STATE_VARIABLE_ItemsCord_0_87;
                  STATE_VARIABLE_SeqNumCounter_0_91 = next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  STATE_VARIABLE_Specs_0_93 = next_value_of_STATE_VARIABLE_Specs_0_93;
                  STATE_VARIABLE_LineContext_0_97 = next_value_of_STATE_VARIABLE_LineContext_0_97;
                  STATE_VARIABLE_LinePosn_0_99 = next_value_of_STATE_VARIABLE_LinePosn_0_99;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Incls_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOM_57, (MR_Integer) 0))));
                  MR_Word HeadIncl_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_68, (MR_Integer) 0))));
                  MR_Word TailIncls_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incls_68, (MR_Integer) 1))));
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word STATE_VARIABLE_InclsCord_115_212;
                  MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                  MR_Word next_value_of_STATE_VARIABLE_InclsCord_0_81;
                  MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                  MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                  MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (HeadIncl_69));
                    MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (TailIncls_70));
                  }
                  Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_117);
                  STATE_VARIABLE_InclsCord_115_212 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_InclsCord_0_81, Var_116);
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                  next_value_of_STATE_VARIABLE_InclsCord_0_81 = STATE_VARIABLE_InclsCord_115_212;
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
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Avails_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word HeadAvail_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_71, (MR_Integer) 0))));
                      MR_Word TailAvails_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Avails_71, (MR_Integer) 1))));
                      MR_Word Var_113;
                      MR_Word Var_114;
                      MR_Word STATE_VARIABLE_AvailsCord_112_197;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_AvailsCord_0_83;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (HeadAvail_72));
                        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (TailAvails_73));
                      }
                      Var_113 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_114);
                      STATE_VARIABLE_AvailsCord_112_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_83, Var_113);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_AvailsCord_0_83 = STATE_VARIABLE_AvailsCord_112_197;
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
                  case (MR_Integer) 1:
                    {
                      MR_Word FIM_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_FIMsCord_111_203;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_85;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      STATE_VARIABLE_FIMsCord_111_203 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_FIMsCord_0_85, ((MR_Box) (FIM_74)));
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_FIMsCord_0_85 = STATE_VARIABLE_FIMsCord_111_203;
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
                  case (MR_Integer) 2:
                    {
                      MR_Word MVN_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_VNInfo_132_132;
                      MR_Word STATE_VARIABLE_Specs_133_133;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_VNInfo_0_79;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      parse_tree__parse_module__record_version_numbers_6_p_0(MVN_67, IOMTerm_56, STATE_VARIABLE_VNInfo_0_79, &STATE_VARIABLE_VNInfo_132_132, STATE_VARIABLE_Specs_0_93, &STATE_VARIABLE_Specs_133_133);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_VNInfo_0_79 = STATE_VARIABLE_VNInfo_132_132;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_133_133;
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
                  case (MR_Integer) 3:
                    {
                      MR_String STATE_VARIABLE_SourceFileName_118_220 = ((MR_String) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_89 = STATE_VARIABLE_SourceFileName_118_220;
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
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                  case (MR_Integer) 7:
                    {
                      MR_Word HandledSpecs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_57, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Specs_109_109;
                      MR_Integer next_value_of_STATE_VARIABLE_NumItemsLeft_0_77;
                      MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_91;
                      MR_Word next_value_of_STATE_VARIABLE_Specs_0_93;
                      MR_Word next_value_of_STATE_VARIABLE_LineContext_0_97;
                      MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_99;

                      STATE_VARIABLE_Specs_109_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HandledSpecs_76, STATE_VARIABLE_Specs_0_93);
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumItemsLeft_0_77 = STATE_VARIABLE_NumItemsLeft_105_105;
                      next_value_of_STATE_VARIABLE_SeqNumCounter_0_91 = STATE_VARIABLE_SeqNumCounter_102_102;
                      next_value_of_STATE_VARIABLE_Specs_0_93 = STATE_VARIABLE_Specs_109_109;
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
            MR_Word Var_32;
            MR_Word Spec_52;

            Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
            {
              Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.record_version_numbers\'/6"));
              MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[84])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
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
        MR_Word Var_48;

        Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), IOMTerm_8);
        {
          Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.record_version_numbers\'/6"));
          MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[78])));
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
  MR_Integer FileStringLen_18,
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

    parse_tree__parse_module__read_next_item_or_marker_12_p_0(SourceFileName_16, FileString_17, FileStringLen_18, FinalLookAhead_21, ModuleName_19, &IOMResult_27, SeqNumCounter0_22, &_SeqNumCounter_28, STATE_VARIABLE_LineContext_0_41, STATE_VARIABLE_LineContext_42, STATE_VARIABLE_LinePosn_0_43, STATE_VARIABLE_LinePosn_44);
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
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[97]));
        }
        break;
      case (MR_Integer) 1:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[92]));
        }
        break;
      case (MR_Integer) 2:
        {
          Error_12 = (MR_Integer) 5;
          Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[94]));
        }
        break;
    }
    {
      Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_unexpected_term_at_end\'/6"));
      MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
  MR_Integer FileStringLen_15,
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

    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_13, FileString_14, FileStringLen_15, STATE_VARIABLE_LineContext_0_27, STATE_VARIABLE_LineContext_28, STATE_VARIABLE_LinePosn_0_29, STATE_VARIABLE_LinePosn_30, &ReadTermResult_22);
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
          MR_String ErrorMsg_59 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTermResult_22, (MR_Integer) 0))));
          MR_Integer LineNumber_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ReadTermResult_22, (MR_Integer) 1))));
          MR_Word Context_61;
          MR_Word Pieces_62;
          MR_Word Spec_63;
          MR_Word Var_67;

          Context_61 = mercury__term__context_init_2_f_0(FileName_13, LineNumber_60);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ErrorMsg_59));
          }
          {
            Pieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_62, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), Pieces_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
          }
          {
            Spec_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
            MR_hl_field(MR_mktag(1), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_63, 3) = ((MR_Box) (Context_61));
            MR_hl_field(MR_mktag(1), Spec_63, 4) = ((MR_Box) (Pieces_62));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_63));
          }
          *STATE_VARIABLE_SeqNumCounter_26 = STATE_VARIABLE_SeqNumCounter_0_25;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_22, (MR_Integer) 0))));
          MR_Word Term_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTermResult_22, (MR_Integer) 1))));
          MR_Integer SeqNum_84;
          MR_Word MaybeItemOrMarker_85;
          MR_Word Var_89;

          mercury__counter__allocate_3_p_0(&SeqNum_84, STATE_VARIABLE_SeqNumCounter_0_25, STATE_VARIABLE_SeqNumCounter_26);
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (SeqNum_84));
          }
          parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_17, VarSet_64, Term_65, Var_89, &MaybeItemOrMarker_85);
          if (((MR_tag((MR_Word) MaybeItemOrMarker_85)) == (MR_Integer) 0))
          {
            MR_Word Specs_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_85, (MR_Integer) 0))));
            MR_Word Var_90;

            Var_90 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_18 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_64));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_65));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_87));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_90));
            }
          }
          else
          {
            MR_Word ItemOrMarker_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_85, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *ReadIOMResult_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarSet_64));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term_65));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ItemOrMarker_86));
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
    MR_Word Var_48;

    mercury__counter__allocate_3_p_0(&SeqNum_43, STATE_VARIABLE_SeqNumCounter_0_25, STATE_VARIABLE_SeqNumCounter_26);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SeqNum_43));
    }
    parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_17, LookAheadVarSet_23, LookAheadTerm_24, Var_48, &MaybeItemOrMarker_44);
    if (((MR_tag((MR_Word) MaybeItemOrMarker_44)) == (MR_Integer) 0))
    {
      MR_Word Specs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_44, (MR_Integer) 0))));
      MR_Word Var_49;

      Var_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *ReadIOMResult_18 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LookAheadVarSet_23));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LookAheadTerm_24));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_46));
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_49));
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
parse_tree__parse_module__read_module_header_11_p_0(
  MR_String FileString_12,
  MR_Integer FileStringLen_13,
  MR_Word DefaultModuleName_14,
  MR_Word DefaultExpectationContexts_15,
  MR_String SourceFileName_16,
  MR_Word * MaybeModuleHeader_17,
  MR_Word * STATE_VARIABLE_SeqNumCounter_30,
  MR_Word STATE_VARIABLE_LineContext_0_31,
  MR_Word * STATE_VARIABLE_LineContext_32,
  MR_Word STATE_VARIABLE_LinePosn_0_33,
  MR_Word * STATE_VARIABLE_LinePosn_34)
{
  {
    MR_Word ModuleDeclPresent_21;
    MR_Word STATE_VARIABLE_SeqNumCounter_36_36;
    MR_String _SourceFileName_22;

    mercury__counter__init_2_p_0((MR_Integer) 1, &STATE_VARIABLE_SeqNumCounter_36_36);
    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_12, FileStringLen_13, DefaultModuleName_14, DefaultExpectationContexts_15, &ModuleDeclPresent_21, (MR_Integer) 0, SourceFileName_16, &_SourceFileName_22, STATE_VARIABLE_SeqNumCounter_36_36, STATE_VARIABLE_SeqNumCounter_30, STATE_VARIABLE_LineContext_0_31, STATE_VARIABLE_LineContext_32, STATE_VARIABLE_LinePosn_0_33, STATE_VARIABLE_LinePosn_34);
    switch (MR_tag((MR_Word) ModuleDeclPresent_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NoModuleSpec_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_21, (MR_Integer) 1))));
          MR_Word NoModuleError_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleDeclPresent_21, (MR_Integer) 2))) & (MR_Integer) 15);
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;

          Var_48 = mercury__term__dummy_context_init_0_f_0();
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (NoModuleSpec_24));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NoModuleError_25));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *MaybeModuleHeader_17 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 0))));
          MR_Word ModuleNameContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 1))));
          MR_Word WrongSpec_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 2))));
          MR_Word WrongError_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleDeclPresent_21, (MR_Integer) 3))) & (MR_Integer) 15);
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word NoModuleSpec_53;
          MR_Word Pieces_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_80;
          MR_Word Var_83;
          MR_Word Var_84;

          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (DefaultModuleName_14));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (ModuleName_26));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[35])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[85])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Pieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[90])));
            MR_hl_field(MR_mktag(1), Pieces_61, 1) = ((MR_Box) (Var_64));
          }
          {
            NoModuleSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NoModuleSpec_53, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_wrong_module_start\'/3"));
            MR_hl_field(MR_mktag(1), NoModuleSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), NoModuleSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), NoModuleSpec_53, 3) = ((MR_Box) (ModuleNameContext_27));
            MR_hl_field(MR_mktag(1), NoModuleSpec_53, 4) = ((MR_Box) (Pieces_61));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (NoModuleSpec_53));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (WrongSpec_28));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (WrongError_29));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[72])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *MaybeModuleHeader_17 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleNameContext_27));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_21, (MR_Integer) 0))));
          MR_Word ModuleNameContext_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleDeclPresent_21, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleHeader_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_55));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_56));
          }
        }
        break;
    }
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
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[16])));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_2(
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
    MR_Word conv2_STATE_VARIABLE_Specs_48;
    MR_Word conv1_STATE_VARIABLE_Errors_49;

    parse_tree__parse_module__read_parse_tree_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_48, &conv1_STATE_VARIABLE_Errors_49);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_48));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_49));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_trans_opt_8_p_0_1(
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
parse_tree__parse_module__actually_read_module_trans_opt_8_p_0(
  MR_Word Globals_9,
  MR_Word DefaultModuleName_10,
  MR_Word MaybeFileNameAndStream_11,
  MR_Word * ParseTreeTransOpt_12,
  MR_Word * Specs_13,
  MR_Word * Errors_14)
{
  {
    MR_Word ParseTreeOpt_18;
    MR_Word ReadSpecs_19;
    MR_Word Specs0_24;
    MR_Word Var_17;
    MR_Box conv4_ParseTreeOpt_18;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_11, (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]), &Var_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[10]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[11]), &conv4_ParseTreeOpt_18, &ReadSpecs_19, Errors_14);
    ParseTreeOpt_18 = ((MR_Word) (conv4_ParseTreeOpt_18));
    if (((MR_tag((MR_Word) MaybeFileNameAndStream_11)) == (MR_Integer) 1))
      Specs0_24 = ReadSpecs_19;
    else
    {
      MR_String FileName_20;
      MR_Word ModuleName_22;
      MR_Word NameSpecs_23;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_11, (MR_Integer) 0))));

      FileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
      ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_18, (MR_Integer) 0))));
      parse_tree__parse_module__check_module_has_expected_name_6_p_0(FileName_20, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), &NameSpecs_23);
      Specs0_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ReadSpecs_19, NameSpecs_23);
    }
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(ParseTreeOpt_18, ParseTreeTransOpt_12, Specs0_24, Specs_13);
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_2(
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
    MR_Word conv2_STATE_VARIABLE_Specs_48;
    MR_Word conv1_STATE_VARIABLE_Errors_49;

    parse_tree__parse_module__read_parse_tree_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_48, &conv1_STATE_VARIABLE_Errors_49);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_48));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_49));
  }
}

static void MR_CALL 
parse_tree__parse_module__actually_read_module_plain_opt_8_p_0_1(
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
parse_tree__parse_module__actually_read_module_plain_opt_8_p_0(
  MR_Word Globals_9,
  MR_Word DefaultModuleName_10,
  MR_Word MaybeFileNameAndStream_11,
  MR_Word * ParseTreePlainOpt_12,
  MR_Word * Specs_13,
  MR_Word * Errors_14)
{
  {
    MR_Word ParseTreeOpt_18;
    MR_Word ReadSpecs_19;
    MR_Word Specs0_24;
    MR_Word Var_17;
    MR_Box conv4_ParseTreeOpt_18;

    parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(Globals_9, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_11, (MR_Word) (&parse_tree__parse_module_scalar_common_2[0]), &Var_17, (MR_Word) (&parse_tree__parse_module_scalar_common_7[8]), (MR_Word) (&parse_tree__parse_module_scalar_common_7[9]), &conv4_ParseTreeOpt_18, &ReadSpecs_19, Errors_14);
    ParseTreeOpt_18 = ((MR_Word) (conv4_ParseTreeOpt_18));
    if (((MR_tag((MR_Word) MaybeFileNameAndStream_11)) == (MR_Integer) 1))
      Specs0_24 = ReadSpecs_19;
    else
    {
      MR_String FileName_20;
      MR_Word ModuleName_22;
      MR_Word NameSpecs_23;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_11, (MR_Integer) 0))));

      FileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
      ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_18, (MR_Integer) 0))));
      parse_tree__parse_module__check_module_has_expected_name_6_p_0(FileName_20, DefaultModuleName_10, (MR_Word) ((MR_Unsigned) 0U), ModuleName_22, (MR_Word) ((MR_Unsigned) 0U), &NameSpecs_23);
      Specs0_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ReadSpecs_19, NameSpecs_23);
    }
    parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(ParseTreeOpt_18, ParseTreePlainOpt_12, Specs0_24, Specs_13);
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
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[11])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[9])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[8])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        MainPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[7])));
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
        MainMsg_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MainMsg_25, 0) = ((MR_Box) (MaybeContext_23));
        MR_hl_field(MR_mktag(3), MainMsg_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MainMsg_25, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MainMsg_25, 3) = ((MR_Box) (Var_57));
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
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
        MR_hl_field(MR_mktag(3), Spec_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Spec_13, 3) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(3), Spec_13, 4) = ((MR_Box) (Var_67));
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
    MR_Word conv2_STATE_VARIABLE_Specs_57;
    MR_Word conv1_STATE_VARIABLE_Errors_58;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_57, &conv1_STATE_VARIABLE_Errors_58);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_57));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_58));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 8, &HaltAtInvalidInterface_49);
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
    MR_Word conv2_STATE_VARIABLE_Specs_57;
    MR_Word conv1_STATE_VARIABLE_Errors_58;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_57, &conv1_STATE_VARIABLE_Errors_58);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_57));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_58));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 8, &HaltAtInvalidInterface_49);
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
    MR_Word conv2_STATE_VARIABLE_Specs_57;
    MR_Word conv1_STATE_VARIABLE_Errors_58;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_57, &conv1_STATE_VARIABLE_Errors_58);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_57));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_58));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 8, &HaltAtInvalidInterface_49);
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
    MR_Word conv2_STATE_VARIABLE_Specs_57;
    MR_Word conv1_STATE_VARIABLE_Errors_58;

    parse_tree__parse_module__read_parse_tree_int_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_22, &conv2_STATE_VARIABLE_Specs_57, &conv1_STATE_VARIABLE_Errors_58);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_22));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_57));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_58));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 8, &HaltAtInvalidInterface_49);
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
    MR_Word conv2_STATE_VARIABLE_Specs_43;
    MR_Word conv1_STATE_VARIABLE_Errors_44;

    parse_tree__parse_module__read_parse_tree_src_11_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), &conv3_ParseTree_20, &conv2_STATE_VARIABLE_Specs_43, &conv1_STATE_VARIABLE_Errors_44);
    *wrapper_arg_9 = ((MR_Box) (conv3_ParseTree_20));
    *wrapper_arg_10 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_43));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_Errors_44));
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

static MR_bool MR_CALL 
parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_module__IntroducedFrom__pred__do_actually_read_module__572__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
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
      MR_String ErrorMsg_69 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

      func_0(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
      *MaybeModuleTimestampRes_19 = (MR_Word) ((MR_Unsigned) 0U);
      parse_tree__parse_module__read_error_msg_4_p_0(ErrorMsg_69, Specs_23);
      *Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word FileStream_27;
      MR_String FileStreamName_28;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_17, (MR_Integer) 0))));
      MR_Word OldTimestamp_33;
      MR_Word Var_57;
      MR_Word Var_75;

      FileStream_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
      mercury__io__input_stream_name_4_p_0(FileStream_27, &FileStreamName_28);
      if (((MR_tag((MR_Word) ReadModuleAndTimestamps_18)) == (MR_Integer) 0))
      {
        MR_Word Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReadModuleAndTimestamps_18, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TimestampResult_30;

              mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_30);
              if (((MR_tag((MR_Word) TimestampResult_30)) == (MR_Integer) 1))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TimestampResult_30));
                }
              else
              {
                MR_Word Timestamp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_30, (MR_Integer) 0))));
                MR_Word Var_55;
                MR_Word Var_56;

                Var_56 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_31);
                {
                  Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeModuleTimestampRes_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
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
        MR_Word TimestampResult_86;

        mercury__io__file_modification_time_4_p_0(FileStreamName_28, &TimestampResult_86);
        if (((MR_tag((MR_Word) TimestampResult_86)) == (MR_Integer) 1))
        {
          MR_Word Var_77 = (MR_Word) (TimestampResult_86);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_77));
          }
        }
        else
        {
          MR_Word Timestamp_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampResult_86, (MR_Integer) 0))));
          MR_Word Var_79;
          MR_Word Var_80;

          Var_80 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_78);
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModuleTimestampRes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
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
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *MaybeModuleTimestampRes_19, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
            succeeded = libs__timestamp____Unify____timestamp_0_0(OldTimestamp_33, Var_75);
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

        mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_27, &MaybeResult_34);
        if (((MR_tag((MR_Word) MaybeResult_34)) == (MR_Integer) 1))
        {
          MR_Word ErrorCode_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResult_34, (MR_Integer) 2))));
          MR_String ErrorMsg0_43;
          MR_String ErrorMsg_44;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeDummyParseTree_20, (MR_Integer) 1))));

          func_2(((MR_Box) (MakeDummyParseTree_20)), ((MR_Box) (DefaultModuleName_15)), ParseTree_22);
          mercury__io__error_message_2_p_0(ErrorCode_42, &ErrorMsg0_43);
          ErrorMsg_44 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_43);
          parse_tree__parse_module__read_error_msg_4_p_0(ErrorMsg_44, Specs_23);
          *Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 6)));
        }
        else
        {
          MR_String FileString_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeResult_34, (MR_Integer) 0))));
          MR_Integer NumCodeUnits_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeResult_34, (MR_Integer) 1))));
          MR_Integer FileStringLen_37;
          MR_Word Var_62;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
          MR_Box conv5_Specs_23;
          MR_Box conv4_Errors_24;

          FileStringLen_37 = mercury__string__length_1_f_0(FileString_35);
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_module_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (NumCodeUnits_36));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (FileStringLen_37));
          }
          mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140parse_tree.parse_module.do_actually_read_module\'/13", (MR_String) "NumCodeUnits != FileStringLen");
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), ReadParseTree_21, (MR_Integer) 1))));
          func_3(((MR_Box) (ReadParseTree_21)), ((MR_Box) (FileStreamName_28)), ((MR_Box) (FileString_35)), ((MR_Box) (FileStringLen_37)), ((MR_Box) (&parse_tree__parse_module_scalar_common_1[6])), ((MR_Box) (((MR_Box) ((MR_Integer) 0)))), ((MR_Box) (Globals_14)), ((MR_Box) (DefaultModuleName_15)), ((MR_Box) (DefaultExpectationContexts_16)), ParseTree_22, &conv5_Specs_23, &conv4_Errors_24);
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
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_error_msg\'/4"));
      MR_hl_field(MR_mktag(2), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(2), Spec_10, 3) = ((MR_Box) (Pieces_9));
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
      MR_Word ErrorCode_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResult_16, (MR_Integer) 2))));
      MR_String ErrorMsg0_36;
      MR_String ErrorMsg_37;
      MR_String ProgName_55;
      MR_Word Pieces_56;
      MR_Word Spec_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;

      *ModuleName_13 = DefaultModuleName_10;
      mercury__io__error_message_2_p_0(ErrorCode_35, &ErrorMsg0_36);
      ErrorMsg_37 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_36);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_55);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (ProgName_55));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (ErrorMsg_37));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[12])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[17])));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_56, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Pieces_56, 1) = ((MR_Box) (Var_61));
      }
      {
        Spec_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_error_msg\'/4"));
        MR_hl_field(MR_mktag(2), Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(2), Spec_57, 3) = ((MR_Box) (Pieces_56));
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
      MR_Integer FileStringLen_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeResult_16, (MR_Integer) 1))));
      MR_Word SeqNumCounter0_19;
      MR_Word ModuleDeclPresent_22;
      MR_String _SourceFileName_23;
      MR_Word _SeqNumCounter_24;
      MR_Word _LineContext_25;
      MR_Word _LinePosn_26;

      mercury__counter__init_2_p_0((MR_Integer) 1, &SeqNumCounter0_19);
      parse_tree__parse_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_114_115_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_51_93_95_48_15_p_0(FileString_17, FileStringLen_18, DefaultModuleName_10, DefaultExpectationContexts_11, &ModuleDeclPresent_22, (MR_Integer) 1, SourceFileName0_12, &_SourceFileName_23, SeqNumCounter0_19, &_SeqNumCounter_24, (MR_Word) (&parse_tree__parse_module_scalar_common_1[6]), &_LineContext_25, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn_26);
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
      *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
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
    MR_Word MaybeFirstIOM_28;
    MR_Word STATE_VARIABLE_LineContext_64_64;
    MR_Word STATE_VARIABLE_LinePosn_65_65;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_SeqNumCounter_67_67;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_SourceFileName_0_56, FileString_16, FileStringLen_17, STATE_VARIABLE_LineContext_0_60, &STATE_VARIABLE_LineContext_64_64, STATE_VARIABLE_LinePosn_0_62, &STATE_VARIABLE_LinePosn_65_65, &FirstReadTerm_27);
    Var_66 = parse_tree__parse_sym_name__root_module_name_0_f_0();
    parse_tree__parse_module__read_term_to_iom_result_6_p_0(Var_66, STATE_VARIABLE_SourceFileName_0_56, FirstReadTerm_27, &MaybeFirstIOM_28, STATE_VARIABLE_SeqNumCounter_0_58, &STATE_VARIABLE_SeqNumCounter_67_67);
    switch (MR_tag((MR_Word) MaybeFirstIOM_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_70;
          MR_Word FirstContext_90;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1, &FirstContext_90);
          Var_70 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_90);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_70;
          MR_Word FirstContext_90;

          mercury__term__context_init_3_p_0(STATE_VARIABLE_SourceFileName_0_56, (MR_Integer) 1, &FirstContext_90);
          Var_70 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_90);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LookAhead_54;
          MR_Word Var_72;
          MR_Word FirstVarSet_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_28, (MR_Integer) 0))));
          MR_Word FirstTerm_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeFirstIOM_28, (MR_Integer) 1))));
          MR_Word FirstContext_89;

          {
            LookAhead_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LookAhead_54, 0) = ((MR_Box) (FirstVarSet_87));
            MR_hl_field(MR_mktag(1), LookAhead_54, 1) = ((MR_Box) (FirstTerm_88));
          }
          FirstContext_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_88);
          Var_72 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_89);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ModuleDeclPresent_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LookAhead_54));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FirstVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_28, (MR_Integer) 0))));
          MR_Word FirstTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_28, (MR_Integer) 1))));
          MR_Word FirstIOM_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeFirstIOM_28, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) FirstIOM_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word Var_74;
                MR_Word FirstLookAhead_85;
                MR_Word FirstContext_86;

                {
                  FirstLookAhead_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_85, 0) = ((MR_Box) (FirstVarSet_29));
                  MR_hl_field(MR_mktag(1), FirstLookAhead_85, 1) = ((MR_Box) (FirstTerm_30));
                }
                FirstContext_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_30);
                Var_74 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_86);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *ModuleDeclPresent_21 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_85));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
                *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstIOM_31, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                  {
                    MR_Word Var_74;
                    MR_Word FirstLookAhead_85;
                    MR_Word FirstContext_86;

                    {
                      FirstLookAhead_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_85, 0) = ((MR_Box) (FirstVarSet_29));
                      MR_hl_field(MR_mktag(1), FirstLookAhead_85, 1) = ((MR_Box) (FirstTerm_30));
                    }
                    FirstContext_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_30);
                    Var_74 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_86);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *ModuleDeclPresent_21 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_85));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
                      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    }
                    *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                    *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
                    *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                    *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String STATE_VARIABLE_SourceFileName_78_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), FirstIOM_31, (MR_Integer) 1))));

                    switch (MayChangeSourceFileName_22) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_String next_value_of_STATE_VARIABLE_SourceFileName_0_56 = STATE_VARIABLE_SourceFileName_78_78;
                          MR_Word next_value_of_STATE_VARIABLE_SeqNumCounter_0_58 = STATE_VARIABLE_SeqNumCounter_67_67;
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
                          MR_Word Var_83;

                          {
                            FirstLookAhead_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), FirstLookAhead_32, 0) = ((MR_Box) (FirstVarSet_29));
                            MR_hl_field(MR_mktag(1), FirstLookAhead_32, 1) = ((MR_Box) (FirstTerm_30));
                          }
                          FirstContext_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FirstTerm_30);
                          Var_83 = parse_tree__parse_module__report_missing_module_start_1_f_0(FirstContext_33);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            *ModuleDeclPresent_21 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstLookAhead_32));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_83));
                            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                          }
                          *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_78_78;
                          *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
                          *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                          *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word StartModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_31, (MR_Integer) 1))));
                    MR_Word ModuleNameContext_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstIOM_31, (MR_Integer) 2))));

                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_19, StartModuleName_34);
                    if (succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_21 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (StartModuleName_34));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ModuleNameContext_35));
                      }
                    else
                    {
                      MR_Word NameSpec_37;
                      MR_Word Var_76;

                      {
                        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (ModuleNameContext_35));
                      }
                      parse_tree__parse_module__report_module_has_unexpected_name_6_p_0(STATE_VARIABLE_SourceFileName_0_56, DefaultModuleName_19, DefaultExpectationContexts_20, StartModuleName_34, Var_76, &NameSpec_37);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *ModuleDeclPresent_21 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartModuleName_34));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModuleNameContext_35));
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NameSpec_37));
                        MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      }
                    }
                    *STATE_VARIABLE_SourceFileName_57 = STATE_VARIABLE_SourceFileName_0_56;
                    *STATE_VARIABLE_SeqNumCounter_59 = STATE_VARIABLE_SeqNumCounter_67_67;
                    *STATE_VARIABLE_LineContext_61 = STATE_VARIABLE_LineContext_64_64;
                    *STATE_VARIABLE_LinePosn_63 = STATE_VARIABLE_LinePosn_65_65;
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

static MR_Word MR_CALL 
parse_tree__parse_module__report_missing_module_start_1_f_0(
  MR_Word FirstContext_3)
{
  {
    MR_Word Spec_4;

    {
      Spec_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_module.report_missing_module_start\'/1"));
      MR_hl_field(MR_mktag(1), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_4, 3) = ((MR_Box) (FirstContext_3));
      MR_hl_field(MR_mktag(1), Spec_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[89])));
    }
    return Spec_4;
  }
}

static void MR_CALL 
parse_tree__parse_module__read_term_to_iom_result_6_p_0(
  MR_Word ModuleName_7,
  MR_String FileName_8,
  MR_Word ReadTermResult_9,
  MR_Word * ReadIOMResult_10,
  MR_Word STATE_VARIABLE_SeqNumCounter_0_19,
  MR_Word * STATE_VARIABLE_SeqNumCounter_20)
{
  switch (MR_tag((MR_Word) ReadTermResult_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ReadIOMResult_10 = (MR_Word) ((MR_Unsigned) 0U);
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
          MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
        }
        {
          Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.read_term_to_iom_result\'/6"));
          MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ReadIOMResult_10 = base;
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
        MR_Word Var_44;

        mercury__counter__allocate_3_p_0(&SeqNum_39, STATE_VARIABLE_SeqNumCounter_0_19, STATE_VARIABLE_SeqNumCounter_20);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (SeqNum_39));
        }
        parse_tree__parse_item__parse_item_or_marker_5_p_0(ModuleName_7, VarSet_17, Term_18, Var_44, &MaybeItemOrMarker_40);
        if (((MR_tag((MR_Word) MaybeItemOrMarker_40)) == (MR_Integer) 0))
        {
          MR_Word Specs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItemOrMarker_40, (MR_Integer) 0))));
          MR_Word Var_45;

          Var_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 7)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_18));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Specs_42));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_45));
          }
        }
        else
        {
          MR_Word ItemOrMarker_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemOrMarker_40, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ReadIOMResult_10 = base;
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
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_module_scalar_common_1[14])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[10])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[8])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_module_scalar_common_1[7])));
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
      MainMsg_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MainMsg_16, 0) = ((MR_Box) (MaybeContext_14));
      MR_hl_field(MR_mktag(3), MainMsg_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MainMsg_16, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MainMsg_16, 3) = ((MR_Box) (Var_48));
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
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Spec_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_module.report_module_has_unexpected_name\'/6"));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_58));
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
