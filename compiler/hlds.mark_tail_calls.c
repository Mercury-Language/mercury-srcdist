/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2026-08-07
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


// :- module hlds.mark_tail_calls.
// :- implementation.

/*
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#include "hlds.mark_tail_calls.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_top_functor.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_tree234__ti_set_tree234_1hlds__mark_tail_calls__type_ctor_info_later_op_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_info_0_0[2];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_info_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_found_any_rec_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_1;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_2;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_3;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_4;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_5;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_6;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_7;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_8;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_9;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_10;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_11;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_12;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_13;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_14;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_op_0[15];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_op_0[15];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_op_0[15];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[10];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_record_tail_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0[2];

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_nontail_rec_call_reason_0_0[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_0;

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_1;

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_2;

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_3;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_0[3];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_nontail_rec_call_reason_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_nontail_rec_call_reason_0[4];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0[4];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_obviousness_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_report_requested_by_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_report_requested_by_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_report_requested_by_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_markers__type_ctor_info_goal_feature_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0[4];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1];

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[5];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[5];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_was_proc_changed_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0[2];

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__warning_pieces_about_later_op_2_p_0(
  MR_Word Later_3,
  MR_Word * Pieces_4);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_AtTails_0_18,
  MR_Word * STATE_VARIABLE_AtTails_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(
  MR_Word AtTail0_8,
  MR_Word STATE_VARIABLE_Disjunct_0_13,
  MR_Word * STATE_VARIABLE_Disjunct_14,
  MR_Word STATE_VARIABLE_AtTails_0_15,
  MR_Word * STATE_VARIABLE_AtTails_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_for_mlds_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_for_mlds_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word Params_12,
  MR_Word ModuleInfo_13,
  MR_Word SCC_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * STATE_VARIABLE_ProcInfo_54,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word FoundAnyRecCalls_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_rev_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_AtTail_0_3,
  MR_Word * STATE_VARIABLE_AtTail_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word AtTail0_9,
  MR_Word * AtTail_10,
  MR_Word STATE_VARIABLE_Info_0_133,
  MR_Word * STATE_VARIABLE_Info_134);

static void MR_CALL 
hlds__mark_tail_calls__join_branch_at_tails_3_p_0(
  MR_Word HeadAtTail_4,
  MR_Word TailAtTails_5,
  MR_Word * AtTail_6);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_plain_call_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word AtTail0_11,
  MR_Word * AtTail_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
hlds__mark_tail_calls__add_later_op_3_p_0(
  MR_Word Later_4,
  MR_Word AtTail0_5,
  MR_Word * AtTail_6);

static void MR_CALL 
hlds__mark_tail_calls__report_nontail_recursive_call_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word CallerPredProcId_11,
  MR_Word CalleePredProcId_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word RequestBy_15,
  MR_Word WarnOrError_16,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_9_p_0(
  MR_Word CallerPFSNA_10,
  MR_Word MaybeCallerProcId_11,
  MR_Word CalleePFSNA_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word RequestBy_15,
  MR_Word WarnOrError_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(
  MR_Word Reason_5,
  MR_Word Context_6,
  MR_Word * ReasonPieces_7,
  MR_Word * VerboseMsgs_8);

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_1_f_0(
  MR_Word RequestBy_3);

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word Modes_8,
  MR_Word Vars_9,
  MR_Word * OutputVars_10);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____report_requested_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____report_requested_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[91][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[2][10];


struct hlds__mark_tail_calls__vector_common_type_6_0_s {
  const MR_Word hlds__mark_tail_calls__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__mark_tail_calls__vector_common_type_6_0_s hlds__mark_tail_calls_vector_common_6[15];



static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[91][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "self-recursive call"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mutually recursive call"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode number"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is tail recursive, but"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be applied to it,"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail recursion optimization"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "via tail calls only."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because the callee cannot reach the caller"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "every procedure in the set can reach"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only for sets of procedures where"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the compiler can implement mutual tail recursion"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "With --high-level-code,"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "every"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "other procedure in the set using"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail calls only."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the generated target language code."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because that would leave dangling stack references"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because it occurs after a choice point."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not tail recursive."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that manages this change."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The code inside such scopes is followed by code"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that changes determinism."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This call is inside a scope"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to wait for all the other conjuncts."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The code of each parallel conjunct is followed by code"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This call is inside a parallel conjunction."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is followed by code to manage the trail."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In trailing grades, each disjunct in such disjunctions"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that cannot succeed more than once."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This call is inside a disjunction"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the code defining this"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no recursive calls at all,"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 12)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 11)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 230U) },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0])),
    ((MR_Box) (hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
};


static /* final */ const struct hlds__mark_tail_calls__vector_common_type_6_0_s hlds__mark_tail_calls_vector_common_6[15] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[73])) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  10 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  11 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  12 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  13 */   { (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[67])) },
  /* row  14 */   { (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[81])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_hlds__mark_tail_calls__type_ctor_info_at_tail_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_tree234__ti_set_tree234_1hlds__mark_tail_calls__type_ctor_info_later_op_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__set_tree234__ti_set_tree234_1hlds__mark_tail_calls__type_ctor_info_later_op_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_info_0_0 = {
  (MR_String) "at_tail_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_info_0_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_info_0_0 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_info_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_info_0_0 };

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____at_tail_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____at_tail_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "at_tail_info",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_info_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_info_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0 = {
  (MR_String) "call_is_self_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1 = {
  (MR_String) "call_is_mutual_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_call_is_self_or_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "call_is_self_or_mutual_rec",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_call_is_self_or_mutual_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0 = {
  (MR_String) "not_found_any_rec_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1 = {
  (MR_String) "found_any_rec_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_found_any_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_any_rec_calls",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_found_any_rec_calls_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_0 = {
  (MR_String) "later_unify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_1 = {
  (MR_String) "later_unify_assign",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_2 = {
  (MR_String) "later_nonrec_call",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_3 = {
  (MR_String) "later_rec_call",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_4 = {
  (MR_String) "later_par_join",
  INT32_C(4)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_5 = {
  (MR_String) "later_disjunction",
  INT32_C(5)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_6 = {
  (MR_String) "later_disjunction_fail",
  INT32_C(6)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_7 = {
  (MR_String) "later_switch",
  INT32_C(7)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_8 = {
  (MR_String) "later_ite",
  INT32_C(8)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_9 = {
  (MR_String) "later_negation",
  INT32_C(9)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_10 = {
  (MR_String) "later_next_disjunct",
  INT32_C(10)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_11 = {
  (MR_String) "later_cond_end",
  INT32_C(11)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_12 = {
  (MR_String) "later_negation_end",
  INT32_C(12)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_13 = {
  (MR_String) "later_commit",
  INT32_C(13)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_14 = {
  (MR_String) "later_trail_prune",
  INT32_C(14)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_op_0[15] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_3,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_4,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_5,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_6,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_7,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_8,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_9,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_10,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_11,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_12,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_13,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_14
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_op_0[15] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_13,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_11,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_5,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_6,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_8,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_9,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_12,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_10,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_4,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_3,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_7,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_14,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_op_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_op_0[15] = {
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 12
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____later_op_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____later_op_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "later_op",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_op_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_op_0 },
  (MR_Integer) 15,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_op_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_self_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_mutual_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0)
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10] = {
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_cur_proc",
  (MR_String) "mtc_cur_scc",
  (MR_String) "mtc_var_table",
  (MR_String) "mtc_params",
  (MR_String) "mtc_self_tail_rec_calls",
  (MR_String) "mtc_mutual_tail_rec_calls",
  (MR_String) "mtc_any_rec_calls",
  (MR_String) "mtc_diag_specs"
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[10] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0 = {
  (MR_String) "mark_tail_rec_calls_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0 };

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_rec_calls_info",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0 = {
  (MR_String) "do_not_record_tail_recursion",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1 = {
  (MR_String) "record_tail_recursion",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_record_tail_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_record_tail_rec",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_record_tail_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_mutual_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1 = {
  (MR_String) "warn_non_tail_mutual_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_mutual_rec",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_mutual_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_self_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1 = {
  (MR_String) "warn_non_tail_self_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_self_rec",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_maybe_warn_non_tail_self_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0,

};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_nontail_rec_call_reason_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__set_tree234__ti_set_tree234_1hlds__mark_tail_calls__type_ctor_info_later_op_0) };

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_0 = {
  (MR_String) "ntrcr_program",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_nontail_rec_call_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_1 = {
  (MR_String) "ntrcr_mlds_in_scc_not_in_tscc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_2 = {
  (MR_String) "ntrcr_mlds_in_tscc_stack_ref",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_3 = {
  (MR_String) "ntrcr_mlds_model_non_in_cont_func",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_0[3] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_3
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_1[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_0 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_nontail_rec_call_reason_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_nontail_rec_call_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_nontail_rec_call_reason_0[4] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_3,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_nontail_rec_call_reason_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_call_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "nontail_rec_call_reason",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_nontail_rec_call_reason_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_nontail_rec_call_reason_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0 = {
  (MR_String) "non_obvious_nontail_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1 = {
  (MR_String) "obvious_nontail_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_obviousness_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_obviousness_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "nontail_rec_obviousness",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_obviousness_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_0 = {
  (MR_String) "request_by_code",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_1 = {
  (MR_String) "request_by_option",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_report_requested_by_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_report_requested_by_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_report_requested_by_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_report_requested_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_report_requested_by_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____report_requested_by_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____report_requested_by_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "report_requested_by",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_report_requested_by_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_report_requested_by_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_report_requested_by_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_markers__type_ctor_info_goal_feature_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0) }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_markers__type_ctor_info_goal_feature_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_markers__type_ctor_info_goal_feature_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0)
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4] = {
  (MR_String) "self_rec_goal_feature",
  (MR_String) "mutual_rec_goal_feature",
  (MR_String) "should_record_tail_rec",
  (MR_String) "warn_params"
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0 = {
  (MR_String) "tail_rec_params",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0 };

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "tail_rec_params",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0,

};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_report_requested_by_0),
  (MR_PseudoTypeInfo) (&libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_report_in_which_grades_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0)
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0 = {
  (MR_String) "warn_non_tail_rec_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0 };

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "warn_non_tail_rec_params",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0,

};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0 = {
  (MR_String) "proc_was_not_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1 = {
  (MR_String) "proc_may_have_been_changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_was_proc_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_was_proc_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "was_proc_changed",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_was_proc_changed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0,

};

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
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
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____report_requested_by_0_0(
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
hlds__mark_tail_calls____Unify____report_requested_by_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0(
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
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0(
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_9_9;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_9_9 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(
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
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(
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
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(
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
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
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
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__var_table____Compare____var_table_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_45 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_46 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_45 < Var_46);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_45 > Var_46);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_47 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_48 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_47 < Var_48);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_47 > Var_48);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_49 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_50 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_49 < Var_50);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_49 > Var_50);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
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
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
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
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
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
          MR_Word SubResult4_15;
          MR_Integer Var_31 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_32 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_33 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_34 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_33 > Var_34);
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
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_30_30;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
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
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_28_28 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      TypeInfo_30_30 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[6]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                    }
                  }
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

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__mark_tail_calls____Compare____later_op_0_0(
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
hlds__mark_tail_calls____Unify____later_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(
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
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
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
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_info_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls__warning_pieces_about_later_op_2_p_0(
  MR_Word Later_3,
  MR_Word * Pieces_4)
{
  *Pieces_4 = ((&hlds__mark_tail_calls_vector_common_6[0 + Later_3]))->hlds__mark_tail_calls__vector_common_type_6_0__vct_6_f_0;
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_AtTails_0_18,
  MR_Word * STATE_VARIABLE_AtTails_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, 0))));
  MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, 1))));
  MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, 2))));
  MR_Word Goal_16;
  MR_Word AtTail_17;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_15, &Goal_16, AtTail0_8, &AtTail_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_AtTails_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (AtTail_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_AtTails_0_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_16));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(
  MR_Word AtTail0_8,
  MR_Word STATE_VARIABLE_Disjunct_0_13,
  MR_Word * STATE_VARIABLE_Disjunct_14,
  MR_Word STATE_VARIABLE_AtTails_0_15,
  MR_Word * STATE_VARIABLE_AtTails_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word AtTail_12;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(STATE_VARIABLE_Disjunct_0_13, STATE_VARIABLE_Disjunct_14, AtTail0_8, &AtTail_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_AtTails_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (AtTail_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_AtTails_0_15));
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word PredInfo_13,
  MR_Word SCCMap_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Globals_17;
  MR_Word Params_18;
  MR_Word ProcParams_19;
  MR_Word SCC_20;
  MR_Word Var_26;
  MR_Word WarnNonTailRecParams_29;
  MR_Word ExecTraceTailRec_30;
  MR_Word WarnParams_39;
  MR_Word ProcWarnParams_40;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Box conv0_SCC_20;
  MR_Word _WasProcChanged_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_17);
  hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_17, &WarnNonTailRecParams_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 278, &ExecTraceTailRec_30);
  switch (ExecTraceTailRec_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Params_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Params_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Params_18, 3) = ((MR_Box) (WarnNonTailRecParams_29));
      }
      break;
    case (MR_Integer) 1:
      {
        Params_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Params_18, 0) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[1])));
        MR_hl_field(0, Params_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, Params_18, 3) = ((MR_Box) (WarnNonTailRecParams_29));
      }
      break;
  }
  WarnParams_39 = ((MR_Word) ((MR_hl_field(0, Params_18, 3))));
  hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(STATE_VARIABLE_ProcInfo_0_22, WarnParams_39, &ProcWarnParams_40);
  Var_44 = ((MR_Word) ((MR_hl_field(0, Params_18, 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Params_18, 1))));
  Var_46 = ((MR_Unsigned) ((MR_hl_field(0, Params_18, 2))) & (MR_Integer) 1);
  {
    ProcParams_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcParams_19, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, ProcParams_19, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, ProcParams_19, 2) = (MR_Box) ((MR_Unsigned) (Var_46));
    MR_hl_field(0, ProcParams_19, 3) = ((MR_Box) (ProcWarnParams_40));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ProcId_12));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), SCCMap_14, ((MR_Box) (Var_26)), &conv0_SCC_20);
  SCC_20 = ((MR_Word) (conv0_SCC_20));
  hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_19, ModuleInfo_10, SCC_20, PredId_11, ProcId_12, PredInfo_13, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23, &_WasProcChanged_21, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(
  MR_Word SCCMap_9,
  MR_Word PredId_10,
  MR_Word ModuleInfo_11,
  MR_Word * ModuleInfo_4,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word Globals_14;
  MR_Word Params_15;
  MR_Word ProcIds_16;
  MR_Word WarnNonTailRecParams_21;
  MR_Word ExecTraceTailRec_22;

  *ModuleInfo_4 = ModuleInfo_11;
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_14);
  hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_14, &WarnNonTailRecParams_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 278, &ExecTraceTailRec_22);
  switch (ExecTraceTailRec_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Params_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Params_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_15, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Params_15, 3) = ((MR_Box) (WarnNonTailRecParams_21));
      }
      break;
    case (MR_Integer) 1:
      {
        Params_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Params_15, 0) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[1])));
        MR_hl_field(0, Params_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Params_15, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, Params_15, 3) = ((MR_Box) (WarnNonTailRecParams_21));
      }
      break;
  }
  ProcIds_16 = hlds__hlds_pred__pred_info_will_codegen_proc_ids_1_f_0(STATE_VARIABLE_PredInfo_0_17);
  hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_9_p_0(Params_15, ModuleInfo_11, SCCMap_9, PredId_10, ProcIds_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_24 = ((MR_Integer) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ProcIds_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ProcInfo0_28;
      MR_Word ProcParams_29;
      MR_Word SCC_30;
      MR_Word ProcInfo_31;
      MR_Word WasProcChanged_32;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Specs_1_38;
      MR_Word STATE_VARIABLE_PredInfo_1_39;
      MR_Word WarnParams_42;
      MR_Word ProcWarnParams_43;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Box conv0_SCC_30;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_6, ProcId_24, &ProcInfo0_28);
      WarnParams_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
      hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo0_28, WarnParams_42, &ProcWarnParams_43);
      Var_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      Var_49 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
      {
        ProcParams_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcParams_29, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, ProcParams_29, 1) = ((MR_Box) (Var_48));
        MR_hl_field(0, ProcParams_29, 2) = (MR_Box) ((MR_Unsigned) (Var_49));
        MR_hl_field(0, ProcParams_29, 3) = ((MR_Box) (ProcWarnParams_43));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (ProcId_24));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), HeadVar__3_3, ((MR_Box) (Var_37)), &conv0_SCC_30);
      SCC_30 = ((MR_Word) (conv0_SCC_30));
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_29, HeadVar__2_2, SCC_30, HeadVar__4_4, ProcId_24, STATE_VARIABLE_PredInfo_0_6, ProcInfo0_28, &ProcInfo_31, &WasProcChanged_32, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_38);
      switch (WasProcChanged_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_24, ProcInfo_31, STATE_VARIABLE_PredInfo_0_6, &STATE_VARIABLE_PredInfo_1_39);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_PredInfo_1_39 = STATE_VARIABLE_PredInfo_0_6;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_25;
      next_value_of_STATE_VARIABLE_PredInfo_0_6 = STATE_VARIABLE_PredInfo_1_39;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_38;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_PredInfo_0_6 = next_value_of_STATE_VARIABLE_PredInfo_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_for_mlds_code_gen_5_p_0(
  MR_Word DepInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word Globals_11;
  MR_Word WarnNonTailRecParams_12;
  MR_Word Params_13;
  MR_Word BottomUpSCCsEntryPoints_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &Globals_11);
  hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_11, &WarnNonTailRecParams_12);
  {
    Params_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_13, 0) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[0])));
    MR_hl_field(0, Params_13, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[0])));
    MR_hl_field(0, Params_13, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Params_13, 3) = ((MR_Box) (WarnNonTailRecParams_12));
  }
  hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_0_15, DepInfo_6, &BottomUpSCCsEntryPoints_14);
  hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_for_mlds_6_p_0(Params_13, BottomUpSCCsEntryPoints_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_for_mlds_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word SCCEntry_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word SCCEntries_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word SCC_19 = ((MR_Word) ((MR_hl_field(0, SCCEntry_15, 0))));
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_1_27;
      MR_Word STATE_VARIABLE_Specs_1_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      Var_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_19);
      hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_for_mlds_7_p_0(HeadVar__1_1, SCC_19, Var_26, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_27, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SCCEntries_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_27;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_for_mlds_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Word PredProcId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredProcIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(0, PredProcId_18, 0))));
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(0, PredProcId_18, 1))));
      MR_Word PredInfo0_24;
      MR_Word ProcInfo0_25;
      MR_Word ProcParams_26;
      MR_Word ProcInfo_27;
      MR_Word WasProcChanged_28;
      MR_Word STATE_VARIABLE_Specs_1_34;
      MR_Word STATE_VARIABLE_ModuleInfo_1_35;
      MR_Word WarnParams_36;
      MR_Word ProcWarnParams_37;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, PredId_22, &PredInfo0_24);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_24, ProcId_23, &ProcInfo0_25);
      WarnParams_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
      hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo0_25, WarnParams_36, &ProcWarnParams_37);
      Var_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      Var_43 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
      {
        ProcParams_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcParams_26, 0) = ((MR_Box) (Var_41));
        MR_hl_field(0, ProcParams_26, 1) = ((MR_Box) (Var_42));
        MR_hl_field(0, ProcParams_26, 2) = (MR_Box) ((MR_Unsigned) (Var_43));
        MR_hl_field(0, ProcParams_26, 3) = ((MR_Box) (ProcWarnParams_37));
      }
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_26, STATE_VARIABLE_ModuleInfo_0_4, HeadVar__2_2, PredId_22, ProcId_23, PredInfo0_24, ProcInfo0_25, &ProcInfo_27, &WasProcChanged_28, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_1_34);
      switch (WasProcChanged_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word PredInfo_29;

            hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_23, ProcInfo_27, PredInfo0_24, &PredInfo_29);
            hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_22, PredInfo_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_35);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_1_35 = STATE_VARIABLE_ModuleInfo_0_4;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_19;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_1_34;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word Params_12,
  MR_Word ModuleInfo_13,
  MR_Word SCC_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * STATE_VARIABLE_ProcInfo_54,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_bool succeeded;
  MR_Word Detism_21;
  MR_Word SolnCount_23;
  MR_Word _CanFail_22;

  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &Detism_21);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_21, &_CanFail_22, &SolnCount_23);
  switch (SolnCount_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word MaybeSelfFeature_24 = ((MR_Word) ((MR_hl_field(0, Params_12, 0))));
        MR_Word MaybeMutualFeature_25 = ((MR_Word) ((MR_hl_field(0, Params_12, 1))));
        MR_Word MaybeRecordTailCalls_26 = ((MR_Unsigned) ((MR_hl_field(0, Params_12, 2))) & (MR_Integer) 1);
        MR_Word WarnNonTailRecParams_27 = ((MR_Word) ((MR_hl_field(0, Params_12, 3))));
        MR_Word Var_57;
        MR_Word Var_58;

        succeeded = (MaybeSelfFeature_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeMutualFeature_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (MaybeRecordTailCalls_26 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_57 = ((((MR_Unsigned) ((MR_hl_field(0, WarnNonTailRecParams_27, 0))) >> 1)) & (MR_Integer) 1);
              Var_58 = ((MR_Unsigned) ((MR_hl_field(0, WarnNonTailRecParams_27, 0))) & (MR_Integer) 1);
              succeeded = (Var_57 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_58 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          *WasProcChanged_19 = (MR_Integer) 0;
          *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
          *STATE_VARIABLE_ProcInfo_54 = STATE_VARIABLE_ProcInfo_0_53;
        }
        else
        {
          MR_Word Types_31;
          MR_Word Goal0_32;
          MR_Word Modes_33;
          MR_Word HeadVars_34;
          MR_Word VarTable_35;
          MR_Word Outputs_36;
          MR_Word Info0_37;
          MR_Word AtTail0_38;
          MR_Word Goal_39;
          MR_Word Info_41;
          MR_Word HasSelfTailRecCall_48;
          MR_Word HasMutualTailRecCall_49;
          MR_Word FoundAnyRecCalls_50;
          MR_Word GoalSpecs_51;
          MR_Word Var_59;
          MR_Word Var_64;
          MR_Word STATE_VARIABLE_ProcInfo_1_65;
          MR_Word STATE_VARIABLE_Specs_1_66;
          MR_Word _AtTail_40;

          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_17, &Types_31);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &Goal0_32);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &Modes_33);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &HeadVars_34);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &VarTable_35);
          hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_13, Types_31, Modes_33, HeadVars_34, &Outputs_36);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (ProcId_16));
          }
          {
            Info0_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Info0_37, 0) = ((MR_Box) (ModuleInfo_13));
            MR_hl_field(0, Info0_37, 1) = ((MR_Box) (PredInfo_17));
            MR_hl_field(0, Info0_37, 2) = ((MR_Box) (Var_59));
            MR_hl_field(0, Info0_37, 3) = ((MR_Box) (SCC_14));
            MR_hl_field(0, Info0_37, 4) = ((MR_Box) (VarTable_35));
            MR_hl_field(0, Info0_37, 5) = ((MR_Box) (Params_12));
            MR_hl_field(0, Info0_37, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
            MR_hl_field(0, Info0_37, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_64 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0));
          {
            AtTail0_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, AtTail0_38, 0) = ((MR_Box) (Var_64));
            MR_hl_field(0, AtTail0_38, 1) = ((MR_Box) (Outputs_36));
          }
          hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_32, &Goal_39, AtTail0_38, &_AtTail_40, Info0_37, &Info_41);
          HasSelfTailRecCall_48 = ((((MR_Unsigned) ((MR_hl_field(0, Info_41, 6))) >> 2)) & (MR_Integer) 1);
          HasMutualTailRecCall_49 = ((((MR_Unsigned) ((MR_hl_field(0, Info_41, 6))) >> 1)) & (MR_Integer) 1);
          FoundAnyRecCalls_50 = ((MR_Unsigned) ((MR_hl_field(0, Info_41, 6))) & (MR_Integer) 1);
          GoalSpecs_51 = ((MR_Word) ((MR_hl_field(0, Info_41, 7))));
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_39, STATE_VARIABLE_ProcInfo_0_53, &STATE_VARIABLE_ProcInfo_1_65);
          hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(PredInfo_17, STATE_VARIABLE_ProcInfo_1_65, FoundAnyRecCalls_50, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_1_66);
          switch (MaybeRecordTailCalls_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ProcInfo_54 = STATE_VARIABLE_ProcInfo_1_65;
              break;
            case (MR_Integer) 1:
              {
                MR_Word HasTailRecCall_52;

                {
                  HasTailRecCall_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HasTailRecCall_52, 0) = (MR_Box) (((((MR_Unsigned) (HasSelfTailRecCall_48) << 1)) | (MR_Unsigned) (HasMutualTailRecCall_49)));
                }
                hlds__hlds_pred__proc_info_set_has_tail_rec_call_3_p_0(HasTailRecCall_52, STATE_VARIABLE_ProcInfo_1_65, STATE_VARIABLE_ProcInfo_54);
              }
              break;
          }
          *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), GoalSpecs_51, STATE_VARIABLE_Specs_1_66);
          *WasProcChanged_19 = (MR_Integer) 1;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *WasProcChanged_19 = (MR_Integer) 0;
        *STATE_VARIABLE_ProcInfo_54 = STATE_VARIABLE_ProcInfo_0_53;
        *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
      }
      break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word FoundAnyRecCalls_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  switch (FoundAnyRecCalls_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      break;
    case (MR_Integer) 0:
      {
        MR_Word MaybeRequireTailRec_10;

        hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo_7, &MaybeRequireTailRec_10);
        if ((MaybeRequireTailRec_10 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
        else
        {
          MR_Word RequireTailRecInfo_11 = ((MR_Word) ((MR_hl_field(1, MaybeRequireTailRec_10, 0))));
          MR_Word Context_12;
          MR_String PredName_17;
          MR_Word PredFormArity_18;
          MR_Word PFSymNameArity_19;
          MR_Word Var_22;
          MR_Word Severity_24;
          MR_Word WarnOrErrorWord_25;
          MR_Word PredOrFunc_26;
          MR_Word Pieces_29;
          MR_Word Spec_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_57;
          MR_Word Var_58;

          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_6, &PredOrFunc_26);
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &PredName_17);
          PredFormArity_18 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_22, 0) = ((MR_Box) (PredName_17));
          }
          {
            PFSymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PFSymNameArity_19, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
            MR_hl_field(0, PFSymNameArity_19, 1) = ((MR_Box) (Var_22));
            MR_hl_field(0, PFSymNameArity_19, 2) = ((MR_Box) (PredFormArity_18));
          }
          if (((MR_tag((MR_Word) RequireTailRecInfo_11)) == (MR_Integer) 0))
          {
            Context_12 = ((MR_Word) ((MR_hl_field(0, RequireTailRecInfo_11, 0))));
            Severity_24 = (MR_Word) ((MR_Unsigned) 0U);
            WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[20]));
          }
          else
          {
            MR_Word WarnOrError_69 = ((((MR_Unsigned) ((MR_hl_field(1, RequireTailRecInfo_11, 0))) >> 2)) & (MR_Integer) 1);

            Context_12 = ((MR_Word) ((MR_hl_field(1, RequireTailRecInfo_11, 1))));
            switch (WarnOrError_69) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Severity_24 = (MR_Word) ((MR_Unsigned) 0U);
                  WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[20]));
                }
                break;
              case (MR_Integer) 0:
                {
                  Severity_24 = (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[3]));
                  WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[21]));
                }
                break;
            }
          }
          {
            Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(3, Var_42, 1) = ((MR_Box) (PFSymNameArity_19));
          }
          {
            Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_52, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[86])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[84])));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[13])));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[83])));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[82])));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[8])));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (WarnOrErrorWord_25));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
          }
          Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[88])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[90])));
          Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_57);
          {
            Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.mark_tail_calls.report_no_tail_or_nontail_recursive_calls\'/6"));
            MR_hl_field(0, Spec_30, 1) = ((MR_Box) (Severity_24));
            MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 112U));
            MR_hl_field(0, Spec_30, 3) = ((MR_Box) (Context_12));
            MR_hl_field(0, Spec_30, 4) = ((MR_Box) (Pieces_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_21 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
          }
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_rev_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_AtTail_0_3,
  MR_Word * STATE_VARIABLE_AtTail_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    *STATE_VARIABLE_AtTail_4 = STATE_VARIABLE_AtTail_0_3;
  }
  else
  {
    MR_Word RevGoal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RevGoals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word RevGoal_15;
    MR_Word RevGoals_16;
    MR_Word STATE_VARIABLE_AtTail_1_23;
    MR_Word STATE_VARIABLE_Info_1_24;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(RevGoal0_13, &RevGoal_15, STATE_VARIABLE_AtTail_0_3, &STATE_VARIABLE_AtTail_1_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_24);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_rev_conj_6_p_0(RevGoals0_14, &RevGoals_16, STATE_VARIABLE_AtTail_1_23, STATE_VARIABLE_AtTail_4, STATE_VARIABLE_Info_1_24, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RevGoal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevGoals_16));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Case_10;
  MR_Word conv7_STATE_VARIABLE_AtTails_19;
  MR_Word conv6_STATE_VARIABLE_Info_21;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_Case_10, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_AtTails_19, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_21);
  *wrapper_arg_2 = ((MR_Box) (conv8_Case_10));
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_AtTails_19));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Disjunct_14;
  MR_Word conv2_STATE_VARIABLE_AtTails_16;
  MR_Word conv1_STATE_VARIABLE_Info_18;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AtTails_16, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_18);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Disjunct_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AtTails_16));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word AtTail0_9,
  MR_Word * AtTail_10,
  MR_Word STATE_VARIABLE_Info_0_133,
  MR_Word * STATE_VARIABLE_Info_134)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_70 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_71;
        MR_Word AtTail2_72;
        MR_Word AtTail1_182;
        MR_Word GoalExpr_183;

        hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 12, AtTail0_9, &AtTail1_182);
        hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_70, &SubGoal_71, AtTail1_182, &AtTail2_72, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
        hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 9, AtTail2_72, AtTail_10);
        GoalExpr_183 = (MR_Word) ((MR_Word) (SubGoal_71));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_183));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 0))));
        MR_Word Unify0_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 3))));
        MR_Word VarTable_25;
        MR_Word LHSVarEntry_26;
        MR_Word LHSVarIsDummy_27;

        *Goal_8 = Goal0_7;
        VarTable_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 4))));
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_25, LHSVar_20, &LHSVarEntry_26);
        LHSVarIsDummy_27 = ((MR_Unsigned) ((MR_hl_field(0, LHSVarEntry_26, 2))) & (MR_Integer) 1);
        switch (LHSVarIsDummy_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *AtTail_10 = AtTail0_9;
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) Unify0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 0, AtTail0_9, AtTail_10);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ToVar_46 = ((MR_Word) ((MR_hl_field(2, Unify0_23, 0))));
                  MR_Word FromVar_47 = ((MR_Word) ((MR_hl_field(2, Unify0_23, 1))));
                  MR_Word Laters0_48 = ((MR_Word) ((MR_hl_field(0, AtTail0_9, 0))));
                  MR_Word Outputs0_49 = ((MR_Word) ((MR_hl_field(0, AtTail0_9, 1))));
                  MR_Word Outputs_50;

                  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), Laters0_48);
                  if (succeeded)
                    succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(ToVar_46, FromVar_47, Outputs0_49, &Outputs_50);
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *AtTail_10 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Laters0_48));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Outputs_50));
                    }
                  else
                    hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 1, AtTail0_9, AtTail_10);
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_Info_134 = STATE_VARIABLE_Info_0_133;
      }
      break;
    case (MR_Integer) 2:
      hlds__mark_tail_calls__mark_tail_rec_calls_in_plain_call_7_p_0(GoalExpr0_12, GoalInfo0_13, Goal_8, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_8 = Goal0_7;
            hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 2, AtTail0_9, AtTail_10);
            *STATE_VARIABLE_Info_134 = STATE_VARIABLE_Info_0_133;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_63 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 1))) & (MR_Integer) 1);
            MR_Word Goals0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word AtTail1_65;
            MR_Word RevGoals0_66;
            MR_Word RevGoals_67;
            MR_Word Goals_68;
            MR_Word GoalExpr_69;

            switch (ConjType_63) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 4, AtTail0_9, &AtTail1_65);
                break;
              case (MR_Integer) 0:
                AtTail1_65 = AtTail0_9;
                break;
            }
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_64, &RevGoals0_66);
            hlds__mark_tail_calls__mark_tail_rec_calls_in_rev_conj_6_p_0(RevGoals0_66, &RevGoals_67, AtTail1_65, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_67, &Goals_68);
            {
              GoalExpr_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_69, 1) = (MR_Box) ((MR_Unsigned) (ConjType_63));
              MR_hl_field(3, GoalExpr_69, 2) = ((MR_Box) (Goals_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_69));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word NonLastDisjuncts0_74;
            MR_Word LastDisjunct0_75;
            MR_Box conv0_LastDisjunct0_75;

            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts0_73, &NonLastDisjuncts0_74, &conv0_LastDisjunct0_75);
            if (succeeded)
            {
              LastDisjunct0_75 = ((MR_Word) (conv0_LastDisjunct0_75));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Detism_76;
              MR_Word CodeModel_77;
              MR_Word LastDisjunct_80;
              MR_Word LastAtTail_81;
              MR_Word NonLastAtTail0_82;
              MR_Word NonLastDisjuncts_83;
              MR_Word NonLastAtTails_84;
              MR_Word BeforeDisjunctsAtTail_85;
              MR_Word STATE_VARIABLE_Info_4_147;
              MR_Word Var_149;
              MR_Word Var_153;
              MR_Word Var_154;
              MR_Word AtTail1_184;
              MR_Word GoalExpr_185;
              MR_Word ModuleInfo_78;
              MR_Word Globals_79;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Box conv5_NonLastAtTails_84;
              MR_Box conv4_STATE_VARIABLE_Info_134;

              Detism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
              hlds__code_model__determinism_to_code_model_2_p_0(Detism_76, &CodeModel_77);
              switch (CodeModel_77) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
              {
                ModuleInfo_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 0))));
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_78, &Globals_79);
                Var_144 = (MR_Integer) 90;
                Var_145 = (MR_Integer) 1;
                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_79, Var_144, Var_145);
              }
              if (succeeded)
                hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 14, AtTail0_9, &AtTail1_184);
              else
                AtTail1_184 = AtTail0_9;
              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(LastDisjunct0_75, &LastDisjunct_80, AtTail1_184, &LastAtTail_81, STATE_VARIABLE_Info_0_133, &STATE_VARIABLE_Info_4_147);
              hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 10, AtTail1_184, &NonLastAtTail0_82);
              {
                Var_149 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_149, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_5[0]));
                MR_hl_field(0, Var_149, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1));
                MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_149, 3) = ((MR_Box) (NonLastAtTail0_82));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[1]), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_149, NonLastDisjuncts0_74, &NonLastDisjuncts_83, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_NonLastAtTails_84, ((MR_Box) (STATE_VARIABLE_Info_4_147)), &conv4_STATE_VARIABLE_Info_134);
              NonLastAtTails_84 = ((MR_Word) (conv5_NonLastAtTails_84));
              *STATE_VARIABLE_Info_134 = ((MR_Word) (conv4_STATE_VARIABLE_Info_134));
              hlds__mark_tail_calls__join_branch_at_tails_3_p_0(LastAtTail_81, NonLastAtTails_84, &BeforeDisjunctsAtTail_85);
              hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 5, BeforeDisjunctsAtTail_85, AtTail_10);
              {
                Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_154, 0) = ((MR_Box) (LastDisjunct_80));
                MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NonLastDisjuncts_83, Var_154);
              {
                GoalExpr_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_185, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_185, 1) = ((MR_Box) (Var_153));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_185));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            else
            {
              hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 6, AtTail0_9, AtTail_10);
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_Info_134 = STATE_VARIABLE_Info_0_133;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word CanFail_87 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
            MR_Word Cases0_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Cases_89;
            MR_Word AtTails_90;
            MR_Word HeadAtTail_91;
            MR_Word TailAtTails_92;
            MR_Word Var_157;
            MR_Word AtTail1_190;
            MR_Word GoalExpr_191;
            MR_Box conv10_AtTails_90;
            MR_Box conv9_STATE_VARIABLE_Info_134;
            MR_Box conv11_HeadAtTail_91;

            {
              Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_157, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_5[1]));
              MR_hl_field(0, Var_157, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2));
              MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_157, 3) = ((MR_Box) (AtTail0_9));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[1]), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_157, Cases0_88, &Cases_89, ((MR_Box) ((MR_Unsigned) 0U)), &conv10_AtTails_90, ((MR_Box) (STATE_VARIABLE_Info_0_133)), &conv9_STATE_VARIABLE_Info_134);
            AtTails_90 = ((MR_Word) (conv10_AtTails_90));
            *STATE_VARIABLE_Info_134 = ((MR_Word) (conv9_STATE_VARIABLE_Info_134));
            mercury__list__det_head_tail_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0), AtTails_90, &conv11_HeadAtTail_91, &TailAtTails_92);
            HeadAtTail_91 = ((MR_Word) (conv11_HeadAtTail_91));
            hlds__mark_tail_calls__join_branch_at_tails_3_p_0(HeadAtTail_91, TailAtTails_92, &AtTail1_190);
            hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 7, AtTail1_190, AtTail_10);
            {
              GoalExpr_191 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_191, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_191, 1) = ((MR_Box) (Var_86));
              MR_hl_field(3, GoalExpr_191, 2) = (MR_Box) ((MR_Unsigned) (CanFail_87));
              MR_hl_field(3, GoalExpr_191, 3) = ((MR_Box) (Cases_89));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_191));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Var_179;
            MR_Word SubGoal0_197 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word SubGoal_198;

            switch (MR_tag((MR_Word) Reason_104)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word AtTail1_194;

                  hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 13, AtTail0_9, &AtTail1_194);
                  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_197, &SubGoal_198, AtTail1_194, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadWarning_105 = ((MR_Unsigned) ((MR_hl_field(1, Reason_104, 0))) & (MR_Integer) 7);
                  MR_Word TailWarnings_106 = ((MR_Word) ((MR_hl_field(1, Reason_104, 1))));

                  succeeded = (HeadWarning_105 == (MR_Integer) 3);
                  if (!(succeeded))
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 3)), TailWarnings_106);
                  if (succeeded)
                  {
                    MR_Word OldParams_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 5))));
                    MR_Word InnerParams_108;
                    MR_Word InnerInfo0_109;
                    MR_Word InnerInfo_110;
                    MR_Word Var_169;
                    MR_Word Var_228;
                    MR_Word Var_229;
                    MR_Word Var_230;
                    MR_Word Var_232;
                    MR_Word Var_233;
                    MR_Word Var_234;
                    MR_Word Var_235;
                    MR_Word Var_236;
                    MR_Word Var_241;
                    MR_Unsigned packed_word_3;
                    MR_Word Var_242;
                    MR_Word Var_243;
                    MR_Word Var_244;
                    MR_Word Var_245;
                    MR_Word Var_246;
                    MR_Word Var_251;
                    MR_Unsigned packed_word_4;

                    Var_169 = hlds__mark_tail_calls__no_warnings_non_tail_rec_params_1_f_0((MR_Integer) 0);
                    Var_228 = ((MR_Word) ((MR_hl_field(0, OldParams_107, 0))));
                    Var_229 = ((MR_Word) ((MR_hl_field(0, OldParams_107, 1))));
                    Var_230 = ((MR_Unsigned) ((MR_hl_field(0, OldParams_107, 2))) & (MR_Integer) 1);
                    {
                      InnerParams_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InnerParams_108, 0) = ((MR_Box) (Var_228));
                      MR_hl_field(0, InnerParams_108, 1) = ((MR_Box) (Var_229));
                      MR_hl_field(0, InnerParams_108, 2) = (MR_Box) ((MR_Unsigned) (Var_230));
                      MR_hl_field(0, InnerParams_108, 3) = ((MR_Box) (Var_169));
                    }
                    Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 0))));
                    Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 1))));
                    Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 2))));
                    Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 3))));
                    Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 4))));
                    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 6)));
                    Var_241 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_133, 7))));
                    {
                      InnerInfo0_109 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InnerInfo0_109, 0) = ((MR_Box) (Var_232));
                      MR_hl_field(0, InnerInfo0_109, 1) = ((MR_Box) (Var_233));
                      MR_hl_field(0, InnerInfo0_109, 2) = ((MR_Box) (Var_234));
                      MR_hl_field(0, InnerInfo0_109, 3) = ((MR_Box) (Var_235));
                      MR_hl_field(0, InnerInfo0_109, 4) = ((MR_Box) (Var_236));
                      MR_hl_field(0, InnerInfo0_109, 5) = ((MR_Box) (InnerParams_108));
                      MR_hl_field(0, InnerInfo0_109, 6) = (MR_Box) (packed_word_3);
                      MR_hl_field(0, InnerInfo0_109, 7) = ((MR_Box) (Var_241));
                    }
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_197, &SubGoal_198, AtTail0_9, AtTail_10, InnerInfo0_109, &InnerInfo_110);
                    Var_242 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 0))));
                    Var_243 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 1))));
                    Var_244 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 2))));
                    Var_245 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 3))));
                    Var_246 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 4))));
                    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, InnerInfo_110, 6)));
                    Var_251 = ((MR_Word) ((MR_hl_field(0, InnerInfo_110, 7))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_134 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_242));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_243));
                      MR_hl_field(0, base, 2) = ((MR_Box) (Var_244));
                      MR_hl_field(0, base, 3) = ((MR_Box) (Var_245));
                      MR_hl_field(0, base, 4) = ((MR_Box) (Var_246));
                      MR_hl_field(0, base, 5) = ((MR_Box) (OldParams_107));
                      MR_hl_field(0, base, 6) = (MR_Box) (packed_word_4);
                      MR_hl_field(0, base, 7) = ((MR_Box) (Var_251));
                    }
                  }
                  else
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_197, &SubGoal_198, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_104, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_197, &SubGoal_198, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "mark_tail_calls.m", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "unexpected scope kind");
                      return;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word AtTail1_194;

                      hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 13, AtTail0_9, &AtTail1_194);
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_197, &SubGoal_198, AtTail1_194, AtTail_10, STATE_VARIABLE_Info_0_133, STATE_VARIABLE_Info_134);
                    }
                    break;
                }
                break;
            }
            {
              Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_179, 1) = ((MR_Box) (Reason_104));
              MR_hl_field(3, Var_179, 2) = ((MR_Box) (SubGoal_198));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_179));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Cond0_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Then0_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Else0_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));
            MR_Word Then_97;
            MR_Word AtTailBeforeThen_98;
            MR_Word Else_99;
            MR_Word AtTailAfterCond0_101;
            MR_Word AtTailAfterCond_102;
            MR_Word Cond_103;
            MR_Word STATE_VARIABLE_Info_7_161;
            MR_Word STATE_VARIABLE_Info_8_162;
            MR_Word AtTail1_192;
            MR_Word GoalExpr_193;
            MR_Word HeadTailAtTail_275;
            MR_Word HeadLaters_277;
            MR_Word HeadOutputArgs_278;
            MR_Word HeadTailLaters_279;
            MR_Word NextLaters_281;

            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Then0_95, &Then_97, AtTail0_9, &AtTailBeforeThen_98, STATE_VARIABLE_Info_0_133, &STATE_VARIABLE_Info_7_161);
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Else0_96, &Else_99, AtTail0_9, &HeadTailAtTail_275, STATE_VARIABLE_Info_7_161, &STATE_VARIABLE_Info_8_162);
            HeadLaters_277 = ((MR_Word) ((MR_hl_field(0, AtTailBeforeThen_98, 0))));
            HeadOutputArgs_278 = ((MR_Word) ((MR_hl_field(0, AtTailBeforeThen_98, 1))));
            HeadTailLaters_279 = ((MR_Word) ((MR_hl_field(0, HeadTailAtTail_275, 0))));
            mercury__set_tree234__union_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), HeadLaters_277, HeadTailLaters_279, &NextLaters_281);
            {
              AtTailAfterCond0_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AtTailAfterCond0_101, 0) = ((MR_Box) (NextLaters_281));
              MR_hl_field(0, AtTailAfterCond0_101, 1) = ((MR_Box) (HeadOutputArgs_278));
            }
            hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 11, AtTailAfterCond0_101, &AtTailAfterCond_102);
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Cond0_94, &Cond_103, AtTailAfterCond_102, &AtTail1_192, STATE_VARIABLE_Info_8_162, STATE_VARIABLE_Info_134);
            hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 8, AtTail1_192, AtTail_10);
            {
              GoalExpr_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_193, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_193, 1) = ((MR_Box) (Vars_93));
              MR_hl_field(3, GoalExpr_193, 2) = ((MR_Box) (Cond_103));
              MR_hl_field(3, GoalExpr_193, 3) = ((MR_Box) (Then_97));
              MR_hl_field(3, GoalExpr_193, 4) = ((MR_Box) (Else_99));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_193));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__join_branch_at_tails_3_p_0(
  MR_Word HeadAtTail_4,
  MR_Word TailAtTails_5,
  MR_Word * AtTail_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailAtTails_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *AtTail_6 = HeadAtTail_4;
    else
    {
      MR_Word HeadTailAtTail_7 = ((MR_Word) ((MR_hl_field(1, TailAtTails_5, 0))));
      MR_Word TailTailAtTails_8 = ((MR_Word) ((MR_hl_field(1, TailAtTails_5, 1))));
      MR_Word HeadLaters_9 = ((MR_Word) ((MR_hl_field(0, HeadAtTail_4, 0))));
      MR_Word HeadOutputArgs_10 = ((MR_Word) ((MR_hl_field(0, HeadAtTail_4, 1))));
      MR_Word HeadTailLaters_11 = ((MR_Word) ((MR_hl_field(0, HeadTailAtTail_7, 0))));
      MR_Word NextLaters_13;
      MR_Word NextAtTail_14;
      MR_Word next_value_of_HeadAtTail_4;
      MR_Word next_value_of_TailAtTails_5;

      mercury__set_tree234__union_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), HeadLaters_9, HeadTailLaters_11, &NextLaters_13);
      {
        NextAtTail_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NextAtTail_14, 0) = ((MR_Box) (NextLaters_13));
        MR_hl_field(0, NextAtTail_14, 1) = ((MR_Box) (HeadOutputArgs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadAtTail_4 = NextAtTail_14;
      next_value_of_TailAtTails_5 = TailTailAtTails_8;
      HeadAtTail_4 = next_value_of_HeadAtTail_4;
      TailAtTails_5 = next_value_of_TailAtTails_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var0_7;
  MR_Word Vars0_8;
  MR_Word Var_9;
  MR_Word Vars_10;
  MR_Word TypeInfo_11_11;

  if (succeeded)
  {
    Var0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    Vars0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    TypeInfo_11_11 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ToVar_5)), ((MR_Box) (Var0_7)));
    if (succeeded)
    {
      Var_9 = FromVar_6;
      Vars_10 = Vars0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      Var_9 = Var0_7;
      succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(ToVar_5, FromVar_6, Vars0_8, &Vars_10);
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (Vars_10));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_plain_call_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word AtTail0_11,
  MR_Word * AtTail_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word CalleePredId_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 0))));
  MR_Integer CalleeProcId_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, 1))));
  MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 2))));
  MR_Word Builtin_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, 3))) & (MR_Integer) 1);
  MR_Word CalleePredProcId_20;
  MR_Word CurPredProcId_21;
  MR_Word CurSCCPredProcIds_22;
  MR_Word SelfOrMutual_23;

  {
    CalleePredProcId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CalleePredProcId_20, 0) = ((MR_Box) (CalleePredId_14));
    MR_hl_field(0, CalleePredProcId_20, 1) = ((MR_Box) (CalleeProcId_15));
  }
  CurPredProcId_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 2))));
  CurSCCPredProcIds_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 3))));
  succeeded = (Builtin_17 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CalleePredProcId_20, CurPredProcId_21);
    if (succeeded)
    {
      SelfOrMutual_23 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CalleePredProcId_20)), CurSCCPredProcIds_22);
      if (succeeded)
      {
        SelfOrMutual_23 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
        succeeded = mercury__builtin__false_0_p_0();
    }
  }
  if (succeeded)
  {
    MR_Word Laters0_24;
    MR_Word OutputVars_25;
    MR_Word Laters_47;
    MR_Word STATE_VARIABLE_Info_1_50;
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 0))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 1))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 2))));
    MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 3))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 4))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 5))));
    MR_Word Var_94 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_95 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 7))));
    MR_Word TypeInfo_190_190;
    MR_Word ModuleInfo_26;
    MR_Word CalleePredInfo_27;
    MR_Word CalleeArgTypes_28;
    MR_Word CalleeProcInfo_29;
    MR_Word CalleeArgModes_30;
    MR_Word CalleeOutputVars_31;

    {
      STATE_VARIABLE_Info_1_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0) = ((MR_Box) (Var_88));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 1) = ((MR_Box) (Var_89));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 2) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 3) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 4) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 5) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 6) = (MR_Box) (((((MR_Unsigned) (Var_94) << 2)) | (((((MR_Unsigned) (Var_95) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      MR_hl_field(0, STATE_VARIABLE_Info_1_50, 7) = ((MR_Box) (Var_97));
    }
    Laters0_24 = ((MR_Word) ((MR_hl_field(0, AtTail0_11, 0))));
    OutputVars_25 = ((MR_Word) ((MR_hl_field(0, AtTail0_11, 1))));
    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), Laters0_24);
    if (succeeded)
    {
      ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0))));
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_26, CalleePredId_14, &CalleePredInfo_27);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(CalleePredInfo_27, &CalleeArgTypes_28);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_27, CalleeProcId_15, &CalleeProcInfo_29);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_29, &CalleeArgModes_30);
      hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_26, CalleeArgTypes_28, CalleeArgModes_30, ArgVars_16, &CalleeOutputVars_31);
      TypeInfo_190_190 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_190_190, ((MR_Box) (OutputVars_25)), ((MR_Box) (CalleeOutputVars_31)));
    }
    if (succeeded)
    {
      MR_Word MaybeSelfFeature_32;
      MR_Word MaybeMutualFeature_33;
      MR_Word MaybeRecord_34;
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 5))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 1))));
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 2))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 3))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 4))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 7))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 6)));

      MaybeSelfFeature_32 = ((MR_Word) ((MR_hl_field(0, Var_52, 0))));
      MaybeMutualFeature_33 = ((MR_Word) ((MR_hl_field(0, Var_52, 1))));
      MaybeRecord_34 = ((MR_Unsigned) ((MR_hl_field(0, Var_52, 2))) & (MR_Integer) 1);
      switch (SelfOrMutual_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            if ((MaybeMutualFeature_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            else
            {
              MR_Word MutualFeature_38 = ((MR_Word) ((MR_hl_field(1, MaybeMutualFeature_33, 0))));
              MR_Word GoalInfo_65;

              hlds__hlds_goal__goal_info_add_feature_3_p_0(MutualFeature_38, GoalInfo0_9, &GoalInfo_65);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_65));
              }
            }
            switch (MaybeRecord_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_1_50;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_49 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_108));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_109));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_110));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_52));
                  MR_hl_field(0, base, 6) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                  MR_hl_field(0, base, 7) = ((MR_Box) (Var_115));
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            if ((MaybeSelfFeature_32 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            else
            {
              MR_Word SelfFeature_36 = ((MR_Word) ((MR_hl_field(1, MaybeSelfFeature_32, 0))));
              MR_Word GoalInfo_37;

              hlds__hlds_goal__goal_info_add_feature_3_p_0(SelfFeature_36, GoalInfo0_9, &GoalInfo_37);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_37));
              }
            }
            switch (MaybeRecord_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_1_50;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_49 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_108));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_109));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_110));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_52));
                  MR_hl_field(0, base, 6) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
                  MR_hl_field(0, base, 7) = ((MR_Box) (Var_115));
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Obviousness_39;
      MR_Word GoalInfo1_40;
      MR_Word CallerPredProcId_41;
      MR_Word Context_42;
      MR_Word WarnParams_43;
      MR_Word Specs0_44;
      MR_Word Features_45;
      MR_Word Specs_46;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word ModuleInfo_68;
      MR_Word GoalInfo_69;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Unsigned packed_word_3;

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), Laters0_24, ((MR_Box) ((MR_Integer) 3)));
      if (succeeded)
      {
        Obviousness_39 = (MR_Integer) 1;
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 13, GoalInfo0_9, &GoalInfo1_40);
      }
      else
      {
        Obviousness_39 = (MR_Integer) 0;
        GoalInfo1_40 = GoalInfo0_9;
      }
      ModuleInfo_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0))));
      CallerPredProcId_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 2))));
      Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
      Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 5))));
      Specs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 7))));
      WarnParams_43 = ((MR_Word) ((MR_hl_field(0, Var_59, 3))));
      Features_45 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_9);
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Laters0_24));
      }
      hlds__mark_tail_calls__maybe_report_nontail_recursive_call_10_p_0(ModuleInfo_68, WarnParams_43, CallerPredProcId_41, CalleePredProcId_20, Features_45, Context_42, Var_60, Obviousness_39, Specs0_44, &Specs_46);
      Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0))));
      Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 1))));
      Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 2))));
      Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 3))));
      Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 4))));
      Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 5))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_50, 6)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_49 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_175));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_176));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_177));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_178));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_179));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_180));
        MR_hl_field(0, base, 6) = (MR_Box) (packed_word_3);
        MR_hl_field(0, base, 7) = ((MR_Box) (Specs_46));
      }
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 30, GoalInfo1_40, &GoalInfo_69);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_69));
      }
    }
    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), ((MR_Box) ((MR_Integer) 3)), Laters0_24, &Laters_47);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *AtTail_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Laters_47));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutputVars_25));
    }
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
    }
    hlds__mark_tail_calls__add_later_op_3_p_0((MR_Integer) 2, AtTail0_11, AtTail_12);
    *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__add_later_op_3_p_0(
  MR_Word Later_4,
  MR_Word AtTail0_5,
  MR_Word * AtTail_6)
{
  MR_Word Laters0_7 = ((MR_Word) ((MR_hl_field(0, AtTail0_5, 0))));
  MR_Word Outputs0_8 = ((MR_Word) ((MR_hl_field(0, AtTail0_5, 1))));
  MR_Word Laters_9;

  mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), ((MR_Box) (Later_4)), Laters0_7, &Laters_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AtTail_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Laters_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Outputs0_8));
  }
}

void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word WarnParams_12,
  MR_Word CallerPredProcId_13,
  MR_Word CalleePredProcId_14,
  MR_Word Features_15,
  MR_Word Context_16,
  MR_Word Reason_17,
  MR_Word Obviousness_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word RequestBy_20 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_12, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word WarnOrError_21 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_12, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Grades_22 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_12, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word WarnNonTailSelfRec_23 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_12, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word WarnNonTailMutualRec_24 = ((MR_Unsigned) ((MR_hl_field(0, WarnParams_12, 0))) & (MR_Integer) 1);
  MR_Word TypeCtorInfo_31_31;
  MR_Word Var_30;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPredProcId_13, CalleePredProcId_14);
  if (succeeded)
    succeeded = (WarnNonTailSelfRec_23 == (MR_Integer) 1);
  else
    succeeded = (WarnNonTailMutualRec_24 == (MR_Integer) 1);
  if (succeeded)
  {
    switch (Obviousness_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_25;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_25);
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, (MR_Integer) 214, (MR_Integer) 1);
        }
        break;
    }
    if (succeeded)
    {
      switch (Grades_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Globals_33;
            MR_Word GC_34;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_33);
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, (MR_Integer) 67, (MR_Integer) 0);
            if (succeeded)
            {
              Var_37 = (MR_Integer) 57;
              Var_38 = (MR_Integer) 0;
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, Var_37, Var_38);
              if (succeeded)
              {
                Var_39 = (MR_Integer) 59;
                Var_40 = (MR_Integer) 0;
                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, Var_39, Var_40);
                if (succeeded)
                {
                  Var_41 = (MR_Integer) 94;
                  Var_42 = (MR_Integer) 0;
                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, Var_41, Var_42);
                  if (succeeded)
                  {
                    Var_43 = (MR_Integer) 95;
                    Var_44 = (MR_Integer) 0;
                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, Var_43, Var_44);
                    if (succeeded)
                    {
                      libs__globals__get_gc_method_2_p_0(Globals_33, &GC_34);
                      succeeded = (GC_34 != (MR_Integer) 5);
                    }
                  }
                }
              }
            }
          }
          break;
      }
      if (succeeded)
      {
        Var_30 = (MR_Integer) 30;
        TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0);
        succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_31_31, Features_15, ((MR_Box) (Var_30)));
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
    hlds__mark_tail_calls__report_nontail_recursive_call_9_p_0(ModuleInfo_11, CallerPredProcId_13, CalleePredProcId_14, Context_16, Reason_17, RequestBy_20, WarnOrError_21, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  else
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
}

static void MR_CALL 
hlds__mark_tail_calls__report_nontail_recursive_call_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word CallerPredProcId_11,
  MR_Word CalleePredProcId_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word RequestBy_15,
  MR_Word WarnOrError_16,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded;
  MR_Word CallerPredId_18 = ((MR_Word) ((MR_hl_field(0, CallerPredProcId_11, 0))));
  MR_Integer CallerProcId_19 = ((MR_Integer) ((MR_hl_field(0, CallerPredProcId_11, 1))));
  MR_Word CallerPredInfo_20;
  MR_Word CallerPredOrFunc_21;
  MR_String CallerName_22;
  MR_Word CallerPredFormArity_23;
  MR_Word CallerPFSNA_24;
  MR_Word CallerProcTable_25;
  MR_Integer CallerNumProcs_26;
  MR_Word MaybeCallerProcId_27;
  MR_Word Var_37;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, CallerPredId_18, &CallerPredInfo_20);
  CallerPredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CallerPredInfo_20);
  CallerName_22 = hlds__hlds_pred__pred_info_name_1_f_0(CallerPredInfo_20);
  CallerPredFormArity_23 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(CallerPredInfo_20);
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (CallerName_22));
  }
  {
    CallerPFSNA_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallerPFSNA_24, 0) = (MR_Box) ((MR_Unsigned) (CallerPredOrFunc_21));
    MR_hl_field(0, CallerPFSNA_24, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, CallerPFSNA_24, 2) = ((MR_Box) (CallerPredFormArity_23));
  }
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(CallerPredInfo_20, &CallerProcTable_25);
  mercury__map__count_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), CallerProcTable_25, &CallerNumProcs_26);
  succeeded = (CallerNumProcs_26 > (MR_Integer) 1);
  if (succeeded)
    {
      MaybeCallerProcId_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCallerProcId_27, 0) = ((MR_Box) (CallerProcId_19));
    }
  else
    MaybeCallerProcId_27 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPredProcId_11, CalleePredProcId_12);
  if (succeeded)
  {
    MR_Word Option_45;
    MR_Word ReasonPieces_46;
    MR_Word VerboseMsgs_47;
    MR_Word Severity_48;
    MR_Word WarnOrErrorWord_49;
    MR_Word ProcIdPieces_50;
    MR_Word MainPieces_51;
    MR_Word MainMsg_52;
    MR_Word Spec_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_72;

    switch (RequestBy_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Option_45 = (MR_Integer) 230;
        break;
      case (MR_Integer) 1:
        Option_45 = (MR_Integer) 215;
        break;
    }
    hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_14, Context_13, &ReasonPieces_46, &VerboseMsgs_47);
    switch (WarnOrError_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Severity_48 = (MR_Word) ((MR_Unsigned) 0U);
          WarnOrErrorWord_49 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[20]));
        }
        break;
      case (MR_Integer) 0:
        {
          {
            Severity_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Severity_48, 0) = (MR_Box) ((MR_Unsigned) (Option_45));
          }
          WarnOrErrorWord_49 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[21]));
        }
        break;
    }
    if ((MaybeCallerProcId_27 == (MR_Word) ((MR_Unsigned) 0U)))
      ProcIdPieces_50 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer CallerProcId_76 = ((MR_Integer) ((MR_hl_field(1, MaybeCallerProcId_27, 0))));
      MR_Integer CallerProcNumber0_77;
      MR_Integer CallerProcNumber_78;
      MR_Word Var_82;
      MR_Word Var_83;

      hlds__hlds_pred__proc_id_to_int_2_p_0(CallerProcId_76, &CallerProcNumber0_77);
      CallerProcNumber_78 = (MR_Integer) ((MR_Unsigned) CallerProcNumber0_77 + (MR_Unsigned) 1);
      {
        Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_83, 1) = ((MR_Box) (CallerProcNumber_78));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[24])));
      }
      {
        ProcIdPieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ProcIdPieces_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[22])));
        MR_hl_field(1, ProcIdPieces_50, 1) = ((MR_Box) (Var_82));
      }
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (WarnOrErrorWord_49));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[9])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (CallerPFSNA_24));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[14])));
    }
    Var_65 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[16])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, ReasonPieces_46);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_64);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcIdPieces_50, Var_60);
    MainPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_59);
    {
      MainMsg_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_52, 0) = ((MR_Box) (Context_13));
      MR_hl_field(0, MainMsg_52, 1) = ((MR_Box) (MainPieces_51));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (MainMsg_52));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (VerboseMsgs_47));
    }
    {
      Spec_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.mark_tail_calls.add_message_for_nontail_self_recursive_call\'/8"));
      MR_hl_field(2, Spec_53, 1) = ((MR_Box) (Severity_48));
      MR_hl_field(2, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 112U));
      MR_hl_field(2, Spec_53, 3) = ((MR_Box) (Var_72));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
    }
  }
  else
  {
    MR_Word CalleePredId_28 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_12, 0))));
    MR_Word CalleePredInfo_30;
    MR_Word CalleePredOrFunc_31;
    MR_Word CalleeName_32;
    MR_Word CalleePredFormArity_33;
    MR_Word CalleePFSNA_34;
    MR_Word Var_40;
    MR_String Var_41;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, CalleePredId_28, &CalleePredInfo_30);
    CalleePredOrFunc_31 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_30);
    Var_40 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_30);
    Var_41 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_30);
    {
      CalleeName_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CalleeName_32, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, CalleeName_32, 1) = ((MR_Box) (Var_41));
    }
    CalleePredFormArity_33 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(CalleePredInfo_30);
    {
      CalleePFSNA_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CalleePFSNA_34, 0) = (MR_Box) ((MR_Unsigned) (CalleePredOrFunc_31));
      MR_hl_field(0, CalleePFSNA_34, 1) = ((MR_Box) (CalleeName_32));
      MR_hl_field(0, CalleePFSNA_34, 2) = ((MR_Box) (CalleePredFormArity_33));
    }
    hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_9_p_0(CallerPFSNA_24, MaybeCallerProcId_27, CalleePFSNA_34, Context_13, Reason_14, RequestBy_15, WarnOrError_16, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
  }
}

static void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_9_p_0(
  MR_Word CallerPFSNA_10,
  MR_Word MaybeCallerProcId_11,
  MR_Word CalleePFSNA_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word RequestBy_15,
  MR_Word WarnOrError_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word Option_18;
  MR_Word ReasonPieces_19;
  MR_Word VerboseMsgs_20;
  MR_Word Severity_21;
  MR_Word WarnOrErrorWord_22;
  MR_Word ProcIdPieces_23;
  MR_Word MainPieces_24;
  MR_Word MainMsg_25;
  MR_Word Spec_26;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_62;

  switch (RequestBy_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Option_18 = (MR_Integer) 230;
      break;
    case (MR_Integer) 1:
      Option_18 = (MR_Integer) 216;
      break;
  }
  hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_14, Context_13, &ReasonPieces_19, &VerboseMsgs_20);
  switch (WarnOrError_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Severity_21 = (MR_Word) ((MR_Unsigned) 0U);
        WarnOrErrorWord_22 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[20]));
      }
      break;
    case (MR_Integer) 0:
      {
        {
          Severity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Severity_21, 0) = (MR_Box) ((MR_Unsigned) (Option_18));
        }
        WarnOrErrorWord_22 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[21]));
      }
      break;
  }
  if ((MaybeCallerProcId_11 == (MR_Word) ((MR_Unsigned) 0U)))
    ProcIdPieces_23 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer CallerProcId_66 = ((MR_Integer) ((MR_hl_field(1, MaybeCallerProcId_11, 0))));
    MR_Integer CallerProcNumber0_67;
    MR_Integer CallerProcNumber_68;
    MR_Word Var_72;
    MR_Word Var_73;

    hlds__hlds_pred__proc_id_to_int_2_p_0(CallerProcId_66, &CallerProcNumber0_67);
    CallerProcNumber_68 = (MR_Integer) ((MR_Unsigned) CallerProcNumber0_67 + (MR_Unsigned) 1);
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (CallerProcNumber_68));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[24])));
    }
    {
      ProcIdPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ProcIdPieces_23, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[22])));
      MR_hl_field(1, ProcIdPieces_23, 1) = ((MR_Box) (Var_72));
    }
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (WarnOrErrorWord_22));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[9])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (CallerPFSNA_10));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[14])));
  }
  Var_48 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[18])));
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (CalleePFSNA_12));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[19])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
  }
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, ReasonPieces_19);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_53);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_47);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcIdPieces_23, Var_35);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_34);
  {
    MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainMsg_25, 0) = ((MR_Box) (Context_13));
    MR_hl_field(0, MainMsg_25, 1) = ((MR_Box) (MainPieces_24));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MainMsg_25));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (VerboseMsgs_20));
  }
  {
    Spec_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.mark_tail_calls.add_message_for_nontail_mutual_recursive_call\'/9"));
    MR_hl_field(2, Spec_26, 1) = ((MR_Box) (Severity_21));
    MR_hl_field(2, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 112U));
    MR_hl_field(2, Spec_26, 3) = ((MR_Box) (Var_62));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_28 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  hlds__mark_tail_calls__warning_pieces_about_later_op_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Pieces_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
}

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(
  MR_Word Reason_5,
  MR_Word Context_6,
  MR_Word * ReasonPieces_7,
  MR_Word * VerboseMsgs_8)
{
  switch (MR_tag((MR_Word) Reason_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Reason_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VerbosePieces_13;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_70;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;

            Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[30])));
            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[35])));
            *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[26])), Var_33);
            Var_65 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[45])));
            Var_76 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[49])));
            Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])));
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[47])), Var_75);
            Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_70);
            VerbosePieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[43])), Var_64);
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) (VerbosePieces_13));
            }
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_84, 0) = ((MR_Box) (Context_6));
              MR_hl_field(2, Var_84, 1) = ((MR_Box) (Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *VerboseMsgs_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_84));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_94;
            MR_Word Var_95;

            Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[30])));
            Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[53])));
            *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[26])), Var_94);
            *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_116;
            MR_Word Var_117;

            Var_117 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[30])));
            Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[55])));
            *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[26])), Var_116);
            *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LaterSet_9 = ((MR_Word) ((MR_hl_field(1, Reason_5, 0))));
        MR_Word Laters_10;
        MR_Word WarningPieceLists_11;
        MR_Word WarningPieces_12;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_25;

        mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), LaterSet_9, &Laters_10);
        mercury__list__map_3_p_0((MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]), (MR_Word) (&hlds__mark_tail_calls_scalar_common_4[0]), Laters_10, &WarningPieceLists_11);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WarningPieceLists_11, &WarningPieces_12);
        Var_20 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[59])));
        Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[31])), WarningPieces_12);
        Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_25);
        *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[57])), Var_19);
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_1_f_0(
  MR_Word RequestBy_3)
{
  MR_Word Params_4;

  {
    Params_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_4, 0) = (MR_Box) (((((MR_Unsigned) (RequestBy_3) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))));
  }
  return Params_4;
}

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word Modes_8,
  MR_Word Vars_9,
  MR_Word * OutputVars_10)
{
  MR_bool succeeded = (Types_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadType_11;
  MR_Word TailTypes_12;
  MR_Word HeadMode_13;
  MR_Word TailModes_14;
  MR_Word HeadVar_15;
  MR_Word TailVars_16;

  if (succeeded)
  {
    HeadType_11 = ((MR_Word) ((MR_hl_field(1, Types_7, 0))));
    TailTypes_12 = ((MR_Word) ((MR_hl_field(1, Types_7, 1))));
    succeeded = (Modes_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadMode_13 = ((MR_Word) ((MR_hl_field(1, Modes_8, 0))));
      TailModes_14 = ((MR_Word) ((MR_hl_field(1, Modes_8, 1))));
      succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadVar_15 = ((MR_Word) ((MR_hl_field(1, Vars_9, 0))));
        TailVars_16 = ((MR_Word) ((MR_hl_field(1, Vars_9, 1))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word TailOutputVars_17;
    MR_Word TopFunctorMode_18;

    hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_6, TailTypes_12, TailModes_14, TailVars_16, &TailOutputVars_17);
    hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_6, HeadMode_13, HeadType_11, &TopFunctorMode_18);
    switch (TopFunctorMode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *OutputVars_10 = TailOutputVars_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsDummy_19;

          IsDummy_19 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, HeadType_11);
          switch (IsDummy_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *OutputVars_10 = TailOutputVars_17;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OutputVars_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_15));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailOutputVars_17));
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    succeeded = (Types_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Modes_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Vars_9 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *OutputVars_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
        return;
      }
  }
}

void MR_CALL 
hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word WarnParams_5,
  MR_Word * ProcWarnParams_6)
{
  MR_Word MaybeRequireTailRec_7;

  hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo_4, &MaybeRequireTailRec_7);
  if ((MaybeRequireTailRec_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *ProcWarnParams_6 = WarnParams_5;
  else
  {
    MR_Word Pragma_8 = ((MR_Word) ((MR_hl_field(1, MaybeRequireTailRec_7, 0))));

    if (((MR_tag((MR_Word) Pragma_8)) == (MR_Integer) 0))
      *ProcWarnParams_6 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_2[2]);
    else
    {
      MR_Word WarnOrError_10 = ((((MR_Unsigned) ((MR_hl_field(1, Pragma_8, 0))) >> 2)) & (MR_Integer) 1);
      MR_Word RecType_11 = ((((MR_Unsigned) ((MR_hl_field(1, Pragma_8, 0))) >> 1)) & (MR_Integer) 1);
      MR_Word Grades_12 = ((MR_Unsigned) ((MR_hl_field(1, Pragma_8, 0))) & (MR_Integer) 1);
      MR_Word SelfRec_14;
      MR_Word MutualRec_15;

      switch (RecType_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            SelfRec_14 = (MR_Integer) 1;
            MutualRec_15 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 0:
          {
            SelfRec_14 = (MR_Integer) 1;
            MutualRec_15 = (MR_Integer) 0;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *ProcWarnParams_6 = base;
        MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 4)) | (((((MR_Unsigned) (WarnOrError_10) << 3)) | (((((MR_Unsigned) (Grades_12) << 2)) | (((((MR_Unsigned) (SelfRec_14) << 1)) | (MR_Unsigned) (MutualRec_15)))))))));
      }
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__get_default_warn_parms_2_p_0(
  MR_Word Globals_3,
  MR_Word * WarnNonTailRecParams_4)
{
  MR_Word WarnNonTailSelfRecBool_6;
  MR_Word WarnNonTailSelfRecOpt_7;
  MR_Word WarnNonTailMutualRecBool_8;
  MR_Word WarnNonTailMutualRecOpt_9;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 215, &WarnNonTailSelfRecBool_6);
  switch (WarnNonTailSelfRecBool_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnNonTailSelfRecOpt_7 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnNonTailSelfRecOpt_7 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 216, &WarnNonTailMutualRecBool_8);
  switch (WarnNonTailMutualRecBool_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnNonTailMutualRecOpt_9 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnNonTailMutualRecOpt_9 = (MR_Integer) 1;
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *WarnNonTailRecParams_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) (WarnNonTailSelfRecOpt_7) << 1)) | (MR_Unsigned) (WarnNonTailMutualRecOpt_9)))))))));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____at_tail_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____at_tail_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____later_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____later_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____report_requested_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____report_requested_by_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____report_requested_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____report_requested_by_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____was_proc_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____was_proc_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__mark_tail_calls__init(void)
{
}

void mercury__hlds__mark_tail_calls__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_info_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_op_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_call_reason_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_obviousness_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_report_requested_by_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_was_proc_changed_0);
}

void mercury__hlds__mark_tail_calls__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__mark_tail_calls__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.mark_tail_calls.
