/*
** Automatically generated from `style_checks.m'
** by the Mercury compiler,
** version rotd-2025-12-29
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


// :- module check_hlds.style_checks.
// :- implementation.

/*
INIT mercury__check_hlds__style_checks__init
ENDINIT
*/

#include "check_hlds.style_checks.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "uint.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__bag__pti_bag_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_0;

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_1;

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_does_warning_make_sense_0[2];

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_does_warning_make_sense_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_does_warning_make_sense_0[2];

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_want_style_warnings_0_1[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_1;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_1[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_want_style_warnings_0[2];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_want_style_warnings_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_want_style_warnings_0[2];

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0;

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1;

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_non_contiguous_pred_defns_0_1[2];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_non_contiguous_pred_defns_0_1[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_1;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_1[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_non_contiguous_pred_defns_0[2];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_non_contiguous_pred_defns_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_defns_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0[2];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0[2];

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_decl_item_numbers_0_0[4];

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_decl_item_numbers_0_0[4];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_decl_item_numbers_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_decl_item_numbers_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_decl_item_numbers_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_decl_item_numbers_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_decl_item_numbers_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__style_checks__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_info_0_0[8];

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_style_info_0_0[8];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_info_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_info_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_info_0[1];

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_warnings_we_want_0_0[3];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_warnings_we_want_0_0[3];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_warnings_we_want_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_warnings_we_want_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_warnings_we_want_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_warnings_we_want_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_warnings_we_want_0[1];

static void MR_CALL 
check_hlds__style_checks____Compare____style_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____does_warning_make_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____does_warning_make_sense_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____allowed_non_contiguity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____allowed_non_contiguity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(
  MR_Word PredItemNumbers_3,
  MR_String * PredDescStr_4);

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6);

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6);

static void MR_CALL 
check_hlds__style_checks__get_pred_context_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Context_6);

static MR_Word MR_CALL 
check_hlds__style_checks__regions_with_gaps_to_just_regions_1_f_0(
  MR_Word RegionsWithGaps_3);

static void MR_CALL 
check_hlds__style_checks__gather_regions_with_gaps_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_RegionsWithGapsList_0_10,
  MR_Word * STATE_VARIABLE_RegionsWithGapsList_11,
  MR_Word STATE_VARIABLE_ClauseGapMap_0_12,
  MR_Word * STATE_VARIABLE_ClauseGapMap_13);

static MR_Box MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ItemKind_9,
  MR_Word GroupPredIdSet_10,
  MR_Word STATE_VARIABLE_ClauseGapMap_0_23,
  MR_Word * STATE_VARIABLE_ClauseGapMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ItemKind_9,
  MR_Word OtherPredIds_10,
  MR_Word MainPredId_11,
  MR_Word RegionsWithGaps_12,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12);

static void MR_CALL 
check_hlds__style_checks__merge_adjacent_regions_3_p_0(
  MR_Word CurRegion_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__style_checks__gather_proc_decl_item_number_8_p_0(
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Integer STATE_VARIABLE_ExpectedProcNum_0_18,
  MR_Integer * STATE_VARIABLE_ExpectedProcNum_19,
  MR_Word STATE_VARIABLE_ProcINCs_0_20,
  MR_Word * STATE_VARIABLE_ProcINCs_21,
  MR_Word STATE_VARIABLE_MakesSense_0_22,
  MR_Word * STATE_VARIABLE_MakesSense_23);

static void MR_CALL 
check_hlds__style_checks__gather_style_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__style_checks__gather_style_info_4_p_0(
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_StyleInfo_0_18,
  MR_Word * STATE_VARIABLE_StyleInfo_19);

static void MR_CALL 
check_hlds__style_checks__maybe_gather_decl_vs_defn_order_info_7_p_0(
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word DeclSection_10,
  MR_Integer PredDeclItemNumber_11,
  MR_Word ClauseItemNumbers_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_28,
  MR_Word * STATE_VARIABLE_StyleInfo_29);

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_31,
  MR_Word * STATE_VARIABLE_StyleInfo_32);

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_8_p_0(
  MR_Word PredTable_9,
  MR_Word ModuleName_10,
  MR_Unsigned OptNum_11,
  MR_String Name_12,
  MR_Word STATE_VARIABLE_PredIds_0_22,
  MR_Word * STATE_VARIABLE_PredIds_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_group_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_group_11_p_0(
  MR_Word PredTable_12,
  MR_Word ModuleName_13,
  MR_String GroupStr_14,
  MR_Unsigned STATE_VARIABLE_OptNum_0_30,
  MR_Unsigned * STATE_VARIABLE_OptNum_31,
  MR_Word STATE_VARIABLE_GroupPredIdSets_0_32,
  MR_Word * STATE_VARIABLE_GroupPredIdSets_33,
  MR_Word STATE_VARIABLE_AllNamesBag_0_34,
  MR_Word * STATE_VARIABLE_AllNamesBag_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0(
  MR_Word ModuleContext_7,
  MR_Word ItemKind_8,
  MR_String ExportedOrNotStr_9,
  MR_Word PredItemNumbers_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
check_hlds__style_checks__do_we_want_style_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
check_hlds__style_checks__filter_out_duplicate_options_3_p_0(
  MR_Word STATE_VARIABLE_SeenOpts_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____allowed_non_contiguity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____allowed_non_contiguity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____does_warning_make_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____does_warning_make_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_want_style_warnings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_want_style_warnings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____style_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____warnings_we_want_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____warnings_we_want_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[100][2];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[14][3];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[6][1];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][14];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[2][5];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_7[1][7];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_8[2][10];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_9[2][11];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_10[1][8];




static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[100][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must all be disjoint.)"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose clauses may be intermingled"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(The sets of predicates and/or functions"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "options."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--allow-non-contiguity-for"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains just one name:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--allow-non-contiguity-for option"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Such option values"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "have not effect."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in the"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the name"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option:"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "its first mode declaration."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not followed immediately by"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first mode declaration"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not followed immediately by its"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode declaration."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode declaration is here."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the group"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the clauses for"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are not contiguous."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Gap"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in clauses of"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "starts after this clause."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ends with this clause."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the declarations and definitions"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the order of"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicates"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[44])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inconsistent,"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__style_checks_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__style_checks_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as shown by this diff:"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "exported"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[87])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[98])))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0])),
    ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_9[1])),
    ((MR_Box) (check_hlds__style_checks__gather_style_info_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_10[0])),
    ((MR_Box) (check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[1])),
    ((MR_Box) (check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 240U) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "+++ definition order")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "--- declaration order")) },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__bag__pti_bag_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__style_checks__bag__pti_bag_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_info_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_info_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_8[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)),
    ((MR_Box) (&check_hlds__style_checks__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_9[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__style_checks__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_does_warning_make_sense_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_does_warning_make_sense_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)),
    ((MR_Box) (&check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__style_checks__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__bag__pti_bag_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__style_checks__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__style_checks__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_allowed_non_contiguity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__style_checks____Unify____allowed_non_contiguity_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____allowed_non_contiguity_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "allowed_non_contiguity",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_0 = {
  (MR_String) "warning_makes_sense",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_1 = {
  (MR_String) "warning_does_not_makes_sense",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_does_warning_make_sense_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_does_warning_make_sense_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_1,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_does_warning_make_sense_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_does_warning_make_sense_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_does_warning_make_sense_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__style_checks____Unify____does_warning_make_sense_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____does_warning_make_sense_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "does_warning_make_sense",
  { check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_does_warning_make_sense_0 },
  { check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_does_warning_make_sense_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_does_warning_make_sense_0,

};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0 = {
  (MR_String) "inc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0 };

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____inc_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____inc_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "inc",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0,

};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_0 = {
  (MR_String) "do_not_want_style_warnings",
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

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_want_style_warnings_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_warnings_we_want_0) };

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_1 = {
  (MR_String) "want_style_warnings",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_want_style_warnings_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_0 };

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_1[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_1 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_want_style_warnings_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_want_style_warnings_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_want_style_warnings_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_want_style_warnings_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_want_style_warnings_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_want_style_warnings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_want_style_warnings_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_want_style_warnings_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_want_style_warnings",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_want_style_warnings_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_want_style_warnings_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_want_style_warnings_0,

};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0 = {
  (MR_String) "do_not_warn_non_contiguous_pred_decls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1 = {
  (MR_String) "warn_non_contiguous_pred_decls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_warn_non_contiguous_pred_decls",
  { check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0 },
  { check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0,

};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_0 = {
  (MR_String) "do_not_warn_non_contiguous_pred_defns",
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

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_non_contiguous_pred_defns_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_non_contiguous_pred_defns_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_1 = {
  (MR_String) "warn_non_contiguous_pred_defns",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_non_contiguous_pred_defns_0_1,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_non_contiguous_pred_defns_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_0 };

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_1[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_1 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_non_contiguous_pred_defns_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_non_contiguous_pred_defns_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_non_contiguous_pred_defns_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_non_contiguous_pred_defns_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_defns_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_defns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_warn_non_contiguous_pred_defns",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_non_contiguous_pred_defns_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_non_contiguous_pred_defns_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_defns_0,

};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0 = {
  (MR_String) "do_not_warn_pred_decl_vs_defn_order",
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

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0) };

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1 = {
  (MR_String) "warn_pred_decl_vs_defn_order",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0 };

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_warn_pred_decl_vs_defn_order",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0,

};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_decl_item_numbers_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_decl_item_numbers_0_0[4] = {
  (MR_String) "pdin_pred_id",
  (MR_String) "pdin_pred_info",
  (MR_String) "pdin_decl_item_number",
  (MR_String) "pdin_first_defn_item_number"
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_decl_item_numbers_0_0 = {
  (MR_String) "pred_decl_item_numbers",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__style_checks__check_hlds__style_checks__field_types_pred_decl_item_numbers_0_0,
  check_hlds__style_checks__check_hlds__style_checks__field_names_pred_decl_item_numbers_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_decl_item_numbers_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_decl_item_numbers_0_0 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_decl_item_numbers_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_decl_item_numbers_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_decl_item_numbers_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_decl_item_numbers_0_0 };

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_decl_item_numbers_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "pred_decl_item_numbers",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_decl_item_numbers_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_decl_item_numbers_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_decl_item_numbers_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__style_checks__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_defns_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0)
};

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_style_info_0_0[8] = {
  (MR_String) "style_non_contig_decls",
  (MR_String) "style_non_contig_defns",
  (MR_String) "style_warn_decl_vs_defn",
  (MR_String) "style_valid_pred_ids",
  (MR_String) "style_exported_preds",
  (MR_String) "style_nonexported_preds",
  (MR_String) "style_decl_gap_specs",
  (MR_String) "style_clause_gaps"
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_info_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_info_0_0 = {
  (MR_String) "style_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__style_checks__check_hlds__style_checks__field_types_style_info_0_0,
  check_hlds__style_checks__check_hlds__style_checks__field_names_style_info_0_0,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_style_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_info_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_info_0_0 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_info_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_info_0_0 };

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____style_info_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____style_info_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "style_info",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_info_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_info_0,

};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_warnings_we_want_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_defns_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0)
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_warnings_we_want_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_warnings_we_want_0_0 = {
  (MR_String) "warnings_we_want",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__style_checks__check_hlds__style_checks__field_types_warnings_we_want_0_0,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_warnings_we_want_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_warnings_we_want_0_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_warnings_we_want_0_0 };

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_warnings_we_want_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_warnings_we_want_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_warnings_we_want_0[1] = { &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_warnings_we_want_0_0 };

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_warnings_we_want_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_warnings_we_want_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____warnings_we_want_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____warnings_we_want_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "warnings_we_want",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_warnings_we_want_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_warnings_we_want_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_warnings_we_want_0,

};

static void MR_CALL 
check_hlds__style_checks____Compare____style_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;
    MR_Integer Var_37 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_38 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_37 < Var_38);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_37 > Var_38);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer CastX_44 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_45 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_44 == CastY_45);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      if ((ArgX2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (ArgY2_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
      }
      else
      if ((ArgY2_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        SubResult2_9 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ArgX1_39 = ((MR_Unsigned) ((MR_hl_field(1, ArgX2_7, 0))) & (MR_Integer) 1);
        MR_Word ArgY1_40 = ((MR_Unsigned) ((MR_hl_field(1, ArgY2_8, 0))) & (MR_Integer) 1);
        MR_Word ArgX2_42 = ((MR_Word) ((MR_hl_field(1, ArgX2_7, 1))));
        MR_Word ArgY2_43 = ((MR_Word) ((MR_hl_field(1, ArgY2_8, 1))));
        MR_Word SubResult1_41;
        MR_Integer Var_48 = (MR_Integer) (ArgX1_39);
        MR_Integer Var_49 = (MR_Integer) (ArgY1_40);

        succeeded = (Var_48 < Var_49);
        if (succeeded)
        {
          SubResult1_41 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_48 > Var_49);
          if (succeeded)
          {
            SubResult1_41 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          SubResult2_9 = SubResult1_41;
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_42)), ((MR_Box) (ArgY2_43)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer CastX_52 = (MR_Integer) (ArgX3_10);
        MR_Integer CastY_53 = (MR_Integer) (ArgY3_11);

        succeeded = (CastX_52 == CastY_53);
        if (succeeded)
          succeeded = MR_FALSE;
        else
        if ((ArgX3_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = (ArgY3_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
        }
        else
        if ((ArgY3_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          SubResult3_12 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ArgX1_50 = ((MR_Unsigned) ((MR_hl_field(1, ArgX3_10, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_51 = ((MR_Unsigned) ((MR_hl_field(1, ArgY3_11, 0))) & (MR_Integer) 1);
          MR_Integer Var_55 = (MR_Integer) (ArgX1_50);
          MR_Integer Var_56 = (MR_Integer) (ArgY1_51);

          succeeded = (Var_55 < Var_56);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_55 > Var_56);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[7]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[8]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_info_0_0(
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
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer CastX_32;
    MR_Integer CastY_33;
    MR_Integer CastX_39;
    MR_Integer CastY_40;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      CastX_32 = (MR_Integer) (ArgX2_5);
      CastY_33 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_32 == CastY_33);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if ((ArgX2_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer CastX_30 = (MR_Integer) (ArgX2_5);
        MR_Integer CastY_31 = (MR_Integer) (ArgY2_6);

        succeeded = (CastY_31 == CastX_30);
      }
      else
      {
        MR_Word TypeInfo_11_34;
        MR_Word ArgX1_26 = ((MR_Unsigned) ((MR_hl_field(1, ArgX2_5, 0))) & (MR_Integer) 1);
        MR_Word ArgY1_27;
        MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(1, ArgX2_5, 1))));
        MR_Word ArgY2_29;

        succeeded = (ArgY2_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgY1_27 = ((MR_Unsigned) ((MR_hl_field(1, ArgY2_6, 0))) & (MR_Integer) 1);
          ArgY2_29 = ((MR_Word) ((MR_hl_field(1, ArgY2_6, 1))));
          succeeded = (ArgX1_26 == ArgY1_27);
          if (succeeded)
          {
            TypeInfo_11_34 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_34, ((MR_Box) (ArgX2_28)), ((MR_Box) (ArgY2_29)));
          }
        }
      }
      if (succeeded)
      {
        CastX_39 = (MR_Integer) (ArgX3_7);
        CastY_40 = (MR_Integer) (ArgY3_8);
        succeeded = (CastX_39 == CastY_40);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        if ((ArgX3_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer CastX_37 = (MR_Integer) (ArgX3_7);
          MR_Integer CastY_38 = (MR_Integer) (ArgY3_8);

          succeeded = (CastY_38 == CastX_37);
        }
        else
        {
          MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(1, ArgX3_7, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_36;

          succeeded = (ArgY3_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(1, ArgY3_8, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_35 == ArgY1_36);
          }
        }
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&check_hlds__style_checks_scalar_common_2[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0(
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
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__style_checks____Compare____maybe_want_style_warnings_0_0(
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

    check_hlds__style_checks____Compare____warnings_we_want_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
check_hlds__style_checks____Compare____warnings_we_want_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer CastX_24 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_25 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_24 == CastY_25);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      if ((ArgX2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (ArgY2_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
      }
      else
      if ((ArgY2_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        SubResult2_9 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(1, ArgX2_7, 0))) & (MR_Integer) 1);
        MR_Word ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(1, ArgY2_8, 0))) & (MR_Integer) 1);
        MR_Word ArgX2_22 = ((MR_Word) ((MR_hl_field(1, ArgX2_7, 1))));
        MR_Word ArgY2_23 = ((MR_Word) ((MR_hl_field(1, ArgY2_8, 1))));
        MR_Word SubResult1_21;
        MR_Integer Var_28 = (MR_Integer) (ArgX1_19);
        MR_Integer Var_29 = (MR_Integer) (ArgY1_20);

        succeeded = (Var_28 < Var_29);
        if (succeeded)
        {
          SubResult1_21 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_28 > Var_29);
          if (succeeded)
          {
            SubResult1_21 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          SubResult2_9 = SubResult1_21;
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_22)), ((MR_Box) (ArgY2_23)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer CastX_32 = (MR_Integer) (ArgX3_10);
        MR_Integer CastY_33 = (MR_Integer) (ArgY3_11);

        succeeded = (CastX_32 == CastY_33);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((ArgX3_10 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((ArgY3_11 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 1;
        else
        if ((ArgY3_11 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word ArgX1_30 = ((MR_Unsigned) ((MR_hl_field(1, ArgX3_10, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_31 = ((MR_Unsigned) ((MR_hl_field(1, ArgY3_11, 0))) & (MR_Integer) 1);
          MR_Integer Var_35 = (MR_Integer) (ArgX1_30);
          MR_Integer Var_36 = (MR_Integer) (ArgY1_31);

          succeeded = (Var_35 < Var_36);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_35 > Var_36);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_want_style_warnings_0_0(
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
      succeeded = check_hlds__style_checks____Unify____warnings_we_want_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__style_checks____Unify____warnings_we_want_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer CastX_17;
    MR_Integer CastY_18;
    MR_Integer CastX_24;
    MR_Integer CastY_25;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      CastX_17 = (MR_Integer) (ArgX2_5);
      CastY_18 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_17 == CastY_18);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if ((ArgX2_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer CastX_15 = (MR_Integer) (ArgX2_5);
        MR_Integer CastY_16 = (MR_Integer) (ArgY2_6);

        succeeded = (CastY_16 == CastX_15);
      }
      else
      {
        MR_Word TypeInfo_11_19;
        MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(1, ArgX2_5, 0))) & (MR_Integer) 1);
        MR_Word ArgY1_12;
        MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, ArgX2_5, 1))));
        MR_Word ArgY2_14;

        succeeded = (ArgY2_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(1, ArgY2_6, 0))) & (MR_Integer) 1);
          ArgY2_14 = ((MR_Word) ((MR_hl_field(1, ArgY2_6, 1))));
          succeeded = (ArgX1_11 == ArgY1_12);
          if (succeeded)
          {
            TypeInfo_11_19 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_19, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
          }
        }
      }
      if (succeeded)
      {
        CastX_24 = (MR_Integer) (ArgX3_7);
        CastY_25 = (MR_Integer) (ArgY3_8);
        succeeded = (CastX_24 == CastY_25);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        if ((ArgX3_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer CastX_22 = (MR_Integer) (ArgX3_7);
          MR_Integer CastY_23 = (MR_Integer) (ArgY3_8);

          succeeded = (CastY_23 == CastX_22);
        }
        else
        {
          MR_Word ArgX1_20 = ((MR_Unsigned) ((MR_hl_field(1, ArgX3_7, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_21;

          succeeded = (ArgY3_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(1, ArgY3_8, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_20 == ArgY1_21);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____does_warning_make_sense_0_0(
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
check_hlds__style_checks____Unify____does_warning_make_sense_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____allowed_non_contiguity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____allowed_non_contiguity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(
  MR_Word PredItemNumbers_3,
  MR_String * PredDescStr_4)
{
  MR_Word PredInfo_6 = ((MR_Word) ((MR_hl_field(0, PredItemNumbers_3, 1))));
  MR_Word PredPieces_9;

  PredPieces_9 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_6);
  *PredDescStr_4 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(PredPieces_9);
}

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  MR_bool succeeded;
  MR_Integer ItemNumberA_10 = ((MR_Integer) ((MR_hl_field(0, A_4, 3))));
  MR_Integer ItemNumberB_14 = ((MR_Integer) ((MR_hl_field(0, B_5, 3))));

  succeeded = (ItemNumberA_10 < ItemNumberB_14);
  if (succeeded)
    *R_6 = (MR_Integer) 1;
  else
  {
    succeeded = (ItemNumberA_10 > ItemNumberB_14);
    if (succeeded)
      *R_6 = (MR_Integer) 2;
    else
      *R_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  MR_bool succeeded;
  MR_Integer ItemNumberA_9 = ((MR_Integer) ((MR_hl_field(0, A_4, 2))));
  MR_Integer ItemNumberB_13 = ((MR_Integer) ((MR_hl_field(0, B_5, 2))));

  succeeded = (ItemNumberA_9 < ItemNumberB_13);
  if (succeeded)
    *R_6 = (MR_Integer) 1;
  else
  {
    succeeded = (ItemNumberA_9 > ItemNumberB_13);
    if (succeeded)
      *R_6 = (MR_Integer) 2;
    else
      *R_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__style_checks__get_pred_context_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Context_6)
{
  MR_Word PredInfo_7;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, Context_6);
}

static MR_Word MR_CALL 
check_hlds__style_checks__regions_with_gaps_to_just_regions_1_f_0(
  MR_Word RegionsWithGaps_3)
{
  MR_Word Regions_4;
  MR_Word FirstRegion_5 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_3, 0))));
  MR_Word SecondRegion_6 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_3, 1))));
  MR_Word LaterRegions_7 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_3, 2))));
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (SecondRegion_6));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (LaterRegions_7));
  }
  {
    Regions_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Regions_4, 0) = ((MR_Box) (FirstRegion_5));
    MR_hl_field(1, Regions_4, 1) = ((MR_Box) (Var_8));
  }
  return Regions_4;
}

static void MR_CALL 
check_hlds__style_checks__gather_regions_with_gaps_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_RegionsWithGapsList_0_10,
  MR_Word * STATE_VARIABLE_RegionsWithGapsList_11,
  MR_Word STATE_VARIABLE_ClauseGapMap_0_12,
  MR_Word * STATE_VARIABLE_ClauseGapMap_13)
{
  MR_bool succeeded;
  MR_Word PredRegionsWithGaps_9;
  MR_Word STATE_VARIABLE_ClauseGapMap_1_14;
  MR_Box conv0_PredRegionsWithGaps_9;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0), ((MR_Box) (PredId_6)), &conv0_PredRegionsWithGaps_9, STATE_VARIABLE_ClauseGapMap_0_12, &STATE_VARIABLE_ClauseGapMap_1_14);
  if (succeeded)
  {
    PredRegionsWithGaps_9 = ((MR_Word) (conv0_PredRegionsWithGaps_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_ClauseGapMap_13 = STATE_VARIABLE_ClauseGapMap_1_14;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RegionsWithGapsList_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredRegionsWithGaps_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RegionsWithGapsList_0_10));
    }
  }
  else
  {
    *STATE_VARIABLE_ClauseGapMap_13 = STATE_VARIABLE_ClauseGapMap_0_12;
    *STATE_VARIABLE_RegionsWithGapsList_11 = STATE_VARIABLE_RegionsWithGapsList_0_10;
  }
}

static MR_Box MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Regions_4;

  conv4_Regions_4 = check_hlds__style_checks__regions_with_gaps_to_just_regions_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Regions_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RegionsWithGapsList_11;
  MR_Word conv0_STATE_VARIABLE_ClauseGapMap_13;

  check_hlds__style_checks__gather_regions_with_gaps_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RegionsWithGapsList_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ClauseGapMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RegionsWithGapsList_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ClauseGapMap_13));
}

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ItemKind_9,
  MR_Word GroupPredIdSet_10,
  MR_Word STATE_VARIABLE_ClauseGapMap_0_23,
  MR_Word * STATE_VARIABLE_ClauseGapMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RegionsWithGapsList_13;
  MR_Word RegionLists_42;
  MR_Word Regions_43;
  MR_Word SortedRegions_44;
  MR_Box conv3_RegionsWithGapsList_13;
  MR_Box conv2_STATE_VARIABLE_ClauseGapMap_24;

  mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[5]), (MR_Word) (&check_hlds__style_checks_scalar_common_2[0]), (MR_Word) (&check_hlds__style_checks_scalar_common_2[12]), GroupPredIdSet_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RegionsWithGapsList_13, ((MR_Box) (STATE_VARIABLE_ClauseGapMap_0_23)), &conv2_STATE_VARIABLE_ClauseGapMap_24);
  RegionsWithGapsList_13 = ((MR_Word) (conv3_RegionsWithGapsList_13));
  *STATE_VARIABLE_ClauseGapMap_24 = ((MR_Word) (conv2_STATE_VARIABLE_ClauseGapMap_24));
  RegionLists_42 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[6]), (MR_Word) (&check_hlds__style_checks_scalar_common_2[13]), RegionsWithGapsList_13);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0), RegionLists_42, &Regions_43);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0), Regions_43, &SortedRegions_44);
  if ((SortedRegions_44 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  else
  {
    MR_Word HeadSortedRegion_45 = ((MR_Word) ((MR_hl_field(1, SortedRegions_44, 0))));
    MR_Word TailSortedRegions_46 = ((MR_Word) ((MR_hl_field(1, SortedRegions_44, 1))));
    MR_Word MergedRegions_51;

    check_hlds__style_checks__merge_adjacent_regions_3_p_0(HeadSortedRegion_45, TailSortedRegions_46, &MergedRegions_51);
    if ((MergedRegions_51 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MergedRegions_51, 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, MergedRegions_51, 0))));

      if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      else
      {
        MR_Word SecondMergedRegion_17 = ((MR_Word) ((MR_hl_field(1, Var_40, 0))));
        MR_Word LaterMergedRegions_18 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
        MR_Word RegionsWithGaps_19;
        MR_Word GroupPredIds_20;

        {
          RegionsWithGaps_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RegionsWithGaps_19, 0) = ((MR_Box) (Var_41));
          MR_hl_field(0, RegionsWithGaps_19, 1) = ((MR_Box) (SecondMergedRegion_17));
          MR_hl_field(0, RegionsWithGaps_19, 2) = ((MR_Box) (LaterMergedRegions_18));
        }
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), GroupPredIdSet_10, &GroupPredIds_20);
        if ((GroupPredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
        else
        {
          MR_Word HeadPredId_21 = ((MR_Word) ((MR_hl_field(1, GroupPredIds_20, 0))));
          MR_Word TailPredIds_22 = ((MR_Word) ((MR_hl_field(1, GroupPredIds_20, 1))));

          check_hlds__style_checks__report_non_contiguous_clauses_7_p_0(ModuleInfo_8, ItemKind_9, TailPredIds_22, HeadPredId_21, RegionsWithGaps_19, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Context_6;

  check_hlds__style_checks__get_pred_context_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Context_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Context_6));
}

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clauses_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ItemKind_9,
  MR_Word OtherPredIds_10,
  MR_Word MainPredId_11,
  MR_Word RegionsWithGaps_12,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word AllPredIds_14;
  MR_Word FrontMsgContext_15;
  MR_Word GapPredPieces_16;
  MR_Word AllPredsPieces_21;
  MR_Word FrontPieces_22;
  MR_Word FrontMsg_23;
  MR_Word FirstRegion_24;
  MR_Word SecondRegion_25;
  MR_Word LaterRegions_26;
  MR_Word ContextMsgs_27;
  MR_Word Msgs_28;
  MR_Word WarnOption_29;
  MR_Word Spec_30;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_59;

  {
    AllPredIds_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AllPredIds_14, 0) = ((MR_Box) (MainPredId_11));
    MR_hl_field(1, AllPredIds_14, 1) = ((MR_Box) (OtherPredIds_10));
  }
  if ((OtherPredIds_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredInfo_66;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, MainPredId_11, &PredInfo_66);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_66, &FrontMsgContext_15);
    GapPredPieces_16 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MainPredId_11);
  }
  else
  {
    MR_Word AllPredContexts_19;
    MR_Word SortedAllPredContexts_20;
    MR_Word Var_36;
    MR_Box conv1_FrontMsgContext_15;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_5[1]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__style_checks__report_non_contiguous_clauses_7_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), Var_36, AllPredIds_14, &AllPredContexts_19);
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AllPredContexts_19, &SortedAllPredContexts_20);
    mercury__list__det_head_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedAllPredContexts_20, &conv1_FrontMsgContext_15);
    FrontMsgContext_15 = ((MR_Word) (conv1_FrontMsgContext_15));
    GapPredPieces_16 = (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[68]));
  }
  AllPredsPieces_21 = hlds__hlds_error_util__describe_several_pred_names_4_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_3[2])), (MR_Integer) 1, AllPredIds_14);
  Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[72])));
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllPredsPieces_21, Var_48);
  FrontPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[70])), Var_47);
  {
    FrontMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FrontMsg_23, 0) = ((MR_Box) (FrontMsgContext_15));
    MR_hl_field(0, FrontMsg_23, 1) = ((MR_Box) (FrontPieces_22));
  }
  FirstRegion_24 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_12, 0))));
  SecondRegion_25 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_12, 1))));
  LaterRegions_26 = ((MR_Word) ((MR_hl_field(0, RegionsWithGaps_12, 2))));
  check_hlds__style_checks__report_non_contiguous_clause_contexts_6_p_0(GapPredPieces_16, (MR_Integer) 1, FirstRegion_24, SecondRegion_25, LaterRegions_26, &ContextMsgs_27);
  {
    Msgs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Msgs_28, 0) = ((MR_Box) (FrontMsg_23));
    MR_hl_field(1, Msgs_28, 1) = ((MR_Box) (ContextMsgs_27));
  }
  switch (ItemKind_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      WarnOption_29 = (MR_Integer) 242;
      break;
    case (MR_Integer) 0:
      WarnOption_29 = (MR_Integer) 241;
      break;
  }
  {
    Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_59, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_29));
  }
  {
    Spec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.report_non_contiguous_clauses\'/7"));
    MR_hl_field(2, Spec_30, 1) = ((MR_Box) (Var_59));
    MR_hl_field(2, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_30, 3) = ((MR_Box) (Msgs_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_32 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
  }
}

static void MR_CALL 
check_hlds__style_checks__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12)
{
  MR_bool succeeded;
  MR_Word FirstUpperContext_16 = ((MR_Word) ((MR_hl_field(0, FirstRegion_9, 3))));
  MR_Word SecondLowerContext_19 = ((MR_Word) ((MR_hl_field(0, SecondRegion_10, 2))));
  MR_Word Var_32 = (MR_Word) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[73]));
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_47;

  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[74])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (PredPieces_7));
  }
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[76])));
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[78])));
  succeeded = (GapNumber_8 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word FirstPieces_22;
    MR_Word SecondPieces_23;
    MR_Word FirstMsg_24;
    MR_Word SecondMsg_25;
    MR_Word Var_31;
    MR_Word Var_57;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (LaterRegions_11));
    }
    FirstPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_34);
    SecondPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_47);
    {
      FirstMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMsg_24, 0) = ((MR_Box) (FirstUpperContext_16));
      MR_hl_field(0, FirstMsg_24, 1) = ((MR_Box) (FirstPieces_22));
    }
    {
      SecondMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SecondMsg_25, 0) = ((MR_Box) (SecondLowerContext_19));
      MR_hl_field(0, SecondMsg_25, 1) = ((MR_Box) (SecondPieces_23));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (SecondMsg_25));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (LaterRegions_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Msgs_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FirstMsg_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_57));
    }
  }
  else
  {
    MR_Word Var_29;
    MR_Word GapPieces_68;
    MR_Word FirstPieces_69;
    MR_Word SecondPieces_70;
    MR_Word FirstMsg_71;
    MR_Word SecondMsg_72;
    MR_Word Var_73;

    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (GapNumber_8));
    }
    {
      GapPieces_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GapPieces_68, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, GapPieces_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (GapPieces_68));
    }
    FirstPieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_34);
    SecondPieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_47);
    {
      FirstMsg_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMsg_71, 0) = ((MR_Box) (FirstUpperContext_16));
      MR_hl_field(0, FirstMsg_71, 1) = ((MR_Box) (FirstPieces_69));
    }
    {
      SecondMsg_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SecondMsg_72, 0) = ((MR_Box) (SecondLowerContext_19));
      MR_hl_field(0, SecondMsg_72, 1) = ((MR_Box) (SecondPieces_70));
    }
    if ((LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_64;

      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (SecondMsg_72));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msgs_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FirstMsg_71));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_64));
      }
    }
    else
    {
      MR_Word FirstLaterRegion_26 = ((MR_Word) ((MR_hl_field(1, LaterRegions_11, 0))));
      MR_Word LaterLaterRegions_27 = ((MR_Word) ((MR_hl_field(1, LaterRegions_11, 1))));
      MR_Word LaterMsgs_28;
      MR_Integer Var_59 = (MR_Integer) ((MR_Unsigned) GapNumber_8 + (MR_Unsigned) 1);
      MR_Word Var_61;

      check_hlds__style_checks__report_non_contiguous_clause_contexts_6_p_0(PredPieces_7, Var_59, SecondRegion_10, FirstLaterRegion_26, LaterLaterRegions_27, &LaterMsgs_28);
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (SecondMsg_72));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (LaterMsgs_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msgs_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FirstMsg_71));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_61));
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__merge_adjacent_regions_3_p_0(
  MR_Word CurRegion_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CurRegion_1));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word NextRegion_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word LaterRegions_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer CurLoItemNum_10 = ((MR_Integer) ((MR_hl_field(0, CurRegion_1, 0))));
      MR_Integer CurHiItemNum_11 = ((MR_Integer) ((MR_hl_field(0, CurRegion_1, 1))));
      MR_Word CurLoCtxt_12 = ((MR_Word) ((MR_hl_field(0, CurRegion_1, 2))));
      MR_Integer NextLoItemNum_14 = ((MR_Integer) ((MR_hl_field(0, NextRegion_7, 0))));
      MR_Integer NextHiItemNum_15 = ((MR_Integer) ((MR_hl_field(0, NextRegion_7, 1))));
      MR_Word NextHiCtxt_17 = ((MR_Word) ((MR_hl_field(0, NextRegion_7, 3))));
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) NextLoItemNum_14 - (MR_Unsigned) CurHiItemNum_11);

      succeeded = (Var_20 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word CurNextRegion_18;
        MR_Word next_value_of_CurRegion_1;
        MR_Word next_value_of_HeadVar__2_2;

        {
          CurNextRegion_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CurNextRegion_18, 0) = ((MR_Box) (CurLoItemNum_10));
          MR_hl_field(0, CurNextRegion_18, 1) = ((MR_Box) (NextHiItemNum_15));
          MR_hl_field(0, CurNextRegion_18, 2) = ((MR_Box) (CurLoCtxt_12));
          MR_hl_field(0, CurNextRegion_18, 3) = ((MR_Box) (NextHiCtxt_17));
        }
        // direct tailcall eliminated
        ;
        next_value_of_CurRegion_1 = CurNextRegion_18;
        next_value_of_HeadVar__2_2 = LaterRegions_8;
        CurRegion_1 = next_value_of_CurRegion_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word TailMergedRegions_19;

        check_hlds__style_checks__merge_adjacent_regions_3_p_0(NextRegion_7, LaterRegions_8, &TailMergedRegions_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CurRegion_1));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailMergedRegions_19));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__gather_proc_decl_item_number_8_p_0(
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Integer STATE_VARIABLE_ExpectedProcNum_0_18,
  MR_Integer * STATE_VARIABLE_ExpectedProcNum_19,
  MR_Word STATE_VARIABLE_ProcINCs_0_20,
  MR_Word * STATE_VARIABLE_ProcINCs_21,
  MR_Word STATE_VARIABLE_MakesSense_0_22,
  MR_Word * STATE_VARIABLE_MakesSense_23)
{
  MR_bool succeeded;
  MR_Integer Var_26;

  Var_26 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_9);
  succeeded = (STATE_VARIABLE_ExpectedProcNum_0_18 == Var_26);
  if (succeeded)
  {
    MR_Word ItemNumber_14;

    *STATE_VARIABLE_ExpectedProcNum_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ExpectedProcNum_0_18 + (MR_Unsigned) 1);
    hlds__hlds_pred__proc_info_get_item_number_2_p_0(ProcInfo_10, &ItemNumber_14);
    if ((ItemNumber_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MakesSense_23 = (MR_Integer) 1;
      *STATE_VARIABLE_ProcINCs_21 = STATE_VARIABLE_ProcINCs_0_20;
    }
    else
    {
      MR_Integer SeqNum_15 = ((MR_Integer) ((MR_hl_field(1, ItemNumber_14, 0))));
      MR_Word Context_16;
      MR_Word ProcINC_17;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &Context_16);
      {
        ProcINC_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcINC_17, 0) = ((MR_Box) (SeqNum_15));
        MR_hl_field(0, ProcINC_17, 1) = ((MR_Box) (Context_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ProcINCs_21 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ProcINC_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ProcINCs_0_20));
      }
      *STATE_VARIABLE_MakesSense_23 = STATE_VARIABLE_MakesSense_0_22;
    }
  }
  else
  {
    *STATE_VARIABLE_MakesSense_23 = (MR_Integer) 1;
    *STATE_VARIABLE_ProcINCs_21 = STATE_VARIABLE_ProcINCs_0_20;
    *STATE_VARIABLE_ExpectedProcNum_19 = STATE_VARIABLE_ExpectedProcNum_0_18;
  }
}

static void MR_CALL 
check_hlds__style_checks__gather_style_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_ExpectedProcNum_19;
  MR_Word conv1_STATE_VARIABLE_ProcINCs_21;
  MR_Word conv0_STATE_VARIABLE_MakesSense_23;

  check_hlds__style_checks__gather_proc_decl_item_number_8_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ExpectedProcNum_19, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ProcINCs_21, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_MakesSense_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ExpectedProcNum_19));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ProcINCs_21));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_MakesSense_23));
}

static void MR_CALL 
check_hlds__style_checks__gather_style_info_4_p_0(
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_StyleInfo_0_18,
  MR_Word * STATE_VARIABLE_StyleInfo_19)
{
  MR_bool succeeded;
  MR_Word MaybeDeclInfo_8;
  MR_Word ValidPredIds_9;
  MR_Word DeclSection_11;
  MR_Integer PredDeclItemNumber_14;
  MR_Word TypeCtorInfo_29_29;
  MR_Word DeclInfo_10;
  MR_Word MaybePredDeclItemNumber_13;

  hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(PredInfo_6, &MaybeDeclInfo_8);
  ValidPredIds_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_18, 3))));
  succeeded = (MaybeDeclInfo_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    DeclInfo_10 = ((MR_Word) ((MR_hl_field(1, MaybeDeclInfo_8, 0))));
    DeclSection_11 = ((((MR_Unsigned) ((MR_hl_field(0, DeclInfo_10, 0))) >> 1)) & (MR_Integer) 1);
    MaybePredDeclItemNumber_13 = ((MR_Word) ((MR_hl_field(0, DeclInfo_10, 1))));
    succeeded = (MaybePredDeclItemNumber_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredDeclItemNumber_14 = ((MR_Integer) ((MR_hl_field(1, MaybePredDeclItemNumber_13, 0))));
      TypeCtorInfo_29_29 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
      succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_29_29, ValidPredIds_9, ((MR_Box) (PredId_5)));
    }
  }
  if (succeeded)
  {
    MR_Word ClausesInfo_15;
    MR_Word ClauseItemNumbers_17;
    MR_Word STATE_VARIABLE_StyleInfo_1_20;
    MR_Word STATE_VARIABLE_StyleInfo_2_21;
    MR_Word NonContigDecls_30;
    MR_Word NonContigDefns_58;
    MR_Word _ClausesRep_16;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_6, &ClausesInfo_15);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_15, &_ClausesRep_16, &ClauseItemNumbers_17);
    NonContigDecls_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_18, 0))) & (MR_Integer) 1);
    switch (NonContigDecls_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_StyleInfo_1_20 = STATE_VARIABLE_StyleInfo_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcTable_31;
          MR_Word UnsortedProcINCs_33;
          MR_Word MakesSense_34;
          MR_Word ProcINCs_35;
          MR_Box conv5_Var_32;
          MR_Box conv4_UnsortedProcINCs_33;
          MR_Box conv3_MakesSense_34;
          MR_Word HeadProcINC_36;
          MR_Word TailProcINCs_37;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_6, &ProcTable_31);
          mercury__map__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[4]), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_does_warning_make_sense_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[11]), ProcTable_31, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_UnsortedProcINCs_33, ((MR_Box) ((MR_Integer) 0)), &conv3_MakesSense_34);
          UnsortedProcINCs_33 = ((MR_Word) (conv4_UnsortedProcINCs_33));
          MakesSense_34 = ((MR_Word) (conv3_MakesSense_34));
          mercury__list__sort_2_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0), UnsortedProcINCs_33, &ProcINCs_35);
          succeeded = (MakesSense_34 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (ProcINCs_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadProcINC_36 = ((MR_Word) ((MR_hl_field(1, ProcINCs_35, 0))));
              TailProcINCs_37 = ((MR_Word) ((MR_hl_field(1, ProcINCs_35, 1))));
            }
          }
          if (succeeded)
          {
            MR_Word PredDeclContext_38;
            MR_Word PredINC_39;

            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &PredDeclContext_38);
            {
              PredINC_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredINC_39, 0) = ((MR_Box) (PredDeclItemNumber_14));
              MR_hl_field(0, PredINC_39, 1) = ((MR_Box) (PredDeclContext_38));
            }
            check_hlds__style_checks__report_any_inc_gaps_7_p_0(PredInfo_6, PredINC_39, HeadProcINC_36, TailProcINCs_37, (MR_Integer) 0, STATE_VARIABLE_StyleInfo_0_18, &STATE_VARIABLE_StyleInfo_1_20);
          }
          else
            STATE_VARIABLE_StyleInfo_1_20 = STATE_VARIABLE_StyleInfo_0_18;
        }
        break;
    }
    NonContigDefns_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 1))));
    if ((NonContigDefns_58 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_StyleInfo_2_21 = STATE_VARIABLE_StyleInfo_1_20;
    else
    {
      MR_Word NumberTypes_59 = ((MR_Unsigned) ((MR_hl_field(1, NonContigDefns_58, 0))) & (MR_Integer) 1);
      MR_Word RegionsWithGaps_61;

      succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_3_p_0(ClauseItemNumbers_17, NumberTypes_59, &RegionsWithGaps_61);
      if (succeeded)
      {
        MR_Word GapMap0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 7))));
        MR_Word GapMap_63;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;

        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0), ((MR_Box) (PredId_5)), ((MR_Box) (RegionsWithGaps_61)), GapMap0_62, &GapMap_63);
        Var_78 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 0))) & (MR_Integer) 1);
        Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 1))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 2))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 3))));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 4))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 5))));
        Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_20, 6))));
        {
          STATE_VARIABLE_StyleInfo_2_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 0) = (MR_Box) ((MR_Unsigned) (Var_78));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 1) = ((MR_Box) (Var_79));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 2) = ((MR_Box) (Var_80));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 3) = ((MR_Box) (Var_81));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 4) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 5) = ((MR_Box) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 6) = ((MR_Box) (Var_84));
          MR_hl_field(0, STATE_VARIABLE_StyleInfo_2_21, 7) = ((MR_Box) (GapMap_63));
        }
      }
      else
        STATE_VARIABLE_StyleInfo_2_21 = STATE_VARIABLE_StyleInfo_1_20;
    }
    check_hlds__style_checks__maybe_gather_decl_vs_defn_order_info_7_p_0(PredId_5, PredInfo_6, DeclSection_11, PredDeclItemNumber_14, ClauseItemNumbers_17, STATE_VARIABLE_StyleInfo_2_21, STATE_VARIABLE_StyleInfo_19);
  }
  else
    *STATE_VARIABLE_StyleInfo_19 = STATE_VARIABLE_StyleInfo_0_18;
}

static void MR_CALL 
check_hlds__style_checks__maybe_gather_decl_vs_defn_order_info_7_p_0(
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word DeclSection_10,
  MR_Integer PredDeclItemNumber_11,
  MR_Word ClauseItemNumbers_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_28,
  MR_Word * STATE_VARIABLE_StyleInfo_29)
{
  MR_Word WarnPredDeclDefnOrder_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 2))));

  if ((WarnPredDeclDefnOrder_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_StyleInfo_29 = STATE_VARIABLE_StyleInfo_0_28;
  else
  {
    MR_Word DefnKind_15 = ((MR_Unsigned) ((MR_hl_field(1, WarnPredDeclDefnOrder_14, 0))) & (MR_Integer) 1);
    MR_Word Regions_16;

    hlds__hlds_clauses__clause_item_number_regions_3_p_0(ClauseItemNumbers_12, DefnKind_15, &Regions_16);
    if ((Regions_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StyleInfo_29 = STATE_VARIABLE_StyleInfo_0_28;
    else
    {
      MR_Word FirstRegion_17 = ((MR_Word) ((MR_hl_field(1, Regions_16, 0))));
      MR_Integer FirstClauseItemNumber_19 = ((MR_Integer) ((MR_hl_field(0, FirstRegion_17, 0))));
      MR_Word PredDeclItemNumbers_23;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      {
        PredDeclItemNumbers_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredDeclItemNumbers_23, 0) = ((MR_Box) (PredId_8));
        MR_hl_field(0, PredDeclItemNumbers_23, 1) = ((MR_Box) (PredInfo_9));
        MR_hl_field(0, PredDeclItemNumbers_23, 2) = ((MR_Box) (PredDeclItemNumber_11));
        MR_hl_field(0, PredDeclItemNumbers_23, 3) = ((MR_Box) (FirstClauseItemNumber_19));
      }
      Var_74 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 0))) & (MR_Integer) 1);
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 1))));
      Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 2))));
      Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 4))));
      Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 5))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 6))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_28, 7))));
      switch (DeclSection_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NonExportedPDINs_27;

            {
              NonExportedPDINs_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NonExportedPDINs_27, 0) = ((MR_Box) (PredDeclItemNumbers_23));
              MR_hl_field(1, NonExportedPDINs_27, 1) = ((MR_Box) (Var_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_StyleInfo_29 = base;
              MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_74));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_73));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_70));
              MR_hl_field(0, base, 5) = ((MR_Box) (NonExportedPDINs_27));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_68));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ExportedPDINs_25;

            {
              ExportedPDINs_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ExportedPDINs_25, 0) = ((MR_Box) (PredDeclItemNumbers_23));
              MR_hl_field(1, ExportedPDINs_25, 1) = ((MR_Box) (Var_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_StyleInfo_29 = base;
              MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_74));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_73));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
              MR_hl_field(0, base, 4) = ((MR_Box) (ExportedPDINs_25));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_69));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_68));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_31,
  MR_Word * STATE_VARIABLE_StyleInfo_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer FirstItemNumber_14 = ((MR_Integer) ((MR_hl_field(0, FirstINC_9, 0))));
    MR_Word FirstContext_15 = ((MR_Word) ((MR_hl_field(0, FirstINC_9, 1))));
    MR_Integer SecondItemNumber_16 = ((MR_Integer) ((MR_hl_field(0, SecondINC_10, 0))));
    MR_Word SecondContext_17 = ((MR_Word) ((MR_hl_field(0, SecondINC_10, 1))));
    MR_Word STATE_VARIABLE_StyleInfo_1_120;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) SecondItemNumber_16 - (MR_Unsigned) FirstItemNumber_14);

      succeeded = (Var_33 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (FirstProcNum_12 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (FirstItemNumber_14 == SecondItemNumber_16);
        if (succeeded)
          succeeded = (LaterINCs_11 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      STATE_VARIABLE_StyleInfo_1_120 = STATE_VARIABLE_StyleInfo_0_31;
    else
    {
      MR_Word PredPieces_18;
      MR_Word PredOrFunc_19;
      MR_String PredOrFuncStr_20;
      MR_Word FirstPieces_21;
      MR_Word SecondPieces_22;
      MR_Word FirstMsg_23;
      MR_Word SecondMsg_24;
      MR_Word Spec_26;
      MR_Word Specs0_27;
      MR_Word Specs_28;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;

      PredPieces_18 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_3[2])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_8);
      PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
      PredOrFuncStr_20 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_19);
      succeeded = (FirstProcNum_12 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (PredOrFuncStr_20));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[50])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[26])));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
        }
        Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[54])));
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[44])), Var_53);
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_18, Var_48);
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_47);
        SecondPieces_22 = (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[58]));
      }
      else
      {
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Integer Var_93;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Integer Var_106;

        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (FirstProcNum_12));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[60])));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[26])));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
        }
        Var_93 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
        {
          Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
          MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[63])));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[61])));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
        }
        Var_87 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_88);
        Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
        Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[44])), Var_86);
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_18, Var_81);
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_80);
        Var_106 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
        {
          Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[66])));
        }
        {
          SecondPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SecondPieces_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[64])));
          MR_hl_field(1, SecondPieces_22, 1) = ((MR_Box) (Var_104));
        }
      }
      {
        FirstMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FirstMsg_23, 0) = ((MR_Box) (FirstContext_15));
        MR_hl_field(0, FirstMsg_23, 1) = ((MR_Box) (FirstPieces_21));
      }
      {
        SecondMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SecondMsg_24, 0) = ((MR_Box) (SecondContext_17));
        MR_hl_field(0, SecondMsg_24, 1) = ((MR_Box) (SecondPieces_22));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (SecondMsg_24));
        MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (FirstMsg_23));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
      }
      {
        Spec_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.report_any_inc_gaps\'/7"));
        MR_hl_field(2, Spec_26, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__style_checks_scalar_common_3[3])));
        MR_hl_field(2, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 84U));
        MR_hl_field(2, Spec_26, 3) = ((MR_Box) (Var_117));
      }
      Var_124 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 0))) & (MR_Integer) 1);
      Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 1))));
      Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 2))));
      Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 3))));
      Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 4))));
      Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 5))));
      Specs0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 6))));
      Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StyleInfo_0_31, 7))));
      {
        Specs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Specs_28, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(1, Specs_28, 1) = ((MR_Box) (Specs0_27));
      }
      {
        STATE_VARIABLE_StyleInfo_1_120 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 0) = (MR_Box) ((MR_Unsigned) (Var_124));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 1) = ((MR_Box) (Var_125));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 2) = ((MR_Box) (Var_126));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 3) = ((MR_Box) (Var_127));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 4) = ((MR_Box) (Var_128));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 5) = ((MR_Box) (Var_129));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 6) = ((MR_Box) (Specs_28));
        MR_hl_field(0, STATE_VARIABLE_StyleInfo_1_120, 7) = ((MR_Box) (Var_130));
      }
    }
    if ((LaterINCs_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StyleInfo_32 = STATE_VARIABLE_StyleInfo_1_120;
    else
    {
      MR_Word ThirdINC_29 = ((MR_Word) ((MR_hl_field(1, LaterINCs_11, 0))));
      MR_Word LaterLaterINCs_30 = ((MR_Word) ((MR_hl_field(1, LaterINCs_11, 1))));
      MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
      MR_Word next_value_of_FirstINC_9 = SecondINC_10;
      MR_Word next_value_of_SecondINC_10 = ThirdINC_29;
      MR_Word next_value_of_LaterINCs_11 = LaterLaterINCs_30;
      MR_Integer next_value_of_FirstProcNum_12 = Var_121;
      MR_Word next_value_of_STATE_VARIABLE_StyleInfo_0_31 = STATE_VARIABLE_StyleInfo_1_120;

      // direct tailcall eliminated
      ;
      FirstINC_9 = next_value_of_FirstINC_9;
      SecondINC_10 = next_value_of_SecondINC_10;
      LaterINCs_11 = next_value_of_LaterINCs_11;
      FirstProcNum_12 = next_value_of_FirstProcNum_12;
      STATE_VARIABLE_StyleInfo_0_31 = next_value_of_STATE_VARIABLE_StyleInfo_0_31;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_8_p_0(
  MR_Word PredTable_9,
  MR_Word ModuleName_10,
  MR_Unsigned OptNum_11,
  MR_String Name_12,
  MR_Word STATE_VARIABLE_PredIds_0_22,
  MR_Word * STATE_VARIABLE_PredIds_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word PredIds_13;
  MR_Word SymName_15;

  {
    SymName_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_15, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(1, SymName_15, 1) = ((MR_Box) (Name_12));
  }
  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_9, (MR_Integer) 0, SymName_15, &PredIds_13);
  if ((PredIds_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (OptNum_11));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[42])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (Name_12));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[46])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[44])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_42);
    {
      Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.parse_non_contig_name\'/8"));
      MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Pieces_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
    *STATE_VARIABLE_PredIds_23 = STATE_VARIABLE_PredIds_0_22;
  }
  else
  {
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(1, PredIds_13, 1))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(1, PredIds_13, 0))));

    if ((Var_111 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Var_112)), STATE_VARIABLE_PredIds_0_22, STATE_VARIABLE_PredIds_23);
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    }
    else
    {
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_88;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Pieces_106;
      MR_Word Spec_107;

      {
        Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_72, 1) = ((MR_Box) (OptNum_11));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[42])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[37])));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_86, 1) = ((MR_Box) (Name_12));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_84 = parse_tree__error_spec__color_as_subject_1_f_0(Var_85);
      Var_94 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[48])));
      Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[44])), Var_93);
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_88);
      Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_83);
      {
        Spec_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.parse_non_contig_name\'/8"));
        MR_hl_field(1, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_107, 3) = ((MR_Box) (Pieces_106));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_107));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
      *STATE_VARIABLE_PredIds_23 = STATE_VARIABLE_PredIds_0_22;
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_group_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PredIds_23;
  MR_Word conv0_STATE_VARIABLE_Specs_25;

  check_hlds__style_checks__parse_non_contig_name_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredIds_23, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredIds_23));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
check_hlds__style_checks__parse_non_contig_name_group_11_p_0(
  MR_Word PredTable_12,
  MR_Word ModuleName_13,
  MR_String GroupStr_14,
  MR_Unsigned STATE_VARIABLE_OptNum_0_30,
  MR_Unsigned * STATE_VARIABLE_OptNum_31,
  MR_Word STATE_VARIABLE_GroupPredIdSets_0_32,
  MR_Word * STATE_VARIABLE_GroupPredIdSets_33,
  MR_Word STATE_VARIABLE_AllNamesBag_0_34,
  MR_Word * STATE_VARIABLE_AllNamesBag_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_Word GroupNames_19;
  MR_Word GroupPredIdSet_26;
  MR_Word GroupSpecs_27;
  MR_Word STATE_VARIABLE_Specs_1_79;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Box conv3_GroupPredIdSet_26;
  MR_Box conv2_GroupSpecs_27;

  GroupNames_19 = mercury__string__split_at_char_2_f_0((MR_Char) 44, GroupStr_14);
  if ((GroupNames_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.style_checks.parse_non_contig_name_group\'/11", (MR_String) "GroupNames = []");
      return;
    }
  else
  {
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, GroupNames_19, 1))));

    if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_21;
      MR_Word Spec_22;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Var_67;
      MR_Word Var_68;

      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_46, 1) = ((MR_Box) (STATE_VARIABLE_OptNum_0_30));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[30])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[26])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (GroupStr_14));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[32])));
      }
      Var_55 = parse_tree__error_spec__color_as_subject_1_f_0(Var_56);
      Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[36])));
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[12])));
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[34])), Var_67);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_62);
      Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_54);
      {
        Spec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.parse_non_contig_name_group\'/11"));
        MR_hl_field(1, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_22, 3) = ((MR_Box) (Pieces_21));
      }
      {
        STATE_VARIABLE_Specs_1_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_79, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_79, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
      }
    }
    else
      STATE_VARIABLE_Specs_1_79 = STATE_VARIABLE_Specs_0_36;
  }
  mercury__bag__insert_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GroupNames_19, STATE_VARIABLE_AllNamesBag_0_34, STATE_VARIABLE_AllNamesBag_35);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_9[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (check_hlds__style_checks__parse_non_contig_name_group_11_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (PredTable_12));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_82, 5) = ((MR_Box) (STATE_VARIABLE_OptNum_0_30));
  }
  Var_83 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[0]), (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), Var_82, GroupNames_19, ((MR_Box) (Var_83)), &conv3_GroupPredIdSet_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_GroupSpecs_27);
  GroupPredIdSet_26 = ((MR_Word) (conv3_GroupPredIdSet_26));
  GroupSpecs_27 = ((MR_Word) (conv2_GroupSpecs_27));
  if ((GroupSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_GroupPredIdSets_33 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (GroupPredIdSet_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_GroupPredIdSets_0_32));
    }
    *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_1_79;
  }
  else
  {
    *STATE_VARIABLE_Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GroupSpecs_27, STATE_VARIABLE_Specs_1_79);
    *STATE_VARIABLE_GroupPredIdSets_33 = STATE_VARIABLE_GroupPredIdSets_0_32;
  }
  *STATE_VARIABLE_OptNum_31 = (STATE_VARIABLE_OptNum_0_30 + (MR_Unsigned) 1U);
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv11_PredDescStr_4;

  check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv11_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv10_PredDescStr_4;

  check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv10_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_R_6;

  check_hlds__style_checks__compare_defn_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv9_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_R_6;

  check_hlds__style_checks__compare_decl_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv8_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Specs_32;

  check_hlds__style_checks__report_non_contiguous_clauses_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Specs_32);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_32));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ClauseGapMap_24;
  MR_Word conv2_STATE_VARIABLE_Specs_26;

  check_hlds__style_checks__report_non_contiguous_clauses_beyond_group_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ClauseGapMap_24, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ClauseGapMap_24));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_26));
}

static void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StyleInfo_19;

  check_hlds__style_checks__gather_style_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StyleInfo_19);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StyleInfo_19));
}

void MR_CALL 
check_hlds__style_checks__generate_any_style_warnings_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word WarningsWeWant_5,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word NonContigDecls_7 = ((MR_Unsigned) ((MR_hl_field(0, WarningsWeWant_5, 0))) & (MR_Integer) 1);
  MR_Word NonContigDefns_8 = ((MR_Word) ((MR_hl_field(0, WarningsWeWant_5, 1))));
  MR_Word PredDeclDefnOrder_9 = ((MR_Word) ((MR_hl_field(0, WarningsWeWant_5, 2))));
  MR_Word ValidPredIds_10;
  MR_Word StyleInfo0_11;
  MR_Word PredIdTable_12;
  MR_Word StyleInfo_13;
  MR_Word ExportedPreds_18;
  MR_Word NonExportedPreds_19;
  MR_Word ClauseGapMap0_21;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Specs_1_33;
  MR_Word STATE_VARIABLE_Specs_3_37;
  MR_Box conv1_StyleInfo_13;

  hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(ModuleInfo_4, &ValidPredIds_10);
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0));
  {
    StyleInfo0_11 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StyleInfo0_11, 0) = (MR_Box) ((MR_Unsigned) (NonContigDecls_7));
    MR_hl_field(0, StyleInfo0_11, 1) = ((MR_Box) (NonContigDefns_8));
    MR_hl_field(0, StyleInfo0_11, 2) = ((MR_Box) (PredDeclDefnOrder_9));
    MR_hl_field(0, StyleInfo0_11, 3) = ((MR_Box) (ValidPredIds_10));
    MR_hl_field(0, StyleInfo0_11, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StyleInfo0_11, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StyleInfo0_11, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StyleInfo0_11, 7) = ((MR_Box) (Var_31));
  }
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_12);
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_info_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[6]), PredIdTable_12, ((MR_Box) (StyleInfo0_11)), &conv1_StyleInfo_13);
  StyleInfo_13 = ((MR_Word) (conv1_StyleInfo_13));
  ExportedPreds_18 = ((MR_Word) ((MR_hl_field(0, StyleInfo_13, 4))));
  NonExportedPreds_19 = ((MR_Word) ((MR_hl_field(0, StyleInfo_13, 5))));
  STATE_VARIABLE_Specs_1_33 = ((MR_Word) ((MR_hl_field(0, StyleInfo_13, 6))));
  ClauseGapMap0_21 = ((MR_Word) ((MR_hl_field(0, StyleInfo_13, 7))));
  if ((NonContigDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_3_37 = STATE_VARIABLE_Specs_1_33;
  else
  {
    MR_Word ContigItemKind_22 = ((MR_Unsigned) ((MR_hl_field(1, NonContigDefns_8, 0))) & (MR_Integer) 1);
    MR_Word AllowedNonContiguity_23 = ((MR_Word) ((MR_hl_field(1, NonContigDefns_8, 1))));
    MR_Word ClauseGapMap_24;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Specs_2_35;
    MR_Word Var_36;
    MR_Box conv5_ClauseGapMap_24;
    MR_Box conv4_STATE_VARIABLE_Specs_2_35;
    MR_Box conv7_STATE_VARIABLE_Specs_3_37;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_8[0]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_2));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (ContigItemKind_22));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[0]), (MR_Word) (&check_hlds__style_checks_scalar_common_2[0]), (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), Var_34, AllowedNonContiguity_23, ((MR_Box) (ClauseGapMap0_21)), &conv5_ClauseGapMap_24, ((MR_Box) (STATE_VARIABLE_Specs_1_33)), &conv4_STATE_VARIABLE_Specs_2_35);
    ClauseGapMap_24 = ((MR_Word) (conv5_ClauseGapMap_24));
    STATE_VARIABLE_Specs_2_35 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_2_35));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_8[1]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__style_checks__generate_any_style_warnings_3_p_0_3));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (ContigItemKind_22));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_regions_with_gaps_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), Var_36, ClauseGapMap_24, ((MR_Box) (STATE_VARIABLE_Specs_2_35)), &conv7_STATE_VARIABLE_Specs_3_37);
    STATE_VARIABLE_Specs_3_37 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_3_37));
  }
  if ((PredDeclDefnOrder_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_3_37;
  else
  {
    MR_Word OrderItemKind_25 = ((MR_Unsigned) ((MR_hl_field(1, PredDeclDefnOrder_9, 0))) & (MR_Integer) 1);
    MR_Word ModuleContext_26;
    MR_Word STATE_VARIABLE_Specs_4_40;
    MR_Word DeclOrder_58;
    MR_Word DefnOrder_59;

    hlds__hlds_module__module_info_get_name_context_2_p_0(ModuleInfo_4, &ModuleContext_26);
    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[7]), ExportedPreds_18, &DeclOrder_58);
    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[8]), ExportedPreds_18, &DefnOrder_59);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[8]), ((MR_Box) (DeclOrder_58)), ((MR_Box) (DefnOrder_59)));
    if (succeeded)
      STATE_VARIABLE_Specs_4_40 = STATE_VARIABLE_Specs_3_37;
    else
    {
      MR_Word DeclStrs_60;
      MR_Word DefnStrs_61;
      MR_Word DiffPieces_63;
      MR_Word Pieces_64;
      MR_Word WarnOption_65;
      MR_Word WarnSpec_66;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word Var_87;

      mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[9]), DeclOrder_58, &DeclStrs_60);
      mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[10]), DefnOrder_59, &DefnStrs_61);
      parse_tree__error_spec__construct_diff_for_string_seqs_4_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_2[1]), DeclStrs_60, DefnStrs_61, &DiffPieces_63);
      Var_73 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[84])));
      Var_82 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[89])));
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[96])), DiffPieces_63);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_84);
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[99])), Var_81);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_75);
      Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[80])), Var_72);
      switch (OrderItemKind_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          WarnOption_65 = (MR_Integer) 239;
          break;
        case (MR_Integer) 0:
          WarnOption_65 = (MR_Integer) 238;
          break;
      }
      {
        Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_87, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_65));
      }
      {
        WarnSpec_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarnSpec_66, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.generate_inconsistent_pred_order_warnings\'/6"));
        MR_hl_field(0, WarnSpec_66, 1) = ((MR_Box) (Var_87));
        MR_hl_field(0, WarnSpec_66, 2) = ((MR_Box) ((MR_Unsigned) 84U));
        MR_hl_field(0, WarnSpec_66, 3) = ((MR_Box) (ModuleContext_26));
        MR_hl_field(0, WarnSpec_66, 4) = ((MR_Box) (Pieces_64));
      }
      {
        STATE_VARIABLE_Specs_4_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_4_40, 0) = ((MR_Box) (WarnSpec_66));
        MR_hl_field(1, STATE_VARIABLE_Specs_4_40, 1) = ((MR_Box) (STATE_VARIABLE_Specs_3_37));
      }
    }
    check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0(ModuleContext_26, OrderItemKind_25, (MR_String) "nonexported", NonExportedPreds_19, STATE_VARIABLE_Specs_4_40, STATE_VARIABLE_Specs_27);
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv3_PredDescStr_4;

  check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_PredDescStr_4;

  check_hlds__style_checks__desc_pred_decl_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_R_6;

  check_hlds__style_checks__compare_defn_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_R_6;

  check_hlds__style_checks__compare_decl_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_6_p_0(
  MR_Word ModuleContext_7,
  MR_Word ItemKind_8,
  MR_String ExportedOrNotStr_9,
  MR_Word PredItemNumbers_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word DeclOrder_12;
  MR_Word DefnOrder_13;

  mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[2]), PredItemNumbers_10, &DeclOrder_12);
  mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[3]), PredItemNumbers_10, &DefnOrder_13);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[8]), ((MR_Box) (DeclOrder_12)), ((MR_Box) (DefnOrder_13)));
  if (succeeded)
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
  {
    MR_Word DeclStrs_14;
    MR_Word DefnStrs_15;
    MR_Word DiffPieces_20;
    MR_Word Pieces_21;
    MR_Word WarnOption_22;
    MR_Word WarnSpec_23;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_Word Var_82;

    mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[4]), DeclOrder_12, &DeclStrs_14);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[5]), DefnOrder_13, &DefnStrs_15);
    parse_tree__error_spec__construct_diff_for_string_seqs_4_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_2[1]), DeclStrs_14, DefnStrs_15, &DiffPieces_20);
    Var_35 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[84])));
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (ExportedOrNotStr_9));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[87])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[85])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[89])));
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[96])), DiffPieces_20);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_62);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_56);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_43);
    Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[80])), Var_34);
    switch (ItemKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        WarnOption_22 = (MR_Integer) 239;
        break;
      case (MR_Integer) 0:
        WarnOption_22 = (MR_Integer) 238;
        break;
    }
    {
      Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_82, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_22));
    }
    {
      WarnSpec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, WarnSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.generate_inconsistent_pred_order_warnings\'/6"));
      MR_hl_field(0, WarnSpec_23, 1) = ((MR_Box) (Var_82));
      MR_hl_field(0, WarnSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 84U));
      MR_hl_field(0, WarnSpec_23, 3) = ((MR_Box) (ModuleContext_7));
      MR_hl_field(0, WarnSpec_23, 4) = ((MR_Box) (Pieces_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WarnSpec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__do_we_want_style_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv3_STATE_VARIABLE_OptNum_31;
  MR_Word conv2_STATE_VARIABLE_GroupPredIdSets_33;
  MR_Word conv1_STATE_VARIABLE_AllNamesBag_35;
  MR_Word conv0_STATE_VARIABLE_Specs_37;

  check_hlds__style_checks__parse_non_contig_name_group_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv3_STATE_VARIABLE_OptNum_31, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_GroupPredIdSets_33, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_AllNamesBag_35, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Specs_37);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_OptNum_31));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_GroupPredIdSets_33));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_AllNamesBag_35));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_37));
}

void MR_CALL 
check_hlds__style_checks__do_we_want_style_warnings_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word * DoWeWantStyleWarnings_5,
  MR_Word * Specs_6)
{
  MR_bool succeeded;
  MR_Word Globals_7;
  MR_Word NonContigDeclsOpt_8;
  MR_Word NonContigDecls_9;
  MR_Word WarnNonContigForeignProcs_10;
  MR_Word AllowedNonContiguity_11;
  MR_Word NonContigDefns_12;
  MR_Word InconsistentPredOrderClauses_14;
  MR_Word InconsistentPredOrderForeignProcs_15;
  MR_Word PredDeclDefnOrder_16;
  MR_Word Globals_27;
  MR_Word AllowNonContiguityForOpts0_28;
  MR_Word AllowNonContiguityForOpts_29;
  MR_Word PredTable_30;
  MR_Word ModuleName_31;
  MR_Word AllNamesBag_33;
  MR_Word DupNames_34;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Specs_2_46;
  MR_Box conv7_Var_32;
  MR_Box conv6_AllowedNonContiguity_11;
  MR_Box conv5_AllNamesBag_33;
  MR_Box conv4_STATE_VARIABLE_Specs_2_46;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 240, &NonContigDeclsOpt_8);
  switch (NonContigDeclsOpt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NonContigDecls_9 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      NonContigDecls_9 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 242, &WarnNonContigForeignProcs_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_27);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_27, (MR_Integer) 243, &AllowNonContiguityForOpts0_28);
  Var_40 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  check_hlds__style_checks__filter_out_duplicate_options_3_p_0(Var_40, AllowNonContiguityForOpts0_28, &AllowNonContiguityForOpts_29);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_4, &PredTable_30);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_4, &ModuleName_31);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_4[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__style_checks__do_we_want_style_warnings_3_p_0_1));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (PredTable_30));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (ModuleName_31));
  }
  Var_45 = mercury__bag__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl4_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), (MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), Var_42, AllowNonContiguityForOpts_29, ((MR_Box) ((MR_Unsigned) 1U)), &conv7_Var_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_AllowedNonContiguity_11, ((MR_Box) (Var_45)), &conv5_AllNamesBag_33, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_STATE_VARIABLE_Specs_2_46);
  AllowedNonContiguity_11 = ((MR_Word) (conv6_AllowedNonContiguity_11));
  AllNamesBag_33 = ((MR_Word) (conv5_AllNamesBag_33));
  STATE_VARIABLE_Specs_2_46 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_2_46));
  mercury__bag__to_list_only_duplicates_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllNamesBag_33, &DupNames_34);
  if ((DupNames_34 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_6 = STATE_VARIABLE_Specs_2_46;
  else
  {
    MR_String NameNames_35;
    MR_String OccurOccurs_36;
    MR_Word Pieces_37;
    MR_Word Spec_38;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Box conv8_NameNames_35;
    MR_Box conv9_OccurOccurs_36;

    conv8_NameNames_35 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupNames_34, ((MR_Box) ((MR_String) "name")), ((MR_Box) ((MR_String) "names")));
    NameNames_35 = ((MR_String) (conv8_NameNames_35));
    conv9_OccurOccurs_36 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupNames_34, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    OccurOccurs_36 = ((MR_String) (conv9_OccurOccurs_36));
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (NameNames_35));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__style_checks_scalar_common_1[9])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_57 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), DupNames_34);
    {
      Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_64, 1) = ((MR_Box) (OccurOccurs_36));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[11])));
    }
    Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_63);
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_1[25])));
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_61);
    Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
    {
      Spec_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.get_allowed_non_contiguity\'/3"));
      MR_hl_field(1, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_38, 3) = ((MR_Box) (Pieces_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_38));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_46));
    }
  }
  switch (WarnNonContigForeignProcs_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word WarnNonContigClauses_13;

        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 241, &WarnNonContigClauses_13);
        switch (WarnNonContigClauses_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NonContigDefns_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              NonContigDefns_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NonContigDefns_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(1, NonContigDefns_12, 1) = ((MR_Box) (AllowedNonContiguity_11));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        NonContigDefns_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NonContigDefns_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(1, NonContigDefns_12, 1) = ((MR_Box) (AllowedNonContiguity_11));
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 238, &InconsistentPredOrderClauses_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 239, &InconsistentPredOrderForeignProcs_15);
  switch (InconsistentPredOrderForeignProcs_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (InconsistentPredOrderClauses_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          PredDeclDefnOrder_16 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          PredDeclDefnOrder_16 = (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_3[0]));
          break;
      }
      break;
    case (MR_Integer) 1:
      PredDeclDefnOrder_16 = (MR_Word) (MR_mkword(1, &check_hlds__style_checks_scalar_common_3[1]));
      break;
  }
  succeeded = (NonContigDecls_9 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (NonContigDefns_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (PredDeclDefnOrder_16 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *DoWeWantStyleWarnings_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word WarningsWeWant_17;

    {
      WarningsWeWant_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, WarningsWeWant_17, 0) = (MR_Box) ((MR_Unsigned) (NonContigDecls_9));
      MR_hl_field(0, WarningsWeWant_17, 1) = ((MR_Box) (NonContigDefns_12));
      MR_hl_field(0, WarningsWeWant_17, 2) = ((MR_Box) (PredDeclDefnOrder_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *DoWeWantStyleWarnings_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WarningsWeWant_17));
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__filter_out_duplicate_options_3_p_0(
  MR_Word STATE_VARIABLE_SeenOpts_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadOpt_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailOpts_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      succeeded = mercury__set__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_SeenOpts_0_1, ((MR_Box) (HeadOpt_6)));
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = TailOpts_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word TailNonDupOpts_9;
        MR_Word STATE_VARIABLE_SeenOpts_1_11;

        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadOpt_6)), STATE_VARIABLE_SeenOpts_0_1, &STATE_VARIABLE_SeenOpts_1_11);
        check_hlds__style_checks__filter_out_duplicate_options_3_p_0(STATE_VARIABLE_SeenOpts_1_11, TailOpts_7, &TailNonDupOpts_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadOpt_6));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailNonDupOpts_9));
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____allowed_non_contiguity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____allowed_non_contiguity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____allowed_non_contiguity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____allowed_non_contiguity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____does_warning_make_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____does_warning_make_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____does_warning_make_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____does_warning_make_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____inc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____inc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_want_style_warnings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_want_style_warnings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_want_style_warnings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_want_style_warnings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_defns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_defns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____pred_decl_item_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____pred_decl_item_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____style_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____style_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____style_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____warnings_we_want_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____warnings_we_want_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____warnings_we_want_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____warnings_we_want_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__style_checks__init(void)
{
}

void mercury__check_hlds__style_checks__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_allowed_non_contiguity_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_does_warning_make_sense_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_want_style_warnings_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_defns_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_decl_item_numbers_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_info_0);
  MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_warnings_we_want_0);
}

void mercury__check_hlds__style_checks__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__style_checks__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.style_checks.
