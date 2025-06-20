/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2025-06-20
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


// :- module hlds.make_hlds.add_pragma.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma_type_spec.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0[3];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_ptag_ordered_matching_pred_ids_result_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_name_ordered_matching_pred_ids_result_0[2];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_matching_pred_ids_result_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_maybe_require_one_match_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_maybe_require_one_match_0[2];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_maybe_require_one_match_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_pragma_status_class_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_pragma_status_class_0[2];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_pragma_status_class_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__2018__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_59);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__get_pred_markers_3_p_0(
  MR_Word PredIdTable_4,
  MR_Word PredId_5,
  MR_Word * Markers_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word ImplMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_tabled_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Tabled_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_36,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0(
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_10_p_0(
  MR_Word RequireTailrec_11,
  MR_Word Context_12,
  MR_Word MaybePredOrFunc_13,
  MR_Word MaybeModes_14,
  MR_Word SNA_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredInfo_0_33,
  MR_Word * STATE_VARIABLE_PredInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FTInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procs_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word SymName_3,
  MR_Word ItemMercuryStatus_4,
  MR_Word PredStatus_5,
  MR_Word ProcTable_6,
  MR_Integer PrimaryProcId_7,
  MR_Word Context_8,
  MR_Word GenInfo_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word DeclMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(
  MR_Word PredSpec_12,
  MR_String PragmaName_13,
  MR_Word PragmaStatusClass_14,
  MR_Word PragmaStatus_15,
  MR_Word Context_16,
  MR_Word Marker_17,
  MR_Word ConflictMarkers_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_String PragmaName_1,
  MR_Word PragmaStatusClass_2,
  MR_Word PragmaStatus_3,
  MR_Word Context_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredTable_0_7,
  MR_Word * STATE_VARIABLE_PredTable_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Piece_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word TypeCtor_13,
  MR_String Kind_14,
  MR_Word PredSpec_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_42,
  MR_Integer * STATE_VARIABLE_SeqNum_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_QualInfo_0_28,
  MR_Word * STATE_VARIABLE_QualInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0(
  MR_Word OISUInfo_7,
  MR_Word ItemMercuryStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_proc_as_obsolete_6_p_0(
  MR_Word ObsoleteProcInfo_7,
  MR_Word PragmaStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__322__1_3_p_0(
  MR_Word ObsoleteInFavourOf_12,
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42);

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_6_p_0(
  MR_Word ObsoletePredInfo_7,
  MR_Word PragmaStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(
  MR_Word ModuleInfo_10,
  MR_String Pragma_11,
  MR_Word RequireOneMatch_12,
  MR_Word PragmaAllowsModes_13,
  MR_Word Context_14,
  MR_Word PFU_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * Result_18);

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_8_p_0(
  MR_Word ObsoleteInFavourOf_1,
  MR_Word PragmaStatus_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_pragma_status_7_p_0(
  MR_String PragmaName_8,
  MR_Word StatusClass_9,
  MR_Word PragmaStatus_10,
  MR_Word Context_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_mode_num_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word IsFullyQualified_12,
  MR_Word FailHandling_13,
  MR_Word Context_14,
  MR_String PragmaName_15,
  MR_Word PredOrFunc_16,
  MR_Word SymName_17,
  MR_Word UserArity_18,
  MR_Integer ModeNum_19,
  MR_Word * MaybePredProcId_20);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_struct_reuse_5_p_0(
  MR_Word ReuseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_struct_sharing_5_p_0(
  MR_Word SharingInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_5_p_0(
  MR_Word Term2Info_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_5_p_0(
  MR_Word TermInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word IsFullyQualified_11,
  MR_Word FailHandling_12,
  MR_Word Context_13,
  MR_String PragmaName_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * MaybePredId_18);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__report_ambiguous_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__report_unknown_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[239][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[3][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[3][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[3][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[2][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[239][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once, such as"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for procedures that can succeed"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The original"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: ambiguous"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "name"))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[68])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has clauses, so"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it cannot be marked as external."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode of"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of mode of"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conflicting"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The earlier pragma is here."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports concurrent execution."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a grade that"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses conservative garbage collection."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses double precision floats."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports memoisation."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports executing conjuntions in parallel."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses single precision floats."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[109])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "sequential semantics."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "using the strict"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports trailing."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the grade modifier"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires type_ctor_layout structures."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[140]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[149]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conflicts"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[151]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with previous"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[153]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[158]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a predicate or a function."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[161]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could refer to either"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous name"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[167]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[170]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[176]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[183]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be necessary to select the right match."))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[186])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[189]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown mode number"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: since the"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[195]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is exported, the"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for it"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[198]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should also be exported."))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[200]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since the"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[202]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not exported, the"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be exported either."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[205]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be exported,"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[208]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is exported."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the predicate or function it refers to"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "even if"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[213])))
  },
  /* row 216 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[188])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_scalar_common_1[216]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[219])))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[225])))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[228])))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[231])))
  },
  /* row 233 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[113])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_scalar_common_1[233]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 235 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[126])))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_scalar_common_1[235]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 237 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[139])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_scalar_common_1[237]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[3][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "add_marker_pred_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0 = {
  (MR_String) "lfh_ignore",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1 = {
  (MR_String) "lfh_user_error",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2 = {
  (MR_String) "lfh_internal_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_lookup_failure_handling_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "lookup_failure_handling",
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0 },
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_0 = {
  (MR_String) "mpids_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_1 = {
  (MR_String) "mpids_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__field_types_matching_pred_ids_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_0[1] = { &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_1[1] = { &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_ptag_ordered_matching_pred_ids_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_stag_ordered_matching_pred_ids_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_name_ordered_matching_pred_ids_result_0[2] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_1,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_functor_desc_matching_pred_ids_result_0_0
};

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_matching_pred_ids_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_matching_pred_ids_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "matching_pred_ids_result",
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_name_ordered_matching_pred_ids_result_0 },
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__du_ptag_ordered_matching_pred_ids_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_matching_pred_ids_result_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_0 = {
  (MR_String) "do_not_require_one_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_1 = {
  (MR_String) "require_one_match",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_maybe_require_one_match_0[2] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_maybe_require_one_match_0[2] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_maybe_require_one_match_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_maybe_require_one_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_maybe_require_one_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "maybe_require_one_match",
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_maybe_require_one_match_0 },
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_maybe_require_one_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_maybe_require_one_match_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_0 = {
  (MR_String) "psc_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_1 = {
  (MR_String) "psc_impl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_pragma_status_class_0[2] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_pragma_status_class_0[2] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_pragma_status_class_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_pragma_status_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_pragma_status_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "pragma_status_class",
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_pragma_status_class_0 },
  { hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_pragma_status_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_pragma_status_class_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__2018__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_59)
{
  MR_bool succeeded = (IsFullyQualified_11 == HeadVar__2_59);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0(
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
hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0(
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
hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
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
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0(
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
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__get_pred_markers_3_p_0(
  MR_Word PredIdTable_4,
  MR_Word PredId_5,
  MR_Word * Markers_6)
{
  MR_Word PredInfo_7;
  MR_Box conv0_PredInfo_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_4, ((MR_Box) (PredId_5)), &conv0_PredInfo_7);
  PredInfo_7 = ((MR_Word) (conv0_PredInfo_7));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, Markers_6);
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word ImplMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word MarkerKind_11 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_8, 0))) & (MR_Integer) 15);
  MR_Word PFUNameArity_12 = ((MR_Word) ((MR_hl_field(0, ImplMarker_8, 1))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ImplMarker_8, 2))));

  switch (MarkerKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "consider_used", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 0:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "inline", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 6, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[145])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_4_47;
        MR_Word STATE_VARIABLE_Specs_4_48;

        hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 24, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_4_47, STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_4_48);
        hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 9, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[146])), STATE_VARIABLE_ModuleInfo_4_47, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_4_48, STATE_VARIABLE_Specs_18);
      }
      break;
    case (MR_Integer) 4:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "no_determinism_warning", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "no_inline", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 8, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[146])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 7:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_equivalent_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 5:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_pure", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 6:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_semipure", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 18, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 8:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "require_switch_arms_in_type_order", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_tabled_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Tabled_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word Globals_16;
  MR_Word TypeLayout_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 305, &TypeLayout_17);
  switch (TypeLayout_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TabledMethod_19 = ((MR_Word) ((MR_hl_field(0, Tabled_12, 0))));
        MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, Tabled_12, 3))));
        MR_String PragmaName_24;
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_49;
        MR_Word Var_50;

        PragmaName_24 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_19);
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (PragmaName_24));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])));
        }
        Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
        Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[141])));
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[143])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_49);
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_41);
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_impl_pragma_tabled\'/9"));
          MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_22));
          MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_32 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
        }
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
        *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredStatus_18;

        hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_18);
        hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0(ProgressStream_10, Tabled_12, ItemMercuryStatus_11, PredStatus_18, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_QualInfo_0_29, STATE_VARIABLE_QualInfo_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;

  switch (Feature_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IsConcurrencySupported_10;

        libs__globals__current_grade_supports_concurrency_2_p_0(Globals_6, &IsConcurrencySupported_10);
        switch (IsConcurrencySupported_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_11;
              MR_Word Spec_12;
              MR_Word Var_29;
              MR_Word Var_30;

              Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[101])));
              Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_29);
              {
                Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word GC_Method_22;

        libs__globals__get_gc_method_2_p_0(Globals_6, &GC_Method_22);
        switch (GC_Method_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
          case (MR_Integer) 1:
            {
              MR_Word Var_243;
              MR_Word Var_244;
              MR_Word Pieces_308;
              MR_Word Spec_309;

              Var_244 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[104])));
              Var_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_244, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_243);
              {
                Spec_309 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_309, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(0, Spec_309, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_309, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_309, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_309, 4) = ((MR_Box) (Pieces_308));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_309));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SinglePrecFloat_275;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 304, &SinglePrecFloat_275);
        switch (SinglePrecFloat_275) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_128;
              MR_Word Pieces_265;
              MR_Word Spec_266;
              MR_Word Msg_268;

              Var_94 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[107])));
              Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_93);
              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_120, 0) = ((MR_Box) (Pieces_265));
              }
              {
                Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[234])));
              }
              {
                Msg_268 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_268, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_268, 1) = ((MR_Box) (Var_119));
              }
              {
                Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_128, 0) = ((MR_Box) (Msg_268));
                MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_266 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_266, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(2, Spec_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_266, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_266, 3) = ((MR_Box) (Var_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_266));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IsTablingSupported_16;

        libs__globals__current_grade_supports_tabling_3_p_0(Globals_6, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_3[0])), &IsTablingSupported_16);
        switch (IsTablingSupported_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Pieces_278;
              MR_Word Spec_279;

              Var_138 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[116])));
              Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_278 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_137);
              {
                Spec_279 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_279, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(0, Spec_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_279, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_279, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_279, 4) = ((MR_Box) (Pieces_278));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_279));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word IsParConjSupported_17;

        libs__globals__current_grade_supports_par_conj_2_p_0(Globals_6, &IsParConjSupported_17);
        switch (IsParConjSupported_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Pieces_284;
              MR_Word Spec_285;

              Var_158 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[119])));
              Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_157);
              {
                Spec_285 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_285, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(0, Spec_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_285, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_285, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_285, 4) = ((MR_Box) (Pieces_284));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_285));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SinglePrecFloat_13;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 304, &SinglePrecFloat_13);
        switch (SinglePrecFloat_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Msg_15;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_85;
              MR_Word Pieces_259;
              MR_Word Spec_260;

              Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[122])));
              Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_50);
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (Pieces_259));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[236])));
              }
              {
                Msg_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_15, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_15, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (Msg_15));
                MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_260 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_260, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(2, Spec_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_260, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_260, 3) = ((MR_Box) (Var_85));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_260));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word ReorderConj_19;
        MR_Word ReorderDisj_20;
        MR_Word FullyStrict_21;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 248, &ReorderConj_19);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 249, &ReorderDisj_20);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 250, &FullyStrict_21);
        succeeded = (ReorderConj_19 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ReorderDisj_20 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (FullyStrict_21 == (MR_Integer) 1);
        }
        if (succeeded)
          *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
        else
        {
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Word Pieces_302;
          MR_Word Spec_303;

          Var_224 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[130])));
          Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
          Pieces_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_223);
          {
            Spec_303 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_303, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
            MR_hl_field(0, Spec_303, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_303, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_303, 3) = ((MR_Box) (Context_7));
            MR_hl_field(0, Spec_303, 4) = ((MR_Box) (Pieces_302));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_303));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
        }
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word UseTrail_18;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 299, &UseTrail_18);
        switch (UseTrail_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_213;
              MR_Word Pieces_290;
              MR_Word Spec_291;
              MR_Word Msg_293;

              Var_179 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[133])));
              Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[97])), Var_178);
              {
                Var_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_205, 0) = ((MR_Box) (Pieces_290));
              }
              {
                Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
                MR_hl_field(1, Var_204, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[238])));
              }
              {
                Msg_293 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_293, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_293, 1) = ((MR_Box) (Var_204));
              }
              {
                Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_213, 0) = ((MR_Box) (Msg_293));
                MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_291 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_291, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                MR_hl_field(2, Spec_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_291, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_291, 3) = ((MR_Box) (Var_213));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_291));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word PredInfo0_11;
  MR_Word ClausesInfo0_12;
  MR_Word ClausesRep0_13;
  MR_Word IsEmpty_15;
  MR_Word _ItemNumbers_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_8, &PredInfo0_11);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_12);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_12, &ClausesRep0_13, &_ItemNumbers_14);
  IsEmpty_15 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_13);
  switch (IsEmpty_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_17;
        MR_String PredName_18;
        MR_Integer UserArityInt_19;
        MR_Word NameArity_20;
        MR_Word Pieces_21;
        MR_Word Spec_22;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_45;
        MR_Word Var_46;

        PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_11);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo0_11, &PredName_18);
        Var_28 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_11);
        UserArityInt_19 = (MR_Integer) (Var_28);
        {
          NameArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameArity_20, 0) = ((MR_Box) (PredName_18));
          MR_hl_field(0, NameArity_20, 1) = ((MR_Box) (UserArityInt_19));
        }
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_33, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[79])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (NameArity_20));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
        Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[83])));
        Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[81])), Var_45);
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_40);
        Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_35);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.mark_pred_as_external\'/6"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_7));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
        }
        *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInfo_16;

        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo0_11, &PredInfo_16);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_16, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_24;

  hlds__make_hlds__add_pragma__check_required_feature_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_24;
  MR_Word conv0_STATE_VARIABLE_Specs_26;

  hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_26));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_36,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Pragma_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_16 = (MR_Word) ((MR_Word) (Pragma_12));
        MR_Word CHeader_19 = ((MR_Word) ((MR_hl_field(0, FDInfo_16, 1))));
        MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, FDInfo_16, 2))));
        MR_Word ForeignDeclCode_22;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, FDInfo_16, 0)));

        {
          ForeignDeclCode_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignDeclCode_22, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(0, ForeignDeclCode_22, 1) = ((MR_Box) (CHeader_19));
          MR_hl_field(0, ForeignDeclCode_22, 2) = ((MR_Box) (Context_20));
        }
        hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(ForeignDeclCode_22, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
        *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FCInfo_23 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 1));
        MR_Word BodyCode_24 = ((MR_Word) ((MR_hl_field(0, FCInfo_23, 1))));
        MR_Word ForeignBodyCode_26;
        MR_Word Lang_55 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_23, 0))) & (MR_Integer) 3);
        MR_Word Context_56 = ((MR_Word) ((MR_hl_field(0, FCInfo_23, 2))));

        hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_55, BodyCode_24, Context_56, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
        {
          ForeignBodyCode_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_26, 0) = (MR_Box) ((MR_Unsigned) (Lang_55));
          MR_hl_field(0, ForeignBodyCode_26, 1) = ((MR_Box) (BodyCode_24));
          MR_hl_field(0, ForeignBodyCode_26, 2) = ((MR_Box) (Context_56));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_26, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FEInfo_27 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 2));

        hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_5_p_0(FEInfo_27, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExternalInfo_28 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word PFNameArity_59 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 0))));
            MR_Word MaybeBackend_60 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 1))));
            MR_Word Context_61 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 2))));
            MR_Word Globals_63;
            MR_Word CurrentBackend_64;

            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_63);
            CurrentBackend_64 = libs__globals__lookup_current_backend_1_f_0(Globals_63);
            if ((MaybeBackend_60 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word Backend_65 = ((MR_Word) ((MR_hl_field(1, MaybeBackend_60, 0))));

              succeeded = (Backend_65 == CurrentBackend_64);
            }
            if (succeeded)
            {
              MR_Word PredicateTable0_66;
              MR_Word PredOrFunc_67;
              MR_Word SymName_68;
              MR_Word UserArity_69;
              MR_Word PredIds_70;
              MR_Word AllArityPredIds_71;
              MR_Word DeclPieces_72;

              hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &PredicateTable0_66);
              PredOrFunc_67 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_59, 0))) & (MR_Integer) 1);
              SymName_68 = ((MR_Word) ((MR_hl_field(0, PFNameArity_59, 1))));
              UserArity_69 = ((MR_Word) ((MR_hl_field(0, PFNameArity_59, 2))));
              switch (PredOrFunc_67) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, UserArity_69, &PredIds_70);
                    hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, &AllArityPredIds_71);
                    DeclPieces_72 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[76]));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, UserArity_69, &PredIds_70);
                    hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, &AllArityPredIds_71);
                    DeclPieces_72 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[78]));
                  }
                  break;
              }
              if ((PredIds_70 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word PredIdTable0_73;
                MR_Word OtherUserArities_74;
                MR_Word Var_80;

                hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &PredIdTable0_73);
                hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable0_73, AllArityPredIds_71, UserArity_69, &OtherUserArities_74);
                {
                  Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_80, 0) = ((MR_Box) (PredOrFunc_67));
                }
                hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_80, SymName_68, UserArity_69, OtherUserArities_74, Context_61, DeclPieces_72, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
                *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
              }
              else
              {
                MR_Word Var_79;
                MR_Box conv3_STATE_VARIABLE_ModuleInfo_39;
                MR_Box conv2_STATE_VARIABLE_Specs_41;

                {
                  Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_79, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[2]));
                  MR_hl_field(0, Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1));
                  MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_79, 3) = ((MR_Box) (Context_61));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_79, PredIds_70, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38)), &conv3_STATE_VARIABLE_ModuleInfo_39, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv2_STATE_VARIABLE_Specs_41);
                *STATE_VARIABLE_ModuleInfo_39 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_39));
                *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_41));
              }
            }
            else
            {
              *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
              *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
            }
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FTInfo_29 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word PredStatus_30;

            hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_30);
            hlds__make_hlds__add_pragma__add_pragma_fact_table_8_p_0(ProgressStream_10, ItemMercuryStatus_11, PredStatus_30, FTInfo_29, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo_31 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), ((MR_Box) (TabledInfo_31)), STATE_VARIABLE_PragmaTabledCord_0_36, STATE_VARIABLE_PragmaTabledCord_37);
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
            *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TailrecWarningPragma_32 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0(TailrecWarningPragma_32, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word RFSInfo_33 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word FeatureSet_34 = ((MR_Word) ((MR_hl_field(0, RFSInfo_33, 0))));
            MR_Word Context_57 = ((MR_Word) ((MR_hl_field(0, RFSInfo_33, 1))));

            if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/6", (MR_String) "imported require_feature_set pragma");
                return;
              }
            else
            {
              MR_Word Globals_84;
              MR_Word Var_87;
              MR_Box conv5_STATE_VARIABLE_Specs_41;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_84);
              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_9[0]));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2));
                MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_87, 3) = ((MR_Box) (Globals_84));
                MR_hl_field(0, Var_87, 4) = ((MR_Box) (Context_57));
              }
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_87, FeatureSet_34, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv5_STATE_VARIABLE_Specs_41);
              *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_41));
            }
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PredInfo_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredInfo_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0(
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word PredSpec_9 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 0))));
  MR_Word RequireTailrec_10 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 2))));
  MR_Word PFUMM_13 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, 0))));
  MR_Word PredSymName_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, 1))));
  MR_Word MaybePredOrFunc_15;
  MR_Word UserArity_16;
  MR_Word MaybeModes_17;
  MR_Integer UserArityInt_18;
  MR_Word PFU_19;
  MR_Word MatchingPredIdResult_20;

  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_13, &MaybePredOrFunc_15, &UserArity_16, &MaybeModes_17);
  UserArityInt_18 = (MR_Integer) (UserArity_16);
  PFU_19 = parse_tree__prog_item__maybe_pred_or_func_to_pfu_1_f_0(MaybePredOrFunc_15);
  hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_37, (MR_String) "require_tail_recursion", (MR_Integer) 1, (MR_Integer) 1, Context_11, PFU_19, PredSymName_14, UserArity_16, &MatchingPredIdResult_20);
  if (((MR_tag((MR_Word) MatchingPredIdResult_20)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_36 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_20, 0))));

    *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_36, STATE_VARIABLE_Specs_0_39);
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
  }
  else
  {
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_20, 0))));
    MR_Word SNA_24;
    MR_Word PredInfo0_25;
    MR_Word Procs0_26;
    MR_Word Procs_27;
    MR_Word PredInfo_31;

    {
      SNA_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_24, 0) = ((MR_Box) (PredSymName_14));
      MR_hl_field(0, SNA_24, 1) = ((MR_Box) (UserArityInt_18));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredId_21, &PredInfo0_25);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_25, &Procs0_26);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_26, &Procs_27);
    if ((MaybeModes_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_82;
      MR_Box conv3_PredInfo_31;
      MR_Box conv2_STATE_VARIABLE_Specs_40;

      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[1]));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_5_p_0_1));
        MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_82, 3) = ((MR_Box) (RequireTailrec_10));
        MR_hl_field(0, Var_82, 4) = ((MR_Box) (Context_11));
        MR_hl_field(0, Var_82, 5) = ((MR_Box) (MaybePredOrFunc_15));
        MR_hl_field(0, Var_82, 6) = ((MR_Box) (MaybeModes_17));
        MR_hl_field(0, Var_82, 7) = ((MR_Box) (SNA_24));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_82, Procs_27, ((MR_Box) (PredInfo0_25)), &conv3_PredInfo_31, ((MR_Box) (STATE_VARIABLE_Specs_0_39)), &conv2_STATE_VARIABLE_Specs_40);
      PredInfo_31 = ((MR_Word) (conv3_PredInfo_31));
      *STATE_VARIABLE_Specs_40 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_40));
    }
    else
    {
      MR_Word Modes_28 = ((MR_Word) ((MR_hl_field(1, MaybeModes_17, 0))));
      MR_Integer ProcId_29;

      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_37, Procs_27, Modes_28, &ProcId_29);
      if (succeeded)
      {
        MR_Word Proc_30;
        MR_Word Var_44;
        MR_Box conv4_Proc_30;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_26, ((MR_Box) (ProcId_29)), &conv4_Proc_30);
        Proc_30 = ((MR_Word) (conv4_Proc_30));
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_44, 0) = ((MR_Box) (ProcId_29));
          MR_hl_field(0, Var_44, 1) = ((MR_Box) (Proc_30));
        }
        hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_10_p_0(RequireTailrec_10, Context_11, MaybePredOrFunc_15, MaybeModes_17, SNA_24, Var_44, PredInfo0_25, &PredInfo_31, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
      }
      else
      {
        MR_Word PredOrFunc_32;
        MR_Word PFNameArity_33;
        MR_Word Pieces_34;
        MR_Word Spec_35;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;

        PredInfo_31 = PredInfo0_25;
        PredOrFunc_32 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_31);
        {
          PFNameArity_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_32));
          MR_hl_field(0, PFNameArity_33, 1) = ((MR_Box) (PredSymName_14));
          MR_hl_field(0, PFNameArity_33, 2) = ((MR_Box) (UserArity_16));
        }
        Var_51 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[85])));
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (PFNameArity_33));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[86])));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
        }
        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[32])), Var_64);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_59);
        Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_50);
        {
          Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec\'/5"));
          MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_40 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
        }
      }
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, PredInfo_31, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_10_p_0(
  MR_Word RequireTailrec_11,
  MR_Word Context_12,
  MR_Word MaybePredOrFunc_13,
  MR_Word MaybeModes_14,
  MR_Word SNA_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredInfo_0_33,
  MR_Word * STATE_VARIABLE_PredInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__6_6, 0))));
  MR_Word ProcInfo0_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, 1))));
  MR_Word MaybeRequireTailrecOrig_20;

  hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo0_17, &MaybeRequireTailrecOrig_20);
  if ((MaybeRequireTailrecOrig_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcInfo_32;

    hlds__hlds_pred__proc_info_set_require_tailrec_info_3_p_0(RequireTailrec_11, ProcInfo0_17, &ProcInfo_32);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_16, ProcInfo_32, STATE_VARIABLE_PredInfo_0_33, STATE_VARIABLE_PredInfo_34);
    *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
  }
  else
  {
    MR_Word RequireTailrecOrig_21 = ((MR_Word) ((MR_hl_field(1, MaybeRequireTailrecOrig_20, 0))));
    MR_Word PorFPieces_22;
    MR_Word OneModeOfPieces_24;
    MR_Word MainPieces_26;
    MR_Word ContextOrig_28;
    MR_Word Spec_31;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;

    if ((MaybePredOrFunc_13 == (MR_Word) ((MR_Unsigned) 0U)))
      PorFPieces_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredOrFunc_23 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_13, 0))));
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_37, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      }
      {
        PorFPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PorFPieces_22, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, PorFPieces_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
      OneModeOfPieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
      OneModeOfPieces_24 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[88]));
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[93])));
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (SNA_15));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
    }
    Var_66 = parse_tree__error_spec__color_as_subject_1_f_0(Var_67);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFPieces_22, Var_65);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OneModeOfPieces_24, Var_64);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[32])), Var_63);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_58);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_46);
    if (((MR_tag((MR_Word) RequireTailrecOrig_21)) == (MR_Integer) 1))
      ContextOrig_28 = ((MR_Word) ((MR_hl_field(1, RequireTailrecOrig_21, 1))));
    else
      ContextOrig_28 = ((MR_Word) ((MR_hl_field(0, RequireTailrecOrig_21, 0))));
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) (MainPieces_26));
    }
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_87, 0) = ((MR_Box) (ContextOrig_28));
      MR_hl_field(0, Var_87, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[95])));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
    }
    {
      Spec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec_proc\'/10"));
      MR_hl_field(2, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_31, 3) = ((MR_Box) (Var_84));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
    }
    *STATE_VARIABLE_PredInfo_34 = STATE_VARIABLE_PredInfo_0_33;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FTInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_Word PredSpec_15 = ((MR_Word) ((MR_hl_field(0, FTInfo_12, 0))));
  MR_String FileName_16 = ((MR_String) ((MR_hl_field(0, FTInfo_12, 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, FTInfo_12, 2))));
  MR_Word PFU_19 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_15, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_20 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 1))));
  MR_Word UserArity_21 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 2))));
  MR_Word MatchingPredIdResult_22;

  hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, (MR_String) "fact_table", (MR_Integer) 1, (MR_Integer) 0, Context_17, PFU_19, PredSymName_20, UserArity_21, &MatchingPredIdResult_22);
  if (((MR_tag((MR_Word) MatchingPredIdResult_22)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_41 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_22, 0))));

    *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_41, STATE_VARIABLE_Specs_0_44);
    *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
  }
  else
  {
    MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_22, 0))));
    MR_Word PredInfo0_26;
    MR_Word CheckResult_27;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_23, &PredInfo0_26);
    ll_backend__fact_table__fact_table_check_args_5_p_0(STATE_VARIABLE_ModuleInfo_0_42, Context_17, PredId_23, PredInfo0_26, &CheckResult_27);
    if (((MR_tag((MR_Word) CheckResult_27)) == (MR_Integer) 1))
    {
      MR_Word CheckSpecs_28 = ((MR_Word) ((MR_hl_field(1, CheckResult_27, 0))));
      MR_Word PredMarkers0_29;
      MR_Word PredMarkers_30;
      MR_Word PredInfo_31;

      *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_28, STATE_VARIABLE_Specs_0_44);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_26, &PredMarkers0_29);
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 30, PredMarkers0_29, &PredMarkers_30);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_30, PredInfo0_26, &PredInfo_31);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, PredInfo_31, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
    }
    else
    {
      MR_Word GenInfo_32 = ((MR_Word) ((MR_hl_field(0, CheckResult_27, 0))));
      MR_String C_HeaderCode_34;
      MR_Integer PrimaryProcId_35;
      MR_Word PredInfo1_36;
      MR_Word ProcTable_37;
      MR_Word ProcIds_38;
      MR_Word PredOrFunc_39;
      MR_Word ForeignDeclCode_40;
      MR_Word STATE_VARIABLE_Specs_2_53;
      MR_Word STATE_VARIABLE_ModuleInfo_2_56;
      MR_Word Var_59;
      MR_Word STATE_VARIABLE_ModuleInfo_3_60;
      MR_Word STATE_VARIABLE_ModuleInfo_4_61;
      MR_Word PredInfo_65;
      MR_Word Markers0_68;
      MR_Word Markers_69;

      ll_backend__fact_table__fact_table_compile_facts_13_p_0(ProgressStream_9, STATE_VARIABLE_ModuleInfo_0_42, FileName_16, Context_17, GenInfo_32, &C_HeaderCode_34, &PrimaryProcId_35, PredInfo0_26, &PredInfo1_36, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_2_53);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_36, &Markers0_68);
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 8, Markers0_68, &Markers_69);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_69, PredInfo1_36, &PredInfo_65);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, PredInfo_65, STATE_VARIABLE_ModuleInfo_0_42, &STATE_VARIABLE_ModuleInfo_2_56);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_65, &ProcTable_37);
      ProcIds_38 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_65);
      PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_65);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (C_HeaderCode_34));
      }
      {
        ForeignDeclCode_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignDeclCode_40, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(0, ForeignDeclCode_40, 1) = ((MR_Box) (Var_59));
        MR_hl_field(0, ForeignDeclCode_40, 2) = ((MR_Box) (Context_17));
      }
      hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_40, STATE_VARIABLE_ModuleInfo_2_56, &STATE_VARIABLE_ModuleInfo_3_60);
      hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_16, STATE_VARIABLE_ModuleInfo_3_60, &STATE_VARIABLE_ModuleInfo_4_61);
      hlds__make_hlds__add_pragma__add_fact_table_procs_14_p_0(ProgressStream_9, PredOrFunc_39, PredSymName_20, ItemMercuryStatus_10, PredStatus_11, ProcTable_37, PrimaryProcId_35, Context_17, GenInfo_32, ProcIds_38, STATE_VARIABLE_ModuleInfo_4_61, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_Specs_2_53, STATE_VARIABLE_Specs_45);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procs_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word SymName_3,
  MR_Word ItemMercuryStatus_4,
  MR_Word PredStatus_5,
  MR_Word ProcTable_6,
  MR_Integer PrimaryProcId_7,
  MR_Word Context_8,
  MR_Word GenInfo_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
    }
    else
    {
      MR_Integer ProcId_39 = ((MR_Integer) ((MR_hl_field(1, HeadVar__10_10, 0))));
      MR_Word ProcIds_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_47;
      MR_Word STATE_VARIABLE_Specs_1_48;
      MR_Word ProcInfo_49;
      MR_Word InstVarSet_50;
      MR_Word ProgVarSet_51;
      MR_Word PragmaVars_52;
      MR_String C_ProcCode_53;
      MR_String C_ExtraCode_54;
      MR_Word Attrs0_55;
      MR_Word Attrs1_56;
      MR_Word Attrs2_57;
      MR_Word Attrs3_58;
      MR_Word Attrs_59;
      MR_Word FCInfo_60;
      MR_Word Var_67;
      MR_Word STATE_VARIABLE_ModuleInfo_1_70;
      MR_Box conv0_ProcInfo_49;
      MR_Word next_value_of_HeadVar__10_10;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_6, ((MR_Box) (ProcId_39)), &conv0_ProcInfo_49);
      ProcInfo_49 = ((MR_Word) (conv0_ProcInfo_49));
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_49, &InstVarSet_50);
      ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0(STATE_VARIABLE_ModuleInfo_0_11, SymName_3, ProcId_39, PrimaryProcId_7, ProcInfo_49, GenInfo_9, &ProgVarSet_51, &PragmaVars_52, &C_ProcCode_53, &C_ExtraCode_54);
      Attrs0_55 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_55, &Attrs1_56);
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs1_56, &Attrs2_57);
      parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs2_57, &Attrs3_58);
      parse_tree__prog_data_foreign__set_refers_to_llds_stack_3_p_0((MR_Integer) 1, Attrs3_58, &Attrs_59);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (C_ProcCode_53));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FCInfo_60 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FCInfo_60, 0) = ((MR_Box) (Attrs_59));
        MR_hl_field(0, FCInfo_60, 1) = ((MR_Box) (SymName_3));
        MR_hl_field(0, FCInfo_60, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
        MR_hl_field(0, FCInfo_60, 3) = ((MR_Box) (PragmaVars_52));
        MR_hl_field(0, FCInfo_60, 4) = ((MR_Box) (ProgVarSet_51));
        MR_hl_field(0, FCInfo_60, 5) = ((MR_Box) (InstVarSet_50));
        MR_hl_field(0, FCInfo_60, 6) = ((MR_Box) (Var_67));
        MR_hl_field(0, FCInfo_60, 7) = ((MR_Box) (Context_8));
        MR_hl_field(0, FCInfo_60, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_1, ItemMercuryStatus_4, PredStatus_5, FCInfo_60, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_1_70, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_1_48);
      succeeded = (strcmp(C_ExtraCode_54, (MR_String) "") == 0);
      if (succeeded)
        STATE_VARIABLE_ModuleInfo_1_47 = STATE_VARIABLE_ModuleInfo_1_70;
      else
      {
        MR_Word ForeignBodyCode_61;
        MR_Word Var_72;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (C_ExtraCode_54));
        }
        {
          ForeignBodyCode_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ForeignBodyCode_61, 1) = ((MR_Box) (Var_72));
          MR_hl_field(0, ForeignBodyCode_61, 2) = ((MR_Box) (Context_8));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_61, STATE_VARIABLE_ModuleInfo_1_70, &STATE_VARIABLE_ModuleInfo_1_47);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__10_10 = ProcIds_40;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_11 = STATE_VARIABLE_ModuleInfo_1_47;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_48;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      STATE_VARIABLE_ModuleInfo_0_11 = next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word DeclMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word MarkerKind_11 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker_8, 0))) & (MR_Integer) 3);
  MR_Word PFUNameArity_12 = ((MR_Word) ((MR_hl_field(0, DeclMarker_8, 1))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, DeclMarker_8, 2))));

  switch (MarkerKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "check_termination", (MR_Integer) 0, ItemMercuryStatus_7, Context_13, (MR_Integer) 22, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[69])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "does_not_terminate", (MR_Integer) 0, ItemMercuryStatus_7, Context_13, (MR_Integer) 21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[71])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 0:
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "terminates", (MR_Integer) 0, ItemMercuryStatus_7, Context_13, (MR_Integer) 20, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[72])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  hlds__hlds_markers__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Markers_6;

  hlds__make_hlds__add_pragma__get_pred_markers_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Markers_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Markers_6));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(
  MR_Word PredSpec_12,
  MR_String PragmaName_13,
  MR_Word PragmaStatusClass_14,
  MR_Word PragmaStatus_15,
  MR_Word Context_16,
  MR_Word Marker_17,
  MR_Word ConflictMarkers_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word PFU_21 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_12, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_22 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 1))));
  MR_Word UserArity_23 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 2))));
  MR_Word MatchingPredIdResult_24;

  hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_35, PragmaName_13, (MR_Integer) 0, (MR_Integer) 0, Context_16, PFU_21, PredSymName_22, UserArity_23, &MatchingPredIdResult_24);
  if (((MR_tag((MR_Word) MatchingPredIdResult_24)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_34 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_24, 0))));

    *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_34, STATE_VARIABLE_Specs_0_37);
    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
  }
  else
  {
    MR_Word HeadPredId_25 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 0))));
    MR_Word TailPredIds_26 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 1))));
    MR_Word WarnSpecs_27 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 2))));
    MR_Word PredIds_28;
    MR_Word PredIdTable0_29;
    MR_Word PredIdTable_30;
    MR_Word PredMarkerSets_31;
    MR_Word PredMarkers_32;
    MR_Word BadPredMarkers_33;
    MR_Word STATE_VARIABLE_Specs_1_41;
    MR_Word STATE_VARIABLE_Specs_2_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word PredId_115;
    MR_Word PredIds_116;
    MR_Word PredInfo0_117;
    MR_Word PredInfo_118;
    MR_Word STATE_VARIABLE_PredTable_1_123;
    MR_Word STATE_VARIABLE_Specs_1_124;
    MR_Word Markers0_127;
    MR_Word Markers_128;
    MR_Box conv0_PredInfo0_117;

    {
      PredIds_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredIds_28, 0) = ((MR_Box) (HeadPredId_25));
      MR_hl_field(1, PredIds_28, 1) = ((MR_Box) (TailPredIds_26));
    }
    STATE_VARIABLE_Specs_1_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarnSpecs_27, STATE_VARIABLE_Specs_0_37);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredIdTable0_29);
    PredId_115 = ((MR_Word) ((MR_hl_field(1, PredIds_28, 0))));
    PredIds_116 = ((MR_Word) ((MR_hl_field(1, PredIds_28, 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_29, ((MR_Box) (PredId_115)), &conv0_PredInfo0_117);
    PredInfo0_117 = ((MR_Word) (conv0_PredInfo0_117));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_117, &Markers0_127);
    hlds__hlds_markers__add_marker_3_p_0(Marker_17, Markers0_127, &Markers_128);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_128, PredInfo0_117, &PredInfo_118);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_115)), ((MR_Box) (PredInfo_118)), PredIdTable0_29, &STATE_VARIABLE_PredTable_1_123);
    hlds__make_hlds__add_pragma__check_pragma_status_7_p_0(PragmaName_13, PragmaStatusClass_14, PragmaStatus_15, Context_16, PredInfo_118, STATE_VARIABLE_Specs_1_41, &STATE_VARIABLE_Specs_1_124);
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(Marker_17, PragmaName_13, PragmaStatusClass_14, PragmaStatus_15, Context_16, PredIds_116, STATE_VARIABLE_PredTable_1_123, &PredIdTable_30, STATE_VARIABLE_Specs_1_124, &STATE_VARIABLE_Specs_2_43);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_30, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[2]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pred_marker_11_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (PredIdTable_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[4]), Var_45, PredIds_28, &PredMarkerSets_31);
    PredMarkers_32 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), PredMarkerSets_31);
    Var_46 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ConflictMarkers_18);
    mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), PredMarkers_32, Var_46, &BadPredMarkers_33);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), BadPredMarkers_33);
    if (succeeded)
      *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_2_43;
    else
    {
      MR_Word PFU_56 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_12, 0))) & (MR_Integer) 3);
      MR_Word PredSymName_57 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 1))));
      MR_Word UserArity_58 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 2))));
      MR_Integer UserArityInt_59 = (MR_Integer) (UserArity_58);
      MR_Word SNA_60;
      MR_Word PorFPieces_61;
      MR_Word ConflictNames_62;
      MR_Word Pieces_63;
      MR_Word Spec_64;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_String Var_84;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Box conv3_Var_84;

      {
        SNA_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_60, 0) = ((MR_Box) (PredSymName_57));
        MR_hl_field(0, SNA_60, 1) = ((MR_Box) (UserArityInt_59));
      }
      switch (PFU_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          PorFPieces_61 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[148]));
          break;
        case (MR_Integer) 0:
          PorFPieces_61 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[150]));
          break;
        case (MR_Integer) 2:
          PorFPieces_61 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      Var_66 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), BadPredMarkers_33);
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[1]), Var_66, &ConflictNames_62);
      {
        Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_71, 1) = ((MR_Box) (PragmaName_13));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])));
      }
      Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
      Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[152])));
      Var_79 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", ConflictNames_62);
      conv3_Var_84 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConflictNames_62, ((MR_Box) ((MR_String) "pragma for")), ((MR_Box) ((MR_String) "pragmas for")));
      Var_84 = ((MR_String) (conv3_Var_84));
      {
        Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_92, 1) = ((MR_Box) (SNA_60));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
      }
      Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFPieces_61, Var_91);
      Var_89 = parse_tree__error_spec__color_as_subject_1_f_0(Var_90);
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_88);
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_81);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[154])), Var_78);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_76);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_73);
      Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_68);
      {
        Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_conflict_error\'/6"));
        MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Context_16));
        MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_38 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_43));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_String PragmaName_1,
  MR_Word PragmaStatusClass_2,
  MR_Word PragmaStatus_3,
  MR_Word Context_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredTable_0_7,
  MR_Word * STATE_VARIABLE_PredTable_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_PredTable_8 = STATE_VARIABLE_PredTable_0_7;
    }
    else
    {
      MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word PredIds_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word PredInfo0_31;
      MR_Word PredInfo_32;
      MR_Word STATE_VARIABLE_PredTable_1_37;
      MR_Word STATE_VARIABLE_Specs_1_38;
      MR_Word Markers0_42;
      MR_Word Markers_43;
      MR_Box conv0_PredInfo0_31;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_7, ((MR_Box) (PredId_27)), &conv0_PredInfo0_31);
      PredInfo0_31 = ((MR_Word) (conv0_PredInfo0_31));
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_31, &Markers0_42);
      hlds__hlds_markers__add_marker_3_p_0(Var_41, Markers0_42, &Markers_43);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_43, PredInfo0_31, &PredInfo_32);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_27)), ((MR_Box) (PredInfo_32)), STATE_VARIABLE_PredTable_0_7, &STATE_VARIABLE_PredTable_1_37);
      hlds__make_hlds__add_pragma__check_pragma_status_7_p_0(PragmaName_1, PragmaStatusClass_2, PragmaStatus_3, Context_4, PredInfo_32, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = PredIds_28;
      next_value_of_STATE_VARIABLE_PredTable_0_7 = STATE_VARIABLE_PredTable_1_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_1_38;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_PredTable_0_7 = next_value_of_STATE_VARIABLE_PredTable_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Piece_6)
{
  MR_Word PredInfo_7;
  MR_Integer OrigArity_8;
  MR_Word Var_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_7, &Var_9);
  OrigArity_8 = (MR_Integer) (Var_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Piece_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (OrigArity_8));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Piece_6;

  hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Piece_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Piece_6));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word TypeCtor_13,
  MR_String Kind_14,
  MR_Word PredSpec_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_42,
  MR_Integer * STATE_VARIABLE_SeqNum_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_Word PredicateTable_19;
  MR_Word PredOrFunc_20;
  MR_Word PredName_21;
  MR_Word UserArity_22;
  MR_Word PredFormArity_23;
  MR_Word PredIds_24;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_19);
  PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_15, 0))) & (MR_Integer) 1);
  PredName_21 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 1))));
  UserArity_22 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 2))));
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_20, UserArity_22, &PredFormArity_23);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_19, (MR_Integer) 0, PredOrFunc_20, PredName_21, PredFormArity_23, &PredIds_24);
  if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word LooseArityPredIds_25;
    MR_Integer UserArityInt_26;
    MR_Word Spec_28;

    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_19, (MR_Integer) 0, PredName_21, &LooseArityPredIds_25);
    UserArityInt_26 = (MR_Integer) (UserArity_22);
    if ((LooseArityPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_27;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;

      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_53, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_67, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_78, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_78, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[58])));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[56])));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[55])));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[50])));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[41])));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[53])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Pieces_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[52])));
        MR_hl_field(1, Pieces_27, 1) = ((MR_Box) (Var_50));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
      }
    }
    else
    {
      MR_Word ArityPieces_31;
      MR_Word SortedArityPieces_32;
      MR_Word ExpArities_34;
      MR_Word Var_88;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_107;
      MR_Word Var_110;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_Word Var_123;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_132;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_144;
      MR_Word Pieces_208;

      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[1]));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
        MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_88, 3) = ((MR_Box) (ModuleInfo_11));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, LooseArityPredIds_25, &ArityPieces_31);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArityPieces_31, &SortedArityPieces_32);
      if ((SortedArityPieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
          return;
        }
      else
      {
        MR_Word Var_216 = ((MR_Word) ((MR_hl_field(1, SortedArityPieces_32, 1))));

        if ((Var_216 == (MR_Word) ((MR_Unsigned) 0U)))
          ExpArities_34 = SortedArityPieces_32;
        else
        {
          MR_Word Var_95;

          Var_95 = parse_tree__error_spec__piece_list_to_pieces_2_f_0((MR_String) "and", SortedArityPieces_32);
          {
            ExpArities_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ExpArities_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[59])));
            MR_hl_field(1, ExpArities_34, 1) = ((MR_Box) (Var_95));
          }
        }
      }
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_103, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_117, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_128, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_128, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_127, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_136, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
        MR_hl_field(1, Var_135, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[65])));
      }
      {
        Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[61])));
        MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
      }
      {
        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_129, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[60])));
        MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[56])));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
      }
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[55])));
        MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[50])));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[41])));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[53])));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_104));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[52])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpArities_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      Pieces_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_144);
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_208));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_45 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
    }
    *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  }
  else
  {
    MR_Word Var_218 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 1))));
    MR_Word Var_219 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 0))));

    if ((Var_218 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *PredId_16 = Var_219;
      *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
    }
    else
    {
      MR_String PredOrFuncStr_41;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_166;
      MR_Word Var_169;
      MR_Word Var_172;
      MR_Word Var_175;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_183;
      MR_Word Var_185;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Integer UserArityInt_209 = (MR_Integer) (UserArity_22);
      MR_Word Pieces_210;
      MR_Word Spec_211;

      PredOrFuncStr_41 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_20);
      {
        Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_160, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_162 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_162, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_179, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_189, 1) = ((MR_Box) (PredOrFuncStr_41));
      }
      {
        Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_195, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_195, 1) = ((MR_Box) (UserArityInt_209));
      }
      {
        Var_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_194, 1) = ((MR_Box) (Var_195));
      }
      {
        Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_193, 0) = ((MR_Box) (Var_194));
        MR_hl_field(1, Var_193, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_190, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[67])));
        MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_193));
      }
      {
        Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_188, 0) = ((MR_Box) (Var_189));
        MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_190));
      }
      {
        Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_185, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[66])));
        MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_188));
      }
      {
        Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_185));
      }
      {
        Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_180, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[55])));
        MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_183));
      }
      {
        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
        MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_180));
      }
      {
        Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_175, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[31])));
        MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_178));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[24])));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[49])));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
      }
      {
        Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[53])));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_166));
      }
      {
        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
        MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_163));
      }
      {
        Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
        MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_161));
      }
      {
        Pieces_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_210, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[52])));
        MR_hl_field(1, Pieces_210, 1) = ((MR_Box) (Var_159));
      }
      {
        Spec_211 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_211, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_211, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_211, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_211, 4) = ((MR_Box) (Pieces_210));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_45 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_211));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
      }
      *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
  }
  *STATE_VARIABLE_SeqNum_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeqNum_0_42 + (MR_Unsigned) 1);
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_QualInfo_0_28,
  MR_Word * STATE_VARIABLE_QualInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  switch (MR_tag((MR_Word) Pragma_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObsoletePredInfo_16 = (MR_Word) ((MR_Word) (Pragma_12));

        hlds__make_hlds__add_pragma__mark_pred_as_obsolete_6_p_0(ObsoletePredInfo_16, ItemMercuryStatus_11, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
        *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ObsoleteProcInfo_17 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 1));

        hlds__make_hlds__add_pragma__mark_proc_as_obsolete_6_p_0(ObsoleteProcInfo_17, ItemMercuryStatus_11, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
        *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FormatCallInfo_18 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 2));
        MR_Word PredSpec_32 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_18, 0))));
        MR_Word OoMArgSpecs_33 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_18, 1))));
        MR_Word Context_34 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_18, 2))));
        MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_32, 0))) & (MR_Integer) 1);
        MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, PredSpec_32, 1))));
        MR_Word UserArity_38 = ((MR_Word) ((MR_hl_field(0, PredSpec_32, 2))));
        MR_Word MaybePredId_39;

        hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, (MR_Integer) 1, Context_34, (MR_String) "format_call", PredOrFunc_36, SymName_37, UserArity_38, &MaybePredId_39);
        if (((MR_tag((MR_Word) MaybePredId_39)) == (MR_Integer) 0))
        {
          MR_Word PredIdSpecs_40 = ((MR_Word) ((MR_hl_field(0, MaybePredId_39, 0))));

          *STATE_VARIABLE_Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredIdSpecs_40, STATE_VARIABLE_Specs_0_30);
          *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
        }
        else
        {
          MR_Word PredId_41 = ((MR_Word) ((MR_hl_field(1, MaybePredId_39, 0))));
          MR_Word PredIdTable0_42;
          MR_Word PredInfo0_43;
          MR_Word MaybeFormatCall0_44;
          MR_Word STATE_VARIABLE_Specs_2_62;
          MR_Box conv0_PredInfo0_43;

          hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &PredIdTable0_42);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_42, ((MR_Box) (PredId_41)), &conv0_PredInfo0_43);
          PredInfo0_43 = ((MR_Word) (conv0_PredInfo0_43));
          hlds__make_hlds__add_pragma__check_pragma_status_7_p_0((MR_String) "format_call", (MR_Integer) 0, ItemMercuryStatus_11, Context_34, PredInfo0_43, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_2_62);
          hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(PredInfo0_43, &MaybeFormatCall0_44);
          if ((MaybeFormatCall0_44 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word FormatCall_45;
            MR_Word PredInfo_46;
            MR_Word PredIdTable_47;
            MR_Word FCPreds0_48;
            MR_Word FCPreds_49;
            MR_Word Var_63;
            MR_Word STATE_VARIABLE_ModuleInfo_1_64;

            {
              FormatCall_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FormatCall_45, 0) = ((MR_Box) (Context_34));
              MR_hl_field(0, FormatCall_45, 1) = ((MR_Box) (OoMArgSpecs_33));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (FormatCall_45));
            }
            hlds__hlds_pred__pred_info_set_format_call_info_3_p_0(Var_63, PredInfo0_43, &PredInfo_46);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_41)), ((MR_Box) (PredInfo_46)), PredIdTable0_42, &PredIdTable_47);
            hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_47, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_1_64);
            hlds__hlds_module__module_info_get_format_call_pragma_preds_2_p_0(STATE_VARIABLE_ModuleInfo_1_64, &FCPreds0_48);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_41)), FCPreds0_48, &FCPreds_49);
            hlds__hlds_module__module_info_set_format_call_pragma_preds_3_p_0(FCPreds_49, STATE_VARIABLE_ModuleInfo_1_64, STATE_VARIABLE_ModuleInfo_27);
            *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_2_62;
          }
          else
          {
            MR_Word OldContext_50;
            MR_Word FirstPieces_52;
            MR_Word FirstMsg_53;
            MR_Word SecondMsg_55;
            MR_Word Spec_56;
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall0_44, 0))));
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_73;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_92;
            MR_Word Var_93;

            OldContext_50 = ((MR_Word) ((MR_hl_field(0, Var_65, 0))));
            Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[30])));
            {
              Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, Var_81, 1) = ((MR_Box) (PredSpec_32));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
            }
            Var_79 = parse_tree__error_spec__color_as_subject_1_f_0(Var_80);
            Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
            Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[32])), Var_78);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_73);
            FirstPieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_70);
            {
              FirstMsg_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FirstMsg_53, 0) = ((MR_Box) (Context_34));
              MR_hl_field(0, FirstMsg_53, 1) = ((MR_Box) (FirstPieces_52));
            }
            {
              SecondMsg_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SecondMsg_55, 0) = ((MR_Box) (OldContext_50));
              MR_hl_field(0, SecondMsg_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[38])));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (SecondMsg_55));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (FirstMsg_53));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
            }
            {
              Spec_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.mark_pred_as_format_call\'/6"));
              MR_hl_field(2, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(2, Spec_56, 3) = ((MR_Box) (Var_92));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_31 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_56));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_62));
            }
            *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
          }
        }
        *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstrInfo_19 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0(ProgressStream_10, TypeSpecConstrInfo_19, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_QualInfo_0_28, STATE_VARIABLE_QualInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpecInfo_20 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0(TypeSpecInfo_20, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_QualInfo_0_28, STATE_VARIABLE_QualInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OISUInfo_21 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0(OISUInfo_21, ItemMercuryStatus_11, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermInfo_22 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_termination_5_p_0(TermInfo_22, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Term2Info_23 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_termination2_5_p_0(Term2Info_23, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SharingInfo_24 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_struct_sharing_5_p_0(SharingInfo_24, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ReuseInfo_25 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma__add_pragma_struct_reuse_5_p_0(ReuseInfo_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_PredId_16;
  MR_Integer conv11_STATE_VARIABLE_SeqNum_43;
  MR_Word conv10_STATE_VARIABLE_Specs_45;

  hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_45);
  *wrapper_arg_2 = ((MR_Box) (conv12_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_PredId_16;
  MR_Integer conv6_STATE_VARIABLE_SeqNum_43;
  MR_Word conv5_STATE_VARIABLE_Specs_45;

  hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_45);
  *wrapper_arg_2 = ((MR_Box) (conv7_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_PredId_16;
  MR_Integer conv1_STATE_VARIABLE_SeqNum_43;
  MR_Word conv0_STATE_VARIABLE_Specs_45;

  hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_45);
  *wrapper_arg_2 = ((MR_Box) (conv2_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0(
  MR_Word OISUInfo_7,
  MR_Word ItemMercuryStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_bool succeeded;
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 0))));
  MR_Word Creators_12 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 1))));
  MR_Word Mutators_13 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 2))));
  MR_Word Destructors_14 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 3))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 4))));
  MR_Word CreatorPredIds_27;
  MR_Word MutatorPredIds_29;
  MR_Word DestructorPredIds_31;
  MR_Word STATE_VARIABLE_OISUSpecs_3_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_OISUSpecs_4_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_OISUSpecs_5_79;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_OISUSpecs_6_83;
  MR_Box conv4_Var_28;
  MR_Box conv3_STATE_VARIABLE_OISUSpecs_4_75;
  MR_Box conv9_Var_30;
  MR_Box conv8_STATE_VARIABLE_OISUSpecs_5_79;
  MR_Box conv14_Var_32;
  MR_Box conv13_STATE_VARIABLE_OISUSpecs_6_83;

  if (((MR_tag((MR_Word) ItemMercuryStatus_8)) == (MR_Integer) 1))
    STATE_VARIABLE_OISUSpecs_3_72 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemExport_19 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_8, 0))) & (MR_Integer) 3);
    MR_Word TypeTable_22;
    MR_Word STATE_VARIABLE_OISUSpecs_2_56;
    MR_Word TypeDefn_23;

    switch (ItemExport_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        STATE_VARIABLE_OISUSpecs_2_56 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word StatusSpec_21;

          {
            StatusSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StatusSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/6"));
            MR_hl_field(0, StatusSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, StatusSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, StatusSpec_21, 3) = ((MR_Box) (Context_15));
            MR_hl_field(0, StatusSpec_21, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[42])));
          }
          {
            STATE_VARIABLE_OISUSpecs_2_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_OISUSpecs_2_56, 0) = ((MR_Box) (StatusSpec_21));
            MR_hl_field(1, STATE_VARIABLE_OISUSpecs_2_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &TypeTable_22);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_11, &TypeDefn_23);
    if (succeeded)
    {
      MR_Word TypeStatus_24;
      MR_Word Var_57;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
      Var_57 = (MR_Word) (TypeStatus_24);
      succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 20U));
      if (succeeded)
        STATE_VARIABLE_OISUSpecs_3_72 = STATE_VARIABLE_OISUSpecs_2_56;
      else
      {
        MR_Word TypeSpec_26;

        {
          TypeSpec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/6"));
          MR_hl_field(0, TypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, TypeSpec_26, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, TypeSpec_26, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[47])));
        }
        {
          STATE_VARIABLE_OISUSpecs_3_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_OISUSpecs_3_72, 0) = ((MR_Box) (TypeSpec_26));
          MR_hl_field(1, STATE_VARIABLE_OISUSpecs_3_72, 1) = ((MR_Box) (STATE_VARIABLE_OISUSpecs_2_56));
        }
      }
    }
    else
      STATE_VARIABLE_OISUSpecs_3_72 = STATE_VARIABLE_OISUSpecs_2_56;
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_1));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_73, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_73, 6) = ((MR_Box) ((MR_String) "creator"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_73, Creators_12, &CreatorPredIds_27, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_28, ((MR_Box) (STATE_VARIABLE_OISUSpecs_3_72)), &conv3_STATE_VARIABLE_OISUSpecs_4_75);
  STATE_VARIABLE_OISUSpecs_4_75 = ((MR_Word) (conv3_STATE_VARIABLE_OISUSpecs_4_75));
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_2));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) ((MR_String) "mutator"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_77, Mutators_13, &MutatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_30, ((MR_Box) (STATE_VARIABLE_OISUSpecs_4_75)), &conv8_STATE_VARIABLE_OISUSpecs_5_79);
  STATE_VARIABLE_OISUSpecs_5_79 = ((MR_Word) (conv8_STATE_VARIABLE_OISUSpecs_5_79));
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_6_p_0_3));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_81, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_81, 6) = ((MR_Box) ((MR_String) "destructor"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_81, Destructors_14, &DestructorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_32, ((MR_Box) (STATE_VARIABLE_OISUSpecs_5_79)), &conv13_STATE_VARIABLE_OISUSpecs_6_83);
  STATE_VARIABLE_OISUSpecs_6_83 = ((MR_Word) (conv13_STATE_VARIABLE_OISUSpecs_6_83));
  if ((STATE_VARIABLE_OISUSpecs_6_83 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OISUPreds_33;
    MR_Word OISUMap0_34;
    MR_Word OISUMap_35;

    {
      OISUPreds_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OISUPreds_33, 0) = ((MR_Box) (CreatorPredIds_27));
      MR_hl_field(0, OISUPreds_33, 1) = ((MR_Box) (MutatorPredIds_29));
      MR_hl_field(0, OISUPreds_33, 2) = ((MR_Box) (DestructorPredIds_31));
    }
    hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &OISUMap0_34);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (OISUPreds_33)), OISUMap0_34, &OISUMap_35);
    if (succeeded)
    {
      hlds__hlds_module__module_info_set_oisu_map_3_p_0(OISUMap_35, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word DupPieces_36;
      MR_Word DupSpec_37;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;

      {
        Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_95, 1) = ((MR_Box) (TypeCtor_11));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[50])));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[49])));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        DupPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DupPieces_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[48])));
        MR_hl_field(1, DupPieces_36, 1) = ((MR_Box) (Var_88));
      }
      {
        DupSpec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/6"));
        MR_hl_field(0, DupSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, DupSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, DupSpec_37, 3) = ((MR_Box) (Context_15));
        MR_hl_field(0, DupSpec_37, 4) = ((MR_Box) (DupPieces_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_43 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DupSpec_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
      }
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_OISUSpecs_6_83, STATE_VARIABLE_Specs_0_42);
    *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_proc_as_obsolete_6_p_0(
  MR_Word ObsoleteProcInfo_7,
  MR_Word PragmaStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_bool succeeded;
  MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_7, 0))));
  MR_Word ObsoleteInFavourOf_12 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_7, 1))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_7, 2))));
  MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_11, 0))) & (MR_Integer) 1);
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 1))));
  MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 2))));
  MR_Integer PredFormArityInt_18;
  MR_Word UserArity_19;
  MR_Word MaybePredId_20;
  MR_Word Var_34;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &PredFormArityInt_18);
  Var_34 = (MR_Word) (PredFormArityInt_18);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, Var_34);
  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_30, (MR_Integer) 0, (MR_Integer) 1, Context_13, (MR_String) "obsolete_proc", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
  if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
  {
    MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(0, MaybePredId_20, 0))));

    *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_32);
    *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
  }
  else
  {
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(1, MaybePredId_20, 0))));
    MR_Word PredInfo0_22;
    MR_Word PFNameArity_23;
    MR_Word STATE_VARIABLE_Specs_1_40;
    MR_Word PredInfo0_53;
    MR_Word ProcTable0_54;
    MR_Word ProcList_55;
    MR_Integer ProcId_56;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredId_21, &PredInfo0_22);
    hlds__make_hlds__add_pragma__check_pragma_status_7_p_0((MR_String) "obsolete_proc", (MR_Integer) 0, PragmaStatus_8, Context_13, PredInfo0_22, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_1_40);
    {
      PFNameArity_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_23, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(0, PFNameArity_23, 1) = ((MR_Box) (SymName_16));
      MR_hl_field(0, PFNameArity_23, 2) = ((MR_Box) (UserArity_19));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredId_21, &PredInfo0_53);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_53, &ProcTable0_54);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_54, &ProcList_55);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_30, ProcList_55, Modes_17, &ProcId_56);
    if (succeeded)
    {
      MR_Word ProcInfo0_57;
      MR_Word ProcInfo_58;
      MR_Word PredInfo_59;
      MR_Box conv0_ProcInfo0_57;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_54, ((MR_Box) (ProcId_56)), &conv0_ProcInfo0_57);
      ProcInfo0_57 = ((MR_Word) (conv0_ProcInfo0_57));
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__322__1_3_p_0(ObsoleteInFavourOf_12, ProcInfo0_57, &ProcInfo_58);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_56, ProcInfo_58, PredInfo0_53, &PredInfo_59);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, PredInfo_59, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
      *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_1_40;
    }
    else
    {
      MR_Word Pieces_60;
      MR_Word Spec_61;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;

      Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[171])));
      {
        Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 18U));
        MR_hl_field(3, Var_81, 1) = ((MR_Box) (PFNameArity_23));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
        MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
      }
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_77);
      Pieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[232])), Var_71);
      {
        Spec_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(0, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_61, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, Spec_61, 4) = ((MR_Box) (Pieces_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_33 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_61));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_40));
      }
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__322__1_3_p_0(
  MR_Word ObsoleteInFavourOf_12,
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42)
{
  MR_Word MaybeObsoleteInFavourOf0_27;
  MR_Word MaybeObsoleteInFavourOf_28;

  hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(LambdaHeadVar__1_41, &MaybeObsoleteInFavourOf0_27);
  if ((MaybeObsoleteInFavourOf0_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (ObsoleteInFavourOf_12));
    }
  else
  {
    MR_Word ObsoleteInFavourOf0_29 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf0_27, 0))));
    MR_Word Var_43;

    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_29, ObsoleteInFavourOf_12);
    {
      MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (Var_43));
    }
  }
  hlds__hlds_pred__proc_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_28, LambdaHeadVar__1_41, LambdaHeadVar__2_42);
}

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_6_p_0(
  MR_Word ObsoletePredInfo_7,
  MR_Word PragmaStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word PredSpec_11 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_7, 0))));
  MR_Word ObsoleteInFavourOf_12 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_7, 1))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_7, 2))));
  MR_Word PFU_15 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_11, 0))) & (MR_Integer) 3);
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, PredSpec_11, 1))));
  MR_Word UserArity_17 = ((MR_Word) ((MR_hl_field(0, PredSpec_11, 2))));
  MR_Word MatchingPredIdResult_18;

  hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_String) "obsolete", (MR_Integer) 0, (MR_Integer) 0, Context_13, PFU_15, SymName_16, UserArity_17, &MatchingPredIdResult_18);
  if (((MR_tag((MR_Word) MatchingPredIdResult_18)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_25 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_18, 0))));

    *STATE_VARIABLE_Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_25, STATE_VARIABLE_Specs_0_28);
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
  }
  else
  {
    MR_Word HeadPredId_19 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_18, 0))));
    MR_Word TailPredIds_20 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_18, 1))));
    MR_Word WarnSpecs_21 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_18, 2))));
    MR_Word PredIds_22;
    MR_Word PredIdTable0_23;
    MR_Word PredIdTable_24;
    MR_Word STATE_VARIABLE_Specs_1_33;

    {
      PredIds_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredIds_22, 0) = ((MR_Box) (HeadPredId_19));
      MR_hl_field(1, PredIds_22, 1) = ((MR_Box) (TailPredIds_20));
    }
    STATE_VARIABLE_Specs_1_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarnSpecs_21, STATE_VARIABLE_Specs_0_28);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &PredIdTable0_23);
    hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_8_p_0(ObsoleteInFavourOf_12, PragmaStatus_8, Context_13, PredIds_22, PredIdTable0_23, &PredIdTable_24, STATE_VARIABLE_Specs_1_33, STATE_VARIABLE_Specs_29);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_24, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_9_p_0(
  MR_Word ModuleInfo_10,
  MR_String Pragma_11,
  MR_Word RequireOneMatch_12,
  MR_Word PragmaAllowsModes_13,
  MR_Word Context_14,
  MR_Word PFU_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * Result_18)
{
  MR_Word PredTable0_19;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable0_19);
  if (((MR_tag((MR_Word) SymName_16)) == (MR_Integer) 1))
  {
    MR_Word PredIds_23;
    MR_Word WarnSpecs_24;

    switch (PFU_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredFormArity_152;

          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_17, &PredFormArity_152);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_19, (MR_Integer) 0, (MR_Integer) 1, SymName_16, PredFormArity_152, &PredIds_23);
          WarnSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredFormArity_25;

          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_17, &PredFormArity_25);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_19, (MR_Integer) 0, (MR_Integer) 0, SymName_16, PredFormArity_25, &PredIds_23);
          WarnSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable0_19, (MR_Integer) 0, SymName_16, UserArity_17, &PredIds_23);
          hlds__make_hlds_error__warn_about_pfu_unknown_7_p_0(ModuleInfo_10, Pragma_11, PragmaAllowsModes_13, SymName_16, UserArity_17, Context_14, &WarnSpecs_24);
        }
        break;
    }
    if ((PredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SymOnlyPredIds_26;
      MR_Word PredIdTable0_27;
      MR_Word OtherUserArities_28;
      MR_Word DescPieces_29;
      MR_Word NoMatchSpecs_30;
      MR_Word Var_53;
      MR_Word Var_58;
      MR_Word Var_60;

      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable0_19, (MR_Integer) 0, SymName_16, &SymOnlyPredIds_26);
      hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_10, &PredIdTable0_27);
      hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable0_27, SymOnlyPredIds_26, UserArity_17, &OtherUserArities_28);
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (Pragma_11));
      }
      {
        DescPieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DescPieces_29, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, DescPieces_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])));
      }
      Var_58 = parse_tree__prog_item__pfu_to_maybe_pred_or_func_1_f_0(PFU_15);
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_58, SymName_16, UserArity_17, OtherUserArities_28, Context_14, DescPieces_29, (MR_Word) ((MR_Unsigned) 0U), &NoMatchSpecs_30);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NoMatchSpecs_30, WarnSpecs_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_60));
      }
    }
    else
    {
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(1, PredIds_23, 1))));
      MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, PredIds_23, 0))));

      if ((Var_158 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Result_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_159));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (WarnSpecs_24));
        }
      else
      {
        MR_Integer UserArityInt_35 = (MR_Integer) (UserArity_17);

        switch (RequireOneMatch_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Globals_36;
              MR_Word WarnActual_37;

              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_36);
              libs__globals__lookup_bool_option_3_p_0(Globals_36, (MR_Integer) 71, &WarnActual_37);
              switch (WarnActual_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Result_18 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_159));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_158));
                    MR_hl_field(0, base, 2) = ((MR_Box) (WarnSpecs_24));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SNA_38;
                    MR_Word ActualPieces_39;
                    MR_Word ActualSpec_40;
                    MR_Word Var_64;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_81;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_106;

                    {
                      SNA_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SNA_38, 0) = ((MR_Box) (SymName_16));
                      MR_hl_field(0, SNA_38, 1) = ((MR_Box) (UserArityInt_35));
                    }
                    {
                      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                      MR_hl_field(3, Var_68, 1) = ((MR_Box) (Pragma_11));
                    }
                    {
                      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(3, Var_76, 1) = ((MR_Box) (SNA_38));
                    }
                    {
                      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[157])));
                    }
                    Var_74 = parse_tree__error_spec__color_as_subject_1_f_0(Var_75);
                    Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[166])));
                    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
                    Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[160])), Var_88);
                    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_81);
                    ActualPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_73);
                    {
                      ActualSpec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ActualSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/9"));
                      MR_hl_field(0, ActualSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(0, ActualSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(0, ActualSpec_40, 3) = ((MR_Box) (Context_14));
                      MR_hl_field(0, ActualSpec_40, 4) = ((MR_Box) (ActualPieces_39));
                    }
                    {
                      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_106, 0) = ((MR_Box) (ActualSpec_40));
                      MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Result_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_159));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_158));
                      MR_hl_field(0, base, 2) = ((MR_Box) (Var_106));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ErrorPieces_41;
              MR_Word ErrorSpec_42;
              MR_Word Var_108;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_125;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_150;
              MR_Word SNA_153;

              {
                SNA_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_153, 0) = ((MR_Box) (SymName_16));
                MR_hl_field(0, SNA_153, 1) = ((MR_Box) (UserArityInt_35));
              }
              {
                Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(3, Var_112, 1) = ((MR_Box) (Pragma_11));
              }
              {
                Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
                MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[156])));
              }
              {
                Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(3, Var_120, 1) = ((MR_Box) (SNA_153));
              }
              {
                Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[157])));
              }
              Var_118 = parse_tree__error_spec__color_as_subject_1_f_0(Var_119);
              Var_133 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[166])));
              Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_133, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[169])), Var_132);
              Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_125);
              ErrorPieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, Var_117);
              {
                ErrorSpec_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrorSpec_42, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/9"));
                MR_hl_field(0, ErrorSpec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ErrorSpec_42, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, ErrorSpec_42, 3) = ((MR_Box) (Context_14));
                MR_hl_field(0, ErrorSpec_42, 4) = ((MR_Box) (ErrorPieces_41));
              }
              {
                Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_150, 0) = ((MR_Box) (ErrorSpec_42));
                MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_150));
              }
            }
            break;
        }
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/9", (MR_String) "unqualified name");
      return;
    }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_8_p_0(
  MR_Word ObsoleteInFavourOf_1,
  MR_Word PragmaStatus_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredTable_6 = STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word PredIds_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word PredInfo0_25;
      MR_Word MaybeObsoleteInFavourOf0_26;
      MR_Word MaybeObsoleteInFavourOf_27;
      MR_Word PredInfo_29;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Word STATE_VARIABLE_PredTable_1_38;
      MR_Box conv0_PredInfo0_25;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_5, ((MR_Box) (PredId_21)), &conv0_PredInfo0_25);
      PredInfo0_25 = ((MR_Word) (conv0_PredInfo0_25));
      hlds__make_hlds__add_pragma__check_pragma_status_7_p_0((MR_String) "obsolete", (MR_Integer) 0, PragmaStatus_2, Context_3, PredInfo0_25, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_36);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo0_25, &MaybeObsoleteInFavourOf0_26);
      if ((MaybeObsoleteInFavourOf0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeObsoleteInFavourOf_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeObsoleteInFavourOf_27, 0) = ((MR_Box) (ObsoleteInFavourOf_1));
        }
      else
      {
        MR_Word ObsoleteInFavourOf0_28 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf0_26, 0))));
        MR_Word Var_37;

        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_28, ObsoleteInFavourOf_1);
        {
          MaybeObsoleteInFavourOf_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeObsoleteInFavourOf_27, 0) = ((MR_Box) (Var_37));
        }
      }
      hlds__hlds_pred__pred_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_27, PredInfo0_25, &PredInfo_29);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_21)), ((MR_Box) (PredInfo_29)), STATE_VARIABLE_PredTable_0_5, &STATE_VARIABLE_PredTable_1_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_22;
      next_value_of_STATE_VARIABLE_PredTable_0_5 = STATE_VARIABLE_PredTable_1_38;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredTable_0_5 = next_value_of_STATE_VARIABLE_PredTable_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__check_pragma_status_7_p_0(
  MR_String PragmaName_8,
  MR_Word StatusClass_9,
  MR_Word PragmaStatus_10,
  MR_Word Context_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if (((MR_tag((MR_Word) PragmaStatus_10)) == (MR_Integer) 1))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word PragmaExport_15 = ((MR_Unsigned) ((MR_hl_field(0, PragmaStatus_10, 0))) & (MR_Integer) 3);
    MR_Word PredStatus_17;
    MR_Word PredExported_18;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_17);
    PredExported_18 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_17);
    switch (PragmaExport_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (PredExported_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredNamePieces_19;
              MR_Word Pieces_20;
              MR_Word Spec_21;
              MR_Word Var_32;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word Var_43;
              MR_Word Var_44;

              PredNamePieces_19 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_3[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_12);
              {
                Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(3, Var_38, 1) = ((MR_Box) (PragmaName_8));
              }
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[199])));
              }
              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[204])));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
              }
              Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[206])));
              Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
              Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_43);
              Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNamePieces_19, Var_33);
              Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[203])), Var_32);
              {
                Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_pragma_status\'/7"));
                MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_11));
                MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_23 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
              }
            }
            break;
          case (MR_Integer) 1:
            switch (StatusClass_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_88;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_97;
                  MR_Word Var_98;
                  MR_Word Pieces_128;
                  MR_Word Spec_129;

                  {
                    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_92, 1) = ((MR_Box) (PragmaName_8));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])));
                  }
                  {
                    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[207])));
                    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
                  }
                  Var_98 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[209])));
                  Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_98, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[215])));
                  Pieces_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_97);
                  {
                    Spec_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_129, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_pragma_status\'/7"));
                    MR_hl_field(0, Spec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_129, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_129, 3) = ((MR_Box) (Context_11));
                    MR_hl_field(0, Spec_129, 4) = ((MR_Box) (Pieces_128));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_23 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_129));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        switch (PredExported_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
            break;
          case (MR_Integer) 1:
            switch (StatusClass_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_Word PredNamePieces_119;
                  MR_Word Pieces_120;
                  MR_Word Spec_121;

                  PredNamePieces_119 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_3[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_12);
                  {
                    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_70, 1) = ((MR_Box) (PragmaName_8));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[199])));
                  }
                  {
                    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[197])));
                    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
                  }
                  Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[201])));
                  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
                  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_75);
                  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNamePieces_119, Var_65);
                  Pieces_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[196])), Var_64);
                  {
                    Spec_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_121, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_pragma_status\'/7"));
                    MR_hl_field(0, Spec_121, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(0, Spec_121, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_121, 3) = ((MR_Box) (Context_11));
                    MR_hl_field(0, Spec_121, 4) = ((MR_Box) (Pieces_120));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_23 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_121));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
                  }
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
                break;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_gen_pragma_mm_tabling_5_p_0(
  MR_Word MMTabling_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, MMTabling_6, 0))));
  MR_Word TablingStatus_10 = ((MR_Unsigned) ((MR_hl_field(0, MMTabling_6, 1))) & (MR_Integer) 3);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, MMTabling_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "mm_tabling_info", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcMMTablingInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcMMTablingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcMMTablingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TablingStatus_10));
      MR_hl_field(0, ProcMMTablingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcMMTablingInfo_22));
    }
    hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_gen_pragma_trailing_5_p_0(
  MR_Word Trailing_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, Trailing_6, 0))));
  MR_Word TrailingStatus_10 = ((MR_Unsigned) ((MR_hl_field(0, Trailing_6, 1))) & (MR_Integer) 3);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Trailing_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "trailing_info", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcTrailingInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcTrailingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTrailingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_10));
      MR_hl_field(0, ProcTrailingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcTrailingInfo_22));
    }
    hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_gen_pragma_exceptions_5_p_0(
  MR_Word Exceptions_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 0))));
  MR_Word ThrowStatus_10 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "exceptions", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcExceptionInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcExceptionInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcExceptionInfo_22, 0) = ((MR_Box) (ThrowStatus_10));
      MR_hl_field(0, ProcExceptionInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcExceptionInfo_22));
    }
    hlds__hlds_pred__proc_info_set_exception_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_mode_num_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word IsFullyQualified_12,
  MR_Word FailHandling_13,
  MR_Word Context_14,
  MR_String PragmaName_15,
  MR_Word PredOrFunc_16,
  MR_Word SymName_17,
  MR_Word UserArity_18,
  MR_Integer ModeNum_19,
  MR_Word * MaybePredProcId_20)
{
  MR_bool succeeded;
  MR_Word MaybePredId_21;

  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(ModuleInfo_11, IsFullyQualified_12, FailHandling_13, Context_14, PragmaName_15, PredOrFunc_16, SymName_17, UserArity_18, &MaybePredId_21);
  if (((MR_tag((MR_Word) MaybePredId_21)) == (MR_Integer) 0))
  {
    MR_Word Specs_33 = ((MR_Word) ((MR_hl_field(0, MaybePredId_21, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredProcId_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
    }
  }
  else
  {
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredId_21, 0))));
    MR_Integer ProcId_23;
    MR_Word PredInfo_24;
    MR_Word ProcTable_25;
    MR_Word ProcInfo_26;
    MR_Box conv0_ProcInfo_26;

    hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_23, ModeNum_19);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_22, &PredInfo_24);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &ProcTable_25);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_25, ((MR_Box) (ProcId_23)), &conv0_ProcInfo_26);
    if (succeeded)
    {
      ProcInfo_26 = ((MR_Word) (conv0_ProcInfo_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredProcId_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredId_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (ProcId_23));
        MR_hl_field(1, base, 2) = ((MR_Box) (PredInfo_24));
        MR_hl_field(1, base, 3) = ((MR_Box) (ProcInfo_26));
      }
    else
    {
      MR_Word PorF_27;
      MR_String PredName_28;
      MR_Integer UserArityInt_29;
      MR_Word NameArity_30;
      MR_Word Pieces_31;
      MR_Word Spec_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_71;

      PorF_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_24);
      PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_24);
      Var_34 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_24);
      UserArityInt_29 = (MR_Integer) (Var_34);
      {
        NameArity_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NameArity_30, 0) = ((MR_Box) (PredName_28));
        MR_hl_field(0, NameArity_30, 1) = ((MR_Box) (UserArityInt_29));
      }
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaName_15));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[193])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[189])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (ModeNum_19));
      }
      {
        Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_58, 1) = (MR_Box) ((MR_Unsigned) (PorF_27));
      }
      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (NameArity_30));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[194])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_47);
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity_mode_num\'/10"));
        MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_14));
        MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredProcId_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_gen_pragma_unused_args_5_p_0(
  MR_Word UnusedArgsInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 0))));
  MR_Word UnusedArgs_10 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredId_17;

  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_23, (MR_Integer) 0, (MR_Integer) 2, Context_11, (MR_String) "unused_args", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
  if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_17, 0))));

    *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_25);
    *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredId_17, 0))));
    MR_Word UnusedArgInfo0_19;
    MR_Integer ProcId_20;
    MR_Word PredProcId_21;
    MR_Word UnusedArgInfo_22;

    hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &UnusedArgInfo0_19);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcId_21, 0) = ((MR_Box) (PredId_18));
      MR_hl_field(0, PredProcId_21, 1) = ((MR_Box) (ProcId_20));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[3]), ((MR_Box) (PredProcId_21)), ((MR_Box) (UnusedArgs_10)), UnusedArgInfo0_19, &UnusedArgInfo_22);
    hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(UnusedArgInfo_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_16;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  hlds__make_hlds__add_pragma__add_impl_marker_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_markers_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 1))));
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_ModuleInfo_1_23;
      MR_Word STATE_VARIABLE_Specs_1_24;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_23;
      MR_Box conv2_STATE_VARIABLE_Specs_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[1]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_markers_5_p_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemMercuryStatus_16));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_22, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_23, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_1_24);
      STATE_VARIABLE_ModuleInfo_1_23 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_23));
      STATE_VARIABLE_Specs_1_24 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_23;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_5_p_0(
  MR_Word FPEInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_bool succeeded;
  MR_Word Origin_9 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 0))));
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_6, 1))) & (MR_Integer) 3);
  MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 2))));
  MR_String ExportedName_12 = ((MR_String) ((MR_hl_field(0, FPEInfo_6, 3))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 4))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 5))));
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_11, 0))) & (MR_Integer) 1);
  MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 1))));
  MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 2))));
  MR_Word PredFormArity_19;
  MR_Word UserArity_20;
  MR_Word MaybePredId_21;

  PredFormArity_19 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_18);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_16, &UserArity_20, PredFormArity_19);
  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, (MR_Integer) 1, (MR_Integer) 1, Context_14, (MR_String) "foreign_export", PredOrFunc_16, SymName_17, UserArity_20, &MaybePredId_21);
  if (((MR_tag((MR_Word) MaybePredId_21)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_21, 0))));

    if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_44);
    else
      *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
    *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
  }
  else
  {
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredId_21, 0))));
    MR_Word PredInfo_23;
    MR_Word Procs_24;
    MR_Word ExistingProcs_25;
    MR_Integer ProcId_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_22, &PredInfo_23);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_23, &Procs_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_24, &ExistingProcs_25);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_42, ExistingProcs_25, ArgModes_18, &ProcId_26);
    if (succeeded)
    {
      MR_Word ProcInfo0_27;
      MR_Word MaybeDetism_28;
      MR_Box conv0_ProcInfo0_27;
      MR_Word Detism_29;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_24, ((MR_Box) (ProcId_26)), &conv0_ProcInfo0_27);
      ProcInfo0_27 = ((MR_Word) (conv0_ProcInfo0_27));
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_27, &MaybeDetism_28);
      succeeded = (MaybeDetism_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Detism_29 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_28, 0))));
        switch (Detism_29) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_30;
        MR_String ModeSubDeclStr_31;
        MR_Word Pieces_32;
        MR_Word Spec_33;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_63;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_74;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;

        mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_13, &InstVarSet_30);
        ModeSubDeclStr_31 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_16, InstVarSet_30, SymName_17, ArgModes_18, MaybeDetism_28);
        Var_55 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[12])));
        Var_69 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[16])));
        {
          Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_85, 1) = ((MR_Box) (ModeSubDeclStr_31));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])));
        }
        Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[20])), Var_82);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_74);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[14])), Var_68);
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_63);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_54);
        {
          Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_foreign_proc_export\'/5"));
          MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Context_14));
          MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
        }
        *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
      }
      else
      {
        MR_Word Globals_34;
        MR_Word ForeignLangs_35;
        MR_Word ProcInfo_39;
        MR_Word STATE_VARIABLE_ModuleInfo_1_97;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &Globals_34);
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_34, &ForeignLangs_35);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_10)), ForeignLangs_35);
        if (succeeded)
        {
          MR_Word PragmaExportedProcs0_36;
          MR_Word NewExportedProc_37;
          MR_Word PragmaExportedProcs_38;

          hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &PragmaExportedProcs0_36);
          {
            NewExportedProc_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewExportedProc_37, 0) = (MR_Box) ((MR_Unsigned) (Lang_10));
            MR_hl_field(0, NewExportedProc_37, 1) = ((MR_Box) (PredId_22));
            MR_hl_field(0, NewExportedProc_37, 2) = ((MR_Box) (ProcId_26));
            MR_hl_field(0, NewExportedProc_37, 3) = ((MR_Box) (ExportedName_12));
            MR_hl_field(0, NewExportedProc_37, 4) = ((MR_Box) (Context_14));
          }
          PragmaExportedProcs_38 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExportedProcs0_36, ((MR_Box) (NewExportedProc_37)));
          hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_38, STATE_VARIABLE_ModuleInfo_0_42, &STATE_VARIABLE_ModuleInfo_1_97);
        }
        else
          STATE_VARIABLE_ModuleInfo_1_97 = STATE_VARIABLE_ModuleInfo_0_42;
        hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_27, &ProcInfo_39);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_22, ProcId_26, PredInfo_23, ProcInfo_39, STATE_VARIABLE_ModuleInfo_1_97, STATE_VARIABLE_ModuleInfo_43);
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
    }
    else
    {
      if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_22, PredInfo_23, VarSet_13, ArgModes_18, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[26])), Context_14, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
      else
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_28;
  MR_Word conv1_STATE_VARIABLE_QualInfo_30;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  hlds__make_hlds__add_pragma__add_impl_pragma_tabled_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_30, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_28));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_30));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_ModuleInfo_1_34;
      MR_Word STATE_VARIABLE_QualInfo_1_35;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_34;
      MR_Box conv4_STATE_VARIABLE_QualInfo_1_35;
      MR_Box conv3_STATE_VARIABLE_Specs_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[2]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_8_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv5_STATE_VARIABLE_ModuleInfo_1_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv4_STATE_VARIABLE_QualInfo_1_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_36);
      STATE_VARIABLE_ModuleInfo_1_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_34));
      STATE_VARIABLE_QualInfo_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_1_35));
      STATE_VARIABLE_Specs_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_34;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PragmaTabledCord_37;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_39;
  MR_Word conv0_STATE_VARIABLE_Specs_41;

  hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PragmaTabledCord_37, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_39, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PragmaTabledCord_37));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_39));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragmas_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaTabledListCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaTabledListCord_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_PragmaTabledListCord_4 = STATE_VARIABLE_PragmaTabledListCord_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word PragmaTabledCord_27;
      MR_Word PragmaTabledList_28;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_ModuleInfo_1_40;
      MR_Word STATE_VARIABLE_Specs_1_41;
      MR_Word STATE_VARIABLE_PragmaTabledListCord_1_42;
      MR_Box conv5_PragmaTabledCord_27;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_40;
      MR_Box conv3_STATE_VARIABLE_Specs_1_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragmas_8_p_0_1));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_38, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0));
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_38, Items_26, ((MR_Box) (Var_39)), &conv5_PragmaTabledCord_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv4_STATE_VARIABLE_ModuleInfo_1_40, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_41);
      PragmaTabledCord_27 = ((MR_Word) (conv5_PragmaTabledCord_27));
      STATE_VARIABLE_ModuleInfo_1_40 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_40));
      STATE_VARIABLE_Specs_1_41 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_41));
      PragmaTabledList_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), PragmaTabledCord_27);
      if ((PragmaTabledList_28 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_PragmaTabledListCord_1_42 = STATE_VARIABLE_PragmaTabledListCord_0_3;
      else
      {
        MR_Word SubList_31;

        {
          SubList_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubList_31, 0) = ((MR_Box) (ItemMercuryStatus_25));
          MR_hl_field(0, SubList_31, 1) = ((MR_Box) (PragmaTabledList_28));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[2]), ((MR_Box) (SubList_31)), STATE_VARIABLE_PragmaTabledListCord_0_3, &STATE_VARIABLE_PragmaTabledListCord_1_42);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3 = STATE_VARIABLE_PragmaTabledListCord_1_42;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_1_40;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_41;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PragmaTabledListCord_0_3 = next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_16;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  hlds__make_hlds__add_pragma__add_decl_marker_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_markers_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 1))));
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_ModuleInfo_1_23;
      MR_Word STATE_VARIABLE_Specs_1_24;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_23;
      MR_Box conv2_STATE_VARIABLE_Specs_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_decl_markers_5_p_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemMercuryStatus_16));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_22, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_23, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_1_24);
      STATE_VARIABLE_ModuleInfo_1_23 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_23));
      STATE_VARIABLE_Specs_1_24 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_23;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_reuse_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_Specs_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pragma__add_pragma_struct_reuse_5_p_0(Pragma_12, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_struct_reuse_5_p_0(
  MR_Word ReuseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 0))));
  MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 1))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 2))));
  MR_Word MaybeReuseDomain_14 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 5))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 6))));

  if ((MaybeReuseDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word ReuseDomain_17 = ((MR_Word) ((MR_hl_field(1, MaybeReuseDomain_14, 0))));
    MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
    MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
    MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
    MR_Integer PredFormArityInt_21;
    MR_Word UserArity_22;
    MR_Word MaybePredId_23;
    MR_Word Var_31;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
    Var_31 = (MR_Word) (PredFormArityInt_21);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_31);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, (MR_Integer) 0, Context_15, (MR_String) "structure_reuse", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
    if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
    {
      MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_23, 0))));

      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_29);
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    }
    else
    {
      MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, MaybePredId_23, 0))));
      MR_Word PFNameArity_25;
      MR_Word PredInfo0_40;
      MR_Word ProcTable0_41;
      MR_Word ProcList_42;
      MR_Integer ProcId_43;

      {
        PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        MR_hl_field(0, PFNameArity_25, 1) = ((MR_Box) (SymName_19));
        MR_hl_field(0, PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
      }
      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_27, PredId_24, &PredInfo0_40);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_40, &ProcTable0_41);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_41, &ProcList_42);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_27, ProcList_42, Modes_20, &ProcId_43);
      if (succeeded)
      {
        MR_Word ProcInfo0_44;
        MR_Word ProcInfo_45;
        MR_Word PredInfo_46;
        MR_Box conv0_ProcInfo0_44;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_41, ((MR_Box) (ProcId_43)), &conv0_ProcInfo0_44);
        ProcInfo0_44 = ((MR_Word) (conv0_ProcInfo0_44));
        hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(HeadVars_10, Types_11, ReuseDomain_17, ProcInfo0_44, &ProcInfo_45);
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_43, ProcInfo_45, PredInfo0_40, &PredInfo_46);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_46, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      }
      else
      {
        MR_Word Pieces_47;
        MR_Word Spec_48;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;

        Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[171])));
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (PFNameArity_25));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[229])), Var_58);
        {
          Spec_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
          MR_hl_field(0, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_48, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, Spec_48, 4) = ((MR_Box) (Pieces_47));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_30 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_48));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
        }
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_sharing_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_Specs_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pragma__add_pragma_struct_sharing_5_p_0(Pragma_12, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_struct_sharing_5_p_0(
  MR_Word SharingInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 0))));
  MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 1))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 2))));
  MR_Word MaybeSharingDomain_14 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 5))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 6))));

  if ((MaybeSharingDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word SharingDomain_17 = ((MR_Word) ((MR_hl_field(1, MaybeSharingDomain_14, 0))));
    MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
    MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
    MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
    MR_Integer PredFormArityInt_21;
    MR_Word UserArity_22;
    MR_Word MaybePredId_23;
    MR_Word Var_31;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
    Var_31 = (MR_Word) (PredFormArityInt_21);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_31);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, (MR_Integer) 0, Context_15, (MR_String) "structure_sharing", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
    if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
    {
      MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_23, 0))));

      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_29);
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    }
    else
    {
      MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, MaybePredId_23, 0))));
      MR_Word PFNameArity_25;
      MR_Word PredInfo0_40;
      MR_Word ProcTable0_41;
      MR_Word ProcList_42;
      MR_Integer ProcId_43;

      {
        PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        MR_hl_field(0, PFNameArity_25, 1) = ((MR_Box) (SymName_19));
        MR_hl_field(0, PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
      }
      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_27, PredId_24, &PredInfo0_40);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_40, &ProcTable0_41);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_41, &ProcList_42);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_27, ProcList_42, Modes_20, &ProcId_43);
      if (succeeded)
      {
        MR_Word ProcInfo0_44;
        MR_Word ProcInfo_45;
        MR_Word PredInfo_46;
        MR_Box conv0_ProcInfo0_44;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_41, ((MR_Box) (ProcId_43)), &conv0_ProcInfo0_44);
        ProcInfo0_44 = ((MR_Word) (conv0_ProcInfo0_44));
        hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(HeadVars_10, Types_11, SharingDomain_17, ProcInfo0_44, &ProcInfo_45);
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_43, ProcInfo_45, PredInfo0_40, &PredInfo_46);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_46, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      }
      else
      {
        MR_Word Pieces_47;
        MR_Word Spec_48;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;

        Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[171])));
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (PFNameArity_25));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[226])), Var_58);
        {
          Spec_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
          MR_hl_field(0, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_48, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, Spec_48, 4) = ((MR_Box) (Pieces_47));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_30 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_48));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
        }
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_termination2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_Specs_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pragma__add_pragma_termination2_5_p_0(Pragma_12, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_5_p_0(
  MR_Word Term2Info_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 0))));
  MR_Word MaybePragmaSuccessArgSizeInfo_10 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 1))));
  MR_Word MaybePragmaFailureArgSizeInfo_11 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 2))));
  MR_Word MaybePragmaTerminationInfo_12 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 3))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 4))));
  MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
  MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
  MR_Word PredFormArity_18;
  MR_Word UserArity_19;
  MR_Word MaybePredId_20;

  PredFormArity_18 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, PredFormArity_18);
  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_13, (MR_String) "termination2_info", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
  if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
  else
  {
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(1, MaybePredId_20, 0))));
    MR_Word PFNameArity_22;
    MR_Word PredInfo0_48;
    MR_Word ProcTable0_49;
    MR_Word ProcList_50;
    MR_Integer ProcId_51;

    {
      PFNameArity_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(0, PFNameArity_22, 1) = ((MR_Box) (SymName_16));
      MR_hl_field(0, PFNameArity_22, 2) = ((MR_Box) (UserArity_19));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_21, &PredInfo0_48);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_48, &ProcTable0_49);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_49, &ProcList_50);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcList_50, Modes_17, &ProcId_51);
    if (succeeded)
    {
      MR_Word ProcInfo0_52;
      MR_Word ProcInfo_53;
      MR_Word PredInfo_54;
      MR_Word MaybeTerminationInfo_84;
      MR_Word STATE_VARIABLE_TermInfo_1_85;
      MR_Word STATE_VARIABLE_TermInfo_2_86;
      MR_Word STATE_VARIABLE_TermInfo_3_87;
      MR_Word STATE_VARIABLE_TermInfo_4_88;
      MR_Box conv0_ProcInfo0_52;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_49, ((MR_Box) (ProcId_51)), &conv0_ProcInfo0_52);
      ProcInfo0_52 = ((MR_Word) (conv0_ProcInfo0_52));
      transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(MaybePragmaTerminationInfo_12, Context_13, &MaybeTerminationInfo_84);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_52, &STATE_VARIABLE_TermInfo_1_85);
      transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(MaybePragmaSuccessArgSizeInfo_10, STATE_VARIABLE_TermInfo_1_85, &STATE_VARIABLE_TermInfo_2_86);
      transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(MaybePragmaFailureArgSizeInfo_11, STATE_VARIABLE_TermInfo_2_86, &STATE_VARIABLE_TermInfo_3_87);
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(MaybeTerminationInfo_84, STATE_VARIABLE_TermInfo_3_87, &STATE_VARIABLE_TermInfo_4_88);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_TermInfo_4_88, ProcInfo0_52, &ProcInfo_53);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_51, ProcInfo_53, PredInfo0_48, &PredInfo_54);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, PredInfo_54, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word Pieces_55;
      MR_Word Spec_56;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;

      Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[171])));
      {
        Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 18U));
        MR_hl_field(3, Var_76, 1) = ((MR_Box) (PFNameArity_22));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
      }
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_72);
      Pieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[223])), Var_66);
      {
        Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(0, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_56, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Pieces_55));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_termination_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_Specs_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pragma__add_pragma_termination_5_p_0(Pragma_12, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_5_p_0(
  MR_Word TermInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 0))));
  MR_Word MaybePragmaArgSizeInfo_10 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 1))));
  MR_Word MaybePragmaTerminationInfo_11 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 2))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 3))));
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
  MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
  MR_Word PredFormArity_17;
  MR_Word UserArity_18;
  MR_Word MaybePredId_19;

  PredFormArity_17 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_14, &UserArity_18, PredFormArity_17);
  hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_12, (MR_String) "termination_info", PredOrFunc_14, SymName_15, UserArity_18, &MaybePredId_19);
  if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
  else
  {
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(1, MaybePredId_19, 0))));
    MR_Word PFNameArity_21;
    MR_Word MaybeArgSizeInfo_22;
    MR_Word MaybeTerminationInfo_23;
    MR_Word PredInfo0_44;
    MR_Word ProcTable0_45;
    MR_Word ProcList_46;
    MR_Integer ProcId_47;

    {
      PFNameArity_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_21, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
      MR_hl_field(0, PFNameArity_21, 1) = ((MR_Box) (SymName_15));
      MR_hl_field(0, PFNameArity_21, 2) = ((MR_Box) (UserArity_18));
    }
    transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_10, Context_12, &MaybeArgSizeInfo_22);
    transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_11, Context_12, &MaybeTerminationInfo_23);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_20, &PredInfo0_44);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_44, &ProcTable0_45);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_45, &ProcList_46);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcList_46, Modes_16, &ProcId_47);
    if (succeeded)
    {
      MR_Word ProcInfo0_48;
      MR_Word ProcInfo_49;
      MR_Word PredInfo_50;
      MR_Word ProcInfo1_80;
      MR_Box conv0_ProcInfo0_48;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_45, ((MR_Box) (ProcId_47)), &conv0_ProcInfo0_48);
      ProcInfo0_48 = ((MR_Word) (conv0_ProcInfo0_48));
      hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(MaybeArgSizeInfo_22, ProcInfo0_48, &ProcInfo1_80);
      hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(MaybeTerminationInfo_23, ProcInfo1_80, &ProcInfo_49);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_47, ProcInfo_49, PredInfo0_44, &PredInfo_50);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_20, PredInfo_50, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_72;

      Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[171])));
      {
        Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 18U));
        MR_hl_field(3, Var_72, 1) = ((MR_Box) (PFNameArity_21));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[172])));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
      }
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_68);
      Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[220])), Var_62);
      {
        Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_52, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_error_util__describe_qual_pred_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__2018__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word IsFullyQualified_11,
  MR_Word FailHandling_12,
  MR_Word Context_13,
  MR_String PragmaName_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * MaybePredId_18)
{
  MR_bool succeeded;
  MR_Word PredTable_19;
  MR_Word PredFormArity_20;
  MR_Word PredIds_21;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable_19);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_15, UserArity_17, &PredFormArity_20);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_19, IsFullyQualified_11, PredOrFunc_15, SymName_16, PredFormArity_20, &PredIds_21);
  if ((PredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Specs_26;

    switch (FailHandling_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_28;
          MR_Word InformIgnored_29;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_28);
          libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 79, &InformIgnored_29);
          switch (InformIgnored_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Spec_134;

                Spec_134 = hlds__make_hlds__add_pragma__report_unknown_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
                {
                  Specs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Specs_26, 0) = ((MR_Box) (Spec_134));
                  MR_hl_field(1, Specs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Spec_27;

          Spec_27 = hlds__make_hlds__add_pragma__report_unknown_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
          {
            Specs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs_26, 0) = ((MR_Box) (Spec_27));
            MR_hl_field(1, Specs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllArityPredIds_22;
          MR_Word PredIdTable_23;
          MR_Word OtherUserArities_24;
          MR_Word DeclPieces_25;
          MR_Word Var_42;
          MR_Word Var_47;

          hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_15, SymName_16, &AllArityPredIds_22);
          hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_10, &PredIdTable_23);
          hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_23, AllArityPredIds_22, UserArity_17, &OtherUserArities_24);
          {
            Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_42, 1) = ((MR_Box) (PragmaName_14));
          }
          {
            DeclPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DeclPieces_25, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, DeclPieces_25, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[25])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (PredOrFunc_15));
          }
          hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_47, SymName_16, UserArity_17, OtherUserArities_24, Context_13, DeclPieces_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_26);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredId_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_26));
    }
  }
  else
  {
    MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, PredIds_21, 1))));
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, PredIds_21, 0))));

    if ((Var_154 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredId_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_155));
      }
    else
    {
      MR_Word Var_56;
      MR_Word Specs_147;

      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (IsFullyQualified_11));
        MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9", (MR_String) "two or more PredIds but is_fully_qualified");
      switch (FailHandling_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Globals_142;
            MR_Word InformIgnored_143;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_142);
            libs__globals__lookup_bool_option_3_p_0(Globals_142, (MR_Integer) 79, &InformIgnored_143);
            switch (InformIgnored_143) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Specs_147 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Spec_139;

                  Spec_139 = hlds__make_hlds__add_pragma__report_ambiguous_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 8U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
                  {
                    Specs_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Specs_147, 0) = ((MR_Box) (Spec_139));
                    MR_hl_field(1, Specs_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Spec_138;

            Spec_138 = hlds__make_hlds__add_pragma__report_ambiguous_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
            {
              Specs_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Specs_147, 0) = ((MR_Box) (Spec_138));
              MR_hl_field(1, Specs_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer UserArityInt_34 = (MR_Integer) (UserArity_17);
            MR_Word SNA_35;
            MR_Word PredIdPiecesList_36;
            MR_Word PredIdPieces_37;
            MR_Word MainPieces_38;
            MR_Word Msg_40;
            MR_Word Var_60;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_104;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_126;
            MR_Word Spec_137;

            {
              SNA_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SNA_35, 0) = ((MR_Box) (SymName_16));
              MR_hl_field(0, SNA_35, 1) = ((MR_Box) (UserArityInt_34));
            }
            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
              MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2));
              MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_60, 3) = ((MR_Box) (ModuleInfo_10));
            }
            PredIdPiecesList_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[5]), Var_60, PredIds_21);
            PredIdPieces_37 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 4, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[22])), PredIdPiecesList_36);
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_76, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[174])));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[173])));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
            }
            Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_72);
            {
              Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_84, 1) = ((MR_Box) (SNA_35));
            }
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_82 = parse_tree__error_spec__color_as_subject_1_f_0(Var_83);
            {
              Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(3, Var_91, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[182])));
            }
            {
              Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[175])));
              MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
            }
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredIdPieces_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[184])));
            Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, Var_104);
            Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_86);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_81);
            MainPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[8])), Var_70);
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (MainPieces_38));
            }
            {
              Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
              MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[217])));
            }
            {
              Msg_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_40, 0) = ((MR_Box) (Context_13));
              MR_hl_field(2, Msg_40, 1) = ((MR_Box) (Var_117));
            }
            {
              Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_126, 0) = ((MR_Box) (Msg_40));
              MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_137 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_137, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
              MR_hl_field(2, Spec_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_137, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(2, Spec_137, 3) = ((MR_Box) (Var_126));
            }
            {
              Specs_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Specs_147, 0) = ((MR_Box) (Spec_137));
              MR_hl_field(1, Specs_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredId_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_147));
      }
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__report_ambiguous_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13)
{
  MR_Word Spec_14;
  MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_13);
  MR_Word SNA_16;
  MR_Word Pieces_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;

  {
    SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_16, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArityInt_15));
  }
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (SNA_16));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[67])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[173])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_24);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaName_9));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[192])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[175])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_35);
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[190])), Var_22);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_pragma.report_ambiguous_pred_or_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (Severity_8));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_17));
  }
  return Spec_14;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__report_unknown_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13)
{
  MR_Word Spec_14;
  MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_13);
  MR_Word SNA_16;
  MR_Word Pieces_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;

  {
    SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_16, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArityInt_15));
  }
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (SNA_16));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[191])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_24);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (PragmaName_9));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[192])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_scalar_common_1[175])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_32);
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_scalar_common_1[190])), Var_22);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_pragma.report_unknown_pred_or_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (Severity_8));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_17));
  }
  return Spec_14;
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_type_spec_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_QualInfo_0_4,
  MR_Word * STATE_VARIABLE_QualInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_QualInfo_5 = STATE_VARIABLE_QualInfo_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_28;
      MR_Word STATE_VARIABLE_QualInfo_1_29;
      MR_Word STATE_VARIABLE_Specs_1_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0(Pragma_17, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_28, STATE_VARIABLE_QualInfo_0_4, &STATE_VARIABLE_QualInfo_1_29, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_28;
      next_value_of_STATE_VARIABLE_QualInfo_0_4 = STATE_VARIABLE_QualInfo_1_29;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_1_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_QualInfo_0_4 = next_value_of_STATE_VARIABLE_QualInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_type_spec_constr_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Pragma_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Pragmas_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_31;
      MR_Word STATE_VARIABLE_QualInfo_1_32;
      MR_Word STATE_VARIABLE_Specs_1_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0(ProgressStream_1, Pragma_20, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_31, STATE_VARIABLE_QualInfo_0_5, &STATE_VARIABLE_QualInfo_1_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Pragmas_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_31;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_27;
  MR_Word conv1_STATE_VARIABLE_QualInfo_29;
  MR_Word conv0_STATE_VARIABLE_Specs_31;

  hlds__make_hlds__add_pragma__add_decl_pragma_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_29, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_31);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_27));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_29));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragmas_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_ModuleInfo_1_34;
      MR_Word STATE_VARIABLE_QualInfo_1_35;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_34;
      MR_Box conv4_STATE_VARIABLE_QualInfo_1_35;
      MR_Box conv3_STATE_VARIABLE_Specs_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_decl_pragmas_8_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv5_STATE_VARIABLE_ModuleInfo_1_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv4_STATE_VARIABLE_QualInfo_1_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_36);
      STATE_VARIABLE_ModuleInfo_1_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_34));
      STATE_VARIABLE_QualInfo_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_1_35));
      STATE_VARIABLE_Specs_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_34;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma____Unify____matching_pred_ids_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma____Compare____matching_pred_ids_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma____Unify____maybe_require_one_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma____Compare____maybe_require_one_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma____Unify____pragma_status_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma____Compare____pragma_status_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_pragma__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_lookup_failure_handling_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_matching_pred_ids_result_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_maybe_require_one_match_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_pragma_status_class_0);
}

void mercury__hlds__make_hlds__add_pragma__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma.
