/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2023-05-30
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_converted_unify_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[7];

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[7];

static const MR_DuArgLocn check_hlds__purity__check_hlds__purity__field_locns_purity_info_0_0[7];

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_run_post_typecheck_tasks_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_tasks_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_tasks_0[2];

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word Outer_6,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__purity__maybe_puritycheck_preds_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

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
check_hlds__purity__LCMC__pred__compute_purity_for_clauses__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_97,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

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
check_hlds__purity__LCMC__pred__compute_parallel_goals_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_74,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_cases_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_48,
  MR_Word STATE_VARIABLE_Purity_0_3,
  MR_Word * STATE_VARIABLE_Purity_4,
  MR_Word STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * STATE_VARIABLE_ContainsTrace_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_goals_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_45,
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
check_hlds__purity__LCMC__pred__compute_goal_purity__1_6_p_0(
  MR_Word Goal0_7,
  MR_Word * AddrOfGoal_21,
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
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

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
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

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

static void MR_CALL 
check_hlds__purity__check_outer_var_type_5_p_0(
  MR_Word Context_6,
  MR_Word VarTable_7,
  MR_Word Var_8,
  MR_Word * VarType_9,
  MR_Word * Specs_10);

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
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

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
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

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
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word ActualPurity_11,
  MR_Word DeclaredPurity_12,
  MR_Word MaybePromisedPurity_13,
  MR_Word * STATE_VARIABLE_Specs_26);

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
check_hlds__purity__warn_pred_body_too_pure_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word PredId_9,
  MR_Word ActualPurity_10,
  MR_Word DeclaredPurity_11);

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


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[64][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_scope_expr_purity_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_shorthand_expr_purity_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[64][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The types of the two outer variables differ."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[3])))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row   0 */
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_converted_unify_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  { check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  { check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_converted_unify_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_tasks_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__purity__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[7] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_var_table",
  (MR_String) "pi_messages"
};

static const MR_DuArgLocn check_hlds__purity__check_hlds__purity__field_locns_purity_info_0_0[7] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  INT16_C(7),
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

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = { &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 };

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = { &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 };

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  { check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  { check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0,

};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_0 = {
  (MR_String) "run_post_typecheck_tasks",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_tasks_0_1 = {
  (MR_String) "do_not_run_post_typecheck_tasks",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_run_post_typecheck_tasks_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_tasks_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_tasks_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck_tasks",
  { check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_tasks_0 },
  { check_hlds__purity__check_hlds__purity__enum_ordinal_ordered_run_post_typecheck_tasks_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_tasks_0,

};

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(
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
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_33 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_34 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_33 < Var_34);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_33 > Var_34);
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
        MR_Integer Var_35 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_36 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_35 < Var_36);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_35 > Var_36);
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
          MR_Integer Var_37 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_38 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_37 < Var_38);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_37 > Var_38);
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

              parse_tree__var_table____Compare____var_table_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__purity_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

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
              succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&check_hlds__purity_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
check_hlds__purity____Compare____converted_unify_0_0(
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
check_hlds__purity____Unify____converted_unify_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word Outer_6,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Inner_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
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
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;

  NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
  Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_12);
  OuterDI_15 = ((MR_Word) ((MR_hl_field(0, Outer_6, (MR_Integer) 0))));
  OuterUO_16 = ((MR_Word) ((MR_hl_field(0, Outer_6, (MR_Integer) 1))));
  InnerDI_17 = ((MR_Word) ((MR_hl_field(0, Inner_8, (MR_Integer) 0))));
  InnerUO_18 = ((MR_Word) ((MR_hl_field(0, Inner_8, (MR_Integer) 1))));
  ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
  Clobbered_22 = (MR_Word) (MR_mkword(3, &check_hlds__purity_scalar_common_1[1]));
  Unique_23 = (MR_Word) (MR_mkword(3, &check_hlds__purity_scalar_common_1[2]));
  Var_37 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (InnerDI_17));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (OuterDI_15));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (OuterDI_15));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (Clobbered_22));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (InnerDI_17));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (Unique_23));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  Var_40 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_47);
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_21, (MR_Integer) 0, Var_37, (MR_String) "stm_from_outer_to_inner", (MR_Word) ((MR_Unsigned) 0U), Var_39, Var_40, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_14, &OuterToInnerGoal_24);
  Var_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (OuterUO_16));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (InnerUO_18));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (InnerUO_18));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (Clobbered_22));
  }
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (OuterUO_16));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (Unique_23));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
  }
  Var_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_63);
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_21, (MR_Integer) 0, Var_53, (MR_String) "stm_from_inner_to_outer", (MR_Word) ((MR_Unsigned) 0U), Var_55, Var_56, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_14, &InnerToOuterGoal_25);
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (InnerToOuterGoal_25));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Goal0_7));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (OuterToInnerGoal_24));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    WrapExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, WrapExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, WrapExpr_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, WrapExpr_26, 2) = ((MR_Box) (Var_69));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (OuterDI_15));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_61));
  }
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_73, NonLocals0_13, &NonLocals_27);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_27, GoalInfo0_12, &GoalInfo1_28);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 24, GoalInfo1_28, &GoalInfo_29);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (WrapExpr_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
  }
  *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
}

void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredInfo_0_33,
  MR_Word * STATE_VARIABLE_PredInfo_34)
{
  MR_bool succeeded;
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Procs0_9;
  MR_Word ProcInfo0_10;
  MR_Word Goal0_11;
  MR_Word VarTable0_12;
  MR_Word PurityInfo0_13;
  MR_Word Goal_14;
  MR_Word Bodypurity_15;
  MR_Word Var_16;
  MR_Word PurityInfo_17;
  MR_Word NeedToRequantify_20;
  MR_Word VarTable_22;
  MR_Word ProcInfo1_24;
  MR_Word ProcInfo2_25;
  MR_Word ProcInfo_26;
  MR_Word Procs_27;
  MR_Word OldPurity_28;
  MR_Word Markers0_29;
  MR_Word STATE_VARIABLE_PredInfo_39_39;
  MR_Word STATE_VARIABLE_PredInfo_41_41;
  MR_Word GoalExpr0_62;
  MR_Word GoalInfo0_63;
  MR_Word GoalExpr_64;
  MR_Word GoalInfo_65;
  MR_Word STATE_VARIABLE_GoalInfo_10_66;
  MR_Box conv0_ProcInfo0_10;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_33, &Procs0_9);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_9, ((MR_Box) (ProcId_7)), &conv0_ProcInfo0_10);
  ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_11);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_10, &VarTable0_12);
  {
    PurityInfo0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PurityInfo0_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, PurityInfo0_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    MR_hl_field(0, PurityInfo0_13, 2) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_33));
    MR_hl_field(0, PurityInfo0_13, 3) = ((MR_Box) (VarTable0_12));
    MR_hl_field(0, PurityInfo0_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  GoalExpr0_62 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  GoalInfo0_63 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_62, &GoalExpr_64, GoalInfo0_63, &Bodypurity_15, &Var_16, PurityInfo0_13, &PurityInfo_17);
  hlds__hlds_goal__goal_info_set_purity_3_p_0(Bodypurity_15, GoalInfo0_63, &STATE_VARIABLE_GoalInfo_10_66);
  switch (Var_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_66, &GoalInfo_65);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_66, &GoalInfo_65);
      break;
  }
  {
    Goal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_14, 0) = ((MR_Box) (GoalExpr_64));
    MR_hl_field(0, Goal_14, 1) = ((MR_Box) (GoalInfo_65));
  }
  NeedToRequantify_20 = ((((MR_Unsigned) ((MR_hl_field(0, PurityInfo_17, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  STATE_VARIABLE_PredInfo_39_39 = ((MR_Word) ((MR_hl_field(0, PurityInfo_17, (MR_Integer) 2))));
  VarTable_22 = ((MR_Word) ((MR_hl_field(0, PurityInfo_17, (MR_Integer) 3))));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, ProcInfo0_10, &ProcInfo1_24);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_22, ProcInfo1_24, &ProcInfo2_25);
  switch (NeedToRequantify_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ProcInfo_26 = ProcInfo2_25;
      break;
    case (MR_Integer) 0:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, ProcInfo2_25, &ProcInfo_26);
      break;
  }
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_26)), Procs0_9, &Procs_27);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_27, STATE_VARIABLE_PredInfo_39_39, &STATE_VARIABLE_PredInfo_41_41);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_41_41, &OldPurity_28);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_41_41, &Markers0_29);
  succeeded = parse_tree__prog_data__less_pure_2_p_0(Bodypurity_15, OldPurity_28);
  if (succeeded)
  {
    MR_Word Markers_31;

    switch (OldPurity_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Markers_31 = Markers0_29;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Markers1_30;

          hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 17, Markers0_29, &Markers1_30);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 16, Markers1_30, &Markers_31);
        }
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 17, Markers0_29, &Markers_31);
        break;
    }
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_31, STATE_VARIABLE_PredInfo_41_41, STATE_VARIABLE_PredInfo_34);
  }
  else
  {
    MR_Word TypeCtorInfo_61_61;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_60;
    MR_Integer ArgX1_71;
    MR_Word ArgX2_73;
    MR_Word ArgY2_74;

    succeeded = parse_tree__prog_data__less_pure_2_p_0(OldPurity_28, Bodypurity_15);
    if (succeeded)
    {
      Var_47 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = NULL;
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
      }
      Var_60 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(STATE_VARIABLE_PredInfo_41_41);
      TypeCtorInfo_61_61 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
      succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgX1_71 = ((MR_Integer) ((MR_hl_field(1, Var_60, (MR_Integer) 0))));
        ArgY2_74 = ((MR_Word) ((MR_hl_field(1, Var_60, (MR_Integer) 1))));
        (MR_hl_field(1, Var_46, (MR_Integer) 0)) = ((MR_Box) (ArgX1_71));
        ArgX2_73 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
        succeeded = mercury__list____Unify____list_1_0(TypeCtorInfo_61_61, ArgX2_73, ArgY2_74);
      }
    }
    if (succeeded)
    {
      MR_Word Markers_57;

      switch (Bodypurity_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          Markers_57 = Markers0_29;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Markers1_53;

            hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, Markers0_29, &Markers1_53);
            hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, Markers1_53, &Markers_57);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Markers1_54;

            hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, Markers0_29, &Markers1_54);
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, Markers1_54, &Markers_57);
          }
          break;
      }
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_57, STATE_VARIABLE_PredInfo_41_41, STATE_VARIABLE_PredInfo_34);
    }
    else
      *STATE_VARIABLE_PredInfo_34 = STATE_VARIABLE_PredInfo_41_41;
  }
}

void MR_CALL 
check_hlds__purity__puritycheck_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word PredIds_9;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &PredIds_9);
  check_hlds__purity__maybe_puritycheck_preds_6_p_0(ProgressStream_6, PredIds_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11, STATE_VARIABLE_Specs_0_12, STATE_VARIABLE_Specs_13);
}

static void MR_CALL 
check_hlds__purity__maybe_puritycheck_preds_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo0_19;
      MR_Word STATE_VARIABLE_Specs_29_29;
      MR_Word STATE_VARIABLE_ModuleInfo_30_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_15, &PredInfo0_19);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_19);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo0_19);
      if (succeeded)
      {
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_5;
        STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_3;
      }
      else
      {
        MR_Word PredInfo_21;
        MR_Word DeclaredPurity_31;
        MR_Word MaybePromisedPurity_32;
        MR_Word Clauses0_33;
        MR_Word ItemNumbers_34;
        MR_Word VarTable0_35;
        MR_Word PurityInfo0_36;
        MR_Word Clauses_37;
        MR_Word ActualPurity_38;
        MR_Word PurityInfo_39;
        MR_Word VarTable_44;
        MR_Word GoalSpecs_45;
        MR_Word ClausesRep_46;
        MR_Word PredSpecs_47;
        MR_Word STATE_VARIABLE_ClausesInfo_33_48;
        MR_Word STATE_VARIABLE_ClausesInfo_34_49;
        MR_Word STATE_VARIABLE_PredInfo_40_55;
        MR_Word STATE_VARIABLE_ClausesInfo_41_56;
        MR_Word STATE_VARIABLE_ClausesInfo_42_57;
        MR_Word Var_58;

        hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_1, STATE_VARIABLE_ModuleInfo_0_3, (MR_String) "Purity-checking", PredId_15);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_19, &DeclaredPurity_31);
        hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(PredInfo0_19, &MaybePromisedPurity_32);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_19, &STATE_VARIABLE_ClausesInfo_33_48);
        hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses0_33, &ItemNumbers_34, STATE_VARIABLE_ClausesInfo_33_48, &STATE_VARIABLE_ClausesInfo_34_49);
        hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(STATE_VARIABLE_ClausesInfo_34_49, &VarTable0_35);
        {
          PurityInfo0_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PurityInfo0_36, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3));
          MR_hl_field(0, PurityInfo0_36, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
          MR_hl_field(0, PurityInfo0_36, 2) = ((MR_Box) (PredInfo0_19));
          MR_hl_field(0, PurityInfo0_36, 3) = ((MR_Box) (VarTable0_35));
          MR_hl_field(0, PurityInfo0_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__purity__compute_purity_for_clauses_7_p_0(Clauses0_33, &Clauses_37, PredInfo0_19, (MR_Integer) 0, &ActualPurity_38, PurityInfo0_36, &PurityInfo_39);
        STATE_VARIABLE_PredInfo_40_55 = ((MR_Word) ((MR_hl_field(0, PurityInfo_39, (MR_Integer) 2))));
        VarTable_44 = ((MR_Word) ((MR_hl_field(0, PurityInfo_39, (MR_Integer) 3))));
        GoalSpecs_45 = ((MR_Word) ((MR_hl_field(0, PurityInfo_39, (MR_Integer) 4))));
        hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_44, STATE_VARIABLE_ClausesInfo_34_49, &STATE_VARIABLE_ClausesInfo_41_56);
        hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_37, &ClausesRep_46);
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_46, ItemNumbers_34, STATE_VARIABLE_ClausesInfo_41_56, &STATE_VARIABLE_ClausesInfo_42_57);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_42_57, STATE_VARIABLE_PredInfo_40_55, &PredInfo_21);
        check_hlds__purity__perform_pred_purity_checks_7_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_15, PredInfo_21, ActualPurity_38, DeclaredPurity_31, MaybePromisedPurity_32, &PredSpecs_47);
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredSpecs_47, STATE_VARIABLE_Specs_0_5);
        STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GoalSpecs_45, Var_58);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_15, PredInfo_21, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_30_30);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_30_30;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_29_29;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
  }
  else
  {
    MR_Word Clause0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Clauses0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Clause_17;
    MR_Word ClausePurity_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Purity_28_28;
    MR_Word Goal0_29;
    MR_Word GoalExpr0_30;
    MR_Word GoalInfo0_31;
    MR_Word GoalExpr1_32;
    MR_Word BodyPurity0_33;
    MR_Word ApplicableProcIds_35;
    MR_Word ClausePurity_41;
    MR_Word GoalInfo1_42;
    MR_Word Goal1_43;
    MR_Word NeedToRequantify_44;
    MR_Word Goal_50;
    MR_Word STATE_VARIABLE_Info_38_53;
    MR_Word STATE_VARIABLE_Info_40_55;
    MR_Word Var_59;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Unsigned packed_word_0;
    MR_Word Var_34;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word * AddrClauses_96;

    Goal0_29 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_15);
    GoalExpr0_30 = ((MR_Word) ((MR_hl_field(0, Goal0_29, (MR_Integer) 0))));
    GoalInfo0_31 = ((MR_Word) ((MR_hl_field(0, Goal0_29, (MR_Integer) 1))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    {
      STATE_VARIABLE_Info_38_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_38_53, 0) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_Info_38_53, 1) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
      MR_hl_field(0, STATE_VARIABLE_Info_38_53, 2) = ((MR_Box) (Var_63));
      MR_hl_field(0, STATE_VARIABLE_Info_38_53, 3) = ((MR_Box) (Var_64));
      MR_hl_field(0, STATE_VARIABLE_Info_38_53, 4) = ((MR_Box) (Var_65));
    }
    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_30, &GoalExpr1_32, GoalInfo0_31, &BodyPurity0_33, &Var_34, STATE_VARIABLE_Info_38_53, &STATE_VARIABLE_Info_40_55);
    ApplicableProcIds_35 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) ApplicableProcIds_35)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplicableProcIds_35)) {
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
          MR_Word ClauseProcIds_36 = ((MR_Word) ((MR_hl_field(1, ApplicableProcIds_35, (MR_Integer) 0))));
          MR_Word SortedClauseProcIds_37;
          MR_Word AllProcIds_38;

          mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ClauseProcIds_36, &SortedClauseProcIds_37);
          AllProcIds_38 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_3);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__purity_scalar_common_2[8]), ((MR_Box) (SortedClauseProcIds_37)), ((MR_Box) (AllProcIds_38)));
        }
        break;
    }
    if (!(succeeded))
    {
      {
        MR_Word GoalType_40;
        MR_Word Var_57;

        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_3, &GoalType_40);
        succeeded = ((MR_tag((MR_Word) GoalType_40)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_57 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_40, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_57 == (MR_Integer) 2);
        }
      }
      if (!(succeeded))
      {
        MR_Word Markers_39;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_3, &Markers_39);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_39, (MR_Integer) 18);
      }
    }
    if (succeeded)
      ClausePurity_41 = (MR_Integer) 0;
    else
      ClausePurity_41 = (MR_Integer) 2;
    ClausePurity_22 = parse_tree__prog_data__worst_purity_2_f_0(BodyPurity0_33, ClausePurity_41);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(ClausePurity_22, GoalInfo0_31, &GoalInfo1_42);
    {
      Goal1_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal1_43, 0) = ((MR_Box) (GoalExpr1_32));
      MR_hl_field(0, Goal1_43, 1) = ((MR_Box) (GoalInfo1_42));
    }
    NeedToRequantify_44 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    switch (NeedToRequantify_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Goal_50 = Goal1_43;
          STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_40_55;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ClausesInfo_45;
          MR_Word HeadVars_46;
          MR_Word VarTable1_47;
          MR_Word EmptyRttiVarmaps_48;
          MR_Word VarTable_51;
          MR_Word _Warnings_49;
          MR_Word Var_52;
          MR_Word Var_82;
          MR_Word Var_86;
          MR_Word Var_88;
          MR_Unsigned packed_word_4;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_3, &ClausesInfo_45);
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_45, &HeadVars_46);
          VarTable1_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 3))));
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_48);
          hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_46, &_Warnings_49, Goal1_43, &Goal_50, VarTable1_47, &VarTable_51, EmptyRttiVarmaps_48, &Var_52);
          Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 0))));
          packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 1)));
          Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 2))));
          Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 4))));
          {
            STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_82));
            MR_hl_field(0, STATE_VARIABLE_Info_27_27, 1) = (MR_Box) (packed_word_4);
            MR_hl_field(0, STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_86));
            MR_hl_field(0, STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (VarTable_51));
            MR_hl_field(0, STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (Var_88));
          }
        }
        break;
    }
    Var_89 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 0))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 2))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 3))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 4))));
    {
      Clause_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Clause_17, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Clause_17, 1) = ((MR_Box) (Goal_50));
      MR_hl_field(0, Clause_17, 2) = ((MR_Box) (Var_91));
      MR_hl_field(0, Clause_17, 3) = ((MR_Box) (Var_92));
      MR_hl_field(0, Clause_17, 4) = ((MR_Box) (Var_93));
    }
    STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_4, ClausePurity_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Clause_17));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrClauses_96 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__purity__LCMC__pred__compute_purity_for_clauses__1_7_p_0(Clauses0_16, AddrClauses_96, PredInfo_3, STATE_VARIABLE_Purity_28_28, STATE_VARIABLE_Purity_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
  }
}

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_purity_for_clauses__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_97,
  MR_Word PredInfo_3,
  MR_Word STATE_VARIABLE_Purity_0_4,
  MR_Word * STATE_VARIABLE_Purity_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_97 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_Purity_5 = STATE_VARIABLE_Purity_0_4;
    }
    else
    {
      MR_Word Clause0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clauses0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Clause_17;
      MR_Word ClausePurity_22;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_Purity_28_28;
      MR_Word Goal0_29;
      MR_Word GoalExpr0_30;
      MR_Word GoalInfo0_31;
      MR_Word GoalExpr1_32;
      MR_Word BodyPurity0_33;
      MR_Word ApplicableProcIds_35;
      MR_Word ClausePurity_41;
      MR_Word GoalInfo1_42;
      MR_Word Goal1_43;
      MR_Word NeedToRequantify_44;
      MR_Word Goal_50;
      MR_Word STATE_VARIABLE_Info_38_53;
      MR_Word STATE_VARIABLE_Info_40_55;
      MR_Word Var_59;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Unsigned packed_word_0;
      MR_Word Var_34;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word * AddrClauses_96;
      MR_Word HeadVar__2_98;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_97;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      Goal0_29 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_15);
      GoalExpr0_30 = ((MR_Word) ((MR_hl_field(0, Goal0_29, (MR_Integer) 0))));
      GoalInfo0_31 = ((MR_Word) ((MR_hl_field(0, Goal0_29, (MR_Integer) 1))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
      {
        STATE_VARIABLE_Info_38_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_38_53, 0) = ((MR_Box) (Var_59));
        MR_hl_field(0, STATE_VARIABLE_Info_38_53, 1) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
        MR_hl_field(0, STATE_VARIABLE_Info_38_53, 2) = ((MR_Box) (Var_63));
        MR_hl_field(0, STATE_VARIABLE_Info_38_53, 3) = ((MR_Box) (Var_64));
        MR_hl_field(0, STATE_VARIABLE_Info_38_53, 4) = ((MR_Box) (Var_65));
      }
      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_30, &GoalExpr1_32, GoalInfo0_31, &BodyPurity0_33, &Var_34, STATE_VARIABLE_Info_38_53, &STATE_VARIABLE_Info_40_55);
      ApplicableProcIds_35 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) ApplicableProcIds_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_35)) {
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
            MR_Word ClauseProcIds_36 = ((MR_Word) ((MR_hl_field(1, ApplicableProcIds_35, (MR_Integer) 0))));
            MR_Word SortedClauseProcIds_37;
            MR_Word AllProcIds_38;

            mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ClauseProcIds_36, &SortedClauseProcIds_37);
            AllProcIds_38 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_3);
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__purity_scalar_common_2[8]), ((MR_Box) (SortedClauseProcIds_37)), ((MR_Box) (AllProcIds_38)));
          }
          break;
      }
      if (!(succeeded))
      {
        {
          MR_Word GoalType_40;
          MR_Word Var_57;

          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_3, &GoalType_40);
          succeeded = ((MR_tag((MR_Word) GoalType_40)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_57 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_40, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (Var_57 == (MR_Integer) 2);
          }
        }
        if (!(succeeded))
        {
          MR_Word Markers_39;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_3, &Markers_39);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_39, (MR_Integer) 18);
        }
      }
      if (succeeded)
        ClausePurity_41 = (MR_Integer) 0;
      else
        ClausePurity_41 = (MR_Integer) 2;
      ClausePurity_22 = parse_tree__prog_data__worst_purity_2_f_0(BodyPurity0_33, ClausePurity_41);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(ClausePurity_22, GoalInfo0_31, &GoalInfo1_42);
      {
        Goal1_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal1_43, 0) = ((MR_Box) (GoalExpr1_32));
        MR_hl_field(0, Goal1_43, 1) = ((MR_Box) (GoalInfo1_42));
      }
      NeedToRequantify_44 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      switch (NeedToRequantify_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Goal_50 = Goal1_43;
            STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_40_55;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ClausesInfo_45;
            MR_Word HeadVars_46;
            MR_Word VarTable1_47;
            MR_Word EmptyRttiVarmaps_48;
            MR_Word VarTable_51;
            MR_Word _Warnings_49;
            MR_Word Var_52;
            MR_Word Var_82;
            MR_Word Var_86;
            MR_Word Var_88;
            MR_Unsigned packed_word_4;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_3, &ClausesInfo_45);
            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_45, &HeadVars_46);
            VarTable1_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 3))));
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_48);
            hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_46, &_Warnings_49, Goal1_43, &Goal_50, VarTable1_47, &VarTable_51, EmptyRttiVarmaps_48, &Var_52);
            Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 0))));
            packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 1)));
            Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 2))));
            Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_55, (MR_Integer) 4))));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_82));
              MR_hl_field(0, STATE_VARIABLE_Info_27_27, 1) = (MR_Box) (packed_word_4);
              MR_hl_field(0, STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_86));
              MR_hl_field(0, STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (VarTable_51));
              MR_hl_field(0, STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (Var_88));
            }
          }
          break;
      }
      Var_89 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 0))));
      Var_91 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 2))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 3))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, Clause0_15, (MR_Integer) 4))));
      {
        Clause_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_17, 0) = ((MR_Box) (Var_89));
        MR_hl_field(0, Clause_17, 1) = ((MR_Box) (Goal_50));
        MR_hl_field(0, Clause_17, 2) = ((MR_Box) (Var_91));
        MR_hl_field(0, Clause_17, 3) = ((MR_Box) (Var_92));
        MR_hl_field(0, Clause_17, 4) = ((MR_Box) (Var_93));
      }
      STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_4, ClausePurity_22);
      {
        HeadVar__2_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_98, 0) = ((MR_Box) (Clause_17));
        MR_hl_field(1, HeadVar__2_98, 1) = NULL;
      }
      AddrClauses_96 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_98, (MR_Integer) 1)));
      *AddrOfHeadVar__2_97 = HeadVar__2_98;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Clauses0_16;
      next_value_of_AddrOfHeadVar__2_97 = AddrClauses_96;
      next_value_of_STATE_VARIABLE_Purity_0_4 = STATE_VARIABLE_Purity_28_28;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_97 = next_value_of_AddrOfHeadVar__2_97;
      STATE_VARIABLE_Purity_0_4 = next_value_of_STATE_VARIABLE_Purity_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
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
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_46 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word NotGoal0_47;
        MR_Word Goal1_48;
        MR_Word Var_93;

        hlds__hlds_goal__negate_goal_3_p_0(Goal0_46, GoalInfo_10, &NotGoal0_47);
        Var_93 = ((MR_Word) ((MR_hl_field(0, NotGoal0_47, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_Integer) 0);
        if (succeeded)
        {
          Goal1_48 = (MR_Word) ((MR_Word) (Var_93));
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
          *GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, NotGoal1_51, (MR_Integer) 0))));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            *GoalExpr_9 = GoalExpr0_8;
            switch (MR_tag((MR_Word) GenericCall0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Purity_11 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall0_23, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
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
            MR_Word Attributes_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            *Purity_11 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes_69);
            *ContainsTrace_12 = (MR_Integer) 1;
            *GoalExpr_9 = GoalExpr0_8;
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_16));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word * AddrGoals_110;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = NULL;
            }
            AddrGoals_110 = (MR_Word *) (&(MR_hl_field(3, *GoalExpr_9, (MR_Integer) 1)));
            check_hlds__purity__LCMC__pred__compute_goals_purity__1_8_p_0(Goals0_101, AddrGoals_110, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Canfail_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word * AddrCases_111;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Canfail_38));
              MR_hl_field(3, base, 3) = NULL;
            }
            AddrCases_111 = (MR_Word *) (&(MR_hl_field(3, *GoalExpr_9, (MR_Integer) 3)));
            check_hlds__purity__LCMC__pred__compute_cases_purity__1_8_p_0(Cases0_39, AddrCases_111, (MR_Integer) 0, Purity_11, (MR_Integer) 1, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
          }
          break;
        case (MR_Integer) 5:
          check_hlds__purity__compute_scope_expr_purity_7_p_0(GoalExpr0_8, GoalExpr_9, GoalInfo_10, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
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
            MR_Word STATE_VARIABLE_Info_97_97;
            MR_Word STATE_VARIABLE_Info_98_98;
            MR_Word GoalExpr0_103 = ((MR_Word) ((MR_hl_field(0, Cond0_56, (MR_Integer) 0))));
            MR_Word GoalInfo0_104 = ((MR_Word) ((MR_hl_field(0, Cond0_56, (MR_Integer) 1))));
            MR_Word GoalExpr_105;
            MR_Word GoalInfo_106;
            MR_Word STATE_VARIABLE_GoalInfo_10_107;

            check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_103, &GoalExpr_105, GoalInfo0_104, &Purity1_60, &ContainsTrace1_61, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_97_97);
            hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity1_60, GoalInfo0_104, &STATE_VARIABLE_GoalInfo_10_107);
            switch (ContainsTrace1_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_107, &GoalInfo_106);
                break;
              case (MR_Integer) 0:
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_107, &GoalInfo_106);
                break;
            }
            {
              Cond_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Cond_59, 0) = ((MR_Box) (GoalExpr_105));
              MR_hl_field(0, Cond_59, 1) = ((MR_Box) (GoalInfo_106));
            }
            check_hlds__purity__compute_goal_purity_6_p_0(Then0_57, &Then_62, &Purity2_63, &ContainsTrace2_64, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_98_98);
            check_hlds__purity__compute_goal_purity_6_p_0(Else0_58, &Else_65, &Purity3_66, &ContainsTrace3_67, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_78);
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_55));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_59));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_62));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_65));
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

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_parallel_goals_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_74,
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
      *AddrOfHeadVar__2_74 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word STATE_VARIABLE_Purity_39_39;
      MR_Word STATE_VARIABLE_ContainsTrace_40_40;
      MR_Word GoalExpr0_41 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 0))));
      MR_Word GoalInfo0_42 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 1))));
      MR_Word GoalExpr_43;
      MR_Word GoalInfo_44;
      MR_Word STATE_VARIABLE_GoalInfo_10_45;
      MR_Word * AddrGoals_73;
      MR_Word HeadVar__2_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_74;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_41, &GoalExpr_43, GoalInfo0_42, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_42, &STATE_VARIABLE_GoalInfo_10_45);
      switch (GoalContainsTrace_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_45, &GoalInfo_44);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_45, &GoalInfo_44);
          break;
      }
      {
        Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_20, 0) = ((MR_Box) (GoalExpr_43));
        MR_hl_field(0, Goal_20, 1) = ((MR_Box) (GoalInfo_44));
      }
      switch (GoalPurity_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word GoalInfo0_28 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 1))));
            MR_Word Context_29;
            MR_Word Spec_30;
            MR_String PurityName_48;
            MR_Word Pieces_49;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Msgs0_58;
            MR_Word Msgs_59;
            MR_Word Var_60;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Unsigned packed_word_0;

            Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
            parse_tree__parse_tree_out_misc__purity_name_2_p_0(GoalPurity_25, &PurityName_48);
            {
              Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_53, 0) = ((MR_Box) (PurityName_48));
            }
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[58])));
            }
            {
              Pieces_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[55])));
              MR_hl_field(1, Pieces_49, 1) = ((MR_Box) (Var_52));
            }
            {
              Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.impure_parallel_conjunct_error\'/2"));
              MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 60U));
              MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_29));
              MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_49));
            }
            Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
            Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
            Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
            Msgs0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
            {
              Msgs_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Msgs_59, 0) = ((MR_Box) (Spec_30));
              MR_hl_field(1, Msgs_59, 1) = ((MR_Box) (Msgs0_58));
            }
            {
              STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (Var_60));
              MR_hl_field(0, STATE_VARIABLE_Info_38_38, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(0, STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (Var_64));
              MR_hl_field(0, STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (Var_65));
              MR_hl_field(0, STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (Msgs_59));
            }
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
        HeadVar__2_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_75, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(1, HeadVar__2_75, 1) = NULL;
      }
      AddrGoals_73 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_75, (MR_Integer) 1)));
      *AddrOfHeadVar__2_74 = HeadVar__2_75;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_19;
      next_value_of_AddrOfHeadVar__2_74 = AddrGoals_73;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_39_39;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_40_40;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_74 = next_value_of_AddrOfHeadVar__2_74;
      STATE_VARIABLE_Purity_0_3 = next_value_of_STATE_VARIABLE_Purity_0_3;
      STATE_VARIABLE_ContainsTrace_0_5 = next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_cases_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_48,
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
      *AddrOfHeadVar__2_48 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word Case0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_20;
      MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(0, Case0_18, (MR_Integer) 0))));
      MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, Case0_18, (MR_Integer) 1))));
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(0, Case0_18, (MR_Integer) 2))));
      MR_Word Goal_28;
      MR_Word GoalPurity_29;
      MR_Word GoalContainsTrace_30;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Purity_38_38;
      MR_Word STATE_VARIABLE_ContainsTrace_39_39;
      MR_Word GoalExpr0_40 = ((MR_Word) ((MR_hl_field(0, Goal0_27, (MR_Integer) 0))));
      MR_Word GoalInfo0_41 = ((MR_Word) ((MR_hl_field(0, Goal0_27, (MR_Integer) 1))));
      MR_Word GoalExpr_42;
      MR_Word GoalInfo_43;
      MR_Word STATE_VARIABLE_GoalInfo_10_44;
      MR_Word * AddrCases_47;
      MR_Word HeadVar__2_49;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_48;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_40, &GoalExpr_42, GoalInfo0_41, &GoalPurity_29, &GoalContainsTrace_30, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_29, GoalInfo0_41, &STATE_VARIABLE_GoalInfo_10_44);
      switch (GoalContainsTrace_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_44, &GoalInfo_43);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_44, &GoalInfo_43);
          break;
      }
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_28, 0) = ((MR_Box) (GoalExpr_42));
        MR_hl_field(0, Goal_28, 1) = ((MR_Box) (GoalInfo_43));
      }
      {
        Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Case_20, 0) = ((MR_Box) (MainConsId_25));
        MR_hl_field(0, Case_20, 1) = ((MR_Box) (OtherConsIds_26));
        MR_hl_field(0, Case_20, 2) = ((MR_Box) (Goal_28));
      }
      STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_29, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_30, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_49, 0) = ((MR_Box) (Case_20));
        MR_hl_field(1, HeadVar__2_49, 1) = NULL;
      }
      AddrCases_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_49, (MR_Integer) 1)));
      *AddrOfHeadVar__2_48 = HeadVar__2_49;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases0_19;
      next_value_of_AddrOfHeadVar__2_48 = AddrCases_47;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_38_38;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_39_39;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_48 = next_value_of_AddrOfHeadVar__2_48;
      STATE_VARIABLE_Purity_0_3 = next_value_of_STATE_VARIABLE_Purity_0_3;
      STATE_VARIABLE_ContainsTrace_0_5 = next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__purity__LCMC__pred__compute_goals_purity__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_45,
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
      *AddrOfHeadVar__2_45 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ContainsTrace_6 = STATE_VARIABLE_ContainsTrace_0_5;
      *STATE_VARIABLE_Purity_4 = STATE_VARIABLE_Purity_0_3;
    }
    else
    {
      MR_Word HeadGoal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailGoals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadGoal_24;
      MR_Word GoalPurity_25;
      MR_Word GoalContainsTrace_26;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Purity_35_35;
      MR_Word STATE_VARIABLE_ContainsTrace_36_36;
      MR_Word GoalExpr0_37 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_18, (MR_Integer) 0))));
      MR_Word GoalInfo0_38 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_18, (MR_Integer) 1))));
      MR_Word GoalExpr_39;
      MR_Word GoalInfo_40;
      MR_Word STATE_VARIABLE_GoalInfo_10_41;
      MR_Word * AddrTailGoals_44;
      MR_Word HeadVar__2_46;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_45;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_37, &GoalExpr_39, GoalInfo0_38, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_34_34);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_38, &STATE_VARIABLE_GoalInfo_10_41);
      switch (GoalContainsTrace_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_41, &GoalInfo_40);
          break;
        case (MR_Integer) 0:
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_41, &GoalInfo_40);
          break;
      }
      {
        HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadGoal_24, 0) = ((MR_Box) (GoalExpr_39));
        MR_hl_field(0, HeadGoal_24, 1) = ((MR_Box) (GoalInfo_40));
      }
      STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
      STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
      {
        HeadVar__2_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_46, 0) = ((MR_Box) (HeadGoal_24));
        MR_hl_field(1, HeadVar__2_46, 1) = NULL;
      }
      AddrTailGoals_44 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_46, (MR_Integer) 1)));
      *AddrOfHeadVar__2_45 = HeadVar__2_46;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailGoals0_19;
      next_value_of_AddrOfHeadVar__2_45 = AddrTailGoals_44;
      next_value_of_STATE_VARIABLE_Purity_0_3 = STATE_VARIABLE_Purity_35_35;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = STATE_VARIABLE_ContainsTrace_36_36;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_45 = next_value_of_AddrOfHeadVar__2_45;
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
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_34 = ((MR_Word) ((MR_hl_field(0, Goal0_27, (MR_Integer) 0))));
      MR_Word GoalInfo0_35 = ((MR_Word) ((MR_hl_field(0, Goal0_27, (MR_Integer) 1))));
      MR_Word XVar_44;
      MR_Word Mode_45;
      MR_Word Unification_46;
      MR_Word UnifyContext_47;
      MR_Word ConsId_48;
      MR_Word YVars_49;
      MR_Word ModuleInfo_50;
      MR_Word PredInfo0_51;
      MR_Word VarTable0_52;
      MR_Word Goal1_53;
      MR_Word IsPlainUnify_54;
      MR_Word ResolveSpecs_55;
      MR_Word VarTable_56;
      MR_Word PredInfo_57;
      MR_Word GoalExpr1_58;
      MR_Word GoalInfo1_59;
      MR_Word MarkedSubGoal_68;
      MR_Word STATE_VARIABLE_Info_89_89;
      MR_Word STATE_VARIABLE_Info_98_98;
      MR_Word STATE_VARIABLE_Purity_107_107;
      MR_Word STATE_VARIABLE_ContainsTrace_108_108;
      MR_Word STATE_VARIABLE_Invariants_109_109;
      MR_Word STATE_VARIABLE_RevMarkedSubGoals_112_112;
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
        XVarPrime_36 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_34, (MR_Integer) 0))));
        Y_37 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_34, (MR_Integer) 1))));
        ModePrime_38 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_34, (MR_Integer) 2))));
        UnificationPrime_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_34, (MR_Integer) 3))));
        UnifyContextPrime_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_34, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Y_37)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_41 = ((MR_Word) ((MR_hl_field(1, Y_37, (MR_Integer) 0))));
          YVarsPrime_43 = ((MR_Word) ((MR_hl_field(1, Y_37, (MR_Integer) 2))));
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
      ModuleInfo_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
      PredInfo0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
      VarTable0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
      check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0(ModuleInfo_50, XVar_44, ConsId_48, YVars_49, Mode_45, Unification_46, UnifyContext_47, GoalInfo0_35, &Goal1_53, &IsPlainUnify_54, &ResolveSpecs_55, VarTable0_52, &VarTable_56, PredInfo0_51, &PredInfo_57);
      check_hlds__purity__purity_info_add_messages_3_p_0(ResolveSpecs_55, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_89_89);
      GoalExpr1_58 = ((MR_Word) ((MR_hl_field(0, Goal1_53, (MR_Integer) 0))));
      GoalInfo1_59 = ((MR_Word) ((MR_hl_field(0, Goal1_53, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) IsPlainUnify_54)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(IsPlainUnify_54)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Info_102_102;
                MR_Word Goal_124;
                MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_89_89, (MR_Integer) 0))));
                MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_89_89, (MR_Integer) 4))));
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_89_89, (MR_Integer) 1)));

                {
                  STATE_VARIABLE_Info_102_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_102_102, 0) = ((MR_Box) (Var_143));
                  MR_hl_field(0, STATE_VARIABLE_Info_102_102, 1) = (MR_Box) (packed_word_2);
                  MR_hl_field(0, STATE_VARIABLE_Info_102_102, 2) = ((MR_Box) (PredInfo_57));
                  MR_hl_field(0, STATE_VARIABLE_Info_102_102, 3) = ((MR_Box) (VarTable_56));
                  MR_hl_field(0, STATE_VARIABLE_Info_102_102, 4) = ((MR_Box) (Var_149));
                }
                succeeded = ((MR_tag((MR_Word) GoalExpr1_58)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_Word UnifySpecs_118;
                  MR_Word GoalInfo_119;
                  MR_Word STATE_VARIABLE_GoalInfo_10_159;

                  check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_102_102, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_118);
                  check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_118, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_98_98);
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_59, &STATE_VARIABLE_GoalInfo_10_159);
                  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_159, &GoalInfo_119);
                  {
                    Goal_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_124, 0) = ((MR_Box) (GoalExpr1_58));
                    MR_hl_field(0, Goal_124, 1) = ((MR_Box) (GoalInfo_119));
                  }
                  STATE_VARIABLE_ContainsTrace_108_108 = STATE_VARIABLE_ContainsTrace_0_6;
                  STATE_VARIABLE_Purity_107_107 = STATE_VARIABLE_Purity_0_4;
                }
                else
                {
                  MR_Word GoalPurity_74;
                  MR_Word GoalContainsTrace_75;

                  check_hlds__purity__compute_goal_purity_6_p_0(Goal1_53, &Goal_124, &GoalPurity_74, &GoalContainsTrace_75, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_98_98);
                  STATE_VARIABLE_Purity_107_107 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_74, STATE_VARIABLE_Purity_0_4);
                  STATE_VARIABLE_ContainsTrace_108_108 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_75, STATE_VARIABLE_ContainsTrace_0_6);
                }
                {
                  MarkedSubGoal_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MarkedSubGoal_68, 0) = ((MR_Box) (Goal_124));
                  MR_hl_field(1, MarkedSubGoal_68, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(1, MarkedSubGoal_68, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Invariants_109_109 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word UnifySpecs_65;
                MR_Word GoalInfo_66;
                MR_Word Goal_67;
                MR_Word STATE_VARIABLE_GoalInfo_10_162;

                check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_89_89, GoalInfo0_35, XVar_44, ConsId_48, YVars_49, &UnifySpecs_65);
                check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_65, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_98_98);
                hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, GoalInfo1_59, &STATE_VARIABLE_GoalInfo_10_162);
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_162, &GoalInfo_66);
                {
                  Goal_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal_67, 0) = ((MR_Box) (GoalExpr1_58));
                  MR_hl_field(0, Goal_67, 1) = ((MR_Box) (GoalInfo_66));
                }
                {
                  MarkedSubGoal_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MarkedSubGoal_68, 0) = ((MR_Box) (Goal_67));
                  MR_hl_field(0, MarkedSubGoal_68, 1) = ((MR_Box) (XVar_44));
                  MR_hl_field(0, MarkedSubGoal_68, 2) = ((MR_Box) (YVars_49));
                }
                STATE_VARIABLE_Purity_107_107 = STATE_VARIABLE_Purity_0_4;
                STATE_VARIABLE_ContainsTrace_108_108 = STATE_VARIABLE_ContainsTrace_0_6;
                STATE_VARIABLE_Invariants_109_109 = STATE_VARIABLE_Invariants_0_10;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Spec_76 = ((MR_Word) ((MR_hl_field(1, IsPlainUnify_54, (MR_Integer) 0))));

            check_hlds__purity__purity_info_add_message_3_p_0(Spec_76, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_98_98);
            {
              MarkedSubGoal_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MarkedSubGoal_68, 0) = ((MR_Box) (Goal1_53));
              MR_hl_field(1, MarkedSubGoal_68, 1) = ((MR_Box) (XVar_44));
              MR_hl_field(1, MarkedSubGoal_68, 2) = ((MR_Box) (YVars_49));
            }
            STATE_VARIABLE_Invariants_109_109 = (MR_Integer) 1;
            STATE_VARIABLE_Purity_107_107 = STATE_VARIABLE_Purity_0_4;
            STATE_VARIABLE_ContainsTrace_108_108 = STATE_VARIABLE_ContainsTrace_0_6;
          }
          break;
      }
      {
        STATE_VARIABLE_RevMarkedSubGoals_112_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevMarkedSubGoals_112_112, 0) = ((MR_Box) (MarkedSubGoal_68));
        MR_hl_field(1, STATE_VARIABLE_RevMarkedSubGoals_112_112, 1) = ((MR_Box) (STATE_VARIABLE_RevMarkedSubGoals_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_28;
      next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2 = STATE_VARIABLE_RevMarkedSubGoals_112_112;
      next_value_of_STATE_VARIABLE_Purity_0_4 = STATE_VARIABLE_Purity_107_107;
      next_value_of_STATE_VARIABLE_ContainsTrace_0_6 = STATE_VARIABLE_ContainsTrace_108_108;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_98_98;
      next_value_of_STATE_VARIABLE_Invariants_0_10 = STATE_VARIABLE_Invariants_109_109;
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
check_hlds__purity__LCMC__pred__compute_goal_purity__1_6_p_0(
  MR_Word Goal0_7,
  MR_Word * AddrOfGoal_21,
  MR_Word * Purity_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word Goal_8;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_14;
  MR_Word GoalInfo_15;
  MR_Word STATE_VARIABLE_GoalInfo_10_18;

  check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_18);
  switch (*ContainsTrace_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_18, &GoalInfo_15);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_18, &GoalInfo_15);
      break;
  }
  {
    Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_8, 0) = ((MR_Box) (GoalExpr_14));
    MR_hl_field(0, Goal_8, 1) = ((MR_Box) (GoalInfo_15));
  }
  *AddrOfGoal_21 = Goal_8;
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_9;

  check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_9;
  MR_Word conv0_STATE_VARIABLE_Info_31;

  check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_9, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_31);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_9));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_31));
}

static void MR_CALL 
check_hlds__purity__compute_shorthand_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  MR_bool succeeded;
  MR_Word ShortHand0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

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
        MR_Word GoalType_15 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Outer_16 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 1))));
        MR_Word Inner_17 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 2))));
        MR_Word MaybeOutputVars_18 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 3))));
        MR_Word MainGoal0_19 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 4))));
        MR_Word OrElseGoals0_20 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 5))));
        MR_Word OrElseInners_21 = ((MR_Word) ((MR_hl_field(1, ShortHand0_14, (MR_Integer) 6))));
        MR_Word RunPostTypecheck_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_52, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
        MR_Word MainGoal1_35;
        MR_Word OrElseGoals1_36;
        MR_Word MainGoal_39;
        MR_Word Purity1_40;
        MR_Word ContainsTrace1_41;
        MR_Word OrElseGoals_42;
        MR_Word Purity2_43;
        MR_Word ContainsTrace2_44;
        MR_Word ShortHand_45;
        MR_Word STATE_VARIABLE_Info_58_58;
        MR_Word STATE_VARIABLE_Info_67_67;
        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_52, (MR_Integer) 3))));
        MR_Word GoalExpr0_112;
        MR_Word GoalInfo0_113;
        MR_Word GoalExpr_114;
        MR_Word GoalInfo_115;
        MR_Word STATE_VARIABLE_GoalInfo_10_116;

        switch (RunPostTypecheck_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MainGoal1_35 = MainGoal0_19;
              OrElseGoals1_36 = OrElseGoals0_20;
              STATE_VARIABLE_Info_58_58 = STATE_VARIABLE_Info_0_52;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word OuterDI_24 = ((MR_Word) ((MR_hl_field(0, Outer_16, (MR_Integer) 0))));
              MR_Word OuterUO_25 = ((MR_Word) ((MR_hl_field(0, Outer_16, (MR_Integer) 1))));
              MR_Word Context_26;
              MR_Word OuterDIType_27;
              MR_Word OuterDITypeSpecs_28;
              MR_Word OuterUOType_29;
              MR_Word OuterUOTypeSpecs_30;
              MR_Word OuterMismatchSpecs_31;
              MR_Word OuterTypeSpecs_32;
              MR_Word Var_56;

              Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
              check_hlds__purity__check_outer_var_type_5_p_0(Context_26, Var_79, OuterDI_24, &OuterDIType_27, &OuterDITypeSpecs_28);
              check_hlds__purity__check_outer_var_type_5_p_0(Context_26, Var_79, OuterUO_25, &OuterUOType_29, &OuterUOTypeSpecs_30);
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_27, OuterUOType_29);
              if (succeeded)
                OuterMismatchSpecs_31 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Var_54;

                {
                  Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.mismatched_outer_var_types\'/1"));
                  MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Var_54, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                  MR_hl_field(1, Var_54, 3) = ((MR_Box) (Context_26));
                  MR_hl_field(1, Var_54, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[63])));
                }
                {
                  OuterMismatchSpecs_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OuterMismatchSpecs_31, 0) = ((MR_Box) (Var_54));
                  MR_hl_field(1, OuterMismatchSpecs_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OuterUOTypeSpecs_30, OuterMismatchSpecs_31);
              OuterTypeSpecs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OuterDITypeSpecs_28, Var_56);
              if ((OuterTypeSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word AtomicGoalsAndInners_37;
                MR_Word AllAtomicGoals1_38;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word STATE_VARIABLE_Info_62_62;
                MR_Box conv2_STATE_VARIABLE_Info_62_62;
                MR_Word Var_87;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Unsigned packed_word_2;

                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (MainGoal0_19));
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) (OrElseGoals0_20));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (Inner_17));
                  MR_hl_field(1, Var_60, 1) = ((MR_Box) (OrElseInners_21));
                }
                AtomicGoalsAndInners_37 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_59, Var_60);
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
                  MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__purity__compute_shorthand_expr_purity_7_p_0_1));
                  MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_61, 3) = ((MR_Box) (Outer_16));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__purity_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0), Var_61, AtomicGoalsAndInners_37, &AllAtomicGoals1_38, ((MR_Box) (STATE_VARIABLE_Info_0_52)), &conv2_STATE_VARIABLE_Info_62_62);
                STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv2_STATE_VARIABLE_Info_62_62));
                if ((AllAtomicGoals1_38 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_shorthand_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
                    return;
                  }
                else
                {
                  MainGoal1_35 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals1_38, (MR_Integer) 0))));
                  OrElseGoals1_36 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals1_38, (MR_Integer) 1))));
                }
                Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
                packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 1)));
                Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
                Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
                Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
                {
                  STATE_VARIABLE_Info_58_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_58_58, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(0, STATE_VARIABLE_Info_58_58, 1) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                  MR_hl_field(0, STATE_VARIABLE_Info_58_58, 2) = ((MR_Box) (Var_91));
                  MR_hl_field(0, STATE_VARIABLE_Info_58_58, 3) = ((MR_Box) (Var_92));
                  MR_hl_field(0, STATE_VARIABLE_Info_58_58, 4) = ((MR_Box) (Var_93));
                }
              }
              else
              {
                MR_Box conv4_STATE_VARIABLE_Info_58_58;

                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0), (MR_Word) (&check_hlds__purity_scalar_common_1[4]), OuterTypeSpecs_32, ((MR_Box) (STATE_VARIABLE_Info_0_52)), &conv4_STATE_VARIABLE_Info_58_58);
                STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv4_STATE_VARIABLE_Info_58_58));
                MainGoal1_35 = MainGoal0_19;
                OrElseGoals1_36 = OrElseGoals0_20;
              }
            }
            break;
        }
        GoalExpr0_112 = ((MR_Word) ((MR_hl_field(0, MainGoal1_35, (MR_Integer) 0))));
        GoalInfo0_113 = ((MR_Word) ((MR_hl_field(0, MainGoal1_35, (MR_Integer) 1))));
        check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_112, &GoalExpr_114, GoalInfo0_113, &Purity1_40, &ContainsTrace1_41, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_67_67);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity1_40, GoalInfo0_113, &STATE_VARIABLE_GoalInfo_10_116);
        switch (ContainsTrace1_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_116, &GoalInfo_115);
            break;
          case (MR_Integer) 0:
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_116, &GoalInfo_115);
            break;
        }
        {
          MainGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainGoal_39, 0) = ((MR_Box) (GoalExpr_114));
          MR_hl_field(0, MainGoal_39, 1) = ((MR_Box) (GoalInfo_115));
        }
        check_hlds__purity__compute_goals_purity_8_p_0(OrElseGoals1_36, &OrElseGoals_42, (MR_Integer) 0, &Purity2_43, (MR_Integer) 1, &ContainsTrace2_44, STATE_VARIABLE_Info_67_67, STATE_VARIABLE_Info_53);
        *Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(Purity1_40, Purity2_43);
        succeeded = (ContainsTrace1_41 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (ContainsTrace2_44 == (MR_Integer) 0);
        if (succeeded)
          *ContainsTrace_12 = (MR_Integer) 0;
        else
          *ContainsTrace_12 = (MR_Integer) 1;
        {
          ShortHand_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ShortHand_45, 0) = (MR_Box) ((MR_Unsigned) (GoalType_15));
          MR_hl_field(1, ShortHand_45, 1) = ((MR_Box) (Outer_16));
          MR_hl_field(1, ShortHand_45, 2) = ((MR_Box) (Inner_17));
          MR_hl_field(1, ShortHand_45, 3) = ((MR_Box) (MaybeOutputVars_18));
          MR_hl_field(1, ShortHand_45, 4) = ((MR_Box) (MainGoal_39));
          MR_hl_field(1, ShortHand_45, 5) = ((MR_Box) (OrElseGoals_42));
          MR_hl_field(1, ShortHand_45, 6) = ((MR_Box) (OrElseInners_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_45));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_46 = ((MR_Word) ((MR_hl_field(2, ShortHand0_14, (MR_Integer) 0))));
        MR_Word ResultVar_47 = ((MR_Word) ((MR_hl_field(2, ShortHand0_14, (MR_Integer) 1))));
        MR_Word SubGoal0_48 = ((MR_Word) ((MR_hl_field(2, ShortHand0_14, (MR_Integer) 2))));
        MR_Word ShortHand_74;
        MR_Word * AddrSubGoal_119;

        {
          ShortHand_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ShortHand_74, 0) = ((MR_Box) (MaybeIO_46));
          MR_hl_field(2, ShortHand_74, 1) = ((MR_Box) (ResultVar_47));
          MR_hl_field(2, ShortHand_74, 2) = NULL;
        }
        AddrSubGoal_119 = (MR_Word *) (&(MR_hl_field(2, ShortHand_74, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_74));
        }
        check_hlds__purity__LCMC__pred__compute_goal_purity__1_6_p_0(SubGoal0_48, AddrSubGoal_119, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_52, STATE_VARIABLE_Info_53);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__purity__compute_scope_expr_purity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
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
  MR_bool succeeded;
  MR_Word Reason0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
  MR_Word SubGoal0_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) Reason0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word SubGoal_91;
        MR_Word GoalExpr0_117 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 0))));
        MR_Word GoalInfo0_118 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 1))));
        MR_Word GoalExpr_119;
        MR_Word GoalInfo_120;
        MR_Word STATE_VARIABLE_GoalInfo_10_121;

        check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_117, &GoalExpr_119, GoalInfo0_118, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_11, GoalInfo0_118, &STATE_VARIABLE_GoalInfo_10_121);
        switch (*ContainsTrace_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_121, &GoalInfo_120);
            break;
          case (MR_Integer) 0:
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_121, &GoalInfo_120);
            break;
        }
        {
          SubGoal_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubGoal_91, 0) = ((MR_Box) (GoalExpr_119));
          MR_hl_field(0, SubGoal_91, 1) = ((MR_Box) (GoalInfo_120));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_91));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason0_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_17;
            MR_Word Var_18;

            *Purity_11 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_14, (MR_Integer) 1))) & (MR_Integer) 3);
            check_hlds__purity__compute_goal_purity_6_p_0(SubGoal0_15, &SubGoal_17, &Var_18, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_17));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_91;
            MR_Word GoalExpr0_117 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 0))));
            MR_Word GoalInfo0_118 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 1))));
            MR_Word GoalExpr_119;
            MR_Word GoalInfo_120;
            MR_Word STATE_VARIABLE_GoalInfo_10_121;

            check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_117, &GoalExpr_119, GoalInfo0_118, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_0_59, STATE_VARIABLE_Info_60);
            hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_11, GoalInfo0_118, &STATE_VARIABLE_GoalInfo_10_121);
            switch (*ContainsTrace_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_121, &GoalInfo_120);
                break;
              case (MR_Integer) 0:
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_121, &GoalInfo_120);
                break;
            }
            {
              SubGoal_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubGoal_91, 0) = ((MR_Box) (GoalExpr_119));
              MR_hl_field(0, SubGoal_91, 1) = ((MR_Box) (GoalInfo_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_91));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TermVar_19 = ((MR_Word) ((MR_hl_field(3, Reason0_14, (MR_Integer) 1))));
            MR_Word Kind0_20 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_14, (MR_Integer) 2))) & (MR_Integer) 3);

            switch (Kind0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_Word SubGoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 0))));
                  MR_Word SubGoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 1))));
                  MR_Word SubGoals0_24;
                  MR_Word PostTypeCheck_25;
                  MR_Word SubGoals0Prime_23;
                  MR_Word Var_62;

                  succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_62 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_21, (MR_Integer) 1))) & (MR_Integer) 1);
                    SubGoals0Prime_23 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_21, (MR_Integer) 2))));
                    succeeded = (Var_62 == (MR_Integer) 0);
                  }
                  if (succeeded)
                    SubGoals0_24 = SubGoals0Prime_23;
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.purity.compute_scope_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
                      return;
                    }
                  PostTypeCheck_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
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
                              *GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, SubGoal_83, (MR_Integer) 0))));
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word RevSubGoals_28;
                              MR_Word SubGoals_29;
                              MR_Word SubGoalExpr_30;
                              MR_Word SubGoalInfo_31;
                              MR_Word SubGoal_82;
                              MR_Word STATE_VARIABLE_GoalInfo_10_124;

                              mercury__list__map_3_p_0((MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__purity_scalar_common_1[3]), RevMarkedSubGoals_26, &RevSubGoals_28);
                              mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevSubGoals_28, &SubGoals_29);
                              {
                                SubGoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, SubGoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                MR_hl_field(3, SubGoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                MR_hl_field(3, SubGoalExpr_30, 2) = ((MR_Box) (SubGoals_29));
                              }
                              hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_11, SubGoalInfo0_22, &STATE_VARIABLE_GoalInfo_10_124);
                              switch (*ContainsTrace_12) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_124, &SubGoalInfo_31);
                                  break;
                                case (MR_Integer) 0:
                                  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_124, &SubGoalInfo_31);
                                  break;
                              }
                              {
                                SubGoal_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, SubGoal_82, 0) = ((MR_Box) (SubGoalExpr_30));
                                MR_hl_field(0, SubGoal_82, 1) = ((MR_Box) (SubGoalInfo_31));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_9 = base;
                                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
                                MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_82));
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
                  MR_Word STATE_VARIABLE_Info_74_74;
                  MR_Word SubGoal_88;
                  MR_Word GoalExpr0_127;
                  MR_Word GoalInfo0_128;
                  MR_Word GoalExpr_129;
                  MR_Word GoalInfo_130;
                  MR_Word STATE_VARIABLE_GoalInfo_10_131;
                  MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
                  MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 2))));
                  MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 3))));
                  MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 4))));
                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 1)));

                  {
                    STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (Var_99));
                    MR_hl_field(0, STATE_VARIABLE_Info_74_74, 1) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(0, STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_103));
                    MR_hl_field(0, STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_104));
                    MR_hl_field(0, STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (Var_105));
                  }
                  GoalExpr0_127 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 0))));
                  GoalInfo0_128 = ((MR_Word) ((MR_hl_field(0, SubGoal0_15, (MR_Integer) 1))));
                  check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_127, &GoalExpr_129, GoalInfo0_128, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_60);
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_11, GoalInfo0_128, &STATE_VARIABLE_GoalInfo_10_131);
                  switch (*ContainsTrace_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_131, &GoalInfo_130);
                      break;
                    case (MR_Integer) 0:
                      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_131, &GoalInfo_130);
                      break;
                  }
                  {
                    SubGoal_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SubGoal_88, 0) = ((MR_Box) (GoalExpr_129));
                    MR_hl_field(0, SubGoal_88, 1) = ((MR_Box) (GoalInfo_130));
                  }
                  HaveConvertedUnify_36 = ((MR_Unsigned) ((MR_hl_field(0, *STATE_VARIABLE_Info_60, (MR_Integer) 1))) & (MR_Integer) 1);
                  switch (HaveConvertedUnify_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word Reason_37;

                        {
                          Reason_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Reason_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, Reason_37, 1) = ((MR_Box) (TermVar_19));
                          MR_hl_field(3, Reason_37, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_37));
                          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_88));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_9 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_88));
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_92));
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

static void MR_CALL 
check_hlds__purity__compute_unify_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  MR_bool succeeded;
  MR_Word LHSVar_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
  MR_Word RHS0_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
  MR_Word Mode_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
  MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
  MR_Word UnifyContext_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) RHS0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *GoalExpr_9 = GoalExpr0_8;
        *Purity_11 = (MR_Integer) 0;
        *ContainsTrace_12 = (MR_Integer) 1;
        *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_39 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 0))));
        MR_Word Args_41 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 2))));
        MR_Word RunPostTypecheck_42 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
        MR_Word Goal1_46;
        MR_Word Goal_58;
        MR_Word STATE_VARIABLE_Info_69_69;
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, (MR_Integer) 0))));
        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, (MR_Integer) 2))));
        MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, (MR_Integer) 3))));
        MR_Word Var_72;

        switch (RunPostTypecheck_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                Goal1_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal1_46, 0) = ((MR_Box) (GoalExpr0_8));
                MR_hl_field(0, Goal1_46, 1) = ((MR_Box) (GoalInfo_10));
              }
              STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_0_61;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word IsPlainUnify_47;
              MR_Word ResolveSpecs_48;
              MR_Word VarTable_49;
              MR_Word PredInfo_50;
              MR_Word STATE_VARIABLE_Info_66_66;
              MR_Word STATE_VARIABLE_Info_68_68;
              MR_Word Var_100;
              MR_Word Var_106;
              MR_Unsigned packed_word_2;

              check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0(Var_76, LHSVar_14, ConsId_39, Args_41, Mode_16, Unification_17, UnifyContext_18, GoalInfo_10, &Goal1_46, &IsPlainUnify_47, &ResolveSpecs_48, Var_80, &VarTable_49, Var_79, &PredInfo_50);
              check_hlds__purity__purity_info_add_messages_3_p_0(ResolveSpecs_48, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_66_66);
              Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_66_66, (MR_Integer) 0))));
              packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_66_66, (MR_Integer) 1)));
              Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_66_66, (MR_Integer) 4))));
              {
                STATE_VARIABLE_Info_68_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_68_68, 0) = ((MR_Box) (Var_100));
                MR_hl_field(0, STATE_VARIABLE_Info_68_68, 1) = (MR_Box) (packed_word_2);
                MR_hl_field(0, STATE_VARIABLE_Info_68_68, 2) = ((MR_Box) (PredInfo_50));
                MR_hl_field(0, STATE_VARIABLE_Info_68_68, 3) = ((MR_Box) (VarTable_49));
                MR_hl_field(0, STATE_VARIABLE_Info_68_68, 4) = ((MR_Box) (Var_106));
              }
              switch (MR_tag((MR_Word) IsPlainUnify_47)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(IsPlainUnify_47)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Info_69_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_Info_69_69, 0) = ((MR_Box) (Var_100));
                        MR_hl_field(0, STATE_VARIABLE_Info_69_69, 1) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                        MR_hl_field(0, STATE_VARIABLE_Info_69_69, 2) = ((MR_Box) (PredInfo_50));
                        MR_hl_field(0, STATE_VARIABLE_Info_69_69, 3) = ((MR_Box) (VarTable_49));
                        MR_hl_field(0, STATE_VARIABLE_Info_69_69, 4) = ((MR_Box) (Var_106));
                      }
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_68_68;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Spec_75 = ((MR_Word) ((MR_hl_field(1, IsPlainUnify_47, (MR_Integer) 0))));

                    check_hlds__purity__purity_info_add_message_3_p_0(Spec_75, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
                  }
                  break;
              }
            }
            break;
        }
        Var_72 = ((MR_Word) ((MR_hl_field(0, Goal1_46, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word UnifySpecs_57;

          check_hlds__purity__check_var_functor_unify_purity_6_p_0(STATE_VARIABLE_Info_69_69, GoalInfo_10, LHSVar_14, ConsId_39, Args_41, &UnifySpecs_57);
          check_hlds__purity__purity_info_add_messages_3_p_0(UnifySpecs_57, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_62);
          *Purity_11 = (MR_Integer) 0;
          *ContainsTrace_12 = (MR_Integer) 1;
          Goal_58 = Goal1_46;
        }
        else
          check_hlds__purity__compute_goal_purity_6_p_0(Goal1_46, &Goal_58, Purity_11, ContainsTrace_12, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_62);
        *GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_58, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaPurity_19 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word LambdaNonLocals_23 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 2))));
        MR_Word LambdaArgVarsModes_24 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 3))));
        MR_Word LambdaDetism_25 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_26 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 5))));
        MR_Word LambdaGoalExpr0_27 = ((MR_Word) ((MR_hl_field(0, LambdaGoal0_26, (MR_Integer) 0))));
        MR_Word LambdaGoalInfo0_28 = ((MR_Word) ((MR_hl_field(0, LambdaGoal0_26, (MR_Integer) 1))));
        MR_Word LambdaGoalExpr_29;
        MR_Word GoalPurity_30;
        MR_Word LambdaGoal_32;
        MR_Word RHS_33;
        MR_Word ClosureSpecs_34;
        MR_Word DeclaredPurity_35;
        MR_Word STATE_VARIABLE_Info_63_63;
        MR_Word STATE_VARIABLE_Info_64_64;
        MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0)));
        MR_Word Var_31;

        check_hlds__purity__compute_expr_purity_7_p_0(LambdaGoalExpr0_27, &LambdaGoalExpr_29, LambdaGoalInfo0_28, &GoalPurity_30, &Var_31, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_63_63);
        {
          LambdaGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaGoal_32, 0) = ((MR_Box) (LambdaGoalExpr_29));
          MR_hl_field(0, LambdaGoal_32, 1) = ((MR_Box) (LambdaGoalInfo0_28));
        }
        {
          RHS_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_33, 0) = (MR_Box) (packed_word_3);
          MR_hl_field(2, RHS_33, 1) = NULL;
          MR_hl_field(2, RHS_33, 2) = ((MR_Box) (LambdaNonLocals_23));
          MR_hl_field(2, RHS_33, 3) = ((MR_Box) (LambdaArgVarsModes_24));
          MR_hl_field(2, RHS_33, 4) = (MR_Box) ((MR_Unsigned) (LambdaDetism_25));
          MR_hl_field(2, RHS_33, 5) = ((MR_Box) (LambdaGoal_32));
        }
        check_hlds__purity__check_closure_purity_4_p_0(GoalInfo_10, LambdaPurity_19, GoalPurity_30, &ClosureSpecs_34);
        check_hlds__purity__purity_info_add_messages_3_p_0(ClosureSpecs_34, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_64_64);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_33));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_16));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_17));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_18));
        }
        DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
        switch (DeclaredPurity_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Context_36;
              MR_Word Spec_37;

              Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
              Spec_37 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_36, DeclaredPurity_35);
              check_hlds__purity__purity_info_add_message_3_p_0(Spec_37, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_64_64;
            break;
        }
        *Purity_11 = (MR_Integer) 0;
        *ContainsTrace_12 = (MR_Integer) 1;
      }
      break;
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
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_20;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Purity_39_39;
    MR_Word STATE_VARIABLE_ContainsTrace_40_40;
    MR_Word GoalExpr0_41 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 0))));
    MR_Word GoalInfo0_42 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 1))));
    MR_Word GoalExpr_43;
    MR_Word GoalInfo_44;
    MR_Word STATE_VARIABLE_GoalInfo_10_45;
    MR_Word * AddrGoals_73;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_41, &GoalExpr_43, GoalInfo0_42, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_42, &STATE_VARIABLE_GoalInfo_10_45);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_45, &GoalInfo_44);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_45, &GoalInfo_44);
        break;
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_20, 0) = ((MR_Box) (GoalExpr_43));
      MR_hl_field(0, Goal_20, 1) = ((MR_Box) (GoalInfo_44));
    }
    switch (GoalPurity_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word GoalInfo0_28 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 1))));
          MR_Word Context_29;
          MR_Word Spec_30;
          MR_String PurityName_48;
          MR_Word Pieces_49;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Msgs0_58;
          MR_Word Msgs_59;
          MR_Word Var_60;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Unsigned packed_word_0;

          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_28);
          parse_tree__parse_tree_out_misc__purity_name_2_p_0(GoalPurity_25, &PurityName_48);
          {
            Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_53, 0) = ((MR_Box) (PurityName_48));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[58])));
          }
          {
            Pieces_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[55])));
            MR_hl_field(1, Pieces_49, 1) = ((MR_Box) (Var_52));
          }
          {
            Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.impure_parallel_conjunct_error\'/2"));
            MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 60U));
            MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_29));
            MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_49));
          }
          Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
          Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
          Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
          Msgs0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
          {
            Msgs_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Msgs_59, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(1, Msgs_59, 1) = ((MR_Box) (Msgs0_58));
          }
          {
            STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (Var_60));
            MR_hl_field(0, STATE_VARIABLE_Info_38_38, 1) = (MR_Box) (packed_word_0);
            MR_hl_field(0, STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (Var_64));
            MR_hl_field(0, STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (Var_65));
            MR_hl_field(0, STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (Msgs_59));
          }
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrGoals_73 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__purity__LCMC__pred__compute_parallel_goals_purity__1_8_p_0(Goals0_19, AddrGoals_73, STATE_VARIABLE_Purity_39_39, STATE_VARIABLE_Purity_4, STATE_VARIABLE_ContainsTrace_40_40, STATE_VARIABLE_ContainsTrace_6, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_8);
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
    MR_Word HeadGoal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailGoals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadGoal_24;
    MR_Word GoalPurity_25;
    MR_Word GoalContainsTrace_26;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Purity_35_35;
    MR_Word STATE_VARIABLE_ContainsTrace_36_36;
    MR_Word GoalExpr0_37 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_18, (MR_Integer) 0))));
    MR_Word GoalInfo0_38 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_18, (MR_Integer) 1))));
    MR_Word GoalExpr_39;
    MR_Word GoalInfo_40;
    MR_Word STATE_VARIABLE_GoalInfo_10_41;
    MR_Word * AddrTailGoals_44;

    check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_37, &GoalExpr_39, GoalInfo0_38, &GoalPurity_25, &GoalContainsTrace_26, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_34_34);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(GoalPurity_25, GoalInfo0_38, &STATE_VARIABLE_GoalInfo_10_41);
    switch (GoalContainsTrace_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_41, &GoalInfo_40);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_41, &GoalInfo_40);
        break;
    }
    {
      HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadGoal_24, 0) = ((MR_Box) (GoalExpr_39));
      MR_hl_field(0, HeadGoal_24, 1) = ((MR_Box) (GoalInfo_40));
    }
    STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(GoalPurity_25, STATE_VARIABLE_Purity_0_3);
    STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_26, STATE_VARIABLE_ContainsTrace_0_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_24));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTailGoals_44 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__purity__LCMC__pred__compute_goals_purity__1_8_p_0(TailGoals0_19, AddrTailGoals_44, STATE_VARIABLE_Purity_35_35, STATE_VARIABLE_Purity_4, STATE_VARIABLE_ContainsTrace_36_36, STATE_VARIABLE_ContainsTrace_6, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_8);
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
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_14;
  MR_Word GoalInfo_15;
  MR_Word STATE_VARIABLE_GoalInfo_10_18;

  check_hlds__purity__compute_expr_purity_7_p_0(GoalExpr0_12, &GoalExpr_14, GoalInfo0_13, Purity_9, ContainsTrace_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  hlds__hlds_goal__goal_info_set_purity_3_p_0(*Purity_9, GoalInfo0_13, &STATE_VARIABLE_GoalInfo_10_18);
  switch (*ContainsTrace_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_18, &GoalInfo_15);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, STATE_VARIABLE_GoalInfo_10_18, &GoalInfo_15);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_15));
  }
}

static void MR_CALL 
check_hlds__purity__check_outer_var_type_5_p_0(
  MR_Word Context_6,
  MR_Word VarTable_7,
  MR_Word Var_8,
  MR_Word * VarType_9,
  MR_Word * Specs_10)
{
  MR_bool succeeded;
  MR_Word VarEntry_11;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_7, Var_8, &VarEntry_11);
  *VarType_9 = ((MR_Word) ((MR_hl_field(0, VarEntry_11, (MR_Integer) 1))));
  {
    MR_Word Var_16;

    Var_16 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*VarType_9, Var_16);
  }
  if (!(succeeded))
  {
    MR_Word Var_17;

    Var_17 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*VarType_9, Var_17);
  }
  if (succeeded)
    *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Spec_12;
    MR_Word Pieces_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;

    Var_25 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(VarTable_7, Var_8);
    {
      Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[61])));
    }
    {
      Pieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[59])));
      MR_hl_field(1, Pieces_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.bad_outer_var_type_error\'/3"));
      MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_6));
      MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
      MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
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
        XVarPrime_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 0))));
        Y_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Y_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_20 = ((MR_Word) ((MR_hl_field(1, Y_16, (MR_Integer) 0))));
          YVarsPrime_22 = ((MR_Word) ((MR_hl_field(1, Y_16, (MR_Integer) 2))));
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
      STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnifySpecs_26, STATE_VARIABLE_Specs_0_3);
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
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  if ((Specs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  else
  {
    MR_Word Msgs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    MR_Word Msgs_9;
    MR_Word Var_18;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Unsigned packed_word_1;

    Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_4, Msgs0_8);
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 4) = ((MR_Box) (Msgs_9));
    }
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Msgs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Msgs_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));

  {
    Msgs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Msgs_7, 0) = ((MR_Box) (Spec_4));
    MR_hl_field(1, Msgs_7, 1) = ((MR_Box) (Msgs0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Msgs_7));
  }
}

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word DeclaredPurity_6,
  MR_Word ActualPurity_7,
  MR_Word * Specs_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data__less_pure_2_p_0(ActualPurity_7, DeclaredPurity_6);
  if (succeeded)
  {
    MR_Word Context_9;
    MR_Word Spec_10;
    MR_String ActualPurityName_12;
    MR_Word Pieces_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;

    Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_5);
    parse_tree__parse_tree_out_misc__purity_name_2_p_0(ActualPurity_7, &ActualPurityName_12);
    {
      Var_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_17, 0) = ((MR_Box) (ActualPurityName_12));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[26])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[54])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[6])));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[53])));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.report_error_closure_purity\'/3"));
      MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 60U));
      MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_9));
      MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_bool succeeded;
  MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));
  MR_Word TypeOfVar_14;
  MR_Word PredInfo_15;
  MR_Word CallerMarkers_16;
  MR_Word Context_17;
  MR_Word ClosureSpecs_36;
  MR_Word DeclaredPurity_37;
  MR_Word PName_18;
  MR_Word TypePurity_21;
  MR_Word PredOrFunc_22;
  MR_Word VarArgTypes_24;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_13, Var_9, &TypeOfVar_14);
  PredInfo_15 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 2))));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &CallerMarkers_16);
  Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
  succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    PName_18 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
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
    MR_Word GetCalleeSpecs_32;
    MR_Word Var_39;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_15, &TVarSet_25);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_15, &ExistQTVars_26);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_15, &ExternalTypeParams_27);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_13, Args_11, &ArgTypes0_28);
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_28, VarArgTypes_24, &PredArgTypes_29);
    ModuleInfo_30 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
    Var_39 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(CallerMarkers_16);
    succeeded = hlds__pred_table__get_pred_id_by_types_11_p_0(Var_39, PName_18, PredOrFunc_22, TVarSet_25, ExistQTVars_26, PredArgTypes_29, ExternalTypeParams_27, ModuleInfo_30, Context_17, &CalleePredId_31, &GetCalleeSpecs_32);
    if (succeeded)
    {
      MR_Word CalleePredInfo_33;
      MR_Word CalleePurity_34;
      MR_Word ClosurePuritySpecs_35;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, CalleePredId_31, &CalleePredInfo_33);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(CalleePredInfo_33, &CalleePurity_34);
      succeeded = parse_tree__prog_data__less_pure_2_p_0(CalleePurity_34, TypePurity_21);
      if (succeeded)
      {
        MR_Word Context_61;
        MR_Word Spec_62;
        MR_String ActualPurityName_64;
        MR_Word Pieces_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_73;
        MR_Word Var_76;

        Context_61 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(CalleePurity_34, &ActualPurityName_64);
        {
          Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_69, 0) = ((MR_Box) (ActualPurityName_64));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[26])));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[54])));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[6])));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          Pieces_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_65, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[53])));
          MR_hl_field(1, Pieces_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Spec_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_62, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.report_error_closure_purity\'/3"));
          MR_hl_field(1, Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_62, 2) = ((MR_Box) ((MR_Unsigned) 60U));
          MR_hl_field(1, Spec_62, 3) = ((MR_Box) (Context_61));
          MR_hl_field(1, Spec_62, 4) = ((MR_Box) (Pieces_65));
        }
        {
          ClosurePuritySpecs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ClosurePuritySpecs_35, 0) = ((MR_Box) (Spec_62));
          MR_hl_field(1, ClosurePuritySpecs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        ClosurePuritySpecs_35 = (MR_Word) ((MR_Unsigned) 0U);
      ClosureSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetCalleeSpecs_32, ClosurePuritySpecs_35);
    }
    else
      ClosureSpecs_36 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    ClosureSpecs_36 = (MR_Word) ((MR_Unsigned) 0U);
  DeclaredPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_8);
  switch (DeclaredPurity_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(CallerMarkers_16, (MR_Integer) 24);
        if (succeeded)
          *Specs_12 = ClosureSpecs_36;
        else
        {
          MR_Word Spec_38;

          Spec_38 = check_hlds__purity__impure_unification_expr_error_2_f_0(Context_17, DeclaredPurity_37);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Specs_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (ClosureSpecs_36));
          }
        }
      }
      break;
    case (MR_Integer) 0:
      *Specs_12 = ClosureSpecs_36;
      break;
  }
}

MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
  MR_Word Context_4,
  MR_Word Purity_5)
{
  MR_Word Spec_6;
  MR_String PurityName_7;
  MR_Word Pieces_8;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_15;

  parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_5, &PurityName_7);
  {
    Var_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_15, 0) = ((MR_Box) (PurityName_7));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[7])));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[2])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[1])));
    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_11));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.impure_unification_expr_error\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Context_4));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_8));
  }
  return Spec_6;
}

static void MR_CALL 
check_hlds__purity__compute_plain_call_expr_purity_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word * Purity_11,
  MR_Word * ContainsTrace_12,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word PredId0_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 0))));
  MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 1))));
  MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 2))));
  MR_Word Status_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word MaybeUnifyContext_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 4))));
  MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 5))));
  MR_Word RunPostTypecheck_20 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  MR_Word PredInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
  MR_Word ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
  MR_Word CallContext_23;
  MR_Word PredId_24;
  MR_Word DeclaredPurity_29;
  MR_Word STATE_VARIABLE_Info_33_33;

  CallContext_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  switch (RunPostTypecheck_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        PredId_24 = PredId0_14;
        *GoalExpr_9 = GoalExpr0_8;
        STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word SymName_25;
        MR_Word Var_78;
        MR_Word Var_34;
        MR_String Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_68;

        Var_78 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId0_14, Var_78);
        if (succeeded)
        {
          MR_Word ResolveSpecs_26;
          MR_Word TVarSet_70;
          MR_Word ExistQVars_71;
          MR_Word ExternalTypeParams_72;
          MR_Word Markers_73;
          MR_Word ClausesInfo_74;
          MR_Word VarTable_75;
          MR_Word ArgTypes_76;

          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_70);
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_21, &ExistQVars_71);
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_21, &ExternalTypeParams_72);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_73);
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_21, &ClausesInfo_74);
          hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_74, &VarTable_75);
          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_75, ArgVars_16, &ArgTypes_76);
          hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_22, Markers_73, TVarSet_70, ExistQVars_71, ArgTypes_76, ExternalTypeParams_72, CallContext_23, SymName0_19, &SymName_25, &PredId_24, &ResolveSpecs_26);
          if ((ResolveSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_0_31;
          else
          {
            MR_Word Msgs0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
            MR_Word Msgs_83;
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 1)));

            Msgs_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ResolveSpecs_26, Msgs0_82);
            {
              STATE_VARIABLE_Info_33_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_33_33, 0) = ((MR_Box) (Var_84));
              MR_hl_field(0, STATE_VARIABLE_Info_33_33, 1) = (MR_Box) (packed_word_2);
              MR_hl_field(0, STATE_VARIABLE_Info_33_33, 2) = ((MR_Box) (Var_88));
              MR_hl_field(0, STATE_VARIABLE_Info_33_33, 3) = ((MR_Box) (Var_89));
              MR_hl_field(0, STATE_VARIABLE_Info_33_33, 4) = ((MR_Box) (Msgs_83));
            }
          }
        }
        else
        {
          MR_Word PredInfo_77;

          PredId_24 = PredId0_14;
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_22, PredId_24, &PredInfo_77);
          hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_77, &SymName_25);
          STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_0_31;
        }
        succeeded = ((MR_tag((MR_Word) SymName_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(1, SymName_25, (MR_Integer) 0))));
          Var_35 = ((MR_String) ((MR_hl_field(1, SymName_25, (MR_Integer) 1))));
          Var_68 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_34, Var_68);
          if (succeeded)
          {
            succeeded = (strcmp(Var_35, (MR_String) "unsafe_type_cast") == 0);
            if (succeeded)
            {
              succeeded = (ArgVars_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, (MR_Integer) 1))));
                succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
                  succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;

          Var_44 = parse_tree__prog_mode__in_mode_0_f_0();
          Var_46 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_3[0])));
            MR_hl_field(3, base, 2) = ((MR_Box) (ArgVars_16));
            MR_hl_field(3, base, 3) = ((MR_Box) (Var_43));
            MR_hl_field(3, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (PredId_24));
            MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_15));
            MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_16));
            MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Status_17));
            MR_hl_field(2, base, 4) = ((MR_Box) (MaybeUnifyContext_18));
            MR_hl_field(2, base, 5) = ((MR_Box) (SymName_25));
          }
      }
      break;
  }
  DeclaredPurity_29 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
  check_hlds__purity__perform_goal_purity_checks_6_p_0(CallContext_23, PredId_24, DeclaredPurity_29, Purity_11, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_32);
  *ContainsTrace_12 = (MR_Integer) 1;
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
  MR_bool succeeded;
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
  MR_Word PredInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
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
        MR_Word PredInfo_37;
        MR_Word PredOrFunc_38;
        MR_Word Purity_39;
        MR_String PurityName_40;
        MR_Word PredPieces_41;
        MR_Word Pieces1_42;
        MR_Word Pieces2_43;
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Word Var_69;
        MR_Word Msgs0_71;
        MR_Word Msgs_72;
        MR_Word Var_73;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Unsigned packed_word_1;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_8, &PredInfo_37);
        PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_37);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_37, &Purity_39);
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_39, &PurityName_40);
        PredPieces_41 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_12, (MR_Integer) 0, PredId_8);
        {
          Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_49, 0) = ((MR_Box) (PurityName_40));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[40])));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
        }
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_41, (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[12])));
        Pieces1_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_51);
        switch (PredOrFunc_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_60;
              MR_Word Var_63;
              MR_Word Var_64;

              {
                Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_64, 1) = ((MR_Box) (PurityName_40));
              }
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[44])));
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[42])));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
              }
              {
                Pieces2_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces2_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[41])));
                MR_hl_field(1, Pieces2_43, 1) = ((MR_Box) (Var_60));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_55;
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_56, 1) = ((MR_Box) (PurityName_40));
              }
              {
                Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[44])));
              }
              {
                Pieces2_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces2_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[45])));
                MR_hl_field(1, Pieces2_43, 1) = ((MR_Box) (Var_55));
              }
            }
            break;
        }
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_42, Pieces2_43);
        {
          Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.error_missing_body_impurity_decl\'/3"));
          MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 60U));
          MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Context_7));
          MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Var_69));
        }
        Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
        Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
        Msgs0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
        {
          Msgs_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_72, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(1, Msgs_72, 1) = ((MR_Box) (Msgs0_71));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
          MR_hl_field(0, base, 1) = (MR_Box) (packed_word_1);
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_78));
          MR_hl_field(0, base, 4) = ((MR_Box) (Msgs_72));
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
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 24);
        }
        if (succeeded)
          *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
        else
        {
          MR_Word Spec_24;
          MR_Word Msgs0_86;
          MR_Word Msgs_87;
          MR_Word Var_88;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Unsigned packed_word_2;

          Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(ModuleInfo_12, PredId_8, Context_7, DeclaredPurity_9);
          Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
          Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
          Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
          Msgs0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
          {
            Msgs_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Msgs_87, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(1, Msgs_87, 1) = ((MR_Box) (Msgs0_86));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
            MR_hl_field(0, base, 1) = (MR_Box) (packed_word_2);
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_92));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_93));
            MR_hl_field(0, base, 4) = ((MR_Box) (Msgs_87));
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
  MR_Word Var_58;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_11, &ActualPurity_12);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(DeclaredPurity_9, &DeclaredPurityName_13);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(ActualPurity_12, &ActualPurityName_14);
  PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (DeclaredPurityName_13));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[44])));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[27])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[11])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_15, Var_24);
  Pieces1_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[47])), Var_23);
  switch (ActualPurity_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_48, 1) = ((MR_Box) (ActualPurityName_14));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[50])));
        }
        {
          Pieces2_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[48])));
          MR_hl_field(1, Pieces2_17, 1) = ((MR_Box) (Var_47));
        }
      }
      break;
    case (MR_Integer) 0:
      Pieces2_17 = (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[52]));
      break;
  }
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_16, Pieces2_17);
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.warn_unnecessary_body_impurity_decl\'/4"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_8));
    MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Var_58));
  }
  return Spec_10;
}

static void MR_CALL 
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word ActualPurity_11,
  MR_Word DeclaredPurity_12,
  MR_Word MaybePromisedPurity_13,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Specs_30_30;

  if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_30_30 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PromisedPurity_15 = ((MR_Word) ((MR_hl_field(1, MaybePromisedPurity_13, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Word PredOrigin_17;
    MR_Word OriginUser_75;

    succeeded = (DeclaredPurity_12 == PromisedPurity_15);
    if (succeeded)
      STATE_VARIABLE_Specs_28_28 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InconsistentPromiseSpec_16;
      MR_Word Context_35;
      MR_Word PredOrFunc_36;
      MR_String PredOrFuncStr_37;
      MR_String PurityName_38;
      MR_Word PredContextPieces_39;
      MR_Word MainPieces_40;
      MR_Word VerbosePieces_41;
      MR_Word Msg_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_63;
      MR_Word PredPieces_66;
      MR_Word Var_72;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_35);
      PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
      PredOrFuncStr_37 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_36);
      parse_tree__parse_tree_out_misc__purity_name_2_p_0(DeclaredPurity_12, &PurityName_38);
      PredPieces_66 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_66, (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[12])));
      PredContextPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[10])), Var_72);
      {
        Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_47, 0) = ((MR_Box) (PurityName_38));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[15])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[13])));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
      }
      MainPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredContextPieces_39, Var_43);
      {
        Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_52, 0) = ((MR_Box) (PredOrFuncStr_37));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[22])));
      }
      {
        VerbosePieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VerbosePieces_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[16])));
        MR_hl_field(1, VerbosePieces_41, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (MainPieces_40));
      }
      {
        Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_57, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(2, Var_57, 1) = ((MR_Box) (VerbosePieces_41));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
      }
      {
        Msg_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Msg_42, 0) = ((MR_Box) (Context_35));
        MR_hl_field(2, Msg_42, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Msg_42));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        InconsistentPromiseSpec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InconsistentPromiseSpec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.error_inconsistent_purity_promise\'/4"));
        MR_hl_field(0, InconsistentPromiseSpec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, InconsistentPromiseSpec_16, 2) = ((MR_Box) ((MR_Unsigned) 60U));
        MR_hl_field(0, InconsistentPromiseSpec_16, 3) = ((MR_Box) (Var_63));
      }
      {
        STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (InconsistentPromiseSpec_16));
        MR_hl_field(1, STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    succeeded = (ActualPurity_11 == PromisedPurity_15);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &PredOrigin_17);
      succeeded = ((MR_tag((MR_Word) PredOrigin_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        OriginUser_75 = ((MR_Word) ((MR_hl_field(0, PredOrigin_17, (MR_Integer) 0))));
        if (((((((MR_tag((MR_Word) OriginUser_75)) == (MR_Integer) 2)) || (((((MR_tag((MR_Word) OriginUser_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OriginUser_75, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) OriginUser_75)) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
    {
      MR_Word UnnecessaryPromiseSpec_18;

      UnnecessaryPromiseSpec_18 = check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, PromisedPurity_15);
      {
        STATE_VARIABLE_Specs_30_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_30_30, 0) = ((MR_Box) (UnnecessaryPromiseSpec_18));
        MR_hl_field(1, STATE_VARIABLE_Specs_30_30, 1) = ((MR_Box) (STATE_VARIABLE_Specs_28_28));
      }
    }
    else
      STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_28_28;
  }
  switch (ActualPurity_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (DeclaredPurity_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
        case (MR_Integer) 0:
          if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word NotPureEnoughSpec_21;

            NotPureEnoughSpec_21 = check_hlds__purity__error_not_pure_enough_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NotPureEnoughSpec_21));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
            }
          }
          else
            *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
        case (MR_Integer) 1:
          if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word NotPureEnoughSpec_151;

            NotPureEnoughSpec_151 = check_hlds__purity__error_not_pure_enough_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NotPureEnoughSpec_151));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
            }
          }
          else
            *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (DeclaredPurity_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word Markers_22;
            MR_Word GoalType_23;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_22);
            hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_10, &GoalType_23);
            {
              MR_Word NPGoalType_24;

              succeeded = ((MR_tag((MR_Word) GoalType_23)) == (MR_Integer) 0);
              if (succeeded)
              {
                NPGoalType_24 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_23, (MR_Integer) 0))) & (MR_Integer) 3);
                switch (NPGoalType_24) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
            }
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, (MR_Integer) 11);
              if (!(succeeded))
              {
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, (MR_Integer) 12);
                if (!(succeeded))
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, (MR_Integer) 0);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
            else
            {
              MR_Word TooPureSpec_25;

              TooPureSpec_25 = check_hlds__purity__warn_pred_body_too_pure_5_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11, DeclaredPurity_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (TooPureSpec_25));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Markers_172;
            MR_Word GoalType_173;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_172);
            hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_10, &GoalType_173);
            {
              MR_Word NPGoalType_158;

              succeeded = ((MR_tag((MR_Word) GoalType_173)) == (MR_Integer) 0);
              if (succeeded)
              {
                NPGoalType_158 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_173, (MR_Integer) 0))) & (MR_Integer) 3);
                switch (NPGoalType_158) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
            }
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_172, (MR_Integer) 11);
              if (!(succeeded))
              {
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_172, (MR_Integer) 12);
                if (!(succeeded))
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_172, (MR_Integer) 0);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
            else
            {
              MR_Word TooPureSpec_166;

              TooPureSpec_166 = check_hlds__purity__warn_pred_body_too_pure_5_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11, DeclaredPurity_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (TooPureSpec_166));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
              }
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (DeclaredPurity_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word Markers_124;
            MR_Word GoalType_125;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_124);
            hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_10, &GoalType_125);
            {
              MR_Word NPGoalType_110;

              succeeded = ((MR_tag((MR_Word) GoalType_125)) == (MR_Integer) 0);
              if (succeeded)
              {
                NPGoalType_110 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_125, (MR_Integer) 0))) & (MR_Integer) 3);
                switch (NPGoalType_110) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
            }
            if (!(succeeded))
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_124, (MR_Integer) 11);
              if (!(succeeded))
              {
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_124, (MR_Integer) 12);
                if (!(succeeded))
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_124, (MR_Integer) 0);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
            else
            {
              MR_Word TooPureSpec_118;

              TooPureSpec_118 = check_hlds__purity__warn_pred_body_too_pure_5_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11, DeclaredPurity_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (TooPureSpec_118));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          if ((MaybePromisedPurity_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word NotPureEnoughSpec_108;

            NotPureEnoughSpec_108 = check_hlds__purity__error_not_pure_enough_4_f_0(ModuleInfo_8, PredInfo_10, PredId_9, ActualPurity_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (NotPureEnoughSpec_108));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
            }
          }
          else
            *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_not_pure_enough_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word Purity_9)
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
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word PredPieces_59;
  MR_Word Var_65;

  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
  PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  PredOrFuncStr_13 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
  PredPieces_59 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_59, (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[12])));
  PredContextPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[10])), Var_65);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &DeclaredPurity_15);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_9, &PurityName_16);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(DeclaredPurity_15, &DeclaredPurityName_17);
  {
    Var_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_23, 0) = ((MR_Box) (PredOrFuncStr_13));
  }
  {
    Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_28, 0) = ((MR_Box) (PurityName_16));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[26])));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[35])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Pieces1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces1_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[34])));
    MR_hl_field(1, Pieces1_18, 1) = ((MR_Box) (Var_22));
  }
  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_7);
  if (succeeded)
    Pieces2_19 = (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[37]));
  else
  {
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;

    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (PurityName_16));
    }
    {
      Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_46, 0) = ((MR_Box) (DeclaredPurityName_17));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[26])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[39])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Pieces2_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces2_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[38])));
      MR_hl_field(1, Pieces2_19, 1) = ((MR_Box) (Var_40));
    }
  }
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_18, Pieces2_19);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredContextPieces_14, Var_57);
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.error_not_pure_enough\'/4"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_11));
    MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Var_56));
  }
  return Spec_10;
}

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word PredId_8,
  MR_Word PromisedPurity_9)
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
  MR_Word Var_46;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_65;
  MR_Word PredPieces_67;
  MR_Word Var_73;

  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
  PredPieces_67 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_8);
  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_67, (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[12])));
  PredContextPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[10])), Var_73);
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
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Pragma_13));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[29])));
  }
  {
    MainPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MainPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[27])));
    MR_hl_field(1, MainPieces_16, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(3, Var_34, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
  }
  {
    Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_39, 0) = ((MR_Box) (CodeStr_14));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[29])));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[33])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[32])));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[31])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    VerbosePieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[30])));
    MR_hl_field(1, VerbosePieces_17, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (PredContextPieces_12));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (MainPieces_16));
  }
  {
    Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, Var_59, 1) = ((MR_Box) (VerbosePieces_17));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  {
    Msg_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_18, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, Msg_18, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Msg_18));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.warn_unnecessary_purity_promise\'/4"));
    MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Var_65));
  }
  return Spec_10;
}

static MR_Word MR_CALL 
check_hlds__purity__warn_pred_body_too_pure_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word PredId_9,
  MR_Word ActualPurity_10,
  MR_Word DeclaredPurity_11)
{
  MR_Word Spec_12;
  MR_Word Context_13;
  MR_Word PredContextPieces_14;
  MR_String DeclaredPurityName_15;
  MR_String ActualPurityName_16;
  MR_Word Pieces_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word PredPieces_38;
  MR_Word Var_44;

  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_8, &Context_13);
  PredPieces_38 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, PredId_9);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_38, (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[12])));
  PredContextPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__purity_scalar_common_2[10])), Var_44);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(DeclaredPurity_11, &DeclaredPurityName_15);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(ActualPurity_10, &ActualPurityName_16);
  {
    Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_22, 0) = ((MR_Box) (DeclaredPurityName_15));
  }
  {
    Var_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_27, 0) = ((MR_Box) (ActualPurityName_16));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__purity_scalar_common_2[26])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[24])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__purity_scalar_common_2[23])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredContextPieces_14, Var_18);
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.purity.warn_pred_body_too_pure\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_13));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_17));
  }
  return Spec_12;
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__purity____Compare____converted_unify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__purity____Compare____purity_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_tasks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__purity____Unify____run_post_typecheck_tasks_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_tasks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__purity____Compare____run_post_typecheck_tasks_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
