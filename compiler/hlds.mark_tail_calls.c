/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_add_goal_feature_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_add_goal_feature_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0;

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1;

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_2;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[3];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[3];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[7];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[7];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_changed_0[2];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_maybe_warn_non_tail_rec_call_0_1[2];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_1;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_maybe_warn_non_tail_rec_call_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_maybe_warn_non_tail_rec_call_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_rec_call_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_non_tail_rec_calls_opt_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_non_tail_rec_calls_opt_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_calls_opt_0[2];

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
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_changed_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_changed_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
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
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_8_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_9,
  MR_Word hlds__mark_tail_calls__Info_10,
  MR_Word hlds__mark_tail_calls__SymName_11,
  MR_Integer hlds__mark_tail_calls__Arity_12,
  MR_Integer hlds__mark_tail_calls__ProcId_13,
  MR_Word hlds__mark_tail_calls__Context_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_22);

static MR_Word MR_CALL 
hlds__mark_tail_calls__at_tail_branch_2_f_0(
  MR_Word hlds__mark_tail_calls__A_4,
  MR_Word hlds__mark_tail_calls__B_5);

static MR_Box MR_CALL 
hlds__mark_tail_calls__at_tail_branches_1_f_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static MR_Word MR_CALL 
hlds__mark_tail_calls__at_tail_branches_1_f_0(
  MR_Word hlds__mark_tail_calls__List_3);

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(
  MR_Word hlds__mark_tail_calls__List_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_case_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__AtTail0_10,
  MR_Word hlds__mark_tail_calls__Case0_11,
  MR_Word * hlds__mark_tail_calls__Case_12,
  MR_Word * hlds__mark_tail_calls__AtTail_13,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_20,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_disj_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__AtTail0_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_15,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disj_16,
  MR_Word * hlds__mark_tail_calls__AtTail_12,
  MR_Word * hlds__mark_tail_calls__FoundAtTail_13,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_18);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word hlds__mark_tail_calls__ToVar_5,
  MR_Word hlds__mark_tail_calls__FromVar_6,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_129,
  MR_Word hlds__mark_tail_calls__Goal0_12,
  MR_Word * hlds__mark_tail_calls__Goal_13,
  MR_Word hlds__mark_tail_calls__AtTail0_14,
  MR_Word * hlds__mark_tail_calls__AtTail_15);

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_procs_7_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_7);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[21][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][11];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][6];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "recursive call is not tail recursive."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains no recursive calls at all,"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: the code defining this"))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0])),
    ((MR_Box) (hlds__mark_tail_calls__at_tail_branches_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0 = {
  (MR_String) "add_goal_feature",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1 = {
  (MR_String) "do_not_add_goal_feature",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_add_goal_feature_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_add_goal_feature_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_add_goal_feature_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0[2] = {
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
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_add_goal_feature_0
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__list__ti_list_1maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_2 = {
  (MR_String) "not_at_tail_have_not_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_2
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[3] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
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
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0 = {
  (MR_String) "found_tail_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1 = {
  (MR_String) "not_found_tail_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_tail_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0
};

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_add_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_rec_call_0
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[7] = {
  (MR_String) "mtc_add_feature",
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_pred_id",
  (MR_String) "mtc_proc_id",
  (MR_String) "mtc_vartypes",
  (MR_String) "mtc_warn_non_tail_rec_calls"
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0 = {
  (MR_String) "mark_tail_calls_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_calls_info",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "not_changed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "maybe_changed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_changed_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_changed",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_changed_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_changed_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_0 = {
  (MR_String) "do_not_warn_non_tail_rec_calls",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_maybe_warn_non_tail_rec_call_0_1[2] = {
  (MR_PseudoTypeInfo) &libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_type_0
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_1 = {
  (MR_String) "warn_non_tail_rec_calls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_maybe_warn_non_tail_rec_call_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_0
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_1[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_1
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_maybe_warn_non_tail_rec_call_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_maybe_warn_non_tail_rec_call_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_maybe_warn_non_tail_rec_call_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_maybe_warn_non_tail_rec_call_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_rec_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_rec_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_rec_call",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_maybe_warn_non_tail_rec_call_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_maybe_warn_non_tail_rec_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_rec_call_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_0 = {
  (MR_String) "do_not_warn_non_tail_rec_calls_opt",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_1 = {
  (MR_String) "warn_non_tail_rec_calls_opt",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_non_tail_rec_calls_opt_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_non_tail_rec_calls_opt_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_non_tail_rec_calls_opt_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_calls_opt_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_calls_opt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "warn_non_tail_rec_calls_opt",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_non_tail_rec_calls_opt_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_non_tail_rec_calls_opt_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_calls_opt_0
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
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_tail_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____found_tail_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_changed_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_changed_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_changed_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____maybe_changed_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_calls_opt_0_0(
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
hlds__mark_tail_calls____Unify____warn_non_tail_rec_calls_opt_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_14 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_13 == hlds__mark_tail_calls__CastY_14);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__V_12_12;
            MR_Integer hlds__mark_tail_calls__V_19_19 = (MR_Integer) hlds__mark_tail_calls__V_18_18;
            MR_Integer hlds__mark_tail_calls__V_20_20 = (MR_Integer) hlds__mark_tail_calls__V_10_10;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_12_12, hlds__mark_tail_calls__V_19_19, hlds__mark_tail_calls__V_20_20);
            }
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_12_12 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_12_12;
            else
              {
                MR_Integer hlds__mark_tail_calls__V_21_21 = (MR_Integer) hlds__mark_tail_calls__V_17_17;
                MR_Integer hlds__mark_tail_calls__V_22_22 = (MR_Integer) hlds__mark_tail_calls__V_11_11;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_21_21, hlds__mark_tail_calls__V_22_22);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0(
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
    if ((hlds__mark_tail_calls__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__mark_tail_calls__CastX_3 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
        MR_Integer hlds__mark_tail_calls__CastY_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastY_4 == hlds__mark_tail_calls__CastX_3);
      }
    else
      {
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_7_7;
        MR_Word hlds__mark_tail_calls__V_8_8;

        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__mark_tail_calls__succeeded)
          {
            hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
            hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_5_5 == hlds__mark_tail_calls__V_7_7);
            if (hlds__mark_tail_calls__succeeded)
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_6_6 == hlds__mark_tail_calls__V_8_8);
          }
      }
    return hlds__mark_tail_calls__succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_changed_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_changed_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_24 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_25 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_24 == hlds__mark_tail_calls__CastY_25);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_18_18;
        MR_Integer hlds__mark_tail_calls__V_33_33 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
        MR_Integer hlds__mark_tail_calls__V_34_34 = (MR_Integer) hlds__mark_tail_calls__V_11_11;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_18_18, hlds__mark_tail_calls__V_33_33, hlds__mark_tail_calls__V_34_34);
        }
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_18_18 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_18_18;
        else
          {
            MR_Word hlds__mark_tail_calls__V_19_19;

            {
              hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__V_19_19, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_12_12);
            }
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_19_19 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_19_19;
            else
              {
                MR_Word hlds__mark_tail_calls__V_20_20;

                {
                  hlds__hlds_pred____Compare____pred_info_0_0(&hlds__mark_tail_calls__V_20_20, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_13_13);
                }
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_20_20 == (MR_Integer) 0);
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                if (hlds__mark_tail_calls__succeeded)
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_20_20;
                else
                  {
                    MR_Word hlds__mark_tail_calls__V_21_21;

                    {
                      hlds__hlds_pred____Compare____pred_id_0_0(&hlds__mark_tail_calls__V_21_21, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_14_14);
                    }
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_21_21 == (MR_Integer) 0);
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                    if (hlds__mark_tail_calls__succeeded)
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_21_21;
                    else
                      {
                        MR_Word hlds__mark_tail_calls__V_22_22;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_22_22, hlds__mark_tail_calls__V_8_8, hlds__mark_tail_calls__V_15_15);
                        }
                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_22_22 == (MR_Integer) 0);
                        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                        if (hlds__mark_tail_calls__succeeded)
                          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_22_22;
                        else
                          {
                            MR_Word hlds__mark_tail_calls__V_23_23;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_2[0], &hlds__mark_tail_calls__V_23_23, ((MR_Box) (hlds__mark_tail_calls__V_9_9)), ((MR_Box) (hlds__mark_tail_calls__V_16_16)));
                            }
                            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_23_23 == (MR_Integer) 0);
                            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                            if (hlds__mark_tail_calls__succeeded)
                              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_23_23;
                            else
                              {
                                hlds__mark_tail_calls____Compare____maybe_warn_non_tail_rec_call_0_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_10_10, hlds__mark_tail_calls__V_17_17);
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
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_17 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_18 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_17 == hlds__mark_tail_calls__CastY_18);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__mark_tail_calls__TypeInfo_22_22;
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)));

        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_10_10);
        if (hlds__mark_tail_calls__succeeded)
          {
            {
              hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_11_11);
            }
            if (hlds__mark_tail_calls__succeeded)
              {
                {
                  hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_12_12);
                }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    {
                      hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_13_13);
                    }
                    if (hlds__mark_tail_calls__succeeded)
                      {
                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_7_7 == hlds__mark_tail_calls__V_14_14);
                        if (hlds__mark_tail_calls__succeeded)
                          {
                            hlds__mark_tail_calls__TypeInfo_22_22 = (MR_Word) &hlds__mark_tail_calls_scalar_common_2[0];
                            {
                              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_22_22, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_15_15)));
                            }
                            if (hlds__mark_tail_calls__succeeded)
                              {
                                hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_rec_call_0_0(hlds__mark_tail_calls__V_9_9, hlds__mark_tail_calls__V_16_16);
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
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
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
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
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
    MR_Integer hlds__mark_tail_calls__CastX_10 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_11 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_10 == hlds__mark_tail_calls__CastY_11);
    if (hlds__mark_tail_calls__succeeded)
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[3], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_13_13)), ((MR_Box) (hlds__mark_tail_calls__V_5_5)));
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
hlds__mark_tail_calls____Unify____at_tail_0_0(
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
      switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__mark_tail_calls__CastX_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
                MR_Integer hlds__mark_tail_calls__CastY_6 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastY_6 == hlds__mark_tail_calls__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__mark_tail_calls__CastX_7 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
                MR_Integer hlds__mark_tail_calls__CastY_8 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastY_8 == hlds__mark_tail_calls__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__mark_tail_calls__TypeInfo_11_11;
            MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__V_4_4;

            hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__mark_tail_calls__succeeded)
              {
                hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
                hlds__mark_tail_calls__TypeInfo_11_11 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[3];
                {
                  hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_11_11, ((MR_Box) (hlds__mark_tail_calls__V_3_3)), ((MR_Box) (hlds__mark_tail_calls__V_4_4)));
                }
              }
          }
          break;
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
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_8_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_9,
  MR_Word hlds__mark_tail_calls__Info_10,
  MR_Word hlds__mark_tail_calls__SymName_11,
  MR_Integer hlds__mark_tail_calls__Arity_12,
  MR_Integer hlds__mark_tail_calls__ProcId_13,
  MR_Word hlds__mark_tail_calls__Context_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__mark_tail_calls__AtTail_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_22 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21;
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__mark_tail_calls__PredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__WarnNonTailRecCalls_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 6)));
              MR_Word hlds__mark_tail_calls__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 3)));
              MR_Integer hlds__mark_tail_calls__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 5)));

              if ((hlds__mark_tail_calls__WarnNonTailRecCalls_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *hlds__mark_tail_calls__STATE_VARIABLE_Specs_22 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21;
              else
                {
                  MR_Word hlds__mark_tail_calls__WarnOrError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRecCalls_18, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__PredOrFunc_45;
                  MR_String hlds__mark_tail_calls__Name_46;
                  MR_Word hlds__mark_tail_calls__SimpleCallId_47;
                  MR_Word hlds__mark_tail_calls__V_48_48;
                  MR_Word hlds__mark_tail_calls___RecType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRecCalls_18, (MR_Integer) 1)));

                  {
                    hlds__mark_tail_calls__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_17);
                  }
                  {
                    hlds__mark_tail_calls__Name_46 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__mark_tail_calls__SymName_11);
                  }
                  {
                    hlds__mark_tail_calls__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_48_48, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_46));
                  }
                  {
                    hlds__mark_tail_calls__SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_45));
                    MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 1) = ((MR_Box) (hlds__mark_tail_calls__V_48_48));
                    MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_12));
                  }
                  {
                    hlds__mark_tail_calls__add_message_for_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__SimpleCallId_47, hlds__mark_tail_calls__ProcId_13, hlds__mark_tail_calls__WarnOrError_19, hlds__mark_tail_calls__Context_14, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_22);
                  }
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__PredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__WarnNonTailRecCalls_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 6)));
          MR_Word hlds__mark_tail_calls__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 3)));
          MR_Integer hlds__mark_tail_calls__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_10, (MR_Integer) 5)));

          if ((hlds__mark_tail_calls__WarnNonTailRecCalls_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_22 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21;
          else
            {
              MR_Word hlds__mark_tail_calls__WarnOrError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRecCalls_18, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__PredOrFunc_45;
              MR_String hlds__mark_tail_calls__Name_46;
              MR_Word hlds__mark_tail_calls__SimpleCallId_47;
              MR_Word hlds__mark_tail_calls__V_48_48;
              MR_Word hlds__mark_tail_calls___RecType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRecCalls_18, (MR_Integer) 1)));

              {
                hlds__mark_tail_calls__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_17);
              }
              {
                hlds__mark_tail_calls__Name_46 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__mark_tail_calls__SymName_11);
              }
              {
                hlds__mark_tail_calls__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_48_48, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_46));
              }
              {
                hlds__mark_tail_calls__SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_45));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 1) = ((MR_Box) (hlds__mark_tail_calls__V_48_48));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_47, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_12));
              }
              {
                hlds__mark_tail_calls__add_message_for_nontail_recursive_call_6_p_0(hlds__mark_tail_calls__SimpleCallId_47, hlds__mark_tail_calls__ProcId_13, hlds__mark_tail_calls__WarnOrError_19, hlds__mark_tail_calls__Context_14, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_22);
              }
            }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__at_tail_branch_2_f_0(
  MR_Word hlds__mark_tail_calls__A_4,
  MR_Word hlds__mark_tail_calls__B_5)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__R_6;

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__A_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__mark_tail_calls__A_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__mark_tail_calls__R_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            hlds__mark_tail_calls__R_6 = hlds__mark_tail_calls__B_5;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) hlds__mark_tail_calls__B_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__mark_tail_calls__R_6 = hlds__mark_tail_calls__B_5;
            break;
          case (MR_Integer) 1:
            hlds__mark_tail_calls__R_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
    }
    return hlds__mark_tail_calls__R_6;
  }
}

static MR_Box MR_CALL 
hlds__mark_tail_calls__at_tail_branches_1_f_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_Box hlds__mark_tail_calls__wrapper_arg_3;
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv0_R_6;

    {
      hlds__mark_tail_calls__conv0_R_6 = hlds__mark_tail_calls__at_tail_branch_2_f_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv0_R_6));
    return hlds__mark_tail_calls__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__at_tail_branches_1_f_0(
  MR_Word hlds__mark_tail_calls__List_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__HeadVar__2_2;
    MR_Word hlds__mark_tail_calls__TypeCtorInfo_6_6 = (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0;
    MR_Box hlds__mark_tail_calls__conv1_HeadVar__2_2;

    {
      hlds__mark_tail_calls__conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0(hlds__mark_tail_calls__TypeCtorInfo_6_6, hlds__mark_tail_calls__TypeCtorInfo_6_6, (MR_Word) &hlds__mark_tail_calls_scalar_common_2[1], hlds__mark_tail_calls__List_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
    hlds__mark_tail_calls__HeadVar__2_2 = ((MR_Word) hlds__mark_tail_calls__conv1_HeadVar__2_2);
    return hlds__mark_tail_calls__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word * hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__mark_tail_calls__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__mark_tail_calls__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *hlds__mark_tail_calls__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        *hlds__mark_tail_calls__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
    }
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(
  MR_Word hlds__mark_tail_calls__List_3)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__HeadVar__2_2;

    {
      hlds__mark_tail_calls__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0, ((MR_Box) ((MR_Integer) 0)), hlds__mark_tail_calls__List_3);
    }
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__HeadVar__2_2 = (MR_Integer) 0;
    else
      hlds__mark_tail_calls__HeadVar__2_2 = (MR_Integer) 1;
    return hlds__mark_tail_calls__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__mark_tail_calls__succeeded;

        if ((hlds__mark_tail_calls__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
              }
            hlds__mark_tail_calls__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));

            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
                hlds__mark_tail_calls__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word hlds__mark_tail_calls__ArgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word hlds__mark_tail_calls__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));

                if ((hlds__mark_tail_calls__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__mark_tail_calls__succeeded = MR_TRUE;
                else
                  {
                    MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_19_19, (MR_Integer) 0)));

                    {
                      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], ((MR_Box) (hlds__mark_tail_calls__ArgVar_15)), ((MR_Box) (hlds__mark_tail_calls__V_17_17)));
                    }
                  }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__mark_tail_calls__HeadVar__1__tmp_copy_1 = hlds__mark_tail_calls__V_18_18;
                      MR_Word hlds__mark_tail_calls__HeadVar__2__tmp_copy_2 = hlds__mark_tail_calls__ArgVars_16;

                      hlds__mark_tail_calls__HeadVar__2_2 = hlds__mark_tail_calls__HeadVar__2__tmp_copy_2;
                      hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return hlds__mark_tail_calls__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_9)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__mark_tail_calls__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__mark_tail_calls__STATE_VARIABLE_Specs_9 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8;
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
        *hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5 = hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4;
      }
    else
      {
        MR_Word hlds__mark_tail_calls__RevGoal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__RevGoals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__RevGoal_23;
        MR_Word hlds__mark_tail_calls__RevGoals_24;
        MR_Word hlds__mark_tail_calls__FoundTailCallsConj_28;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_35_35;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_36_36;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_37_37;

        {
          hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__HeadVar__1_1, &hlds__mark_tail_calls__FoundTailCallsConj_28, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_8, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_35_35, hlds__mark_tail_calls__RevGoal0_21, &hlds__mark_tail_calls__RevGoal_23, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_AtTail_36_36);
        }
        switch (hlds__mark_tail_calls__FoundTailCallsConj_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_37_37 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_37_37 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
            break;
        }
        {
          hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__RevGoals0_22, &hlds__mark_tail_calls__RevGoals_24, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_36_36, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_37_37, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7, hlds__mark_tail_calls__STATE_VARIABLE_Specs_35_35, hlds__mark_tail_calls__STATE_VARIABLE_Specs_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__mark_tail_calls__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__RevGoal_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__RevGoals_24));
        }
      }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_case_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__AtTail0_10,
  MR_Word hlds__mark_tail_calls__Case0_11,
  MR_Word * hlds__mark_tail_calls__Case_12,
  MR_Word * hlds__mark_tail_calls__AtTail_13,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_20,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_11, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_11, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_11, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Goal_19;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__FoundTailCalls_14, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_20, hlds__mark_tail_calls__STATE_VARIABLE_Specs_21, hlds__mark_tail_calls__Goal0_18, &hlds__mark_tail_calls__Goal_19, hlds__mark_tail_calls__AtTail0_10, hlds__mark_tail_calls__AtTail_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_tail_calls__Case_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MainConsId_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OtherConsIds_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Goal_19));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_disj_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__AtTail0_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_15,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disj_16,
  MR_Word * hlds__mark_tail_calls__AtTail_12,
  MR_Word * hlds__mark_tail_calls__FoundAtTail_13,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__FoundAtTail_13, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_17, hlds__mark_tail_calls__STATE_VARIABLE_Specs_18, hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_15, hlds__mark_tail_calls__STATE_VARIABLE_Disj_16, hlds__mark_tail_calls__AtTail0_10, hlds__mark_tail_calls__AtTail_12);
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
    MR_Word hlds__mark_tail_calls__MaybeVar0_7;
    MR_Word hlds__mark_tail_calls__MaybeVars0_8;
    MR_Word hlds__mark_tail_calls__MaybeVar_9;
    MR_Word hlds__mark_tail_calls__MaybeVars_10;

    if (hlds__mark_tail_calls__succeeded)
      {
        hlds__mark_tail_calls__MaybeVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        hlds__mark_tail_calls__MaybeVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
        if ((hlds__mark_tail_calls__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_5, hlds__mark_tail_calls__FromVar_6, hlds__mark_tail_calls__MaybeVars0_8, &hlds__mark_tail_calls__MaybeVars_10);
            }
          }
        else
          {
            MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar0_7, (MR_Integer) 0)));

            {
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], ((MR_Box) (hlds__mark_tail_calls__ToVar_5)), ((MR_Box) (hlds__mark_tail_calls__V_11_11)));
            }
            if (hlds__mark_tail_calls__succeeded)
              {
                hlds__mark_tail_calls__MaybeVars_10 = hlds__mark_tail_calls__MaybeVars0_8;
                {
                  hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar_9, 0) = ((MR_Box) (hlds__mark_tail_calls__FromVar_6));
                }
                hlds__mark_tail_calls__succeeded = MR_TRUE;
              }
          }
        if (hlds__mark_tail_calls__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__mark_tail_calls__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MaybeVar_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__MaybeVars_10));
            }
            hlds__mark_tail_calls__succeeded = MR_TRUE;
          }
      }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv8_Case_12;
    MR_Word hlds__mark_tail_calls__conv7_AtTail_13;
    MR_Word hlds__mark_tail_calls__conv6_FoundTailCalls_14;
    MR_Word hlds__mark_tail_calls__conv5_STATE_VARIABLE_Specs_21;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_case_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv8_Case_12, &hlds__mark_tail_calls__conv7_AtTail_13, &hlds__mark_tail_calls__conv6_FoundTailCalls_14, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv5_STATE_VARIABLE_Specs_21);
    }
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv8_Case_12));
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv7_AtTail_13));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv6_FoundTailCalls_14));
    *hlds__mark_tail_calls__wrapper_arg_6 = ((MR_Box) (hlds__mark_tail_calls__conv5_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box hlds__mark_tail_calls__wrapper_arg_5,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_6)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_16;
    MR_Word hlds__mark_tail_calls__conv2_AtTail_12;
    MR_Word hlds__mark_tail_calls__conv1_FoundAtTail_13;
    MR_Word hlds__mark_tail_calls__conv0_STATE_VARIABLE_Specs_18;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_disj_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_16, &hlds__mark_tail_calls__conv2_AtTail_12, &hlds__mark_tail_calls__conv1_FoundAtTail_13, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_5), &hlds__mark_tail_calls__conv0_STATE_VARIABLE_Specs_18);
    }
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_16));
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv2_AtTail_12));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv1_FoundAtTail_13));
    *hlds__mark_tail_calls__wrapper_arg_6 = ((MR_Box) (hlds__mark_tail_calls__conv0_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_10,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_129,
  MR_Word hlds__mark_tail_calls__Goal0_12,
  MR_Word * hlds__mark_tail_calls__Goal_13,
  MR_Word hlds__mark_tail_calls__AtTail0_14,
  MR_Word * hlds__mark_tail_calls__AtTail_15)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_12, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
          {
            hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
          }
          *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 1;
          *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__LHS_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__Unify0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__ModuleInfo_63;
          MR_Word hlds__mark_tail_calls__VarTypes_64;
          MR_Word hlds__mark_tail_calls__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_171_171;
          MR_Word hlds__mark_tail_calls__V_172_172;
          MR_Word hlds__mark_tail_calls__V_173_173;
          MR_Integer hlds__mark_tail_calls__V_174_174;
          MR_Word hlds__mark_tail_calls__V_176_176;

          *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
          hlds__mark_tail_calls__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
          hlds__mark_tail_calls__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
          hlds__mark_tail_calls__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
          hlds__mark_tail_calls__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
          hlds__mark_tail_calls__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
          hlds__mark_tail_calls__VarTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));
          hlds__mark_tail_calls__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));
          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_63, hlds__mark_tail_calls__VarTypes_64, hlds__mark_tail_calls__LHS_58);
          }
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__AtTail_15 = hlds__mark_tail_calls__AtTail0_14;
          else
            switch (MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__mark_tail_calls__ToVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_61, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__FromVar_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_61, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__Outputs_86;
                  MR_Word hlds__mark_tail_calls__Outputs0_85;

                  hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_14)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      hlds__mark_tail_calls__Outputs0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail0_14, (MR_Integer) 0)));
                      {
                        hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_83, hlds__mark_tail_calls__FromVar_84, hlds__mark_tail_calls__Outputs0_85, &hlds__mark_tail_calls__Outputs_86);
                      }
                    }
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__mark_tail_calls__AtTail_15 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_86));
                    }
                  else
                    *hlds__mark_tail_calls__AtTail_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                }
                break;
              case (MR_Integer) 3:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
                }
                break;
            }
          *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 1;
          *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__mark_tail_calls__CallPredId_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 0)));
          MR_Integer hlds__mark_tail_calls__CallProcId_88 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__Args_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__Builtin_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__SymName_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 5)));
          MR_Word hlds__mark_tail_calls__PredId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
          MR_Integer hlds__mark_tail_calls__ProcId_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls___UnifyContext_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));
          MR_Word hlds__mark_tail_calls__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));

          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__CallPredId_87, hlds__mark_tail_calls__PredId_93);
          }
          if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CallProcId_88 == hlds__mark_tail_calls__ProcId_94);
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_90 == (MR_Integer) 2);
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              MR_Word hlds__mark_tail_calls__Outputs0_154;

              hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_14)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__mark_tail_calls__succeeded)
                {
                  hlds__mark_tail_calls__Outputs0_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail0_14, (MR_Integer) 0)));
                  {
                    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__match_output_args_2_p_0(hlds__mark_tail_calls__Outputs0_154, hlds__mark_tail_calls__Args_89);
                  }
                }
              if (hlds__mark_tail_calls__succeeded)
                {
                  MR_Word hlds__mark_tail_calls__AddFeature_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
                  MR_Word hlds__mark_tail_calls__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
                  MR_Integer hlds__mark_tail_calls__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
                  MR_Word hlds__mark_tail_calls__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));
                  MR_Word hlds__mark_tail_calls__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));

                  switch (hlds__mark_tail_calls__AddFeature_95) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__mark_tail_calls__GoalInfo_96;

                        {
                          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 10, hlds__mark_tail_calls__GoalInfo0_17, &hlds__mark_tail_calls__GoalInfo_96);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__mark_tail_calls__Goal_13 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_16));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_96));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
                      break;
                  }
                  *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128;
                }
              else
                {
                  MR_Integer hlds__mark_tail_calls__Arity_97;
                  MR_Word hlds__mark_tail_calls__V_143_143;

                  *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
                  {
                    hlds__mark_tail_calls__Arity_97 = mercury__list__length_1_f_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__Args_89);
                  }
                  {
                    hlds__mark_tail_calls__V_143_143 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__mark_tail_calls__GoalInfo0_17);
                  }
                  {
                    hlds__mark_tail_calls__maybe_report_nontail_recursive_call_8_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__SymName_92, hlds__mark_tail_calls__Arity_97, hlds__mark_tail_calls__CallProcId_88, hlds__mark_tail_calls__V_143_143, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129);
                  }
                }
              *hlds__mark_tail_calls__AtTail_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 0;
            }
          else
            {
              *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
              }
              *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 1;
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *hlds__mark_tail_calls__Goal_13 = hlds__mark_tail_calls__Goal0_12;
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
              }
              *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 1;
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_203_203;
              MR_Word hlds__mark_tail_calls__ConjType_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__RevGoals0_100;
              MR_Word hlds__mark_tail_calls__RevGoals_101;
              MR_Word hlds__mark_tail_calls__Goals_102;
              MR_Word hlds__mark_tail_calls__GoalExpr_103;
              MR_Word hlds__mark_tail_calls__AtTail1_159;

              switch (hlds__mark_tail_calls__ConjType_98) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, &hlds__mark_tail_calls__AtTail1_159);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__mark_tail_calls__AtTail1_159 = hlds__mark_tail_calls__AtTail0_14;
                  break;
              }
              hlds__mark_tail_calls__TypeCtorInfo_203_203 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_203_203, hlds__mark_tail_calls__Goals0_99, &hlds__mark_tail_calls__RevGoals0_100);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__RevGoals0_100, &hlds__mark_tail_calls__RevGoals_101, hlds__mark_tail_calls__AtTail1_159, hlds__mark_tail_calls__AtTail_15, (MR_Integer) 1, hlds__mark_tail_calls__FoundTailCalls_10, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129);
              }
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_203_203, hlds__mark_tail_calls__RevGoals_101, &hlds__mark_tail_calls__Goals_102);
              }
              {
                hlds__mark_tail_calls__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_98));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_102));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_13 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_103));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_210_210;
              MR_Word hlds__mark_tail_calls__Disjs0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Disjs_105;
              MR_Word hlds__mark_tail_calls__AtTails_106;
              MR_Word hlds__mark_tail_calls__FoundTailCallDisjs_107;
              MR_Word hlds__mark_tail_calls__V_138_138;
              MR_Word hlds__mark_tail_calls__GoalExpr_160;
              MR_Box hlds__mark_tail_calls__conv4_STATE_VARIABLE_Specs_129;

              {
                hlds__mark_tail_calls__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_138_138, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_138_138, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_138_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_138_138, 3) = ((MR_Box) (hlds__mark_tail_calls__Info_9));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_138_138, 4) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_14));
              }
              hlds__mark_tail_calls__TypeCtorInfo_210_210 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map3_foldl_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_210_210, hlds__mark_tail_calls__TypeCtorInfo_210_210, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], hlds__mark_tail_calls__V_138_138, hlds__mark_tail_calls__Disjs0_104, &hlds__mark_tail_calls__Disjs_105, &hlds__mark_tail_calls__AtTails_106, &hlds__mark_tail_calls__FoundTailCallDisjs_107, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128)), &hlds__mark_tail_calls__conv4_STATE_VARIABLE_Specs_129);
              }
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = ((MR_Word) hlds__mark_tail_calls__conv4_STATE_VARIABLE_Specs_129);
              {
                *hlds__mark_tail_calls__AtTail_15 = hlds__mark_tail_calls__at_tail_branches_1_f_0(hlds__mark_tail_calls__AtTails_106);
              }
              {
                *hlds__mark_tail_calls__FoundTailCalls_10 = hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(hlds__mark_tail_calls__FoundTailCallDisjs_107);
              }
              {
                hlds__mark_tail_calls__GoalExpr_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_160, 1) = ((MR_Box) (hlds__mark_tail_calls__Disjs_105));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_13 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_160));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_220_220;
              MR_Word hlds__mark_tail_calls__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__CanFail_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Cases0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Cases_111;
              MR_Word hlds__mark_tail_calls__FoundTailCallsCases_112;
              MR_Word hlds__mark_tail_calls__V_136_136;
              MR_Word hlds__mark_tail_calls__GoalExpr_161;
              MR_Word hlds__mark_tail_calls__AtTails_162;
              MR_Box hlds__mark_tail_calls__conv9_STATE_VARIABLE_Specs_129;

              {
                hlds__mark_tail_calls__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_136_136, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_136_136, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_136_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_136_136, 3) = ((MR_Box) (hlds__mark_tail_calls__Info_9));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_136_136, 4) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_14));
              }
              hlds__mark_tail_calls__TypeCtorInfo_220_220 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map3_foldl_7_p_0(hlds__mark_tail_calls__TypeCtorInfo_220_220, hlds__mark_tail_calls__TypeCtorInfo_220_220, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], hlds__mark_tail_calls__V_136_136, hlds__mark_tail_calls__Cases0_110, &hlds__mark_tail_calls__Cases_111, &hlds__mark_tail_calls__AtTails_162, &hlds__mark_tail_calls__FoundTailCallsCases_112, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128)), &hlds__mark_tail_calls__conv9_STATE_VARIABLE_Specs_129);
              }
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_129 = ((MR_Word) hlds__mark_tail_calls__conv9_STATE_VARIABLE_Specs_129);
              {
                *hlds__mark_tail_calls__AtTail_15 = hlds__mark_tail_calls__at_tail_branches_1_f_0(hlds__mark_tail_calls__AtTails_162);
              }
              {
                *hlds__mark_tail_calls__FoundTailCalls_10 = hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(hlds__mark_tail_calls__FoundTailCallsCases_112);
              }
              {
                hlds__mark_tail_calls__GoalExpr_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_161, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_108));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_161, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_109));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_161, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_111));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_13 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_161));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__mark_tail_calls__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SubGoal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__SubGoal_36;
              MR_Word hlds__mark_tail_calls__V_153_153;

              switch (MR_tag((MR_Word) hlds__mark_tail_calls__Reason_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__mark_tail_calls__AtTail1_41;

                    {
                      hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, &hlds__mark_tail_calls__AtTail1_41);
                    }
                    {
                      hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__FoundTailCalls_10, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129, hlds__mark_tail_calls__SubGoal0_32, &hlds__mark_tail_calls__SubGoal_36, hlds__mark_tail_calls__AtTail1_41, hlds__mark_tail_calls__AtTail_15);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__mark_tail_calls__HeadWarning_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_31, (MR_Integer) 0)));
                    MR_Word hlds__mark_tail_calls__TailWarnings_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Reason_31, (MR_Integer) 1)));
                    MR_Word hlds__mark_tail_calls__InnerInfo_35;

                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadWarning_33 == (MR_Integer) 1);
                    if (!(hlds__mark_tail_calls__succeeded))
                      {
                        {
                          hlds__mark_tail_calls__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 1)), hlds__mark_tail_calls__TailWarnings_34);
                        }
                      }
                    if (hlds__mark_tail_calls__succeeded)
                      {
                        MR_Word hlds__mark_tail_calls__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
                        MR_Word hlds__mark_tail_calls__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
                        MR_Word hlds__mark_tail_calls__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
                        MR_Word hlds__mark_tail_calls__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
                        MR_Integer hlds__mark_tail_calls__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
                        MR_Word hlds__mark_tail_calls__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));
                        MR_Word hlds__mark_tail_calls__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));

                        {
                          hlds__mark_tail_calls__InnerInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 0) = ((MR_Box) (hlds__mark_tail_calls__V_164_164));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 1) = ((MR_Box) (hlds__mark_tail_calls__V_165_165));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 2) = ((MR_Box) (hlds__mark_tail_calls__V_166_166));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 3) = ((MR_Box) (hlds__mark_tail_calls__V_167_167));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 4) = ((MR_Box) (hlds__mark_tail_calls__V_168_168));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 5) = ((MR_Box) (hlds__mark_tail_calls__V_169_169));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__InnerInfo_35, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    else
                      hlds__mark_tail_calls__InnerInfo_35 = hlds__mark_tail_calls__Info_9;
                    {
                      hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__InnerInfo_35, hlds__mark_tail_calls__FoundTailCalls_10, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129, hlds__mark_tail_calls__SubGoal0_32, &hlds__mark_tail_calls__SubGoal_36, hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Reason_31, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      {
                        hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__FoundTailCalls_10, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129, hlds__mark_tail_calls__SubGoal0_32, &hlds__mark_tail_calls__SubGoal_36, hlds__mark_tail_calls__AtTail0_14, hlds__mark_tail_calls__AtTail_15);
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "mark_tail_calls.m", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/8", (MR_String) "unexpected scope kind");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word hlds__mark_tail_calls__AtTail1_41;

                        {
                          hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_14, &hlds__mark_tail_calls__AtTail1_41);
                        }
                        {
                          hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, hlds__mark_tail_calls__FoundTailCalls_10, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129, hlds__mark_tail_calls__SubGoal0_32, &hlds__mark_tail_calls__SubGoal_36, hlds__mark_tail_calls__AtTail1_41, hlds__mark_tail_calls__AtTail_15);
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                hlds__mark_tail_calls__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_153_153, 1) = ((MR_Box) (hlds__mark_tail_calls__Reason_31));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_153_153, 2) = ((MR_Box) (hlds__mark_tail_calls__SubGoal_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_13 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__V_153_153));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__mark_tail_calls__Vars_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Cond0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Then0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Else0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_16, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__FoundTailCallsThen_117;
              MR_Word hlds__mark_tail_calls__Then_118;
              MR_Word hlds__mark_tail_calls__AtTailThen_119;
              MR_Word hlds__mark_tail_calls__FoundTailCallsElse_120;
              MR_Word hlds__mark_tail_calls__Else_121;
              MR_Word hlds__mark_tail_calls__AtTailElse_122;
              MR_Word hlds__mark_tail_calls__AtTailBranch0_123;
              MR_Word hlds__mark_tail_calls__AtTailBranch_124;
              MR_Word hlds__mark_tail_calls__Cond_126;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_133_133;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_134_134;
              MR_Word hlds__mark_tail_calls__GoalExpr_163;
              MR_Word hlds__mark_tail_calls__V_125_125;

              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, &hlds__mark_tail_calls__FoundTailCallsThen_117, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_128, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_133_133, hlds__mark_tail_calls__Then0_115, &hlds__mark_tail_calls__Then_118, hlds__mark_tail_calls__AtTail0_14, &hlds__mark_tail_calls__AtTailThen_119);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, &hlds__mark_tail_calls__FoundTailCallsElse_120, hlds__mark_tail_calls__STATE_VARIABLE_Specs_133_133, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_134_134, hlds__mark_tail_calls__Else0_116, &hlds__mark_tail_calls__Else_121, hlds__mark_tail_calls__AtTail0_14, &hlds__mark_tail_calls__AtTailElse_122);
              }
              {
                hlds__mark_tail_calls__AtTailBranch0_123 = hlds__mark_tail_calls__at_tail_branch_2_f_0(hlds__mark_tail_calls__AtTailThen_119, hlds__mark_tail_calls__AtTailElse_122);
              }
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTailBranch0_123, &hlds__mark_tail_calls__AtTailBranch_124);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_9, &hlds__mark_tail_calls__V_125_125, hlds__mark_tail_calls__STATE_VARIABLE_Specs_134_134, hlds__mark_tail_calls__STATE_VARIABLE_Specs_129, hlds__mark_tail_calls__Cond0_114, &hlds__mark_tail_calls__Cond_126, hlds__mark_tail_calls__AtTailBranch_124, hlds__mark_tail_calls__AtTail_15);
              }
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__FoundTailCallsThen_117 == (MR_Integer) 0);
              if (!(hlds__mark_tail_calls__succeeded))
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__FoundTailCallsElse_120 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
                *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 0;
              else
                *hlds__mark_tail_calls__FoundTailCalls_10 = (MR_Integer) 1;
              {
                hlds__mark_tail_calls__GoalExpr_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_163, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_113));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_163, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_126));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_163, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_118));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_163, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_13 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_163));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/8", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
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
        MR_Word hlds__mark_tail_calls__OutputVar_14;
        MR_Word hlds__mark_tail_calls__OutputVars_15;
        MR_Word hlds__mark_tail_calls__TopFunctorMode_16;

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
                  check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__TopFunctorMode_16);
                }
                switch (hlds__mark_tail_calls__TopFunctorMode_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__mark_tail_calls__IsDummy_17;

                      {
                        hlds__mark_tail_calls__IsDummy_17 = check_hlds__type_util__check_dummy_type_2_f_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Type_8);
                      }
                      switch (hlds__mark_tail_calls__IsDummy_17) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__OutputVar_14, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_12));
                          }
                          break;
                      }
                    }
                    break;
                }
                {
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Types_9, hlds__mark_tail_calls__Modes_11, hlds__mark_tail_calls__Vars_13, &hlds__mark_tail_calls__OutputVars_15);
                }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__mark_tail_calls__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__OutputVar_14));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OutputVars_15));
                    }
                    hlds__mark_tail_calls__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_procs_7_p_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_5,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__mark_tail_calls__succeeded;

        if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__mark_tail_calls__STATE_VARIABLE_Specs_7 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6;
            *hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_5 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4;
          }
        else
          {
            MR_Integer hlds__mark_tail_calls__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__mark_tail_calls__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__mark_tail_calls__ProcInfo0_22;
            MR_Word hlds__mark_tail_calls__ProcInfo_23;
            MR_Word hlds__mark_tail_calls__MaybeChanged_24;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_29_29;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30;

            {
              hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, hlds__mark_tail_calls__ProcId_18, &hlds__mark_tail_calls__ProcInfo0_22);
            }
            {
              hlds__mark_tail_calls__mark_tail_calls_in_proc_9_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__ProcId_18, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, hlds__mark_tail_calls__ProcInfo0_22, &hlds__mark_tail_calls__ProcInfo_23, &hlds__mark_tail_calls__MaybeChanged_24, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_29_29);
            }
            switch (hlds__mark_tail_calls__MaybeChanged_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(hlds__mark_tail_calls__ProcId_18, hlds__mark_tail_calls__ProcInfo_23, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30);
                }
                break;
              case (MR_Integer) 0:
                hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__mark_tail_calls__HeadVar__3__tmp_copy_3 = hlds__mark_tail_calls__ProcIds_19;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0__tmp_copy_4 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_29_29;

              hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0__tmp_copy_6;
              hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0__tmp_copy_4;
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
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_5));
    }
    {
      hlds__mark_tail_calls__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_35_35, 1) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_8));
    }
    {
      hlds__mark_tail_calls__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 0) = ((MR_Box) (hlds__mark_tail_calls__V_35_35));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[10])));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_34_34));
    }
    {
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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
      hlds__mark_tail_calls__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_21_21, 1) = ((MR_Box) (hlds__mark_tail_calls__V_24_24));
    }
    {
      hlds__mark_tail_calls__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_18_18, 1) = ((MR_Box) (hlds__mark_tail_calls__V_21_21));
    }
    {
      hlds__mark_tail_calls__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17])));
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
hlds__mark_tail_calls__add_message_for_nontail_recursive_call_6_p_0(
  MR_Word hlds__mark_tail_calls__SimpleCallId_7,
  MR_Integer hlds__mark_tail_calls__ProcId_8,
  MR_Word hlds__mark_tail_calls__WarnOrError_9,
  MR_Word hlds__mark_tail_calls__Context_10,
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
    MR_Word hlds__mark_tail_calls__V_26_26;
    MR_Word hlds__mark_tail_calls__V_27_27;
    MR_Word hlds__mark_tail_calls__V_28_28;
    MR_Word hlds__mark_tail_calls__V_31_31;
    MR_Word hlds__mark_tail_calls__V_32_32;
    MR_Word hlds__mark_tail_calls__V_33_33;
    MR_Word hlds__mark_tail_calls__V_36_36;
    MR_Word hlds__mark_tail_calls__V_38_38;
    MR_Word hlds__mark_tail_calls__V_45_45;
    MR_Word hlds__mark_tail_calls__V_46_46;
    MR_Word hlds__mark_tail_calls__V_49_49;

    switch (hlds__mark_tail_calls__WarnOrError_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[12]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_13 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[13]);
        }
        break;
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_8, &hlds__mark_tail_calls__ProcNumber0_14);
    }
    hlds__mark_tail_calls__ProcNumber_15 = (hlds__mark_tail_calls__ProcNumber0_14 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_27_27, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_15));
    }
    {
      hlds__mark_tail_calls__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_7));
    }
    {
      hlds__mark_tail_calls__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_13));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[6])));
    }
    {
      hlds__mark_tail_calls__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 1) = ((MR_Box) (hlds__mark_tail_calls__V_38_38));
    }
    {
      hlds__mark_tail_calls__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 1) = ((MR_Box) (hlds__mark_tail_calls__V_36_36));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (hlds__mark_tail_calls__V_32_32));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_33_33));
    }
    {
      hlds__mark_tail_calls__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 1) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
    }
    {
      hlds__mark_tail_calls__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 0) = ((MR_Box) (hlds__mark_tail_calls__V_27_27));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 1) = ((MR_Box) (hlds__mark_tail_calls__V_28_28));
    }
    {
      hlds__mark_tail_calls__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_16, 1) = ((MR_Box) (hlds__mark_tail_calls__V_26_26));
    }
    {
      hlds__mark_tail_calls__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_46_46, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_16));
    }
    {
      hlds__mark_tail_calls__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_45_45, 0) = ((MR_Box) (hlds__mark_tail_calls__V_46_46));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_10));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_17, 1) = ((MR_Box) (hlds__mark_tail_calls__V_45_45));
    }
    {
      hlds__mark_tail_calls__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_49_49, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_17));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_18, 2) = ((MR_Box) (hlds__mark_tail_calls__V_49_49));
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
hlds__mark_tail_calls__mark_tail_calls_in_proc_9_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_10,
  MR_Word hlds__mark_tail_calls__PredId_11,
  MR_Integer hlds__mark_tail_calls__ProcId_12,
  MR_Word hlds__mark_tail_calls__PredInfo_13,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_29,
  MR_Word * hlds__mark_tail_calls__MaybeChanged_15,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_31)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Detism_17;
    MR_Word hlds__mark_tail_calls__SolnCount_19;
    MR_Word hlds__mark_tail_calls___CanFail_18;

    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__Detism_17);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_17, &hlds__mark_tail_calls___CanFail_18, &hlds__mark_tail_calls__SolnCount_19);
    }
    switch (hlds__mark_tail_calls__SolnCount_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__MaybeChanged_15 = (MR_Integer) 0;
          *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_29 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28;
          *hlds__mark_tail_calls__STATE_VARIABLE_Specs_31 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_30;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__Globals_20;
          MR_Word hlds__mark_tail_calls__ExecTraceTailRec_21;
          MR_Word hlds__mark_tail_calls__AddGoalFeature_22;
          MR_Word hlds__mark_tail_calls__WarnNonTailRecBool_23;
          MR_Word hlds__mark_tail_calls__WarnNonTailRecOpt_24;
          MR_Word hlds__mark_tail_calls__MaybeRequireTailRec_25;

          {
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__ModuleInfo_10, &hlds__mark_tail_calls__Globals_20);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_20, (MR_Integer) 138, &hlds__mark_tail_calls__ExecTraceTailRec_21);
          }
          switch (hlds__mark_tail_calls__ExecTraceTailRec_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__mark_tail_calls__AddGoalFeature_22 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              hlds__mark_tail_calls__AddGoalFeature_22 = (MR_Integer) 0;
              break;
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_20, (MR_Integer) 31, &hlds__mark_tail_calls__WarnNonTailRecBool_23);
          }
          switch (hlds__mark_tail_calls__WarnNonTailRecBool_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__mark_tail_calls__WarnNonTailRecOpt_24 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              hlds__mark_tail_calls__WarnNonTailRecOpt_24 = (MR_Integer) 1;
              break;
          }
          {
            hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__MaybeRequireTailRec_25);
          }
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__AddGoalFeature_22 == (MR_Integer) 1);
          if (hlds__mark_tail_calls__succeeded)
            switch (hlds__mark_tail_calls__WarnNonTailRecOpt_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((hlds__mark_tail_calls__MaybeRequireTailRec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__mark_tail_calls__succeeded = MR_TRUE;
                else
                  {
                    MR_Word hlds__mark_tail_calls__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_25, (MR_Integer) 0)));
                    MR_Word hlds__mark_tail_calls__V_26_26;

                    hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__V_35_35)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__mark_tail_calls__succeeded)
                      hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_35_35, (MR_Integer) 0)));
                  }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__mark_tail_calls__V_34_34;
                  MR_Word hlds__mark_tail_calls__V_27_27;

                  hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__MaybeRequireTailRec_25)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      hlds__mark_tail_calls__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_25, (MR_Integer) 0)));
                      hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__V_34_34)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__mark_tail_calls__succeeded)
                        hlds__mark_tail_calls__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_34_34, (MR_Integer) 0)));
                    }
                }
                break;
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              *hlds__mark_tail_calls__MaybeChanged_15 = (MR_Integer) 0;
              *hlds__mark_tail_calls__STATE_VARIABLE_Specs_31 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_30;
              *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_29 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28;
            }
          else
            {
              MR_Word hlds__mark_tail_calls__Types_51;
              MR_Word hlds__mark_tail_calls__Goal0_52;
              MR_Word hlds__mark_tail_calls__Modes_53;
              MR_Word hlds__mark_tail_calls__HeadVars_54;
              MR_Word hlds__mark_tail_calls__VarTypes_55;
              MR_Word hlds__mark_tail_calls__Outputs_56;
              MR_Word hlds__mark_tail_calls__MaybeRequireTailRecContext_57;
              MR_Word hlds__mark_tail_calls__WarnNonTailRec_58;
              MR_Word hlds__mark_tail_calls__Info_63;
              MR_Word hlds__mark_tail_calls__FoundTailCalls_64;
              MR_Word hlds__mark_tail_calls__Goal_65;
              MR_Word hlds__mark_tail_calls__TailCallEvents_67;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_49_75;
              MR_Word hlds__mark_tail_calls__V_76_76;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_51_77;
              MR_Word hlds__mark_tail_calls__OutputsPrime_86;
              MR_Word hlds__mark_tail_calls__V_66_66;

              {
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_13, &hlds__mark_tail_calls__Types_51);
              }
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__Goal0_52);
              }
              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__Modes_53);
              }
              {
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__HeadVars_54);
              }
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__VarTypes_55);
              }
              {
                hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_10, hlds__mark_tail_calls__Types_51, hlds__mark_tail_calls__Modes_53, hlds__mark_tail_calls__HeadVars_54, &hlds__mark_tail_calls__OutputsPrime_86);
              }
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__Outputs_56 = hlds__mark_tail_calls__OutputsPrime_86;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", (MR_String) "list length mismatch");
                    return;
                  }
                }
              if ((hlds__mark_tail_calls__MaybeRequireTailRec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  hlds__mark_tail_calls__MaybeRequireTailRecContext_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  switch (hlds__mark_tail_calls__WarnNonTailRecOpt_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__mark_tail_calls__WarnNonTailRec_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__mark_tail_calls__WarnNonTailRec_58 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[11]);
                      }
                      break;
                  }
                }
              else
                {
                  MR_Word hlds__mark_tail_calls__RequireTailrecInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRec_25, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__RequireTailRecContext_62;

                  if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailrecInfo0_59)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word hlds__mark_tail_calls__WarnOrError_60 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo0_59, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls__RecType_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo0_59, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                      hlds__mark_tail_calls__RequireTailRecContext_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo0_59, (MR_Integer) 1)));
                      {
                        hlds__mark_tail_calls__WarnNonTailRec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRec_58, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrError_60));
                        MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__WarnNonTailRec_58, 1) = ((MR_Box) (hlds__mark_tail_calls__RecType_61));
                      }
                    }
                  else
                    {
                      hlds__mark_tail_calls__RequireTailRecContext_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__RequireTailrecInfo0_59, (MR_Integer) 0)));
                      hlds__mark_tail_calls__WarnNonTailRec_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  {
                    hlds__mark_tail_calls__MaybeRequireTailRecContext_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecContext_57, 0) = ((MR_Box) (hlds__mark_tail_calls__RequireTailRecContext_62));
                  }
                }
              {
                hlds__mark_tail_calls__Info_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 0) = ((MR_Box) (hlds__mark_tail_calls__AddGoalFeature_22));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 1) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_10));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 2) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_13));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 3) = ((MR_Box) (hlds__mark_tail_calls__PredId_11));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 4) = ((MR_Box) (hlds__mark_tail_calls__ProcId_12));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 5) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_55));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_63, 6) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRec_58));
              }
              {
                hlds__mark_tail_calls__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_76_76, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_56));
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_8_p_0(hlds__mark_tail_calls__Info_63, &hlds__mark_tail_calls__FoundTailCalls_64, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_30, &hlds__mark_tail_calls__STATE_VARIABLE_Specs_49_75, hlds__mark_tail_calls__Goal0_52, &hlds__mark_tail_calls__Goal_65, hlds__mark_tail_calls__V_76_76, &hlds__mark_tail_calls__V_66_66);
              }
              {
                hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_65, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_28, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_51_77);
              }
              switch (hlds__mark_tail_calls__FoundTailCalls_64) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__mark_tail_calls__TailCallEvents_67 = (MR_Integer) 0;
                    *hlds__mark_tail_calls__STATE_VARIABLE_Specs_31 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_49_75;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__mark_tail_calls__TailCallEvents_67 = (MR_Integer) 1;
                    if ((hlds__mark_tail_calls__MaybeRequireTailRecContext_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_31 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_49_75;
                    else
                      {
                        MR_Word hlds__mark_tail_calls__Context_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecContext_57, (MR_Integer) 0)));
                        MR_Word hlds__mark_tail_calls__PredOrFunc_69;
                        MR_String hlds__mark_tail_calls__Name_70;
                        MR_Integer hlds__mark_tail_calls__Arity_71;
                        MR_Word hlds__mark_tail_calls__SimpleCallId_72;
                        MR_Word hlds__mark_tail_calls__V_78_78;

                        {
                          hlds__mark_tail_calls__PredOrFunc_69 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_13);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__mark_tail_calls__PredInfo_13, &hlds__mark_tail_calls__Name_70);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(hlds__mark_tail_calls__PredInfo_13, &hlds__mark_tail_calls__Arity_71);
                        }
                        {
                          hlds__mark_tail_calls__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_78_78, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_70));
                        }
                        {
                          hlds__mark_tail_calls__SimpleCallId_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_72, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_69));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_72, 1) = ((MR_Box) (hlds__mark_tail_calls__V_78_78));
                          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_72, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_71));
                        }
                        {
                          hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(hlds__mark_tail_calls__SimpleCallId_72, hlds__mark_tail_calls__Context_68, hlds__mark_tail_calls__STATE_VARIABLE_Specs_49_75, hlds__mark_tail_calls__STATE_VARIABLE_Specs_31);
                        }
                      }
                  }
                  break;
              }
              {
                hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_67, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_51_77, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_29);
              }
              *hlds__mark_tail_calls__MaybeChanged_15 = (MR_Integer) 1;
            }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_pred_7_p_0(
  MR_Word hlds__mark_tail_calls__PredId_8,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_14,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_15,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_16,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__ProcIds_12;

    {
      hlds__mark_tail_calls__ProcIds_12 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_15);
    }
    {
      hlds__mark_tail_calls__mark_tail_calls_in_procs_7_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_13, hlds__mark_tail_calls__PredId_8, hlds__mark_tail_calls__ProcIds_12, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_15, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_16, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_17, hlds__mark_tail_calls__STATE_VARIABLE_Specs_18);
    }
    *hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_14 = hlds__mark_tail_calls__STATE_VARIABLE_ModuleInfo_0_13;
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
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_rec_call_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_calls_opt_0);
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
