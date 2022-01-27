/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[8];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[8];

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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_tail_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_tail_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_tail_calls_0[2];

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
hlds__mark_tail_calls____Unify____warn_tail_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_tail_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_tail_calls_0_0(
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_tail_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
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
hlds__mark_tail_calls__report_nontailcall_7_p_0(
  MR_Word hlds__mark_tail_calls__PredInfo_8,
  MR_Word hlds__mark_tail_calls__SymName_9,
  MR_Integer hlds__mark_tail_calls__Arity_10,
  MR_Integer hlds__mark_tail_calls__ProcId_11,
  MR_Word hlds__mark_tail_calls__Context_12,
  MR_Word hlds__mark_tail_calls__WarnOrError_13,
  MR_Word * hlds__mark_tail_calls__Specs_14);

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontailcall_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_8,
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__SymName_10,
  MR_Integer hlds__mark_tail_calls__Arity_11,
  MR_Integer hlds__mark_tail_calls__ProcId_12,
  MR_Word hlds__mark_tail_calls__Context_13,
  MR_Word * hlds__mark_tail_calls__Specs_14);

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
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Errors_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Errors_9);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_case_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word hlds__mark_tail_calls__Case0_10,
  MR_Word * hlds__mark_tail_calls__Case_11,
  MR_Word * hlds__mark_tail_calls__AtTail_12,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_13,
  MR_Word * hlds__mark_tail_calls__Errors_14);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_disj_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_14,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disj_15,
  MR_Word * hlds__mark_tail_calls__AtTail_11,
  MR_Word * hlds__mark_tail_calls__FoundAtTail_12,
  MR_Word * hlds__mark_tail_calls__Errors_13);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word hlds__mark_tail_calls__ToVar_5,
  MR_Word hlds__mark_tail_calls__FromVar_6,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_5);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_5);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_9,
  MR_Word * hlds__mark_tail_calls__Errors_10,
  MR_Word hlds__mark_tail_calls__Goal0_11,
  MR_Word * hlds__mark_tail_calls__Goal_12,
  MR_Word hlds__mark_tail_calls__AtTail0_13,
  MR_Word * hlds__mark_tail_calls__AtTail_14);

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_calls_in_proc_10_p_0(
  MR_Word hlds__mark_tail_calls__AddGoalFeature_11,
  MR_Word hlds__mark_tail_calls__WarnNonTailRecursion_12,
  MR_Word hlds__mark_tail_calls__MaybeRequireTailRecursion_13,
  MR_Word hlds__mark_tail_calls__ModuleInfo_14,
  MR_Word hlds__mark_tail_calls__PredId_15,
  MR_Word hlds__mark_tail_calls__PredInfo_16,
  MR_Integer hlds__mark_tail_calls__ProcId_17,
  MR_Word * hlds__mark_tail_calls__Errors_18,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_44);

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

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10];

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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_require_tail_recursion_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: code is not recursive."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "recursive call is not tail recursive."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In:"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
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

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0)),
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
  (MR_Integer) 15,
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
  NULL
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
  NULL
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
  NULL
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_require_tail_recursion_0
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_add_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_tail_calls_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[8] = {
  (MR_String) "mtc_add_feature",
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_pred_id",
  (MR_String) "mtc_proc_id",
  (MR_String) "mtc_vartypes",
  (MR_String) "mtc_warn_tail_calls",
  (MR_String) "mtc_maybe_require_tailrec"
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0 = {
  (MR_String) "mark_tail_calls_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0,
  NULL,
  NULL
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_0 = {
  (MR_String) "warn_tail_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_1 = {
  (MR_String) "do_not_warn_tail_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_warn_tail_calls_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_tail_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_tail_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____warn_tail_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____warn_tail_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "warn_tail_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_warn_tail_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_warn_tail_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_tail_calls_0
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
hlds__mark_tail_calls____Unify____warn_tail_calls_0_0_10001(
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____warn_tail_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
    return hlds__mark_tail_calls__succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_tail_calls_0_0_10001(
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

    {
      hlds__mark_tail_calls____Compare____warn_tail_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_tail_calls_0_0(
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
hlds__mark_tail_calls____Unify____warn_tail_calls_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

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
    MR_Integer hlds__mark_tail_calls__CastX_27 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
    MR_Integer hlds__mark_tail_calls__CastY_28 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_27 == hlds__mark_tail_calls__CastY_28);
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
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_20_20;
        MR_Integer hlds__mark_tail_calls__V_37_37 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
        MR_Integer hlds__mark_tail_calls__V_38_38 = (MR_Integer) hlds__mark_tail_calls__V_12_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_20_20, hlds__mark_tail_calls__V_37_37, hlds__mark_tail_calls__V_38_38);
        }
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_20_20 == (MR_Integer) 0);
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
        if (hlds__mark_tail_calls__succeeded)
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_20_20;
        else
          {
            MR_Word hlds__mark_tail_calls__V_21_21;

            {
              hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__V_21_21, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_13_13);
            }
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_21_21 == (MR_Integer) 0);
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
            if (hlds__mark_tail_calls__succeeded)
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_21_21;
            else
              {
                MR_Word hlds__mark_tail_calls__V_22_22;

                {
                  hlds__hlds_pred____Compare____pred_info_0_0(&hlds__mark_tail_calls__V_22_22, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_14_14);
                }
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_22_22 == (MR_Integer) 0);
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                if (hlds__mark_tail_calls__succeeded)
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_22_22;
                else
                  {
                    MR_Word hlds__mark_tail_calls__V_23_23;

                    {
                      hlds__hlds_pred____Compare____pred_id_0_0(&hlds__mark_tail_calls__V_23_23, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_15_15);
                    }
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_23_23 == (MR_Integer) 0);
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                    if (hlds__mark_tail_calls__succeeded)
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_23_23;
                    else
                      {
                        MR_Word hlds__mark_tail_calls__V_24_24;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_24_24, hlds__mark_tail_calls__V_8_8, hlds__mark_tail_calls__V_16_16);
                        }
                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_24_24 == (MR_Integer) 0);
                        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                        if (hlds__mark_tail_calls__succeeded)
                          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_24_24;
                        else
                          {
                            MR_Word hlds__mark_tail_calls__V_25_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_2[0], &hlds__mark_tail_calls__V_25_25, ((MR_Box) (hlds__mark_tail_calls__V_9_9)), ((MR_Box) (hlds__mark_tail_calls__V_17_17)));
                            }
                            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_25_25 == (MR_Integer) 0);
                            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                            if (hlds__mark_tail_calls__succeeded)
                              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_25_25;
                            else
                              {
                                MR_Word hlds__mark_tail_calls__V_26_26;
                                MR_Integer hlds__mark_tail_calls__V_39_39 = (MR_Integer) hlds__mark_tail_calls__V_10_10;
                                MR_Integer hlds__mark_tail_calls__V_40_40 = (MR_Integer) hlds__mark_tail_calls__V_18_18;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_26_26, hlds__mark_tail_calls__V_39_39, hlds__mark_tail_calls__V_40_40);
                                }
                                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_26_26 == (MR_Integer) 0);
                                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
                                if (hlds__mark_tail_calls__succeeded)
                                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_26_26;
                                else
                                  {
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[4], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_11_11)), ((MR_Box) (hlds__mark_tail_calls__V_19_19)));
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
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Integer hlds__mark_tail_calls__CastX_19 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
    MR_Integer hlds__mark_tail_calls__CastY_20 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_19 == hlds__mark_tail_calls__CastY_20);
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__mark_tail_calls__TypeInfo_24_24;
        MR_Word hlds__mark_tail_calls__TypeInfo_25_25;
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__mark_tail_calls__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__mark_tail_calls__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__mark_tail_calls__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 7)));

        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_11_11);
        if (hlds__mark_tail_calls__succeeded)
          {
            {
              hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_12_12);
            }
            if (hlds__mark_tail_calls__succeeded)
              {
                {
                  hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_13_13);
                }
                if (hlds__mark_tail_calls__succeeded)
                  {
                    {
                      hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_14_14);
                    }
                    if (hlds__mark_tail_calls__succeeded)
                      {
                        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_7_7 == hlds__mark_tail_calls__V_15_15);
                        if (hlds__mark_tail_calls__succeeded)
                          {
                            hlds__mark_tail_calls__TypeInfo_24_24 = (MR_Word) &hlds__mark_tail_calls_scalar_common_2[0];
                            {
                              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_24_24, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_16_16)));
                            }
                            if (hlds__mark_tail_calls__succeeded)
                              {
                                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_9_9 == hlds__mark_tail_calls__V_17_17);
                                if (hlds__mark_tail_calls__succeeded)
                                  {
                                    hlds__mark_tail_calls__TypeInfo_25_25 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[4];
                                    {
                                      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_25_25, ((MR_Box) (hlds__mark_tail_calls__V_10_10)), ((MR_Box) (hlds__mark_tail_calls__V_18_18)));
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
hlds__mark_tail_calls__report_nontailcall_7_p_0(
  MR_Word hlds__mark_tail_calls__PredInfo_8,
  MR_Word hlds__mark_tail_calls__SymName_9,
  MR_Integer hlds__mark_tail_calls__Arity_10,
  MR_Integer hlds__mark_tail_calls__ProcId_11,
  MR_Word hlds__mark_tail_calls__Context_12,
  MR_Word hlds__mark_tail_calls__WarnOrError_13,
  MR_Word * hlds__mark_tail_calls__Specs_14)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Severity_15;
    MR_Word hlds__mark_tail_calls__WarnOrErrorWord_16;
    MR_Word hlds__mark_tail_calls__PredOrFunc_17;
    MR_String hlds__mark_tail_calls__Name_18;
    MR_Word hlds__mark_tail_calls__SimpleCallId_19;
    MR_Integer hlds__mark_tail_calls__ProcNumber0_20;
    MR_Integer hlds__mark_tail_calls__ProcNumber_21;
    MR_Word hlds__mark_tail_calls__Pieces_22;
    MR_Word hlds__mark_tail_calls__Msg_23;
    MR_Word hlds__mark_tail_calls__Spec_24;
    MR_Word hlds__mark_tail_calls__V_27_27;
    MR_Word hlds__mark_tail_calls__V_31_31;
    MR_Word hlds__mark_tail_calls__V_32_32;
    MR_Word hlds__mark_tail_calls__V_33_33;
    MR_Word hlds__mark_tail_calls__V_36_36;
    MR_Word hlds__mark_tail_calls__V_37_37;
    MR_Word hlds__mark_tail_calls__V_38_38;
    MR_Word hlds__mark_tail_calls__V_41_41;
    MR_Word hlds__mark_tail_calls__V_43_43;
    MR_Word hlds__mark_tail_calls__V_50_50;
    MR_Word hlds__mark_tail_calls__V_51_51;
    MR_Word hlds__mark_tail_calls__V_54_54;

    switch (hlds__mark_tail_calls__WarnOrError_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__mark_tail_calls__WarnOrErrorWord_16 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16]);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          hlds__mark_tail_calls__WarnOrErrorWord_16 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[17]);
        }
        break;
    }
    {
      hlds__mark_tail_calls__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_8);
    }
    {
      hlds__mark_tail_calls__Name_18 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__mark_tail_calls__SymName_9);
    }
    {
      hlds__mark_tail_calls__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_27_27, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_18));
    }
    {
      hlds__mark_tail_calls__SimpleCallId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_19, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_17));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_19, 1) = ((MR_Box) (hlds__mark_tail_calls__V_27_27));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_19, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_10));
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_11, &hlds__mark_tail_calls__ProcNumber0_20);
    }
    hlds__mark_tail_calls__ProcNumber_21 = (hlds__mark_tail_calls__ProcNumber0_20 + (MR_Integer) 1);
    {
      hlds__mark_tail_calls__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_32_32, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_21));
    }
    {
      hlds__mark_tail_calls__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_37_37, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_19));
    }
    {
      hlds__mark_tail_calls__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_43_43, 0) = ((MR_Box) (hlds__mark_tail_calls__WarnOrErrorWord_16));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[12])));
    }
    {
      hlds__mark_tail_calls__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_41_41, 1) = ((MR_Box) (hlds__mark_tail_calls__V_43_43));
    }
    {
      hlds__mark_tail_calls__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_38_38, 1) = ((MR_Box) (hlds__mark_tail_calls__V_41_41));
    }
    {
      hlds__mark_tail_calls__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 0) = ((MR_Box) (hlds__mark_tail_calls__V_37_37));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_36_36, 1) = ((MR_Box) (hlds__mark_tail_calls__V_38_38));
    }
    {
      hlds__mark_tail_calls__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 1) = ((MR_Box) (hlds__mark_tail_calls__V_36_36));
    }
    {
      hlds__mark_tail_calls__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 0) = ((MR_Box) (hlds__mark_tail_calls__V_32_32));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_31_31, 1) = ((MR_Box) (hlds__mark_tail_calls__V_33_33));
    }
    {
      hlds__mark_tail_calls__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_22, 1) = ((MR_Box) (hlds__mark_tail_calls__V_31_31));
    }
    {
      hlds__mark_tail_calls__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_51_51, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_22));
    }
    {
      hlds__mark_tail_calls__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 0) = ((MR_Box) (hlds__mark_tail_calls__V_51_51));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Msg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_23, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_23, 1) = ((MR_Box) (hlds__mark_tail_calls__V_50_50));
    }
    {
      hlds__mark_tail_calls__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_54_54, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_23));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__mark_tail_calls__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_24, 0) = ((MR_Box) (hlds__mark_tail_calls__Severity_15));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_24, 2) = ((MR_Box) (hlds__mark_tail_calls__V_54_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_tail_calls__Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontailcall_7_p_0(
  MR_Word hlds__mark_tail_calls__AtTail_8,
  MR_Word hlds__mark_tail_calls__Info_9,
  MR_Word hlds__mark_tail_calls__SymName_10,
  MR_Integer hlds__mark_tail_calls__Arity_11,
  MR_Integer hlds__mark_tail_calls__ProcId_12,
  MR_Word hlds__mark_tail_calls__Context_13,
  MR_Word * hlds__mark_tail_calls__Specs_14)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__AtTail_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__mark_tail_calls__AtTail_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__mark_tail_calls__Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__mark_tail_calls__PredInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__WarnTailCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));
              MR_Word hlds__mark_tail_calls__MaybeRequireTailRecursion_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 7)));
              MR_Word hlds__mark_tail_calls__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
              MR_Integer hlds__mark_tail_calls__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));

              if ((hlds__mark_tail_calls__MaybeRequireTailRecursion_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                switch (hlds__mark_tail_calls__WarnTailCalls_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    *hlds__mark_tail_calls__Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        hlds__mark_tail_calls__report_nontailcall_7_p_0(hlds__mark_tail_calls__PredInfo_16, hlds__mark_tail_calls__SymName_10, hlds__mark_tail_calls__Arity_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__Context_13, (MR_Integer) 0, hlds__mark_tail_calls__Specs_14);
                      }
                    }
                    break;
                }
              else
                {
                  MR_Word hlds__mark_tail_calls__RequireTailrecInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecursion_18, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailrecInfo_19)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word hlds__mark_tail_calls__WarnOrError_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls___Type_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word hlds__mark_tail_calls__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 1)));

                      {
                        hlds__mark_tail_calls__report_nontailcall_7_p_0(hlds__mark_tail_calls__PredInfo_16, hlds__mark_tail_calls__SymName_10, hlds__mark_tail_calls__Arity_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__Context_13, hlds__mark_tail_calls__WarnOrError_20, hlds__mark_tail_calls__Specs_14);
                      }
                    }
                  else
                    *hlds__mark_tail_calls__Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__PredInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__WarnTailCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 6)));
          MR_Word hlds__mark_tail_calls__MaybeRequireTailRecursion_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 7)));
          MR_Word hlds__mark_tail_calls__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 3)));
          MR_Integer hlds__mark_tail_calls__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_9, (MR_Integer) 5)));

          if ((hlds__mark_tail_calls__MaybeRequireTailRecursion_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            switch (hlds__mark_tail_calls__WarnTailCalls_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *hlds__mark_tail_calls__Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 0:
                {
                  {
                    hlds__mark_tail_calls__report_nontailcall_7_p_0(hlds__mark_tail_calls__PredInfo_16, hlds__mark_tail_calls__SymName_10, hlds__mark_tail_calls__Arity_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__Context_13, (MR_Integer) 0, hlds__mark_tail_calls__Specs_14);
                  }
                }
                break;
            }
          else
            {
              MR_Word hlds__mark_tail_calls__RequireTailrecInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecursion_18, (MR_Integer) 0)));

              if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailrecInfo_19)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word hlds__mark_tail_calls__WarnOrError_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word hlds__mark_tail_calls___Type_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word hlds__mark_tail_calls__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_19, (MR_Integer) 1)));

                  {
                    hlds__mark_tail_calls__report_nontailcall_7_p_0(hlds__mark_tail_calls__PredInfo_16, hlds__mark_tail_calls__SymName_10, hlds__mark_tail_calls__Arity_11, hlds__mark_tail_calls__ProcId_12, hlds__mark_tail_calls__Context_13, hlds__mark_tail_calls__WarnOrError_20, hlds__mark_tail_calls__Specs_14);
                  }
                }
              else
                *hlds__mark_tail_calls__Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Errors_0_8,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Errors_9)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__mark_tail_calls__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__mark_tail_calls__STATE_VARIABLE_Errors_9 = hlds__mark_tail_calls__STATE_VARIABLE_Errors_0_8;
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
        *hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5 = hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4;
      }
    else
      {
        MR_Word hlds__mark_tail_calls__RevGoal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__mark_tail_calls__RevGoals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__mark_tail_calls__RevGoal_23;
        MR_Word hlds__mark_tail_calls__RevGoals_24;
        MR_Word hlds__mark_tail_calls__Errors_27;
        MR_Word hlds__mark_tail_calls__FoundTailCallsConj_28;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_AtTail_35_35;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_36_36;
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Errors_37_37;

        {
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, &hlds__mark_tail_calls__FoundTailCallsConj_28, &hlds__mark_tail_calls__Errors_27, hlds__mark_tail_calls__RevGoal0_21, &hlds__mark_tail_calls__RevGoal_23, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_AtTail_35_35);
        }
        switch (hlds__mark_tail_calls__FoundTailCallsConj_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_36_36 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_36_36 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
            break;
        }
        {
          hlds__mark_tail_calls__STATE_VARIABLE_Errors_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__Errors_27, hlds__mark_tail_calls__STATE_VARIABLE_Errors_0_8);
        }
        {
          hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__RevGoals0_22, &hlds__mark_tail_calls__RevGoals_24, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_35_35, hlds__mark_tail_calls__STATE_VARIABLE_AtTail_5, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_36_36, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7, hlds__mark_tail_calls__STATE_VARIABLE_Errors_37_37, hlds__mark_tail_calls__STATE_VARIABLE_Errors_9);
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
hlds__mark_tail_calls__mark_tail_calls_in_case_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word hlds__mark_tail_calls__Case0_10,
  MR_Word * hlds__mark_tail_calls__Case_11,
  MR_Word * hlds__mark_tail_calls__AtTail_12,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_13,
  MR_Word * hlds__mark_tail_calls__Errors_14)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_10, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_10, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_10, (MR_Integer) 2)));
    MR_Word hlds__mark_tail_calls__Goal_18;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundTailCalls_13, hlds__mark_tail_calls__Errors_14, hlds__mark_tail_calls__Goal0_17, &hlds__mark_tail_calls__Goal_18, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_tail_calls__Case_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MainConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OtherConsIds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_tail_calls__Goal_18));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_disj_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word hlds__mark_tail_calls__AtTail0_9,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_14,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Disj_15,
  MR_Word * hlds__mark_tail_calls__AtTail_11,
  MR_Word * hlds__mark_tail_calls__FoundAtTail_12,
  MR_Word * hlds__mark_tail_calls__Errors_13)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundAtTail_12, hlds__mark_tail_calls__Errors_13, hlds__mark_tail_calls__STATE_VARIABLE_Disj_0_14, hlds__mark_tail_calls__STATE_VARIABLE_Disj_15, hlds__mark_tail_calls__AtTail0_9, hlds__mark_tail_calls__AtTail_11);
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
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_2(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_5)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv7_Case_11;
    MR_Word hlds__mark_tail_calls__conv6_AtTail_12;
    MR_Word hlds__mark_tail_calls__conv5_FoundTailCalls_13;
    MR_Word hlds__mark_tail_calls__conv4_Errors_14;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv7_Case_11, &hlds__mark_tail_calls__conv6_AtTail_12, &hlds__mark_tail_calls__conv5_FoundTailCalls_13, &hlds__mark_tail_calls__conv4_Errors_14);
    }
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv7_Case_11));
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv6_AtTail_12));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv5_FoundTailCalls_13));
    *hlds__mark_tail_calls__wrapper_arg_5 = ((MR_Box) (hlds__mark_tail_calls__conv4_Errors_14));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_1(
  MR_Box hlds__mark_tail_calls__closure_arg,
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_2,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_4,
  MR_Box * hlds__mark_tail_calls__wrapper_arg_5)
{
  {
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
    MR_Word hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_15;
    MR_Word hlds__mark_tail_calls__conv2_AtTail_11;
    MR_Word hlds__mark_tail_calls__conv1_FoundAtTail_12;
    MR_Word hlds__mark_tail_calls__conv0_Errors_13;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), &hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_15, &hlds__mark_tail_calls__conv2_AtTail_11, &hlds__mark_tail_calls__conv1_FoundAtTail_12, &hlds__mark_tail_calls__conv0_Errors_13);
    }
    *hlds__mark_tail_calls__wrapper_arg_2 = ((MR_Box) (hlds__mark_tail_calls__conv3_STATE_VARIABLE_Disj_15));
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv2_AtTail_11));
    *hlds__mark_tail_calls__wrapper_arg_4 = ((MR_Box) (hlds__mark_tail_calls__conv1_FoundAtTail_12));
    *hlds__mark_tail_calls__wrapper_arg_5 = ((MR_Box) (hlds__mark_tail_calls__conv0_Errors_13));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
  MR_Word hlds__mark_tail_calls__Info_8,
  MR_Word * hlds__mark_tail_calls__FoundTailCalls_9,
  MR_Word * hlds__mark_tail_calls__Errors_10,
  MR_Word hlds__mark_tail_calls__Goal0_11,
  MR_Word * hlds__mark_tail_calls__Goal_12,
  MR_Word hlds__mark_tail_calls__AtTail0_13,
  MR_Word * hlds__mark_tail_calls__AtTail_14)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 0)));
    MR_Word hlds__mark_tail_calls__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
          {
            hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
          }
          *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 1;
          *hlds__mark_tail_calls__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__Unify0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__ModuleInfo_59;
          MR_Word hlds__mark_tail_calls__VarTypes_60;
          MR_Word hlds__mark_tail_calls__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_153_153;
          MR_Word hlds__mark_tail_calls__V_154_154;
          MR_Word hlds__mark_tail_calls__V_155_155;
          MR_Integer hlds__mark_tail_calls__V_156_156;
          MR_Word hlds__mark_tail_calls__V_158_158;
          MR_Word hlds__mark_tail_calls__V_159_159;

          *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
          hlds__mark_tail_calls__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
          hlds__mark_tail_calls__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
          hlds__mark_tail_calls__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
          hlds__mark_tail_calls__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
          hlds__mark_tail_calls__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
          hlds__mark_tail_calls__VarTypes_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 5)));
          hlds__mark_tail_calls__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 6)));
          hlds__mark_tail_calls__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 7)));
          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_59, hlds__mark_tail_calls__VarTypes_60, hlds__mark_tail_calls__LHS_54);
          }
          if (hlds__mark_tail_calls__succeeded)
            *hlds__mark_tail_calls__AtTail_14 = hlds__mark_tail_calls__AtTail0_13;
          else
            switch (MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_57)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__mark_tail_calls__ToVar_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_57, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__FromVar_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_57, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__Outputs_82;
                  MR_Word hlds__mark_tail_calls__Outputs0_81;

                  hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_13)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      hlds__mark_tail_calls__Outputs0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail0_13, (MR_Integer) 0)));
                      {
                        hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_79, hlds__mark_tail_calls__FromVar_80, hlds__mark_tail_calls__Outputs0_81, &hlds__mark_tail_calls__Outputs_82);
                      }
                    }
                  if (hlds__mark_tail_calls__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__mark_tail_calls__AtTail_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_82));
                    }
                  else
                    *hlds__mark_tail_calls__AtTail_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                }
                break;
              case (MR_Integer) 3:
                {
                  hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
                }
                break;
            }
          *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 1;
          *hlds__mark_tail_calls__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__mark_tail_calls__CallPredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 0)));
          MR_Integer hlds__mark_tail_calls__CallProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__Builtin_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 3)));
          MR_Word hlds__mark_tail_calls__SymName_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 5)));
          MR_Word hlds__mark_tail_calls__PredId_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
          MR_Integer hlds__mark_tail_calls__ProcId_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls___UnifyContext_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 4)));
          MR_Word hlds__mark_tail_calls__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
          MR_Word hlds__mark_tail_calls__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
          MR_Word hlds__mark_tail_calls__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
          MR_Word hlds__mark_tail_calls__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 5)));
          MR_Word hlds__mark_tail_calls__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 6)));
          MR_Word hlds__mark_tail_calls__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 7)));

          {
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__CallPredId_83, hlds__mark_tail_calls__PredId_89);
          }
          if (hlds__mark_tail_calls__succeeded)
            {
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CallProcId_84 == hlds__mark_tail_calls__ProcId_90);
              if (hlds__mark_tail_calls__succeeded)
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_86 == (MR_Integer) 2);
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              MR_Word hlds__mark_tail_calls__Outputs0_143;

              hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__AtTail0_13)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__mark_tail_calls__succeeded)
                {
                  hlds__mark_tail_calls__Outputs0_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__AtTail0_13, (MR_Integer) 0)));
                  {
                    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__match_output_args_2_p_0(hlds__mark_tail_calls__Outputs0_143, hlds__mark_tail_calls__Args_85);
                  }
                }
              if (hlds__mark_tail_calls__succeeded)
                {
                  MR_Word hlds__mark_tail_calls__AddFeature_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
                  MR_Word hlds__mark_tail_calls__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
                  MR_Word hlds__mark_tail_calls__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
                  MR_Integer hlds__mark_tail_calls__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
                  MR_Word hlds__mark_tail_calls__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 5)));
                  MR_Word hlds__mark_tail_calls__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 6)));
                  MR_Word hlds__mark_tail_calls__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 7)));

                  switch (hlds__mark_tail_calls__AddFeature_91) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__mark_tail_calls__GoalInfo_92;

                        {
                          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 10, hlds__mark_tail_calls__GoalInfo0_16, &hlds__mark_tail_calls__GoalInfo_92);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__mark_tail_calls__Goal_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_15));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_92));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
                      break;
                  }
                  *hlds__mark_tail_calls__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Integer hlds__mark_tail_calls__Arity_93;
                  MR_Word hlds__mark_tail_calls__V_138_138;

                  *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
                  {
                    hlds__mark_tail_calls__Arity_93 = mercury__list__length_1_f_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], hlds__mark_tail_calls__Args_85);
                  }
                  {
                    hlds__mark_tail_calls__V_138_138 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__mark_tail_calls__GoalInfo0_16);
                  }
                  {
                    hlds__mark_tail_calls__maybe_report_nontailcall_7_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__SymName_88, hlds__mark_tail_calls__Arity_93, hlds__mark_tail_calls__CallProcId_84, hlds__mark_tail_calls__V_138_138, hlds__mark_tail_calls__Errors_10);
                  }
                }
              *hlds__mark_tail_calls__AtTail_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 0;
            }
          else
            {
              *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
              }
              *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 1;
              *hlds__mark_tail_calls__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
              }
              *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 1;
              *hlds__mark_tail_calls__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_189_189;
              MR_Word hlds__mark_tail_calls__ConjType_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__RevGoals0_96;
              MR_Word hlds__mark_tail_calls__RevGoals_97;
              MR_Word hlds__mark_tail_calls__Goals_98;
              MR_Word hlds__mark_tail_calls__GoalExpr_99;
              MR_Word hlds__mark_tail_calls__AtTail1_148;

              switch (hlds__mark_tail_calls__ConjType_94) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, &hlds__mark_tail_calls__AtTail1_148);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__mark_tail_calls__AtTail1_148 = hlds__mark_tail_calls__AtTail0_13;
                  break;
              }
              hlds__mark_tail_calls__TypeCtorInfo_189_189 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_189_189, hlds__mark_tail_calls__Goals0_95, &hlds__mark_tail_calls__RevGoals0_96);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_conj_9_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__RevGoals0_96, &hlds__mark_tail_calls__RevGoals_97, hlds__mark_tail_calls__AtTail1_148, hlds__mark_tail_calls__AtTail_14, (MR_Integer) 1, hlds__mark_tail_calls__FoundTailCalls_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__mark_tail_calls__Errors_10);
              }
              {
                mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_189_189, hlds__mark_tail_calls__RevGoals_97, &hlds__mark_tail_calls__Goals_98);
              }
              {
                hlds__mark_tail_calls__GoalExpr_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_99, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_94));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_99, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_98));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_99));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_195_195;
              MR_Word hlds__mark_tail_calls__Disjs0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Disjs_101;
              MR_Word hlds__mark_tail_calls__AtTails_102;
              MR_Word hlds__mark_tail_calls__FoundTailCallDisjs_103;
              MR_Word hlds__mark_tail_calls__DisjErrors_104;
              MR_Word hlds__mark_tail_calls__V_134_134;
              MR_Word hlds__mark_tail_calls__GoalExpr_149;

              {
                hlds__mark_tail_calls__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_134_134, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_134_134, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_134_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_134_134, 3) = ((MR_Box) (hlds__mark_tail_calls__Info_8));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_134_134, 4) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_13));
              }
              hlds__mark_tail_calls__TypeCtorInfo_195_195 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map4_6_p_0(hlds__mark_tail_calls__TypeCtorInfo_195_195, hlds__mark_tail_calls__TypeCtorInfo_195_195, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], hlds__mark_tail_calls__V_134_134, hlds__mark_tail_calls__Disjs0_100, &hlds__mark_tail_calls__Disjs_101, &hlds__mark_tail_calls__AtTails_102, &hlds__mark_tail_calls__FoundTailCallDisjs_103, &hlds__mark_tail_calls__DisjErrors_104);
              }
              {
                *hlds__mark_tail_calls__AtTail_14 = hlds__mark_tail_calls__at_tail_branches_1_f_0(hlds__mark_tail_calls__AtTails_102);
              }
              {
                *hlds__mark_tail_calls__FoundTailCalls_9 = hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(hlds__mark_tail_calls__FoundTailCallDisjs_103);
              }
              {
                *hlds__mark_tail_calls__Errors_10 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__DisjErrors_104);
              }
              {
                hlds__mark_tail_calls__GoalExpr_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_149, 1) = ((MR_Box) (hlds__mark_tail_calls__Disjs_101));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_149));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_205_205;
              MR_Word hlds__mark_tail_calls__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__CanFail_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Cases0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Cases_108;
              MR_Word hlds__mark_tail_calls__FoundTailCallsCases_109;
              MR_Word hlds__mark_tail_calls__SwitchErrors_110;
              MR_Word hlds__mark_tail_calls__V_133_133;
              MR_Word hlds__mark_tail_calls__GoalExpr_150;
              MR_Word hlds__mark_tail_calls__AtTails_151;

              {
                hlds__mark_tail_calls__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_133_133, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_133_133, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_133_133, 3) = ((MR_Box) (hlds__mark_tail_calls__Info_8));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_133_133, 4) = ((MR_Box) (hlds__mark_tail_calls__AtTail0_13));
              }
              hlds__mark_tail_calls__TypeCtorInfo_205_205 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map4_6_p_0(hlds__mark_tail_calls__TypeCtorInfo_205_205, hlds__mark_tail_calls__TypeCtorInfo_205_205, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0, (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], hlds__mark_tail_calls__V_133_133, hlds__mark_tail_calls__Cases0_107, &hlds__mark_tail_calls__Cases_108, &hlds__mark_tail_calls__AtTails_151, &hlds__mark_tail_calls__FoundTailCallsCases_109, &hlds__mark_tail_calls__SwitchErrors_110);
              }
              {
                *hlds__mark_tail_calls__AtTail_14 = hlds__mark_tail_calls__at_tail_branches_1_f_0(hlds__mark_tail_calls__AtTails_151);
              }
              {
                *hlds__mark_tail_calls__FoundTailCalls_9 = hlds__mark_tail_calls__found_tail_calls_condense_1_f_0(hlds__mark_tail_calls__FoundTailCallsCases_109);
              }
              {
                *hlds__mark_tail_calls__Errors_10 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__SwitchErrors_110);
              }
              {
                hlds__mark_tail_calls__GoalExpr_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_150, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_105));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_150, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_106));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_150, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_108));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_150));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__mark_tail_calls__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__SubGoal_37;
              MR_Word hlds__mark_tail_calls__V_142_142;

              switch (MR_tag((MR_Word) hlds__mark_tail_calls__Reason_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__mark_tail_calls__AtTail1_36;

                    {
                      hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, &hlds__mark_tail_calls__AtTail1_36);
                    }
                    {
                      hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundTailCalls_9, hlds__mark_tail_calls__Errors_10, hlds__mark_tail_calls__SubGoal0_31, &hlds__mark_tail_calls__SubGoal_37, hlds__mark_tail_calls__AtTail1_36, hlds__mark_tail_calls__AtTail_14);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundTailCalls_9, hlds__mark_tail_calls__Errors_10, hlds__mark_tail_calls__SubGoal0_31, &hlds__mark_tail_calls__SubGoal_37, hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__Reason_30, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "mark_tail_calls.m", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/7", (MR_String) "unexpected scope kind");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word hlds__mark_tail_calls__AtTail1_36;

                        {
                          hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTail0_13, &hlds__mark_tail_calls__AtTail1_36);
                        }
                        {
                          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundTailCalls_9, hlds__mark_tail_calls__Errors_10, hlds__mark_tail_calls__SubGoal0_31, &hlds__mark_tail_calls__SubGoal_37, hlds__mark_tail_calls__AtTail1_36, hlds__mark_tail_calls__AtTail_14);
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                      {
                        hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__FoundTailCalls_9, hlds__mark_tail_calls__Errors_10, hlds__mark_tail_calls__SubGoal0_31, &hlds__mark_tail_calls__SubGoal_37, hlds__mark_tail_calls__AtTail0_13, hlds__mark_tail_calls__AtTail_14);
                      }
                      break;
                  }
                  break;
              }
              {
                hlds__mark_tail_calls__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_142_142, 1) = ((MR_Box) (hlds__mark_tail_calls__Reason_30));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_142_142, 2) = ((MR_Box) (hlds__mark_tail_calls__SubGoal_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__V_142_142));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__mark_tail_calls__TypeCtorInfo_210_210;
              MR_Word hlds__mark_tail_calls__Vars_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word hlds__mark_tail_calls__Cond0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word hlds__mark_tail_calls__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word hlds__mark_tail_calls__Else0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_15, (MR_Integer) 4)));
              MR_Word hlds__mark_tail_calls__FoundTailCallsThen_115;
              MR_Word hlds__mark_tail_calls__ErrorsThen_116;
              MR_Word hlds__mark_tail_calls__Then_117;
              MR_Word hlds__mark_tail_calls__AtTailThen_118;
              MR_Word hlds__mark_tail_calls__FoundTailCallsElse_119;
              MR_Word hlds__mark_tail_calls__ErrorsElse_120;
              MR_Word hlds__mark_tail_calls__Else_121;
              MR_Word hlds__mark_tail_calls__AtTailElse_122;
              MR_Word hlds__mark_tail_calls__AtTailBranch0_123;
              MR_Word hlds__mark_tail_calls__AtTailBranch_124;
              MR_Word hlds__mark_tail_calls__ErrorsCond_126;
              MR_Word hlds__mark_tail_calls__Cond_127;
              MR_Word hlds__mark_tail_calls__V_132_132;
              MR_Word hlds__mark_tail_calls__GoalExpr_152;
              MR_Word hlds__mark_tail_calls__V_125_125;

              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, &hlds__mark_tail_calls__FoundTailCallsThen_115, &hlds__mark_tail_calls__ErrorsThen_116, hlds__mark_tail_calls__Then0_113, &hlds__mark_tail_calls__Then_117, hlds__mark_tail_calls__AtTail0_13, &hlds__mark_tail_calls__AtTailThen_118);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, &hlds__mark_tail_calls__FoundTailCallsElse_119, &hlds__mark_tail_calls__ErrorsElse_120, hlds__mark_tail_calls__Else0_114, &hlds__mark_tail_calls__Else_121, hlds__mark_tail_calls__AtTail0_13, &hlds__mark_tail_calls__AtTailElse_122);
              }
              {
                hlds__mark_tail_calls__AtTailBranch0_123 = hlds__mark_tail_calls__at_tail_branch_2_f_0(hlds__mark_tail_calls__AtTailThen_118, hlds__mark_tail_calls__AtTailElse_122);
              }
              {
                hlds__mark_tail_calls__not_at_tail_2_p_0(hlds__mark_tail_calls__AtTailBranch0_123, &hlds__mark_tail_calls__AtTailBranch_124);
              }
              {
                hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, &hlds__mark_tail_calls__V_125_125, &hlds__mark_tail_calls__ErrorsCond_126, hlds__mark_tail_calls__Cond0_112, &hlds__mark_tail_calls__Cond_127, hlds__mark_tail_calls__AtTailBranch_124, hlds__mark_tail_calls__AtTail_14);
              }
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__FoundTailCallsThen_115 == (MR_Integer) 0);
              if (!(hlds__mark_tail_calls__succeeded))
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__FoundTailCallsElse_119 == (MR_Integer) 0);
              if (hlds__mark_tail_calls__succeeded)
                *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 0;
              else
                *hlds__mark_tail_calls__FoundTailCalls_9 = (MR_Integer) 1;
              {
                hlds__mark_tail_calls__GoalExpr_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_152, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_111));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_152, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_127));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_152, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_117));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_152, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_tail_calls__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_152));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_16));
              }
              hlds__mark_tail_calls__TypeCtorInfo_210_210 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
              {
                hlds__mark_tail_calls__V_132_132 = mercury__list__f_43_43_2_f_0(hlds__mark_tail_calls__TypeCtorInfo_210_210, hlds__mark_tail_calls__ErrorsThen_116, hlds__mark_tail_calls__ErrorsElse_120);
              }
              {
                *hlds__mark_tail_calls__Errors_10 = mercury__list__f_43_43_2_f_0(hlds__mark_tail_calls__TypeCtorInfo_210_210, hlds__mark_tail_calls__ErrorsCond_126, hlds__mark_tail_calls__V_132_132);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/7", (MR_String) "shorthand");
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
        MR_Word hlds__mark_tail_calls__ArgMode_16;

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
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__ArgMode_16);
                }
                switch (hlds__mark_tail_calls__ArgMode_16) {
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
hlds__mark_tail_calls__do_mark_tail_calls_in_proc_10_p_0(
  MR_Word hlds__mark_tail_calls__AddGoalFeature_11,
  MR_Word hlds__mark_tail_calls__WarnNonTailRecursion_12,
  MR_Word hlds__mark_tail_calls__MaybeRequireTailRecursion_13,
  MR_Word hlds__mark_tail_calls__ModuleInfo_14,
  MR_Word hlds__mark_tail_calls__PredId_15,
  MR_Word hlds__mark_tail_calls__PredInfo_16,
  MR_Integer hlds__mark_tail_calls__ProcId_17,
  MR_Word * hlds__mark_tail_calls__Errors_18,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_44)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__Types_20;
    MR_Word hlds__mark_tail_calls__Goal0_21;
    MR_Word hlds__mark_tail_calls__Modes_22;
    MR_Word hlds__mark_tail_calls__HeadVars_23;
    MR_Word hlds__mark_tail_calls__VarTypes_24;
    MR_Word hlds__mark_tail_calls__Outputs_25;
    MR_Word hlds__mark_tail_calls__Info_26;
    MR_Word hlds__mark_tail_calls__FoundTailCalls_27;
    MR_Word hlds__mark_tail_calls__Errors0_28;
    MR_Word hlds__mark_tail_calls__Goal_29;
    MR_Word hlds__mark_tail_calls__TailCallEvents_31;
    MR_Word hlds__mark_tail_calls__V_45_45;
    MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word hlds__mark_tail_calls__OutputsPrime_82;
    MR_Word hlds__mark_tail_calls__V_30_30;

    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_16, &hlds__mark_tail_calls__Types_20);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43, &hlds__mark_tail_calls__Goal0_21);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43, &hlds__mark_tail_calls__Modes_22);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43, &hlds__mark_tail_calls__HeadVars_23);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43, &hlds__mark_tail_calls__VarTypes_24);
    }
    {
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_14, hlds__mark_tail_calls__Types_20, hlds__mark_tail_calls__Modes_22, hlds__mark_tail_calls__HeadVars_23, &hlds__mark_tail_calls__OutputsPrime_82);
    }
    if (hlds__mark_tail_calls__succeeded)
      hlds__mark_tail_calls__Outputs_25 = hlds__mark_tail_calls__OutputsPrime_82;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", (MR_String) "list length mismatch");
          return;
        }
      }
    {
      hlds__mark_tail_calls__Info_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 0) = ((MR_Box) (hlds__mark_tail_calls__AddGoalFeature_11));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 1) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_14));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 2) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_16));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 3) = ((MR_Box) (hlds__mark_tail_calls__PredId_15));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 4) = ((MR_Box) (hlds__mark_tail_calls__ProcId_17));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 5) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_24));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 6) = ((MR_Box) (hlds__mark_tail_calls__WarnNonTailRecursion_12));
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_26, 7) = ((MR_Box) (hlds__mark_tail_calls__MaybeRequireTailRecursion_13));
    }
    {
      hlds__mark_tail_calls__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_45_45, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_25));
    }
    {
      hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_26, &hlds__mark_tail_calls__FoundTailCalls_27, &hlds__mark_tail_calls__Errors0_28, hlds__mark_tail_calls__Goal0_21, &hlds__mark_tail_calls__Goal_29, hlds__mark_tail_calls__V_45_45, &hlds__mark_tail_calls__V_30_30);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_29, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_43, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_46_46);
    }
    switch (hlds__mark_tail_calls__FoundTailCalls_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          hlds__mark_tail_calls__TailCallEvents_31 = (MR_Integer) 0;
          *hlds__mark_tail_calls__Errors_18 = hlds__mark_tail_calls__Errors0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__mark_tail_calls__TailCallEvents_31 = (MR_Integer) 1;
          if ((hlds__mark_tail_calls__MaybeRequireTailRecursion_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__mark_tail_calls__Errors_18 = hlds__mark_tail_calls__Errors0_28;
          else
            {
              MR_Word hlds__mark_tail_calls__RequireTailrecInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecursion_13, (MR_Integer) 0)));
              MR_Word hlds__mark_tail_calls__Context_33;
              MR_Word hlds__mark_tail_calls__PredOrFunc_36;
              MR_String hlds__mark_tail_calls__Name_37;
              MR_Integer hlds__mark_tail_calls__Arity_38;
              MR_Word hlds__mark_tail_calls__SimpleCallId_39;
              MR_Word hlds__mark_tail_calls__Pieces_40;
              MR_Word hlds__mark_tail_calls__Msg_41;
              MR_Word hlds__mark_tail_calls__NonRecursiveSpec_42;
              MR_Word hlds__mark_tail_calls__V_47_47;
              MR_Word hlds__mark_tail_calls__V_50_50;
              MR_Word hlds__mark_tail_calls__V_53_53;
              MR_Word hlds__mark_tail_calls__V_56_56;
              MR_Word hlds__mark_tail_calls__V_57_57;
              MR_Word hlds__mark_tail_calls__V_69_69;
              MR_Word hlds__mark_tail_calls__V_70_70;
              MR_Word hlds__mark_tail_calls__V_74_74;

              if (((MR_tag((MR_Word) hlds__mark_tail_calls__RequireTailrecInfo_32)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word hlds__mark_tail_calls__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_32, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word hlds__mark_tail_calls__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_32, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                  hlds__mark_tail_calls__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__RequireTailrecInfo_32, (MR_Integer) 1)));
                }
              else
                hlds__mark_tail_calls__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__RequireTailrecInfo_32, (MR_Integer) 0)));
              {
                hlds__mark_tail_calls__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__mark_tail_calls__PredInfo_16);
              }
              {
                hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__mark_tail_calls__PredInfo_16, &hlds__mark_tail_calls__Name_37);
              }
              {
                hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(hlds__mark_tail_calls__PredInfo_16, &hlds__mark_tail_calls__Arity_38);
              }
              {
                hlds__mark_tail_calls__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_47_47, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_37));
              }
              {
                hlds__mark_tail_calls__SimpleCallId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_39, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_36));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_39, 1) = ((MR_Box) (hlds__mark_tail_calls__V_47_47));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_39, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_38));
              }
              {
                hlds__mark_tail_calls__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_57_57, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_39));
              }
              {
                hlds__mark_tail_calls__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_56_56, 0) = ((MR_Box) (hlds__mark_tail_calls__V_57_57));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[10])));
              }
              {
                hlds__mark_tail_calls__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[15])));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_53_53, 1) = ((MR_Box) (hlds__mark_tail_calls__V_56_56));
              }
              {
                hlds__mark_tail_calls__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14])));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_50_50, 1) = ((MR_Box) (hlds__mark_tail_calls__V_53_53));
              }
              {
                hlds__mark_tail_calls__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_40, 1) = ((MR_Box) (hlds__mark_tail_calls__V_50_50));
              }
              {
                hlds__mark_tail_calls__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_70_70, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_40));
              }
              {
                hlds__mark_tail_calls__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_69_69, 0) = ((MR_Box) (hlds__mark_tail_calls__V_70_70));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__mark_tail_calls__Msg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_41, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_33));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_41, 1) = ((MR_Box) (hlds__mark_tail_calls__V_69_69));
              }
              {
                hlds__mark_tail_calls__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_74_74, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_41));
                MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__mark_tail_calls__NonRecursiveSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__NonRecursiveSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__NonRecursiveSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
                MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__NonRecursiveSpec_42, 2) = ((MR_Box) (hlds__mark_tail_calls__V_74_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__mark_tail_calls__Errors_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__NonRecursiveSpec_42));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Errors0_28));
              }
            }
        }
        break;
    }
    {
      hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_31, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_46_46, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_44);
    }
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
            MR_Word hlds__mark_tail_calls__Specs_21;
            MR_Word hlds__mark_tail_calls__ProcInfo0_22;
            MR_Word hlds__mark_tail_calls__MaybeChanged_23;
            MR_Word hlds__mark_tail_calls__ProcInfo_24;
            MR_Word hlds__mark_tail_calls__V_29_29;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30;
            MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_31_31;

            {
              hlds__hlds_pred__pred_info_proc_info_3_p_0(hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, hlds__mark_tail_calls__ProcId_18, &hlds__mark_tail_calls__ProcInfo0_22);
            }
            {
              hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (hlds__mark_tail_calls__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_29_29, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcId_18));
            }
            {
              hlds__mark_tail_calls__mark_tail_calls_in_proc_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_29_29, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, &hlds__mark_tail_calls__Specs_21, &hlds__mark_tail_calls__MaybeChanged_23, hlds__mark_tail_calls__ProcInfo0_22, &hlds__mark_tail_calls__ProcInfo_24);
            }
            switch (hlds__mark_tail_calls__MaybeChanged_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(hlds__mark_tail_calls__ProcId_18, hlds__mark_tail_calls__ProcInfo_24, hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4, &hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30);
                }
                break;
              case (MR_Integer) 0:
                hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0_4;
                break;
            }
            {
              hlds__mark_tail_calls__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__mark_tail_calls__Specs_21, hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_6);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__mark_tail_calls__HeadVar__3__tmp_copy_3 = hlds__mark_tail_calls__ProcIds_19;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_0__tmp_copy_4 = hlds__mark_tail_calls__STATE_VARIABLE_PredInfo_30_30;
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__mark_tail_calls__STATE_VARIABLE_Specs_31_31;

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
hlds__mark_tail_calls__mark_tail_calls_in_proc_7_p_0(
  MR_Word hlds__mark_tail_calls__ModuleInfo_8,
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
  MR_Word hlds__mark_tail_calls__PredInfo_11,
  MR_Word * hlds__mark_tail_calls__Errors_12,
  MR_Word * hlds__mark_tail_calls__MaybeChanged_13,
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26,
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_27)
{
  {
    MR_bool hlds__mark_tail_calls__succeeded;
    MR_Word hlds__mark_tail_calls__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer hlds__mark_tail_calls__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__mark_tail_calls__Detism_15;
    MR_Word hlds__mark_tail_calls__SolnCount_17;
    MR_Word hlds__mark_tail_calls___CanFail_16;

    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26, &hlds__mark_tail_calls__Detism_15);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_15, &hlds__mark_tail_calls___CanFail_16, &hlds__mark_tail_calls__SolnCount_17);
    }
    switch (hlds__mark_tail_calls__SolnCount_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          *hlds__mark_tail_calls__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *hlds__mark_tail_calls__MaybeChanged_13 = (MR_Integer) 0;
          *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_27 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_tail_calls__MaybeRequireTailRecursion_18;
          MR_Word hlds__mark_tail_calls__Globals_19;
          MR_Word hlds__mark_tail_calls__ExecTraceTailRec_20;
          MR_Word hlds__mark_tail_calls__AddGoalFeature_21;
          MR_Word hlds__mark_tail_calls__WarnNonTailRecursionBool_22;
          MR_Word hlds__mark_tail_calls__WarnNonTailRecursion_23;

          {
            hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26, &hlds__mark_tail_calls__MaybeRequireTailRecursion_18);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__ModuleInfo_8, &hlds__mark_tail_calls__Globals_19);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_19, (MR_Integer) 131, &hlds__mark_tail_calls__ExecTraceTailRec_20);
          }
          switch (hlds__mark_tail_calls__ExecTraceTailRec_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__mark_tail_calls__AddGoalFeature_21 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              hlds__mark_tail_calls__AddGoalFeature_21 = (MR_Integer) 0;
              break;
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__mark_tail_calls__Globals_19, (MR_Integer) 26, &hlds__mark_tail_calls__WarnNonTailRecursionBool_22);
          }
          switch (hlds__mark_tail_calls__WarnNonTailRecursionBool_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__mark_tail_calls__WarnNonTailRecursion_23 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              hlds__mark_tail_calls__WarnNonTailRecursion_23 = (MR_Integer) 0;
              break;
          }
          hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__AddGoalFeature_21 == (MR_Integer) 1);
          if (hlds__mark_tail_calls__succeeded)
            {
              if ((hlds__mark_tail_calls__MaybeRequireTailRecursion_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__WarnNonTailRecursion_23 == (MR_Integer) 1);
              else
                {
                  MR_Word hlds__mark_tail_calls__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeRequireTailRecursion_18, (MR_Integer) 0)));
                  MR_Word hlds__mark_tail_calls__V_34_34;

                  hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__V_33_33)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__mark_tail_calls__succeeded)
                    hlds__mark_tail_calls__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_33_33, (MR_Integer) 0)));
                }
            }
          if (hlds__mark_tail_calls__succeeded)
            {
              *hlds__mark_tail_calls__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__mark_tail_calls__MaybeChanged_13 = (MR_Integer) 0;
              *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_27 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26;
            }
          else
            {
              {
                hlds__mark_tail_calls__do_mark_tail_calls_in_proc_10_p_0(hlds__mark_tail_calls__AddGoalFeature_21, hlds__mark_tail_calls__WarnNonTailRecursion_23, hlds__mark_tail_calls__MaybeRequireTailRecursion_18, hlds__mark_tail_calls__ModuleInfo_8, hlds__mark_tail_calls__PredId_9, hlds__mark_tail_calls__PredInfo_11, hlds__mark_tail_calls__ProcId_10, hlds__mark_tail_calls__Errors_12, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_26, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_27);
              }
              *hlds__mark_tail_calls__MaybeChanged_13 = (MR_Integer) 1;
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
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_tail_calls_0);
}

void mercury__hlds__mark_tail_calls__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.mark_tail_calls. */
