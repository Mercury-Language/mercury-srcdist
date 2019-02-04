/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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




static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_2;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_add_goal_feature_0[3];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_add_goal_feature_0[3];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0[3];

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

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1];

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

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____add_goal_feature_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____add_goal_feature_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

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
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
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
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
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
hlds__mark_tail_calls____Compare____add_goal_feature_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____add_goal_feature_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__WarnOrError_9,
  MR_Word hlds__mark_tail_calls__Context_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_27);

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__CalleePredId_7,
  MR_Word hlds__mark_tail_calls__SelfOrMutualRec_8,
  MR_Word hlds__mark_tail_calls__Context_9,
  MR_Word hlds__mark_tail_calls__AtTail_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_17);

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__Before_3,
  MR_Word * hlds__mark_tail_calls__After_4);

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_3,
  MR_Word * hlds__mark_tail_calls__SeenLaterRecCall_4);

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
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word hlds__mark_tail_calls__ToVar_5,
  MR_Word hlds__mark_tail_calls__FromVar_6,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

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
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_134);

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void);

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_output_args_2_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_6,
  MR_Word hlds__mark_tail_calls__Types_7,
  MR_Word hlds__mark_tail_calls__Modes_8,
  MR_Word hlds__mark_tail_calls__Vars_9,
  MR_Word * hlds__mark_tail_calls__Outputs_10);

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_12_p_0(
  MR_Word hlds__mark_tail_calls__AddGoalFeature_13,
  MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_14,
  MR_Word hlds__mark_tail_calls__ModuleInfo_15,
  MR_Word hlds__mark_tail_calls__SCC_16,
  MR_Word hlds__mark_tail_calls__PredId_17,
  MR_Integer hlds__mark_tail_calls__ProcId_18,
  MR_Word hlds__mark_tail_calls__PredInfo_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58,
  MR_Word * hlds__mark_tail_calls__WasProcChanged_21,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_60);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_code_gen_10_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__HeadVar__5_5,
  MR_Word hlds__mark_tail_calls__HeadVar__6_6,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_8,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_9,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_10);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_5_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[23][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[2][10];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[23][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "self-recursive call is not tail recursive."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not tail recursive."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains no recursive calls at all,"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mutually recursive call to"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: the code defining this"))
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

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0 = {
  (MR_String) "do_not_add_goal_feature",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1 = {
  (MR_String) "add_goal_feature_self_for_debug",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_2 = {
  (MR_String) "add_goal_feature_self_or_mutual",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_add_goal_feature_0[3] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_2
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_add_goal_feature_0[3] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_add_goal_feature_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____add_goal_feature_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____add_goal_feature_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "add_goal_feature",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_add_goal_feature_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_add_goal_feature_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0
};

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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_add_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_self_tail_rec_calls_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10] = {
  (MR_String) "mtc_add_feature",
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_cur_proc",
  (MR_String) "mtc_cur_scc",
  (MR_String) "mtc_vartypes",
  (MR_String) "mtc_warn_params",
  (MR_String) "mtc_any_rec_calls",
  (MR_String) "mtc_self_tail_rec_calls",
  (MR_String) "mtc_error_specs"
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0 = {
  (MR_String) "mark_tail_rec_calls_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____add_goal_feature_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____add_goal_feature_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____add_goal_feature_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____add_goal_feature_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____at_tail_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____at_tail_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_self_tail_rec_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____found_self_tail_rec_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____later_rec_call_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____later_rec_call_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____was_proc_changed_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
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

    {
      hlds__mark_tail_calls____Compare____was_proc_changed_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
        MR_Word hlds__mark_tail_calls__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_10_10;
        MR_Integer hlds__mark_tail_calls__V_17_17 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
        MR_Integer hlds__mark_tail_calls__V_18_18 = (MR_Integer) hlds__mark_tail_calls__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_10_10, hlds__mark_tail_calls__V_17_17, hlds__mark_tail_calls__V_18_18);
        }
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_10_10 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_10_10;
        else
          {
            MR_Word hlds__mark_tail_calls__V_11_11;
            MR_Integer hlds__mark_tail_calls__V_19_19 = (MR_Integer) hlds__mark_tail_calls__V_5_5;
            MR_Integer hlds__mark_tail_calls__V_20_20 = (MR_Integer) hlds__mark_tail_calls__V_8_8;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_11_11, hlds__mark_tail_calls__V_19_19, hlds__mark_tail_calls__V_20_20);
            }
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_11_11 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_11_11;
            else
              {
                MR_Integer hlds__mark_tail_calls__V_21_21 = (MR_Integer) hlds__mark_tail_calls__V_6_6;
                MR_Integer hlds__mark_tail_calls__V_22_22 = (MR_Integer) hlds__mark_tail_calls__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_21_21, hlds__mark_tail_calls__V_22_22);
                }
              }
          }
      }
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
        MR_Word hlds__mark_tail_calls__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__mark_tail_calls__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_6_6);
        if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_4_4 == hlds__mark_tail_calls__V_7_7);
            if (hlds__mark_tail_calls__succeeded)
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_5_5 == hlds__mark_tail_calls__V_8_8);
          }
      }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_33 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_34 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_33 == hlds__mark_tail_calls__CastY_34);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word hlds__mark_tail_calls__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word hlds__mark_tail_calls__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word hlds__mark_tail_calls__V_24_24;
        MR_Integer hlds__mark_tail_calls__V_45_45 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
        MR_Integer hlds__mark_tail_calls__V_46_46 = (MR_Integer) hlds__mark_tail_calls__V_14_14;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_24_24, hlds__mark_tail_calls__V_45_45, hlds__mark_tail_calls__V_46_46);
        }
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_24_24 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_24_24;
        else
          {
            MR_Word hlds__mark_tail_calls__V_25_25;

            {
              hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__V_25_25, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_15_15);
            }
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_25_25 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_25_25;
            else
              {
                MR_Word hlds__mark_tail_calls__V_26_26;

                {
                  hlds__hlds_pred____Compare____pred_info_0_0(&hlds__mark_tail_calls__V_26_26, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_16_16);
                }
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_26_26 == (MR_Integer) 0);
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                if (hlds__mark_tail_calls__succeeded)
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_26_26;
                else
                  {
                    MR_Word hlds__mark_tail_calls__V_27_27;

                    {
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&hlds__mark_tail_calls__V_27_27, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_17_17);
                    }
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_27_27 == (MR_Integer) 0);
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                    if (hlds__mark_tail_calls__succeeded)
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_27_27;
                    else
                      {
                        MR_Word hlds__mark_tail_calls__V_28_28;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], &hlds__mark_tail_calls__V_28_28, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_18_18)));
                        }
                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_28_28 == (MR_Integer) 0);
                        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                        if (hlds__mark_tail_calls__succeeded)
                          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_28_28;
                        else
                          {
                            MR_Word hlds__mark_tail_calls__V_29_29;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_2[0], &hlds__mark_tail_calls__V_29_29, ((MR_Box) (hlds__mark_tail_calls__V_9_9)), ((MR_Box) (hlds__mark_tail_calls__V_19_19)));
                            }
                            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_29_29 == (MR_Integer) 0);
                            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                            if (hlds__mark_tail_calls__succeeded)
                              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_29_29;
                            else
                              {
                                MR_Word hlds__mark_tail_calls__V_30_30;

                                {
                                  hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&hlds__mark_tail_calls__V_30_30, hlds__mark_tail_calls__V_10_10, hlds__mark_tail_calls__V_20_20);
                                }
                                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_30_30 == (MR_Integer) 0);
                                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                                if (hlds__mark_tail_calls__succeeded)
                                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_30_30;
                                else
                                  {
                                    MR_Word hlds__mark_tail_calls__V_31_31;
                                    MR_Integer hlds__mark_tail_calls__V_47_47 = (MR_Integer) hlds__mark_tail_calls__V_11_11;
                                    MR_Integer hlds__mark_tail_calls__V_48_48 = (MR_Integer) hlds__mark_tail_calls__V_21_21;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_31_31, hlds__mark_tail_calls__V_47_47, hlds__mark_tail_calls__V_48_48);
                                    }
                                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_31_31 == (MR_Integer) 0);
                                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                                    if (hlds__mark_tail_calls__succeeded)
                                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_31_31;
                                    else
                                      {
                                        MR_Word hlds__mark_tail_calls__V_32_32;
                                        MR_Integer hlds__mark_tail_calls__V_49_49 = (MR_Integer) hlds__mark_tail_calls__V_12_12;
                                        MR_Integer hlds__mark_tail_calls__V_50_50 = (MR_Integer) hlds__mark_tail_calls__V_22_22;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_32_32, hlds__mark_tail_calls__V_49_49, hlds__mark_tail_calls__V_50_50);
                                        }
                                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_32_32 == (MR_Integer) 0);
                                        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                                        if (hlds__mark_tail_calls__succeeded)
                                          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_32_32;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[3], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_13_13)), ((MR_Box) (hlds__mark_tail_calls__V_23_23)));
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
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_23 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_24 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_23 == hlds__mark_tail_calls__CastY_24);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__mark_tail_calls__TypeInfo_28_28;
        MR_Word hlds__mark_tail_calls__TypeInfo_29_29;
        MR_Word hlds__mark_tail_calls__TypeInfo_30_30;
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__mark_tail_calls__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 9)));

        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_13_13);
        if (hlds__mark_tail_calls__succeeded)
          {
            {
              hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_14_14);
            }
            if (hlds__mark_tail_calls__succeeded)
              {
                {
                  hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_15_15);
                }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    {
                      hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_16_16);
                    }
                    if (hlds__mark_tail_calls__succeeded)
                      {
                        hlds__mark_tail_calls__TypeInfo_28_28 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0];
                        {
                          hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_28_28, ((MR_Box) (hlds__mark_tail_calls__V_7_7)), ((MR_Box) (hlds__mark_tail_calls__V_17_17)));
                        }
                        if (hlds__mark_tail_calls__succeeded)
                          {
                            hlds__mark_tail_calls__TypeInfo_29_29 = (MR_Word) &hlds__mark_tail_calls_scalar_common_2[0];
                            {
                              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_29_29, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_18_18)));
                            }
                            if (hlds__mark_tail_calls__succeeded)
                              {
                                {
                                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(hlds__mark_tail_calls__V_9_9, hlds__mark_tail_calls__V_19_19);
                                }
                                if (hlds__mark_tail_calls__succeeded)
                                  {
                                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_10_10 == hlds__mark_tail_calls__V_20_20);
                                    if (hlds__mark_tail_calls__succeeded)
                                      {
                                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_11_11 == hlds__mark_tail_calls__V_21_21);
                                        if (hlds__mark_tail_calls__succeeded)
                                          {
                                            hlds__mark_tail_calls__TypeInfo_30_30 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[3];
                                            {
                                              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_30_30, ((MR_Box) (hlds__mark_tail_calls__V_12_12)), ((MR_Box) (hlds__mark_tail_calls__V_22_22)));
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
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
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[2], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_16_16)), ((MR_Box) (hlds__mark_tail_calls__V_5_5)));
            }
          }
        else
          *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer hlds__mark_tail_calls__V_18_18 = (MR_Integer) hlds__mark_tail_calls__V_17_17;
            MR_Integer hlds__mark_tail_calls__V_19_19 = (MR_Integer) hlds__mark_tail_calls__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_18_18, hlds__mark_tail_calls__V_19_19);
            }
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
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_4_4;

        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
            hlds__mark_tail_calls__TypeInfo_9_9 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[2];
            {
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_9_9, ((MR_Box) (hlds__mark_tail_calls__V_3_3)), ((MR_Box) (hlds__mark_tail_calls__V_4_4)));
            }
          }
      }
    else
      {
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_6_6;

        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_5_5 == hlds__mark_tail_calls__V_6_6);
          }
      }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____add_goal_feature_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____add_goal_feature_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CallerProcId_13;
    MR_Word hlds__mark_tail_calls__CallerPredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__CallerPredOrFunc_15;
    MR_String hlds__mark_tail_calls__CallerName_16;
    MR_Integer hlds__mark_tail_calls__CallerArity_17;
    MR_Word hlds__mark_tail_calls__CallerId_18;
    MR_Word hlds__mark_tail_calls__Specs0_19;
    MR_Word hlds__mark_tail_calls__Specs_20;
    MR_Word hlds__mark_tail_calls__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    MR_Word hlds__mark_tail_calls__V_29_29;
    MR_Word hlds__mark_tail_calls__V_52_52;
    MR_Word hlds__mark_tail_calls__V_53_53;
    MR_Word hlds__mark_tail_calls__V_54_54;
    MR_Word hlds__mark_tail_calls__V_55_55;
    MR_Word hlds__mark_tail_calls__V_56_56;
    MR_Word hlds__mark_tail_calls__V_57_57;
    MR_Word hlds__mark_tail_calls__V_58_58;
    MR_Word hlds__mark_tail_calls__V_59_59;
    MR_Word hlds__mark_tail_calls__V_60_60;
    MR_Word hlds__mark_tail_calls__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
    MR_Word hlds__mark_tail_calls__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
    MR_Word hlds__mark_tail_calls__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
    MR_Word hlds__mark_tail_calls__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
    MR_Word hlds__mark_tail_calls__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 8)));
    MR_Word hlds__mark_tail_calls__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 9)));
    MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_28_28, (MR_Integer) 0)));

    hlds__mark_tail_calls__CallerProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_28_28, (MR_Integer) 1)));
    {
      hlds__mark_tail_calls__CallerPredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    }
    {
      hlds__mark_tail_calls__CallerName_16 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    }
    {
      hlds__mark_tail_calls__CallerArity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__mark_tail_calls__CallerPredInfo_14);
    }
    {
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (hlds__mark_tail_calls__CallerName_16));
    }
    {
      hlds__mark_tail_calls__CallerId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 0) = ((MR_Box) (hlds__mark_tail_calls__CallerPredOrFunc_15));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 1) = ((MR_Box) (hlds__mark_tail_calls__V_29_29));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CallerId_18, 2) = ((MR_Box) (hlds__mark_tail_calls__CallerArity_17));
    }
    hlds__mark_tail_calls__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    hlds__mark_tail_calls__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    hlds__mark_tail_calls__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    hlds__mark_tail_calls__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    hlds__mark_tail_calls__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
    hlds__mark_tail_calls__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
    hlds__mark_tail_calls__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
    hlds__mark_tail_calls__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
    hlds__mark_tail_calls__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 8)));
    hlds__mark_tail_calls__Specs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_26, (MR_Integer) 9)));
    switch (hlds__mark_tail_calls__SelfOrMutualRec_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__CalleePredInfo_21;
          MR_Word hlds__mark_tail_calls__CalleePredOrFunc_22;
          MR_Word hlds__mark_tail_calls__CalleeName_23;
          MR_Integer hlds__mark_tail_calls__CalleeArity_24;
          MR_Word hlds__mark_tail_calls__CalleeId_25;
          MR_Word hlds__mark_tail_calls__V_31_31;
          MR_String hlds__mark_tail_calls__V_32_32;

          {
            hlds__hlds_module__module_info_pred_info_3_p_0(hlds__mark_tail_calls__V_53_53, hlds__mark_tail_calls__CalleePredId_7, &hlds__mark_tail_calls__CalleePredInfo_21);
          }
          {
            hlds__mark_tail_calls__CalleePredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          }
          {
            hlds__mark_tail_calls__V_31_31 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          }
          {
            hlds__mark_tail_calls__V_32_32 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          }
          {
            hlds__mark_tail_calls__CalleeName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__CalleeName_23, 0) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__CalleeName_23, 1) = ((MR_Box) (hlds__mark_tail_calls__V_32_32));
          }
          {
            hlds__mark_tail_calls__CalleeArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__mark_tail_calls__CalleePredInfo_21);
          }
          {
            hlds__mark_tail_calls__CalleeId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 0) = ((MR_Box) (hlds__mark_tail_calls__CalleePredOrFunc_22));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeName_23));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleeId_25, 2) = ((MR_Box) (hlds__mark_tail_calls__CalleeArity_24));
          }
          {
            hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_7_p_0(hlds__mark_tail_calls__CallerId_18, hlds__mark_tail_calls__CallerProcId_13, hlds__mark_tail_calls__CalleeId_25, hlds__mark_tail_calls__WarnOrError_9, hlds__mark_tail_calls__Context_10, hlds__mark_tail_calls__Specs0_19, &hlds__mark_tail_calls__Specs_20);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(hlds__mark_tail_calls__CallerId_18, hlds__mark_tail_calls__CallerProcId_13, hlds__mark_tail_calls__Context_10, hlds__mark_tail_calls__WarnOrError_9, hlds__mark_tail_calls__Specs0_19, &hlds__mark_tail_calls__Specs_20);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_tail_calls__STATE_VARIABLE_Info_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__V_52_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__V_53_53));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__V_54_54));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__V_55_55));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__V_56_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__V_57_57));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__mark_tail_calls__V_58_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__V_59_59));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__mark_tail_calls__V_60_60));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__mark_tail_calls__Specs_20));
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
    MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word hlds__mark_tail_calls__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word hlds__mark_tail_calls__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word hlds__mark_tail_calls__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word hlds__mark_tail_calls__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    MR_Word hlds__mark_tail_calls__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));

    hlds__mark_tail_calls__WarnOrError_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, (MR_Integer) 0)))) & (MR_Integer) 1);
    hlds__mark_tail_calls__WarnNonTailSelfRec_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__mark_tail_calls__WarnNonTailMutualRec_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
        {
          hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_7, hlds__mark_tail_calls__SelfOrMutualRec_8, hlds__mark_tail_calls__WarnOrError_12, hlds__mark_tail_calls__Context_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, hlds__mark_tail_calls__STATE_VARIABLE_Info_17);
        }
      else
        {
          MR_Word hlds__mark_tail_calls__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_10, (MR_Integer) 0)));

          switch (hlds__mark_tail_calls__V_31_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                hlds__mark_tail_calls__report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_7, hlds__mark_tail_calls__SelfOrMutualRec_8, hlds__mark_tail_calls__WarnOrError_12, hlds__mark_tail_calls__Context_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_16, hlds__mark_tail_calls__STATE_VARIABLE_Info_17);
              }
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
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__Before_3,
  MR_Word * hlds__mark_tail_calls__After_4)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    if (((MR_tag((MR_Word) hlds__mark_tail_calls__Before_3)) == (MR_mktag((MR_Integer) 0))))
      {
        *hlds__mark_tail_calls__After_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[2]);
      }
    else
      *hlds__mark_tail_calls__After_4 = hlds__mark_tail_calls__Before_3;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_3,
  MR_Word * hlds__mark_tail_calls__SeenLaterRecCall_4)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    if (((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_3)) == (MR_mktag((MR_Integer) 0))))
      *hlds__mark_tail_calls__SeenLaterRecCall_4 = (MR_Integer) 1;
    else
      *hlds__mark_tail_calls__SeenLaterRecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail_3, (MR_Integer) 0)));
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_9, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Goal_16;
    MR_Word hlds__mark_tail_calls__AtTail_17;

    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Goal0_15, &hlds__mark_tail_calls__Goal_16, hlds__mark_tail_calls__AtTail0_8, &hlds__mark_tail_calls__AtTail_17, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_20, hlds__mark_tail_calls__STATE_VARIABLE_Info_21);
    }
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__AtTail_12;

    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_0_13, hlds__mark_tail_calls__STATE_VARIABLE_Disjunct_14, hlds__mark_tail_calls__AtTail0_8, &hlds__mark_tail_calls__AtTail_12, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_17, hlds__mark_tail_calls__STATE_VARIABLE_Info_18);
    }
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

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_6)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

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

        {
          hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__RevGoal0_13, &hlds__mark_tail_calls__RevGoal_15, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_3, &hlds__mark_tail_calls__STATE_VARIABLE_AtTail_23_23, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_Info_24_24);
        }
        {
          hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(hlds__mark_tail_calls__RevGoals0_14, &hlds__mark_tail_calls__RevGoals_16, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_23_23, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_4, hlds__mark_tail_calls__STATE_VARIABLE_Info_24_24, hlds__mark_tail_calls__STATE_VARIABLE_Info_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__mark_tail_calls__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__RevGoal_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__RevGoals_16));
        }
      }
  }
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
        {
          hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_11_11, ((MR_Box) (hlds__mark_tail_calls__ToVar_5)), ((MR_Box) (hlds__mark_tail_calls__Var0_7)));
        }
        if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__Var_9 = hlds__mark_tail_calls__FromVar_6;
            hlds__mark_tail_calls__Vars_10 = hlds__mark_tail_calls__Vars0_8;
            hlds__mark_tail_calls__succeeded = MR_TRUE;
          }
        else
          {
            hlds__mark_tail_calls__Var_9 = hlds__mark_tail_calls__Var0_7;
            {
              hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_5, hlds__mark_tail_calls__FromVar_6, hlds__mark_tail_calls__Vars0_8, &hlds__mark_tail_calls__Vars_10);
            }
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

    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv7_Case_10, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3), &hlds__mark_tail_calls__conv6_STATE_VARIABLE_SeenLaterRecCall_19, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv5_STATE_VARIABLE_Info_21);
    }
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

    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv2_STATE_VARIABLE_Disjunct_14, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_SeenLaterRecCall_16, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv0_STATE_VARIABLE_Info_18);
    }
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
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Info_134)
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
          {
            hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
          }
          *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__LHS_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__Unify0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__ModuleInfo_62;
          MR_Word hlds__mark_tail_calls__VarTypes_63;
          MR_Word hlds__mark_tail_calls__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_207_207;
          MR_Word hlds__mark_tail_calls__V_208_208;
          MR_Word hlds__mark_tail_calls__V_209_209;
          MR_Word hlds__mark_tail_calls__V_210_210;
          MR_Word hlds__mark_tail_calls__V_212_212;
          MR_Word hlds__mark_tail_calls__V_213_213;
          MR_Word hlds__mark_tail_calls__V_214_214;
          MR_Word hlds__mark_tail_calls__V_215_215;

          *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
          hlds__mark_tail_calls__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 0)));
          hlds__mark_tail_calls__ModuleInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 1)));
          hlds__mark_tail_calls__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 2)));
          hlds__mark_tail_calls__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 3)));
          hlds__mark_tail_calls__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 4)));
          hlds__mark_tail_calls__VarTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 5)));
          hlds__mark_tail_calls__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 6)));
          hlds__mark_tail_calls__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 7)));
          hlds__mark_tail_calls__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 8)));
          hlds__mark_tail_calls__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 9)));
          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_62, hlds__mark_tail_calls__VarTypes_63, hlds__mark_tail_calls__LHS_57);
          }
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__AtTail_10 = hlds__mark_tail_calls__AtTail0_9;
          else
            switch (MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_60)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
                }
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
                      {
                        hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_82, hlds__mark_tail_calls__FromVar_83, hlds__mark_tail_calls__Outputs0_84, &hlds__mark_tail_calls__Outputs_85);
                      }
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
                      *hlds__mark_tail_calls__AtTail_10 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[2]);
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
                }
                break;
            }
          *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133;
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
          MR_Word hlds__mark_tail_calls__V_225_225;
          MR_Word hlds__mark_tail_calls__V_226_226;
          MR_Word hlds__mark_tail_calls__V_227_227;
          MR_Word hlds__mark_tail_calls__V_229_229;
          MR_Word hlds__mark_tail_calls__V_230_230;
          MR_Word hlds__mark_tail_calls__V_231_231;
          MR_Word hlds__mark_tail_calls__V_232_232;
          MR_Word hlds__mark_tail_calls__V_233_233;
          MR_Word hlds__mark_tail_calls__SelfOrMutual_95;

          {
            hlds__mark_tail_calls__CalleePredProcId_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleePredProcId_92, 0) = ((MR_Box) (hlds__mark_tail_calls__CalleePredId_86));
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__CalleePredProcId_92, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeProcId_87));
          }
          hlds__mark_tail_calls__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 0)));
          hlds__mark_tail_calls__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 1)));
          hlds__mark_tail_calls__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 2)));
          hlds__mark_tail_calls__CurPredProcId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 3)));
          hlds__mark_tail_calls__CurSCCPredProcIds_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 4)));
          hlds__mark_tail_calls__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 5)));
          hlds__mark_tail_calls__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 6)));
          hlds__mark_tail_calls__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 7)));
          hlds__mark_tail_calls__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 8)));
          hlds__mark_tail_calls__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 9)));
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_89 == (MR_Integer) 1);
          if (hlds__mark_tail_calls__succeeded)
            {
              {
                hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(hlds__mark_tail_calls__CalleePredProcId_92, hlds__mark_tail_calls__CurPredProcId_93);
              }
              if (hlds__mark_tail_calls__succeeded)
                {
                  hlds__mark_tail_calls__SelfOrMutual_95 = (MR_Integer) 0;
                  hlds__mark_tail_calls__succeeded = MR_TRUE;
                }
              else
                {
                  {
                    hlds__mark_tail_calls__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__mark_tail_calls__CalleePredProcId_92)), hlds__mark_tail_calls__CurSCCPredProcIds_94);
                  }
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      hlds__mark_tail_calls__SelfOrMutual_95 = (MR_Integer) 1;
                      hlds__mark_tail_calls__succeeded = MR_TRUE;
                    }
                  else
                    {
                      hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
                    }
                }
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146;
              MR_Word hlds__mark_tail_calls__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 5)));
              MR_Word hlds__mark_tail_calls__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 6)));
              MR_Word hlds__mark_tail_calls__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 8)));
              MR_Word hlds__mark_tail_calls__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 9)));
              MR_Word hlds__mark_tail_calls__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 7)));
              MR_Word hlds__mark_tail_calls__TypeInfo_303_303;
              MR_Word hlds__mark_tail_calls__OutputVars_96;
              MR_Word hlds__mark_tail_calls__CalleePredInfo_97;
              MR_Word hlds__mark_tail_calls__CalleeArgTypes_98;
              MR_Word hlds__mark_tail_calls__CalleeProcInfo_99;
              MR_Word hlds__mark_tail_calls__CalleeArgModes_100;
              MR_Word hlds__mark_tail_calls__CalleeOutputVars_101;
              MR_Word hlds__mark_tail_calls__ModuleInfo_164;
              MR_Word hlds__mark_tail_calls__V_253_253;
              MR_Word hlds__mark_tail_calls__V_254_254;
              MR_Word hlds__mark_tail_calls__V_255_255;
              MR_Word hlds__mark_tail_calls__V_256_256;
              MR_Word hlds__mark_tail_calls__V_257_257;
              MR_Word hlds__mark_tail_calls__V_258_258;
              MR_Word hlds__mark_tail_calls__V_259_259;
              MR_Word hlds__mark_tail_calls__V_260_260;
              MR_Word hlds__mark_tail_calls__V_261_261;

              {
                hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 0) = ((MR_Box) (hlds__mark_tail_calls__V_243_243));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 1) = ((MR_Box) (hlds__mark_tail_calls__V_244_244));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 2) = ((MR_Box) (hlds__mark_tail_calls__V_245_245));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 3) = ((MR_Box) (hlds__mark_tail_calls__V_246_246));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 4) = ((MR_Box) (hlds__mark_tail_calls__V_247_247));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 5) = ((MR_Box) (hlds__mark_tail_calls__V_248_248));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 6) = ((MR_Box) (hlds__mark_tail_calls__V_249_249));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 7) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 8) = ((MR_Box) (hlds__mark_tail_calls__V_251_251));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, 9) = ((MR_Box) (hlds__mark_tail_calls__V_252_252));
              }
              hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_9)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__mark_tail_calls__succeeded)
                {
                  hlds__mark_tail_calls__OutputVars_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__AtTail0_9, (MR_Integer) 0)));
                  hlds__mark_tail_calls__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 0)));
                  hlds__mark_tail_calls__ModuleInfo_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 1)));
                  hlds__mark_tail_calls__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 2)));
                  hlds__mark_tail_calls__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 3)));
                  hlds__mark_tail_calls__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 4)));
                  hlds__mark_tail_calls__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 5)));
                  hlds__mark_tail_calls__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 6)));
                  hlds__mark_tail_calls__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 7)));
                  hlds__mark_tail_calls__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 8)));
                  hlds__mark_tail_calls__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 9)));
                  {
                    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__mark_tail_calls__ModuleInfo_164, hlds__mark_tail_calls__CalleePredId_86, &hlds__mark_tail_calls__CalleePredInfo_97);
                  }
                  {
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__CalleePredInfo_97, &hlds__mark_tail_calls__CalleeArgTypes_98);
                  }
                  {
                    hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__CalleePredInfo_97, hlds__mark_tail_calls__CalleeProcId_87, &hlds__mark_tail_calls__CalleeProcInfo_99);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__CalleeProcInfo_99, &hlds__mark_tail_calls__CalleeArgModes_100);
                  }
                  {
                    hlds__mark_tail_calls__find_output_args_5_p_0(hlds__mark_tail_calls__ModuleInfo_164, hlds__mark_tail_calls__CalleeArgTypes_98, hlds__mark_tail_calls__CalleeArgModes_100, hlds__mark_tail_calls__ArgVars_88, &hlds__mark_tail_calls__CalleeOutputVars_101);
                  }
                  hlds__mark_tail_calls__TypeInfo_303_303 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[2];
                  {
                    hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_303_303, ((MR_Box) (hlds__mark_tail_calls__OutputVars_96)), ((MR_Box) (hlds__mark_tail_calls__CalleeOutputVars_101)));
                  }
                }
              if (hlds__mark_tail_calls__succeeded)
                {
                  MR_Word hlds__mark_tail_calls__AddFeature_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 2)));
                  MR_Word hlds__mark_tail_calls__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 3)));
                  MR_Word hlds__mark_tail_calls__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 4)));
                  MR_Word hlds__mark_tail_calls__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 5)));
                  MR_Word hlds__mark_tail_calls__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 6)));
                  MR_Word hlds__mark_tail_calls__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 7)));
                  MR_Word hlds__mark_tail_calls__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 9)));
                  MR_Word hlds__mark_tail_calls__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, (MR_Integer) 8)));

                  switch (hlds__mark_tail_calls__AddFeature_102) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      switch (hlds__mark_tail_calls__SelfOrMutual_95) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
                            *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__mark_tail_calls__GoalInfo_103;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__AddFeature_102));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__V_262_262));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__V_263_263));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__V_264_264));
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__V_265_265));
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__V_266_266));
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__mark_tail_calls__V_267_267));
                              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__V_268_268));
                              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__mark_tail_calls__V_270_270));
                            }
                            {
                              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 10, hlds__mark_tail_calls__GoalInfo0_13, &hlds__mark_tail_calls__GoalInfo_103);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__mark_tail_calls__Goal_8 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_12));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_103));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__mark_tail_calls__GoalInfo_167;

                        {
                          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 11, hlds__mark_tail_calls__GoalInfo0_13, &hlds__mark_tail_calls__GoalInfo_167);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__mark_tail_calls__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_12));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_167));
                        }
                        *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
                        *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146;
                      }
                      break;
                  }
                }
              else
                {
                  MR_Word hlds__mark_tail_calls__Context_104;

                  *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
                  {
                    hlds__mark_tail_calls__Context_104 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__mark_tail_calls__GoalInfo0_13);
                  }
                  {
                    hlds__mark_tail_calls__maybe_report_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__CalleePredId_86, hlds__mark_tail_calls__SelfOrMutual_95, hlds__mark_tail_calls__Context_104, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__STATE_VARIABLE_Info_146_146, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
                  }
                }
              *hlds__mark_tail_calls__AtTail_10 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_3[1]);
            }
          else
            {
              *hlds__mark_tail_calls__Goal_8 = hlds__mark_tail_calls__Goal0_7;
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
              }
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133;
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
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10);
              }
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_283_283;
              MR_Word hlds__mark_tail_calls__ConjType_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Goals0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__RevGoals0_107;
              MR_Word hlds__mark_tail_calls__RevGoals_108;
              MR_Word hlds__mark_tail_calls__Goals_109;
              MR_Word hlds__mark_tail_calls__GoalExpr_110;
              MR_Word hlds__mark_tail_calls__AtTail1_172;

              switch (hlds__mark_tail_calls__ConjType_105) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_172);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__mark_tail_calls__AtTail1_172 = hlds__mark_tail_calls__AtTail0_9;
                  break;
              }
              hlds__mark_tail_calls__TypeCtorInfo_283_283 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_283_283, hlds__mark_tail_calls__Goals0_106, &hlds__mark_tail_calls__RevGoals0_107);
              }
              {
                hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(hlds__mark_tail_calls__RevGoals0_107, &hlds__mark_tail_calls__RevGoals_108, hlds__mark_tail_calls__AtTail1_172, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
              }
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_283_283, hlds__mark_tail_calls__RevGoals_108, &hlds__mark_tail_calls__Goals_109);
              }
              {
                hlds__mark_tail_calls__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_110, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_105));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_110, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_109));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_110));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_290_290;
              MR_Word hlds__mark_tail_calls__Disjs0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall0_112;
              MR_Word hlds__mark_tail_calls__Disjs_113;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall_114;
              MR_Word hlds__mark_tail_calls__V_143_143;
              MR_Word hlds__mark_tail_calls__GoalExpr_173;
              MR_Box hlds__mark_tail_calls__conv4_SeenLaterRecCall_114;
              MR_Box hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_134;

              {
                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__SeenLaterRecCall0_112);
              }
              {
                hlds__mark_tail_calls__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_143_143, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_143_143, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_143_143, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_143_143, 3) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_9));
              }
              hlds__mark_tail_calls__TypeCtorInfo_290_290 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_foldl2_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_290_290, hlds__mark_tail_calls__TypeCtorInfo_290_290, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0, hlds__mark_tail_calls__V_143_143, hlds__mark_tail_calls__Disjs0_111, &hlds__mark_tail_calls__Disjs_113, ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall0_112)), &hlds__mark_tail_calls__conv4_SeenLaterRecCall_114, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133)), &hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_134);
              }
              hlds__mark_tail_calls__SeenLaterRecCall_114 = ((MR_Word) hlds__mark_tail_calls__conv4_SeenLaterRecCall_114);
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = ((MR_Word) hlds__mark_tail_calls__conv3_STATE_VARIABLE_Info_134);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__AtTail_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall_114));
              }
              {
                hlds__mark_tail_calls__GoalExpr_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_173, 1) = ((MR_Box) (hlds__mark_tail_calls__Disjs_113));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_173));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_299_299;
              MR_Word hlds__mark_tail_calls__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__CanFail_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Cases0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Cases_118;
              MR_Word hlds__mark_tail_calls__V_141_141;
              MR_Word hlds__mark_tail_calls__GoalExpr_174;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall0_175;
              MR_Word hlds__mark_tail_calls__SeenLaterRecCall_176;
              MR_Box hlds__mark_tail_calls__conv9_SeenLaterRecCall_176;
              MR_Box hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_134;

              {
                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__SeenLaterRecCall0_175);
              }
              {
                hlds__mark_tail_calls__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_141_141, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_141_141, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_141_141, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_141_141, 3) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_9));
              }
              hlds__mark_tail_calls__TypeCtorInfo_299_299 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_foldl2_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_299_299, hlds__mark_tail_calls__TypeCtorInfo_299_299, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0, hlds__mark_tail_calls__V_141_141, hlds__mark_tail_calls__Cases0_117, &hlds__mark_tail_calls__Cases_118, ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall0_175)), &hlds__mark_tail_calls__conv9_SeenLaterRecCall_176, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133)), &hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_134);
              }
              hlds__mark_tail_calls__SeenLaterRecCall_176 = ((MR_Word) hlds__mark_tail_calls__conv9_SeenLaterRecCall_176);
              *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = ((MR_Word) hlds__mark_tail_calls__conv8_STATE_VARIABLE_Info_134);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__AtTail_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenLaterRecCall_176));
              }
              {
                hlds__mark_tail_calls__GoalExpr_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_174, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_115));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_174, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_116));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_174, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_174));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__mark_tail_calls__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__SubGoal_34;
              MR_Word hlds__mark_tail_calls__V_163_163;

              switch (MR_tag((MR_Word) hlds__mark_tail_calls__Reason_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__mark_tail_calls__AtTail1_40;

                    {
                      hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_40);
                    }
                    {
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail1_40, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__mark_tail_calls__HeadWarning_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_27, (MR_Integer) 0)));
                    MR_Word hlds__mark_tail_calls__TailWarnings_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_27, (MR_Integer) 1)));

                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadWarning_29 == (MR_Integer) 1);
                    if (!(hlds__mark_tail_calls__succeeded))
                      {
                        {
                          hlds__mark_tail_calls__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 1)), hlds__mark_tail_calls__TailWarnings_30);
                        }
                      }
                    if (hlds__mark_tail_calls__succeeded)
                      {
                        MR_Word hlds__mark_tail_calls__OldWarnParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 6)));
                        MR_Word hlds__mark_tail_calls__InnerWarnParams_32;
                        MR_Word hlds__mark_tail_calls__InnerInfo0_33;
                        MR_Word hlds__mark_tail_calls__InnerInfo_35;
                        MR_Word hlds__mark_tail_calls__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 0)));
                        MR_Word hlds__mark_tail_calls__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 1)));
                        MR_Word hlds__mark_tail_calls__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 2)));
                        MR_Word hlds__mark_tail_calls__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 3)));
                        MR_Word hlds__mark_tail_calls__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 4)));
                        MR_Word hlds__mark_tail_calls__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 5)));
                        MR_Word hlds__mark_tail_calls__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 7)));
                        MR_Word hlds__mark_tail_calls__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 8)));
                        MR_Word hlds__mark_tail_calls__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 9)));
                        MR_Word hlds__mark_tail_calls__V_187_187;
                        MR_Word hlds__mark_tail_calls__V_188_188;
                        MR_Word hlds__mark_tail_calls__V_189_189;
                        MR_Word hlds__mark_tail_calls__V_190_190;
                        MR_Word hlds__mark_tail_calls__V_191_191;
                        MR_Word hlds__mark_tail_calls__V_192_192;
                        MR_Word hlds__mark_tail_calls__V_194_194;
                        MR_Word hlds__mark_tail_calls__V_195_195;
                        MR_Word hlds__mark_tail_calls__V_196_196;
                        MR_Word hlds__mark_tail_calls__V_193_193;
                        MR_Word hlds__mark_tail_calls__V_197_197;
                        MR_Word hlds__mark_tail_calls__V_198_198;
                        MR_Word hlds__mark_tail_calls__V_199_199;
                        MR_Word hlds__mark_tail_calls__V_200_200;
                        MR_Word hlds__mark_tail_calls__V_201_201;
                        MR_Word hlds__mark_tail_calls__V_202_202;
                        MR_Word hlds__mark_tail_calls__V_204_204;
                        MR_Word hlds__mark_tail_calls__V_205_205;
                        MR_Word hlds__mark_tail_calls__V_206_206;
                        MR_Word hlds__mark_tail_calls__V_203_203;

                        {
                          hlds__mark_tail_calls__InnerWarnParams_32 = hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0();
                        }
                        hlds__mark_tail_calls__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 0)));
                        hlds__mark_tail_calls__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 1)));
                        hlds__mark_tail_calls__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 2)));
                        hlds__mark_tail_calls__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 3)));
                        hlds__mark_tail_calls__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 4)));
                        hlds__mark_tail_calls__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 5)));
                        hlds__mark_tail_calls__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 6)));
                        hlds__mark_tail_calls__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 7)));
                        hlds__mark_tail_calls__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 8)));
                        hlds__mark_tail_calls__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, (MR_Integer) 9)));
                        {
                          hlds__mark_tail_calls__InnerInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 0) = ((MR_Box) (hlds__mark_tail_calls__V_187_187));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 1) = ((MR_Box) (hlds__mark_tail_calls__V_188_188));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 2) = ((MR_Box) (hlds__mark_tail_calls__V_189_189));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 3) = ((MR_Box) (hlds__mark_tail_calls__V_190_190));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 4) = ((MR_Box) (hlds__mark_tail_calls__V_191_191));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 5) = ((MR_Box) (hlds__mark_tail_calls__V_192_192));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 6) = ((MR_Box) (hlds__mark_tail_calls__InnerWarnParams_32));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 7) = ((MR_Box) (hlds__mark_tail_calls__V_194_194));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 8) = ((MR_Box) (hlds__mark_tail_calls__V_195_195));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo0_33, 9) = ((MR_Box) (hlds__mark_tail_calls__V_196_196));
                        }
                        {
                          hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__InnerInfo0_33, &hlds__mark_tail_calls__InnerInfo_35);
                        }
                        hlds__mark_tail_calls__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 0)));
                        hlds__mark_tail_calls__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 1)));
                        hlds__mark_tail_calls__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 2)));
                        hlds__mark_tail_calls__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 3)));
                        hlds__mark_tail_calls__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 4)));
                        hlds__mark_tail_calls__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 5)));
                        hlds__mark_tail_calls__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 6)));
                        hlds__mark_tail_calls__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 7)));
                        hlds__mark_tail_calls__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 8)));
                        hlds__mark_tail_calls__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, (MR_Integer) 9)));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__mark_tail_calls__STATE_VARIABLE_Info_134 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__V_197_197));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__V_198_198));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__V_199_199));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_tail_calls__V_200_200));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_tail_calls__V_201_201));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_tail_calls__V_202_202));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__mark_tail_calls__OldWarnParams_31));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__mark_tail_calls__V_204_204));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__mark_tail_calls__V_205_205));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__mark_tail_calls__V_206_206));
                        }
                      }
                    else
                      {
                        hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
                      }
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
                      {
                        hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
                      }
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

                        {
                          hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTail1_40);
                        }
                        {
                          hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__SubGoal0_28, &hlds__mark_tail_calls__SubGoal_34, hlds__mark_tail_calls__AtTail1_40, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                hlds__mark_tail_calls__V_163_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_163_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_163_163, 1) = ((MR_Box) (hlds__mark_tail_calls__Reason_27));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_163_163, 2) = ((MR_Box) (hlds__mark_tail_calls__SubGoal_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__V_163_163));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__mark_tail_calls__Vars_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Cond0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Then0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Else0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__Then_123;
              MR_Word hlds__mark_tail_calls__AtTailBeforeThen_124;
              MR_Word hlds__mark_tail_calls__Else_125;
              MR_Word hlds__mark_tail_calls__AtTailBeforeElse_126;
              MR_Word hlds__mark_tail_calls__SeenRecCallInThen_127;
              MR_Word hlds__mark_tail_calls__SeenRecCallInElse_128;
              MR_Word hlds__mark_tail_calls__SeenRecCallAfterCond_129;
              MR_Word hlds__mark_tail_calls__AtTailAfterCond_130;
              MR_Word hlds__mark_tail_calls__Cond_131;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_138_138;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Info_139_139;
              MR_Word hlds__mark_tail_calls__GoalExpr_177;

              {
                hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Then0_121, &hlds__mark_tail_calls__Then_123, hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTailBeforeThen_124, hlds__mark_tail_calls__STATE_VARIABLE_Info_0_133, &hlds__mark_tail_calls__STATE_VARIABLE_Info_138_138);
              }
              {
                hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Else0_122, &hlds__mark_tail_calls__Else_125, hlds__mark_tail_calls__AtTail0_9, &hlds__mark_tail_calls__AtTailBeforeElse_126, hlds__mark_tail_calls__STATE_VARIABLE_Info_138_138, &hlds__mark_tail_calls__STATE_VARIABLE_Info_139_139);
              }
              {
                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTailBeforeThen_124, &hlds__mark_tail_calls__SeenRecCallInThen_127);
              }
              {
                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(hlds__mark_tail_calls__AtTailBeforeElse_126, &hlds__mark_tail_calls__SeenRecCallInElse_128);
              }
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__SeenRecCallInThen_127 == (MR_Integer) 0);
              if (!(hlds__mark_tail_calls__succeeded))
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__SeenRecCallInElse_128 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__SeenRecCallAfterCond_129 = (MR_Integer) 0;
              else
                hlds__mark_tail_calls__SeenRecCallAfterCond_129 = (MR_Integer) 1;
              {
                hlds__mark_tail_calls__AtTailAfterCond_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTailAfterCond_130, 0) = ((MR_Box) (hlds__mark_tail_calls__SeenRecCallAfterCond_129));
              }
              {
                hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Cond0_120, &hlds__mark_tail_calls__Cond_131, hlds__mark_tail_calls__AtTailAfterCond_130, hlds__mark_tail_calls__AtTail_10, hlds__mark_tail_calls__STATE_VARIABLE_Info_139_139, hlds__mark_tail_calls__STATE_VARIABLE_Info_134);
              }
              {
                hlds__mark_tail_calls__GoalExpr_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_177, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_119));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_177, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_131));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_177, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_123));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_177, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_177));
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

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

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
                {
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Types_9, hlds__mark_tail_calls__Modes_11, hlds__mark_tail_calls__Vars_13, &hlds__mark_tail_calls__TailOutputVars_15);
                }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    {
                      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__TopFunctorMode_19);
                    }
                    switch (hlds__mark_tail_calls__TopFunctorMode_19) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        {
                          hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__mark_tail_calls__IsDummy_20;

                          {
                            hlds__mark_tail_calls__IsDummy_20 = check_hlds__type_util__check_dummy_type_2_f_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Type_8);
                          }
                          switch (hlds__mark_tail_calls__IsDummy_20) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                hlds__mark_tail_calls__succeeded = mercury__builtin__false_0_p_0();
                              }
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

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_6, hlds__mark_tail_calls__Types_7, hlds__mark_tail_calls__Modes_8, hlds__mark_tail_calls__Vars_9, &hlds__mark_tail_calls__OutputsPrime_11);
    }
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

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_12_p_0(
  MR_Word hlds__mark_tail_calls__AddGoalFeature_13,
  MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_14,
  MR_Word hlds__mark_tail_calls__ModuleInfo_15,
  MR_Word hlds__mark_tail_calls__SCC_16,
  MR_Word hlds__mark_tail_calls__PredId_17,
  MR_Integer hlds__mark_tail_calls__ProcId_18,
  MR_Word hlds__mark_tail_calls__PredInfo_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58,
  MR_Word * hlds__mark_tail_calls__WasProcChanged_21,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_60)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Detism_23;
    MR_Word hlds__mark_tail_calls__SolnCount_25;
    MR_Word hlds__mark_tail_calls___CanFail_24;

    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__Detism_23);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_23, &hlds__mark_tail_calls___CanFail_24, &hlds__mark_tail_calls__SolnCount_25);
    }
    switch (hlds__mark_tail_calls__SolnCount_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__WasProcChanged_21 = (MR_Integer) 0;
          *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57;
          *hlds__mark_tail_calls__STATE_VARIABLE_Specs_60 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__V_61_61;
          MR_Word hlds__mark_tail_calls__V_62_62;
          MR_Word hlds__mark_tail_calls___WarnOrError_26;

          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__AddGoalFeature_13 == (MR_Integer) 0);
          if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls___WarnOrError_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_14, (MR_Integer) 0)))) & (MR_Integer) 1);
              hlds__mark_tail_calls__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_14, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              hlds__mark_tail_calls__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_61_61 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_62_62 == (MR_Integer) 0);
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              *hlds__mark_tail_calls__WasProcChanged_21 = (MR_Integer) 0;
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_60 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59;
              *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57;
            }
          else
            {
              MR_Word hlds__mark_tail_calls__Types_27;
              MR_Word hlds__mark_tail_calls__Goal0_28;
              MR_Word hlds__mark_tail_calls__Modes_29;
              MR_Word hlds__mark_tail_calls__HeadVars_30;
              MR_Word hlds__mark_tail_calls__VarTypes_31;
              MR_Word hlds__mark_tail_calls__Outputs_32;
              MR_Word hlds__mark_tail_calls__Info0_33;
              MR_Word hlds__mark_tail_calls__Goal_34;
              MR_Word hlds__mark_tail_calls__Info_36;
              MR_Word hlds__mark_tail_calls__FoundAnyRecCalls_44;
              MR_Word hlds__mark_tail_calls__FoundSelfTailRecCalls_45;
              MR_Word hlds__mark_tail_calls__GoalSpecs_46;
              MR_Word hlds__mark_tail_calls__TailCallEvents_56;
              MR_Word hlds__mark_tail_calls__V_63_63;
              MR_Word hlds__mark_tail_calls__V_67_67;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_70_70;
              MR_Word hlds__mark_tail_calls__OutputsPrime_79;
              MR_Word hlds__mark_tail_calls__V_35_35;
              MR_Word hlds__mark_tail_calls__V_37_37;
              MR_Word hlds__mark_tail_calls__V_38_38;
              MR_Word hlds__mark_tail_calls__V_39_39;
              MR_Word hlds__mark_tail_calls__V_40_40;
              MR_Word hlds__mark_tail_calls__V_41_41;
              MR_Word hlds__mark_tail_calls__V_42_42;
              MR_Word hlds__mark_tail_calls__V_43_43;

              {
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_19, &hlds__mark_tail_calls__Types_27);
              }
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__Goal0_28);
              }
              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__Modes_29);
              }
              {
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__HeadVars_30);
              }
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__VarTypes_31);
              }
              {
                hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_15, hlds__mark_tail_calls__Types_27, hlds__mark_tail_calls__Modes_29, hlds__mark_tail_calls__HeadVars_30, &hlds__mark_tail_calls__OutputsPrime_79);
              }
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__Outputs_32 = hlds__mark_tail_calls__OutputsPrime_79;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
                    return;
                  }
                }
              {
                hlds__mark_tail_calls__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_63_63, 0) = ((MR_Box) (hlds__mark_tail_calls__PredId_17));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_63_63, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_18));
              }
              {
                hlds__mark_tail_calls__Info0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 0) = ((MR_Box) (hlds__mark_tail_calls__AddGoalFeature_13));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 1) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_15));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 2) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_19));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 3) = ((MR_Box) (hlds__mark_tail_calls__V_63_63));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 4) = ((MR_Box) (hlds__mark_tail_calls__SCC_16));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 5) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_31));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 6) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecParams_14));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 7) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 8) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info0_33, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__mark_tail_calls__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_67_67, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_32));
              }
              {
                hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(hlds__mark_tail_calls__Goal0_28, &hlds__mark_tail_calls__Goal_34, hlds__mark_tail_calls__V_67_67, &hlds__mark_tail_calls__V_35_35, hlds__mark_tail_calls__Info0_33, &hlds__mark_tail_calls__Info_36);
              }
              hlds__mark_tail_calls__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 0)));
              hlds__mark_tail_calls__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 1)));
              hlds__mark_tail_calls__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 2)));
              hlds__mark_tail_calls__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 3)));
              hlds__mark_tail_calls__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 4)));
              hlds__mark_tail_calls__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 5)));
              hlds__mark_tail_calls__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 6)));
              hlds__mark_tail_calls__FoundAnyRecCalls_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 7)));
              hlds__mark_tail_calls__FoundSelfTailRecCalls_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 8)));
              hlds__mark_tail_calls__GoalSpecs_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_36, (MR_Integer) 9)));
              {
                hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_34, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_57, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68);
              }
              switch (hlds__mark_tail_calls__FoundAnyRecCalls_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__mark_tail_calls__STATE_VARIABLE_Specs_70_70 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_47;

                    {
                      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68, &hlds__mark_tail_calls__MaybeRequireTailRec_47);
                    }
                    if ((hlds__mark_tail_calls__MaybeRequireTailRec_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__mark_tail_calls__STATE_VARIABLE_Specs_70_70 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59;
                    else
                      {
                        MR_Word hlds__mark_tail_calls__RequireTailRecInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_47, (MR_Integer) 0)));
                        MR_Word hlds__mark_tail_calls__Context_51;
                        MR_Word hlds__mark_tail_calls__PredOrFunc_52;
                        MR_String hlds__mark_tail_calls__PredName_53;
                        MR_Integer hlds__mark_tail_calls__PredArity_54;
                        MR_Word hlds__mark_tail_calls__SimpleCallId_55;
                        MR_Word hlds__mark_tail_calls__V_69_69;

                        if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailRecInfo_48)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word hlds__mark_tail_calls__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_48, (MR_Integer) 0)))) & (MR_Integer) 1);
                            MR_Word hlds__mark_tail_calls__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_48, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                            hlds__mark_tail_calls__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailRecInfo_48, (MR_Integer) 1)));
                          }
                        else
                          hlds__mark_tail_calls__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__RequireTailRecInfo_48, (MR_Integer) 0)));
                        {
                          hlds__mark_tail_calls__PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_19);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__mark_tail_calls__PredInfo_19, &hlds__mark_tail_calls__PredName_53);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(hlds__mark_tail_calls__PredInfo_19, &hlds__mark_tail_calls__PredArity_54);
                        }
                        {
                          hlds__mark_tail_calls__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_69_69, 0) = ((MR_Box) (hlds__mark_tail_calls__PredName_53));
                        }
                        {
                          hlds__mark_tail_calls__SimpleCallId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_55, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_52));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_55, 1) = ((MR_Box) (hlds__mark_tail_calls__V_69_69));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_55, 2) = ((MR_Box) (hlds__mark_tail_calls__PredArity_54));
                        }
                        {
                          hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(hlds__mark_tail_calls__SimpleCallId_55, hlds__mark_tail_calls__Context_51, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_59, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_70_70);
                        }
                      }
                  }
                  break;
              }
              switch (hlds__mark_tail_calls__FoundSelfTailRecCalls_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__mark_tail_calls__TailCallEvents_56 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  hlds__mark_tail_calls__TailCallEvents_56 = (MR_Integer) 1;
                  break;
              }
              switch (hlds__mark_tail_calls__AddGoalFeature_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_56, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58);
                  }
                  break;
                case (MR_Integer) 2:
                  *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68;
                  break;
                case (MR_Integer) 0:
                  *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_58 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_68_68;
                  break;
              }
              {
                *hlds__mark_tail_calls__STATE_VARIABLE_Specs_60 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__GoalSpecs_46, hlds__mark_tail_calls__STATE_VARIABLE_Specs_70_70);
              }
              *hlds__mark_tail_calls__WasProcChanged_21 = (MR_Integer) 1;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_code_gen_10_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__HeadVar__5_5,
  MR_Word hlds__mark_tail_calls__HeadVar__6_6,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_8,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_9,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__mark_tail_calls__succeeded;

        if ((hlds__mark_tail_calls__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_10 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_9;
            *hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_8 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7;
          }
        else
          {
            MR_Integer hlds__mark_tail_calls__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__ProcIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__ProcInfo0_31;
            MR_Word hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32;
            MR_Word hlds__mark_tail_calls__SCC_33;
            MR_Word hlds__mark_tail_calls__ProcInfo_34;
            MR_Word hlds__mark_tail_calls__WasProcChanged_35;
            MR_Word hlds__mark_tail_calls__V_40_40;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_41_41;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_42_42;
            MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_50;
            MR_Box hlds__mark_tail_calls__conv0_SCC_33;

            {
              hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7, hlds__mark_tail_calls__ProcId_27, &hlds__mark_tail_calls__ProcInfo0_31);
            }
            {
              hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__ProcInfo0_31, &hlds__mark_tail_calls__MaybeRequireTailRec_50);
            }
            if ((hlds__mark_tail_calls__MaybeRequireTailRec_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32 = hlds__mark_tail_calls__HeadVar__2_2;
            else
              {
                MR_Word hlds__mark_tail_calls__Pragma_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_50, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_51)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word hlds__mark_tail_calls__WarnOrError_53 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_51, (MR_Integer) 0)))) & (MR_Integer) 1);
                    MR_Word hlds__mark_tail_calls__RecType_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_51, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word hlds__mark_tail_calls__SelfRec_56;
                    MR_Word hlds__mark_tail_calls__MutualRec_57;
                    MR_Word hlds__mark_tail_calls___Context_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_51, (MR_Integer) 1)));

                    switch (hlds__mark_tail_calls__RecType_54) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          hlds__mark_tail_calls__SelfRec_56 = (MR_Integer) 1;
                          hlds__mark_tail_calls__MutualRec_57 = (MR_Integer) 1;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          hlds__mark_tail_calls__SelfRec_56 = (MR_Integer) 1;
                          hlds__mark_tail_calls__MutualRec_57 = (MR_Integer) 0;
                        }
                        break;
                    }
                    {
                      hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_53 | ((((hlds__mark_tail_calls__SelfRec_56 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_57 << (MR_Integer) 2)))))));
                    }
                  }
                else
                  {
                    hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
                  }
              }
            {
              hlds__mark_tail_calls__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_40_40, 0) = ((MR_Box) (hlds__mark_tail_calls__HeadVar__5_5));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_40_40, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_27));
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__HeadVar__4_4, ((MR_Box) (hlds__mark_tail_calls__V_40_40)), &hlds__mark_tail_calls__conv0_SCC_33);
            }
            hlds__mark_tail_calls__SCC_33 = ((MR_Word) hlds__mark_tail_calls__conv0_SCC_33);
            {
              hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_12_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__WarnNonTailRecParamsForProc_32, hlds__mark_tail_calls__HeadVar__3_3, hlds__mark_tail_calls__SCC_33, hlds__mark_tail_calls__HeadVar__5_5, hlds__mark_tail_calls__ProcId_27, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7, hlds__mark_tail_calls__ProcInfo0_31, &hlds__mark_tail_calls__ProcInfo_34, &hlds__mark_tail_calls__WasProcChanged_35, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_9, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_41_41);
            }
            switch (hlds__mark_tail_calls__WasProcChanged_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(hlds__mark_tail_calls__ProcId_27, hlds__mark_tail_calls__ProcInfo_34, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7, &hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_42_42);
                }
                break;
              case (MR_Integer) 0:
                hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_42_42 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__mark_tail_calls__HeadVar__6__tmp_copy_6 = hlds__mark_tail_calls__ProcIds_28;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0__tmp_copy_7 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_42_42;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0__tmp_copy_9 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_41_41;

              hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_9 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0__tmp_copy_9;
              hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_7 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0__tmp_copy_7;
              hlds__mark_tail_calls__HeadVar__6_6 = hlds__mark_tail_calls__HeadVar__6__tmp_copy_6;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_6_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__mark_tail_calls__succeeded;

        if ((hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_6 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5;
        else
          {
            MR_Word hlds__mark_tail_calls__TypeCtorInfo_37_37;
            MR_Word hlds__mark_tail_calls__TypeCtorInfo_38_38;
            MR_Word hlds__mark_tail_calls__TypeCtorInfo_40_40;
            MR_Word hlds__mark_tail_calls__PredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__PredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__PredProcId_16, (MR_Integer) 0)));
            MR_Integer hlds__mark_tail_calls__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__PredProcId_16, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__PredTable0_21;
            MR_Word hlds__mark_tail_calls__PredInfo0_22;
            MR_Word hlds__mark_tail_calls__ProcTable0_23;
            MR_Word hlds__mark_tail_calls__ProcInfo0_24;
            MR_Word hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25;
            MR_Word hlds__mark_tail_calls__ProcInfo_26;
            MR_Word hlds__mark_tail_calls__ProcTable_29;
            MR_Word hlds__mark_tail_calls__PredInfo_30;
            MR_Word hlds__mark_tail_calls__PredTable_31;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_35_35;
            MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_44;
            MR_Box hlds__mark_tail_calls__conv0_PredInfo0_22;
            MR_Box hlds__mark_tail_calls__conv1_ProcInfo0_24;
            MR_Word hlds__mark_tail_calls___WasProcChanged_27;
            MR_Word hlds__mark_tail_calls___Specs_28;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5, &hlds__mark_tail_calls__PredTable0_21);
            }
            hlds__mark_tail_calls__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            hlds__mark_tail_calls__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(hlds__mark_tail_calls__TypeCtorInfo_37_37, hlds__mark_tail_calls__TypeCtorInfo_38_38, hlds__mark_tail_calls__PredTable0_21, ((MR_Box) (hlds__mark_tail_calls__PredId_19)), &hlds__mark_tail_calls__conv0_PredInfo0_22);
            }
            hlds__mark_tail_calls__PredInfo0_22 = ((MR_Word) hlds__mark_tail_calls__conv0_PredInfo0_22);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__mark_tail_calls__PredInfo0_22, &hlds__mark_tail_calls__ProcTable0_23);
            }
            hlds__mark_tail_calls__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__mark_tail_calls__TypeCtorInfo_40_40, hlds__mark_tail_calls__ProcTable0_23, hlds__mark_tail_calls__ProcId_20, &hlds__mark_tail_calls__conv1_ProcInfo0_24);
            }
            hlds__mark_tail_calls__ProcInfo0_24 = ((MR_Word) hlds__mark_tail_calls__conv1_ProcInfo0_24);
            {
              hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__ProcInfo0_24, &hlds__mark_tail_calls__MaybeRequireTailRec_44);
            }
            if ((hlds__mark_tail_calls__MaybeRequireTailRec_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25 = hlds__mark_tail_calls__HeadVar__2_2;
            else
              {
                MR_Word hlds__mark_tail_calls__Pragma_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_44, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_45)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word hlds__mark_tail_calls__WarnOrError_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_45, (MR_Integer) 0)))) & (MR_Integer) 1);
                    MR_Word hlds__mark_tail_calls__RecType_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_45, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word hlds__mark_tail_calls__SelfRec_50;
                    MR_Word hlds__mark_tail_calls__MutualRec_51;
                    MR_Word hlds__mark_tail_calls___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_45, (MR_Integer) 1)));

                    switch (hlds__mark_tail_calls__RecType_48) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          hlds__mark_tail_calls__SelfRec_50 = (MR_Integer) 1;
                          hlds__mark_tail_calls__MutualRec_51 = (MR_Integer) 1;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          hlds__mark_tail_calls__SelfRec_50 = (MR_Integer) 1;
                          hlds__mark_tail_calls__MutualRec_51 = (MR_Integer) 0;
                        }
                        break;
                    }
                    {
                      hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_47 | ((((hlds__mark_tail_calls__SelfRec_50 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_51 << (MR_Integer) 2)))))));
                    }
                  }
                else
                  {
                    hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
                  }
              }
            {
              hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_12_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__WarnNonTailRecParamsForProc_25, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5, hlds__mark_tail_calls__HeadVar__3_3, hlds__mark_tail_calls__PredId_19, hlds__mark_tail_calls__ProcId_20, hlds__mark_tail_calls__PredInfo0_22, hlds__mark_tail_calls__ProcInfo0_24, &hlds__mark_tail_calls__ProcInfo_26, &hlds__mark_tail_calls___WasProcChanged_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__mark_tail_calls___Specs_28);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_40_40, hlds__mark_tail_calls__ProcId_20, ((MR_Box) (hlds__mark_tail_calls__ProcInfo_26)), hlds__mark_tail_calls__ProcTable0_23, &hlds__mark_tail_calls__ProcTable_29);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__mark_tail_calls__ProcTable_29, hlds__mark_tail_calls__PredInfo0_22, &hlds__mark_tail_calls__PredInfo_30);
            }
            {
              mercury__map__det_update_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_37_37, hlds__mark_tail_calls__TypeCtorInfo_38_38, ((MR_Box) (hlds__mark_tail_calls__PredId_19)), ((MR_Box) (hlds__mark_tail_calls__PredInfo_30)), hlds__mark_tail_calls__PredTable0_21, &hlds__mark_tail_calls__PredTable_31);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__mark_tail_calls__PredTable_31, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__mark_tail_calls__HeadVar__4__tmp_copy_4 = hlds__mark_tail_calls__PredProcIds_17;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_35_35;

              hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_5 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
              hlds__mark_tail_calls__HeadVar__4_4 = hlds__mark_tail_calls__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_5_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__mark_tail_calls__succeeded;

        if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_5 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4;
        else
          {
            MR_Word hlds__mark_tail_calls__SCCEntry_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__SCCEntries_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__SCC_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_13, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__V_21_21;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_22_22;
            MR_Word hlds__mark_tail_calls___CalledFromHigherSCC_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_13, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls___Exported_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SCCEntry_13, (MR_Integer) 2)));

            {
              hlds__mark_tail_calls__V_21_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__mark_tail_calls__SCC_16);
            }
            {
              hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_6_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__SCC_16, hlds__mark_tail_calls__V_21_21, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__mark_tail_calls__HeadVar__3__tmp_copy_3 = hlds__mark_tail_calls__SCCEntries_14;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_22_22;

              hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_4 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
              hlds__mark_tail_calls__HeadVar__3_3 = hlds__mark_tail_calls__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__Pieces_11;
    MR_Word hlds__mark_tail_calls__Msg_12;
    MR_Word hlds__mark_tail_calls__Spec_13;
    MR_Word hlds__mark_tail_calls__V_18_18;
    MR_Word hlds__mark_tail_calls__V_21_21;
    MR_Word hlds__mark_tail_calls__V_24_24;
    MR_Word hlds__mark_tail_calls__V_25_25;
    MR_Word hlds__mark_tail_calls__V_26_26;
    MR_Word hlds__mark_tail_calls__V_29_29;
    MR_Word hlds__mark_tail_calls__V_31_31;
    MR_Word hlds__mark_tail_calls__V_34_34;
    MR_Word hlds__mark_tail_calls__V_35_35;
    MR_Word hlds__mark_tail_calls__V_45_45;
    MR_Word hlds__mark_tail_calls__V_46_46;
    MR_Word hlds__mark_tail_calls__V_50_50;
    MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 1)));
    MR_Integer hlds__mark_tail_calls__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_5, (MR_Integer) 2)));

    {
      hlds__mark_tail_calls__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_5));
    }
    {
      hlds__mark_tail_calls__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_35_35, 1) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_8));
    }
    {
      hlds__mark_tail_calls__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 0) = ((MR_Box) (hlds__mark_tail_calls__V_35_35));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[12])));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_34_34));
    }
    {
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 1) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
    }
    {
      hlds__mark_tail_calls__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 1) = ((MR_Box) (hlds__mark_tail_calls__V_29_29));
    }
    {
      hlds__mark_tail_calls__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 0) = ((MR_Box) (hlds__mark_tail_calls__V_25_25));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 1) = ((MR_Box) (hlds__mark_tail_calls__V_26_26));
    }
    {
      hlds__mark_tail_calls__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[21])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_21_21, 1) = ((MR_Box) (hlds__mark_tail_calls__V_24_24));
    }
    {
      hlds__mark_tail_calls__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_18_18, 1) = ((MR_Box) (hlds__mark_tail_calls__V_21_21));
    }
    {
      hlds__mark_tail_calls__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_11, 1) = ((MR_Box) (hlds__mark_tail_calls__V_18_18));
    }
    {
      hlds__mark_tail_calls__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_46_46, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_11));
    }
    {
      hlds__mark_tail_calls__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_45_45, 0) = ((MR_Box) (hlds__mark_tail_calls__V_46_46));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_12, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_6));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_12, 1) = ((MR_Box) (hlds__mark_tail_calls__V_45_45));
    }
    {
      hlds__mark_tail_calls__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_13, 2) = ((MR_Box) (hlds__mark_tail_calls__V_50_50));
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Severity_14;
    MR_Word hlds__mark_tail_calls__WarnOrErrorWord_15;
    MR_Integer hlds__mark_tail_calls__ProcNumber0_16;
    MR_Integer hlds__mark_tail_calls__ProcNumber_17;
    MR_Word hlds__mark_tail_calls__Pieces_18;
    MR_Word hlds__mark_tail_calls__Msg_19;
    MR_Word hlds__mark_tail_calls__Spec_20;
    MR_Word hlds__mark_tail_calls__V_26_26;
    MR_Word hlds__mark_tail_calls__V_27_27;
    MR_Word hlds__mark_tail_calls__V_28_28;
    MR_Word hlds__mark_tail_calls__V_31_31;
    MR_Word hlds__mark_tail_calls__V_32_32;
    MR_Word hlds__mark_tail_calls__V_33_33;
    MR_Word hlds__mark_tail_calls__V_36_36;
    MR_Word hlds__mark_tail_calls__V_38_38;
    MR_Word hlds__mark_tail_calls__V_39_39;
    MR_Word hlds__mark_tail_calls__V_42_42;
    MR_Word hlds__mark_tail_calls__V_43_43;
    MR_Word hlds__mark_tail_calls__V_50_50;
    MR_Word hlds__mark_tail_calls__V_51_51;
    MR_Word hlds__mark_tail_calls__V_54_54;

    switch (hlds__mark_tail_calls__WarnOrError_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_15 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[13]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_15 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14]);
        }
        break;
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__CallerProcId_9, &hlds__mark_tail_calls__ProcNumber0_16);
    }
    hlds__mark_tail_calls__ProcNumber_17 = (hlds__mark_tail_calls__ProcNumber0_16 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_27_27, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_17));
    }
    {
      hlds__mark_tail_calls__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 1) = ((MR_Box) (hlds__mark_tail_calls__CallerId_8));
    }
    {
      hlds__mark_tail_calls__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_43_43, 1) = ((MR_Box) (hlds__mark_tail_calls__CalleeId_10));
    }
    {
      hlds__mark_tail_calls__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_42_42, 0) = ((MR_Box) (hlds__mark_tail_calls__V_43_43));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[8])));
    }
    {
      hlds__mark_tail_calls__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_39_39, 1) = ((MR_Box) (hlds__mark_tail_calls__V_42_42));
    }
    {
      hlds__mark_tail_calls__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_15));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 1) = ((MR_Box) (hlds__mark_tail_calls__V_39_39));
    }
    {
      hlds__mark_tail_calls__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 1) = ((MR_Box) (hlds__mark_tail_calls__V_38_38));
    }
    {
      hlds__mark_tail_calls__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 1) = ((MR_Box) (hlds__mark_tail_calls__V_36_36));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (hlds__mark_tail_calls__V_32_32));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_33_33));
    }
    {
      hlds__mark_tail_calls__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 1) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
    }
    {
      hlds__mark_tail_calls__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 0) = ((MR_Box) (hlds__mark_tail_calls__V_27_27));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 1) = ((MR_Box) (hlds__mark_tail_calls__V_28_28));
    }
    {
      hlds__mark_tail_calls__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_18, 1) = ((MR_Box) (hlds__mark_tail_calls__V_26_26));
    }
    {
      hlds__mark_tail_calls__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_51_51, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_18));
    }
    {
      hlds__mark_tail_calls__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 0) = ((MR_Box) (hlds__mark_tail_calls__V_51_51));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_19, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_19, 1) = ((MR_Box) (hlds__mark_tail_calls__V_50_50));
    }
    {
      hlds__mark_tail_calls__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_54_54, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_19));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_14));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_20, 2) = ((MR_Box) (hlds__mark_tail_calls__V_54_54));
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
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Severity_12;
    MR_Word hlds__mark_tail_calls__WarnOrErrorWord_13;
    MR_Integer hlds__mark_tail_calls__ProcNumber0_14;
    MR_Integer hlds__mark_tail_calls__ProcNumber_15;
    MR_Word hlds__mark_tail_calls__Pieces_16;
    MR_Word hlds__mark_tail_calls__Msg_17;
    MR_Word hlds__mark_tail_calls__Spec_18;
    MR_Word hlds__mark_tail_calls__V_24_24;
    MR_Word hlds__mark_tail_calls__V_25_25;
    MR_Word hlds__mark_tail_calls__V_26_26;
    MR_Word hlds__mark_tail_calls__V_29_29;
    MR_Word hlds__mark_tail_calls__V_30_30;
    MR_Word hlds__mark_tail_calls__V_31_31;
    MR_Word hlds__mark_tail_calls__V_34_34;
    MR_Word hlds__mark_tail_calls__V_36_36;
    MR_Word hlds__mark_tail_calls__V_43_43;
    MR_Word hlds__mark_tail_calls__V_44_44;
    MR_Word hlds__mark_tail_calls__V_47_47;

    switch (hlds__mark_tail_calls__WarnOrError_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[13]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14]);
        }
        break;
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_8, &hlds__mark_tail_calls__ProcNumber0_14);
    }
    hlds__mark_tail_calls__ProcNumber_15 = (hlds__mark_tail_calls__ProcNumber0_14 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_15));
    }
    {
      hlds__mark_tail_calls__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_30_30, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_7));
    }
    {
      hlds__mark_tail_calls__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_13));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[6])));
    }
    {
      hlds__mark_tail_calls__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 1) = ((MR_Box) (hlds__mark_tail_calls__V_36_36));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_34_34));
    }
    {
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (hlds__mark_tail_calls__V_30_30));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 1) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
    }
    {
      hlds__mark_tail_calls__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 1) = ((MR_Box) (hlds__mark_tail_calls__V_29_29));
    }
    {
      hlds__mark_tail_calls__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 0) = ((MR_Box) (hlds__mark_tail_calls__V_25_25));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 1) = ((MR_Box) (hlds__mark_tail_calls__V_26_26));
    }
    {
      hlds__mark_tail_calls__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 1) = ((MR_Box) (hlds__mark_tail_calls__V_24_24));
    }
    {
      hlds__mark_tail_calls__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_44_44, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_16));
    }
    {
      hlds__mark_tail_calls__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_43_43, 0) = ((MR_Box) (hlds__mark_tail_calls__V_44_44));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_9));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 1) = ((MR_Box) (hlds__mark_tail_calls__V_43_43));
    }
    {
      hlds__mark_tail_calls__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_47_47, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_17));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 2) = ((MR_Box) (hlds__mark_tail_calls__V_47_47));
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

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_10,
  MR_Word hlds__mark_tail_calls__PredId_11,
  MR_Integer hlds__mark_tail_calls__ProcId_12,
  MR_Word hlds__mark_tail_calls__PredInfo_13,
  MR_Word hlds__mark_tail_calls__SCCMap_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_24,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Globals_17;
    MR_Word hlds__mark_tail_calls__AddGoalFeature_18;
    MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_19;
    MR_Word hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20;
    MR_Word hlds__mark_tail_calls__SCC_21;
    MR_Word hlds__mark_tail_calls__V_27_27;
    MR_Word hlds__mark_tail_calls__ExecTraceTailRec_35;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecBool_36;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecOpt_37;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecBool_38;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecOpt_39;
    MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_47;
    MR_Box hlds__mark_tail_calls__conv0_SCC_21;
    MR_Word hlds__mark_tail_calls___WasProcChanged_22;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__ModuleInfo_10, &hlds__mark_tail_calls__Globals_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 140, &hlds__mark_tail_calls__ExecTraceTailRec_35);
    }
    switch (hlds__mark_tail_calls__ExecTraceTailRec_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__AddGoalFeature_18 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__AddGoalFeature_18 = (MR_Integer) 1;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 31, &hlds__mark_tail_calls__WarnNonTailSelfRecBool_36);
    }
    switch (hlds__mark_tail_calls__WarnNonTailSelfRecBool_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_37 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_37 = (MR_Integer) 1;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_17, (MR_Integer) 32, &hlds__mark_tail_calls__WarnNonTailMutualRecBool_38);
    }
    switch (hlds__mark_tail_calls__WarnNonTailMutualRecBool_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_39 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_39 = (MR_Integer) 1;
        break;
    }
    {
      hlds__mark_tail_calls__WarnNonTailRecParams_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_19, 0) = ((MR_Box) (((MR_Integer) 0 | ((((hlds__mark_tail_calls__WarnNonTailSelfRecOpt_37 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__WarnNonTailMutualRecOpt_39 << (MR_Integer) 2)))))));
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_23, &hlds__mark_tail_calls__MaybeRequireTailRec_47);
    }
    if ((hlds__mark_tail_calls__MaybeRequireTailRec_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20 = hlds__mark_tail_calls__WarnNonTailRecParams_19;
    else
      {
        MR_Word hlds__mark_tail_calls__Pragma_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_47, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__mark_tail_calls__Pragma_48)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word hlds__mark_tail_calls__WarnOrError_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 0)))) & (MR_Integer) 1);
            MR_Word hlds__mark_tail_calls__RecType_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word hlds__mark_tail_calls__SelfRec_53;
            MR_Word hlds__mark_tail_calls__MutualRec_54;
            MR_Word hlds__mark_tail_calls___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pragma_48, (MR_Integer) 1)));

            switch (hlds__mark_tail_calls__RecType_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  hlds__mark_tail_calls__SelfRec_53 = (MR_Integer) 1;
                  hlds__mark_tail_calls__MutualRec_54 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__mark_tail_calls__SelfRec_53 = (MR_Integer) 1;
                  hlds__mark_tail_calls__MutualRec_54 = (MR_Integer) 0;
                }
                break;
            }
            {
              hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20, 0) = ((MR_Box) ((hlds__mark_tail_calls__WarnOrError_50 | ((((hlds__mark_tail_calls__SelfRec_53 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__MutualRec_54 << (MR_Integer) 2)))))));
            }
          }
        else
          {
            hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20 = (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0];
          }
      }
    {
      hlds__mark_tail_calls__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_27_27, 0) = ((MR_Box) (hlds__mark_tail_calls__PredId_11));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_27_27, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_12));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__SCCMap_14, ((MR_Box) (hlds__mark_tail_calls__V_27_27)), &hlds__mark_tail_calls__conv0_SCC_21);
    }
    hlds__mark_tail_calls__SCC_21 = ((MR_Word) hlds__mark_tail_calls__conv0_SCC_21);
    {
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_12_p_0(hlds__mark_tail_calls__AddGoalFeature_18, hlds__mark_tail_calls__WarnNonTailRecParamsForProc_20, hlds__mark_tail_calls__ModuleInfo_10, hlds__mark_tail_calls__SCC_21, hlds__mark_tail_calls__PredId_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__PredInfo_13, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_23, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_24, &hlds__mark_tail_calls___WasProcChanged_22, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_25, hlds__mark_tail_calls__STATE_VARIABLE_Specs_26);
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(
  MR_Word hlds__mark_tail_calls__SCCMap_9,
  MR_Word hlds__mark_tail_calls__PredId_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_19,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_21,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_22,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Globals_14;
    MR_Word hlds__mark_tail_calls__AddGoalFeature_15;
    MR_Word hlds__mark_tail_calls__WarnNonTailRecParams_16;
    MR_Word hlds__mark_tail_calls__ProcIds_17;
    MR_Word hlds__mark_tail_calls__ExecTraceTailRec_29;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecBool_30;
    MR_Word hlds__mark_tail_calls__WarnNonTailSelfRecOpt_31;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecBool_32;
    MR_Word hlds__mark_tail_calls__WarnNonTailMutualRecOpt_33;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_18, &hlds__mark_tail_calls__Globals_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 140, &hlds__mark_tail_calls__ExecTraceTailRec_29);
    }
    switch (hlds__mark_tail_calls__ExecTraceTailRec_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__AddGoalFeature_15 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__AddGoalFeature_15 = (MR_Integer) 1;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 31, &hlds__mark_tail_calls__WarnNonTailSelfRecBool_30);
    }
    switch (hlds__mark_tail_calls__WarnNonTailSelfRecBool_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_31 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailSelfRecOpt_31 = (MR_Integer) 1;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_14, (MR_Integer) 32, &hlds__mark_tail_calls__WarnNonTailMutualRecBool_32);
    }
    switch (hlds__mark_tail_calls__WarnNonTailMutualRecBool_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_33 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__mark_tail_calls__WarnNonTailMutualRecOpt_33 = (MR_Integer) 1;
        break;
    }
    {
      hlds__mark_tail_calls__WarnNonTailRecParams_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__WarnNonTailRecParams_16, 0) = ((MR_Box) (((MR_Integer) 0 | ((((hlds__mark_tail_calls__WarnNonTailSelfRecOpt_31 << (MR_Integer) 1)) | ((hlds__mark_tail_calls__WarnNonTailMutualRecOpt_33 << (MR_Integer) 2)))))));
    }
    {
      hlds__mark_tail_calls__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_20);
    }
    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_for_llds_code_gen_10_p_0(hlds__mark_tail_calls__AddGoalFeature_15, hlds__mark_tail_calls__WarnNonTailRecParams_16, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_18, hlds__mark_tail_calls__SCCMap_9, hlds__mark_tail_calls__PredId_10, hlds__mark_tail_calls__ProcIds_17, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_20, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_22, hlds__mark_tail_calls__STATE_VARIABLE_Specs_23);
    }
    *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_19 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_18;
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_3_p_0(
  MR_Word hlds__mark_tail_calls__DepInfo_4,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__BottomUpSCCsEntryPoints_8;

    {
      hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_9, hlds__mark_tail_calls__DepInfo_4, &hlds__mark_tail_calls__BottomUpSCCsEntryPoints_8);
    }
    {
      hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_5_p_0((MR_Integer) 2, (MR_Word) &hlds__mark_tail_calls_scalar_common_3[0], hlds__mark_tail_calls__BottomUpSCCsEntryPoints_8, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_9, hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_10);
    }
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

	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_add_goal_feature_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_self_tail_rec_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0);
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
