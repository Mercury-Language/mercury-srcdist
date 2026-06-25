/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2026-06-25
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




static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[2];

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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_rec_call_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_call_reason_0[4];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0[4];

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
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
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
hlds__mark_tail_calls____Compare____at_tail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(
  MR_Word AtTail0_8,
  MR_Word STATE_VARIABLE_Disjunct_0_13,
  MR_Word * STATE_VARIABLE_Disjunct_14,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_16,
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
  MR_Word STATE_VARIABLE_ProcInfo_0_52,
  MR_Word * STATE_VARIABLE_ProcInfo_53,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

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
  MR_Word STATE_VARIABLE_Info_0_127,
  MR_Word * STATE_VARIABLE_Info_128);

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word AtTail_3,
  MR_Word * SeenLaterRecCall_4);

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
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word Before_3,
  MR_Word * After_4);

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
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
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
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
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


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[66][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[6][1];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[66][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "self-recursive call"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mutually recursive call"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode number"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is tail recursive, but"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be applied to it,"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail recursion optimization"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "via tail calls only."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because the callee cannot reach the caller"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "every procedure in the set can reach"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only for sets of procedures where"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the compiler can implement mutual tail recursion"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "With --high-level-code,"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "every"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "other procedure in the set using"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail calls only."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the generated target language code."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because that would leave dangling stack references"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because it occurs after a choice point."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not tail recursive."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the code defining this"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no recursive calls at all,"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 12)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 11)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 229U) },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0) };

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0 };

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1] = { &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 };

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____at_tail_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____at_tail_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "at_tail",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0,

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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0 = {
  (MR_String) "have_seen_later_rec_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1 = {
  (MR_String) "have_not_seen_later_rec_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_rec_call_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "later_rec_call",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_later_rec_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
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
  (MR_String) "mtc_error_specs"
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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0 = {
  (MR_String) "ntrcr_program",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1 = {
  (MR_String) "ntrcr_mlds_in_scc_not_in_tscc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2 = {
  (MR_String) "ntrcr_mlds_in_tscc_stack_ref",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3 = {
  (MR_String) "ntrcr_mlds_model_non_in_cont_func",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_call_reason_0[4] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0[4] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0
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
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "nontail_rec_call_reason",
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0 },
  { hlds__mark_tail_calls__hlds__mark_tail_calls__enum_ordinal_ordered_nontail_rec_call_reason_0 },
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
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
                      TypeInfo_30_30 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]);
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]);
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

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
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
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
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
hlds__mark_tail_calls____Compare____at_tail_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
    MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

    succeeded = (Var_12 < Var_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_12 > Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, 0))));
  MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, 1))));
  MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, 2))));
  MR_Word Goal_16;
  MR_Word AtTail_17;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_15, &Goal_16, AtTail0_8, &AtTail_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  if (((MR_tag((MR_Word) AtTail_17)) == (MR_Integer) 0))
    *STATE_VARIABLE_SeenLaterRecCall_19 = STATE_VARIABLE_SeenLaterRecCall_0_18;
  else
  {
    MR_Word AtTailSeenLaterRecCall_23 = ((MR_Unsigned) ((MR_hl_field(1, AtTail_17, 0))) & (MR_Integer) 1);

    switch (AtTailSeenLaterRecCall_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_SeenLaterRecCall_19 = STATE_VARIABLE_SeenLaterRecCall_0_18;
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_SeenLaterRecCall_19 = (MR_Integer) 0;
        break;
    }
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
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word AtTail_12;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(STATE_VARIABLE_Disjunct_0_13, STATE_VARIABLE_Disjunct_14, AtTail0_8, &AtTail_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  if (((MR_tag((MR_Word) AtTail_12)) == (MR_Integer) 0))
    *STATE_VARIABLE_SeenLaterRecCall_16 = STATE_VARIABLE_SeenLaterRecCall_0_15;
  else
  {
    MR_Word AtTailSeenLaterRecCall_20 = ((MR_Unsigned) ((MR_hl_field(1, AtTail_12, 0))) & (MR_Integer) 1);

    switch (AtTailSeenLaterRecCall_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_SeenLaterRecCall_16 = STATE_VARIABLE_SeenLaterRecCall_0_15;
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_SeenLaterRecCall_16 = (MR_Integer) 0;
        break;
    }
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
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 277, &ExecTraceTailRec_30);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 277, &ExecTraceTailRec_22);
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
  MR_Word STATE_VARIABLE_ProcInfo_0_52,
  MR_Word * STATE_VARIABLE_ProcInfo_53,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  MR_bool succeeded;
  MR_Word Detism_21;
  MR_Word SolnCount_23;
  MR_Word _CanFail_22;

  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_52, &Detism_21);
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
        MR_Word Var_56;
        MR_Word Var_57;

        succeeded = (MaybeSelfFeature_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeMutualFeature_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (MaybeRecordTailCalls_26 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_56 = ((((MR_Unsigned) ((MR_hl_field(0, WarnNonTailRecParams_27, 0))) >> 1)) & (MR_Integer) 1);
              Var_57 = ((MR_Unsigned) ((MR_hl_field(0, WarnNonTailRecParams_27, 0))) & (MR_Integer) 1);
              succeeded = (Var_56 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_57 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          *WasProcChanged_19 = (MR_Integer) 0;
          *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
          *STATE_VARIABLE_ProcInfo_53 = STATE_VARIABLE_ProcInfo_0_52;
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
          MR_Word Goal_38;
          MR_Word Info_40;
          MR_Word HasSelfTailRecCall_47;
          MR_Word HasMutualTailRecCall_48;
          MR_Word FoundAnyRecCalls_49;
          MR_Word GoalSpecs_50;
          MR_Word Var_58;
          MR_Word Var_63;
          MR_Word STATE_VARIABLE_ProcInfo_1_64;
          MR_Word STATE_VARIABLE_Specs_1_65;
          MR_Word Var_39;

          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_17, &Types_31);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_52, &Goal0_32);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_52, &Modes_33);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_52, &HeadVars_34);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_52, &VarTable_35);
          hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_13, Types_31, Modes_33, HeadVars_34, &Outputs_36);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (ProcId_16));
          }
          {
            Info0_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Info0_37, 0) = ((MR_Box) (ModuleInfo_13));
            MR_hl_field(0, Info0_37, 1) = ((MR_Box) (PredInfo_17));
            MR_hl_field(0, Info0_37, 2) = ((MR_Box) (Var_58));
            MR_hl_field(0, Info0_37, 3) = ((MR_Box) (SCC_14));
            MR_hl_field(0, Info0_37, 4) = ((MR_Box) (VarTable_35));
            MR_hl_field(0, Info0_37, 5) = ((MR_Box) (Params_12));
            MR_hl_field(0, Info0_37, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
            MR_hl_field(0, Info0_37, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (Outputs_36));
          }
          hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_32, &Goal_38, Var_63, &Var_39, Info0_37, &Info_40);
          HasSelfTailRecCall_47 = ((((MR_Unsigned) ((MR_hl_field(0, Info_40, 6))) >> 2)) & (MR_Integer) 1);
          HasMutualTailRecCall_48 = ((((MR_Unsigned) ((MR_hl_field(0, Info_40, 6))) >> 1)) & (MR_Integer) 1);
          FoundAnyRecCalls_49 = ((MR_Unsigned) ((MR_hl_field(0, Info_40, 6))) & (MR_Integer) 1);
          GoalSpecs_50 = ((MR_Word) ((MR_hl_field(0, Info_40, 7))));
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_38, STATE_VARIABLE_ProcInfo_0_52, &STATE_VARIABLE_ProcInfo_1_64);
          hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(PredInfo_17, STATE_VARIABLE_ProcInfo_1_64, FoundAnyRecCalls_49, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_1_65);
          switch (MaybeRecordTailCalls_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ProcInfo_53 = STATE_VARIABLE_ProcInfo_1_64;
              break;
            case (MR_Integer) 1:
              {
                MR_Word HasTailRecCall_51;

                {
                  HasTailRecCall_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HasTailRecCall_51, 0) = (MR_Box) (((((MR_Unsigned) (HasSelfTailRecCall_47) << 1)) | (MR_Unsigned) (HasMutualTailRecCall_48)));
                }
                hlds__hlds_pred__proc_info_set_has_tail_rec_call_3_p_0(HasTailRecCall_51, STATE_VARIABLE_ProcInfo_1_64, STATE_VARIABLE_ProcInfo_53);
              }
              break;
          }
          *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GoalSpecs_50, STATE_VARIABLE_Specs_1_65);
          *WasProcChanged_19 = (MR_Integer) 1;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *WasProcChanged_19 = (MR_Integer) 0;
        *STATE_VARIABLE_ProcInfo_53 = STATE_VARIABLE_ProcInfo_0_52;
        *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
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
            WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[17]));
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
                  WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[17]));
                }
                break;
              case (MR_Integer) 0:
                {
                  Severity_24 = (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[5]));
                  WarnOrErrorWord_25 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[18]));
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
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[61])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[59])));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[10])));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[58])));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[57])));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[5])));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (WarnOrErrorWord_25));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
          }
          Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[63])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[65])));
          Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_57);
          {
            Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.mark_tail_calls.report_no_tail_or_nontail_recursive_calls\'/6"));
            MR_hl_field(0, Spec_30, 1) = ((MR_Box) (Severity_24));
            MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 108U));
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
  MR_Word conv7_STATE_VARIABLE_SeenLaterRecCall_19;
  MR_Word conv6_STATE_VARIABLE_Info_21;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_Case_10, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_SeenLaterRecCall_19, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_21);
  *wrapper_arg_2 = ((MR_Box) (conv8_Case_10));
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_SeenLaterRecCall_19));
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
  MR_Word conv2_STATE_VARIABLE_SeenLaterRecCall_16;
  MR_Word conv1_STATE_VARIABLE_Info_18;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_SeenLaterRecCall_16, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_18);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Disjunct_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_SeenLaterRecCall_16));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word AtTail0_9,
  MR_Word * AtTail_10,
  MR_Word STATE_VARIABLE_Info_0_127,
  MR_Word * STATE_VARIABLE_Info_128)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Goal_8 = Goal0_7;
        hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
        *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
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
        VarTable_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 4))));
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
                hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ToVar_46 = ((MR_Word) ((MR_hl_field(2, Unify0_23, 0))));
                  MR_Word FromVar_47 = ((MR_Word) ((MR_hl_field(2, Unify0_23, 1))));
                  MR_Word Outputs_49;
                  MR_Word Outputs0_48;

                  succeeded = ((MR_tag((MR_Word) AtTail0_9)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Outputs0_48 = ((MR_Word) ((MR_hl_field(0, AtTail0_9, 0))));
                    succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(ToVar_46, FromVar_47, Outputs0_48, &Outputs_49);
                  }
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *AtTail_10 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Outputs_49));
                    }
                  else
                    *AtTail_10 = (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[2]));
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
      }
      break;
    case (MR_Integer) 2:
      hlds__mark_tail_calls__mark_tail_rec_calls_in_plain_call_7_p_0(GoalExpr0_12, GoalInfo0_13, Goal_8, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_8 = Goal0_7;
            hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
            *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
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
                hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_65);
                break;
              case (MR_Integer) 0:
                AtTail1_65 = AtTail0_9;
                break;
            }
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_64, &RevGoals0_66);
            hlds__mark_tail_calls__mark_tail_rec_calls_in_rev_conj_6_p_0(RevGoals0_66, &RevGoals_67, AtTail1_65, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
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
            MR_Word Disjuncts0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word NonLastDisjuncts0_71;
            MR_Word LastDisjunct0_72;
            MR_Box conv0_LastDisjunct0_72;

            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts0_70, &NonLastDisjuncts0_71, &conv0_LastDisjunct0_72);
            if (succeeded)
            {
              LastDisjunct0_72 = ((MR_Word) (conv0_LastDisjunct0_72));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word LastDisjunct_73;
              MR_Word LastAtTail_74;
              MR_Word SeenLaterRecCall0_75;
              MR_Word NonLastAtTail0_76;
              MR_Word NonLastDisjuncts_77;
              MR_Word SeenLaterRecCall_78;
              MR_Word STATE_VARIABLE_Info_3_132;
              MR_Word Var_133;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word GoalExpr_156;
              MR_Box conv5_SeenLaterRecCall_78;
              MR_Box conv4_STATE_VARIABLE_Info_128;

              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(LastDisjunct0_72, &LastDisjunct_73, AtTail0_9, &LastAtTail_74, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_3_132);
              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(LastAtTail_74, &SeenLaterRecCall0_75);
              {
                NonLastAtTail0_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonLastAtTail0_76, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall0_75));
              }
              {
                Var_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_133, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
                MR_hl_field(0, Var_133, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1));
                MR_hl_field(0, Var_133, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_133, 3) = ((MR_Box) (NonLastAtTail0_76));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_133, NonLastDisjuncts0_71, &NonLastDisjuncts_77, ((MR_Box) (SeenLaterRecCall0_75)), &conv5_SeenLaterRecCall_78, ((MR_Box) (STATE_VARIABLE_Info_3_132)), &conv4_STATE_VARIABLE_Info_128);
              SeenLaterRecCall_78 = ((MR_Word) (conv5_SeenLaterRecCall_78));
              *STATE_VARIABLE_Info_128 = ((MR_Word) (conv4_STATE_VARIABLE_Info_128));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *AtTail_10 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_78));
              }
              {
                Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_136, 0) = ((MR_Box) (LastDisjunct_73));
                MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NonLastDisjuncts_77, Var_136);
              {
                GoalExpr_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_156, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_156, 1) = ((MR_Box) (Var_135));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_156));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            else
            {
              MR_Word SeenLaterRecCall_157;

              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTail0_9, &SeenLaterRecCall_157);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *AtTail_10 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_157));
              }
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word CanFail_80 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
            MR_Word Cases0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Cases_82;
            MR_Word Var_138;
            MR_Word GoalExpr_160;
            MR_Word SeenLaterRecCall0_161;
            MR_Word SeenLaterRecCall_162;
            MR_Box conv10_SeenLaterRecCall_162;
            MR_Box conv9_STATE_VARIABLE_Info_128;

            hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTail0_9, &SeenLaterRecCall0_161);
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_138, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[1]));
              MR_hl_field(0, Var_138, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2));
              MR_hl_field(0, Var_138, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_138, 3) = ((MR_Box) (AtTail0_9));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_138, Cases0_81, &Cases_82, ((MR_Box) (SeenLaterRecCall0_161)), &conv10_SeenLaterRecCall_162, ((MR_Box) (STATE_VARIABLE_Info_0_127)), &conv9_STATE_VARIABLE_Info_128);
            SeenLaterRecCall_162 = ((MR_Word) (conv10_SeenLaterRecCall_162));
            *STATE_VARIABLE_Info_128 = ((MR_Word) (conv9_STATE_VARIABLE_Info_128));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *AtTail_10 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_162));
            }
            {
              GoalExpr_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_160, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_160, 1) = ((MR_Box) (Var_79));
              MR_hl_field(3, GoalExpr_160, 2) = (MR_Box) ((MR_Unsigned) (CanFail_80));
              MR_hl_field(3, GoalExpr_160, 3) = ((MR_Box) (Cases_82));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_160));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word SubGoal0_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word SubGoal_103;
            MR_Word Var_153;

            switch (MR_tag((MR_Word) Reason_96)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word AtTail1_164;

                  hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_164);
                  hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_97, &SubGoal_103, AtTail1_164, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadWarning_98 = ((MR_Unsigned) ((MR_hl_field(1, Reason_96, 0))) & (MR_Integer) 7);
                  MR_Word TailWarnings_99 = ((MR_Word) ((MR_hl_field(1, Reason_96, 1))));

                  succeeded = (HeadWarning_98 == (MR_Integer) 3);
                  if (!(succeeded))
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 3)), TailWarnings_99);
                  if (succeeded)
                  {
                    MR_Word OldParams_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 5))));
                    MR_Word InnerParams_101;
                    MR_Word InnerInfo0_102;
                    MR_Word InnerInfo_104;
                    MR_Word Var_144;
                    MR_Word Var_185;
                    MR_Word Var_186;
                    MR_Word Var_187;
                    MR_Word Var_189;
                    MR_Word Var_190;
                    MR_Word Var_191;
                    MR_Word Var_192;
                    MR_Word Var_193;
                    MR_Word Var_198;
                    MR_Unsigned packed_word_3;
                    MR_Word Var_199;
                    MR_Word Var_200;
                    MR_Word Var_201;
                    MR_Word Var_202;
                    MR_Word Var_203;
                    MR_Word Var_208;
                    MR_Unsigned packed_word_4;

                    Var_144 = hlds__mark_tail_calls__no_warnings_non_tail_rec_params_1_f_0((MR_Integer) 0);
                    Var_185 = ((MR_Word) ((MR_hl_field(0, OldParams_100, 0))));
                    Var_186 = ((MR_Word) ((MR_hl_field(0, OldParams_100, 1))));
                    Var_187 = ((MR_Unsigned) ((MR_hl_field(0, OldParams_100, 2))) & (MR_Integer) 1);
                    {
                      InnerParams_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InnerParams_101, 0) = ((MR_Box) (Var_185));
                      MR_hl_field(0, InnerParams_101, 1) = ((MR_Box) (Var_186));
                      MR_hl_field(0, InnerParams_101, 2) = (MR_Box) ((MR_Unsigned) (Var_187));
                      MR_hl_field(0, InnerParams_101, 3) = ((MR_Box) (Var_144));
                    }
                    Var_189 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 0))));
                    Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 1))));
                    Var_191 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 2))));
                    Var_192 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 3))));
                    Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 4))));
                    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 6)));
                    Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_127, 7))));
                    {
                      InnerInfo0_102 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InnerInfo0_102, 0) = ((MR_Box) (Var_189));
                      MR_hl_field(0, InnerInfo0_102, 1) = ((MR_Box) (Var_190));
                      MR_hl_field(0, InnerInfo0_102, 2) = ((MR_Box) (Var_191));
                      MR_hl_field(0, InnerInfo0_102, 3) = ((MR_Box) (Var_192));
                      MR_hl_field(0, InnerInfo0_102, 4) = ((MR_Box) (Var_193));
                      MR_hl_field(0, InnerInfo0_102, 5) = ((MR_Box) (InnerParams_101));
                      MR_hl_field(0, InnerInfo0_102, 6) = (MR_Box) (packed_word_3);
                      MR_hl_field(0, InnerInfo0_102, 7) = ((MR_Box) (Var_198));
                    }
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_97, &SubGoal_103, AtTail0_9, AtTail_10, InnerInfo0_102, &InnerInfo_104);
                    Var_199 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 0))));
                    Var_200 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 1))));
                    Var_201 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 2))));
                    Var_202 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 3))));
                    Var_203 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 4))));
                    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, InnerInfo_104, 6)));
                    Var_208 = ((MR_Word) ((MR_hl_field(0, InnerInfo_104, 7))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_128 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_200));
                      MR_hl_field(0, base, 2) = ((MR_Box) (Var_201));
                      MR_hl_field(0, base, 3) = ((MR_Box) (Var_202));
                      MR_hl_field(0, base, 4) = ((MR_Box) (Var_203));
                      MR_hl_field(0, base, 5) = ((MR_Box) (OldParams_100));
                      MR_hl_field(0, base, 6) = (MR_Box) (packed_word_4);
                      MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
                    }
                  }
                  else
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_97, &SubGoal_103, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_96, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_97, &SubGoal_103, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
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
                      MR_Word AtTail1_164;

                      hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_164);
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_97, &SubGoal_103, AtTail1_164, AtTail_10, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128);
                    }
                    break;
                }
                break;
            }
            {
              Var_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_153, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_153, 1) = ((MR_Box) (Reason_96));
              MR_hl_field(3, Var_153, 2) = ((MR_Box) (SubGoal_103));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_153));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Cond0_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Then0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Else0_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));
            MR_Word Then_87;
            MR_Word AtTailBeforeThen_88;
            MR_Word Else_89;
            MR_Word AtTailBeforeElse_90;
            MR_Word SeenRecCallInThen_91;
            MR_Word SeenRecCallInElse_92;
            MR_Word SeenRecCallAfterCond_93;
            MR_Word AtTailAfterCond_94;
            MR_Word Cond_95;
            MR_Word STATE_VARIABLE_Info_6_140;
            MR_Word STATE_VARIABLE_Info_7_141;
            MR_Word GoalExpr_163;

            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Then0_85, &Then_87, AtTail0_9, &AtTailBeforeThen_88, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_6_140);
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Else0_86, &Else_89, AtTail0_9, &AtTailBeforeElse_90, STATE_VARIABLE_Info_6_140, &STATE_VARIABLE_Info_7_141);
            hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTailBeforeThen_88, &SeenRecCallInThen_91);
            hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTailBeforeElse_90, &SeenRecCallInElse_92);
            succeeded = (SeenRecCallInThen_91 == (MR_Integer) 0);
            if (!(succeeded))
              succeeded = (SeenRecCallInElse_92 == (MR_Integer) 0);
            if (succeeded)
              SeenRecCallAfterCond_93 = (MR_Integer) 0;
            else
              SeenRecCallAfterCond_93 = (MR_Integer) 1;
            {
              AtTailAfterCond_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AtTailAfterCond_94, 0) = (MR_Box) ((MR_Unsigned) (SeenRecCallAfterCond_93));
            }
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Cond0_84, &Cond_95, AtTailAfterCond_94, AtTail_10, STATE_VARIABLE_Info_7_141, STATE_VARIABLE_Info_128);
            {
              GoalExpr_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_163, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_163, 1) = ((MR_Box) (Vars_83));
              MR_hl_field(3, GoalExpr_163, 2) = ((MR_Box) (Cond_95));
              MR_hl_field(3, GoalExpr_163, 3) = ((MR_Box) (Then_87));
              MR_hl_field(3, GoalExpr_163, 4) = ((MR_Box) (Else_89));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_163));
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
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word AtTail_3,
  MR_Word * SeenLaterRecCall_4)
{
  if (((MR_tag((MR_Word) AtTail_3)) == (MR_Integer) 0))
    *SeenLaterRecCall_4 = (MR_Integer) 1;
  else
    *SeenLaterRecCall_4 = ((MR_Unsigned) ((MR_hl_field(1, AtTail_3, 0))) & (MR_Integer) 1);
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
    TypeInfo_11_11 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[1]);
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
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
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
  CurPredProcId_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 2))));
  CurSCCPredProcIds_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 3))));
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
    MR_Word STATE_VARIABLE_Info_1_47;
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 0))));
    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 1))));
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 2))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 3))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 4))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 5))));
    MR_Word Var_91 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 7))));
    MR_Word TypeInfo_185_185;
    MR_Word OutputVars_24;
    MR_Word ModuleInfo_25;
    MR_Word CalleePredInfo_26;
    MR_Word CalleeArgTypes_27;
    MR_Word CalleeProcInfo_28;
    MR_Word CalleeArgModes_29;
    MR_Word CalleeOutputVars_30;

    {
      STATE_VARIABLE_Info_1_47 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 0) = ((MR_Box) (Var_85));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 1) = ((MR_Box) (Var_86));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 2) = ((MR_Box) (Var_87));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 3) = ((MR_Box) (Var_88));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 4) = ((MR_Box) (Var_89));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 5) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 6) = (MR_Box) (((((MR_Unsigned) (Var_91) << 2)) | (((((MR_Unsigned) (Var_92) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      MR_hl_field(0, STATE_VARIABLE_Info_1_47, 7) = ((MR_Box) (Var_94));
    }
    succeeded = ((MR_tag((MR_Word) AtTail0_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      OutputVars_24 = ((MR_Word) ((MR_hl_field(0, AtTail0_11, 0))));
      ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 0))));
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_25, CalleePredId_14, &CalleePredInfo_26);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(CalleePredInfo_26, &CalleeArgTypes_27);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_26, CalleeProcId_15, &CalleeProcInfo_28);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_28, &CalleeArgModes_29);
      hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_25, CalleeArgTypes_27, CalleeArgModes_29, ArgVars_16, &CalleeOutputVars_30);
      TypeInfo_185_185 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_185_185, ((MR_Box) (OutputVars_24)), ((MR_Box) (CalleeOutputVars_30)));
    }
    if (succeeded)
    {
      MR_Word MaybeSelfFeature_31;
      MR_Word MaybeMutualFeature_32;
      MR_Word MaybeRecord_33;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 5))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 0))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 1))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 2))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 3))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 4))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 7))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 6)));

      MaybeSelfFeature_31 = ((MR_Word) ((MR_hl_field(0, Var_49, 0))));
      MaybeMutualFeature_32 = ((MR_Word) ((MR_hl_field(0, Var_49, 1))));
      MaybeRecord_33 = ((MR_Unsigned) ((MR_hl_field(0, Var_49, 2))) & (MR_Integer) 1);
      switch (SelfOrMutual_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            if ((MaybeMutualFeature_32 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            else
            {
              MR_Word MutualFeature_37 = ((MR_Word) ((MR_hl_field(1, MaybeMutualFeature_32, 0))));
              MR_Word GoalInfo_61;

              hlds__hlds_goal__goal_info_add_feature_3_p_0(MutualFeature_37, GoalInfo0_9, &GoalInfo_61);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_61));
              }
            }
            switch (MaybeRecord_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_1_47;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_46 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_105));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_106));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_107));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_108));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
                  MR_hl_field(0, base, 6) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                  MR_hl_field(0, base, 7) = ((MR_Box) (Var_112));
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            if ((MaybeSelfFeature_31 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            else
            {
              MR_Word SelfFeature_35 = ((MR_Word) ((MR_hl_field(1, MaybeSelfFeature_31, 0))));
              MR_Word GoalInfo_36;

              hlds__hlds_goal__goal_info_add_feature_3_p_0(SelfFeature_35, GoalInfo0_9, &GoalInfo_36);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_36));
              }
            }
            switch (MaybeRecord_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_1_47;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_46 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_105));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_106));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_107));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_108));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
                  MR_hl_field(0, base, 6) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
                  MR_hl_field(0, base, 7) = ((MR_Box) (Var_112));
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
      MR_Word CallerPredProcId_40;
      MR_Word Context_41;
      MR_Word WarnParams_42;
      MR_Word Specs0_43;
      MR_Word Specs_44;
      MR_Word Var_57;
      MR_Word ModuleInfo_66;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Unsigned packed_word_4;

      if (((MR_tag((MR_Word) AtTail0_11)) == (MR_Integer) 0))
      {
        Obviousness_39 = (MR_Integer) 0;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      else
      {
        MR_Word Var_183 = ((MR_Unsigned) ((MR_hl_field(1, AtTail0_11, 0))) & (MR_Integer) 1);

        switch (Var_183) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              Obviousness_39 = (MR_Integer) 0;
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word GoalInfo_64;

              Obviousness_39 = (MR_Integer) 1;
              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 13, GoalInfo0_9, &GoalInfo_64);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_64));
              }
            }
            break;
        }
      }
      ModuleInfo_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 0))));
      CallerPredProcId_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 2))));
      Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
      Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 5))));
      Specs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 7))));
      WarnParams_42 = ((MR_Word) ((MR_hl_field(0, Var_57, 3))));
      hlds__mark_tail_calls__maybe_report_nontail_recursive_call_9_p_0(ModuleInfo_66, CallerPredProcId_40, CalleePredProcId_20, Context_41, (MR_Integer) 0, Obviousness_39, WarnParams_42, Specs0_43, &Specs_44);
      Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 0))));
      Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 1))));
      Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 2))));
      Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 3))));
      Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 4))));
      Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 5))));
      packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_47, 6)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_46 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_172));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_173));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_174));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_175));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_176));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_177));
        MR_hl_field(0, base, 6) = (MR_Box) (packed_word_4);
        MR_hl_field(0, base, 7) = ((MR_Box) (Specs_44));
      }
    }
    *AtTail_12 = (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[3]));
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
    hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_11, AtTail_12);
    *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word Before_3,
  MR_Word * After_4)
{
  if (((MR_tag((MR_Word) Before_3)) == (MR_Integer) 0))
    *After_4 = (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_2[2]));
  else
    *After_4 = Before_3;
}

void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word CallerPredProcId_11,
  MR_Word CalleePredProcId_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word Obviousness_15,
  MR_Word WarnParams_16,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word RequestBy_18 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_16, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word WarnOrError_19 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_16, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Grades_20 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_16, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word WarnNonTailSelfRec_21 = ((((MR_Unsigned) ((MR_hl_field(0, WarnParams_16, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word WarnNonTailMutualRec_22 = ((MR_Unsigned) ((MR_hl_field(0, WarnParams_16, 0))) & (MR_Integer) 1);

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPredProcId_11, CalleePredProcId_12);
  if (succeeded)
    succeeded = (WarnNonTailSelfRec_21 == (MR_Integer) 1);
  else
    succeeded = (WarnNonTailMutualRec_22 == (MR_Integer) 1);
  if (succeeded)
  {
    switch (Obviousness_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_23;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_23);
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_23, (MR_Integer) 213, (MR_Integer) 1);
        }
        break;
    }
    if (succeeded)
      switch (Grades_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Globals_29;
            MR_Word GC_30;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_29);
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, (MR_Integer) 67, (MR_Integer) 0);
            if (succeeded)
            {
              Var_33 = (MR_Integer) 57;
              Var_34 = (MR_Integer) 0;
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, Var_33, Var_34);
              if (succeeded)
              {
                Var_35 = (MR_Integer) 59;
                Var_36 = (MR_Integer) 0;
                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, Var_35, Var_36);
                if (succeeded)
                {
                  Var_37 = (MR_Integer) 94;
                  Var_38 = (MR_Integer) 0;
                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, Var_37, Var_38);
                  if (succeeded)
                  {
                    Var_39 = (MR_Integer) 95;
                    Var_40 = (MR_Integer) 0;
                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, Var_39, Var_40);
                    if (succeeded)
                    {
                      Var_41 = (MR_Integer) 90;
                      Var_42 = (MR_Integer) 0;
                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_29, Var_41, Var_42);
                      if (succeeded)
                      {
                        libs__globals__get_gc_method_2_p_0(Globals_29, &GC_30);
                        succeeded = (GC_30 != (MR_Integer) 5);
                      }
                    }
                  }
                }
              }
            }
          }
          break;
      }
  }
  if (succeeded)
    hlds__mark_tail_calls__report_nontail_recursive_call_9_p_0(ModuleInfo_10, CallerPredProcId_11, CalleePredProcId_12, Context_13, Reason_14, RequestBy_18, WarnOrError_19, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
  else
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
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
        Option_45 = (MR_Integer) 229;
        break;
      case (MR_Integer) 1:
        Option_45 = (MR_Integer) 214;
        break;
    }
    hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_14, Context_13, &ReasonPieces_46, &VerboseMsgs_47);
    switch (WarnOrError_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Severity_48 = (MR_Word) ((MR_Unsigned) 0U);
          WarnOrErrorWord_49 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[17]));
        }
        break;
      case (MR_Integer) 0:
        {
          {
            Severity_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Severity_48, 0) = (MR_Box) ((MR_Unsigned) (Option_45));
          }
          WarnOrErrorWord_49 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[18]));
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
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[21])));
      }
      {
        ProcIdPieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ProcIdPieces_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[19])));
        MR_hl_field(1, ProcIdPieces_50, 1) = ((MR_Box) (Var_82));
      }
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (WarnOrErrorWord_49));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[6])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (CallerPFSNA_24));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[11])));
    }
    Var_65 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[13])));
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
      MR_hl_field(2, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 108U));
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
      Option_18 = (MR_Integer) 229;
      break;
    case (MR_Integer) 1:
      Option_18 = (MR_Integer) 215;
      break;
  }
  hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_14, Context_13, &ReasonPieces_19, &VerboseMsgs_20);
  switch (WarnOrError_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Severity_21 = (MR_Word) ((MR_Unsigned) 0U);
        WarnOrErrorWord_22 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[17]));
      }
      break;
    case (MR_Integer) 0:
      {
        {
          Severity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Severity_21, 0) = (MR_Box) ((MR_Unsigned) (Option_18));
        }
        WarnOrErrorWord_22 = (MR_Word) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[18]));
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
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[21])));
    }
    {
      ProcIdPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ProcIdPieces_23, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[19])));
      MR_hl_field(1, ProcIdPieces_23, 1) = ((MR_Box) (Var_72));
    }
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (WarnOrErrorWord_22));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[6])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (CallerPFSNA_10));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[11])));
  }
  Var_48 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[15])));
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
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__mark_tail_calls_scalar_common_1[16])));
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
    MR_hl_field(2, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 108U));
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
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(
  MR_Word Reason_5,
  MR_Word Context_6,
  MR_Word * ReasonPieces_7,
  MR_Word * VerboseMsgs_8)
{
  switch (Reason_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word VerbosePieces_9;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[27])));
        Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[32])));
        *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[23])), Var_27);
        Var_59 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[42])));
        Var_70 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[46])));
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])));
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[44])), Var_69);
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
        VerbosePieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[40])), Var_58);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (VerbosePieces_9));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_78, 0) = ((MR_Box) (Context_6));
          MR_hl_field(2, Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *VerboseMsgs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_88;
        MR_Word Var_89;

        Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[27])));
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[50])));
        *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[23])), Var_88);
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_110;
        MR_Word Var_111;

        Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[27])));
        Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[52])));
        *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[23])), Var_110);
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_14;
        MR_Word Var_15;

        Var_15 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[56])));
        Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[28])));
        *ReasonPieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__mark_tail_calls_scalar_common_1[54])), Var_14);
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
      *ProcWarnParams_6 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_2[4]);
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

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 214, &WarnNonTailSelfRecBool_6);
  switch (WarnNonTailSelfRecBool_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnNonTailSelfRecOpt_7 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnNonTailSelfRecOpt_7 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 215, &WarnNonTailMutualRecBool_8);
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
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____at_tail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____at_tail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_tail_calls____Unify____later_rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_tail_calls____Compare____later_rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0);
  MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0);
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
