/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2019-10-16
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.resolve_unify_functor.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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

static const MR_DuArgLocn check_hlds__purity__check_hlds__purity__field_locns_purity_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_tasks_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_tasks_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_tasks_0[2];

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(
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
check_hlds__purity__maybe_puritycheck_preds_5_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_87,
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
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__purity__compute_scope_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__purity__compute_scope_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60);

static void MR_CALL 
check_hlds__purity__compute_unify_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

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
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
  MR_Word Purity_5,
  MR_Word ContainsTrace_6,
  MR_Word STATE_VARIABLE_GoalInfo_0_8,
  MR_Word * STATE_VARIABLE_GoalInfo_9);

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word DeclaredPurity_6,
  MR_Word ActualPurity_7,
  MR_Word * Specs_8);

static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
  MR_Word Info_7,
  MR_Word GoalInfo_8,
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word * Specs_12);

static void MR_CALL 
check_hlds__purity__compute_plain_call_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

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

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

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
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[67][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[67][2] = {
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The types of the two outer variables differ."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[2])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_scope_expr_purity_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_shorthand_expr_purity_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_tasks_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_vartypes",
  (MR_String) "pi_varset",
  (MR_String) "pi_messages"
};

static const MR_DuArgLocn check_hlds__purity__check_hlds__purity__field_locns_purity_info_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_locns_purity_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {     check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  {     check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0 = {
  (MR_String) "run_post_typecheck_tasks",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1 = {
  (MR_String) "do_not_run_post_typecheck_tasks",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_tasks_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_tasks_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_tasks_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_tasks_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_tasks_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_tasks_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck_tasks",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_tasks_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_tasks_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_tasks_0
};

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(
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
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(
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
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_37 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_38 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_37 < Var_38);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_37 > Var_38);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_39 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_40 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_39 < Var_40);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_39 > Var_40);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_41 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_42 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_41 < Var_42);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_41 > Var_42);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_pred____Compare____pred_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__purity_scalar_common_1[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__purity_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
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
            {
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeCtorInfo_23_23 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&check_hlds__purity_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_25_25 = (MR_Word) (&check_hlds__purity_scalar_common_1[1]);
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
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
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
    MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Inner_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
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

    NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
    Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_12);
    OuterDI_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_6, (MR_Integer) 0))));
    OuterUO_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_6, (MR_Integer) 1))));
    InnerDI_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_8, (MR_Integer) 0))));
    InnerUO_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_8, (MR_Integer) 1))));
    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
    Clobbered_22 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[3]));
    Unique_23 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[4]));
    Var_36 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (InnerDI_17));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Clobbered_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (InnerDI_17));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Unique_23));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_46);
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_21, Var_36, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_41, (MR_Word) ((MR_Unsigned) 0U), Var_43, Context_14, &OuterToInnerGoal_24);
    Var_51 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (OuterUO_16));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (InnerUO_18));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (InnerUO_18));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Clobbered_22));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (OuterUO_16));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Unique_23));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
    }
    Var_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_61);
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_21, Var_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_56, (MR_Word) ((MR_Unsigned) 0U), Var_58, Context_14, &InnerToOuterGoal_25);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (InnerToOuterGoal_25));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Goal0_7));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (OuterToInnerGoal_24));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      WrapExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), WrapExpr_26, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (OuterDI_15));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_59));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_71, NonLocals0_13, &NonLocals_27);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_27, GoalInfo0_12, &GoalInfo1_28);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 24, GoalInfo1_28, &GoalInfo_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
    MR_Word NeedToRequantify_21;
    MR_Word VarTypes_23;
    MR_Word VarSet_24;
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
    MR_Box conv0_ProcInfo0_10;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_36, &Procs0_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_9, ((MR_Box) (ProcId_7)), &conv0_ProcInfo0_10);
    ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_10, &VarTypes0_12);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_10, &VarSet0_13);
    {
      PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 2) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_36));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 3) = ((MR_Box) (VarTypes0_12));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 4) = ((MR_Box) (VarSet0_13));
      MR_hl_field(MR_mktag(0), PurityInfo0_14, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    GoalExpr0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
    GoalInfo0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_74, &GoalExpr_76, GoalInfo0_75, &Bodypurity_16, &Var_17, PurityInfo0_14, &PurityInfo_18);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(Bodypurity_16, GoalInfo0_75, &STATE_VARIABLE_GoalInfo_10_84);
    switch (Var_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_84, &GoalInfo_77);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_84, &GoalInfo_77);
        break;
    }
    {
      Goal_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_15, 0) = ((MR_Box) (GoalExpr_76));
      MR_hl_field(MR_mktag(0), Goal_15, 1) = ((MR_Box) (GoalInfo_77));
    }
    NeedToRequantify_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 2))));
    VarTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 3))));
    VarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_18, (MR_Integer) 4))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_15, ProcInfo0_10, &ProcInfo1_26);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_23, ProcInfo1_26, &ProcInfo2_27);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_24, ProcInfo2_27, &ProcInfo3_28);
    switch (NeedToRequantify_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ProcInfo_29 = ProcInfo3_28;
        break;
      case (MR_Integer) 0:
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, ProcInfo3_28, &ProcInfo_29);
        break;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_29)), Procs0_9, &Procs_30);
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

            hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 16, Markers0_32, &Markers1_33);
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, Markers1_33, &Markers_34);
          }
          break;
        case (MR_Integer) 1:
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 16, Markers0_32, &Markers_34);
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

      succeeded = parse_tree__prog_data__less_pure_2_p_0(OldPurity_31, Bodypurity_16);
      if (succeeded)
      {
        Var_50 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = NULL;
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
        }
        Var_65 = hlds__hlds_pred__pred_info_procids_1_f_0(STATE_VARIABLE_PredInfo_44_44);
        TypeCtorInfo_66_66 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
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

              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 13, Markers0_32, &Markers1_56);
              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, Markers1_56, &Markers_60);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Markers1_57;

              hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 13, Markers0_32, &Markers1_57);
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 14, Markers1_57, &Markers_60);
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
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box ArgX1_5;
    MR_Word ArgX2_7;
    MR_Word ArgY2_8;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    check_hlds__purity__maybe_puritycheck_preds_5_p_0(PredIds_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9, STATE_VARIABLE_Specs_0_10, STATE_VARIABLE_Specs_11);
  }
}

static void MR_CALL 
check_hlds__purity__maybe_puritycheck_preds_5_p_0(
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_16;
      MR_Word STATE_VARIABLE_Specs_26_26;
      MR_Word STATE_VARIABLE_ModuleInfo_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_2, PredId_12, &PredInfo0_16);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_16);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo0_16);
      if (succeeded)
      {
        STATE_VARIABLE_Specs_26_26 = STATE_VARIABLE_Specs_0_4;
        STATE_VARIABLE_ModuleInfo_27_27 = STATE_VARIABLE_ModuleInfo_0_2;
      }
      else
      {
        MR_Word PredInfo_18;
        MR_Word DeclaredPurity_38;
        MR_Word MaybePromisedPurity_39;
        MR_Word Clauses0_41;
        MR_Word ItemNumbers_42;
        MR_Word VarTypes0_43;
        MR_Word VarSet0_44;
        MR_Word PurityInfo0_45;
        MR_Word Clauses_46;
        MR_Word ActualPurity_47;
        MR_Word PurityInfo_48;
        MR_Word VarTypes_53;
        MR_Word VarSet_54;
        MR_Word GoalSpecs_55;
        MR_Word ClausesRep_56;
        MR_Word PredSpecs_57;
        MR_Word STATE_VARIABLE_ClausesInfo_35_58;
        MR_Word STATE_VARIABLE_ClausesInfo_36_59;
        MR_Word STATE_VARIABLE_PredInfo_42_65;
        MR_Word STATE_VARIABLE_ClausesInfo_43_66;
        MR_Word STATE_VARIABLE_ClausesInfo_44_67;
        MR_Word STATE_VARIABLE_ClausesInfo_45_68;
        MR_Word Var_71;

        hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", PredId_12, STATE_VARIABLE_ModuleInfo_0_2);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_16, &DeclaredPurity_38);
        hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(PredInfo0_16, &MaybePromisedPurity_39);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_16, &STATE_VARIABLE_ClausesInfo_35_58);
        hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses0_41, &ItemNumbers_42, STATE_VARIABLE_ClausesInfo_35_58, &STATE_VARIABLE_ClausesInfo_36_59);
        hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_36_59, &VarTypes0_43);
        hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_36_59, &VarSet0_44);
        {
          PurityInfo0_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2));
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 2) = ((MR_Box) (PredInfo0_16));
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 3) = ((MR_Box) (VarTypes0_43));
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 4) = ((MR_Box) (VarSet0_44));
          MR_hl_field(MR_mktag(0), PurityInfo0_45, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__purity__compute_purity_for_clauses_7_p_0(Clauses0_41, &Clauses_46, PredInfo0_16, (MR_Integer) 0, &ActualPurity_47, PurityInfo0_45, &PurityInfo_48);
        STATE_VARIABLE_PredInfo_42_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_48, (MR_Integer) 2))));
        VarTypes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_48, (MR_Integer) 3))));
        VarSet_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_48, (MR_Integer) 4))));
        GoalSpecs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PurityInfo_48, (MR_Integer) 5))));
        hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_53, STATE_VARIABLE_ClausesInfo_36_59, &STATE_VARIABLE_ClausesInfo_43_66);
        hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_54, STATE_VARIABLE_ClausesInfo_43_66, &STATE_VARIABLE_ClausesInfo_44_67);
        hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_46, &ClausesRep_56);
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_56, ItemNumbers_42, STATE_VARIABLE_ClausesInfo_44_67, &STATE_VARIABLE_ClausesInfo_45_68);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_45_68, STATE_VARIABLE_PredInfo_42_65, &PredInfo_18);
        check_hlds__purity__perform_pred_purity_checks_7_p_0(STATE_VARIABLE_ModuleInfo_0_2, PredId_12, PredInfo_18, ActualPurity_47, DeclaredPurity_38, MaybePromisedPurity_39, &PredSpecs_57);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_57, STATE_VARIABLE_Specs_0_4);
        STATE_VARIABLE_Specs_26_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalSpecs_55, Var_71);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_12, PredInfo_18, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_26_26;
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
  }
  else
  {
    MR_Word Clause0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Clauses0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Clause_17;
    MR_Word ClausePurity_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Purity_28_28;
    MR_Word * AddrClauses_31;

    check_hlds__purity__compute_purity_for_clause_6_p_0(Clause0_15, &Clause_17, PredInfo_3, &ClausePurity_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_4, ClausePurity_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_17));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrClauses_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
    }
    else
    {
      MR_Word Clause0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clauses0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
        HeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_33, 0) = ((MR_Box) (Clause_17));
        MR_hl_field(MR_mktag(1), HeadVar__2_33, 1) = NULL;
      }
      AddrClauses_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_33, (MR_Integer) 1)));
      *AddrOfHeadVar__2_32 = HeadVar__2_33;
      // direct tailcall eliminated
      ;
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word Goal0_12;
    MR_Word GoalExpr0_13;
    MR_Word GoalInfo0_14;
    MR_Word GoalExpr1_15;
    MR_Word BodyPurity0_16;
    MR_Word ApplicableProcIds_18;
    MR_Word ClausePurity_24;
    MR_Word GoalInfo1_25;
    MR_Word Goal1_26;
    MR_Word NeedToRequantify_27;
    MR_Word Goal_34;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word Var_47;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Unsigned packed_word_0;
    MR_Word Var_17;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;

    Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_7);
    GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 0))));
    GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 0))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 3))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 5))));
    {
      STATE_VARIABLE_Info_40_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 1) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 3) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 4) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 5) = ((MR_Box) (Var_54));
    }
    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_13, &GoalExpr1_15, GoalInfo0_14, &BodyPurity0_16, &Var_17, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42);
    ApplicableProcIds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) ApplicableProcIds_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplicableProcIds_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClauseProcIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableProcIds_18, (MR_Integer) 0))));
          MR_Word SortedClauseProcIds_20;
          MR_Word AllProcIds_21;

          mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ClauseProcIds_19, &SortedClauseProcIds_20);
          AllProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_9);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__purity_scalar_common_1[7]), ((MR_Box) (SortedClauseProcIds_20)), ((MR_Box) (AllProcIds_21)));
        }
        break;
    }
    if (!(succeeded))
    {
      {
        MR_Word GoalType_23;

        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_9, &GoalType_23);
        succeeded = (GoalType_23 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (!(succeeded))
      {
        MR_Word Markers_22;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_22);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, (MR_Integer) 17);
      }
    }
    if (succeeded)
      ClausePurity_24 = (MR_Integer) 0;
    else
      ClausePurity_24 = (MR_Integer) 2;
    *Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(BodyPurity0_16, ClausePurity_24);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_10, GoalInfo0_14, &GoalInfo1_25);
    {
      Goal1_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_26, 0) = ((MR_Box) (GoalExpr1_15));
      MR_hl_field(MR_mktag(0), Goal1_26, 1) = ((MR_Box) (GoalInfo1_25));
    }
    NeedToRequantify_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    switch (NeedToRequantify_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Goal_34 = Goal1_26;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_42_42;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ClausesInfo_28;
          MR_Word HeadVars_29;
          MR_Word VarTypes1_30;
          MR_Word VarSet1_31;
          MR_Word EmptyRttiVarmaps_32;
          MR_Word VarSet_35;
          MR_Word VarTypes_36;
          MR_Word Var_80;
          MR_Word Var_84;
          MR_Word Var_87;
          MR_Word _Warnings_33;
          MR_Word Var_37;
          MR_Unsigned packed_word_3;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_28);
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_28, &HeadVars_29);
          VarTypes1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
          VarSet1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_32);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_29, &_Warnings_33, Goal1_26, &Goal_34, VarSet1_31, &VarSet_35, VarTypes1_30, &VarTypes_36, EmptyRttiVarmaps_32, &Var_37);
          Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 0))));
          packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
          Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
          Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_39 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) (packed_word_3);
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_36));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarSet_35));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_87));
          }
        }
        break;
    }
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 0))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 2))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 3))));
    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_100));
    }
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_46 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word NotGoal0_47;
          MR_Word Goal1_48;
          MR_Word Var_84;

          hlds__hlds_goal__negate_goal_3_p_0(Goal0_46, GoalInfo_10, &NotGoal0_47);
          Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotGoal0_47, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 0);
          if (succeeded)
          {
            Goal1_48 = (MR_Word) ((MR_Word) (Var_84));
            {
              MR_Word Goal_50;

              check_hlds__purity__compute_goal_purity_6_p_0(Goal1_48, &Goal_50, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
              *GoalExpr_9 = (MR_Word) ((MR_Word) (Goal_50));
            }
          }
          else
          {
            MR_Word NotGoal1_51;

            check_hlds__purity__compute_goal_purity_6_p_0(NotGoal0_47, &NotGoal1_51, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            *GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotGoal1_51, (MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__purity__compute_unify_expr_purity_7_p_0(GoalExpr0_8, GoalExpr_9, GoalInfo_10, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
        break;
      case (MR_Integer) 2:
        check_hlds__purity__compute_plain_call_expr_purity_7_p_0(GoalExpr0_8, GoalExpr_9, GoalInfo_10, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));

              *GoalExpr_9 = GoalExpr0_8;
              switch (MR_tag((MR_Word) GenericCall0_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Purity_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall0_23, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
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
              *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));

              *Purity_11 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes_69);
              *ContainsTrace_12 = (MR_Integer) 1;
              *GoalExpr_9 = GoalExpr0_8;
              *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_16;

              switch (ConjType_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  check_hlds__purity__compute_parallel_goals_purity_8_p_0(Goals0_15, &Goals_16, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
                  break;
                case (MR_Integer) 0:
                  check_hlds__purity__compute_goals_purity_8_p_0(Goals0_15, &Goals_16, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word * AddrGoals_103;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
              }
              AddrGoals_103 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 1)));
              check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(Goals0_101, AddrGoals_103, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Canfail_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word * AddrCases_104;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Canfail_38));
                MR_hl_field(MR_mktag(3), base, 3) = NULL;
              }
              AddrCases_104 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 3)));
              check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(Cases0_39, AddrCases_104, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            }
            break;
          case (MR_Integer) 5:
            check_hlds__purity__compute_scope_expr_purity_7_p_0(GoalExpr0_8, GoalExpr_9, GoalInfo_10, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_59;
              MR_Word Purity1_60;
              MR_Word ContainsTrace1_61;
              MR_Word Then_62;
              MR_Word Purity2_63;
              MR_Word ContainsTrace2_64;
              MR_Word Else_65;
              MR_Word Purity3_66;
              MR_Word ContainsTrace3_67;
              MR_Word Purity12_68;
              MR_Word STATE_VARIABLE_Info_80_80;
              MR_Word STATE_VARIABLE_Info_81_81;

              check_hlds__purity__compute_goal_purity_6_p_0(Cond0_56, &Cond_59, &Purity1_60, &ContainsTrace1_61, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_80_80);
              check_hlds__purity__compute_goal_purity_6_p_0(Then0_57, &Then_62, &Purity2_63, &ContainsTrace2_64, STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_81_81);
              check_hlds__purity__compute_goal_purity_6_p_0(Else0_58, &Else_65, &Purity3_66, &ContainsTrace3_67, STATE_VARIABLE_Info_81_81, STATE_VARIABLE_Info_78);
              Purity12_68 = parse_tree__prog_data__worst_purity_2_f_0(Purity1_60, Purity2_63);
              *Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(Purity12_68, Purity3_66);
              succeeded = (ContainsTrace1_61 == (MR_Integer) 0);
              if (!(succeeded))
              {
                succeeded = (ContainsTrace2_64 == (MR_Integer) 0);
                if (!(succeeded))
                  succeeded = (ContainsTrace3_67 == (MR_Integer) 0);
              }
              if (succeeded)
                *ContainsTrace_12 = (MR_Integer) 0;
              else
                *ContainsTrace_12 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_59));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_62));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_65));
              }
            }
            break;
          case (MR_Integer) 7:
            check_hlds__purity__compute_shorthand_expr_purity_7_p_0(GoalExpr0_8, GoalExpr_9, GoalInfo_10, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_87,
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_87 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word STATE_VARIABLE_Purity_39_39;
      MR_Word STATE_VARIABLE_ContainsTrace_40_40;
      MR_Word GoalExpr0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0))));
      MR_Word GoalInfo0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1))));
      MR_Word GoalExpr_53;
      MR_Word GoalInfo_54;
      MR_Word STATE_VARIABLE_GoalInfo_10_61;
      MR_Word * AddrGoals_86;
      MR_Word HeadVar__2_88;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_87;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_51, &GoalExpr_53, GoalInfo0_52, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_52, &STATE_VARIABLE_GoalInfo_10_61);
      switch (GoalContainsTrace_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
          break;
      }
      {
        Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_53));
        MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_54));
      }
      switch (GoalPurity_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word GoalInfo0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1))));
            MR_Word Context_29;
            MR_Word Spec_30;
            MR_String PurityName_69;
            MR_Word Pieces_70;
            MR_Word Var_73;
            MR_Word Var_74;

            Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
            parse_tree__prog_out__purity_name_2_p_0(GoalPurity_25, &PurityName_69);
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (PurityName_69));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[30])));
            }
            {
              Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[66])));
              MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_73));
            }
            {
              Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Pieces_70));
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
        HeadVar__2_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_88, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), HeadVar__2_88, 1) = NULL;
      }
      AddrGoals_86 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_88, (MR_Integer) 1)));
      *AddrOfHeadVar__2_87 = HeadVar__2_88;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_19;
      next_value_of_AddrOfHeadVar__2_87 = AddrGoals_86;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_39_39;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_40_40;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_87 = next_value_of_AddrOfHeadVar__2_87;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_66 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Case0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_20;
      MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 0))));
      MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 1))));
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_18, (MR_Integer) 2))));
      MR_Word Goal_28;
      MR_Word GoalPurity_29;
      MR_Word GoalContainsTrace_30;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Purity_38_38;
      MR_Word STATE_VARIABLE_ContainsTrace_39_39;
      MR_Word GoalExpr0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 0))));
      MR_Word GoalInfo0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 1))));
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
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_60, &GoalInfo_53);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_60, &GoalInfo_53);
          break;
      }
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_28, 0) = ((MR_Box) (GoalExpr_52));
        MR_hl_field(MR_mktag(0), Goal_28, 1) = ((MR_Box) (GoalInfo_53));
      }
      {
        Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_20, 0) = ((MR_Box) (MainConsId_25));
        MR_hl_field(MR_mktag(0), Case_20, 1) = ((MR_Box) (OtherConsIds_26));
        MR_hl_field(MR_mktag(0), Case_20, 2) = ((MR_Box) (Goal_28));
      }
      STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_29, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_30, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_67, 0) = ((MR_Box) (Case_20));
        MR_hl_field(MR_mktag(1), HeadVar__2_67, 1) = NULL;
      }
      AddrCases_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_67, (MR_Integer) 1)));
      *AddrOfHeadVar__2_66 = HeadVar__2_67;
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_63 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word HeadGoal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailGoals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadGoal_24;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Purity_35_35;
      MR_Word STATE_VARIABLE_ContainsTrace_36_36;
      MR_Word GoalExpr0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 0))));
      MR_Word GoalInfo0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 1))));
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
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
          break;
      }
      {
        HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadGoal_24, 0) = ((MR_Box) (GoalExpr_49));
        MR_hl_field(MR_mktag(0), HeadGoal_24, 1) = ((MR_Box) (GoalInfo_50));
      }
      STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_64, 0) = ((MR_Box) (HeadGoal_24));
        MR_hl_field(MR_mktag(1), HeadVar__2_64, 1) = NULL;
      }
      AddrTailGoals_62 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_64, (MR_Integer) 1)));
      *AddrOfHeadVar__2_63 = HeadVar__2_64;
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Invariants_11 = STATE_VARIABLE_Invariants_0_10;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_ContainsTrace_7 = STATE_VARIABLE_ContainsTrace_0_6;
      *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
      *STATE_VARIABLE_RevMarkedSubGoals_3 = STATE_VARIABLE_RevMarkedSubGoals_0_2;
    }
    else
    {
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 0))));
      MR_Word GoalInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 1))));
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
      MR_Word STATE_VARIABLE_Purity_99_99;
      MR_Word STATE_VARIABLE_ContainsTrace_100_100;
      MR_Word STATE_VARIABLE_Invariants_101_101;
      MR_Word STATE_VARIABLE_Info_113_113;
      MR_Word STATE_VARIABLE_RevMarkedSubGoals_116_116;
      MR_Word XVarPrime_36;
      MR_Word ModePrime_38;
      MR_Word UnificationPrime_39;
      MR_Word UnifyContextPrime_40;
      MR_Word ConsIdPrime_41;
      MR_Word YVarsPrime_43;
      MR_Word Y_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Invariants_0_10;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_34)) == (MR_Integer) 1);
      if (succeeded)
      {
        XVarPrime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 0))));
        Y_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 1))));
        ModePrime_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 2))));
        UnificationPrime_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 3))));
        UnifyContextPrime_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Y_37)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_37, (MR_Integer) 0))));
          YVarsPrime_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_37, (MR_Integer) 2))));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      ModuleInfo_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
      PredInfo0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
      VarTypes0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
      VarSet0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
      check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(ModuleInfo_50, XVar_44, ConsId_48, YVars_49, Mode_45, Unification_46, UnifyContext_47, GoalInfo0_35, PredInfo0_51, &PredInfo_54, VarSet0_53, &VarSet_55, VarTypes0_52, &VarTypes_56, &Goal1_57, &IsPlainUnify_58);
      GoalExpr1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_57, (MR_Integer) 0))));
      GoalInfo1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_57, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) IsPlainUnify_58)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(IsPlainUnify_58)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Info_94_94;
                MR_Word Goal_128;
                MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
                MR_Word Var_158 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_159 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
                MR_Word Var_165 = Var_157;
                MR_Word Var_166 = Var_158;
                MR_Word Var_167 = Var_159;
                MR_Word Var_168 = Var_160;
                MR_Word Var_170 = VarTypes_56;
                MR_Word Var_172 = Var_164;

                {
                  STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_165));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = (MR_Box) (((((MR_Unsigned) (Var_166) << 2)) | (((((MR_Unsigned) (Var_167) << 1)) | (MR_Unsigned) (Var_168)))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (PredInfo_54));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_170));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (VarSet_55));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_172));
                }
                succeeded = ((MR_tag((MR_Word) GoalExpr1_59)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_Word UnifySpecs_122;
                  MR_Word GoalInfo_123;
                  MR_Word STATE_VARIABLE_GoalInfo_10_189;

                  check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_94_94, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_122);
                  check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_122, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_113_113);
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_60, &STATE_VARIABLE_GoalInfo_10_189);
                  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_189, &GoalInfo_123);
                  {
                    Goal_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal_128, 0) = ((MR_Box) (GoalExpr1_59));
                    MR_hl_field(MR_mktag(0), Goal_128, 1) = ((MR_Box) (GoalInfo_123));
                  }
                  STATE_VARIABLE_ContainsTrace_100_100 = STATE_VARIABLE_ContainsTrace_0_6;
                  STATE_VARIABLE_Purity_99_99 = STATE_VARIABLE_Purity_0_4;
                }
                else
                {
                  MR_Word GoalPurity_75;
                  MR_Word GoalContainsTrace_76;

                  check_hlds__purity__compute_goal_purity_6_p_0(Goal1_57, &Goal_128, &GoalPurity_75, &GoalContainsTrace_76, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_113_113);
                  STATE_VARIABLE_Purity_99_99 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_75, STATE_VARIABLE_Purity_0_4);
                  STATE_VARIABLE_ContainsTrace_100_100 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_76, STATE_VARIABLE_ContainsTrace_0_6);
                }
                {
                  MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 0) = ((MR_Box) (Goal_128));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Invariants_101_101 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word UnifySpecs_66;
                MR_Word GoalInfo_67;
                MR_Word Goal_68;
                MR_Word STATE_VARIABLE_GoalInfo_10_199;

                check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_0_8, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_66);
                check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_66, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_113_113);
                hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_60, &STATE_VARIABLE_GoalInfo_10_199);
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_199, &GoalInfo_67);
                {
                  Goal_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_68, 0) = ((MR_Box) (GoalExpr1_59));
                  MR_hl_field(MR_mktag(0), Goal_68, 1) = ((MR_Box) (GoalInfo_67));
                }
                {
                  MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 0) = ((MR_Box) (Goal_68));
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(MR_mktag(0), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Purity_99_99 = STATE_VARIABLE_Purity_0_4;
                STATE_VARIABLE_ContainsTrace_100_100 = STATE_VARIABLE_ContainsTrace_0_6;
                STATE_VARIABLE_Invariants_101_101 = STATE_VARIABLE_Invariants_0_10;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Spec_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IsPlainUnify_58, (MR_Integer) 0))));

            check_hlds__purity__purity_info_add_message_3_p_0(Spec_77, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_113_113);
            {
              MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 0) = ((MR_Box) (Goal1_57));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 1) = ((MR_Box) (XVar_44));
              MR_hl_field(MR_mktag(1), MarkedSubGoal_69, 2) = ((MR_Box) (YVars_49));
            }
            STATE_VARIABLE_Invariants_101_101 = (MR_Integer) 1;
            STATE_VARIABLE_Purity_99_99 = STATE_VARIABLE_Purity_0_4;
            STATE_VARIABLE_ContainsTrace_100_100 = STATE_VARIABLE_ContainsTrace_0_6;
          }
          break;
      }
      {
        STATE_VARIABLE_RevMarkedSubGoals_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMarkedSubGoals_116_116, 0) = ((MR_Box) (MarkedSubGoal_69));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMarkedSubGoals_116_116, 1) = ((MR_Box) (STATE_VARIABLE_RevMarkedSubGoals_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_28;
      next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2 = STATE_VARIABLE_RevMarkedSubGoals_116_116;
      next_value_of_STATE_VARIABLE_Purity_0_4 = STATE_VARIABLE_Purity_99_99;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_6 = STATE_VARIABLE_ContainsTrace_100_100;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_113_113;
      next_value_of_STATE_VARIABLE_Invariants_0_10 = STATE_VARIABLE_Invariants_101_101;
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
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_14;
    MR_Word GoalInfo_15;
    MR_Word STATE_VARIABLE_GoalInfo_10_24;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_24);
    switch (*ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        break;
    }
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_8, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(MR_mktag(0), Goal_8, 1) = ((MR_Box) (GoalInfo_15));
    }
    *AddrOfGoal_29 = Goal_8;
  }
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_9;

    check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_9;
    MR_Word conv0_STATE_VARIABLE_Info_31;

    check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_9, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_31);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_9));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_31));
  }
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;
    MR_Word ShortHand0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ShortHand0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_shorthand_expr_purity\'/7", (MR_String) "bi_implication");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalType_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Outer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 1))));
          MR_Word Inner_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 2))));
          MR_Word MaybeOutputVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 3))));
          MR_Word MainGoal0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 4))));
          MR_Word OrElseGoals0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 5))));
          MR_Word OrElseInners_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_14, (MR_Integer) 6))));
          MR_Word RunPostTypecheck_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word MainGoal1_36;
          MR_Word OrElseGoals1_37;
          MR_Word MainGoal_40;
          MR_Word Purity1_41;
          MR_Word ContainsTrace1_42;
          MR_Word OrElseGoals_43;
          MR_Word Purity2_44;
          MR_Word ContainsTrace2_45;
          MR_Word ShortHand_46;
          MR_Word STATE_VARIABLE_Info_70_70;
          MR_Word STATE_VARIABLE_Info_71_71;
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
          MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 4))));

          switch (RunPostTypecheck_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MainGoal1_36 = MainGoal0_19;
                OrElseGoals1_37 = OrElseGoals0_20;
                STATE_VARIABLE_Info_70_70 = STATE_VARIABLE_Info_0_53;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word OuterDI_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_16, (MR_Integer) 0))));
                MR_Word OuterUO_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_16, (MR_Integer) 1))));
                MR_Word Context_27;
                MR_Word OuterDIType_28;
                MR_Word OuterDITypeSpecs_29;
                MR_Word OuterUOType_30;
                MR_Word OuterUOTypeSpecs_31;
                MR_Word OuterMismatchSpecs_32;
                MR_Word OuterTypeSpecs_33;
                MR_Word Var_60;

                Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
                check_hlds__purity__check_outer_var_type_6_p_0(Context_27, Var_80, Var_81, OuterDI_25, &OuterDIType_28, &OuterDITypeSpecs_29);
                check_hlds__purity__check_outer_var_type_6_p_0(Context_27, Var_80, Var_81, OuterUO_26, &OuterUOType_30, &OuterUOTypeSpecs_31);
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, OuterUOType_30);
                if (succeeded)
                  OuterMismatchSpecs_32 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word Var_58;

                  Var_58 = check_hlds__purity__mismatched_outer_var_types_1_f_0(Context_27);
                  {
                    OuterMismatchSpecs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), OuterMismatchSpecs_32, 0) = ((MR_Box) (Var_58));
                    MR_hl_field(MR_mktag(1), OuterMismatchSpecs_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OuterUOTypeSpecs_31, OuterMismatchSpecs_32);
                OuterTypeSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OuterDITypeSpecs_29, Var_60);
                if ((OuterTypeSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word AtomicGoalsAndInners_38;
                  MR_Word AllAtomicGoals1_39;
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_63;
                  MR_Word STATE_VARIABLE_Info_64_64;
                  MR_Box conv2_STATE_VARIABLE_Info_64_64;
                  MR_Word Var_97;
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word Var_103;
                  MR_Word Var_104;
                  MR_Unsigned packed_word_2;

                  {
                    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MainGoal0_19));
                    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (OrElseGoals0_20));
                  }
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Inner_17));
                    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (OrElseInners_21));
                  }
                  AtomicGoalsAndInners_38 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_61, Var_62);
                  {
                    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (check_hlds__purity__compute_shorthand_expr_purity_7_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Outer_16));
                  }
                  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__purity_scalar_common_2[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0), Var_63, AtomicGoalsAndInners_38, &AllAtomicGoals1_39, ((MR_Box) (STATE_VARIABLE_Info_0_53)), &conv2_STATE_VARIABLE_Info_64_64);
                  STATE_VARIABLE_Info_64_64 = ((MR_Word) (conv2_STATE_VARIABLE_Info_64_64));
                  if ((AllAtomicGoals1_39 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_shorthand_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
                      return;
                    }
                  else
                  {
                    MainGoal1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals1_39, (MR_Integer) 0))));
                    OrElseGoals1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals1_39, (MR_Integer) 1))));
                  }
                  Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 0))));
                  packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 1)));
                  Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 2))));
                  Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 3))));
                  Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 4))));
                  Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, (MR_Integer) 5))));
                  {
                    STATE_VARIABLE_Info_70_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 0) = ((MR_Box) (Var_97));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 1) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 2) = ((MR_Box) (Var_101));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 3) = ((MR_Box) (Var_102));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 4) = ((MR_Box) (Var_103));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, 5) = ((MR_Box) (Var_104));
                  }
                }
                else
                {
                  MR_Box conv4_STATE_VARIABLE_Info_70_70;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0), (MR_Word) (&check_hlds__purity_scalar_common_2[2]), OuterTypeSpecs_33, ((MR_Box) (STATE_VARIABLE_Info_0_53)), &conv4_STATE_VARIABLE_Info_70_70);
                  STATE_VARIABLE_Info_70_70 = ((MR_Word) (conv4_STATE_VARIABLE_Info_70_70));
                  MainGoal1_36 = MainGoal0_19;
                  OrElseGoals1_37 = OrElseGoals0_20;
                }
              }
              break;
          }
          check_hlds__purity__compute_goal_purity_6_p_0(MainGoal1_36, &MainGoal_40, &Purity1_41, &ContainsTrace1_42, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_71_71);
          check_hlds__purity__compute_goals_purity_8_p_0(OrElseGoals1_37, &OrElseGoals_43, (MR_Integer) 0, &Purity2_44, (MR_Integer) 1, &ContainsTrace2_45, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_54);
          *Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(Purity1_41, Purity2_44);
          succeeded = (ContainsTrace1_42 == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = (ContainsTrace2_45 == (MR_Integer) 0);
          if (succeeded)
            *ContainsTrace_12 = (MR_Integer) 0;
          else
            *ContainsTrace_12 = (MR_Integer) 1;
          {
            ShortHand_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ShortHand_46, 0) = (MR_Box) ((MR_Unsigned) (GoalType_15));
            MR_hl_field(MR_mktag(1), ShortHand_46, 1) = ((MR_Box) (Outer_16));
            MR_hl_field(MR_mktag(1), ShortHand_46, 2) = ((MR_Box) (Inner_17));
            MR_hl_field(MR_mktag(1), ShortHand_46, 3) = ((MR_Box) (MaybeOutputVars_18));
            MR_hl_field(MR_mktag(1), ShortHand_46, 4) = ((MR_Box) (MainGoal_40));
            MR_hl_field(MR_mktag(1), ShortHand_46, 5) = ((MR_Box) (OrElseGoals_43));
            MR_hl_field(MR_mktag(1), ShortHand_46, 6) = ((MR_Box) (OrElseInners_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_46));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeIO_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_14, (MR_Integer) 0))));
          MR_Word ResultVar_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_14, (MR_Integer) 1))));
          MR_Word SubGoal0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_14, (MR_Integer) 2))));
          MR_Word ShortHand_75;
          MR_Word * AddrSubGoal_119;

          {
            ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ShortHand_75, 0) = ((MR_Box) (MaybeIO_47));
            MR_hl_field(MR_mktag(2), ShortHand_75, 1) = ((MR_Box) (ResultVar_48));
            MR_hl_field(MR_mktag(2), ShortHand_75, 2) = NULL;
          }
          AddrSubGoal_119 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), ShortHand_75, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_75));
          }
          check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_49, AddrSubGoal_119, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__compute_scope_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__purity__compute_scope_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60)
{
  {
    MR_bool succeeded;
    MR_Word Reason0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
    MR_Word SubGoal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Reason0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * AddrSubGoal_120;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
            MR_hl_field(MR_mktag(3), base, 2) = NULL;
          }
          AddrSubGoal_120 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2)));
          check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_15, AddrSubGoal_120, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_17;
              MR_Word Var_18;

              *Purity_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_14, (MR_Integer) 1))) & (MR_Integer) 3);
              check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_15, &SubGoal_17, &Var_18, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_17));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word * AddrSubGoal_120;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
                MR_hl_field(MR_mktag(3), base, 2) = NULL;
              }
              AddrSubGoal_120 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2)));
              check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(SubGoal0_15, AddrSubGoal_120, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TermVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_14, (MR_Integer) 1))));
              MR_Word Kind0_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_14, (MR_Integer) 2))) & (MR_Integer) 3);

              switch (Kind0_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalExpr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_15, (MR_Integer) 0))));
                    MR_Word SubGoalInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_15, (MR_Integer) 1))));
                    MR_Word SubGoals0_24;
                    MR_Word PostTypeCheck_25;
                    MR_Word SubGoals0Prime_23;
                    MR_Word Var_69;

                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_21, (MR_Integer) 1))) & (MR_Integer) 1);
                      SubGoals0Prime_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_21, (MR_Integer) 2))));
                      succeeded = (Var_69 == (MR_Integer) 0);
                    }
                    if (succeeded)
                      SubGoals0_24 = SubGoals0Prime_23;
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_scope_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
                        return;
                      }
                    PostTypeCheck_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                    switch (PostTypeCheck_25) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Specs_35;

                          *GoalExpr_9 = GoalExpr0_8;
                          check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(SubGoals0_24, STATE_VARIABLE_Info_0_59, (MR_Word) ((MR_Unsigned) 0U), &Specs_35);
                          check_hlds__purity__purity_info_add_messages_3_p_0(Specs_35, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
                          *Purity_11 = (MR_Integer) 0;
                          *ContainsTrace_12 = (MR_Integer) 1;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word RevMarkedSubGoals_26;
                          MR_Word Invariants_27;

                          check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(SubGoals0_24, (MR_Word) ((MR_Unsigned) 0U), &RevMarkedSubGoals_26, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60, (MR_Integer) 0, &Invariants_27);
                          switch (Invariants_27) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word ConstructOrderMarkedSubGoals_32;
                                MR_Word Order_33;
                                MR_Word SubGoal_83;

                                switch (Kind0_20) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    {
                                      mercury__list__reverse_2_p_0((MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0), RevMarkedSubGoals_26, &ConstructOrderMarkedSubGoals_32);
                                      Order_33 = (MR_Integer) 0;
                                    }
                                    break;
                                  case (MR_Integer) 0:
                                    {
                                      ConstructOrderMarkedSubGoals_32 = RevMarkedSubGoals_26;
                                      Order_33 = (MR_Integer) 1;
                                    }
                                    break;
                                }
                                hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(GoalInfo_10, SubGoalInfo0_22, ConstructOrderMarkedSubGoals_32, Order_33, &SubGoal_83);
                                *GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_83, (MR_Integer) 0))));
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                MR_Word RevSubGoals_28;
                                MR_Word SubGoals_29;
                                MR_Word SubGoalExpr_30;
                                MR_Word SubGoalInfo_31;
                                MR_Word SubGoal_82;

                                mercury__list__map_3_p_0((MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__purity_scalar_common_2[1]), RevMarkedSubGoals_26, &RevSubGoals_28);
                                mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevSubGoals_28, &SubGoals_29);
                                {
                                  SubGoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), SubGoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                  MR_hl_field(MR_mktag(3), SubGoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(3), SubGoalExpr_30, 2) = ((MR_Box) (SubGoals_29));
                                }
                                check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*Purity_11, *ContainsTrace_12, SubGoalInfo0_22, &SubGoalInfo_31);
                                {
                                  SubGoal_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), SubGoal_82, 0) = ((MR_Box) (SubGoalExpr_30));
                                  MR_hl_field(MR_mktag(0), SubGoal_82, 1) = ((MR_Box) (SubGoalInfo_31));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  *GoalExpr_9 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_82));
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
                    MR_Word HaveConvertedUnify_36;
                    MR_Word STATE_VARIABLE_Info_65_65;
                    MR_Word SubGoal_88;
                    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
                    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 2))));
                    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 3))));
                    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 4))));
                    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 5))));
                    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 1)));

                    {
                      STATE_VARIABLE_Info_65_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 0) = ((MR_Box) (Var_100));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 1) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 2) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 3) = ((MR_Box) (Var_105));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 4) = ((MR_Box) (Var_106));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 5) = ((MR_Box) (Var_107));
                    }
                    check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_15, &SubGoal_88, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_60);
                    HaveConvertedUnify_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_60, (MR_Integer) 1))) & (MR_Integer) 1);
                    switch (HaveConvertedUnify_36) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Reason_37;

                          {
                            Reason_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Reason_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(MR_mktag(3), Reason_37, 1) = ((MR_Box) (TermVar_19));
                            MR_hl_field(MR_mktag(3), Reason_37, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_37));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_88));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_88));
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
              MR_Word SubGoal_92;
              MR_Word _SubPurity_54;
              MR_Word Var_55;

              check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_15, &SubGoal_92, &_SubPurity_54, &Var_55, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_92));
              }
              *Purity_11 = (MR_Integer) 0;
              *ContainsTrace_12 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_scope_expr_purity\'/7", (MR_String) "loop_control");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__compute_unify_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_bool succeeded;
    MR_Word LHSVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
    MR_Word RHS0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
    MR_Word Mode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
    MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
    MR_Word UnifyContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) RHS0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *GoalExpr_9 = GoalExpr0_8;
          *Purity_11 = (MR_Integer) 0;
          *ContainsTrace_12 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 0))));
          MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 2))));
          MR_Word RunPostTypecheck_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word Goal1_51;
          MR_Word Goal_60;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 0))));
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 2))));
          MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 3))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 4))));
          MR_Word Var_71;

          switch (RunPostTypecheck_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Goal1_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal1_51, 0) = ((MR_Box) (GoalExpr0_8));
                  MR_hl_field(MR_mktag(0), Goal1_51, 1) = ((MR_Box) (GoalInfo_10));
                }
                STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_0_63;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word PredInfo_48;
                MR_Word VarSet_49;
                MR_Word VarTypes_50;
                MR_Word IsPlainUnify_52;
                MR_Word STATE_VARIABLE_Info_67_67;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Word Var_130;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Var_140;

                check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(Var_82, LHSVar_14, ConsId_40, Args_42, Mode_16, Unification_17, UnifyContext_18, GoalInfo_10, Var_85, &PredInfo_48, Var_87, &VarSet_49, Var_86, &VarTypes_50, &Goal1_51, &IsPlainUnify_52);
                Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 0))));
                Var_118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                Var_119 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                Var_120 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 1))) & (MR_Integer) 1);
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_63, (MR_Integer) 5))));
                Var_125 = Var_117;
                Var_126 = Var_118;
                Var_127 = Var_119;
                Var_128 = Var_120;
                Var_130 = VarTypes_50;
                Var_132 = Var_124;
                Var_133 = Var_125;
                Var_134 = Var_126;
                Var_135 = Var_127;
                Var_138 = Var_130;
                Var_139 = VarSet_49;
                Var_140 = Var_132;
                {
                  STATE_VARIABLE_Info_67_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 1) = (MR_Box) (((((MR_Unsigned) (Var_134) << 2)) | (((((MR_Unsigned) (Var_135) << 1)) | (MR_Unsigned) (Var_128)))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 2) = ((MR_Box) (PredInfo_48));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 3) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 4) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 5) = ((MR_Box) (Var_140));
                }
                switch (MR_tag((MR_Word) IsPlainUnify_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(IsPlainUnify_52)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_69_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 0) = ((MR_Box) (Var_133));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 1) = (MR_Box) (((((MR_Unsigned) (Var_134) << 2)) | (((((MR_Unsigned) (Var_135) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 2) = ((MR_Box) (PredInfo_48));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 3) = ((MR_Box) (Var_138));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 4) = ((MR_Box) (Var_139));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 5) = ((MR_Box) (Var_140));
                        }
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_67_67;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Spec_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IsPlainUnify_52, (MR_Integer) 0))));

                      check_hlds__purity__purity_info_add_message_3_p_0(Spec_77, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
                    }
                    break;
                }
              }
              break;
          }
          Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_51, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word UnifySpecs_59;

            check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_69_69, GoalInfo_10, LHSVar_14, ConsId_40, Args_42, &UnifySpecs_59);
            check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_59, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_64);
            *Purity_11 = (MR_Integer) 0;
            *ContainsTrace_12 = (MR_Integer) 1;
            Goal_60 = Goal1_51;
          }
          else
            check_hlds__purity__compute_goal_purity_6_p_0(Goal1_51, &Goal_60, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_64);
          *GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_60, (MR_Integer) 0))));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LambdaPurity_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
          MR_Word LambdaNonLocals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 2))));
          MR_Word LambdaQuantVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 3))));
          MR_Word LambdaModes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 4))));
          MR_Word LambdaDetism_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word LambdaGoal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 6))));
          MR_Word LambdaGoalExpr0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_27, (MR_Integer) 0))));
          MR_Word LambdaGoalInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_27, (MR_Integer) 1))));
          MR_Word LambdaGoalExpr_30;
          MR_Word GoalPurity_31;
          MR_Word LambdaGoal_33;
          MR_Word RHS_34;
          MR_Word ClosureSpecs_35;
          MR_Word DeclaredPurity_36;
          MR_Word STATE_VARIABLE_Info_74_74;
          MR_Word STATE_VARIABLE_Info_75_75;
          MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0)));
          MR_Word Var_32;

          check_hlds__purity__compute_expr_purity_7_p_0(LambdaGoalExpr0_28, &LambdaGoalExpr_30, LambdaGoalInfo0_29, &GoalPurity_31, &Var_32, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_74_74);
          {
            LambdaGoal_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaGoal_33, 0) = ((MR_Box) (LambdaGoalExpr_30));
            MR_hl_field(MR_mktag(0), LambdaGoal_33, 1) = ((MR_Box) (LambdaGoalInfo0_29));
          }
          {
            RHS_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RHS_34, 0) = (MR_Box) (packed_word_3);
            MR_hl_field(MR_mktag(2), RHS_34, 1) = NULL;
            MR_hl_field(MR_mktag(2), RHS_34, 2) = ((MR_Box) (LambdaNonLocals_23));
            MR_hl_field(MR_mktag(2), RHS_34, 3) = ((MR_Box) (LambdaQuantVars_24));
            MR_hl_field(MR_mktag(2), RHS_34, 4) = ((MR_Box) (LambdaModes_25));
            MR_hl_field(MR_mktag(2), RHS_34, 5) = (MR_Box) ((MR_Unsigned) (LambdaDetism_26));
            MR_hl_field(MR_mktag(2), RHS_34, 6) = ((MR_Box) (LambdaGoal_33));
          }
          check_hlds__purity__check_closure_purity_4_p_0(GoalInfo_10, LambdaPurity_19, GoalPurity_31, &ClosureSpecs_35);
          check_hlds__purity__purity_info_add_messages_3_p_0(ClosureSpecs_35, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_75_75);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHSVar_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_34));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_16));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_17));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_18));
          }
          DeclaredPurity_36 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
          switch (DeclaredPurity_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                MR_Word Context_37;
                MR_Word Spec_38;

                Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
                Spec_38 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_37, DeclaredPurity_36);
                check_hlds__purity__purity_info_add_message_3_p_0(Spec_38, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_64);
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_75_75;
              break;
          }
          *Purity_11 = (MR_Integer) 0;
          *ContainsTrace_12 = (MR_Integer) 1;
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
    *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
  }
  else
  {
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_20;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Purity_39_39;
    MR_Word STATE_VARIABLE_ContainsTrace_40_40;
    MR_Word GoalExpr0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 0))));
    MR_Word GoalInfo0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1))));
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;
    MR_Word STATE_VARIABLE_GoalInfo_10_61;
    MR_Word * AddrGoals_86;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_51, &GoalExpr_53, GoalInfo0_52, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_52, &STATE_VARIABLE_GoalInfo_10_61);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_61, &GoalInfo_54);
        break;
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_53));
      MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_54));
    }
    switch (GoalPurity_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word GoalInfo0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_18, (MR_Integer) 1))));
          MR_Word Context_29;
          MR_Word Spec_30;
          MR_String PurityName_69;
          MR_Word Pieces_70;
          MR_Word Var_73;
          MR_Word Var_74;

          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
          parse_tree__prog_out__purity_name_2_p_0(GoalPurity_25, &PurityName_69);
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (PurityName_69));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[30])));
          }
          {
            Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[66])));
            MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_73));
          }
          {
            Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) (Context_29));
            MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Pieces_70));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrGoals_86 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(Goals0_19, AddrGoals_86, STATE_VARIABLE_Purity_39_39, STATE_VARIABLE_Purity_4, STATE_VARIABLE_ContainsTrace_40_40, STATE_VARIABLE_ContainsTrace_6, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_8);
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
    *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
  }
  else
  {
    MR_Word HeadGoal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailGoals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadGoal_24;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Purity_35_35;
    MR_Word STATE_VARIABLE_ContainsTrace_36_36;
    MR_Word GoalExpr0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 0))));
    MR_Word GoalInfo0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal0_18, (MR_Integer) 1))));
    MR_Word GoalExpr_49;
    MR_Word GoalInfo_50;
    MR_Word STATE_VARIABLE_GoalInfo_10_57;
    MR_Word * AddrTailGoals_62;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_47, &GoalExpr_49, GoalInfo0_48, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_34_34);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_48, &STATE_VARIABLE_GoalInfo_10_57);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_57, &GoalInfo_50);
        break;
    }
    {
      HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadGoal_24, 0) = ((MR_Box) (GoalExpr_49));
      MR_hl_field(MR_mktag(0), HeadGoal_24, 1) = ((MR_Box) (GoalInfo_50));
    }
    STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
    STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTailGoals_62 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
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
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_14;
    MR_Word GoalInfo_15;
    MR_Word STATE_VARIABLE_GoalInfo_10_24;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_24);
    switch (*ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_24, &GoalInfo_15);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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

    {
      Spec_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(1), Spec_4, 2) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(1), Spec_4, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[34])));
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
      *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Spec_13;
      MR_Word Pieces_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_String Var_28;

      Var_28 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, Var_10);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (Var_28));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[32])));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Pieces_23));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
      MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
      MR_Word XVar_23;
      MR_Word ConsId_24;
      MR_Word YVars_25;
      MR_Word UnifySpecs_26;
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word XVarPrime_15;
      MR_Word ConsIdPrime_20;
      MR_Word YVarsPrime_22;
      MR_Word Y_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        XVarPrime_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 0))));
        Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Y_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_16, (MR_Integer) 0))));
          YVarsPrime_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_16, (MR_Integer) 2))));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      check_hlds__purity__check_var_functor_unify_purity_6_p_0(Info_2, GoalInfo0_14, XVar_23, ConsId_24, YVars_25, &UnifySpecs_26);
      STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnifySpecs_26, STATE_VARIABLE_Specs_0_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_10;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
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
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_10, STATE_VARIABLE_GoalInfo_9);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_10, STATE_VARIABLE_GoalInfo_9);
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  if ((Specs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  else
  {
    MR_Word Msgs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    MR_Word Msgs_9;
    MR_Word Var_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Unsigned packed_word_1;

    Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_4, Msgs0_8);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_9));
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
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;

      Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_5);
      parse_tree__prog_out__purity_name_2_p_0(ActualPurity_7, &ActualPurityName_16);
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (ActualPurityName_16));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[19])));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Pieces_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
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
    MR_Word VarTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
    MR_Word TypeOfVar_14;
    MR_Word PredInfo_15;
    MR_Word CallerMarkers_16;
    MR_Word Context_17;
    MR_Word ClosureSpecs_34;
    MR_Word DeclaredPurity_35;
    MR_Word PName_18;
    MR_Word TypePurity_21;
    MR_Word PredOrFunc_22;
    MR_Word VarArgTypes_24;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_13, Var_9, &TypeOfVar_14);
    PredInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &CallerMarkers_16);
    Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      PName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
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
      MR_Word CalleePredId_31;
      MR_Word Var_37;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_15, &TVarSet_25);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_15, &ExistQTVars_26);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_15, &ExternalTypeParams_27);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_13, Args_11, &ArgTypes0_28);
      mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_28, VarArgTypes_24, &PredArgTypes_29);
      ModuleInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
      Var_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(CallerMarkers_16);
      succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(Var_37, PName_18, PredOrFunc_22, TVarSet_25, ExistQTVars_26, PredArgTypes_29, ExternalTypeParams_27, ModuleInfo_30, Context_17, &CalleePredId_31);
      if (succeeded)
      {
        MR_Word CalleePredInfo_32;
        MR_Word CalleePurity_33;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, CalleePredId_31, &CalleePredInfo_32);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(CalleePredInfo_32, &CalleePurity_33);
        succeeded = parse_tree__prog_data__less_pure_2_p_0(CalleePurity_33, TypePurity_21);
        if (succeeded)
        {
          MR_Word Context_65;
          MR_Word Spec_66;
          MR_String ActualPurityName_72;
          MR_Word Pieces_73;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_84;

          Context_65 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          parse_tree__prog_out__purity_name_2_p_0(CalleePurity_33, &ActualPurityName_72);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (ActualPurityName_72));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[19])));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[64])));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[63])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
          }
          {
            Pieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[62])));
            MR_hl_field(MR_mktag(1), Pieces_73, 1) = ((MR_Box) (Var_76));
          }
          {
            Spec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_66, 2) = ((MR_Box) (Context_65));
            MR_hl_field(MR_mktag(1), Spec_66, 3) = ((MR_Box) (Pieces_73));
          }
          {
            ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ClosureSpecs_34, 0) = ((MR_Box) (Spec_66));
            MR_hl_field(MR_mktag(1), ClosureSpecs_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
          ClosureSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        ClosureSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      ClosureSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
    DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_8);
    switch (DeclaredPurity_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(CallerMarkers_16, (MR_Integer) 23);
          if (succeeded)
            *Specs_12 = ClosureSpecs_34;
          else
          {
            MR_Word Spec_36;

            Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_17, DeclaredPurity_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
  MR_Word Context_4,
  MR_Word Purity_5)
{
  {
    MR_Word Spec_6;
    MR_String PurityName_7;
    MR_Word Pieces_8;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_15;

    parse_tree__prog_out__purity_name_2_p_0(Purity_5, &PurityName_7);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_15, 0) = ((MR_Box) (PurityName_7));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[6])));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_11));
    }
    {
      Spec_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(1), Spec_6, 2) = ((MR_Box) (Context_4));
      MR_hl_field(MR_mktag(1), Spec_6, 3) = ((MR_Box) (Pieces_8));
    }
    return Spec_6;
  }
}

static void MR_CALL 
check_hlds__purity__compute_plain_call_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word PredId0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0))));
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1))));
    MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2))));
    MR_Word Status_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word MaybeUnifyContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4))));
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5))));
    MR_Word RunPostTypecheck_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word PredInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
    MR_Word ModuleInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
    MR_Word CallContext_23;
    MR_Word PredId_24;
    MR_Word DeclaredPurity_28;

    CallContext_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
    switch (RunPostTypecheck_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          PredId_24 = PredId0_14;
          *GoalExpr_9 = GoalExpr0_8;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word SymName_25;
          MR_Word Var_90;
          MR_Word Var_32;
          MR_String Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_70;

          Var_90 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId0_14, Var_90);
          if (succeeded)
          {
            MR_Word TVarSet_80;
            MR_Word ExistQVars_81;
            MR_Word ExternalTypeParams_82;
            MR_Word Markers_83;
            MR_Word ClausesInfo_84;
            MR_Word VarTypes_85;
            MR_Word ArgTypes_86;

            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_80);
            hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_21, &ExistQVars_81);
            hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_21, &ExternalTypeParams_82);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_83);
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_21, &ClausesInfo_84);
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_84, &VarTypes_85);
            hlds__vartypes__lookup_var_types_3_p_0(VarTypes_85, ArgVars_16, &ArgTypes_86);
            hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_22, Markers_83, TVarSet_80, ExistQVars_81, ArgTypes_86, ExternalTypeParams_82, CallContext_23, SymName0_19, &SymName_25, &PredId_24);
          }
          else
          {
            MR_Word PredInfo_87;
            MR_Word PredModule_88;
            MR_String PredBaseName_89;

            PredId_24 = PredId0_14;
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_22, PredId_24, &PredInfo_87);
            PredModule_88 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_87);
            PredBaseName_89 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_87);
            {
              SymName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SymName_25, 0) = ((MR_Box) (PredModule_88));
              MR_hl_field(MR_mktag(1), SymName_25, 1) = ((MR_Box) (PredBaseName_89));
            }
          }
          succeeded = ((MR_tag((MR_Word) SymName_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_25, (MR_Integer) 0))));
            Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_25, (MR_Integer) 1))));
            Var_70 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_32, Var_70);
            if (succeeded)
            {
              succeeded = (strcmp(Var_33, (MR_String) "unsafe_type_cast") == 0);
              if (succeeded)
              {
                succeeded = (ArgVars_16 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_16, (MR_Integer) 1))));
                  succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
                    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;

            Var_42 = parse_tree__prog_mode__in_mode_0_f_0();
            Var_44 = parse_tree__prog_mode__out_mode_0_f_0();
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[0])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgVars_16));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_24));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_15));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_16));
              MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Status_17));
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext_18));
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName_25));
            }
        }
        break;
    }
    DeclaredPurity_28 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
    check_hlds__purity__perform_goal_purity_checks_6_p_0(CallContext_23, PredId_24, DeclaredPurity_28, Purity_11, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    *ContainsTrace_12 = (MR_Integer) 1;
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
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word PredInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
    MR_Word CalleePredInfo_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_8, &CalleePredInfo_14);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(CalleePredInfo_14, ActualPurity_10);
    succeeded = (*ActualPurity_10 == DeclaredPurity_9);
    if (succeeded)
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    else
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_13);
      if (succeeded)
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      else
      {
        succeeded = parse_tree__prog_data__less_pure_2_p_0(*ActualPurity_10, DeclaredPurity_9);
        if (succeeded)
        {
          MR_Word Spec_15;
          MR_Word PredInfo_44;
          MR_Word PredOrFunc_45;
          MR_Word Purity_46;
          MR_String PurityName_47;
          MR_Word PredPieces_48;
          MR_Word Pieces1_49;
          MR_Word Pieces2_50;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_58;
          MR_Word Var_90;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_8, &PredInfo_44);
          PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_44);
          hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_44, &Purity_46);
          parse_tree__prog_out__purity_name_2_p_0(Purity_46, &PurityName_47);
          PredPieces_48 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_12, (MR_Integer) 0, PredId_8);
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (PurityName_47));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
          }
          Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_48, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[9])));
          Pieces1_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, Var_58);
          switch (PredOrFunc_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_67;
                MR_Word Var_70;
                MR_Word Var_71;

                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (PurityName_47));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[23])));
                }
                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[58])));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
                }
                {
                  Pieces2_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces2_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), Pieces2_50, 1) = ((MR_Box) (Var_67));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_80;
                MR_Word Var_81;

                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (PurityName_47));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[23])));
                }
                {
                  Pieces2_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces2_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[59])));
                  MR_hl_field(MR_mktag(1), Pieces2_50, 1) = ((MR_Box) (Var_80));
                }
              }
              break;
          }
          Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_49, Pieces2_50);
          {
            Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) (Context_7));
            MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_90));
          }
          check_hlds__purity__purity_info_add_message_3_p_0(Spec_15, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        }
        else
        {
          MR_Word Markers_16;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_13, &Markers_16);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 10);
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 11);
            if (!(succeeded))
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 23);
          }
          if (succeeded)
            *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
          else
          {
            MR_Word Spec_24;

            Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(ModuleInfo_12, PredId_8, Context_7, DeclaredPurity_9);
            check_hlds__purity__purity_info_add_message_3_p_0(Spec_24, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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
    MR_Word PredInfo_11;
    MR_Word ActualPurity_12;
    MR_String DeclaredPurityName_13;
    MR_String ActualPurityName_14;
    MR_Word PredPieces_15;
    MR_Word Pieces1_16;
    MR_Word Pieces2_17;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_57;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_11, &ActualPurity_12);
    parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_9, &DeclaredPurityName_13);
    parse_tree__prog_out__purity_name_2_p_0(ActualPurity_12, &ActualPurityName_14);
    PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (DeclaredPurityName_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[23])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_15, Var_24);
    Pieces1_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[53])), Var_23);
    switch (ActualPurity_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Var_42;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (ActualPurityName_14));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[25])));
          }
          {
            Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), Pieces2_17, 1) = ((MR_Box) (Var_42));
          }
        }
        break;
      case (MR_Integer) 0:
        Pieces2_17 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[27]));
        break;
    }
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_16, Pieces2_17);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Var_57));
    }
    return Spec_10;
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Msgs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    MR_Word Msgs_7;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));

    {
      Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_7, 0) = ((MR_Box) (Spec_4));
      MR_hl_field(MR_mktag(1), Msgs_7, 1) = ((MR_Box) (Msgs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Msgs_7));
    }
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
    MR_Word STATE_VARIABLE_Specs_32_32;

    if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_32_32 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PromisedPurity_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePromisedPurity_13, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word Origin_17;

      succeeded = (DeclaredPurity_12 == PromisedPurity_15);
      if (succeeded)
        STATE_VARIABLE_Specs_31_31 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word InconsistentPromiseSpec_16;

        InconsistentPromiseSpec_16 = check_hlds__purity__error_inconsistent_purity_promise_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, DeclaredPurity_12);
        {
          STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (InconsistentPromiseSpec_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      succeeded = (ActualPurity_11 == PromisedPurity_15);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_17);
        if (((((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
          STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word NotPureEnoughSpec_25;

          NotPureEnoughSpec_25 = check_hlds__purity__error_not_pure_enough_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          if ((GoalType_27 == (MR_Word) ((MR_Unsigned) 8U)))
            succeeded = MR_TRUE;
          else
          if ((GoalType_27 == (MR_Word) ((MR_Unsigned) 4U)))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 0);
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 11);
              if (!(succeeded))
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 10);
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_32_32;
          else
          {
            MR_Word TooPureSpec_28;
            MR_Word Context_44;
            MR_Word PredContextPieces_45;
            MR_String DeclaredPurityName_46;
            MR_String ActualPurityName_47;
            MR_Word Pieces_48;
            MR_Word Var_49;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word PredPieces_72;
            MR_Word Var_78;

            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_44);
            PredPieces_72 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
            Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_72, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[9])));
            PredContextPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[36])), Var_78);
            parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_12, &DeclaredPurityName_46);
            parse_tree__prog_out__purity_name_2_p_0(ActualPurity_11, &ActualPurityName_47);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (DeclaredPurityName_46));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (ActualPurityName_47));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[19])));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[50])));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
            }
            Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredContextPieces_45, Var_49);
            {
              TooPureSpec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TooPureSpec_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), TooPureSpec_28, 1) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(MR_mktag(1), TooPureSpec_28, 2) = ((MR_Box) (Context_44));
              MR_hl_field(MR_mktag(1), TooPureSpec_28, 3) = ((MR_Box) (Pieces_48));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Context_11;
    MR_Word PredOrFunc_12;
    MR_String PredOrFuncStr_13;
    MR_Word PredContextPieces_14;
    MR_Word DeclaredPurity_15;
    MR_String PurityName_16;
    MR_String DeclaredPurityName_17;
    MR_Word Pieces1_18;
    MR_Word Pieces2_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word PredPieces_62;
    MR_Word Var_68;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    PredPieces_62 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_62, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[9])));
    PredContextPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[36])), Var_68);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &DeclaredPurity_15);
    parse_tree__prog_out__purity_name_2_p_0(Purity_9, &PurityName_16);
    parse_tree__prog_out__purity_name_2_p_0(DeclaredPurity_15, &DeclaredPurityName_17);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (PredOrFuncStr_13));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (PurityName_16));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[19])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Pieces1_18, 1) = ((MR_Box) (Var_22));
    }
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_7);
    if (succeeded)
      Pieces2_19 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[47]));
    else
    {
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (PurityName_16));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (DeclaredPurityName_17));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[19])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[49])));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[48])));
        MR_hl_field(MR_mktag(1), Pieces2_19, 1) = ((MR_Box) (Var_40));
      }
    }
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_18, Pieces2_19);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredContextPieces_14, Var_56);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Var_55));
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
    MR_Word Context_11;
    MR_Word PredContextPieces_12;
    MR_String Pragma_13;
    MR_String CodeStr_14;
    MR_Word PredOrFunc_15;
    MR_Word MainPieces_16;
    MR_Word VerbosePieces_17;
    MR_Word Msg_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word PredPieces_70;
    MR_Word Var_76;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredPieces_70 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_70, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[9])));
    PredContextPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[36])), Var_76);
    switch (PromisedPurity_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.purity.warn_unnecessary_purity_promise\'/4", (MR_String) "promise_impure");
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
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Pragma_13));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[21])));
    }
    {
      MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), MainPieces_16, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (CodeStr_14));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (PredContextPieces_12));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (MainPieces_16));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_59, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Msg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Msg_18, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_64));
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
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word PredPieces_61;
    MR_Word Var_67;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    parse_tree__prog_out__purity_name_2_p_0(Purity_9, &PurityName_14);
    PredPieces_61 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_61, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[9])));
    PredContextPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[36])), Var_67);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (PurityName_14));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[11])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredContextPieces_15, Var_19);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (PredOrFuncStr_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_1[17])));
    }
    {
      VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), VerbosePieces_17, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (MainPieces_16));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_49, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_49, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Msg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Msg_18, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_54));
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

    succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    check_hlds__purity____Compare____converted_unify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    check_hlds__purity____Compare____purity_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_tasks_0);
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
