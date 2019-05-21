/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2018-01-15
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.purity.
// :- implementation.

/*
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#include "check_hlds.purity.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.check_promise.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.resolve_unify_functor.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8];

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2];

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word Outer_6,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static MR_bool MR_CALL 
check_hlds__purity____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_32,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word PredInfo_9,
  MR_Word * Purity_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_90,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_66,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_63,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMarkedSubGoals_0_2,
  MR_Word * STATE_VARIABLE_RevMarkedSubGoals_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_ContainsTrace_0_6,
  MR_Word * STATE_VARIABLE_ContainsTrace_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9,
  MR_Word STATE_VARIABLE_Invariants_0_10,
  MR_Word * STATE_VARIABLE_Invariants_11);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
  MR_Word Goal0_7,
  MR_Word * AddrOfGoal_29,
  MR_Word * Purity_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_195,
  MR_Word * STATE_VARIABLE_Info_196);

static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word * Purity_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_Word MR_CALL 
check_hlds__purity__mismatched_outer_var_types_1_f_0(
  MR_Word Context_3);

static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
  MR_Word Context_7,
  MR_Word VarTypes_8,
  MR_Word VarSet_9,
  MR_Word Var_10,
  MR_Word * VarType_11,
  MR_Word * Specs_12);

static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word DeclaredPurity_9,
  MR_Word * ActualPurity_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word Context_8,
  MR_Word DeclaredPurity_9);

static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word Context_7);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
  MR_Word Info_7,
  MR_Word GoalInfo_8,
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word * Specs_12);

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word DeclaredPurity_6,
  MR_Word ActualPurity_7,
  MR_Word * Specs_8);

static void MR_CALL 
check_hlds__purity__finally_resolve_pred_overloading_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CallerPredInfo_10,
  MR_Word PredId0_11,
  MR_Word PredName0_12,
  MR_Word Args0_13,
  MR_Word Context_14,
  MR_Word * PredId_15,
  MR_Word * PredName_16);

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
  MR_Word Purity_5,
  MR_Word ContainsTrace_6,
  MR_Word STATE_VARIABLE_GoalInfo_0_8,
  MR_Word * STATE_VARIABLE_GoalInfo_9);

static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
  MR_Word Clause_3,
  MR_Word AllProcIds_4);

static void MR_CALL 
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word ActualPurity_11,
  MR_Word DeclaredPurity_12,
  MR_Word MaybePromisedPurity_13,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_Word MR_CALL 
check_hlds__purity__error_not_pure_enough_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word Purity_9);

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word PromisedPurity_9);

static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_purity_promise_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word Purity_9);

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[65][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[65][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The types of the two outer variables differ."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[60])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0
  }
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0
};

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_vartypes",
  (MR_String) "pi_varset",
  (MR_String) "pi_messages",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify"
};

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {     check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  {     check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
  (MR_String) "run_post_typecheck",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
  (MR_String) "do_not_run_post_typecheck",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0
};

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word Var_20;

      hlds__hlds_module____Compare____module_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;
        MR_Integer Var_37 = (MR_Integer) ArgX2_6;
        MR_Integer Var_38 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_21, Var_37, Var_38);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          hlds__hlds_pred____Compare____pred_info_0_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[0], &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[1], &Var_25, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;
                  MR_Integer Var_39 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_40 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_39, Var_40);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    MR_Integer Var_41 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_42 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_41, Var_42);
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
check_hlds__purity____Unify____purity_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeCtorInfo_23_23 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) &check_hlds__purity_scalar_common_2[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) &check_hlds__purity_scalar_common_2[1];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                    succeeded = (ArgX8_17 == ArgY8_18);
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word Outer_6,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_Word Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Inner_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));
    MR_Word NonLocals0_13;
    MR_Word Context_14;
    MR_Word OuterDI_15;
    MR_Word OuterUO_16;
    MR_Word InnerDI_17;
    MR_Word InnerUO_18;
    MR_Word ModuleInfo_21;
    MR_Word Clobbered_22;
    MR_Word Unique_23;
    MR_Word OuterToInnerGoal_24;
    MR_Word InnerToOuterGoal_25;
    MR_Word WrapExpr_26;
    MR_Word NonLocals_27;
    MR_Word GoalInfo1_28;
    MR_Word GoalInfo_29;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
    Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_12);
    OuterDI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_6, (MR_Integer) 0)));
    OuterUO_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_6, (MR_Integer) 1)));
    InnerDI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_8, (MR_Integer) 0)));
    InnerUO_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_8, (MR_Integer) 1)));
    ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 7)));
    Clobbered_22 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[3]);
    Unique_23 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[4]);
    Var_36 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (InnerDI_17));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Clobbered_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (InnerDI_17));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Unique_23));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_46);
    hlds__goal_util__generate_simple_call_12_p_0(Var_36, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, Var_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_43, ModuleInfo_21, Context_14, &OuterToInnerGoal_24);
    Var_51 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (OuterUO_16));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (InnerUO_18));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (InnerUO_18));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Clobbered_22));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (OuterUO_16));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Unique_23));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
    }
    Var_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_61);
    hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, Var_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_58, ModuleInfo_21, Context_14, &InnerToOuterGoal_25);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (InnerToOuterGoal_25));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Goal0_7));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (OuterToInnerGoal_24));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      WrapExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_59));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_71, NonLocals0_13, &NonLocals_27);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_27, GoalInfo0_12, &GoalInfo1_28);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 23, GoalInfo1_28, &GoalInfo_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (WrapExpr_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
    }
    *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
  }
}

void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredInfo_0_36,
  MR_Word * STATE_VARIABLE_PredInfo_37)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_63_63;
    MR_Word TypeCtorInfo_64_64;
    MR_Integer ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Procs0_9;
    MR_Word ProcInfo0_10;
    MR_Word Goal0_11;
    MR_Word VarTypes0_12;
    MR_Word VarSet0_13;
    MR_Word PurityInfo0_14;
    MR_Word Goal_15;
    MR_Word Bodypurity_16;
    MR_Word Var_17;
    MR_Word PurityInfo_18;
    MR_Word VarTypes_21;
    MR_Word VarSet_22;
    MR_Word NeedToRequantify_24;
    MR_Word ProcInfo1_26;
    MR_Word ProcInfo2_27;
    MR_Word ProcInfo3_28;
    MR_Word ProcInfo_29;
    MR_Word Procs_30;
    MR_Word OldPurity_31;
    MR_Word Markers0_32;
    MR_Word STATE_VARIABLE_PredInfo_42_42;
    MR_Word STATE_VARIABLE_PredInfo_44_44;
    MR_Word GoalExpr0_74;
    MR_Word GoalInfo0_75;
    MR_Word GoalExpr_76;
    MR_Word GoalInfo_77;
    MR_Word STATE_VARIABLE_GoalInfo_10_84;
    MR_Word _PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Box conv0_ProcInfo0_10;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_36, &Procs0_9);
    TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
    TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_63_63, TypeCtorInfo_64_64, Procs0_9, ((MR_Box) (ProcId_7)), &conv0_ProcInfo0_10);
    ProcInfo0_10 = ((MR_Word) conv0_ProcInfo0_10);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_10, &VarTypes0_12);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_10, &VarSet0_13);
    {
      PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 2) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_36));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 3) = ((MR_Box) (VarTypes0_12));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 4) = ((MR_Box) (VarSet0_13));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 7) = ((MR_Box) ((MR_Integer) 0));
    }
    GoalExpr0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
    GoalInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));
    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_74, &GoalExpr_76, GoalInfo0_75, &Bodypurity_16, &Var_17, PurityInfo0_14, &PurityInfo_18);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(Bodypurity_16, GoalInfo0_75, &STATE_VARIABLE_GoalInfo_10_84);
    switch (Var_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_84, &GoalInfo_77);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_84, &GoalInfo_77);
        }
        break;
    }
    {
      Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_15, 0) = ((MR_Box) (GoalExpr_76));
      MR_hl_field(MR_mktag(0), Goal_15, 1) = ((MR_Box) (GoalInfo_77));
    }
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 1)));
    STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 2)));
    VarTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 3)));
    VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 4)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 5)));
    NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 6)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 7)));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_15, ProcInfo0_10, &ProcInfo1_26);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_21, ProcInfo1_26, &ProcInfo2_27);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_22, ProcInfo2_27, &ProcInfo3_28);
    switch (NeedToRequantify_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ProcInfo_29 = ProcInfo3_28;
        break;
      case (MR_Integer) 0:
        {
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, ProcInfo3_28, &ProcInfo_29);
        }
        break;
    }
    mercury__map__det_update_4_p_0(TypeCtorInfo_63_63, TypeCtorInfo_64_64, ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_29)), Procs0_9, &Procs_30);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_30, STATE_VARIABLE_PredInfo_42_42, &STATE_VARIABLE_PredInfo_44_44);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_44_44, &OldPurity_31);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_44_44, &Markers0_32);
    succeeded = parse_tree__prog_data__less_pure_2_p_0(Bodypurity_16, OldPurity_31);
    if (succeeded)
    {
      MR_Word Markers_34;

      switch (OldPurity_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          Markers_34 = Markers0_32;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Markers1_33;

            hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 17, Markers0_32, &Markers1_33);
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 16, Markers1_33, &Markers_34);
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 17, Markers0_32, &Markers_34);
          }
          break;
      }
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_34, STATE_VARIABLE_PredInfo_44_44, STATE_VARIABLE_PredInfo_37);
    }
    else
    {
      MR_Word TypeCtorInfo_66_66;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_65;
      MR_Integer Var_35;

      succeeded = parse_tree__prog_data__less_pure_2_p_0(OldPurity_31, Bodypurity_16);
      if (succeeded)
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = NULL;
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
        }
        Var_65 = hlds__hlds_pred__pred_info_procids_1_f_0(STATE_VARIABLE_PredInfo_44_44);
        TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
        succeeded = check_hlds__purity____Unify____list__list_1_1(TypeCtorInfo_66_66, Var_49, Var_65);
      }
      if (succeeded)
      {
        MR_Word Markers_60;

        switch (Bodypurity_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            Markers_60 = Markers0_32;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Markers1_56;

              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, Markers0_32, &Markers1_56);
              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, Markers1_56, &Markers_60);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Markers1_57;

              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, Markers0_32, &Markers1_57);
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, Markers1_57, &Markers_60);
            }
            break;
        }
        hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_60, STATE_VARIABLE_PredInfo_44_44, STATE_VARIABLE_PredInfo_37);
      }
      else
        *STATE_VARIABLE_PredInfo_37 = STATE_VARIABLE_PredInfo_44_44;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ArgX1_5;
    MR_Word ArgX2_7;
    MR_Word ArgY2_8;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, ArgX2_7, ArgY2_8);
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__purity__puritycheck_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word PredIds_7;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_7);
    check_hlds__purity__check_preds_purity_5_p_0(PredIds_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9, STATE_VARIABLE_Specs_0_10, STATE_VARIABLE_Specs_11);
  }
}

static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredInfo0_16;
      MR_Word PredInfo_17;
      MR_Word GoalType_19;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word STATE_VARIABLE_ModuleInfo_29_29;
      MR_Word STATE_VARIABLE_ModuleInfo_30_30;
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_2, PredId_12, &PredInfo0_16);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_16);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo0_16);
      if (succeeded)
      {
        PredInfo_17 = PredInfo0_16;
        STATE_VARIABLE_Specs_28_28 = STATE_VARIABLE_Specs_0_4;
        STATE_VARIABLE_ModuleInfo_29_29 = STATE_VARIABLE_ModuleInfo_0_2;
      }
      else
      {
        MR_Word TypeCtorInfo_49_76;
        MR_Word DeclaredPurity_42;
        MR_Word MaybePromisedPurity_43;
        MR_Word Clauses0_45;
        MR_Word ItemNumbers_46;
        MR_Word VarTypes0_47;
        MR_Word VarSet0_48;
        MR_Word PurityInfo0_49;
        MR_Word Clauses_50;
        MR_Word ActualPurity_51;
        MR_Word PurityInfo_52;
        MR_Word VarTypes_55;
        MR_Word VarSet_56;
        MR_Word GoalSpecs_57;
        MR_Word ClausesRep_60;
        MR_Word PredSpecs_61;
        MR_Word STATE_VARIABLE_ClausesInfo_35_62;
        MR_Word STATE_VARIABLE_ClausesInfo_36_63;
        MR_Word STATE_VARIABLE_PredInfo_42_69;
        MR_Word STATE_VARIABLE_ClausesInfo_43_70;
        MR_Word STATE_VARIABLE_ClausesInfo_44_71;
        MR_Word STATE_VARIABLE_ClausesInfo_45_72;
        MR_Word Var_75;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_58;
        MR_Word Var_59;

        hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", PredId_12, STATE_VARIABLE_ModuleInfo_0_2);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_16, &DeclaredPurity_42);
        hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(PredInfo0_16, &MaybePromisedPurity_43);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_16, &STATE_VARIABLE_ClausesInfo_35_62);
        hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses0_45, &ItemNumbers_46, STATE_VARIABLE_ClausesInfo_35_62, &STATE_VARIABLE_ClausesInfo_36_63);
        hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_36_63, &VarTypes0_47);
        hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_36_63, &VarSet0_48);
        {
          PurityInfo0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 2) = ((MR_Box) (PredInfo0_16));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 3) = ((MR_Box) (VarTypes0_47));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 4) = ((MR_Box) (VarSet0_48));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 6) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), PurityInfo0_49, 7) = ((MR_Box) ((MR_Integer) 0));
        }
        check_hlds__purity__compute_purity_for_clauses_7_p_0(Clauses0_45, &Clauses_50, PredInfo0_16, (MR_Integer) 0, &ActualPurity_51, PurityInfo0_49, &PurityInfo_52);
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 0)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 1)));
        STATE_VARIABLE_PredInfo_42_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 2)));
        VarTypes_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 3)));
        VarSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 4)));
        GoalSpecs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 5)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 6)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), PurityInfo_52, (MR_Integer) 7)));
        hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_55, STATE_VARIABLE_ClausesInfo_36_63, &STATE_VARIABLE_ClausesInfo_43_70);
        hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_56, STATE_VARIABLE_ClausesInfo_43_70, &STATE_VARIABLE_ClausesInfo_44_71);
        hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_50, &ClausesRep_60);
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_60, ItemNumbers_46, STATE_VARIABLE_ClausesInfo_44_71, &STATE_VARIABLE_ClausesInfo_45_72);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_45_72, STATE_VARIABLE_PredInfo_42_69, &PredInfo_17);
        check_hlds__purity__perform_pred_purity_checks_7_p_0(STATE_VARIABLE_ModuleInfo_0_2, PredId_12, PredInfo_17, ActualPurity_51, DeclaredPurity_42, MaybePromisedPurity_43, &PredSpecs_61);
        TypeCtorInfo_49_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        Var_75 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_76, PredSpecs_61, STATE_VARIABLE_Specs_0_4);
        STATE_VARIABLE_Specs_28_28 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_76, GoalSpecs_57, Var_75);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_12, PredInfo_17, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_29_29);
      }
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_17, &GoalType_19);
      switch (MR_tag((MR_Word) GoalType_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(GoalType_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_29_29;
                STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_28_28;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_29_29;
                STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_28_28;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_29_29;
                STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_28_28;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_29_29;
                STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_28_28;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PromiseType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalType_19, (MR_Integer) 0)));

            check_hlds__check_promise__check_and_store_promise_7_p_0(PredId_12, PredInfo_17, PromiseType_20, STATE_VARIABLE_ModuleInfo_29_29, &STATE_VARIABLE_ModuleInfo_30_30, STATE_VARIABLE_Specs_28_28, &STATE_VARIABLE_Specs_31_31);
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PredIds_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_30_30;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
  }
  else
  {
    MR_Word Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Clause_17;
    MR_Word ClausePurity_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Purity_28_28;
    MR_Word * AddrClauses_31;

    check_hlds__purity__compute_purity_for_clause_6_p_0(Clause0_15, &Clause_17, PredInfo_3, &ClausePurity_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_4, ClausePurity_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_17));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1));
    check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(Clauses0_16, AddrClauses_31, PredInfo_3, STATE_VARIABLE_Purity_28_28, STATE_VARIABLE_Purity_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_32,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
    }
    else
    {
      MR_Word Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Clause_17;
      MR_Word ClausePurity_22;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_Purity_28_28;
      MR_Word * AddrClauses_31;
      MR_Word HeadVar__2_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_32;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      check_hlds__purity__compute_purity_for_clause_6_p_0(Clause0_15, &Clause_17, PredInfo_3, &ClausePurity_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
      STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_4, ClausePurity_22);
      {
        HeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_33, 0) = ((MR_Box) (Clause_17));
        MR_hl_field(MR_mktag(1), HeadVar__2_33, 1) = NULL;
      }
      AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), HeadVar__2_33, (MR_Integer) 1));
      *AddrOfHeadVar__2_32 = HeadVar__2_33;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Clauses0_16;
      next_value_of_AddrOfHeadVar__2_32 = AddrClauses_31;
      next_value_of_STATE_VARIABLE_Purity_0_4 = STATE_VARIABLE_Purity_28_28;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_32 = next_value_of_AddrOfHeadVar__2_32;
      STATE_VARIABLE_Purity_0_4 = next_value_of_STATE_VARIABLE_Purity_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word PredInfo_9,
  MR_Word * Purity_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word Goal0_12;
    MR_Word GoalExpr0_13;
    MR_Word GoalInfo0_14;
    MR_Word GoalExpr1_15;
    MR_Word BodyPurity0_16;
    MR_Word ClausePurity_21;
    MR_Word GoalInfo1_22;
    MR_Word Goal1_23;
    MR_Word NeedToRequantify_24;
    MR_Word Goal_31;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_50;
    MR_Word Var_17;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_90;

    Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_7);
    GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 0)));
    GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
    {
      STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (Var_51));
    }
    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_13, &GoalExpr1_15, GoalInfo0_14, &BodyPurity0_16, &Var_17, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_39_39);
    {
      MR_Word ProcIds_18;

      ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_9);
      succeeded = check_hlds__purity__applies_to_all_modes_2_p_0(Clause0_7, ProcIds_18);
    }
    if (!(succeeded))
    {
      {
        MR_Word Markers_19;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_19);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_19, (MR_Integer) 18);
      }
      if (!(succeeded))
      {
        MR_Word GoalType_20;

        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_9, &GoalType_20);
        succeeded = (GoalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
    }
    if (succeeded)
      ClausePurity_21 = (MR_Integer) 0;
    else
      ClausePurity_21 = (MR_Integer) 2;
    *Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(BodyPurity0_16, ClausePurity_21);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_10, GoalInfo0_14, &GoalInfo1_22);
    {
      Goal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_23, 0) = ((MR_Box) (GoalExpr1_15));
      MR_hl_field(MR_mktag(0), Goal1_23, 1) = ((MR_Box) (GoalInfo1_22));
    }
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
    NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
    switch (NeedToRequantify_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Goal_31 = Goal1_23;
          *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ClausesInfo_25;
          MR_Word HeadVars_26;
          MR_Word VarTypes1_27;
          MR_Word VarSet1_28;
          MR_Word EmptyRttiVarmaps_29;
          MR_Word VarSet_32;
          MR_Word VarTypes_33;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word _Warnings_30;
          MR_Word Var_34;
          MR_Word Var_76;
          MR_Word Var_77;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_25);
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_25, &HeadVars_26);
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          VarTypes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          VarSet1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_29);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_26, &_Warnings_30, Goal1_23, &Goal_31, VarSet1_28, &VarSet_32, VarTypes1_27, &VarTypes_33, EmptyRttiVarmaps_29, &Var_34);
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_36 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_33));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarSet_32));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_80));
          }
        }
        break;
    }
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 0)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 1)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 2)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 3)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_93));
    }
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_90,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfHeadVar__2_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_20;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word STATE_VARIABLE_Purity_39_39;
      MR_Word STATE_VARIABLE_ContainsTrace_40_40;
      MR_Word GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0)));
      MR_Word GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1)));
      MR_Word GoalExpr_53;
      MR_Word GoalInfo_54;
      MR_Word STATE_VARIABLE_GoalInfo_10_61;
      MR_Word * AddrGoals_89;
      MR_Word HeadVar__2_91;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_90;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_51, &GoalExpr_53, GoalInfo0_52, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_52, &STATE_VARIABLE_GoalInfo_10_61);
      switch (GoalContainsTrace_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
          }
          break;
      }
      {
        Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_53));
        MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_54));
      }
      switch (GoalPurity_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1)));
            MR_Word Context_29;
            MR_Word Spec_30;
            MR_String PurityName_69;
            MR_Word Pieces_70;
            MR_Word Msg_71;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_String Var_76;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_87;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0)));

            Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
            parse_tree__prog_out__purity_name_2_p_0(GoalPurity_25, &PurityName_69);
            Var_76 = mercury__string__f_43_43_2_f_0(PurityName_69, (MR_String) ",");
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (Var_76));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[64])));
            }
            {
              Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[62])));
              MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_70));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Msg_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_71, 0) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(0), Msg_71, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Msg_71));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_87));
            }
            check_hlds__purity__purity_info_add_message_3_p_0(Spec_30, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_37_37;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_37_37;
          break;
      }
      STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_91, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), HeadVar__2_91, 1) = NULL;
      }
      AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), HeadVar__2_91, (MR_Integer) 1));
      *AddrOfHeadVar__2_90 = HeadVar__2_91;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals0_19;
      next_value_of_AddrOfHeadVar__2_90 = AddrGoals_89;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_39_39;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_40_40;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_90 = next_value_of_AddrOfHeadVar__2_90;
      STATE_VARIABLE_Purity_0_3 = next_value_of_STATE_VARIABLE_Purity_0_3;
      STATE_VARIABLE_ContainsTrace_0_5 = next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_66,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfHeadVar__2_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Case0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Case_20;
      MR_Word MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 0)));
      MR_Word OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 1)));
      MR_Word Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 2)));
      MR_Word Goal_28;
      MR_Word GoalPurity_29;
      MR_Word GoalContainsTrace_30;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Purity_38_38;
      MR_Word STATE_VARIABLE_ContainsTrace_39_39;
      MR_Word GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 0)));
      MR_Word GoalInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 1)));
      MR_Word GoalExpr_52;
      MR_Word GoalInfo_53;
      MR_Word STATE_VARIABLE_GoalInfo_10_60;
      MR_Word * AddrCases_65;
      MR_Word HeadVar__2_67;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_66;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_50, &GoalExpr_52, GoalInfo0_51, &GoalPurity_29, &GoalContainsTrace_30, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_29, GoalInfo0_51, &STATE_VARIABLE_GoalInfo_10_60);
      switch (GoalContainsTrace_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_60, &GoalInfo_53);
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_60, &GoalInfo_53);
          }
          break;
      }
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_28, 0) = ((MR_Box) (GoalExpr_52));
        MR_hl_field(MR_mktag(0), Goal_28, 1) = ((MR_Box) (GoalInfo_53));
      }
      {
        Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_20, 0) = ((MR_Box) (MainConsId_25));
        MR_hl_field(MR_mktag(0), Case_20, 1) = ((MR_Box) (OtherConsIds_26));
        MR_hl_field(MR_mktag(0), Case_20, 2) = ((MR_Box) (Goal_28));
      }
      STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_29, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_30, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_67, 0) = ((MR_Box) (Case_20));
        MR_hl_field(MR_mktag(1), HeadVar__2_67, 1) = NULL;
      }
      AddrCases_65 = (MR_Word *) &(MR_hl_field(MR_mktag(1), HeadVar__2_67, (MR_Integer) 1));
      *AddrOfHeadVar__2_66 = HeadVar__2_67;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases0_19;
      next_value_of_AddrOfHeadVar__2_66 = AddrCases_65;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_38_38;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_39_39;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_66 = next_value_of_AddrOfHeadVar__2_66;
      STATE_VARIABLE_Purity_0_3 = next_value_of_STATE_VARIABLE_Purity_0_3;
      STATE_VARIABLE_ContainsTrace_0_5 = next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_63,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfHeadVar__2_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word HeadGoal_24;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Purity_35_35;
      MR_Word STATE_VARIABLE_ContainsTrace_36_36;
      MR_Word GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 0)));
      MR_Word GoalInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 1)));
      MR_Word GoalExpr_49;
      MR_Word GoalInfo_50;
      MR_Word STATE_VARIABLE_GoalInfo_10_57;
      MR_Word * AddrTailGoals_62;
      MR_Word HeadVar__2_64;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_63;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_47, &GoalExpr_49, GoalInfo0_48, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_34_34);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_48, &STATE_VARIABLE_GoalInfo_10_57);
      switch (GoalContainsTrace_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
          }
          break;
      }
      {
        HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadGoal_24, 0) = ((MR_Box) (GoalExpr_49));
        MR_hl_field(MR_mktag(0), HeadGoal_24, 1) = ((MR_Box) (GoalInfo_50));
      }
      STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_64, 0) = ((MR_Box) (HeadGoal_24));
        MR_hl_field(MR_mktag(1), HeadVar__2_64, 1) = NULL;
      }
      AddrTailGoals_62 = (MR_Word *) &(MR_hl_field(MR_mktag(1), HeadVar__2_64, (MR_Integer) 1));
      *AddrOfHeadVar__2_63 = HeadVar__2_64;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = TailGoals0_19;
      next_value_of_AddrOfHeadVar__2_63 = AddrTailGoals_62;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_35_35;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_36_36;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_63 = next_value_of_AddrOfHeadVar__2_63;
      STATE_VARIABLE_Purity_0_3 = next_value_of_STATE_VARIABLE_Purity_0_3;
      STATE_VARIABLE_ContainsTrace_0_5 = next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMarkedSubGoals_0_2,
  MR_Word * STATE_VARIABLE_RevMarkedSubGoals_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_ContainsTrace_0_6,
  MR_Word * STATE_VARIABLE_ContainsTrace_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9,
  MR_Word STATE_VARIABLE_Invariants_0_10,
  MR_Word * STATE_VARIABLE_Invariants_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Invariants_11 = STATE_VARIABLE_Invariants_0_10;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_ContainsTrace_7 = STATE_VARIABLE_ContainsTrace_0_6;
      *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
      *STATE_VARIABLE_RevMarkedSubGoals_3 = STATE_VARIABLE_RevMarkedSubGoals_0_2;
    }
    else
    {
      MR_Word Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 0)));
      MR_Word GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 1)));
      MR_Word XVar_44;
      MR_Word Mode_45;
      MR_Word Unification_46;
      MR_Word UnifyContext_47;
      MR_Word ConsId_48;
      MR_Word YVars_49;
      MR_Word ModuleInfo_50;
      MR_Word PredInfo0_51;
      MR_Word VarTypes0_52;
      MR_Word VarSet0_53;
      MR_Word PredInfo_54;
      MR_Word VarSet_55;
      MR_Word VarTypes_56;
      MR_Word Goal1_57;
      MR_Word IsPlainUnify_58;
      MR_Word GoalExpr1_59;
      MR_Word GoalInfo1_60;
      MR_Word MarkedSubGoal_69;
      MR_Word STATE_VARIABLE_Purity_100_100;
      MR_Word STATE_VARIABLE_ContainsTrace_101_101;
      MR_Word STATE_VARIABLE_Invariants_102_102;
      MR_Word STATE_VARIABLE_Info_118_118;
      MR_Word STATE_VARIABLE_RevMarkedSubGoals_121_121;
      MR_Word XVarPrime_36;
      MR_Word ModePrime_38;
      MR_Word UnificationPrime_39;
      MR_Word UnifyContextPrime_40;
      MR_Word ConsIdPrime_41;
      MR_Word YVarsPrime_43;
      MR_Word Y_37;
      MR_Word Var_42;
      MR_Word Var_134;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Invariants_0_10;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        XVarPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 0)));
        Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 1)));
        ModePrime_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 2)));
        UnificationPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 3)));
        UnifyContextPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) Y_37)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ConsIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_37, (MR_Integer) 0)));
          Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_37, (MR_Integer) 1)));
          YVarsPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_37, (MR_Integer) 2)));
        }
      }
      if (succeeded)
      {
        XVar_44 = XVarPrime_36;
        Mode_45 = ModePrime_38;
        Unification_46 = UnificationPrime_39;
        UnifyContext_47 = UnifyContextPrime_40;
        ConsId_48 = ConsIdPrime_41;
        YVars_49 = YVarsPrime_43;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      }
      ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
      Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
      PredInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
      VarTypes0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
      VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
      Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
      Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
      check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(ModuleInfo_50, XVar_44, ConsId_48, YVars_49, Mode_45, Unification_46, UnifyContext_47, GoalInfo0_35, PredInfo0_51, &PredInfo_54, VarSet0_53, &VarSet_55, VarTypes0_52, &VarTypes_56, &Goal1_57, &IsPlainUnify_58);
      GoalExpr1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_57, (MR_Integer) 0)));
      GoalInfo1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_57, (MR_Integer) 1)));
      switch (MR_tag((MR_Word) IsPlainUnify_58)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(IsPlainUnify_58)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Info_95_95;
                MR_Word Goal_133;
                MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
                MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
                MR_Word Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
                MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
                MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
                MR_Word Var_170 = Var_162;
                MR_Word Var_171 = Var_163;
                MR_Word Var_173 = VarTypes_56;
                MR_Word Var_175 = Var_167;
                MR_Word Var_176 = Var_168;
                MR_Word Var_177 = Var_169;
                MR_Word Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
                MR_Word Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
                MR_Word Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;

                {
                  STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (Var_170));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_171));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (PredInfo_54));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_173));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (VarSet_55));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_175));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_176));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_177));
                }
                succeeded = ((MR_tag((MR_Word) GoalExpr1_59)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr1_59, (MR_Integer) 0)));
                  Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr1_59, (MR_Integer) 1)));
                  Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr1_59, (MR_Integer) 2)));
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr1_59, (MR_Integer) 3)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr1_59, (MR_Integer) 4)));
                  {
                    MR_Word UnifySpecs_127;
                    MR_Word GoalInfo_128;
                    MR_Word STATE_VARIABLE_GoalInfo_10_194;

                    check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_95_95, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_127);
                    check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_127, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_118_118);
                    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_60, &STATE_VARIABLE_GoalInfo_10_194);
                    hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_194, &GoalInfo_128);
                    {
                      Goal_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Goal_133, 0) = ((MR_Box) (GoalExpr1_59));
                      MR_hl_field(MR_mktag(0), Goal_133, 1) = ((MR_Box) (GoalInfo_128));
                    }
                    STATE_VARIABLE_ContainsTrace_101_101 = STATE_VARIABLE_ContainsTrace_0_6;
                    STATE_VARIABLE_Purity_100_100 = STATE_VARIABLE_Purity_0_4;
                  }
                }
                else
                {
                  MR_Word GoalPurity_75;
                  MR_Word GoalContainsTrace_76;

                  check_hlds__purity__compute_goal_purity_6_p_0(Goal1_57, &Goal_133, &GoalPurity_75, &GoalContainsTrace_76, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_118_118);
                  STATE_VARIABLE_Purity_100_100 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_75, STATE_VARIABLE_Purity_0_4);
                  STATE_VARIABLE_ContainsTrace_101_101 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_76, STATE_VARIABLE_ContainsTrace_0_6);
                }
                {
                  MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 0) = ((MR_Box) (Goal_133));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word UnifySpecs_66;
                MR_Word GoalInfo_67;
                MR_Word Goal_68;
                MR_Word STATE_VARIABLE_GoalInfo_10_204;

                check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_0_8, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_66);
                check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_66, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_118_118);
                hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_60, &STATE_VARIABLE_GoalInfo_10_204);
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_204, &GoalInfo_67);
                {
                  Goal_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_68, 0) = ((MR_Box) (GoalExpr1_59));
                  MR_hl_field(MR_mktag(0), Goal_68, 1) = ((MR_Box) (GoalInfo_67));
                }
                {
                  MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 0) = ((MR_Box) (Goal_68));
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Purity_100_100 = STATE_VARIABLE_Purity_0_4;
                STATE_VARIABLE_ContainsTrace_101_101 = STATE_VARIABLE_ContainsTrace_0_6;
                STATE_VARIABLE_Invariants_102_102 = STATE_VARIABLE_Invariants_0_10;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Spec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsPlainUnify_58, (MR_Integer) 0)));

            check_hlds__purity__purity_info_add_message_3_p_0(Spec_77, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_118_118);
            {
              MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 0) = ((MR_Box) (Goal1_57));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
            }
            STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
            STATE_VARIABLE_Purity_100_100 = STATE_VARIABLE_Purity_0_4;
            STATE_VARIABLE_ContainsTrace_101_101 = STATE_VARIABLE_ContainsTrace_0_6;
          }
          break;
      }
      {
        STATE_VARIABLE_RevMarkedSubGoals_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMarkedSubGoals_121_121, 0) = ((MR_Box) (MarkedSubGoal_69));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMarkedSubGoals_121_121, 1) = ((MR_Box) (STATE_VARIABLE_RevMarkedSubGoals_0_2));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals0_28;
      next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2 = STATE_VARIABLE_RevMarkedSubGoals_121_121;
      next_value_of_STATE_VARIABLE_Purity_0_4 = STATE_VARIABLE_Purity_100_100;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_6 = STATE_VARIABLE_ContainsTrace_101_101;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_118_118;
      next_value_of_STATE_VARIABLE_Invariants_0_10 = STATE_VARIABLE_Invariants_102_102;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMarkedSubGoals_0_2 = next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2;
      STATE_VARIABLE_Purity_0_4 = next_value_of_STATE_VARIABLE_Purity_0_4;
      STATE_VARIABLE_ContainsTrace_0_6 = next_value_of_STATE_VARIABLE_ContainsTrace_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      STATE_VARIABLE_Invariants_0_10 = next_value_of_STATE_VARIABLE_Invariants_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
  MR_Word Goal0_7,
  MR_Word * AddrOfGoal_29,
  MR_Word * Purity_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Goal_8;
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));
    MR_Word GoalExpr_14;
    MR_Word GoalInfo_15;
    MR_Word STATE_VARIABLE_GoalInfo_10_24;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_24);
    switch (*ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        }
        break;
    }
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_8, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(MR_mktag(0), Goal_8, 1) = ((MR_Box) (GoalInfo_15));
    }
    *AddrOfGoal_29 = Goal_8;
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_9;

    check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_9;
    MR_Word conv1_STATE_VARIABLE_Info_31;

    check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_Goal_9, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_Info_31);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_9));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_31));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_195,
  MR_Word * STATE_VARIABLE_Info_196)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_95 = (MR_Word) MR_body(((MR_Word) GoalExpr0_8), (MR_Integer) 0);
          MR_Word NotGoal0_96;
          MR_Word Goal1_314;
          MR_Word Var_245;
          MR_Word Var_97;

          hlds__hlds_goal__negate_goal_3_p_0(Goal0_95, GoalInfo_10, &NotGoal0_96);
          Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotGoal0_96, (MR_Integer) 0)));
          Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotGoal0_96, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_245)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Goal1_314 = (MR_Word) MR_body(((MR_Word) Var_245), (MR_Integer) 0);
            {
              MR_Word Goal_313;

              check_hlds__purity__compute_goal_purity_6_p_0(Goal1_314, &Goal_313, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
              *GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Goal_313);
            }
          }
          else
          {
            MR_Word NotGoal1_98;
            MR_Word Var_99;

            check_hlds__purity__compute_goal_purity_6_p_0(NotGoal0_96, &NotGoal1_98, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
            *GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotGoal1_98, (MR_Integer) 0)));
            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotGoal1_98, (MR_Integer) 1)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0)));
          MR_Word RHS0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1)));
          MR_Word Mode_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2)));
          MR_Word Unification_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3)));
          MR_Word UnifyContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) RHS0_52)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *GoalExpr_9 = GoalExpr0_8;
                *Purity_11 = (MR_Integer) 0;
                *ContainsTrace_12 = (MR_Integer) 1;
                *STATE_VARIABLE_Info_196 = STATE_VARIABLE_Info_0_195;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_52, (MR_Integer) 0)));
                MR_Word Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_52, (MR_Integer) 2)));
                MR_Word Goal1_83;
                MR_Word Goal_92;
                MR_Word STATE_VARIABLE_Info_255_255;
                MR_Word RunPostTypecheck_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                MR_Word Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                MR_Word Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                MR_Word Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                MR_Word Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_52, (MR_Integer) 1)));
                MR_Word Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                MR_Word Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                MR_Word Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                MR_Word Var_257;
                MR_Word Var_90;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_93;

                switch (RunPostTypecheck_298) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        Goal1_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Goal1_83, 0) = ((MR_Box) (GoalExpr0_8));
                        MR_hl_field(MR_mktag(0), Goal1_83, 1) = ((MR_Box) (GoalInfo_10));
                      }
                      STATE_VARIABLE_Info_255_255 = STATE_VARIABLE_Info_0_195;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word VarSet_81;
                      MR_Word VarTypes_82;
                      MR_Word IsPlainUnify_84;
                      MR_Word STATE_VARIABLE_Info_253_253;
                      MR_Word PredInfo_292;
                      MR_Word Var_422;
                      MR_Word Var_423;
                      MR_Word Var_427;
                      MR_Word Var_428;
                      MR_Word Var_429;
                      MR_Word Var_430;
                      MR_Word Var_431;
                      MR_Word Var_433;
                      MR_Word Var_435;
                      MR_Word Var_436;
                      MR_Word Var_437;
                      MR_Word Var_438;
                      MR_Word Var_439;
                      MR_Word Var_441;
                      MR_Word Var_442;
                      MR_Word Var_443;
                      MR_Word Var_444;
                      MR_Word Var_424;
                      MR_Word Var_425;
                      MR_Word Var_426;

                      check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(Var_387, LHSVar_51, ConsId_75, Args_77, Mode_53, Unification_54, UnifyContext_55, GoalInfo_10, Var_388, &PredInfo_292, Var_390, &VarSet_81, Var_389, &VarTypes_82, &Goal1_83, &IsPlainUnify_84);
                      Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                      Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                      Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                      Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                      Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                      Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                      Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                      Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                      Var_430 = Var_422;
                      Var_431 = Var_423;
                      Var_433 = VarTypes_82;
                      Var_435 = Var_427;
                      Var_436 = Var_428;
                      Var_437 = Var_429;
                      Var_438 = Var_430;
                      Var_439 = Var_431;
                      Var_441 = Var_433;
                      Var_442 = VarSet_81;
                      Var_443 = Var_435;
                      Var_444 = Var_436;
                      {
                        STATE_VARIABLE_Info_253_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 0) = ((MR_Box) (Var_438));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 1) = ((MR_Box) (Var_439));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 2) = ((MR_Box) (PredInfo_292));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 3) = ((MR_Box) (Var_441));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 4) = ((MR_Box) (Var_442));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 5) = ((MR_Box) (Var_443));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 6) = ((MR_Box) (Var_444));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_253_253, 7) = ((MR_Box) (Var_437));
                      }
                      switch (MR_tag((MR_Word) IsPlainUnify_84)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(IsPlainUnify_84)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                {
                                  STATE_VARIABLE_Info_255_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 0) = ((MR_Box) (Var_438));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 1) = ((MR_Box) (Var_439));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 2) = ((MR_Box) (PredInfo_292));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 3) = ((MR_Box) (Var_441));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 4) = ((MR_Box) (Var_442));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 5) = ((MR_Box) (Var_443));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 6) = ((MR_Box) (Var_444));
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_255_255, 7) = ((MR_Box) ((MR_Integer) 1));
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              STATE_VARIABLE_Info_255_255 = STATE_VARIABLE_Info_253_253;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Spec_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsPlainUnify_84, (MR_Integer) 0)));

                            check_hlds__purity__purity_info_add_message_3_p_0(Spec_290, STATE_VARIABLE_Info_253_253, &STATE_VARIABLE_Info_255_255);
                          }
                          break;
                      }
                    }
                    break;
                }
                Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_83, (MR_Integer) 0)));
                Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_83, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_257)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 0)));
                  Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 1)));
                  Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 2)));
                  Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 3)));
                  Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 4)));
                  {
                    MR_Word UnifySpecs_91;

                    check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_255_255, GoalInfo_10, LHSVar_51, ConsId_75, Args_77, &UnifySpecs_91);
                    check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_91, STATE_VARIABLE_Info_255_255, STATE_VARIABLE_Info_196);
                    *Purity_11 = (MR_Integer) 0;
                    *ContainsTrace_12 = (MR_Integer) 1;
                    Goal_92 = Goal1_83;
                  }
                }
                else
                  check_hlds__purity__compute_goal_purity_6_p_0(Goal1_83, &Goal_92, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_255_255, STATE_VARIABLE_Info_196);
                *GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_92, (MR_Integer) 0)));
                Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_92, (MR_Integer) 1)));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaPurity_56 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word Groundness_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word PredOrFunc_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word LambdaNonLocals_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 2)));
                MR_Word LambdaQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 3)));
                MR_Word LambdaModes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 4)));
                MR_Word LambdaDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 5)));
                MR_Word LambdaGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_52, (MR_Integer) 6)));
                MR_Word LambdaGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal0_64, (MR_Integer) 0)));
                MR_Word LambdaGoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal0_64, (MR_Integer) 1)));
                MR_Word LambdaGoalExpr_67;
                MR_Word GoalPurity_68;
                MR_Word LambdaGoal_70;
                MR_Word RHS_71;
                MR_Word ClosureSpecs_72;
                MR_Word STATE_VARIABLE_Info_260_260;
                MR_Word STATE_VARIABLE_Info_261_261;
                MR_Word DeclaredPurity_289;
                MR_Word Var_69;

                check_hlds__purity__compute_expr_purity_7_p_0(LambdaGoalExpr0_65, &LambdaGoalExpr_67, LambdaGoalInfo0_66, &GoalPurity_68, &Var_69, STATE_VARIABLE_Info_0_195, &STATE_VARIABLE_Info_260_260);
                {
                  LambdaGoal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LambdaGoal_70, 0) = ((MR_Box) (LambdaGoalExpr_67));
                  MR_hl_field(MR_mktag(0), LambdaGoal_70, 1) = ((MR_Box) (LambdaGoalInfo0_66));
                }
                {
                  RHS_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_71, 0) = ((MR_Box) ((LambdaPurity_56 | ((((Groundness_57 << (MR_Integer) 2)) | ((PredOrFunc_58 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), RHS_71, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), RHS_71, 2) = ((MR_Box) (LambdaNonLocals_60));
                  MR_hl_field(MR_mktag(2), RHS_71, 3) = ((MR_Box) (LambdaQuantVars_61));
                  MR_hl_field(MR_mktag(2), RHS_71, 4) = ((MR_Box) (LambdaModes_62));
                  MR_hl_field(MR_mktag(2), RHS_71, 5) = ((MR_Box) (LambdaDetism_63));
                  MR_hl_field(MR_mktag(2), RHS_71, 6) = ((MR_Box) (LambdaGoal_70));
                }
                check_hlds__purity__check_closure_purity_4_p_0(GoalInfo_10, LambdaPurity_56, GoalPurity_68, &ClosureSpecs_72);
                check_hlds__purity__purity_info_add_messages_3_p_0(ClosureSpecs_72, STATE_VARIABLE_Info_260_260, &STATE_VARIABLE_Info_261_261);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHSVar_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_71));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_53));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_54));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_55));
                }
                DeclaredPurity_289 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
                switch (DeclaredPurity_289) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_Word Context_73;
                      MR_Word Spec_74;

                      Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
                      Spec_74 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_73, DeclaredPurity_289);
                      check_hlds__purity__purity_info_add_message_3_p_0(Spec_74, STATE_VARIABLE_Info_261_261, STATE_VARIABLE_Info_196);
                    }
                    break;
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Info_196 = STATE_VARIABLE_Info_261_261;
                    break;
                }
                *Purity_11 = (MR_Integer) 0;
                *ContainsTrace_12 = (MR_Integer) 1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0)));
          MR_Integer ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1)));
          MR_Word ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2)));
          MR_Word Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3)));
          MR_Word MaybeUnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4)));
          MR_Word SymName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5)));
          MR_Word RunPostTypecheck_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
          MR_Word PredInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
          MR_Word ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
          MR_Word CallContext_26;
          MR_Word PredId_27;
          MR_Word DeclaredPurity_31;
          MR_Word Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
          MR_Word Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
          MR_Word Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
          MR_Word Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
          MR_Word Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));

          CallContext_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
          switch (RunPostTypecheck_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                PredId_27 = PredId0_17;
                *GoalExpr_9 = GoalExpr0_8;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word SymName_28;
                MR_Word Var_266;
                MR_String Var_267;
                MR_Word Var_268;
                MR_Word Var_269;
                MR_Word Var_523;
                MR_Word InputArg_29;
                MR_Word OutputArg_30;

                check_hlds__purity__finally_resolve_pred_overloading_8_p_0(ModuleInfo_25, PredInfo_24, PredId0_17, SymName0_22, ArgVars_19, CallContext_26, &PredId_27, &SymName_28);
                succeeded = ((MR_tag((MR_Word) SymName_28)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_28, (MR_Integer) 0)));
                  Var_267 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_28, (MR_Integer) 1)));
                  Var_523 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_266, Var_523);
                  if (succeeded)
                  {
                    succeeded = (strcmp(Var_267, (MR_String) "unsafe_type_cast") == 0);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgVars_19)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        InputArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_19, (MR_Integer) 0)));
                        Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_19, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_268)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          OutputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 0)));
                          Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 1)));
                          succeeded = (Var_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_275;
                  MR_Word Var_276;
                  MR_Word Var_277;
                  MR_Word Var_278;

                  Var_276 = parse_tree__prog_mode__in_mode_0_f_0();
                  Var_278 = parse_tree__prog_mode__out_mode_0_f_0();
                  {
                    Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Var_278));
                    MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Var_276));
                    MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (Var_277));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[1])));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgVars_19));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_275));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_27));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_18));
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_19));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Status_20));
                    MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext_21));
                    MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName_28));
                  }
              }
              break;
          }
          DeclaredPurity_31 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
          check_hlds__purity__perform_goal_purity_checks_6_p_0(CallContext_26, PredId_27, DeclaredPurity_31, Purity_11, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
          *ContainsTrace_12 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word _ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word _Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word _MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4)));
              MR_Word _Det_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5)));

              *GoalExpr_9 = GoalExpr0_8;
              switch (MR_tag((MR_Word) GenericCall0_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall0_33, (MR_Integer) 0)));
                    MR_Word Var_39;
                    MR_Integer Var_40;

                    *Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall0_33, (MR_Integer) 1)));
                    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall0_33, (MR_Integer) 2)));
                    Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall0_33, (MR_Integer) 3)));
                  }
                  break;
                case (MR_Integer) 1:
                  *Purity_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *Purity_11 = (MR_Integer) 0;
                  break;
              }
              *ContainsTrace_12 = (MR_Integer) 1;
              *STATE_VARIABLE_Info_196 = STATE_VARIABLE_Info_0_195;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Integer Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4)));
              MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5)));
              MR_Word Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 6)));
              MR_Word Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 7)));

              *Purity_11 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes_159);
              *ContainsTrace_12 = (MR_Integer) 1;
              *GoalExpr_9 = GoalExpr0_8;
              *STATE_VARIABLE_Info_196 = STATE_VARIABLE_Info_0_195;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word Goals_16;

              switch (ConjType_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__purity__compute_parallel_goals_purity_8_p_0(Goals0_15, &Goals_16, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__purity__compute_goals_purity_8_p_0(Goals0_15, &Goals_16, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word * AddrGoals_526;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
              }
              AddrGoals_526 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 1));
              check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(Goals0_311, AddrGoals_526, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Canfail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word * AddrCases_529;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Canfail_48));
                MR_hl_field(MR_mktag(3), base, 3) = NULL;
              }
              AddrCases_529 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 3));
              check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(Cases0_49, AddrCases_529, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Reason0_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSubGoal_527;

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                      MR_hl_field(MR_mktag(3), base, 2) = NULL;
                    }
                    AddrSubGoal_527 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2));
                    check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_101, AddrSubGoal_527, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason0_100, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word SubGoal_103;
                        MR_Word Var_104;

                        *Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_100, (MR_Integer) 1)));
                        check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_101, &SubGoal_103, &Var_104, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_103));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      {
                        MR_Word * AddrSubGoal_527;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = NULL;
                        }
                        AddrSubGoal_527 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2));
                        check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_101, AddrSubGoal_527, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_100, (MR_Integer) 1)));
                        MR_Word Kind0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_100, (MR_Integer) 2)));

                        switch (Kind0_106) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 0:
                            {
                              MR_Word SubGoalExpr0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_101, (MR_Integer) 0)));
                              MR_Word SubGoalInfo0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_101, (MR_Integer) 1)));
                              MR_Word SubGoals0_110;
                              MR_Word PostTypeCheck_111;
                              MR_Word SubGoals0Prime_109;
                              MR_Word Var_231;
                              MR_Word Var_454;
                              MR_Word Var_455;
                              MR_Word Var_456;
                              MR_Word Var_457;
                              MR_Word Var_458;
                              MR_Word Var_459;
                              MR_Word Var_460;

                              succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_107, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (succeeded)
                              {
                                Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_107, (MR_Integer) 1)));
                                SubGoals0Prime_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_107, (MR_Integer) 2)));
                                succeeded = (Var_231 == (MR_Integer) 0);
                              }
                              if (succeeded)
                                SubGoals0_110 = SubGoals0Prime_109;
                              else
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
                                  return;
                                }
                              }
                              Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                              PostTypeCheck_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                              Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                              Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                              Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                              Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                              Var_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                              Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                              switch (PostTypeCheck_111) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    MR_Word Specs_121;

                                    *GoalExpr_9 = GoalExpr0_8;
                                    check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(SubGoals0_110, STATE_VARIABLE_Info_0_195, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Specs_121);
                                    check_hlds__purity__purity_info_add_messages_3_p_0(Specs_121, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                                    *Purity_11 = (MR_Integer) 0;
                                    *ContainsTrace_12 = (MR_Integer) 1;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word RevMarkedSubGoals_112;
                                    MR_Word Invariants_113;

                                    check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(SubGoals0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevMarkedSubGoals_112, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196, (MR_Integer) 0, &Invariants_113);
                                    switch (Invariants_113) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word ConstructOrderMarkedSubGoals_118;
                                          MR_Word Order_119;
                                          MR_Word SubGoal_319;
                                          MR_Word Var_120;

                                          switch (Kind0_106) {
                                            default: /*NOTREACHED*/ MR_assert(0);
                                            case (MR_Integer) 1:
                                              {
                                                mercury__list__reverse_2_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, RevMarkedSubGoals_112, &ConstructOrderMarkedSubGoals_118);
                                                Order_119 = (MR_Integer) 0;
                                              }
                                              break;
                                            case (MR_Integer) 0:
                                              {
                                                ConstructOrderMarkedSubGoals_118 = RevMarkedSubGoals_112;
                                                Order_119 = (MR_Integer) 1;
                                              }
                                              break;
                                          }
                                          hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(GoalInfo_10, SubGoalInfo0_108, ConstructOrderMarkedSubGoals_118, Order_119, &SubGoal_319);
                                          *GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_319, (MR_Integer) 0)));
                                          Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_319, (MR_Integer) 1)));
                                        }
                                        break;
                                      case (MR_Integer) 0:
                                        {
                                          MR_Word TypeCtorInfo_508_508 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                          MR_Word RevSubGoals_114;
                                          MR_Word SubGoals_115;
                                          MR_Word SubGoalExpr_116;
                                          MR_Word SubGoalInfo_117;
                                          MR_Word SubGoal_318;

                                          mercury__list__map_3_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, TypeCtorInfo_508_508, (MR_Word) &check_hlds__purity_scalar_common_1[1], RevMarkedSubGoals_112, &RevSubGoals_114);
                                          mercury__list__reverse_2_p_0(TypeCtorInfo_508_508, RevSubGoals_114, &SubGoals_115);
                                          {
                                            SubGoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(3), SubGoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                            MR_hl_field(MR_mktag(3), SubGoalExpr_116, 1) = ((MR_Box) ((MR_Integer) 0));
                                            MR_hl_field(MR_mktag(3), SubGoalExpr_116, 2) = ((MR_Box) (SubGoals_115));
                                          }
                                          check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*Purity_11, *ContainsTrace_12, SubGoalInfo0_108, &SubGoalInfo_117);
                                          {
                                            SubGoal_318 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), SubGoal_318, 0) = ((MR_Box) (SubGoalExpr_116));
                                            MR_hl_field(MR_mktag(0), SubGoal_318, 1) = ((MR_Box) (SubGoalInfo_117));
                                          }
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                            *GoalExpr_9 = base;
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_318));
                                          }
                                        }
                                        break;
                                    }
                                  }
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word HaveConvertedUnify_122;
                              MR_Word STATE_VARIABLE_Info_227_227;
                              MR_Word SubGoal_324;
                              MR_Word Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                              MR_Word Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                              MR_Word Var_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                              MR_Word Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                              MR_Word Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                              MR_Word Var_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                              MR_Word Var_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                              MR_Word Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                              MR_Word Var_469;
                              MR_Word Var_470;
                              MR_Word Var_471;
                              MR_Word Var_472;
                              MR_Word Var_473;
                              MR_Word Var_474;
                              MR_Word Var_475;

                              {
                                STATE_VARIABLE_Info_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 0) = ((MR_Box) (Var_461));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 1) = ((MR_Box) (Var_462));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 2) = ((MR_Box) (Var_463));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 3) = ((MR_Box) (Var_464));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 4) = ((MR_Box) (Var_465));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 5) = ((MR_Box) (Var_466));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 6) = ((MR_Box) (Var_467));
                                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_227_227, 7) = ((MR_Box) ((MR_Integer) 0));
                              }
                              check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_101, &SubGoal_324, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_227_227, STATE_VARIABLE_Info_196);
                              Var_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 0)));
                              Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 1)));
                              Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 2)));
                              Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 3)));
                              Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 4)));
                              Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 5)));
                              Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 6)));
                              HaveConvertedUnify_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_196, (MR_Integer) 7)));
                              switch (HaveConvertedUnify_122) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    MR_Word Reason_123;

                                    {
                                      Reason_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), Reason_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                      MR_hl_field(MR_mktag(3), Reason_123, 1) = ((MR_Box) (TermVar_105));
                                      MR_hl_field(MR_mktag(3), Reason_123, 2) = ((MR_Box) ((MR_Integer) 3));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *GoalExpr_9 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_123));
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_324));
                                    }
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    *GoalExpr_9 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_324));
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word SubGoal_328;
                        MR_Word _SubPurity_140;
                        MR_Word Var_141;

                        check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_101, &SubGoal_328, &_SubPurity_140, &Var_141, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_328));
                        }
                        *Purity_11 = (MR_Integer) 0;
                        *ContainsTrace_12 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "loop_control");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Cond0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word Then0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word Else0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4)));
              MR_Word Cond_149;
              MR_Word Purity1_150;
              MR_Word ContainsTrace1_151;
              MR_Word Then_152;
              MR_Word Purity2_153;
              MR_Word ContainsTrace2_154;
              MR_Word Else_155;
              MR_Word Purity3_156;
              MR_Word ContainsTrace3_157;
              MR_Word Purity12_158;
              MR_Word STATE_VARIABLE_Info_219_219;
              MR_Word STATE_VARIABLE_Info_220_220;

              check_hlds__purity__compute_goal_purity_6_p_0(Cond0_146, &Cond_149, &Purity1_150, &ContainsTrace1_151, STATE_VARIABLE_Info_0_195, &STATE_VARIABLE_Info_219_219);
              check_hlds__purity__compute_goal_purity_6_p_0(Then0_147, &Then_152, &Purity2_153, &ContainsTrace2_154, STATE_VARIABLE_Info_219_219, &STATE_VARIABLE_Info_220_220);
              check_hlds__purity__compute_goal_purity_6_p_0(Else0_148, &Else_155, &Purity3_156, &ContainsTrace3_157, STATE_VARIABLE_Info_220_220, STATE_VARIABLE_Info_196);
              Purity12_158 = parse_tree__prog_data__worst_purity_2_f_0(Purity1_150, Purity2_153);
              *Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(Purity12_158, Purity3_156);
              succeeded = (ContainsTrace1_151 == (MR_Integer) 0);
              if (!(succeeded))
              {
                succeeded = (ContainsTrace2_154 == (MR_Integer) 0);
                if (!(succeeded))
                  succeeded = (ContainsTrace3_157 == (MR_Integer) 0);
              }
              if (succeeded)
                *ContainsTrace_12 = (MR_Integer) 0;
              else
                *ContainsTrace_12 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_145));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_149));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_152));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_155));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ShortHand0_166)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 0)));
                    MR_Word Outer_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 1)));
                    MR_Word Inner_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 2)));
                    MR_Word MaybeOutputVars_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 3)));
                    MR_Word MainGoal0_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 4)));
                    MR_Word OrElseGoals0_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 5)));
                    MR_Word OrElseInners_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_166, (MR_Integer) 6)));
                    MR_Word MainGoal1_184;
                    MR_Word OrElseGoals1_185;
                    MR_Word MainGoal_188;
                    MR_Word OrElseGoals_189;
                    MR_Word ShortHand_190;
                    MR_Word STATE_VARIABLE_Info_214_214;
                    MR_Word STATE_VARIABLE_Info_215_215;
                    MR_Word RunPostTypecheck_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                    MR_Word Purity1_339;
                    MR_Word ContainsTrace1_340;
                    MR_Word Purity2_341;
                    MR_Word ContainsTrace2_342;
                    MR_Word Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                    MR_Word Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                    MR_Word Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                    MR_Word Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                    MR_Word Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                    MR_Word Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                    MR_Word Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));

                    switch (RunPostTypecheck_335) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MainGoal1_184 = MainGoal0_171;
                          OrElseGoals1_185 = OrElseGoals0_172;
                          STATE_VARIABLE_Info_214_214 = STATE_VARIABLE_Info_0_195;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_510_510;
                          MR_Word OuterDI_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_168, (MR_Integer) 0)));
                          MR_Word OuterUO_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_168, (MR_Integer) 1)));
                          MR_Word OuterDIType_176;
                          MR_Word OuterDITypeSpecs_177;
                          MR_Word OuterUOType_178;
                          MR_Word OuterUOTypeSpecs_179;
                          MR_Word OuterMismatchSpecs_180;
                          MR_Word OuterTypeSpecs_181;
                          MR_Word Var_203;
                          MR_Word Context_329;

                          Context_329 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
                          check_hlds__purity__check_outer_var_type_6_p_0(Context_329, Var_478, Var_479, OuterDI_174, &OuterDIType_176, &OuterDITypeSpecs_177);
                          check_hlds__purity__check_outer_var_type_6_p_0(Context_329, Var_478, Var_479, OuterUO_175, &OuterUOType_178, &OuterUOTypeSpecs_179);
                          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_176, OuterUOType_178);
                          if (succeeded)
                            OuterMismatchSpecs_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          else
                          {
                            MR_Word Var_201;

                            Var_201 = check_hlds__purity__mismatched_outer_var_types_1_f_0(Context_329);
                            {
                              OuterMismatchSpecs_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), OuterMismatchSpecs_180, 0) = ((MR_Box) (Var_201));
                              MR_hl_field(MR_mktag(1), OuterMismatchSpecs_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                          }
                          TypeCtorInfo_510_510 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                          Var_203 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_510_510, OuterUOTypeSpecs_179, OuterMismatchSpecs_180);
                          OuterTypeSpecs_181 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_510_510, OuterDITypeSpecs_177, Var_203);
                          if ((OuterTypeSpecs_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            MR_Word TypeCtorInfo_515_515 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                            MR_Word AtomicGoalsAndInners_186;
                            MR_Word AllAtomicGoals1_187;
                            MR_Word Var_204;
                            MR_Word Var_205;
                            MR_Word Var_206;
                            MR_Word STATE_VARIABLE_Info_207_207;
                            MR_Box conv3_STATE_VARIABLE_Info_207_207;
                            MR_Word Var_497;
                            MR_Word Var_498;
                            MR_Word Var_499;
                            MR_Word Var_500;
                            MR_Word Var_501;
                            MR_Word Var_502;
                            MR_Word Var_504;
                            MR_Word Var_503;

                            {
                              Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (MainGoal0_171));
                              MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (OrElseGoals0_172));
                            }
                            {
                              Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Inner_169));
                              MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (OrElseInners_173));
                            }
                            AtomicGoalsAndInners_186 = mercury__assoc_list__from_corresponding_lists_2_f_0(TypeCtorInfo_515_515, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0, Var_204, Var_205);
                            {
                              Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
                              MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_2));
                              MR_hl_field(MR_mktag(0), Var_206, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), Var_206, 3) = ((MR_Box) (Outer_168));
                            }
                            mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__purity_scalar_common_1[0], TypeCtorInfo_515_515, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, Var_206, AtomicGoalsAndInners_186, &AllAtomicGoals1_187, ((MR_Box) (STATE_VARIABLE_Info_0_195)), &conv3_STATE_VARIABLE_Info_207_207);
                            STATE_VARIABLE_Info_207_207 = ((MR_Word) conv3_STATE_VARIABLE_Info_207_207);
                            if ((AllAtomicGoals1_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
                                return;
                              }
                            }
                            else
                            {
                              MainGoal1_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllAtomicGoals1_187, (MR_Integer) 0)));
                              OrElseGoals1_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllAtomicGoals1_187, (MR_Integer) 1)));
                            }
                            Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 0)));
                            Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 1)));
                            Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 2)));
                            Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 3)));
                            Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 4)));
                            Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 5)));
                            Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 6)));
                            Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_207_207, (MR_Integer) 7)));
                            {
                              STATE_VARIABLE_Info_214_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 0) = ((MR_Box) (Var_497));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 1) = ((MR_Box) (Var_498));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 2) = ((MR_Box) (Var_499));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 3) = ((MR_Box) (Var_500));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 4) = ((MR_Box) (Var_501));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 5) = ((MR_Box) (Var_502));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 6) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_214_214, 7) = ((MR_Box) (Var_504));
                            }
                          }
                          else
                          {
                            MR_Box conv5_STATE_VARIABLE_Info_214_214;

                            mercury__list__foldl_4_p_0(TypeCtorInfo_510_510, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, (MR_Word) &check_hlds__purity_scalar_common_1[2], OuterTypeSpecs_181, ((MR_Box) (STATE_VARIABLE_Info_0_195)), &conv5_STATE_VARIABLE_Info_214_214);
                            STATE_VARIABLE_Info_214_214 = ((MR_Word) conv5_STATE_VARIABLE_Info_214_214);
                            MainGoal1_184 = MainGoal0_171;
                            OrElseGoals1_185 = OrElseGoals0_172;
                          }
                        }
                        break;
                    }
                    check_hlds__purity__compute_goal_purity_6_p_0(MainGoal1_184, &MainGoal_188, &Purity1_339, &ContainsTrace1_340, STATE_VARIABLE_Info_214_214, &STATE_VARIABLE_Info_215_215);
                    check_hlds__purity__compute_goals_purity_8_p_0(OrElseGoals1_185, &OrElseGoals_189, (MR_Integer) 0, &Purity2_341, (MR_Integer) 1, &ContainsTrace2_342, STATE_VARIABLE_Info_215_215, STATE_VARIABLE_Info_196);
                    *Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(Purity1_339, Purity2_341);
                    succeeded = (ContainsTrace1_340 == (MR_Integer) 0);
                    if (!(succeeded))
                      succeeded = (ContainsTrace2_342 == (MR_Integer) 0);
                    if (succeeded)
                      *ContainsTrace_12 = (MR_Integer) 0;
                    else
                      *ContainsTrace_12 = (MR_Integer) 1;
                    {
                      ShortHand_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 0) = ((MR_Box) (GoalType_167));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 1) = ((MR_Box) (Outer_168));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 2) = ((MR_Box) (Inner_169));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 3) = ((MR_Box) (MaybeOutputVars_170));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 4) = ((MR_Box) (MainGoal_188));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 5) = ((MR_Box) (OrElseGoals_189));
                      MR_hl_field(MR_mktag(1), ShortHand_190, 6) = ((MR_Box) (OrElseInners_173));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_190));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_191 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_166, (MR_Integer) 0)));
                    MR_Word ResultVar_192 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_166, (MR_Integer) 1)));
                    MR_Word SubGoal0_343 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_166, (MR_Integer) 2)));
                    MR_Word ShortHand_345;
                    MR_Word * AddrSubGoal_528;

                    {
                      ShortHand_345 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_345, 0) = ((MR_Box) (MaybeIO_191));
                      MR_hl_field(MR_mktag(2), ShortHand_345, 1) = ((MR_Box) (ResultVar_192));
                      MR_hl_field(MR_mktag(2), ShortHand_345, 2) = NULL;
                    }
                    AddrSubGoal_528 = (MR_Word *) &(MR_hl_field(MR_mktag(2), ShortHand_345, (MR_Integer) 2));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_345));
                    }
                    check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_343, AddrSubGoal_528, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_195, STATE_VARIABLE_Info_196);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
    *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
  }
  else
  {
    MR_Word Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_20;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Purity_39_39;
    MR_Word STATE_VARIABLE_ContainsTrace_40_40;
    MR_Word GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0)));
    MR_Word GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1)));
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;
    MR_Word STATE_VARIABLE_GoalInfo_10_61;
    MR_Word * AddrGoals_89;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_51, &GoalExpr_53, GoalInfo0_52, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_52, &STATE_VARIABLE_GoalInfo_10_61);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
        }
        break;
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_53));
      MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_54));
    }
    switch (GoalPurity_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1)));
          MR_Word Context_29;
          MR_Word Spec_30;
          MR_String PurityName_69;
          MR_Word Pieces_70;
          MR_Word Msg_71;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_String Var_76;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_87;
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0)));

          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
          parse_tree__prog_out__purity_name_2_p_0(GoalPurity_25, &PurityName_69);
          Var_76 = mercury__string__f_43_43_2_f_0(PurityName_69, (MR_String) ",");
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (Var_76));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[64])));
          }
          {
            Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[62])));
            MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_70));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_71, 0) = ((MR_Box) (Context_29));
            MR_hl_field(MR_mktag(0), Msg_71, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Msg_71));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_87));
          }
          check_hlds__purity__purity_info_add_message_3_p_0(Spec_30, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_37_37;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_37_37;
        break;
    }
    STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
    STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1));
    check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(Goals0_19, AddrGoals_89, STATE_VARIABLE_Purity_39_39, STATE_VARIABLE_Purity_4, STATE_VARIABLE_ContainsTrace_40_40, STATE_VARIABLE_ContainsTrace_6, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
    *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
  }
  else
  {
    MR_Word HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word HeadGoal_24;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Purity_35_35;
    MR_Word STATE_VARIABLE_ContainsTrace_36_36;
    MR_Word GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 0)));
    MR_Word GoalInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 1)));
    MR_Word GoalExpr_49;
    MR_Word GoalInfo_50;
    MR_Word STATE_VARIABLE_GoalInfo_10_57;
    MR_Word * AddrTailGoals_62;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_47, &GoalExpr_49, GoalInfo0_48, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_34_34);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_48, &STATE_VARIABLE_GoalInfo_10_57);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
        }
        break;
    }
    {
      HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadGoal_24, 0) = ((MR_Box) (GoalExpr_49));
      MR_hl_field(MR_mktag(0), HeadGoal_24, 1) = ((MR_Box) (GoalInfo_50));
    }
    STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
    STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTailGoals_62 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1));
    check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(TailGoals0_19, AddrTailGoals_62, STATE_VARIABLE_Purity_35_35, STATE_VARIABLE_Purity_4, STATE_VARIABLE_ContainsTrace_36_36, STATE_VARIABLE_ContainsTrace_6, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word * Purity_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));
    MR_Word GoalExpr_14;
    MR_Word GoalInfo_15;
    MR_Word STATE_VARIABLE_GoalInfo_10_24;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_24);
    switch (*ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_15));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__mismatched_outer_var_types_1_f_0(
  MR_Word Context_3)
{
  {
    MR_Word Spec_4;
    MR_Word Msg_6;
    MR_Word Var_15;

    {
      Msg_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_6, 0) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(0), Msg_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[61])));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Msg_6));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_4, 2) = ((MR_Box) (Var_15));
    }
    return Spec_4;
  }
}

static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
  MR_Word Context_7,
  MR_Word VarTypes_8,
  MR_Word VarSet_9,
  MR_Word Var_10,
  MR_Word * VarType_11,
  MR_Word * Specs_12)
{
  {
    MR_bool succeeded;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_8, Var_10, VarType_11);
    {
      MR_Word Var_15;

      Var_15 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*VarType_11, Var_15);
    }
    if (!(succeeded))
    {
      MR_Word Var_16;

      Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*VarType_11, Var_16);
    }
    if (succeeded)
      *Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Spec_13;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_39;

      Var_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_9, Var_10);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (Var_29));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[58])));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[56])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_39));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word DeclaredPurity_9,
  MR_Word * ActualPurity_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Word PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word CalleePredInfo_14;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_8, &CalleePredInfo_14);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(CalleePredInfo_14, ActualPurity_10);
    succeeded = (*ActualPurity_10 == DeclaredPurity_9);
    if (succeeded)
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    else
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_13);
      if (succeeded)
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      else
      {
        succeeded = parse_tree__prog_data__less_pure_2_p_0(*ActualPurity_10, DeclaredPurity_9);
        if (succeeded)
        {
          MR_Word Spec_15;
          MR_Word Msgs0_44;
          MR_Word Msgs_45;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;

          Spec_15 = check_hlds__purity__error_missing_body_impurity_decl_3_f_0(ModuleInfo_12, PredId_8, Context_7);
          Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
          Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
          Msgs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
          {
            Msgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_45, 0) = ((MR_Box) (Spec_15));
            MR_hl_field(MR_mktag(1), Msgs_45, 1) = ((MR_Box) (Msgs0_44));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_45));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
          }
        }
        else
        {
          MR_Word Markers_16;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_13, &Markers_16);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 11);
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 12);
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 24);
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
          else
          {
            MR_Word Spec_24;
            MR_Word Msgs0_66;
            MR_Word Msgs_67;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;

            Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(ModuleInfo_12, PredId_8, Context_7, DeclaredPurity_9);
            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
            Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
            Msgs0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
            Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
            Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
            {
              Msgs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Msgs_67, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Msgs_67, 1) = ((MR_Box) (Msgs0_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_67));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
            }
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word Context_8,
  MR_Word DeclaredPurity_9)
{
  {
    MR_Word Spec_10;
    MR_Word TypeCtorInfo_65_65;
    MR_Word PredInfo_11;
    MR_Word ActualPurity_12;
    MR_String DeclaredPurityName_13;
    MR_String ActualPurityName_14;
    MR_Word PredPieces_15;
    MR_Word Pieces1_16;
    MR_Word Pieces2_17;
    MR_Word Msg_18;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_63;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_11, &ActualPurity_12);
    parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_9, &DeclaredPurityName_13);
    parse_tree__prog_out__purity_name_2_p_0(ActualPurity_12, &ActualPurityName_14);
    PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
    TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (DeclaredPurityName_13));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[28])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[54])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    Var_24 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_65_65, PredPieces_15, Var_25);
    Pieces1_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[53]), Var_24);
    switch (ActualPurity_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Var_43;
          MR_Word Var_44;

          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (ActualPurityName_14));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[19])));
          }
          {
            Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[55])));
            MR_hl_field(MR_mktag(1), Pieces2_17, 1) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 0:
        Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[21]);
        break;
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces1_16));
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces2_17));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_18, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_18, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_63));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word Context_7)
{
  {
    MR_Word Spec_8;
    MR_Word TypeCtorInfo_63_63;
    MR_Word PredInfo_9;
    MR_Word PredOrFunc_10;
    MR_Word Purity_11;
    MR_String PurityName_12;
    MR_Word PredPieces_13;
    MR_Word Pieces1_14;
    MR_Word Pieces2_15;
    MR_Word Msg_16;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_61;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_9, &Purity_11);
    parse_tree__prog_out__purity_name_2_p_0(Purity_11, &PurityName_12);
    PredPieces_13 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 0, PredId_6);
    TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (PurityName_12));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[48])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Var_24 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, PredPieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    Pieces1_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, Var_18, Var_24);
    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_33;
          MR_Word Var_36;
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (PurityName_12));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[50])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[49])));
            MR_hl_field(MR_mktag(1), Pieces2_15, 1) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_46;
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (PurityName_12));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
          }
          {
            Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[51])));
            MR_hl_field(MR_mktag(1), Pieces2_15, 1) = ((MR_Box) (Var_46));
          }
        }
        break;
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces1_14));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces2_15));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_16, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_16, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Msg_16));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_61));
    }
    return Spec_8;
  }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
      MR_Word GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
      MR_Word XVar_23;
      MR_Word ConsId_24;
      MR_Word YVars_25;
      MR_Word UnifySpecs_26;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word XVarPrime_15;
      MR_Word ConsIdPrime_20;
      MR_Word YVarsPrime_22;
      MR_Word Y_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        XVarPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 0)));
        Y_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 2)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 3)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) Y_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ConsIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_16, (MR_Integer) 0)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_16, (MR_Integer) 1)));
          YVarsPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_16, (MR_Integer) 2)));
        }
      }
      if (succeeded)
      {
        XVar_23 = XVarPrime_15;
        ConsId_24 = ConsIdPrime_20;
        YVars_25 = YVarsPrime_22;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      }
      check_hlds__purity__check_var_functor_unify_purity_6_p_0(Info_2, GoalInfo0_14, XVar_23, ConsId_24, YVars_25, &UnifySpecs_26);
      STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, UnifySpecs_26, STATE_VARIABLE_Specs_0_3);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals0_10;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  if ((Specs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  else
  {
    MR_Word Msgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word Msgs_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_25;

    Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Specs_4, Msgs0_8);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
  MR_Word Info_7,
  MR_Word GoalInfo_8,
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word * Specs_12)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word TypeOfVar_14;
    MR_Word PredInfo_15;
    MR_Word CallerMarkers_16;
    MR_Word Context_17;
    MR_Word ClosureSpecs_34;
    MR_Word DeclaredPurity_35;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word PName_18;
    MR_Word TypePurity_21;
    MR_Word PredOrFunc_22;
    MR_Word VarArgTypes_24;
    MR_Integer Var_19;
    MR_Word Var_20;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_13, Var_9, &TypeOfVar_14);
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &CallerMarkers_16);
    Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      PName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
      Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 3)));
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfVar_14, &TypePurity_21, &PredOrFunc_22, &VarArgTypes_24);
    }
    if (succeeded)
    {
      MR_Word TVarSet_25;
      MR_Word ExistQTVars_26;
      MR_Word ExternalTypeParams_27;
      MR_Word ArgTypes0_28;
      MR_Word PredArgTypes_29;
      MR_Word ModuleInfo_30;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word CalleePredId_31;
      MR_Word Var_37;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_15, &TVarSet_25);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_15, &ExistQTVars_26);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_15, &ExternalTypeParams_27);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_13, Args_11, &ArgTypes0_28);
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes0_28, VarArgTypes_24, &PredArgTypes_29);
      ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
      Var_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(CallerMarkers_16);
      succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(Var_37, PName_18, PredOrFunc_22, TVarSet_25, ExistQTVars_26, PredArgTypes_29, ExternalTypeParams_27, ModuleInfo_30, Context_17, &CalleePredId_31);
      if (succeeded)
      {
        MR_Word CalleePredInfo_32;
        MR_Word CalleePurity_33;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, CalleePredId_31, &CalleePredInfo_32);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(CalleePredInfo_32, &CalleePurity_33);
        check_hlds__purity__check_closure_purity_4_p_0(GoalInfo_8, TypePurity_21, CalleePurity_33, &ClosureSpecs_34);
      }
      else
        ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
      ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_8);
    switch (DeclaredPurity_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(CallerMarkers_16, (MR_Integer) 24);
          if (succeeded)
            *Specs_12 = ClosureSpecs_34;
          else
          {
            MR_Word Spec_36;

            Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_17, DeclaredPurity_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Specs_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ClosureSpecs_34));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        *Specs_12 = ClosureSpecs_34;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word DeclaredPurity_6,
  MR_Word ActualPurity_7,
  MR_Word * Specs_8)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data__less_pure_2_p_0(ActualPurity_7, DeclaredPurity_6);
    if (succeeded)
    {
      MR_Word Context_9;
      MR_Word Spec_10;
      MR_String ActualPurityName_16;
      MR_Word Pieces_17;
      MR_Word Msg_18;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_42;

      Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_5);
      parse_tree__prog_out__purity_name_2_p_0(ActualPurity_7, &ActualPurityName_16);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (ActualPurityName_16));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[15])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[47])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[46])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[45])));
        MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Pieces_17));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_18, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_18, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Msg_18));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
        MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__purity__finally_resolve_pred_overloading_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CallerPredInfo_10,
  MR_Word PredId0_11,
  MR_Word PredName0_12,
  MR_Word Args0_13,
  MR_Word Context_14,
  MR_Word * PredId_15,
  MR_Word * PredName_16)
{
  {
    MR_bool succeeded;
    MR_Word Var_27;

    Var_27 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId0_11, Var_27);
    if (succeeded)
    {
      MR_Word TVarSet_17;
      MR_Word ExistQVars_18;
      MR_Word ExternalTypeParams_19;
      MR_Word Markers_20;
      MR_Word ClausesInfo_21;
      MR_Word VarTypes_22;
      MR_Word ArgTypes_23;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo_10, &TVarSet_17);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CallerPredInfo_10, &ExistQVars_18);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(CallerPredInfo_10, &ExternalTypeParams_19);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(CallerPredInfo_10, &Markers_20);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(CallerPredInfo_10, &ClausesInfo_21);
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_21, &VarTypes_22);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_22, Args0_13, &ArgTypes_23);
      hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_9, Markers_20, TVarSet_17, ExistQVars_18, ArgTypes_23, ExternalTypeParams_19, Context_14, PredName0_12, PredName_16, PredId_15);
    }
    else
    {
      MR_Word PredInfo_24;
      MR_Word PredModule_25;
      MR_String PredBaseName_26;

      *PredId_15 = PredId0_11;
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, *PredId_15, &PredInfo_24);
      PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_24);
      PredBaseName_26 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *PredName_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredModule_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredBaseName_26));
      }
    }
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Msgs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Msgs_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

    {
      Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_7, 0) = ((MR_Box) (Spec_4));
      MR_hl_field(MR_mktag(1), Msgs_7, 1) = ((MR_Box) (Msgs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
  MR_Word Purity_5,
  MR_Word ContainsTrace_6,
  MR_Word STATE_VARIABLE_GoalInfo_0_8,
  MR_Word * STATE_VARIABLE_GoalInfo_9)
{
  {
    MR_Word STATE_VARIABLE_GoalInfo_10_10;

    hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_5, STATE_VARIABLE_GoalInfo_0_8, &STATE_VARIABLE_GoalInfo_10_10);
    switch (ContainsTrace_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_10, STATE_VARIABLE_GoalInfo_9);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, STATE_VARIABLE_GoalInfo_10_10, STATE_VARIABLE_GoalInfo_9);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
  MR_Word Context_4,
  MR_Word Purity_5)
{
  {
    MR_Word Spec_6;
    MR_String PurityName_7;
    MR_Word Pieces_8;
    MR_Word Msg_9;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_String Var_17;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_28;

    parse_tree__prog_out__purity_name_2_p_0(Purity_5, &PurityName_7);
    Var_17 = mercury__string__f_43_43_2_f_0(PurityName_7, (MR_String) ",");
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[44])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[42])));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[41])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_9, 0) = ((MR_Box) (Context_4));
      MR_hl_field(MR_mktag(0), Msg_9, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_28));
    }
    return Spec_6;
  }
}

static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
  MR_Word Clause_3,
  MR_Word AllProcIds_4)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableProcIds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 1)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 2)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 4)));

    if ((ApplicableProcIds_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word ClauseProcIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplicableProcIds_5, (MR_Integer) 0)));
      MR_Word SortedClauseProcIds_7;

      mercury__list__sort_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ClauseProcIds_6, &SortedClauseProcIds_7);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__purity_scalar_common_2[2], ((MR_Box) (SortedClauseProcIds_7)), ((MR_Box) (AllProcIds_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word ActualPurity_11,
  MR_Word DeclaredPurity_12,
  MR_Word MaybePromisedPurity_13,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word ComparisonResult_23;
    MR_Word STATE_VARIABLE_Specs_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word STATE_VARIABLE_Specs_32_32;

    if ((MaybePromisedPurity_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_30_30;
    else
    {
      MR_Word PromisedPurity_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePromisedPurity_13, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word Origin_17;

      succeeded = (DeclaredPurity_12 == PromisedPurity_15);
      if (succeeded)
        STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_30_30;
      else
      {
        MR_Word InconsistentPromiseSpec_16;

        InconsistentPromiseSpec_16 = check_hlds__purity__error_inconsistent_purity_promise_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, DeclaredPurity_12);
        {
          STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (InconsistentPromiseSpec_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
        }
      }
      succeeded = (ActualPurity_11 == PromisedPurity_15);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_17);
        if (((MR_tag((MR_Word) Origin_17)) == (MR_mktag((MR_Integer) 2))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Origin_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Origin_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word UnnecessaryPromiseSpec_22;

        UnnecessaryPromiseSpec_22 = check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, PromisedPurity_15);
        {
          STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (UnnecessaryPromiseSpec_22));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_31_31));
        }
      }
      else
        STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_31_31;
    }
    switch (ActualPurity_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ComparisonResult_23 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            ComparisonResult_23 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ComparisonResult_23 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ComparisonResult_23 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            ComparisonResult_23 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ComparisonResult_23 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ComparisonResult_23 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            ComparisonResult_23 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ComparisonResult_23 = (MR_Integer) 0;
            break;
        }
        break;
    }
    switch (ComparisonResult_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((MaybePromisedPurity_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word NotPureEnoughSpec_25;

          NotPureEnoughSpec_25 = check_hlds__purity__error_not_pure_enough_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NotPureEnoughSpec_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_32));
          }
        }
        else
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_32_32;
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_32_32;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Markers_26;
          MR_Word GoalType_27;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_26);
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_10, &GoalType_27);
          if ((GoalType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
            succeeded = MR_TRUE;
          else
          if ((GoalType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 0);
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 12);
              if (!(succeeded))
              {
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 11);
              }
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_32_32;
          else
          {
            MR_Word TypeCtorInfo_22_88;
            MR_Word TooPureSpec_28;
            MR_Word Context_44;
            MR_Word PredContextPieces_45;
            MR_String DeclaredPurityName_46;
            MR_String ActualPurityName_47;
            MR_Word Pieces_48;
            MR_Word Msg_49;
            MR_Word Var_50;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_String Var_60;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_68;
            MR_Word PredPieces_75;
            MR_Word Var_81;

            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_44);
            PredPieces_75 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
            TypeCtorInfo_22_88 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            Var_81 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_88, PredPieces_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
            PredContextPieces_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_88, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[23]), Var_81);
            parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_12, &DeclaredPurityName_46);
            parse_tree__prog_out__purity_name_2_p_0(ActualPurity_11, &ActualPurityName_47);
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (DeclaredPurityName_46));
            }
            Var_60 = mercury__string__f_43_43_2_f_0(ActualPurityName_47, (MR_String) ".");
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Var_60));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[40])));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[39])));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
            }
            Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, PredContextPieces_45, Var_50);
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Pieces_48));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_49, 0) = ((MR_Box) (Context_44));
              MR_hl_field(MR_mktag(0), Msg_49, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Msg_49));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              TooPureSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TooPureSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), TooPureSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              MR_hl_field(MR_mktag(0), TooPureSpec_28, 2) = ((MR_Box) (Var_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TooPureSpec_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_32));
            }
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_not_pure_enough_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word Purity_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_Word TypeCtorInfo_22_81;
    MR_Word Context_11;
    MR_Word PredOrFunc_12;
    MR_String PredOrFuncStr_13;
    MR_Word PredContextPieces_14;
    MR_Word DeclaredPurity_15;
    MR_String PurityName_16;
    MR_String DeclaredPurityName_17;
    MR_Word Pieces1_18;
    MR_Word Pieces2_19;
    MR_Word Msg_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word PredPieces_68;
    MR_Word Var_74;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    PredPieces_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    TypeCtorInfo_22_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_74 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_81, PredPieces_68, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    PredContextPieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_81, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[23]), Var_74);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &DeclaredPurity_15);
    parse_tree__prog_out__purity_name_2_p_0(Purity_9, &PurityName_16);
    parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_15, &DeclaredPurityName_17);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (PredOrFuncStr_13));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (PurityName_16));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[15])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[33])));
      MR_hl_field(MR_mktag(1), Pieces1_18, 1) = ((MR_Box) (Var_23));
    }
    succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_7);
    if (succeeded)
    {
      Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[36]);
    }
    else
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_String Var_48;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (PurityName_16));
      }
      Var_48 = mercury__string__f_43_43_2_f_0(DeclaredPurityName_17, (MR_String) ".");
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (Var_48));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[38])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[37])));
        MR_hl_field(MR_mktag(1), Pieces2_19, 1) = ((MR_Box) (Var_41));
      }
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (PredContextPieces_14));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces1_18));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Pieces2_19));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Msg_20));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_62));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word PromisedPurity_9)
{
  {
    MR_Word Spec_10;
    MR_Word TypeCtorInfo_22_84;
    MR_Word Context_11;
    MR_Word PredContextPieces_12;
    MR_String Pragma_13;
    MR_String CodeStr_14;
    MR_Word PredOrFunc_15;
    MR_Word MainPieces_16;
    MR_Word VerbosePieces_17;
    MR_Word Msg_18;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_65;
    MR_Word PredPieces_71;
    MR_Word Var_77;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredPieces_71 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    TypeCtorInfo_22_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_77 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_84, PredPieces_71, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    PredContextPieces_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_84, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[23]), Var_77);
    switch (PromisedPurity_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "function \140check_hlds.purity.warn_unnecessary_purity_promise\'/4", (MR_String) "promise_impure");
        }
        break;
      case (MR_Integer) 0:
        {
          Pragma_13 = (MR_String) "promise_pure";
          CodeStr_14 = (MR_String) "impure or semipure";
        }
        break;
      case (MR_Integer) 1:
        {
          Pragma_13 = (MR_String) "promise_semipure";
          CodeStr_14 = (MR_String) "impure";
        }
        break;
    }
    PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Pragma_13));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[13])));
    }
    {
      MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[28])));
      MR_hl_field(MR_mktag(1), MainPieces_16, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (PredOrFunc_15));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (CodeStr_14));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[32])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[31])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[30])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[29])));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (PredContextPieces_12));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (MainPieces_16));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_60, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_18, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_65));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_purity_promise_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word Purity_9)
{
  {
    MR_Word Spec_10;
    MR_Word TypeCtorInfo_22_70;
    MR_Word Context_11;
    MR_Word PredOrFunc_12;
    MR_String PredOrFuncStr_13;
    MR_String PurityName_14;
    MR_Word PredContextPieces_15;
    MR_Word MainPieces_16;
    MR_Word VerbosePieces_17;
    MR_Word Msg_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_50;
    MR_Word PredPieces_57;
    MR_Word Var_63;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    parse_tree__prog_out__purity_name_2_p_0(Purity_9, &PurityName_14);
    PredPieces_57 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    TypeCtorInfo_22_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_63 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_70, PredPieces_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    PredContextPieces_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[23]), Var_63);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (PurityName_14));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[26])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[24])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, PredContextPieces_15, Var_19);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (PredOrFuncStr_13));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[11])));
    }
    {
      VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27])));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (MainPieces_16));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_45, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_18, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_50));
    }
    return Spec_10;
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__purity____Compare____converted_unify_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__purity____Compare____purity_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__purity____Unify____run_post_typecheck_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__purity____Compare____run_post_typecheck_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__purity__init(void)
{
}

void mercury__check_hlds__purity__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0);
}

void mercury__check_hlds__purity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__purity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.purity.
