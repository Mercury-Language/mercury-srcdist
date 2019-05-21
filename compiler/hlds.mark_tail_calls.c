/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2017-08-05
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.mark_tail_calls. */
/* :- implementation. */

/*
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#include "hlds.mark_tail_calls.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_self_tail_rec_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_self_tail_rec_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_self_tail_rec_calls_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[9];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[9];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[9];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_self_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_self_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_self_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1];

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[3];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[3];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0[2];

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail0_8,
  MR_Word hlds__mark_tail_calls__Case0_9,
  MR_Word * hlds__mark_tail_calls__Case_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_20,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_disj_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail0_8,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_0_13,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_16,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_18);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__HeadVar__5_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_7,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_4_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_5_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word hlds__mark_tail_calls__Params_12,
  MR_Word hlds__mark_tail_calls__ModuleInfo_13,
  MR_Word hlds__mark_tail_calls__SCC_14,
  MR_Word hlds__mark_tail_calls__PredId_15,
  MR_Integer hlds__mark_tail_calls__ProcId_16,
  MR_Word hlds__mark_tail_calls__PredInfo_17,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59,
  MR_Word * hlds__mark_tail_calls__WasProcChanged_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_61);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word hlds__mark_tail_calls__Goal0_7,
  MR_Word * hlds__mark_tail_calls__Goal_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word * hlds__mark_tail_calls__AtTail_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_139);

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__Context_9,
  MR_Word hlds__mark_tail_calls__AtTail_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_17);

static void MR_CALL 
hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__WarnOrError_9,
  MR_Word hlds__mark_tail_calls__Context_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_27);

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__Before_3,
  MR_Word * hlds__mark_tail_calls__After_4);

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_3,
  MR_Word * hlds__mark_tail_calls__SeenLaterRecCall_4);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word hlds__mark_tail_calls__ToVar_5,
  MR_Word hlds__mark_tail_calls__FromVar_6,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_6,
  MR_Word hlds__mark_tail_calls__Types_7,
  MR_Word hlds__mark_tail_calls__Modes_8,
  MR_Word hlds__mark_tail_calls__Vars_9,
  MR_Word * hlds__mark_tail_calls__Outputs_10);

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void);

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_output_args_2_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[24][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[5][1];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[2][10];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[1][4];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "self-recursive call is not tail recursive."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not tail recursive."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains no recursive calls at all,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: the code defining this"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mutually recursive call to"))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 10))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[3]))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____at_tail_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____at_tail_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "at_tail",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0 = {
  (MR_String) "call_is_self_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1 = {
  (MR_String) "call_is_mutual_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "call_is_self_or_mutual_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0 = {
  (MR_String) "not_found_any_rec_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1 = {
  (MR_String) "found_any_rec_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_any_rec_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_0 = {
  (MR_String) "not_found_self_tail_rec_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_1 = {
  (MR_String) "found_self_tail_rec_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_self_tail_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_self_tail_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_self_tail_rec_calls_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_self_tail_rec_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_self_tail_rec_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_self_tail_rec_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_self_tail_rec_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_self_tail_rec_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_self_tail_rec_calls_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0 = {
  (MR_String) "have_seen_later_rec_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1 = {
  (MR_String) "have_not_seen_later_rec_call",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "later_rec_call",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_self_tail_rec_calls_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[9] = {
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_cur_proc",
  (MR_String) "mtc_cur_scc",
  (MR_String) "mtc_vartypes",
  (MR_String) "mtc_params",
  (MR_String) "mtc_any_rec_calls",
  (MR_String) "mtc_self_tail_rec_calls",
  (MR_String) "mtc_error_specs"
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[9] = {
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_rec_calls_info",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_0 = {
  (MR_String) "do_not_record_self_recursion",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_1 = {
  (MR_String) "record_self_recursion_and_set_event",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_self_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_self_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_self_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_record_self_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_self_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_self_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_self_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_mutual_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1 = {
  (MR_String) "warn_non_tail_mutual_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_mutual_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_self_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1 = {
  (MR_String) "warn_non_tail_self_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_self_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_self_rec_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4] = {
  (MR_String) "self_rec_goal_feature",
  (MR_String) "mutual_rec_goal_feature",
  (MR_String) "should_record_self_rec",
  (MR_String) "warn_params"
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0 = {
  (MR_String) "tail_rec_params",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "tail_rec_params",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0 = {
  (MR_String) "warn_non_tail_rec_params",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "warn_non_tail_rec_params",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0 = {
  (MR_String) "proc_was_not_changed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1 = {
  (MR_String) "proc_may_have_been_changed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "was_proc_changed",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0
};

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_30 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_31 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_30 == hlds__mark_tail_calls__CastY_31);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__mark_tail_calls__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word hlds__mark_tail_calls__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word hlds__mark_tail_calls__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word hlds__mark_tail_calls__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word hlds__mark_tail_calls__ArgX7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY7_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word hlds__mark_tail_calls__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word hlds__mark_tail_calls__Var_22;

      hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__Var_22, hlds__mark_tail_calls__ArgX1_4, hlds__mark_tail_calls__ArgY1_5);
      hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_22 == (MR_Integer) 0);
      hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
      if (hlds__mark_tail_calls__succeeded)
        *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_22;
      else
      {
        MR_Word hlds__mark_tail_calls__Var_23;

        hlds__hlds_pred____Compare____pred_info_0_0(&hlds__mark_tail_calls__Var_23, hlds__mark_tail_calls__ArgX2_6, hlds__mark_tail_calls__ArgY2_7);
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_23 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_23;
        else
        {
          MR_Word hlds__mark_tail_calls__Var_24;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&hlds__mark_tail_calls__Var_24, hlds__mark_tail_calls__ArgX3_8, hlds__mark_tail_calls__ArgY3_9);
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_24 == (MR_Integer) 0);
          hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_24;
          else
          {
            MR_Word hlds__mark_tail_calls__Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], &hlds__mark_tail_calls__Var_25, ((MR_Box) (hlds__mark_tail_calls__ArgX4_10)), ((MR_Box) (hlds__mark_tail_calls__ArgY4_11)));
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_25 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_25;
            else
            {
              MR_Word hlds__mark_tail_calls__Var_26;

              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_2[0], &hlds__mark_tail_calls__Var_26, ((MR_Box) (hlds__mark_tail_calls__ArgX5_12)), ((MR_Box) (hlds__mark_tail_calls__ArgY5_13)));
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_26 == (MR_Integer) 0);
              hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
              if (hlds__mark_tail_calls__succeeded)
                *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_26;
              else
              {
                MR_Word hlds__mark_tail_calls__Var_27;

                hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&hlds__mark_tail_calls__Var_27, hlds__mark_tail_calls__ArgX6_14, hlds__mark_tail_calls__ArgY6_15);
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_27 == (MR_Integer) 0);
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                if (hlds__mark_tail_calls__succeeded)
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_27;
                else
                {
                  MR_Word hlds__mark_tail_calls__Var_28;
                  MR_Integer hlds__mark_tail_calls__Var_41 = (MR_Integer) hlds__mark_tail_calls__ArgX7_16;
                  MR_Integer hlds__mark_tail_calls__Var_42 = (MR_Integer) hlds__mark_tail_calls__ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__Var_28, hlds__mark_tail_calls__Var_41, hlds__mark_tail_calls__Var_42);
                  hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_28 == (MR_Integer) 0);
                  hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                  if (hlds__mark_tail_calls__succeeded)
                    *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_28;
                  else
                  {
                    MR_Word hlds__mark_tail_calls__Var_29;
                    MR_Integer hlds__mark_tail_calls__Var_43 = (MR_Integer) hlds__mark_tail_calls__ArgX8_18;
                    MR_Integer hlds__mark_tail_calls__Var_44 = (MR_Integer) hlds__mark_tail_calls__ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__Var_29, hlds__mark_tail_calls__Var_43, hlds__mark_tail_calls__Var_44);
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_29 == (MR_Integer) 0);
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                    if (hlds__mark_tail_calls__succeeded)
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_29;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[3], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__ArgX9_20)), ((MR_Box) (hlds__mark_tail_calls__ArgY9_21)));
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
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_15 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_16 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_15 == hlds__mark_tail_calls__CastY_16);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__mark_tail_calls__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[4], &hlds__mark_tail_calls__Var_12, ((MR_Box) (hlds__mark_tail_calls__ArgX1_4)), ((MR_Box) (hlds__mark_tail_calls__ArgY1_5)));
      hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_12 == (MR_Integer) 0);
      hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
      if (hlds__mark_tail_calls__succeeded)
        *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_12;
      else
      {
        MR_Word hlds__mark_tail_calls__Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[4], &hlds__mark_tail_calls__Var_13, ((MR_Box) (hlds__mark_tail_calls__ArgX2_6)), ((MR_Box) (hlds__mark_tail_calls__ArgY2_7)));
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_13 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_13;
        else
        {
          MR_Word hlds__mark_tail_calls__Var_14;
          MR_Integer hlds__mark_tail_calls__Var_21 = (MR_Integer) hlds__mark_tail_calls__ArgX3_8;
          MR_Integer hlds__mark_tail_calls__Var_22 = (MR_Integer) hlds__mark_tail_calls__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__Var_14, hlds__mark_tail_calls__Var_21, hlds__mark_tail_calls__Var_22);
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_14 == (MR_Integer) 0);
          hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_14;
          else
            hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__ArgX4_10, hlds__mark_tail_calls__ArgY4_11);
        }
      }
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_12 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_12 == hlds__mark_tail_calls__CastY_13);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__mark_tail_calls__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__Var_10;
      MR_Integer hlds__mark_tail_calls__Var_17 = (MR_Integer) hlds__mark_tail_calls__ArgX1_4;
      MR_Integer hlds__mark_tail_calls__Var_18 = (MR_Integer) hlds__mark_tail_calls__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__Var_10, hlds__mark_tail_calls__Var_17, hlds__mark_tail_calls__Var_18);
      hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_10 == (MR_Integer) 0);
      hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
      if (hlds__mark_tail_calls__succeeded)
        *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_10;
      else
      {
        MR_Word hlds__mark_tail_calls__Var_11;
        MR_Integer hlds__mark_tail_calls__Var_19 = (MR_Integer) hlds__mark_tail_calls__ArgX2_6;
        MR_Integer hlds__mark_tail_calls__Var_20 = (MR_Integer) hlds__mark_tail_calls__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__Var_11, hlds__mark_tail_calls__Var_19, hlds__mark_tail_calls__Var_20);
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_11 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__Var_11;
        else
        {
          MR_Integer hlds__mark_tail_calls__Var_21 = (MR_Integer) hlds__mark_tail_calls__ArgX3_8;
          MR_Integer hlds__mark_tail_calls__Var_22 = (MR_Integer) hlds__mark_tail_calls__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Var_21, hlds__mark_tail_calls__Var_22);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_21 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_22 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_21 == hlds__mark_tail_calls__CastY_22);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__mark_tail_calls__TypeInfo_26_26;
      MR_Word hlds__mark_tail_calls__TypeInfo_27_27;
      MR_Word hlds__mark_tail_calls__TypeInfo_28_28;
      MR_Word hlds__mark_tail_calls__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word hlds__mark_tail_calls__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word hlds__mark_tail_calls__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word hlds__mark_tail_calls__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word hlds__mark_tail_calls__ArgX7_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word hlds__mark_tail_calls__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));

      hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__ArgX1_3, hlds__mark_tail_calls__ArgY1_4);
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(hlds__mark_tail_calls__ArgX2_5, hlds__mark_tail_calls__ArgY2_6);
        if (hlds__mark_tail_calls__succeeded)
        {
          hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(hlds__mark_tail_calls__ArgX3_7, hlds__mark_tail_calls__ArgY3_8);
          if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__TypeInfo_26_26 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0];
            hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_26_26, ((MR_Box) (hlds__mark_tail_calls__ArgX4_9)), ((MR_Box) (hlds__mark_tail_calls__ArgY4_10)));
            if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__TypeInfo_27_27 = (MR_Word) &hlds__mark_tail_calls_scalar_common_2[0];
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_27_27, ((MR_Box) (hlds__mark_tail_calls__ArgX5_11)), ((MR_Box) (hlds__mark_tail_calls__ArgY5_12)));
              if (hlds__mark_tail_calls__succeeded)
              {
                hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(hlds__mark_tail_calls__ArgX6_13, hlds__mark_tail_calls__ArgY6_14);
                if (hlds__mark_tail_calls__succeeded)
                {
                  hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX7_15 == hlds__mark_tail_calls__ArgY7_16);
                  if (hlds__mark_tail_calls__succeeded)
                  {
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX8_17 == hlds__mark_tail_calls__ArgY8_18);
                    if (hlds__mark_tail_calls__succeeded)
                    {
                      hlds__mark_tail_calls__TypeInfo_28_28 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[3];
                      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_28_28, ((MR_Box) (hlds__mark_tail_calls__ArgX9_19)), ((MR_Box) (hlds__mark_tail_calls__ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_11 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_12 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_11 == hlds__mark_tail_calls__CastY_12);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__mark_tail_calls__TypeInfo_14_14;
      MR_Word hlds__mark_tail_calls__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__mark_tail_calls__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word hlds__mark_tail_calls__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));

      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[4], ((MR_Box) (hlds__mark_tail_calls__ArgX1_3)), ((MR_Box) (hlds__mark_tail_calls__ArgY1_4)));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__TypeInfo_14_14 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[4];
        hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_14_14, ((MR_Box) (hlds__mark_tail_calls__ArgX2_5)), ((MR_Box) (hlds__mark_tail_calls__ArgY2_6)));
        if (hlds__mark_tail_calls__succeeded)
        {
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX3_7 == hlds__mark_tail_calls__ArgY3_8);
          if (hlds__mark_tail_calls__succeeded)
            hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(hlds__mark_tail_calls__ArgX4_9, hlds__mark_tail_calls__ArgY4_10);
        }
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_9 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_10 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_9 == hlds__mark_tail_calls__CastY_10);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__mark_tail_calls__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word hlds__mark_tail_calls__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX1_3 == hlds__mark_tail_calls__ArgY1_4);
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX2_5 == hlds__mark_tail_calls__ArgY2_6);
        if (hlds__mark_tail_calls__succeeded)
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX3_7 == hlds__mark_tail_calls__ArgY3_8);
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_12 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_12 == hlds__mark_tail_calls__CastY_13);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word hlds__mark_tail_calls__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__mark_tail_calls__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[2], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__Var_16)), ((MR_Box) (hlds__mark_tail_calls__ArgY1_5)));
      }
      else
        *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word hlds__mark_tail_calls__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word hlds__mark_tail_calls__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__mark_tail_calls__Var_18 = (MR_Integer) hlds__mark_tail_calls__Var_17;
        MR_Integer hlds__mark_tail_calls__Var_19 = (MR_Integer) hlds__mark_tail_calls__ArgY1_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Var_18, hlds__mark_tail_calls__Var_19);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_7 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_8 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_7 == hlds__mark_tail_calls__CastY_8);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word hlds__mark_tail_calls__TypeInfo_9_9;
      MR_Word hlds__mark_tail_calls__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_4;

      hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        hlds__mark_tail_calls__TypeInfo_9_9 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[2];
        hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_9_9, ((MR_Box) (hlds__mark_tail_calls__ArgX1_3)), ((MR_Box) (hlds__mark_tail_calls__ArgY1_4)));
      }
    }
    else
    {
      MR_Word hlds__mark_tail_calls__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ArgY1_6;

      hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__ArgX1_5 == hlds__mark_tail_calls__ArgY1_6);
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail0_8,
  MR_Word hlds__mark_tail_calls__Case0_9,
  MR_Word * hlds__mark_tail_calls__Case_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_20,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_21)
{
  {
    MR_Word hlds__mark_tail_calls__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Goal_16;
    MR_Word hlds__mark_tail_calls__AtTail_17;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Goal0_15, &hlds__mark_tail_calls__Goal_16, hlds__mark_tail_calls__AtTail0_8, &hlds__mark_tail_calls__AtTail_17, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_20, hlds__mark_tail_calls__STATE_VARIABLE_Info_21);
    if (((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_17)) == (MR_mktag((MR_Integer) 0))))
      *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_19 = hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_18;
    else
    {
      MR_Word hlds__mark_tail_calls__AtTailSeenLaterRecCall_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_17, (MR_Integer) 0)));

      switch (hlds__mark_tail_calls__AtTailSeenLaterRecCall_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_19 = hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_18;
          break;
        case (MR_Integer) 0:
          *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_19 = (MR_Integer) 0;
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_tail_calls__Case_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MainConsId_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Goal_16));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_disj_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail0_8,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_0_13,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_16,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_18)
{
  {
    MR_Word hlds__mark_tail_calls__AtTail_12;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_0_13, hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_14, hlds__mark_tail_calls__AtTail0_8, &hlds__mark_tail_calls__AtTail_12, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_17, hlds__mark_tail_calls__STATE_VARIABLE_Info_18);
    if (((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_12)) == (MR_mktag((MR_Integer) 0))))
      *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_16 = hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_15;
    else
    {
      MR_Word hlds__mark_tail_calls__AtTailSeenLaterRecCall_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_12, (MR_Integer) 0)));

      switch (hlds__mark_tail_calls__AtTailSeenLaterRecCall_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_16 = hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_0_15;
          break;
        case (MR_Integer) 0:
          *hlds__mark_tail_calls__STATE_VARIABLE_SeenLaterRecCall_16 = (MR_Integer) 0;
          break;
      }
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_10,
  MR_Word hlds__mark_tail_calls__PredId_11,
  MR_Integer hlds__mark_tail_calls__ProcId_12,
  MR_Word hlds__mark_tail_calls__PredInfo_13,
  MR_Word hlds__mark_tail_calls__SCCMap_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_23,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_24,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_25)
{
  {
    MR_Word hlds__mark_tail_calls__Globals_17;
    MR_Word hlds__mark_tail_calls__Params_18;
    MR_Word hlds__mark_tail_calls__ProcParams_19;
    MR_Word hlds__mark_tail_calls__SCC_20;
    MR_Word hlds__mark_tail_calls__Var_26;
    MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_33;
    MR_Word hlds__mark_tail_calls__ExecTraceTailRec_34;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecBool_45;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecOpt_46;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecBool_47;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecOpt_48;
    MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_55;
    MR_Box hlds__mark_tail_calls__conv0_SCC_20;
    MR_Word hlds__mark_tail_calls___WasProcChanged_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__ModuleInfo_10, &hlds__mark_tail_calls__Globals_17);
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 31, &hlds__mark_tail_calls__WarnNonTailSelfRecBool_45);
    switch (hlds__mark_tail_calls__WarnNonTailSelfRecBool_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_46 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_46 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 32, &hlds__mark_tail_calls__WarnNonTailMutualRecBool_47);
    switch (hlds__mark_tail_calls__WarnNonTailMutualRecBool_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_48 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_48 = (MR_Integer) 1;
        break;
    }
    {
      hlds__mark_tail_calls__WarnNonTailRecParams_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_33, 0) = ((MR_Box) (((MR_Integer) 0 | ((((hlds__mark_tail_calls__WarnNonTailSelfRecOpt_46 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__WarnNonTailMutualRecOpt_48 << (MR_Integer) 2)))))));
    }
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 140, &hlds__mark_tail_calls__ExecTraceTailRec_34);
    switch (hlds__mark_tail_calls__ExecTraceTailRec_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            hlds__mark_tail_calls__Params_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 3) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecParams_33));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__mark_tail_calls__Params_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[4])));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, 3) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecParams_33));
          }
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_22, &hlds__mark_tail_calls__MaybeRequireTailRec_55);
    if ((hlds__mark_tail_calls__MaybeRequireTailRec_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__mark_tail_calls__ProcParams_19 = hlds__mark_tail_calls__Params_18;
    else
    {
      MR_Word hlds__mark_tail_calls__Pragma_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_55, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ProcWarnParams_58;
      MR_Word hlds__mark_tail_calls__Var_64;
      MR_Word hlds__mark_tail_calls__Var_65;
      MR_Word hlds__mark_tail_calls__Var_66;
      MR_Word hlds__mark_tail_calls__Var_67;

      if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_56)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__mark_tail_calls__WarnOrError_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_56, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__RecType_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_56, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__SelfRec_62;
        MR_Word hlds__mark_tail_calls__MutualRec_63;
        MR_Word hlds__mark_tail_calls___Context_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_56, (MR_Integer) 1)));

        switch (hlds__mark_tail_calls__RecType_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__mark_tail_calls__SelfRec_62 = (MR_Integer) 1;
              hlds__mark_tail_calls__MutualRec_63 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 0:
            {
              hlds__mark_tail_calls__SelfRec_62 = (MR_Integer) 1;
              hlds__mark_tail_calls__MutualRec_63 = (MR_Integer) 0;
            }
            break;
        }
        {
          hlds__mark_tail_calls__ProcWarnParams_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcWarnParams_58, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_59 | ((((hlds__mark_tail_calls__SelfRec_62 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_63 << (MR_Integer) 2)))))));
        }
      }
      else
      {
        hlds__mark_tail_calls__ProcWarnParams_58 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
      }
      hlds__mark_tail_calls__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, (MR_Integer) 0)));
      hlds__mark_tail_calls__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, (MR_Integer) 1)));
      hlds__mark_tail_calls__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, (MR_Integer) 2)));
      hlds__mark_tail_calls__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_18, (MR_Integer) 3)));
      {
        hlds__mark_tail_calls__ProcParams_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_19, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_64));
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_19, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_65));
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_19, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_66));
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_19, 3) = ((MR_Box) (hlds__mark_tail_calls__ProcWarnParams_58));
      }
    }
    {
      hlds__mark_tail_calls__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_26, 0) = ((MR_Box) (hlds__mark_tail_calls__PredId_11));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_26, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_12));
    }
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__SCCMap_14, ((MR_Box) (hlds__mark_tail_calls__Var_26)), &hlds__mark_tail_calls__conv0_SCC_20);
    hlds__mark_tail_calls__SCC_20 = ((MR_Word) hlds__mark_tail_calls__conv0_SCC_20);
    hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(hlds__mark_tail_calls__ProcParams_19, hlds__mark_tail_calls__ModuleInfo_10, hlds__mark_tail_calls__SCC_20, hlds__mark_tail_calls__PredId_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__PredInfo_13, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_22, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_23, &hlds__mark_tail_calls___WasProcChanged_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_24, hlds__mark_tail_calls__STATE_VARIABLE_Specs_25);
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(
  MR_Word hlds__mark_tail_calls__SCCMap_9,
  MR_Word hlds__mark_tail_calls__PredId_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_19,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_20,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_22)
{
  {
    MR_Word hlds__mark_tail_calls__Globals_14;
    MR_Word hlds__mark_tail_calls__Params_15;
    MR_Word hlds__mark_tail_calls__ProcIds_16;
    MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_27;
    MR_Word hlds__mark_tail_calls__ExecTraceTailRec_28;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecBool_39;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecOpt_40;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecBool_41;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecOpt_42;

    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_17, &hlds__mark_tail_calls__Globals_14);
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 31, &hlds__mark_tail_calls__WarnNonTailSelfRecBool_39);
    switch (hlds__mark_tail_calls__WarnNonTailSelfRecBool_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_40 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_40 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 32, &hlds__mark_tail_calls__WarnNonTailMutualRecBool_41);
    switch (hlds__mark_tail_calls__WarnNonTailMutualRecBool_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_42 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_42 = (MR_Integer) 1;
        break;
    }
    {
      hlds__mark_tail_calls__WarnNonTailRecParams_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_27, 0) = ((MR_Box) (((MR_Integer) 0 | ((((hlds__mark_tail_calls__WarnNonTailSelfRecOpt_40 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__WarnNonTailMutualRecOpt_42 << (MR_Integer) 2)))))));
    }
    libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 140, &hlds__mark_tail_calls__ExecTraceTailRec_28);
    switch (hlds__mark_tail_calls__ExecTraceTailRec_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            hlds__mark_tail_calls__Params_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 3) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecParams_27));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__mark_tail_calls__Params_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[4])));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_15, 3) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecParams_27));
          }
        }
        break;
    }
    hlds__mark_tail_calls__ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_19);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(hlds__mark_tail_calls__Params_15, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_17, hlds__mark_tail_calls__SCCMap_9, hlds__mark_tail_calls__PredId_10, hlds__mark_tail_calls__ProcIds_16, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_19, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_20, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_22);
    *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_18 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_17;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__HeadVar__5_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_7,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__mark_tail_calls__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_9 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8;
      *hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_7 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer hlds__mark_tail_calls__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__5_5, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__5_5, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__ProcInfo0_28;
      MR_Word hlds__mark_tail_calls__ProcParams_29;
      MR_Word hlds__mark_tail_calls__SCC_30;
      MR_Word hlds__mark_tail_calls__ProcInfo_31;
      MR_Word hlds__mark_tail_calls__WasProcChanged_32;
      MR_Word hlds__mark_tail_calls__Var_37;
      MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_38_38;
      MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_39_39;
      MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_47;
      MR_Box hlds__mark_tail_calls__conv0_SCC_30;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6, hlds__mark_tail_calls__ProcId_24, &hlds__mark_tail_calls__ProcInfo0_28);
      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__ProcInfo0_28, &hlds__mark_tail_calls__MaybeRequireTailRec_47);
      if ((hlds__mark_tail_calls__MaybeRequireTailRec_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__mark_tail_calls__ProcParams_29 = hlds__mark_tail_calls__HeadVar__1_1;
      else
      {
        MR_Word hlds__mark_tail_calls__Pragma_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_47, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__ProcWarnParams_50;
        MR_Word hlds__mark_tail_calls__Var_56;
        MR_Word hlds__mark_tail_calls__Var_57;
        MR_Word hlds__mark_tail_calls__Var_58;
        MR_Word hlds__mark_tail_calls__Var_59;

        if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_48)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word hlds__mark_tail_calls__WarnOrError_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 0)))) & (MR_Integer) 1);
          MR_Word hlds__mark_tail_calls__RecType_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__mark_tail_calls__SelfRec_54;
          MR_Word hlds__mark_tail_calls__MutualRec_55;
          MR_Word hlds__mark_tail_calls___Context_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 1)));

          switch (hlds__mark_tail_calls__RecType_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                hlds__mark_tail_calls__SelfRec_54 = (MR_Integer) 1;
                hlds__mark_tail_calls__MutualRec_55 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                hlds__mark_tail_calls__SelfRec_54 = (MR_Integer) 1;
                hlds__mark_tail_calls__MutualRec_55 = (MR_Integer) 0;
              }
              break;
          }
          {
            hlds__mark_tail_calls__ProcWarnParams_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcWarnParams_50, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_51 | ((((hlds__mark_tail_calls__SelfRec_54 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_55 << (MR_Integer) 2)))))));
          }
        }
        else
        {
          hlds__mark_tail_calls__ProcWarnParams_50 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
        }
        hlds__mark_tail_calls__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        hlds__mark_tail_calls__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        hlds__mark_tail_calls__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
        hlds__mark_tail_calls__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
        {
          hlds__mark_tail_calls__ProcParams_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_29, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_56));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_29, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_57));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_29, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_58));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_29, 3) = ((MR_Box) (hlds__mark_tail_calls__ProcWarnParams_50));
        }
      }
      {
        hlds__mark_tail_calls__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_37, 0) = ((MR_Box) (hlds__mark_tail_calls__HeadVar__4_4));
        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_37, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_24));
      }
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__HeadVar__3_3, ((MR_Box) (hlds__mark_tail_calls__Var_37)), &hlds__mark_tail_calls__conv0_SCC_30);
      hlds__mark_tail_calls__SCC_30 = ((MR_Word) hlds__mark_tail_calls__conv0_SCC_30);
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(hlds__mark_tail_calls__ProcParams_29, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__SCC_30, hlds__mark_tail_calls__HeadVar__4_4, hlds__mark_tail_calls__ProcId_24, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6, hlds__mark_tail_calls__ProcInfo0_28, &hlds__mark_tail_calls__ProcInfo_31, &hlds__mark_tail_calls__WasProcChanged_32, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_38_38);
      switch (hlds__mark_tail_calls__WasProcChanged_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__pred_info_set_proc_info_4_p_0(hlds__mark_tail_calls__ProcId_24, hlds__mark_tail_calls__ProcInfo_31, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6, &hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_39_39);
          break;
        case (MR_Integer) 0:
          hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_39_39 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6;
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__mark_tail_calls__next_value_of_HeadVar__5_5 = hlds__mark_tail_calls__ProcIds_25;
        MR_Word hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_PredInfo_0_6 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_39_39;
        MR_Word hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_Specs_0_8 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_38_38;

        hlds__mark_tail_calls__HeadVar__5_5 = hlds__mark_tail_calls__next_value_of_HeadVar__5_5;
        hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_6 = hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_PredInfo_0_6;
        hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8 = hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_Specs_0_8;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_3_p_0(
  MR_Word hlds__mark_tail_calls__DepInfo_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word hlds__mark_tail_calls__BottomUpSCCsEntryPoints_9;

    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_10, hlds__mark_tail_calls__DepInfo_4, &hlds__mark_tail_calls__BottomUpSCCsEntryPoints_9);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_4_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_5[0], hlds__mark_tail_calls__BottomUpSCCsEntryPoints_9, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_10, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_11);
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_4_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_4 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word hlds__mark_tail_calls__SCCEntry_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__SCCEntries_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__SCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_10, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__Var_18;
      MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_19_19;
      MR_Word hlds__mark_tail_calls___CalledFromHigherSCC_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_10, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls___Exported_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_10, (MR_Integer) 2)));

      hlds__mark_tail_calls__Var_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__mark_tail_calls__SCC_13);
      hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_5_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__SCC_13, hlds__mark_tail_calls__Var_18, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_3, &hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_19_19);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__mark_tail_calls__next_value_of_HeadVar__2_2 = hlds__mark_tail_calls__SCCEntries_11;
        MR_Word hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_19_19;

        hlds__mark_tail_calls__HeadVar__2_2 = hlds__mark_tail_calls__next_value_of_HeadVar__2_2;
        hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_3 = hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_5_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4;
    else
    {
      MR_Word hlds__mark_tail_calls__TypeCtorInfo_34_34;
      MR_Word hlds__mark_tail_calls__TypeCtorInfo_35_35;
      MR_Word hlds__mark_tail_calls__TypeCtorInfo_37_37;
      MR_Word hlds__mark_tail_calls__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__PredProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__PredProcId_13, (MR_Integer) 0)));
      MR_Integer hlds__mark_tail_calls__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__PredProcId_13, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__PredTable0_18;
      MR_Word hlds__mark_tail_calls__PredInfo0_19;
      MR_Word hlds__mark_tail_calls__ProcTable0_20;
      MR_Word hlds__mark_tail_calls__ProcInfo0_21;
      MR_Word hlds__mark_tail_calls__ProcParams_22;
      MR_Word hlds__mark_tail_calls__ProcInfo_23;
      MR_Word hlds__mark_tail_calls__WasProcChanged_24;
      MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_41;
      MR_Box hlds__mark_tail_calls__conv0_PredInfo0_19;
      MR_Box hlds__mark_tail_calls__conv1_ProcInfo0_21;
      MR_Word hlds__mark_tail_calls___Specs_25;

      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4, &hlds__mark_tail_calls__PredTable0_18);
      hlds__mark_tail_calls__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      hlds__mark_tail_calls__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      mercury__map__lookup_3_p_0(hlds__mark_tail_calls__TypeCtorInfo_34_34, hlds__mark_tail_calls__TypeCtorInfo_35_35, hlds__mark_tail_calls__PredTable0_18, ((MR_Box) (hlds__mark_tail_calls__PredId_16)), &hlds__mark_tail_calls__conv0_PredInfo0_19);
      hlds__mark_tail_calls__PredInfo0_19 = ((MR_Word) hlds__mark_tail_calls__conv0_PredInfo0_19);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__mark_tail_calls__PredInfo0_19, &hlds__mark_tail_calls__ProcTable0_20);
      hlds__mark_tail_calls__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__mark_tail_calls__TypeCtorInfo_37_37, hlds__mark_tail_calls__ProcTable0_20, hlds__mark_tail_calls__ProcId_17, &hlds__mark_tail_calls__conv1_ProcInfo0_21);
      hlds__mark_tail_calls__ProcInfo0_21 = ((MR_Word) hlds__mark_tail_calls__conv1_ProcInfo0_21);
      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__ProcInfo0_21, &hlds__mark_tail_calls__MaybeRequireTailRec_41);
      if ((hlds__mark_tail_calls__MaybeRequireTailRec_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__mark_tail_calls__ProcParams_22 = hlds__mark_tail_calls__HeadVar__1_1;
      else
      {
        MR_Word hlds__mark_tail_calls__Pragma_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_41, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__ProcWarnParams_44;
        MR_Word hlds__mark_tail_calls__Var_50;
        MR_Word hlds__mark_tail_calls__Var_51;
        MR_Word hlds__mark_tail_calls__Var_52;
        MR_Word hlds__mark_tail_calls__Var_53;

        if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_42)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word hlds__mark_tail_calls__WarnOrError_45 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_42, (MR_Integer) 0)))) & (MR_Integer) 1);
          MR_Word hlds__mark_tail_calls__RecType_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_42, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__mark_tail_calls__SelfRec_48;
          MR_Word hlds__mark_tail_calls__MutualRec_49;
          MR_Word hlds__mark_tail_calls___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_42, (MR_Integer) 1)));

          switch (hlds__mark_tail_calls__RecType_46) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                hlds__mark_tail_calls__SelfRec_48 = (MR_Integer) 1;
                hlds__mark_tail_calls__MutualRec_49 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                hlds__mark_tail_calls__SelfRec_48 = (MR_Integer) 1;
                hlds__mark_tail_calls__MutualRec_49 = (MR_Integer) 0;
              }
              break;
          }
          {
            hlds__mark_tail_calls__ProcWarnParams_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcWarnParams_44, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_45 | ((((hlds__mark_tail_calls__SelfRec_48 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_49 << (MR_Integer) 2)))))));
          }
        }
        else
        {
          hlds__mark_tail_calls__ProcWarnParams_44 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
        }
        hlds__mark_tail_calls__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        hlds__mark_tail_calls__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        hlds__mark_tail_calls__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
        hlds__mark_tail_calls__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
        {
          hlds__mark_tail_calls__ProcParams_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_22, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_50));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_22, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_51));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_22, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_52));
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__ProcParams_22, 3) = ((MR_Box) (hlds__mark_tail_calls__ProcWarnParams_44));
        }
      }
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(hlds__mark_tail_calls__ProcParams_22, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__PredId_16, hlds__mark_tail_calls__ProcId_17, hlds__mark_tail_calls__PredInfo0_19, hlds__mark_tail_calls__ProcInfo0_21, &hlds__mark_tail_calls__ProcInfo_23, &hlds__mark_tail_calls__WasProcChanged_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__mark_tail_calls___Specs_25);
      switch (hlds__mark_tail_calls__WasProcChanged_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word hlds__mark_tail_calls__ProcTable_26;
            MR_Word hlds__mark_tail_calls__PredInfo_27;
            MR_Word hlds__mark_tail_calls__PredTable_28;

            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_37_37, hlds__mark_tail_calls__ProcId_17, ((MR_Box) (hlds__mark_tail_calls__ProcInfo_23)), hlds__mark_tail_calls__ProcTable0_20, &hlds__mark_tail_calls__ProcTable_26);
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__mark_tail_calls__ProcTable_26, hlds__mark_tail_calls__PredInfo0_19, &hlds__mark_tail_calls__PredInfo_27);
            mercury__map__det_update_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_34_34, hlds__mark_tail_calls__TypeCtorInfo_35_35, ((MR_Box) (hlds__mark_tail_calls__PredId_16)), ((MR_Box) (hlds__mark_tail_calls__PredInfo_27)), hlds__mark_tail_calls__PredTable0_18, &hlds__mark_tail_calls__PredTable_28);
            hlds__hlds_module__module_info_set_preds_3_p_0(hlds__mark_tail_calls__PredTable_28, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_32_32);
          }
          break;
        case (MR_Integer) 0:
          hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_32_32 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4;
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__mark_tail_calls__next_value_of_HeadVar__3_3 = hlds__mark_tail_calls__PredProcIds_14;
        MR_Word hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_32_32;

        hlds__mark_tail_calls__HeadVar__3_3 = hlds__mark_tail_calls__next_value_of_HeadVar__3_3;
        hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4 = hlds__mark_tail_calls__next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word hlds__mark_tail_calls__Params_12,
  MR_Word hlds__mark_tail_calls__ModuleInfo_13,
  MR_Word hlds__mark_tail_calls__SCC_14,
  MR_Word hlds__mark_tail_calls__PredId_15,
  MR_Integer hlds__mark_tail_calls__ProcId_16,
  MR_Word hlds__mark_tail_calls__PredInfo_17,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59,
  MR_Word * hlds__mark_tail_calls__WasProcChanged_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_61)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Detism_21;
    MR_Word hlds__mark_tail_calls__SolnCount_23;
    MR_Word hlds__mark_tail_calls___CanFail_22;

    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__Detism_21);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_21, &hlds__mark_tail_calls___CanFail_22, &hlds__mark_tail_calls__SolnCount_23);
    switch (hlds__mark_tail_calls__SolnCount_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__WasProcChanged_19 = (MR_Integer) 0;
          *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58;
          *hlds__mark_tail_calls__STATE_VARIABLE_Specs_61 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__MaybeSelfFeature_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_12, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__MaybeMutualFeature_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_12, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__MaybeRecordSelf_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_12, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Params_12, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__Var_62;
          MR_Word hlds__mark_tail_calls__Var_63;
          MR_Word hlds__mark_tail_calls___WarnOrError_28;

          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__MaybeSelfFeature_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__MaybeMutualFeature_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__MaybeRecordSelf_26 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
              {
                hlds__mark_tail_calls___WarnOrError_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_27, (MR_Integer) 0)))) & (MR_Integer) 1);
                hlds__mark_tail_calls__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_27, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                hlds__mark_tail_calls__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_27, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_62 == (MR_Integer) 0);
                if (hlds__mark_tail_calls__succeeded)
                  hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Var_63 == (MR_Integer) 0);
              }
            }
          }
          if (hlds__mark_tail_calls__succeeded)
          {
            *hlds__mark_tail_calls__WasProcChanged_19 = (MR_Integer) 0;
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_61 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60;
            *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58;
          }
          else
          {
            MR_Word hlds__mark_tail_calls__Types_29;
            MR_Word hlds__mark_tail_calls__Goal0_30;
            MR_Word hlds__mark_tail_calls__Modes_31;
            MR_Word hlds__mark_tail_calls__HeadVars_32;
            MR_Word hlds__mark_tail_calls__VarTypes_33;
            MR_Word hlds__mark_tail_calls__Outputs_34;
            MR_Word hlds__mark_tail_calls__Info0_35;
            MR_Word hlds__mark_tail_calls__Goal_36;
            MR_Word hlds__mark_tail_calls__Info_38;
            MR_Word hlds__mark_tail_calls__FoundAnyRecCalls_45;
            MR_Word hlds__mark_tail_calls__FoundSelfTailRecCalls_46;
            MR_Word hlds__mark_tail_calls__GoalSpecs_47;
            MR_Word hlds__mark_tail_calls__Var_64;
            MR_Word hlds__mark_tail_calls__Var_68;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_69_69;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_71_71;
            MR_Word hlds__mark_tail_calls__OutputsPrime_80;
            MR_Word hlds__mark_tail_calls__Var_37;
            MR_Word hlds__mark_tail_calls__Var_39;
            MR_Word hlds__mark_tail_calls__Var_40;
            MR_Word hlds__mark_tail_calls__Var_41;
            MR_Word hlds__mark_tail_calls__Var_42;
            MR_Word hlds__mark_tail_calls__Var_43;
            MR_Word hlds__mark_tail_calls__Var_44;

            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_17, &hlds__mark_tail_calls__Types_29);
            hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__Goal0_30);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__Modes_31);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__HeadVars_32);
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__VarTypes_33);
            hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_13, hlds__mark_tail_calls__Types_29, hlds__mark_tail_calls__Modes_31, hlds__mark_tail_calls__HeadVars_32, &hlds__mark_tail_calls__OutputsPrime_80);
            if (hlds__mark_tail_calls__succeeded)
              hlds__mark_tail_calls__Outputs_34 = hlds__mark_tail_calls__OutputsPrime_80;
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
                return;
              }
            }
            {
              hlds__mark_tail_calls__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_64, 0) = ((MR_Box) (hlds__mark_tail_calls__PredId_15));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_64, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_16));
            }
            {
              hlds__mark_tail_calls__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 0) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_13));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 1) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_17));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_64));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 3) = ((MR_Box) (hlds__mark_tail_calls__SCC_14));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 4) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_33));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 5) = ((MR_Box) (hlds__mark_tail_calls__Params_12));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 6) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_35, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__mark_tail_calls__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_68, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_34));
            }
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Goal0_30, &hlds__mark_tail_calls__Goal_36, hlds__mark_tail_calls__Var_68, &hlds__mark_tail_calls__Var_37, hlds__mark_tail_calls__Info0_35, &hlds__mark_tail_calls__Info_38);
            hlds__mark_tail_calls__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 0)));
            hlds__mark_tail_calls__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 1)));
            hlds__mark_tail_calls__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 2)));
            hlds__mark_tail_calls__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 3)));
            hlds__mark_tail_calls__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 4)));
            hlds__mark_tail_calls__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 5)));
            hlds__mark_tail_calls__FoundAnyRecCalls_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 6)))) & (MR_Integer) 1);
            hlds__mark_tail_calls__FoundSelfTailRecCalls_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            hlds__mark_tail_calls__GoalSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_38, (MR_Integer) 7)));
            hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_36, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_58, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_69_69);
            switch (hlds__mark_tail_calls__FoundAnyRecCalls_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__mark_tail_calls__STATE_VARIABLE_Specs_71_71 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_48;

                  hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_69_69, &hlds__mark_tail_calls__MaybeRequireTailRec_48);
                  if ((hlds__mark_tail_calls__MaybeRequireTailRec_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__mark_tail_calls__STATE_VARIABLE_Specs_71_71 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60;
                  else
                  {
                    MR_Word hlds__mark_tail_calls__RequireTailRecInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_48, (MR_Integer) 0)));
                    MR_Word hlds__mark_tail_calls__Context_52;
                    MR_Word hlds__mark_tail_calls__PredOrFunc_53;
                    MR_String hlds__mark_tail_calls__PredName_54;
                    MR_Integer hlds__mark_tail_calls__PredArity_55;
                    MR_Word hlds__mark_tail_calls__SimpleCallId_56;
                    MR_Word hlds__mark_tail_calls__Var_70;

                    if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailRecInfo_49)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word hlds__mark_tail_calls__Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_49, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_49, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                      hlds__mark_tail_calls__Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_49, (MR_Integer) 1)));
                    }
                    else
                      hlds__mark_tail_calls__Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__RequireTailRecInfo_49, (MR_Integer) 0)));
                    hlds__mark_tail_calls__PredOrFunc_53 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_17);
                    hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__mark_tail_calls__PredInfo_17, &hlds__mark_tail_calls__PredName_54);
                    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(hlds__mark_tail_calls__PredInfo_17, &hlds__mark_tail_calls__PredArity_55);
                    {
                      hlds__mark_tail_calls__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_70, 0) = ((MR_Box) (hlds__mark_tail_calls__PredName_54));
                    }
                    {
                      hlds__mark_tail_calls__SimpleCallId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_56, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_53));
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_56, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_70));
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_56, 2) = ((MR_Box) (hlds__mark_tail_calls__PredArity_55));
                    }
                    hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(hlds__mark_tail_calls__SimpleCallId_56, hlds__mark_tail_calls__Context_52, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_60, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_71_71);
                  }
                }
                break;
            }
            switch (hlds__mark_tail_calls__MaybeRecordSelf_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_69_69;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__mark_tail_calls__TailCallEvents_57;

                  switch (hlds__mark_tail_calls__FoundSelfTailRecCalls_46) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__mark_tail_calls__TailCallEvents_57 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      hlds__mark_tail_calls__TailCallEvents_57 = (MR_Integer) 1;
                      break;
                  }
                  hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_57, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_69_69, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_59);
                }
                break;
            }
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__GoalSpecs_47, hlds__mark_tail_calls__STATE_VARIABLE_Specs_71_71);
            *hlds__mark_tail_calls__WasProcChanged_19 = (MR_Integer) 1;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_6)
{
  if ((hlds__mark_tail_calls__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *hlds__mark_tail_calls__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *hlds__mark_tail_calls__STATE_VARIABLE_Info_6 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5;
    *hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4 = hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3;
  }
  else
  {
    MR_Word hlds__mark_tail_calls__RevGoal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__RevGoals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__RevGoal_15;
    MR_Word hlds__mark_tail_calls__RevGoals_16;
    MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_23_23;
    MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_24_24;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__RevGoal0_13, &hlds__mark_tail_calls__RevGoal_15, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3, &hlds__mark_tail_calls__STATE_VARIABLE_AtTail_23_23, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_Info_24_24);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(hlds__mark_tail_calls__RevGoals0_14, &hlds__mark_tail_calls__RevGoals_16, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_23_23, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4, hlds__mark_tail_calls__STATE_VARIABLE_Info_24_24, hlds__mark_tail_calls__STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_tail_calls__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__RevGoal_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__RevGoals_16));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv7_Case_10;
    MR_Word hlds__mark_tail_calls__conv6_STATE_VARIABLE_SeenLaterRecCall_19;
    MR_Word hlds__mark_tail_calls__conv5_STATE_VARIABLE_Info_21;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv7_Case_10, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3), &hlds__mark_tail_calls__conv6_STATE_VARIABLE_SeenLaterRecCall_19, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv5_STATE_VARIABLE_Info_21);
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv7_Case_10));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv6_STATE_VARIABLE_SeenLaterRecCall_19));
    *hlds__mark_tail_calls__wrapper_arg_6 = ((MR_Box) (hlds__mark_tail_calls__conv5_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv2_STATE_VARIABLE_Disjunct_14;
    MR_Word hlds__mark_tail_calls__conv1_STATE_VARIABLE_SeenLaterRecCall_16;
    MR_Word hlds__mark_tail_calls__conv0_STATE_VARIABLE_Info_18;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv2_STATE_VARIABLE_Disjunct_14, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_SeenLaterRecCall_16, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv0_STATE_VARIABLE_Info_18);
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv2_STATE_VARIABLE_Disjunct_14));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv1_STATE_VARIABLE_SeenLaterRecCall_16));
    *hlds__mark_tail_calls__wrapper_arg_6 = ((MR_Box) (hlds__mark_tail_calls__conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word hlds__mark_tail_calls__Goal0_7,
  MR_Word * hlds__mark_tail_calls__Goal_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word * hlds__mark_tail_calls__AtTail_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_139)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_7, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
          hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
          *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__LHS_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__Unify0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__ModuleInfo_62;
          MR_Word hlds__mark_tail_calls__VarTypes_63;
          MR_Word hlds__mark_tail_calls__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__Var_215;
          MR_Word hlds__mark_tail_calls__Var_216;
          MR_Word hlds__mark_tail_calls__Var_217;
          MR_Word hlds__mark_tail_calls__Var_219;
          MR_Word hlds__mark_tail_calls__Var_220;
          MR_Word hlds__mark_tail_calls__Var_221;
          MR_Word hlds__mark_tail_calls__Var_222;

          *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
          hlds__mark_tail_calls__ModuleInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 0)));
          hlds__mark_tail_calls__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 1)));
          hlds__mark_tail_calls__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 2)));
          hlds__mark_tail_calls__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 3)));
          hlds__mark_tail_calls__VarTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 4)));
          hlds__mark_tail_calls__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 5)));
          hlds__mark_tail_calls__Var_220 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) & (MR_Integer) 1);
          hlds__mark_tail_calls__Var_221 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          hlds__mark_tail_calls__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 7)));
          hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_62, hlds__mark_tail_calls__VarTypes_63, hlds__mark_tail_calls__LHS_57);
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__AtTail_10 = hlds__mark_tail_calls__AtTail0_9;
          else
            switch (MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_60)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__mark_tail_calls__ToVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_60, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__FromVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_60, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__Outputs_85;
                  MR_Word hlds__mark_tail_calls__Outputs0_84;

                  hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_9)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__mark_tail_calls__succeeded)
                  {
                    hlds__mark_tail_calls__Outputs0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__AtTail0_9, (MR_Integer) 0)));
                    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_82, hlds__mark_tail_calls__FromVar_83, hlds__mark_tail_calls__Outputs0_84, &hlds__mark_tail_calls__Outputs_85);
                  }
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__mark_tail_calls__AtTail_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_85));
                    }
                  else
                  {
                    *hlds__mark_tail_calls__AtTail_10 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[1]);
                  }
                }
                break;
              case (MR_Integer) 3:
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
                break;
            }
          *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__mark_tail_calls__CalleePredId_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 0)));
          MR_Integer hlds__mark_tail_calls__CalleeProcId_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__ArgVars_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__Builtin_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__CalleePredProcId_92;
          MR_Word hlds__mark_tail_calls__CurPredProcId_93;
          MR_Word hlds__mark_tail_calls__CurSCCPredProcIds_94;
          MR_Word hlds__mark_tail_calls___UnifyContext_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls___SymName_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 5)));
          MR_Word hlds__mark_tail_calls__Var_231;
          MR_Word hlds__mark_tail_calls__Var_232;
          MR_Word hlds__mark_tail_calls__Var_234;
          MR_Word hlds__mark_tail_calls__Var_235;
          MR_Word hlds__mark_tail_calls__Var_236;
          MR_Word hlds__mark_tail_calls__Var_237;
          MR_Word hlds__mark_tail_calls__Var_238;
          MR_Word hlds__mark_tail_calls__SelfOrMutual_95;

          {
            hlds__mark_tail_calls__CalleePredProcId_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleePredProcId_92, 0) = ((MR_Box) (hlds__mark_tail_calls__CalleePredId_86));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleePredProcId_92, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeProcId_87));
          }
          hlds__mark_tail_calls__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 0)));
          hlds__mark_tail_calls__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 1)));
          hlds__mark_tail_calls__CurPredProcId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 2)));
          hlds__mark_tail_calls__CurSCCPredProcIds_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 3)));
          hlds__mark_tail_calls__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 4)));
          hlds__mark_tail_calls__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 5)));
          hlds__mark_tail_calls__Var_236 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) & (MR_Integer) 1);
          hlds__mark_tail_calls__Var_237 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          hlds__mark_tail_calls__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 7)));
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_89 == (MR_Integer) 1);
          if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(hlds__mark_tail_calls__CalleePredProcId_92, hlds__mark_tail_calls__CurPredProcId_93);
            if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__SelfOrMutual_95 = (MR_Integer) 0;
              hlds__mark_tail_calls__succeeded = MR_TRUE;
            }
            else
            {
              hlds__mark_tail_calls__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__mark_tail_calls__CalleePredProcId_92)), hlds__mark_tail_calls__CurSCCPredProcIds_94);
              if (hlds__mark_tail_calls__succeeded)
              {
                hlds__mark_tail_calls__SelfOrMutual_95 = (MR_Integer) 1;
                hlds__mark_tail_calls__succeeded = MR_TRUE;
              }
              else
                hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
            }
          }
          if (hlds__mark_tail_calls__succeeded)
          {
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151;
            MR_Word hlds__mark_tail_calls__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 2)));
            MR_Word hlds__mark_tail_calls__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 3)));
            MR_Word hlds__mark_tail_calls__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 4)));
            MR_Word hlds__mark_tail_calls__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 5)));
            MR_Word hlds__mark_tail_calls__Var_254 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word hlds__mark_tail_calls__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 7)));
            MR_Word hlds__mark_tail_calls__Var_253 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word hlds__mark_tail_calls__TypeInfo_303_303;
            MR_Word hlds__mark_tail_calls__OutputVars_96;
            MR_Word hlds__mark_tail_calls__CalleePredInfo_97;
            MR_Word hlds__mark_tail_calls__CalleeArgTypes_98;
            MR_Word hlds__mark_tail_calls__CalleeProcInfo_99;
            MR_Word hlds__mark_tail_calls__CalleeArgModes_100;
            MR_Word hlds__mark_tail_calls__CalleeOutputVars_101;
            MR_Word hlds__mark_tail_calls__ModuleInfo_169;
            MR_Word hlds__mark_tail_calls__Var_256;
            MR_Word hlds__mark_tail_calls__Var_257;
            MR_Word hlds__mark_tail_calls__Var_258;
            MR_Word hlds__mark_tail_calls__Var_259;
            MR_Word hlds__mark_tail_calls__Var_260;
            MR_Word hlds__mark_tail_calls__Var_261;
            MR_Word hlds__mark_tail_calls__Var_262;
            MR_Word hlds__mark_tail_calls__Var_263;

            {
              hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_247));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_248));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_249));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_250));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (hlds__mark_tail_calls__Var_251));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (hlds__mark_tail_calls__Var_252));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__mark_tail_calls__Var_254 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (hlds__mark_tail_calls__Var_255));
            }
            hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_9)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__OutputVars_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__AtTail0_9, (MR_Integer) 0)));
              hlds__mark_tail_calls__ModuleInfo_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
              hlds__mark_tail_calls__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
              hlds__mark_tail_calls__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
              hlds__mark_tail_calls__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
              hlds__mark_tail_calls__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
              hlds__mark_tail_calls__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
              hlds__mark_tail_calls__Var_261 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)))) & (MR_Integer) 1);
              hlds__mark_tail_calls__Var_262 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              hlds__mark_tail_calls__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__mark_tail_calls__ModuleInfo_169, hlds__mark_tail_calls__CalleePredId_86, &hlds__mark_tail_calls__CalleePredInfo_97);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__CalleePredInfo_97, &hlds__mark_tail_calls__CalleeArgTypes_98);
              hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__CalleePredInfo_97, hlds__mark_tail_calls__CalleeProcId_87, &hlds__mark_tail_calls__CalleeProcInfo_99);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__CalleeProcInfo_99, &hlds__mark_tail_calls__CalleeArgModes_100);
              hlds__mark_tail_calls__find_output_args_5_p_0(hlds__mark_tail_calls__ModuleInfo_169, hlds__mark_tail_calls__CalleeArgTypes_98, hlds__mark_tail_calls__CalleeArgModes_100, hlds__mark_tail_calls__ArgVars_88, &hlds__mark_tail_calls__CalleeOutputVars_101);
              hlds__mark_tail_calls__TypeInfo_303_303 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[2];
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_303_303, ((MR_Box) (hlds__mark_tail_calls__OutputVars_96)), ((MR_Box) (hlds__mark_tail_calls__CalleeOutputVars_101)));
            }
            if (hlds__mark_tail_calls__succeeded)
            {
              MR_Word hlds__mark_tail_calls__MaybeSelfFeature_102;
              MR_Word hlds__mark_tail_calls__MaybeMutualFeature_103;
              MR_Word hlds__mark_tail_calls__MaybeRecordSelf_104;
              MR_Word hlds__mark_tail_calls__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
              MR_Word hlds__mark_tail_calls__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__Var_269 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word hlds__mark_tail_calls__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
              MR_Word hlds__mark_tail_calls__Var_270 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word hlds__mark_tail_calls___WarnParams_105;

              hlds__mark_tail_calls__MaybeSelfFeature_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_153, (MR_Integer) 0)));
              hlds__mark_tail_calls__MaybeMutualFeature_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_153, (MR_Integer) 1)));
              hlds__mark_tail_calls__MaybeRecordSelf_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_153, (MR_Integer) 2)));
              hlds__mark_tail_calls___WarnParams_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_153, (MR_Integer) 3)));
              switch (hlds__mark_tail_calls__SelfOrMutual_95) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    if ((hlds__mark_tail_calls__MaybeMutualFeature_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
                    else
                    {
                      MR_Word hlds__mark_tail_calls__MutualFeature_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeMutualFeature_103, (MR_Integer) 0)));
                      MR_Word hlds__mark_tail_calls__GoalInfo_172;

                      hlds__hlds_goal__goal_info_add_feature_3_p_0(hlds__mark_tail_calls__MutualFeature_108, hlds__mark_tail_calls__GoalInfo0_13, &hlds__mark_tail_calls__GoalInfo_172);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__mark_tail_calls__Goal_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_12));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_172));
                      }
                    }
                    *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    if ((hlds__mark_tail_calls__MaybeSelfFeature_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
                    else
                    {
                      MR_Word hlds__mark_tail_calls__SelfFeature_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeSelfFeature_102, (MR_Integer) 0)));
                      MR_Word hlds__mark_tail_calls__GoalInfo_107;

                      hlds__hlds_goal__goal_info_add_feature_3_p_0(hlds__mark_tail_calls__SelfFeature_106, hlds__mark_tail_calls__GoalInfo0_13, &hlds__mark_tail_calls__GoalInfo_107);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__mark_tail_calls__Goal_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_12));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_107));
                      }
                    }
                    switch (hlds__mark_tail_calls__MaybeRecordSelf_104) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151;
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                            *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_264));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_265));
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_266));
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_267));
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__Var_268));
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__Var_153));
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__mark_tail_calls__Var_269 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__Var_271));
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word hlds__mark_tail_calls__Context_109;

              *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
              hlds__mark_tail_calls__Context_109 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__mark_tail_calls__GoalInfo0_13);
              hlds__mark_tail_calls__maybe_report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_86, hlds__mark_tail_calls__SelfOrMutual_95, hlds__mark_tail_calls__Context_109, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_151_151, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
            }
            *hlds__mark_tail_calls__AtTail_10 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[2]);
          }
          else
          {
            *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
            hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
            *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
              hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_283_283;
              MR_Word hlds__mark_tail_calls__ConjType_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Goals0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__RevGoals0_112;
              MR_Word hlds__mark_tail_calls__RevGoals_113;
              MR_Word hlds__mark_tail_calls__Goals_114;
              MR_Word hlds__mark_tail_calls__GoalExpr_115;
              MR_Word hlds__mark_tail_calls__AtTail1_179;

              switch (hlds__mark_tail_calls__ConjType_110) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_179);
                  break;
                case (MR_Integer) 0:
                  hlds__mark_tail_calls__AtTail1_179 = hlds__mark_tail_calls__AtTail0_9;
                  break;
              }
              hlds__mark_tail_calls__TypeCtorInfo_283_283 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_283_283, hlds__mark_tail_calls__Goals0_111, &hlds__mark_tail_calls__RevGoals0_112);
              hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(hlds__mark_tail_calls__RevGoals0_112, &hlds__mark_tail_calls__RevGoals_113, hlds__mark_tail_calls__AtTail1_179, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
              mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_283_283, hlds__mark_tail_calls__RevGoals_113, &hlds__mark_tail_calls__Goals_114);
              {
                hlds__mark_tail_calls__GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_115, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_110));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_115, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_114));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_115));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_290_290;
              MR_Word hlds__mark_tail_calls__Disjs0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall0_117;
              MR_Word hlds__mark_tail_calls__Disjs_118;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall_119;
              MR_Word hlds__mark_tail_calls__Var_148;
              MR_Word hlds__mark_tail_calls__GoalExpr_180;
              MR_Box hlds__mark_tail_calls__conv4_SeenLaterRecCall_119;
              MR_Box hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_139;

              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__SeenLaterRecCall0_117);
              {
                hlds__mark_tail_calls__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_148, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_148, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_148, 3) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_9));
              }
              hlds__mark_tail_calls__TypeCtorInfo_290_290 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_foldl2_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_290_290, hlds__mark_tail_calls__TypeCtorInfo_290_290, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0, hlds__mark_tail_calls__Var_148, hlds__mark_tail_calls__Disjs0_116, &hlds__mark_tail_calls__Disjs_118, ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall0_117)), &hlds__mark_tail_calls__conv4_SeenLaterRecCall_119, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138)), &hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_139);
              hlds__mark_tail_calls__SeenLaterRecCall_119 = ((MR_Word) hlds__mark_tail_calls__conv4_SeenLaterRecCall_119);
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = ((MR_Word) hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_139);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__AtTail_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall_119));
              }
              {
                hlds__mark_tail_calls__GoalExpr_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_180, 1) = ((MR_Box) (hlds__mark_tail_calls__Disjs_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_180));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_299_299;
              MR_Word hlds__mark_tail_calls__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__CanFail_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Cases0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Cases_123;
              MR_Word hlds__mark_tail_calls__Var_146;
              MR_Word hlds__mark_tail_calls__GoalExpr_181;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall0_182;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall_183;
              MR_Box hlds__mark_tail_calls__conv9_SeenLaterRecCall_183;
              MR_Box hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_139;

              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__SeenLaterRecCall0_182);
              {
                hlds__mark_tail_calls__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_146, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_146, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_146, 3) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_9));
              }
              hlds__mark_tail_calls__TypeCtorInfo_299_299 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map_foldl2_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_299_299, hlds__mark_tail_calls__TypeCtorInfo_299_299, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0, hlds__mark_tail_calls__Var_146, hlds__mark_tail_calls__Cases0_122, &hlds__mark_tail_calls__Cases_123, ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall0_182)), &hlds__mark_tail_calls__conv9_SeenLaterRecCall_183, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138)), &hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_139);
              hlds__mark_tail_calls__SeenLaterRecCall_183 = ((MR_Word) hlds__mark_tail_calls__conv9_SeenLaterRecCall_183);
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = ((MR_Word) hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_139);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__AtTail_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall_183));
              }
              {
                hlds__mark_tail_calls__GoalExpr_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_181, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_120));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_181, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_121));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_181, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_123));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_181));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__mark_tail_calls__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__SubGoal_34;
              MR_Word hlds__mark_tail_calls__Var_168;

              switch (MR_tag((MR_Word) hlds__mark_tail_calls__Reason_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__mark_tail_calls__AtTail1_40;

                    hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_40);
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail1_40, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__mark_tail_calls__HeadWarning_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_27, (MR_Integer) 0)));
                    MR_Word hlds__mark_tail_calls__TailWarnings_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_27, (MR_Integer) 1)));

                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadWarning_29 == (MR_Integer) 1);
                    if (!(hlds__mark_tail_calls__succeeded))
                    {
                      hlds__mark_tail_calls__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 1)), hlds__mark_tail_calls__TailWarnings_30);
                    }
                    if (hlds__mark_tail_calls__succeeded)
                    {
                      MR_Word hlds__mark_tail_calls__OldParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 5)));
                      MR_Word hlds__mark_tail_calls__InnerParams_32;
                      MR_Word hlds__mark_tail_calls__InnerInfo0_33;
                      MR_Word hlds__mark_tail_calls__InnerInfo_35;
                      MR_Word hlds__mark_tail_calls__Var_165;
                      MR_Word hlds__mark_tail_calls__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 0)));
                      MR_Word hlds__mark_tail_calls__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 1)));
                      MR_Word hlds__mark_tail_calls__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 2)));
                      MR_Word hlds__mark_tail_calls__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 3)));
                      MR_Word hlds__mark_tail_calls__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 4)));
                      MR_Word hlds__mark_tail_calls__Var_190 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls__Var_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 7)));
                      MR_Word hlds__mark_tail_calls__Var_193;
                      MR_Word hlds__mark_tail_calls__Var_194;
                      MR_Word hlds__mark_tail_calls__Var_195;
                      MR_Word hlds__mark_tail_calls__Var_196;
                      MR_Word hlds__mark_tail_calls__Var_197;
                      MR_Word hlds__mark_tail_calls__Var_198;
                      MR_Word hlds__mark_tail_calls__Var_199;
                      MR_Word hlds__mark_tail_calls__Var_200;
                      MR_Word hlds__mark_tail_calls__Var_201;
                      MR_Word hlds__mark_tail_calls__Var_203;
                      MR_Word hlds__mark_tail_calls__Var_204;
                      MR_Word hlds__mark_tail_calls__Var_205;
                      MR_Word hlds__mark_tail_calls__Var_202;
                      MR_Word hlds__mark_tail_calls__Var_206;
                      MR_Word hlds__mark_tail_calls__Var_207;
                      MR_Word hlds__mark_tail_calls__Var_208;
                      MR_Word hlds__mark_tail_calls__Var_209;
                      MR_Word hlds__mark_tail_calls__Var_210;
                      MR_Word hlds__mark_tail_calls__Var_212;
                      MR_Word hlds__mark_tail_calls__Var_213;
                      MR_Word hlds__mark_tail_calls__Var_214;
                      MR_Word hlds__mark_tail_calls__Var_211;

                      hlds__mark_tail_calls__Var_165 = hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0();
                      hlds__mark_tail_calls__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__OldParams_31, (MR_Integer) 0)));
                      hlds__mark_tail_calls__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__OldParams_31, (MR_Integer) 1)));
                      hlds__mark_tail_calls__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__OldParams_31, (MR_Integer) 2)));
                      hlds__mark_tail_calls__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__OldParams_31, (MR_Integer) 3)));
                      {
                        hlds__mark_tail_calls__InnerParams_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerParams_32, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_193));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerParams_32, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_194));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerParams_32, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_195));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerParams_32, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_165));
                      }
                      hlds__mark_tail_calls__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 0)));
                      hlds__mark_tail_calls__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 1)));
                      hlds__mark_tail_calls__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 2)));
                      hlds__mark_tail_calls__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 3)));
                      hlds__mark_tail_calls__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 4)));
                      hlds__mark_tail_calls__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 5)));
                      hlds__mark_tail_calls__Var_203 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) & (MR_Integer) 1);
                      hlds__mark_tail_calls__Var_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      hlds__mark_tail_calls__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, (MR_Integer) 7)));
                      {
                        hlds__mark_tail_calls__InnerInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_197));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_198));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_199));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_200));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 4) = ((MR_Box) (hlds__mark_tail_calls__Var_201));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 5) = ((MR_Box) (hlds__mark_tail_calls__InnerParams_32));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 6) = ((MR_Box) ((hlds__mark_tail_calls__Var_203 | ((hlds__mark_tail_calls__Var_204 << (MR_Integer) 1)))));
                        MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 7) = ((MR_Box) (hlds__mark_tail_calls__Var_205));
                      }
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__InnerInfo0_33, &hlds__mark_tail_calls__InnerInfo_35);
                      hlds__mark_tail_calls__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 0)));
                      hlds__mark_tail_calls__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 1)));
                      hlds__mark_tail_calls__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 2)));
                      hlds__mark_tail_calls__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 3)));
                      hlds__mark_tail_calls__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 4)));
                      hlds__mark_tail_calls__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 5)));
                      hlds__mark_tail_calls__Var_212 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 6)))) & (MR_Integer) 1);
                      hlds__mark_tail_calls__Var_213 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      hlds__mark_tail_calls__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 7)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__mark_tail_calls__STATE_VARIABLE_Info_139 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_206));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_207));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_208));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_209));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__Var_210));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__OldParams_31));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__mark_tail_calls__Var_212 | ((hlds__mark_tail_calls__Var_213 << (MR_Integer) 1)))));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__Var_214));
                      }
                    }
                    else
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Reason_27, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "mark_tail_calls.m", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "unexpected scope kind");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word hlds__mark_tail_calls__AtTail1_40;

                        hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_40);
                        hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail1_40, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
                      }
                      break;
                  }
                  break;
              }
              {
                hlds__mark_tail_calls__Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_168, 1) = ((MR_Box) (hlds__mark_tail_calls__Reason_27));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_168, 2) = ((MR_Box) (hlds__mark_tail_calls__SubGoal_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_168));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__mark_tail_calls__Vars_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Cond0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Then0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Else0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__Then_128;
              MR_Word hlds__mark_tail_calls__AtTailBeforeThen_129;
              MR_Word hlds__mark_tail_calls__Else_130;
              MR_Word hlds__mark_tail_calls__AtTailBeforeElse_131;
              MR_Word hlds__mark_tail_calls__SeenRecCallInThen_132;
              MR_Word hlds__mark_tail_calls__SeenRecCallInElse_133;
              MR_Word hlds__mark_tail_calls__SeenRecCallAfterCond_134;
              MR_Word hlds__mark_tail_calls__AtTailAfterCond_135;
              MR_Word hlds__mark_tail_calls__Cond_136;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_143_143;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_144_144;
              MR_Word hlds__mark_tail_calls__GoalExpr_184;

              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Then0_126, &hlds__mark_tail_calls__Then_128, hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTailBeforeThen_129, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_138, &hlds__mark_tail_calls__STATE_VARIABLE_Info_143_143);
              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Else0_127, &hlds__mark_tail_calls__Else_130, hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTailBeforeElse_131, hlds__mark_tail_calls__STATE_VARIABLE_Info_143_143, &hlds__mark_tail_calls__STATE_VARIABLE_Info_144_144);
              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTailBeforeThen_129, &hlds__mark_tail_calls__SeenRecCallInThen_132);
              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTailBeforeElse_131, &hlds__mark_tail_calls__SeenRecCallInElse_133);
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__SeenRecCallInThen_132 == (MR_Integer) 0);
              if (!(hlds__mark_tail_calls__succeeded))
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__SeenRecCallInElse_133 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__SeenRecCallAfterCond_134 = (MR_Integer) 0;
              else
                hlds__mark_tail_calls__SeenRecCallAfterCond_134 = (MR_Integer) 1;
              {
                hlds__mark_tail_calls__AtTailAfterCond_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTailAfterCond_135, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenRecCallAfterCond_134));
              }
              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Cond0_125, &hlds__mark_tail_calls__Cond_136, hlds__mark_tail_calls__AtTailAfterCond_135, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_144_144, hlds__mark_tail_calls__STATE_VARIABLE_Info_139);
              {
                hlds__mark_tail_calls__GoalExpr_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_184, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_124));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_184, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_136));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_184, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_128));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_184, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_130));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_184));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__Context_9,
  MR_Word hlds__mark_tail_calls__AtTail_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_17)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__WarnOrError_12;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRec_13;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRec_14;
    MR_Word hlds__mark_tail_calls__Var_18;
    MR_Word hlds__mark_tail_calls__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word hlds__mark_tail_calls__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word hlds__mark_tail_calls__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word hlds__mark_tail_calls__Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__mark_tail_calls__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__mark_tail_calls__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word hlds__mark_tail_calls__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_19, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_19, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_19, (MR_Integer) 2)));

    hlds__mark_tail_calls__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_19, (MR_Integer) 3)));
    hlds__mark_tail_calls__WarnOrError_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_18, (MR_Integer) 0)))) & (MR_Integer) 1);
    hlds__mark_tail_calls__WarnNonTailSelfRec_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__mark_tail_calls__WarnNonTailMutualRec_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_18, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    switch (hlds__mark_tail_calls__SelfOrMutualRec_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__WarnNonTailMutualRec_14 == (MR_Integer) 1);
        break;
      case (MR_Integer) 0:
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__WarnNonTailSelfRec_13 == (MR_Integer) 1);
        break;
    }
    if (hlds__mark_tail_calls__succeeded)
      if (((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_10)) == (MR_mktag((MR_Integer) 0))))
        hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_7, hlds__mark_tail_calls__SelfOrMutualRec_8, hlds__mark_tail_calls__WarnOrError_12, hlds__mark_tail_calls__Context_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, hlds__mark_tail_calls__STATE_VARIABLE_Info_17);
      else
      {
        MR_Word hlds__mark_tail_calls__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_10, (MR_Integer) 0)));

        switch (hlds__mark_tail_calls__Var_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_7, hlds__mark_tail_calls__SelfOrMutualRec_8, hlds__mark_tail_calls__WarnOrError_12, hlds__mark_tail_calls__Context_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, hlds__mark_tail_calls__STATE_VARIABLE_Info_17);
            break;
          case (MR_Integer) 0:
            *hlds__mark_tail_calls__STATE_VARIABLE_Info_17 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16;
            break;
        }
      }
    else
      *hlds__mark_tail_calls__STATE_VARIABLE_Info_17 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__WarnOrError_9,
  MR_Word hlds__mark_tail_calls__Context_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_27)
{
  {
    MR_Integer hlds__mark_tail_calls__CallerProcId_13;
    MR_Word hlds__mark_tail_calls__CallerPredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__CallerPredOrFunc_15;
    MR_String hlds__mark_tail_calls__CallerName_16;
    MR_Integer hlds__mark_tail_calls__CallerArity_17;
    MR_Word hlds__mark_tail_calls__CallerId_18;
    MR_Word hlds__mark_tail_calls__Specs0_19;
    MR_Word hlds__mark_tail_calls__Specs_20;
    MR_Word hlds__mark_tail_calls__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Var_29;
    MR_Word hlds__mark_tail_calls__Var_50;
    MR_Word hlds__mark_tail_calls__Var_51;
    MR_Word hlds__mark_tail_calls__Var_52;
    MR_Word hlds__mark_tail_calls__Var_53;
    MR_Word hlds__mark_tail_calls__Var_54;
    MR_Word hlds__mark_tail_calls__Var_55;
    MR_Word hlds__mark_tail_calls__Var_56;
    MR_Word hlds__mark_tail_calls__Var_57;
    MR_Word hlds__mark_tail_calls__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    MR_Word hlds__mark_tail_calls__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
    MR_Word hlds__mark_tail_calls__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
    MR_Word hlds__mark_tail_calls__Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__mark_tail_calls__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__mark_tail_calls__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
    MR_Word hlds__mark_tail_calls__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_28, (MR_Integer) 0)));

    hlds__mark_tail_calls__CallerProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_28, (MR_Integer) 1)));
    hlds__mark_tail_calls__CallerPredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    hlds__mark_tail_calls__CallerName_16 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    hlds__mark_tail_calls__CallerArity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    {
      hlds__mark_tail_calls__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_29, 0) = ((MR_Box) (hlds__mark_tail_calls__CallerName_16));
    }
    {
      hlds__mark_tail_calls__CallerId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 0) = ((MR_Box) (hlds__mark_tail_calls__CallerPredOrFunc_15));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_29));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 2) = ((MR_Box) (hlds__mark_tail_calls__CallerArity_17));
    }
    hlds__mark_tail_calls__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    hlds__mark_tail_calls__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    hlds__mark_tail_calls__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    hlds__mark_tail_calls__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    hlds__mark_tail_calls__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
    hlds__mark_tail_calls__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
    hlds__mark_tail_calls__Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__mark_tail_calls__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__mark_tail_calls__Specs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
    switch (hlds__mark_tail_calls__SelfOrMutualRec_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__CalleePredInfo_21;
          MR_Word hlds__mark_tail_calls__CalleePredOrFunc_22;
          MR_Word hlds__mark_tail_calls__CalleeName_23;
          MR_Integer hlds__mark_tail_calls__CalleeArity_24;
          MR_Word hlds__mark_tail_calls__CalleeId_25;
          MR_Word hlds__mark_tail_calls__Var_31;
          MR_String hlds__mark_tail_calls__Var_32;

          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__mark_tail_calls__Var_50, hlds__mark_tail_calls__CalleePredId_7, &hlds__mark_tail_calls__CalleePredInfo_21);
          hlds__mark_tail_calls__CalleePredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          hlds__mark_tail_calls__Var_31 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          hlds__mark_tail_calls__Var_32 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          {
            hlds__mark_tail_calls__CalleeName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__CalleeName_23, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_31));
            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__CalleeName_23, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_32));
          }
          hlds__mark_tail_calls__CalleeArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          {
            hlds__mark_tail_calls__CalleeId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 0) = ((MR_Box) (hlds__mark_tail_calls__CalleePredOrFunc_22));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeName_23));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 2) = ((MR_Box) (hlds__mark_tail_calls__CalleeArity_24));
          }
          hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_7_p_0(hlds__mark_tail_calls__CallerId_18, hlds__mark_tail_calls__CallerProcId_13, hlds__mark_tail_calls__CalleeId_25, hlds__mark_tail_calls__WarnOrError_9, hlds__mark_tail_calls__Context_10, hlds__mark_tail_calls__Specs0_19, &hlds__mark_tail_calls__Specs_20);
        }
        break;
      case (MR_Integer) 0:
        hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(hlds__mark_tail_calls__CallerId_18, hlds__mark_tail_calls__CallerProcId_13, hlds__mark_tail_calls__Context_10, hlds__mark_tail_calls__WarnOrError_9, hlds__mark_tail_calls__Specs0_19, &hlds__mark_tail_calls__Specs_20);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_tail_calls__STATE_VARIABLE_Info_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_51));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__Var_53));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__Var_54));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__Var_55));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__mark_tail_calls__Var_56 | ((hlds__mark_tail_calls__Var_57 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__Specs_20));
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_7_p_0(
  MR_Word hlds__mark_tail_calls__CallerId_8,
  MR_Integer hlds__mark_tail_calls__CallerProcId_9,
  MR_Word hlds__mark_tail_calls__CalleeId_10,
  MR_Word hlds__mark_tail_calls__WarnOrError_11,
  MR_Word hlds__mark_tail_calls__Context_12,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_22)
{
  {
    MR_Word hlds__mark_tail_calls__Severity_14;
    MR_Word hlds__mark_tail_calls__WarnOrErrorWord_15;
    MR_Integer hlds__mark_tail_calls__ProcNumber0_16;
    MR_Integer hlds__mark_tail_calls__ProcNumber_17;
    MR_Word hlds__mark_tail_calls__Pieces_18;
    MR_Word hlds__mark_tail_calls__Msg_19;
    MR_Word hlds__mark_tail_calls__Spec_20;
    MR_Word hlds__mark_tail_calls__Var_26;
    MR_Word hlds__mark_tail_calls__Var_27;
    MR_Word hlds__mark_tail_calls__Var_28;
    MR_Word hlds__mark_tail_calls__Var_31;
    MR_Word hlds__mark_tail_calls__Var_32;
    MR_Word hlds__mark_tail_calls__Var_33;
    MR_Word hlds__mark_tail_calls__Var_36;
    MR_Word hlds__mark_tail_calls__Var_38;
    MR_Word hlds__mark_tail_calls__Var_39;
    MR_Word hlds__mark_tail_calls__Var_42;
    MR_Word hlds__mark_tail_calls__Var_43;
    MR_Word hlds__mark_tail_calls__Var_50;
    MR_Word hlds__mark_tail_calls__Var_51;
    MR_Word hlds__mark_tail_calls__Var_54;

    switch (hlds__mark_tail_calls__WarnOrError_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_15 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[19]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_15 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20]);
        }
        break;
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__CallerProcId_9, &hlds__mark_tail_calls__ProcNumber0_16);
    hlds__mark_tail_calls__ProcNumber_17 = (hlds__mark_tail_calls__ProcNumber0_16 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_27, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_17));
    }
    {
      hlds__mark_tail_calls__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_32, 1) = ((MR_Box) (hlds__mark_tail_calls__CallerId_8));
    }
    {
      hlds__mark_tail_calls__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_43, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeId_10));
    }
    {
      hlds__mark_tail_calls__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_42, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_43));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[9])));
    }
    {
      hlds__mark_tail_calls__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_39, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_42));
    }
    {
      hlds__mark_tail_calls__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_38, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_15));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_38, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_39));
    }
    {
      hlds__mark_tail_calls__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_36, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_38));
    }
    {
      hlds__mark_tail_calls__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_33, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_36));
    }
    {
      hlds__mark_tail_calls__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_32));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_33));
    }
    {
      hlds__mark_tail_calls__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_28, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_31));
    }
    {
      hlds__mark_tail_calls__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_27));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_28));
    }
    {
      hlds__mark_tail_calls__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[21])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_18, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_26));
    }
    {
      hlds__mark_tail_calls__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_51, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_18));
    }
    {
      hlds__mark_tail_calls__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_50, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_51));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_19, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_19, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_50));
    }
    {
      hlds__mark_tail_calls__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_54, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_19));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_14));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Spec_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21));
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__SimpleCallId_7,
  MR_Integer hlds__mark_tail_calls__ProcId_8,
  MR_Word hlds__mark_tail_calls__Context_9,
  MR_Word hlds__mark_tail_calls__WarnOrError_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_20)
{
  {
    MR_Word hlds__mark_tail_calls__Severity_12;
    MR_Word hlds__mark_tail_calls__WarnOrErrorWord_13;
    MR_Integer hlds__mark_tail_calls__ProcNumber0_14;
    MR_Integer hlds__mark_tail_calls__ProcNumber_15;
    MR_Word hlds__mark_tail_calls__Pieces_16;
    MR_Word hlds__mark_tail_calls__Msg_17;
    MR_Word hlds__mark_tail_calls__Spec_18;
    MR_Word hlds__mark_tail_calls__Var_24;
    MR_Word hlds__mark_tail_calls__Var_25;
    MR_Word hlds__mark_tail_calls__Var_26;
    MR_Word hlds__mark_tail_calls__Var_29;
    MR_Word hlds__mark_tail_calls__Var_30;
    MR_Word hlds__mark_tail_calls__Var_31;
    MR_Word hlds__mark_tail_calls__Var_34;
    MR_Word hlds__mark_tail_calls__Var_36;
    MR_Word hlds__mark_tail_calls__Var_43;
    MR_Word hlds__mark_tail_calls__Var_44;
    MR_Word hlds__mark_tail_calls__Var_47;

    switch (hlds__mark_tail_calls__WarnOrError_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[19]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20]);
        }
        break;
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_8, &hlds__mark_tail_calls__ProcNumber0_14);
    hlds__mark_tail_calls__ProcNumber_15 = (hlds__mark_tail_calls__ProcNumber0_14 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_25, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_15));
    }
    {
      hlds__mark_tail_calls__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_30, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_7));
    }
    {
      hlds__mark_tail_calls__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_36, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_13));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[7])));
    }
    {
      hlds__mark_tail_calls__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_34, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_36));
    }
    {
      hlds__mark_tail_calls__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_34));
    }
    {
      hlds__mark_tail_calls__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_29, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_30));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_29, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_31));
    }
    {
      hlds__mark_tail_calls__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_29));
    }
    {
      hlds__mark_tail_calls__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_24, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_25));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_24, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_26));
    }
    {
      hlds__mark_tail_calls__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[21])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_24));
    }
    {
      hlds__mark_tail_calls__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_44, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_16));
    }
    {
      hlds__mark_tail_calls__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_43, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_44));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_9));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_43));
    }
    {
      hlds__mark_tail_calls__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_47, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_17));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_19));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__Before_3,
  MR_Word * hlds__mark_tail_calls__After_4)
{
  if (((MR_tag((MR_Word) hlds__mark_tail_calls__Before_3)) == (MR_mktag((MR_Integer) 0))))
  {
    *hlds__mark_tail_calls__After_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[1]);
  }
  else
    *hlds__mark_tail_calls__After_4 = hlds__mark_tail_calls__Before_3;
}

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_3,
  MR_Word * hlds__mark_tail_calls__SeenLaterRecCall_4)
{
  if (((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_3)) == (MR_mktag((MR_Integer) 0))))
    *hlds__mark_tail_calls__SeenLaterRecCall_4 = (MR_Integer) 1;
  else
    *hlds__mark_tail_calls__SeenLaterRecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_3, (MR_Integer) 0)));
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word hlds__mark_tail_calls__ToVar_5,
  MR_Word hlds__mark_tail_calls__FromVar_6,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Var0_7;
    MR_Word hlds__mark_tail_calls__Vars0_8;
    MR_Word hlds__mark_tail_calls__Var_9;
    MR_Word hlds__mark_tail_calls__Vars_10;
    MR_Word hlds__mark_tail_calls__TypeInfo_11_11;

    if (hlds__mark_tail_calls__succeeded)
    {
      hlds__mark_tail_calls__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
      hlds__mark_tail_calls__Vars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
      hlds__mark_tail_calls__TypeInfo_11_11 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1];
      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_11_11, ((MR_Box) (hlds__mark_tail_calls__ToVar_5)), ((MR_Box) (hlds__mark_tail_calls__Var0_7)));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__Var_9 = hlds__mark_tail_calls__FromVar_6;
        hlds__mark_tail_calls__Vars_10 = hlds__mark_tail_calls__Vars0_8;
        hlds__mark_tail_calls__succeeded = MR_TRUE;
      }
      else
      {
        hlds__mark_tail_calls__Var_9 = hlds__mark_tail_calls__Var0_7;
        hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_5, hlds__mark_tail_calls__FromVar_6, hlds__mark_tail_calls__Vars0_8, &hlds__mark_tail_calls__Vars_10);
      }
      if (hlds__mark_tail_calls__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__mark_tail_calls__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_10));
        }
        hlds__mark_tail_calls__succeeded = MR_TRUE;
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_6,
  MR_Word hlds__mark_tail_calls__Types_7,
  MR_Word hlds__mark_tail_calls__Modes_8,
  MR_Word hlds__mark_tail_calls__Vars_9,
  MR_Word * hlds__mark_tail_calls__Outputs_10)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__OutputsPrime_11;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_6, hlds__mark_tail_calls__Types_7, hlds__mark_tail_calls__Modes_8, hlds__mark_tail_calls__Vars_9, &hlds__mark_tail_calls__OutputsPrime_11);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__Outputs_10 = hlds__mark_tail_calls__OutputsPrime_11;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
        return;
      }
    }
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void)
{
  {
    return (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_output_args_2_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__mark_tail_calls__succeeded)
        {
          *hlds__mark_tail_calls__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word hlds__mark_tail_calls__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__mark_tail_calls__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__mark_tail_calls__Mode_10;
      MR_Word hlds__mark_tail_calls__Modes_11;
      MR_Word hlds__mark_tail_calls__Var_12;
      MR_Word hlds__mark_tail_calls__Vars_13;
      MR_Word hlds__mark_tail_calls__TailOutputVars_15;
      MR_Word hlds__mark_tail_calls__TopFunctorMode_19;

      hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        hlds__mark_tail_calls__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__mark_tail_calls__succeeded)
        {
          hlds__mark_tail_calls__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
          hlds__mark_tail_calls__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
          hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Types_9, hlds__mark_tail_calls__Modes_11, hlds__mark_tail_calls__Vars_13, &hlds__mark_tail_calls__TailOutputVars_15);
          if (hlds__mark_tail_calls__succeeded)
          {
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__TopFunctorMode_19);
            switch (hlds__mark_tail_calls__TopFunctorMode_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__mark_tail_calls__IsDummy_20;

                  hlds__mark_tail_calls__IsDummy_20 = check_hlds__type_util__check_dummy_type_2_f_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Type_8);
                  switch (hlds__mark_tail_calls__IsDummy_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
                      break;
                    case (MR_Integer) 1:
                      hlds__mark_tail_calls__succeeded = MR_TRUE;
                      break;
                  }
                }
                break;
            }
            if (hlds__mark_tail_calls__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__TailOutputVars_15));
              }
            else
              *hlds__mark_tail_calls__HeadVar__5_5 = hlds__mark_tail_calls__TailOutputVars_15;
            hlds__mark_tail_calls__succeeded = MR_TRUE;
          }
        }
      }
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(
  MR_Word hlds__mark_tail_calls__SimpleCallId_5,
  MR_Word hlds__mark_tail_calls__Context_6,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_15)
{
  {
    MR_Word hlds__mark_tail_calls__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__Pieces_11;
    MR_Word hlds__mark_tail_calls__Msg_12;
    MR_Word hlds__mark_tail_calls__Spec_13;
    MR_Word hlds__mark_tail_calls__Var_18;
    MR_Word hlds__mark_tail_calls__Var_21;
    MR_Word hlds__mark_tail_calls__Var_24;
    MR_Word hlds__mark_tail_calls__Var_25;
    MR_Word hlds__mark_tail_calls__Var_26;
    MR_Word hlds__mark_tail_calls__Var_29;
    MR_Word hlds__mark_tail_calls__Var_31;
    MR_Word hlds__mark_tail_calls__Var_34;
    MR_Word hlds__mark_tail_calls__Var_35;
    MR_Word hlds__mark_tail_calls__Var_45;
    MR_Word hlds__mark_tail_calls__Var_46;
    MR_Word hlds__mark_tail_calls__Var_50;
    MR_Word hlds__mark_tail_calls__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 1)));
    MR_Integer hlds__mark_tail_calls__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 2)));

    {
      hlds__mark_tail_calls__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_25, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_5));
    }
    {
      hlds__mark_tail_calls__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Var_35, 1) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_8));
    }
    {
      hlds__mark_tail_calls__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_34, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_35));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[13])));
    }
    {
      hlds__mark_tail_calls__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_31, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_34));
    }
    {
      hlds__mark_tail_calls__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_29, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_31));
    }
    {
      hlds__mark_tail_calls__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_26, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_29));
    }
    {
      hlds__mark_tail_calls__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_24, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_25));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_24, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_26));
    }
    {
      hlds__mark_tail_calls__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_21, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_24));
    }
    {
      hlds__mark_tail_calls__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_18, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_21));
    }
    {
      hlds__mark_tail_calls__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_11, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_18));
    }
    {
      hlds__mark_tail_calls__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Var_46, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_11));
    }
    {
      hlds__mark_tail_calls__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_45, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_46));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_12, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_6));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_12, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_45));
    }
    {
      hlds__mark_tail_calls__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_50, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 2) = ((MR_Box) (hlds__mark_tail_calls__Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_14));
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____at_tail_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____at_tail_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____later_rec_call_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____later_rec_call_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_record_self_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_record_self_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____was_proc_changed_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____was_proc_changed_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_self_tail_rec_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_self_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0);
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

/* :- end_module hlds.mark_tail_calls. */
