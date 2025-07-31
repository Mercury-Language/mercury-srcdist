/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2025-07-31
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


// :- module transform_hlds.lambda.
// :- implementation.

/*
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#include "transform_hlds.lambda.mih"


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
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.direct_arg_in_out.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_0;

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_have_we_expanded_lambdas_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_have_we_expanded_lambdas_0[2];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_have_we_expanded_lambdas_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[9];

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[9];

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[9];

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_0;

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_maybe_recompute_nonlocals_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_maybe_recompute_nonlocals_0[2];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_maybe_recompute_nonlocals_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1];

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0;

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1;

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1];

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2];

static void MR_CALL 
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5);

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_only_lambda_tvars_2_p_0(
  MR_Word LambdaTVars_3,
  MR_Word ClassConstraint_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS0_10,
  MR_Word UnifyMode_11,
  MR_Word Unification0_12,
  MR_Word UnifyContext_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0(
  MR_Word RegWrapperProc_13,
  MR_Word RHS0_14,
  MR_Word OrigVars_15,
  MR_Word * ArgVars_16,
  MR_Word * PredId_17,
  MR_Integer * ProcId_18,
  MR_Word ArgUnifyModes0_19,
  MR_Word * ArgUnifyModes_20,
  MR_Word STATE_VARIABLE_MustRecomputeNonLocals_0_92,
  MR_Word * STATE_VARIABLE_MustRecomputeNonLocals_93,
  MR_Word LambdaInfo0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_94);

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_6_p_0(
  MR_Word HeadVars_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_19,
  MR_Word * STATE_VARIABLE_RttiVarMaps_20);

static void MR_CALL 
transform_hlds__lambda__filter_var_table_entries_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_3,
  MR_Word * STATE_VARIABLE_RevVarsEntries_4);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_ArrayPtr tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113,
  MR_ArrayPtr * tscc_output_ptr_1_STATE_VARIABLE_VarUses_114);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_unify_rhs_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_ArrayPtr tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17,
  MR_ArrayPtr * tscc_output_ptr_1_STATE_VARIABLE_VarUses_114);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__lambda__can_we_use_existing_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__lambda__can_we_use_existing_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredOrFunc_13,
  MR_Word Vars_14,
  MR_Word Detism_15,
  MR_Word LambdaGoal_16,
  MR_Word * PredId_17,
  MR_Integer * ProcId_18,
  MR_Word * CalleePredInfo_19,
  MR_Word * CalleeProcInfo_20,
  MR_Word * CurriedArgVars_21,
  MR_Word * CurriedArgUnifyModes_22);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[1][1];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[3][3];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_7[1][7];




static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lambda__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_0 = {
  (MR_String) "have_not_expanded_lambdas",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_1 = {
  (MR_String) "have_expanded_lambdas",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_have_we_expanded_lambdas_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_0,
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_have_we_expanded_lambdas_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_have_we_expanded_lambdas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_have_we_expanded_lambdas_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "have_we_expanded_lambdas",
  { transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_have_we_expanded_lambdas_0 },
  { transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_have_we_expanded_lambdas_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_have_we_expanded_lambdas_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_maybe_recompute_nonlocals_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_have_we_expanded_lambdas_0)
};

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[9] = {
  (MR_String) "li_module_info",
  (MR_String) "li_pred_info",
  (MR_String) "li_tvarset",
  (MR_String) "li_inst_varset",
  (MR_String) "li_var_table",
  (MR_String) "li_rtti_varmaps",
  (MR_String) "li_has_parallel_conj",
  (MR_String) "li_recompute_nonlocals",
  (MR_String) "li_have_expanded_lambda"
};

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[9] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
  (MR_String) "lambda_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = { &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 };

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1] = { &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 };

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  { transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0 },
  { transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_0 = {
  (MR_String) "need_not_recompute_nonlocals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_1 = {
  (MR_String) "must_recompute_nonlocals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_maybe_recompute_nonlocals_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_0,
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_maybe_recompute_nonlocals_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_maybe_recompute_nonlocals_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_maybe_recompute_nonlocals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_maybe_recompute_nonlocals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "maybe_recompute_nonlocals",
  { transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_maybe_recompute_nonlocals_0 },
  { transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_maybe_recompute_nonlocals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_maybe_recompute_nonlocals_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 = {
  (MR_String) "reg_wrapper_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 = {
  (MR_String) "not_reg_wrapper_proc",
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

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = { &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = { &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "reg_wrapper_proc",
  { transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
  { transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0,

};

void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0(
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
transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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

              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_41 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_42 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_41 < Var_42);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_41 > Var_42);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_43 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_44 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_43 < Var_44);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_43 > Var_44);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_45 > Var_46);
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
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
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

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_25_25 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_26_26 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                    succeeded = (ArgX9_19 == ArgY9_20);
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
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0(
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
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5)
{
  MR_bool succeeded;
  MR_Word Inst_10;
  MR_Word Var_13;

  *X_5 = X_9;
  Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_6, Mode_8);
  succeeded = ((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
    succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_7);
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
        return;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_only_lambda_tvars_2_p_0(
  MR_Word LambdaTVars_3,
  MR_Word ClassConstraint_4)
{
  MR_bool succeeded;
  MR_Word ConstraintTypes_6 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_4, 1))));
  MR_Word ConstraintTVars_7;

  parse_tree__prog_type_scan__set_of_type_vars_in_types_2_p_0(ConstraintTypes_6, &ConstraintTVars_7);
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), ConstraintTVars_7, LambdaTVars_3);
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word PredInfo0_8;
  MR_Word ProcTable0_9;
  MR_Word ProcInfo0_10;
  MR_Word ProcInfo_11;
  MR_Word PredInfo1_12;
  MR_Word ProcTable1_13;
  MR_Word ProcTable_14;
  MR_Word PredInfo_15;
  MR_Word STATE_VARIABLE_ModuleInfo_1_18;
  MR_Word TypeVarSet0_21;
  MR_Word HeadVars_22;
  MR_Word VarTable0_23;
  MR_Word Goal0_24;
  MR_Word RttiVarMaps0_25;
  MR_Word InstVarSet0_26;
  MR_Word HasParallelConj_27;
  MR_Word Info0_28;
  MR_Word Goal1_29;
  MR_Word Info1_30;
  MR_Word TypeVarSet_32;
  MR_Word VarTable1_34;
  MR_Word RttiVarMaps1_35;
  MR_Word MustRecomputeNonLocals_37;
  MR_Word HaveExpandedLambdas_38;
  MR_Word VarTable2_41;
  MR_Word RttiVarMaps2_42;
  MR_Word Goal_44;
  MR_Word VarTable_45;
  MR_Word RttiVarMaps_46;
  MR_Word STATE_VARIABLE_ModuleInfo_1_49;
  MR_Word STATE_VARIABLE_ProcInfo_1_52;
  MR_Word STATE_VARIABLE_ProcInfo_2_53;
  MR_Box conv0_ProcInfo0_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_5, &PredInfo0_8);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcTable0_9);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_9, ((MR_Box) (ProcId_6)), &conv0_ProcInfo0_10);
  ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_8, &TypeVarSet0_21);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_10, &HeadVars_22);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_10, &VarTable0_23);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_24);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_10, &RttiVarMaps0_25);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo0_10, &InstVarSet0_26);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_10, &HasParallelConj_27);
  {
    Info0_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_28, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
    MR_hl_field(0, Info0_28, 1) = ((MR_Box) (PredInfo0_8));
    MR_hl_field(0, Info0_28, 2) = ((MR_Box) (TypeVarSet0_21));
    MR_hl_field(0, Info0_28, 3) = ((MR_Box) (InstVarSet0_26));
    MR_hl_field(0, Info0_28, 4) = ((MR_Box) (VarTable0_23));
    MR_hl_field(0, Info0_28, 5) = ((MR_Box) (RttiVarMaps0_25));
    MR_hl_field(0, Info0_28, 6) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_27) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_24, &Goal1_29, Info0_28, &Info1_30);
  STATE_VARIABLE_ModuleInfo_1_49 = ((MR_Word) ((MR_hl_field(0, Info1_30, 0))));
  TypeVarSet_32 = ((MR_Word) ((MR_hl_field(0, Info1_30, 2))));
  VarTable1_34 = ((MR_Word) ((MR_hl_field(0, Info1_30, 4))));
  RttiVarMaps1_35 = ((MR_Word) ((MR_hl_field(0, Info1_30, 5))));
  MustRecomputeNonLocals_37 = ((((MR_Unsigned) ((MR_hl_field(0, Info1_30, 6))) >> 1)) & (MR_Integer) 1);
  HaveExpandedLambdas_38 = ((MR_Unsigned) ((MR_hl_field(0, Info1_30, 6))) & (MR_Integer) 1);
  switch (MustRecomputeNonLocals_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Goal2_40;
        MR_Word InstMap0_43;
        MR_Word _Warnings_39;

        hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_22, &_Warnings_39, Goal1_29, &Goal2_40, VarTable1_34, &VarTable2_41, RttiVarMaps1_35, &RttiVarMaps2_42);
        hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_1_49, ProcInfo0_10, &InstMap0_43);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, VarTable2_41, InstVarSet0_26, InstMap0_43, Goal2_40, &Goal_44, STATE_VARIABLE_ModuleInfo_1_49, &STATE_VARIABLE_ModuleInfo_1_18);
      }
      break;
    case (MR_Integer) 0:
      {
        Goal_44 = Goal1_29;
        VarTable2_41 = VarTable1_34;
        RttiVarMaps2_42 = RttiVarMaps1_35;
        STATE_VARIABLE_ModuleInfo_1_18 = STATE_VARIABLE_ModuleInfo_1_49;
      }
      break;
  }
  switch (HaveExpandedLambdas_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer MaxVarNum_54;
        MR_ArrayPtr VarUses0_55;
        MR_ArrayPtr VarUses1_56;
        MR_ArrayPtr VarUses_57;
        MR_Word VarTableEntries0_58;
        MR_Word RevVarTableEntries_59;
        MR_Integer Var_60;
        MR_ArrayPtr conv1_VarUses0_55;

        parse_tree__var_table__var_table_max_var_num_2_p_0(VarTable2_41, &MaxVarNum_54);
        Var_60 = (MR_Integer) ((MR_Unsigned) MaxVarNum_54 + (MR_Unsigned) 1);
        mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_60, ((MR_Box) ((MR_Integer) 0)), &conv1_VarUses0_55);
        VarUses0_55 = (MR_ArrayPtr) (conv1_VarUses0_55);
        transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_22, VarUses0_55, &VarUses1_56);
        transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_44, VarUses1_56, &VarUses_57);
        parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable2_41, &VarTableEntries0_58);
        transform_hlds__lambda__filter_var_table_entries_4_p_0(VarTableEntries0_58, VarUses_57, (MR_Word) ((MR_Unsigned) 0U), &RevVarTableEntries_59);
        parse_tree__var_table__var_table_from_rev_sorted_assoc_list_2_p_0(RevVarTableEntries_59, &VarTable_45);
        hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_57, RttiVarMaps2_42, &RttiVarMaps_46);
      }
      break;
    case (MR_Integer) 0:
      {
        VarTable_45 = VarTable2_41;
        RttiVarMaps_46 = RttiVarMaps2_42;
      }
      break;
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_44, ProcInfo0_10, &STATE_VARIABLE_ProcInfo_1_52);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_45, STATE_VARIABLE_ProcInfo_1_52, &STATE_VARIABLE_ProcInfo_2_53);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_46, STATE_VARIABLE_ProcInfo_2_53, &ProcInfo_11);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_32, PredInfo0_8, &PredInfo1_12);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_12, &ProcTable1_13);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_11)), ProcTable1_13, &ProcTable_14);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_14, PredInfo1_12, &PredInfo_15);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_5, PredInfo_15, STATE_VARIABLE_ModuleInfo_1_18, STATE_VARIABLE_ModuleInfo_17);
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS0_10,
  MR_Word UnifyMode_11,
  MR_Word Unification0_12,
  MR_Word UnifyContext_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  switch (MR_tag((MR_Word) RHS0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS0_10));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_11));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification0_12));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_13));
        }
        *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_19 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 1))));
        MR_Word ArgVarsModes_20 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 2))));
        MR_Word Detism_21 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_10, 3))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_22 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 4))));
        MR_Word LambdaGoal_23;
        MR_Word RHS_24;
        MR_Word STATE_VARIABLE_Info_1_51;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_10, 0)));

        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(LambdaGoal0_22, &LambdaGoal_23, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_1_51);
        {
          RHS_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_24, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(2, RHS_24, 1) = ((MR_Box) (NonLocals_19));
          MR_hl_field(2, RHS_24, 2) = ((MR_Box) (ArgVarsModes_20));
          MR_hl_field(2, RHS_24, 3) = (MR_Box) ((MR_Unsigned) (Detism_21));
          MR_hl_field(2, RHS_24, 4) = ((MR_Box) (LambdaGoal_23));
        }
        switch (MR_tag((MR_Word) Unification0_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__lambda__expand_lambda_9_p_0((MR_Word) ((MR_Unsigned) 0U), LHSVar_9, RHS_24, UnifyMode_11, Unification0_12, UnifyContext_13, GoalExpr_14, STATE_VARIABLE_Info_1_51, STATE_VARIABLE_Info_50);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_unify_goal\'/8", (MR_String) "unexpected unification");
              return;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_1_19;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_1_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_1_15;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_15);
    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_1_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word GoalExpr_15;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_24;

        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
        GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_24));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 0))));
        MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 1))));
        MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 2))));
        MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 3))));
        MR_Word Context_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 4))));

        transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(LHS_10, RHS_11, Mode_12, Unification_13, Context_14, &GoalExpr_15, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_15 = GoalExpr0_8;
        *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_15 = GoalExpr0_8;
            *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
            MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Goals_18;

            transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_17, &Goals_18, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_18));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Goals_85;

            transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_84, &Goals_85, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_85));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Cases_22;

            transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_21, &Cases_22, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_19));
              MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word SubGoal0_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word FGT_27;

            succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_25, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_27 = ((MR_Unsigned) ((MR_hl_field(3, Reason_25, 2))) & (MR_Integer) 3);
              switch (FGT_27) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              GoalExpr_15 = GoalExpr0_8;
              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
            }
            else
            {
              MR_Word SubGoal_86;

              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_88, &SubGoal_86, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_25));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_86));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
            MR_Word Cond_32;
            MR_Word Then_33;
            MR_Word Else_34;
            MR_Word STATE_VARIABLE_Info_7_76;
            MR_Word STATE_VARIABLE_Info_8_77;

            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Cond0_29, &Cond_32, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_7_76);
            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Then0_30, &Then_33, STATE_VARIABLE_Info_7_76, &STATE_VARIABLE_Info_8_77);
            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Else0_31, &Else_34, STATE_VARIABLE_Info_8_77, STATE_VARIABLE_Info_69);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_28));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_32));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_33));
              MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_34));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word ShortHand_63;

            switch (MR_tag((MR_Word) ShortHand0_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_53, 0))) & (MR_Integer) 3);
                  MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 1))));
                  MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 2))));
                  MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 3))));
                  MR_Word MainGoal0_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 4))));
                  MR_Word OrElseGoals0_59 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 5))));
                  MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 6))));
                  MR_Word MainGoal_61;
                  MR_Word OrElseGoals_62;
                  MR_Word STATE_VARIABLE_Info_10_79;

                  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(MainGoal0_58, &MainGoal_61, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_10_79);
                  transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(OrElseGoals0_59, &OrElseGoals_62, STATE_VARIABLE_Info_10_79, STATE_VARIABLE_Info_69);
                  {
                    ShortHand_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_63, 0) = (MR_Box) ((MR_Unsigned) (GoalType_54));
                    MR_hl_field(1, ShortHand_63, 1) = ((MR_Box) (Outer_55));
                    MR_hl_field(1, ShortHand_63, 2) = ((MR_Box) (Inner_56));
                    MR_hl_field(1, ShortHand_63, 3) = ((MR_Box) (MaybeOutputVars_57));
                    MR_hl_field(1, ShortHand_63, 4) = ((MR_Box) (MainGoal_61));
                    MR_hl_field(1, ShortHand_63, 5) = ((MR_Box) (OrElseGoals_62));
                    MR_hl_field(1, ShortHand_63, 6) = ((MR_Box) (OrElseInners_60));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_64 = ((MR_Word) ((MR_hl_field(2, ShortHand0_53, 0))));
                  MR_Word ResultVar_65 = ((MR_Word) ((MR_hl_field(2, ShortHand0_53, 1))));
                  MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(2, ShortHand0_53, 2))));
                  MR_Word SubGoal_91;

                  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_90, &SubGoal_91, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                  {
                    ShortHand_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_63, 0) = ((MR_Box) (MaybeIO_64));
                    MR_hl_field(2, ShortHand_63, 1) = ((MR_Box) (ResultVar_65));
                    MR_hl_field(2, ShortHand_63, 2) = ((MR_Box) (SubGoal_91));
                  }
                }
                break;
            }
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_63));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_9));
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo_6;
  MR_Word ProcIds_7;
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
  ProcIds_7 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_7[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (PredId_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (Var_14) << 2)) | (((((MR_Unsigned) (X_4) << 1)) | (MR_Unsigned) (Var_16)))));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, 6))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 5))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 3))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 2))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
}

void MR_CALL 
transform_hlds__lambda__init_lambda_info_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word TypeVarSet_11,
  MR_Word InstVarSet_12,
  MR_Word VarTable_13,
  MR_Word RttiVarMaps_14,
  MR_Word HasParallelConj_15,
  MR_Word * Info_16)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Info_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredInfo_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeVarSet_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstVarSet_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarTable_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (RttiVarMaps_14));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_15) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambda_9_p_0(
  MR_Word RegWrapperProc_10,
  MR_Word LHSVar_11,
  MR_Word RHS0_12,
  MR_Word UnifyMode_13,
  MR_Word Unification0_14,
  MR_Word UnifyContext_15,
  MR_Word * GoalExpr_16,
  MR_Word LambdaInfo0_17,
  MR_Word * LambdaInfo_18)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_19 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 0))));
  MR_Word OrigPredInfo_20 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 1))));
  MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 2))));
  MR_Word InstVarSet_22 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 3))));
  MR_Word VarTable_23 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 4))));
  MR_Word RttiVarMaps_24 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_17, 5))));
  MR_Word HasParallelConj_25 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaInfo0_17, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word MustRecomputeNonLocals0_26 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaInfo0_17, 6))) >> 1)) & (MR_Integer) 1);
  MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_12, 0))) & (MR_Integer) 1);
  MR_Word VarsModes_32 = ((MR_Word) ((MR_hl_field(2, RHS0_12, 2))));
  MR_Word Detism_33 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_12, 3))) & (MR_Integer) 7);
  MR_Word LambdaGoal_34 = ((MR_Word) ((MR_hl_field(2, RHS0_12, 4))));
  MR_Word Vars_35;
  MR_Word Var_36;
  MR_Word ArgVars0_38;
  MR_Word ArgUnifyModes0_39;
  MR_Word PredId_51;
  MR_Integer ProcId_52;
  MR_Word ArgVars_53;
  MR_Word ArgUnifyModes_54;
  MR_Word ModuleInfo_56;
  MR_Word MustRecomputeNonLocals_57;
  MR_Word ShroudedPredProcId_58;
  MR_Word ConsId_59;
  MR_Word RHS_60;
  MR_Word Unification_61;
  MR_Word Var_69;
  MR_Word PredId0_45;
  MR_Integer ProcId0_46;
  MR_Word CalleePredInfo_47;
  MR_Word CalleeProcInfo0_48;
  MR_Word CurriedArgVars_49;
  MR_Word ArgUnifyModes1_50;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_32, &Vars_35);
  Var_36 = ((MR_Word) ((MR_hl_field(0, Unification0_14, 0))));
  ArgVars0_38 = ((MR_Word) ((MR_hl_field(0, Unification0_14, 2))));
  ArgUnifyModes0_39 = ((MR_Word) ((MR_hl_field(0, Unification0_14, 3))));
  succeeded = transform_hlds__lambda__can_we_use_existing_pred_11_p_0(ModuleInfo0_19, PredOrFunc_30, Vars_35, Detism_33, LambdaGoal_34, &PredId0_45, &ProcId0_46, &CalleePredInfo_47, &CalleeProcInfo0_48, &CurriedArgVars_49, &ArgUnifyModes1_50);
  if (succeeded)
  {
    MR_Word CalleeProcInfo_55;

    PredId_51 = PredId0_45;
    ProcId_52 = ProcId0_46;
    ArgVars_53 = CurriedArgVars_49;
    ArgUnifyModes_54 = ArgUnifyModes1_50;
    hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, CalleeProcInfo0_48, &CalleeProcInfo_55);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_51, ProcId_52, CalleePredInfo_47, CalleeProcInfo_55, ModuleInfo0_19, &ModuleInfo_56);
    MustRecomputeNonLocals_57 = MustRecomputeNonLocals0_26;
  }
  else
    transform_hlds__lambda__create_new_pred_for_lambda_12_p_0(RegWrapperProc_10, RHS0_12, ArgVars0_38, &ArgVars_53, &PredId_51, &ProcId_52, ArgUnifyModes0_39, &ArgUnifyModes_54, MustRecomputeNonLocals0_26, &MustRecomputeNonLocals_57, LambdaInfo0_17, &ModuleInfo_56);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (PredId_51));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (ProcId_52));
  }
  ShroudedPredProcId_58 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_69);
  ConsId_59 = (MR_Word) (MR_mkword(2, (MR_Word) (ShroudedPredProcId_58)));
  {
    RHS_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_60, 0) = ((MR_Box) (ConsId_59));
    MR_hl_field(1, RHS_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_60, 2) = ((MR_Box) (ArgVars_53));
  }
  {
    Unification_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_61, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, Unification_61, 1) = ((MR_Box) (ConsId_59));
    MR_hl_field(0, Unification_61, 2) = ((MR_Box) (ArgVars_53));
    MR_hl_field(0, Unification_61, 3) = ((MR_Box) (ArgUnifyModes_54));
    MR_hl_field(0, Unification_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_61, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Unification_61, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (RHS_60));
    MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_13));
    MR_hl_field(1, base, 3) = ((MR_Box) (Unification_61));
    MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *LambdaInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_56));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigPredInfo_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (TVarSet_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstVarSet_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarTable_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (RttiVarMaps_24));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_25) << 2)) | (((((MR_Unsigned) (MustRecomputeNonLocals_57) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
  }
}

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_X_5;

  transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv0_X_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_X_5));
}

static MR_bool MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lambda__constraint_contains_only_lambda_tvars_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0(
  MR_Word RegWrapperProc_13,
  MR_Word RHS0_14,
  MR_Word OrigVars_15,
  MR_Word * ArgVars_16,
  MR_Word * PredId_17,
  MR_Integer * ProcId_18,
  MR_Word ArgUnifyModes0_19,
  MR_Word * ArgUnifyModes_20,
  MR_Word STATE_VARIABLE_MustRecomputeNonLocals_0_92,
  MR_Word * STATE_VARIABLE_MustRecomputeNonLocals_93,
  MR_Word LambdaInfo0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_94)
{
  MR_bool succeeded;
  MR_Word OrigPredInfo_24 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 1))));
  MR_Word TVarSet_25 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 2))));
  MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 3))));
  MR_Word VarTable_27 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 4))));
  MR_Word RttiVarMaps_28 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 5))));
  MR_Word HasParallelConj_29 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaInfo0_22, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word MustRecomputeNonLocals0_30 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaInfo0_22, 6))) >> 1)) & (MR_Integer) 1);
  MR_Word Purity_32 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_14, 0))) >> 2)) & (MR_Integer) 3);
  MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_14, 0))) & (MR_Integer) 1);
  MR_Word LambdaVarsModes_36 = ((MR_Word) ((MR_hl_field(2, RHS0_14, 2))));
  MR_Word Detism_37 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_14, 3))) & (MR_Integer) 7);
  MR_Word LambdaGoal_38 = ((MR_Word) ((MR_hl_field(2, RHS0_14, 4))));
  MR_Word LambdaVars_39;
  MR_Word LambdaVarModes_40;
  MR_Word LambdaGoalInfo_42;
  MR_Word AllConstraints_43;
  MR_Word LambdaVarTypeList_44;
  MR_Word LambdaTypeVars_45;
  MR_Word UnivConstraints_46;
  MR_Word Constraints_47;
  MR_Word LambdaGoalNonLocals_49;
  MR_Word LambdaNonLocals_50;
  MR_Word ExtraTiTcis_51;
  MR_Word NonLocals1_52;
  MR_Word NewTiTcis_53;
  MR_Word NonLocals_54;
  MR_Word ArgVars1_55;
  MR_Word AllArgVars_56;
  MR_Word ModuleName_57;
  MR_String OrigPredName_58;
  MR_Word OrigContext_59;
  MR_String OrigFile_60;
  MR_Integer OrigLine_61;
  MR_Integer LambdaCount_62;
  MR_Word Transform_63;
  MR_String TransformedName_64;
  MR_Word LambdaContext_65;
  MR_Word OrigArgModes_66;
  MR_Integer NumArgVars_67;
  MR_Word In_68;
  MR_Word InModes_69;
  MR_Word ArgModesMap_70;
  MR_Word OrigArgModesMap_71;
  MR_Word ArgModesMap1_72;
  MR_Word ArgModes1_73;
  MR_Word AllArgModes_74;
  MR_Word ArgTypes_75;
  MR_Word PurityMarkers_77;
  MR_Word LambdaMarkers0_78;
  MR_Word LambdaMarkers_79;
  MR_Word VarNameRemap_80;
  MR_Word LambdaVarTable_81;
  MR_Word LambdaRttiVarMaps_82;
  MR_Word ProcInfo_83;
  MR_Word Origin_86;
  MR_Word Assertions_87;
  MR_Word PredInfo_89;
  MR_Word PredicateTable0_90;
  MR_Word PredicateTable_91;
  MR_Word STATE_VARIABLE_ModuleInfo_1_95 = ((MR_Word) ((MR_hl_field(0, LambdaInfo0_22, 0))));
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_ModuleInfo_2_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word STATE_VARIABLE_ProcInfo_1_106;
  MR_Word STATE_VARIABLE_ProcInfo_2_107;
  MR_Word STATE_VARIABLE_ProcInfo_3_109;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_ModuleInfo_3_115;
  MR_Box conv1_Var_76;

  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVarsModes_36, &LambdaVars_39, &LambdaVarModes_40);
  LambdaGoalInfo_42 = ((MR_Word) ((MR_hl_field(0, LambdaGoal_38, 1))));
  hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_28, &AllConstraints_43);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_27, LambdaVars_39, &LambdaVarTypeList_44);
  parse_tree__prog_type_scan__set_of_type_vars_in_types_2_p_0(LambdaVarTypeList_44, &LambdaTypeVars_45);
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2]));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) (transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1));
    MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_96, 3) = ((MR_Box) (LambdaTypeVars_45));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_96, AllConstraints_43, &UnivConstraints_46);
  {
    Constraints_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_47, 0) = ((MR_Box) (UnivConstraints_46));
    MR_hl_field(0, Constraints_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaGoalNonLocals_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_42);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_39, LambdaGoalNonLocals_49, &LambdaNonLocals_50);
  hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(RttiVarMaps_28, VarTable_27, (MR_Word) ((MR_Unsigned) 0U), LambdaNonLocals_50, &ExtraTiTcis_51);
  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_39, LambdaGoalNonLocals_49, &NonLocals1_52);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraTiTcis_51, NonLocals1_52, &NewTiTcis_53);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_52, NewTiTcis_53, &NonLocals_54);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_54, &ArgVars1_55);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewTiTcis_53);
  if (succeeded)
    *STATE_VARIABLE_MustRecomputeNonLocals_93 = STATE_VARIABLE_MustRecomputeNonLocals_0_92;
  else
    *STATE_VARIABLE_MustRecomputeNonLocals_93 = (MR_Integer) 1;
  *ArgVars_16 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(VarTable_27, ArgVars1_55);
  AllArgVars_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), *ArgVars_16, LambdaVars_39);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_1_95, &ModuleName_57);
  OrigPredName_58 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_24);
  OrigContext_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_42);
  OrigFile_60 = ((MR_String) ((MR_hl_field(0, OrigContext_59, 0))));
  OrigLine_61 = ((MR_Integer) ((MR_hl_field(0, OrigContext_59, 1))));
  hlds__hlds_module__module_info_next_lambda_count_4_p_0(OrigLine_61, &LambdaCount_62, STATE_VARIABLE_ModuleInfo_1_95, &STATE_VARIABLE_ModuleInfo_2_99);
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_100, 0) = ((MR_Box) (OrigLine_61));
    MR_hl_field(0, Var_100, 1) = ((MR_Box) (LambdaCount_62));
  }
  {
    Transform_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Transform_63, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
    MR_hl_field(3, Transform_63, 2) = ((MR_Box) (Var_100));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(OrigPredName_58, Transform_63, &TransformedName_64);
  LambdaContext_65 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_42);
  transform_hlds__lambda__unify_modes_to_modes_2_p_0(ArgUnifyModes0_19, &OrigArgModes_66);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), *ArgVars_16, &NumArgVars_67);
  parse_tree__prog_mode__in_mode_1_p_0(&In_68);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgVars_67, ((MR_Box) (In_68)), &InModes_69);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), *ArgVars_16, InModes_69, &ArgModesMap_70);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OrigVars_15, OrigArgModes_66, &OrigArgModesMap_71);
  mercury__map__overlay_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModesMap_70, OrigArgModesMap_71, &ArgModesMap1_72);
  mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), *ArgVars_16, ArgModesMap1_72, &ArgModes1_73);
  check_hlds__mode_util__modes_to_unify_modes_4_p_0(STATE_VARIABLE_ModuleInfo_2_99, ArgModes1_73, ArgModes1_73, ArgUnifyModes_20);
  AllArgModes_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes1_73, LambdaVarModes_40);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_27, AllArgVars_56, &ArgTypes_75);
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2));
    MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_102, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_99));
  }
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_102, ArgTypes_75, AllArgModes_74, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_76);
  hlds__hlds_markers__purity_to_markers_2_p_0(Purity_32, &PurityMarkers_77);
  hlds__hlds_markers__init_markers_1_p_0(&LambdaMarkers0_78);
  hlds__hlds_markers__add_markers_3_p_0(PurityMarkers_77, LambdaMarkers0_78, &LambdaMarkers_79);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_80);
  transform_hlds__lambda__restrict_var_maps_6_p_0(AllArgVars_56, LambdaGoal_38, VarTable_27, &LambdaVarTable_81, RttiVarMaps_28, &LambdaRttiVarMaps_82);
  hlds__hlds_pred__proc_info_create_14_p_0(LambdaContext_65, (MR_Word) ((MR_Unsigned) 0U), LambdaVarTable_81, AllArgVars_56, InstVarSet_26, AllArgModes_74, (MR_Integer) 0, Detism_37, LambdaGoal_38, LambdaRttiVarMaps_82, (MR_Integer) 0, HasParallelConj_29, VarNameRemap_80, &STATE_VARIABLE_ProcInfo_1_106);
  hlds__hlds_proc_util__ensure_all_headvars_are_named_2_p_0(STATE_VARIABLE_ProcInfo_1_106, &STATE_VARIABLE_ProcInfo_2_107);
  switch (MustRecomputeNonLocals0_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_2_107, &STATE_VARIABLE_ProcInfo_3_109);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ProcInfo_3_109 = STATE_VARIABLE_ProcInfo_2_107;
      break;
  }
  if ((RegWrapperProc_13 == (MR_Word) ((MR_Unsigned) 0U)))
    ProcInfo_83 = STATE_VARIABLE_ProcInfo_3_109;
  else
  {
    MR_Word RegRHeadVars_85 = ((MR_Word) ((MR_hl_field(1, RegWrapperProc_13, 0))));

    hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(RegRHeadVars_85, STATE_VARIABLE_ProcInfo_3_109, &ProcInfo_83);
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (OrigFile_60));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (OrigLine_61));
    MR_hl_field(1, Var_111, 2) = ((MR_Box) (LambdaCount_62));
  }
  {
    Origin_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Origin_86, 0) = ((MR_Box) (Var_111));
  }
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), &Assertions_87);
  hlds__hlds_pred__pred_info_create_17_p_0(PredOrFunc_34, ModuleName_57, TransformedName_64, LambdaContext_65, Origin_86, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), LambdaMarkers_79, ArgTypes_75, TVarSet_25, (MR_Word) ((MR_Unsigned) 0U), Constraints_47, Assertions_87, VarNameRemap_80, (MR_Word) (&transform_hlds__lambda_scalar_common_2[0]), ProcInfo_83, ProcId_18, &PredInfo_89);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_2_99, &PredicateTable0_90);
  hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_89, PredId_17, PredicateTable0_90, &PredicateTable_91);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_91, STATE_VARIABLE_ModuleInfo_2_99, &STATE_VARIABLE_ModuleInfo_3_115);
  transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(*PredId_17, *ProcId_18, LambdaVarTable_81, AllArgVars_56, AllArgModes_74, STATE_VARIABLE_ModuleInfo_3_115, STATE_VARIABLE_ModuleInfo_94);
}

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_6_p_0(
  MR_Word HeadVars_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_19,
  MR_Word * STATE_VARIABLE_RttiVarMaps_20)
{
  MR_Integer MaxVarNum_11;
  MR_ArrayPtr VarUses0_12;
  MR_ArrayPtr VarUses1_13;
  MR_ArrayPtr VarUses_14;
  MR_Word VarTableEntries0_15;
  MR_Word RevVarTableEntries_16;
  MR_Integer Var_21;
  MR_ArrayPtr conv0_VarUses0_12;

  parse_tree__var_table__var_table_max_var_num_2_p_0(STATE_VARIABLE_VarTable_0_17, &MaxVarNum_11);
  Var_21 = (MR_Integer) ((MR_Unsigned) MaxVarNum_11 + (MR_Unsigned) 1);
  mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_21, ((MR_Box) ((MR_Integer) 0)), &conv0_VarUses0_12);
  VarUses0_12 = (MR_ArrayPtr) (conv0_VarUses0_12);
  transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_7, VarUses0_12, &VarUses1_13);
  transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_8, VarUses1_13, &VarUses_14);
  parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(STATE_VARIABLE_VarTable_0_17, &VarTableEntries0_15);
  transform_hlds__lambda__filter_var_table_entries_4_p_0(VarTableEntries0_15, VarUses_14, (MR_Word) ((MR_Unsigned) 0U), &RevVarTableEntries_16);
  parse_tree__var_table__var_table_from_rev_sorted_assoc_list_2_p_0(RevVarTableEntries_16, STATE_VARIABLE_VarTable_18);
  hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_14, STATE_VARIABLE_RttiVarMaps_0_19, STATE_VARIABLE_RttiVarMaps_20);
}

static void MR_CALL 
transform_hlds__lambda__filter_var_table_entries_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsEntries_0_3,
  MR_Word * STATE_VARIABLE_RevVarsEntries_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarsEntries_4 = STATE_VARIABLE_RevVarsEntries_0_3;
    else
    {
      MR_Word VarEntry_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word VarsEntries_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, VarEntry_9, 0))));
      MR_Integer VarNum_15;
      MR_Word Used_16;
      MR_Word STATE_VARIABLE_RevVarsEntries_1_19;
      MR_Box conv0_Used_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarsEntries_0_3;

      VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__2_2), VarNum_15, &conv0_Used_16);
      Used_16 = ((MR_Word) (conv0_Used_16));
      switch (Used_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_RevVarsEntries_1_19 = STATE_VARIABLE_RevVarsEntries_0_3;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevVarsEntries_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevVarsEntries_1_19, 0) = ((MR_Box) (VarEntry_9));
            MR_hl_field(1, STATE_VARIABLE_RevVarsEntries_1_19, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsEntries_0_3));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsEntries_10;
      next_value_of_STATE_VARIABLE_RevVarsEntries_0_3 = STATE_VARIABLE_RevVarsEntries_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarsEntries_0_3 = next_value_of_STATE_VARIABLE_RevVarsEntries_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_ArrayPtr tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113,
  MR_ArrayPtr * tscc_output_ptr_1_STATE_VARIABLE_VarUses_114)
{
  MR_Word tscc_proc_2_input_1_RHS_4;
  MR_ArrayPtr tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
  MR_ArrayPtr tscc_output_1_STATE_VARIABLE_VarUses_114;

  // The code for TSCC PROC 1: pred transform_hlds.lambda.find_used_vars_in_goal/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.lambda.find_used_vars_in_goal/3-0
  ;
  // proc 2 in TSCC: pred transform_hlds.lambda.find_used_vars_in_unify_rhs/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_ArrayPtr STATE_VARIABLE_VarUses_0_113 = tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
    MR_ArrayPtr STATE_VARIABLE_VarUses_114;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_168 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_168;
          MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_0_113;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_1_115;
          MR_ArrayPtr STATE_VARIABLE_VarUses_2_117;
          MR_Integer Var_223;
          MR_ArrayPtr conv13_STATE_VARIABLE_VarUses_1_115;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_ArrayPtr next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;

          Var_223 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_8);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_223, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv13_STATE_VARIABLE_VarUses_1_115);
          STATE_VARIABLE_VarUses_1_115 = (MR_ArrayPtr) (conv13_STATE_VARIABLE_VarUses_1_115);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, 4))));
                MR_Word ReuseVar_20;
                MR_Word Var_116;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_116 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  ReuseVar_20 = ((MR_Word) ((MR_hl_field(0, Var_116, 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Integer Var_227;
                  MR_ArrayPtr conv14_STATE_VARIABLE_VarUses_2_117;

                  Var_227 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20);
                  mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_227, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_1_115), &conv14_STATE_VARIABLE_VarUses_2_117);
                  STATE_VARIABLE_VarUses_2_117 = (MR_ArrayPtr) (conv14_STATE_VARIABLE_VarUses_2_117);
                }
                else
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = STATE_VARIABLE_VarUses_2_117;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeCallUnifyContext_54 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 4))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_7_122;
          MR_Word ArgVars_161 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_161, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_7_122);
          if ((MaybeCallUnifyContext_54 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_7_122;
          else
          {
            MR_Word CallUnifyContext_56 = ((MR_Word) ((MR_hl_field(1, MaybeCallUnifyContext_54, 0))));
            MR_ArrayPtr STATE_VARIABLE_VarUses_8_123;
            MR_Word RHS_156 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_56, 1))));
            MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_56, 0))));
            MR_Integer Var_187;
            MR_ArrayPtr conv4_STATE_VARIABLE_VarUses_8_123;
            MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
            MR_ArrayPtr next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;

            Var_187 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_157);
            mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_187, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_7_122), &conv4_STATE_VARIABLE_VarUses_8_123);
            STATE_VARIABLE_VarUses_8_123 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_VarUses_8_123);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_156;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = STATE_VARIABLE_VarUses_8_123;
            tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
            tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word ArgVars_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_4_119;

              switch (MR_tag((MR_Word) GenericCall_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, GenericCall_36, 0))));
                    MR_Integer Var_183;
                    MR_ArrayPtr conv3_STATE_VARIABLE_VarUses_4_119;

                    Var_183 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_183, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv3_STATE_VARIABLE_VarUses_4_119);
                    STATE_VARIABLE_VarUses_4_119 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_VarUses_4_119);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, GenericCall_36, 0))));
                    MR_Integer Var_179;
                    MR_ArrayPtr conv2_STATE_VARIABLE_VarUses_4_119;

                    Var_179 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_155);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_179, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv2_STATE_VARIABLE_VarUses_4_119);
                    STATE_VARIABLE_VarUses_4_119 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_VarUses_4_119);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_VarUses_4_119 = STATE_VARIABLE_VarUses_0_113;
                  break;
                case (MR_Integer) 3:
                  STATE_VARIABLE_VarUses_4_119 = STATE_VARIABLE_VarUses_0_113;
                  break;
              }
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_37, STATE_VARIABLE_VarUses_4_119, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word ExtraArgs_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
              MR_Word ExtraVars_95;
              MR_ArrayPtr STATE_VARIABLE_VarUses_24_143;
              MR_Word ArgVars_170;

              ArgVars_170 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_4[1]), Args_91);
              ExtraVars_95 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_4[2]), ExtraArgs_92);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_170, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_24_143);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ExtraVars_95, STATE_VARIABLE_VarUses_24_143, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_59, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_178 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_178, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_11_126;
              MR_Word Var_163 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Integer Var_219;
              MR_ArrayPtr conv12_STATE_VARIABLE_VarUses_11_126;

              Var_219 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_163);
              mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_219, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv12_STATE_VARIABLE_VarUses_11_126);
              STATE_VARIABLE_VarUses_11_126 = (MR_ArrayPtr) (conv12_STATE_VARIABLE_VarUses_11_126);
              transform_hlds__lambda__find_used_vars_in_cases_3_p_0(Cases_61, STATE_VARIABLE_VarUses_11_126, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_13_128;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

              switch (MR_tag((MR_Word) Reason_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_64 = ((MR_Word) ((MR_hl_field(0, Reason_62, 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_64, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_13_128);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(2, Reason_62, 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_164, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_13_128);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_62, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
                        return;
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(3, Reason_62, 1))));
                        MR_Integer Var_191;
                        MR_ArrayPtr conv5_STATE_VARIABLE_VarUses_13_128;

                        Var_191 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_165);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_191, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv5_STATE_VARIABLE_VarUses_13_128);
                        STATE_VARIABLE_VarUses_13_128 = (MR_ArrayPtr) (conv5_STATE_VARIABLE_VarUses_13_128);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_68 = ((MR_Word) ((MR_hl_field(3, Reason_62, 1))));
                        MR_Word LCSVar_69 = ((MR_Word) ((MR_hl_field(3, Reason_62, 2))));
                        MR_ArrayPtr STATE_VARIABLE_VarUses_16_131;
                        MR_Integer Var_195;
                        MR_Integer Var_199;
                        MR_ArrayPtr conv6_STATE_VARIABLE_VarUses_16_131;
                        MR_ArrayPtr conv7_STATE_VARIABLE_VarUses_13_128;

                        Var_195 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_68);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_195, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv6_STATE_VARIABLE_VarUses_16_131);
                        STATE_VARIABLE_VarUses_16_131 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_VarUses_16_131);
                        Var_199 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_69);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_199, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_16_131), &conv7_STATE_VARIABLE_VarUses_13_128);
                        STATE_VARIABLE_VarUses_13_128 = (MR_ArrayPtr) (conv7_STATE_VARIABLE_VarUses_13_128);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_63;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_13_128;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_20_137;
              MR_ArrayPtr STATE_VARIABLE_VarUses_21_138;
              MR_ArrayPtr STATE_VARIABLE_VarUses_22_139;
              MR_Word Vars_169 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

              transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_169, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_20_137);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Cond_85, STATE_VARIABLE_VarUses_20_137, &STATE_VARIABLE_VarUses_21_138);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Then_86, STATE_VARIABLE_VarUses_21_138, &STATE_VARIABLE_VarUses_22_139);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_87;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_22_139;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_96)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_111 = ((MR_Word) ((MR_hl_field(0, Shorthand_96, 0))));
                    MR_Word RightGoal_112 = ((MR_Word) ((MR_hl_field(0, Shorthand_96, 1))));
                    MR_ArrayPtr STATE_VARIABLE_VarUses_34_153;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(LeftGoal_111, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_34_153);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_112;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_34_153;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_98 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 1))));
                    MR_Word Inner_99 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 2))));
                    MR_Word MaybeOutputVars_100 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 3))));
                    MR_Word MainGoal_101 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 4))));
                    MR_Word OrElseGoals_102 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 5))));
                    MR_Word OuterDI_104 = ((MR_Word) ((MR_hl_field(0, Outer_98, 0))));
                    MR_Word OuterUO_105 = ((MR_Word) ((MR_hl_field(0, Outer_98, 1))));
                    MR_Word InnerDI_106;
                    MR_Word InnerUO_107;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_26_145;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_27_146;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_28_147;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_29_148;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_30_149;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_31_150;
                    MR_Integer Var_203;
                    MR_Integer Var_207;
                    MR_Integer Var_211;
                    MR_Integer Var_215;
                    MR_ArrayPtr conv8_STATE_VARIABLE_VarUses_26_145;
                    MR_ArrayPtr conv9_STATE_VARIABLE_VarUses_27_146;
                    MR_ArrayPtr conv10_STATE_VARIABLE_VarUses_28_147;
                    MR_ArrayPtr conv11_STATE_VARIABLE_VarUses_29_148;

                    Var_203 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_104);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_203, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv8_STATE_VARIABLE_VarUses_26_145);
                    STATE_VARIABLE_VarUses_26_145 = (MR_ArrayPtr) (conv8_STATE_VARIABLE_VarUses_26_145);
                    Var_207 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_105);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_207, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_26_145), &conv9_STATE_VARIABLE_VarUses_27_146);
                    STATE_VARIABLE_VarUses_27_146 = (MR_ArrayPtr) (conv9_STATE_VARIABLE_VarUses_27_146);
                    InnerDI_106 = ((MR_Word) ((MR_hl_field(0, Inner_99, 0))));
                    InnerUO_107 = ((MR_Word) ((MR_hl_field(0, Inner_99, 1))));
                    Var_211 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_106);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_211, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_27_146), &conv10_STATE_VARIABLE_VarUses_28_147);
                    STATE_VARIABLE_VarUses_28_147 = (MR_ArrayPtr) (conv10_STATE_VARIABLE_VarUses_28_147);
                    Var_215 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_107);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_215, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_28_147), &conv11_STATE_VARIABLE_VarUses_29_148);
                    STATE_VARIABLE_VarUses_29_148 = (MR_ArrayPtr) (conv11_STATE_VARIABLE_VarUses_29_148);
                    if ((MaybeOutputVars_100 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarUses_30_149 = STATE_VARIABLE_VarUses_29_148;
                    else
                    {
                      MR_Word OutputVars_108 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_100, 0))));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(OutputVars_108, STATE_VARIABLE_VarUses_29_148, &STATE_VARIABLE_VarUses_30_149);
                    }
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(MainGoal_101, STATE_VARIABLE_VarUses_30_149, &STATE_VARIABLE_VarUses_31_150);
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(OrElseGoals_102, STATE_VARIABLE_VarUses_31_150, &STATE_VARIABLE_VarUses_114);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(2, Shorthand_96, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_171;
                    MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_0_113;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_114;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_ArrayPtr STATE_VARIABLE_VarUses_0_17 = tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
    MR_ArrayPtr STATE_VARIABLE_VarUses_18;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RHSVar_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, 0))));
          MR_Integer Var_27;
          MR_ArrayPtr conv15_STATE_VARIABLE_VarUses_18;

          Var_27 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVar_6);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_27, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_17), &conv15_STATE_VARIABLE_VarUses_18);
          STATE_VARIABLE_VarUses_18 = (MR_ArrayPtr) (conv15_STATE_VARIABLE_VarUses_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_9, STATE_VARIABLE_VarUses_0_17, &STATE_VARIABLE_VarUses_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_13 = ((MR_Word) ((MR_hl_field(2, RHS_4, 1))));
          MR_Word ArgVarsModes_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, 2))));
          MR_Word LambdaGoal_16 = ((MR_Word) ((MR_hl_field(2, RHS_4, 4))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_3_21;
          MR_ArrayPtr STATE_VARIABLE_VarUses_4_22;
          MR_Word ArgVars_24;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_14, &ArgVars_24);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(NonLocals_13, STATE_VARIABLE_VarUses_0_17, &STATE_VARIABLE_VarUses_3_21);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_24, STATE_VARIABLE_VarUses_3_21, &STATE_VARIABLE_VarUses_4_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = LambdaGoal_16;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_4_22;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarUses_114 = tscc_output_1_STATE_VARIABLE_VarUses_114;
  return;
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_unify_rhs_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_ArrayPtr tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17,
  MR_ArrayPtr * tscc_output_ptr_1_STATE_VARIABLE_VarUses_114)
{
  MR_Word tscc_proc_1_input_1_Goal_4;
  MR_ArrayPtr tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
  MR_ArrayPtr tscc_output_1_STATE_VARIABLE_VarUses_114;

  // The code for TSCC PROC 2: pred transform_hlds.lambda.find_used_vars_in_unify_rhs/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.lambda.find_used_vars_in_goal/3-0
  ;
  // proc 2 in TSCC: pred transform_hlds.lambda.find_used_vars_in_unify_rhs/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_ArrayPtr STATE_VARIABLE_VarUses_0_113 = tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
    MR_ArrayPtr STATE_VARIABLE_VarUses_114;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_168 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_168;
          MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_0_113;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_1_115;
          MR_ArrayPtr STATE_VARIABLE_VarUses_2_117;
          MR_Integer Var_223;
          MR_ArrayPtr conv13_STATE_VARIABLE_VarUses_1_115;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_ArrayPtr next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;

          Var_223 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_8);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_223, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv13_STATE_VARIABLE_VarUses_1_115);
          STATE_VARIABLE_VarUses_1_115 = (MR_ArrayPtr) (conv13_STATE_VARIABLE_VarUses_1_115);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, 4))));
                MR_Word ReuseVar_20;
                MR_Word Var_116;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_116 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  ReuseVar_20 = ((MR_Word) ((MR_hl_field(0, Var_116, 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Integer Var_227;
                  MR_ArrayPtr conv14_STATE_VARIABLE_VarUses_2_117;

                  Var_227 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20);
                  mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_227, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_1_115), &conv14_STATE_VARIABLE_VarUses_2_117);
                  STATE_VARIABLE_VarUses_2_117 = (MR_ArrayPtr) (conv14_STATE_VARIABLE_VarUses_2_117);
                }
                else
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_2_117 = STATE_VARIABLE_VarUses_1_115;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = STATE_VARIABLE_VarUses_2_117;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeCallUnifyContext_54 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 4))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_7_122;
          MR_Word ArgVars_161 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_161, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_7_122);
          if ((MaybeCallUnifyContext_54 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_7_122;
          else
          {
            MR_Word CallUnifyContext_56 = ((MR_Word) ((MR_hl_field(1, MaybeCallUnifyContext_54, 0))));
            MR_ArrayPtr STATE_VARIABLE_VarUses_8_123;
            MR_Word RHS_156 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_56, 1))));
            MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_56, 0))));
            MR_Integer Var_187;
            MR_ArrayPtr conv4_STATE_VARIABLE_VarUses_8_123;
            MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
            MR_ArrayPtr next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;

            Var_187 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_157);
            mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_187, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_7_122), &conv4_STATE_VARIABLE_VarUses_8_123);
            STATE_VARIABLE_VarUses_8_123 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_VarUses_8_123);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_156;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = STATE_VARIABLE_VarUses_8_123;
            tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
            tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word ArgVars_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_4_119;

              switch (MR_tag((MR_Word) GenericCall_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, GenericCall_36, 0))));
                    MR_Integer Var_183;
                    MR_ArrayPtr conv3_STATE_VARIABLE_VarUses_4_119;

                    Var_183 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_183, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv3_STATE_VARIABLE_VarUses_4_119);
                    STATE_VARIABLE_VarUses_4_119 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_VarUses_4_119);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, GenericCall_36, 0))));
                    MR_Integer Var_179;
                    MR_ArrayPtr conv2_STATE_VARIABLE_VarUses_4_119;

                    Var_179 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_155);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_179, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv2_STATE_VARIABLE_VarUses_4_119);
                    STATE_VARIABLE_VarUses_4_119 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_VarUses_4_119);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_VarUses_4_119 = STATE_VARIABLE_VarUses_0_113;
                  break;
                case (MR_Integer) 3:
                  STATE_VARIABLE_VarUses_4_119 = STATE_VARIABLE_VarUses_0_113;
                  break;
              }
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_37, STATE_VARIABLE_VarUses_4_119, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word ExtraArgs_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
              MR_Word ExtraVars_95;
              MR_ArrayPtr STATE_VARIABLE_VarUses_24_143;
              MR_Word ArgVars_170;

              ArgVars_170 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_4[1]), Args_91);
              ExtraVars_95 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_4[2]), ExtraArgs_92);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_170, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_24_143);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ExtraVars_95, STATE_VARIABLE_VarUses_24_143, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_59, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_178 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_178, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_11_126;
              MR_Word Var_163 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Integer Var_219;
              MR_ArrayPtr conv12_STATE_VARIABLE_VarUses_11_126;

              Var_219 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_163);
              mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_219, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv12_STATE_VARIABLE_VarUses_11_126);
              STATE_VARIABLE_VarUses_11_126 = (MR_ArrayPtr) (conv12_STATE_VARIABLE_VarUses_11_126);
              transform_hlds__lambda__find_used_vars_in_cases_3_p_0(Cases_61, STATE_VARIABLE_VarUses_11_126, &STATE_VARIABLE_VarUses_114);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_13_128;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

              switch (MR_tag((MR_Word) Reason_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_64 = ((MR_Word) ((MR_hl_field(0, Reason_62, 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_64, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_13_128);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(2, Reason_62, 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_164, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_13_128);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_62, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
                        return;
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(3, Reason_62, 1))));
                        MR_Integer Var_191;
                        MR_ArrayPtr conv5_STATE_VARIABLE_VarUses_13_128;

                        Var_191 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_165);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_191, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv5_STATE_VARIABLE_VarUses_13_128);
                        STATE_VARIABLE_VarUses_13_128 = (MR_ArrayPtr) (conv5_STATE_VARIABLE_VarUses_13_128);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_VarUses_13_128 = STATE_VARIABLE_VarUses_0_113;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_68 = ((MR_Word) ((MR_hl_field(3, Reason_62, 1))));
                        MR_Word LCSVar_69 = ((MR_Word) ((MR_hl_field(3, Reason_62, 2))));
                        MR_ArrayPtr STATE_VARIABLE_VarUses_16_131;
                        MR_Integer Var_195;
                        MR_Integer Var_199;
                        MR_ArrayPtr conv6_STATE_VARIABLE_VarUses_16_131;
                        MR_ArrayPtr conv7_STATE_VARIABLE_VarUses_13_128;

                        Var_195 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_68);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_195, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv6_STATE_VARIABLE_VarUses_16_131);
                        STATE_VARIABLE_VarUses_16_131 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_VarUses_16_131);
                        Var_199 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_69);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_199, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_16_131), &conv7_STATE_VARIABLE_VarUses_13_128);
                        STATE_VARIABLE_VarUses_13_128 = (MR_ArrayPtr) (conv7_STATE_VARIABLE_VarUses_13_128);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_63;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_13_128;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_20_137;
              MR_ArrayPtr STATE_VARIABLE_VarUses_21_138;
              MR_ArrayPtr STATE_VARIABLE_VarUses_22_139;
              MR_Word Vars_169 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

              transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_169, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_20_137);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Cond_85, STATE_VARIABLE_VarUses_20_137, &STATE_VARIABLE_VarUses_21_138);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Then_86, STATE_VARIABLE_VarUses_21_138, &STATE_VARIABLE_VarUses_22_139);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_87;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_22_139;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_96)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_111 = ((MR_Word) ((MR_hl_field(0, Shorthand_96, 0))));
                    MR_Word RightGoal_112 = ((MR_Word) ((MR_hl_field(0, Shorthand_96, 1))));
                    MR_ArrayPtr STATE_VARIABLE_VarUses_34_153;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(LeftGoal_111, STATE_VARIABLE_VarUses_0_113, &STATE_VARIABLE_VarUses_34_153);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_112;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_34_153;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_98 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 1))));
                    MR_Word Inner_99 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 2))));
                    MR_Word MaybeOutputVars_100 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 3))));
                    MR_Word MainGoal_101 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 4))));
                    MR_Word OrElseGoals_102 = ((MR_Word) ((MR_hl_field(1, Shorthand_96, 5))));
                    MR_Word OuterDI_104 = ((MR_Word) ((MR_hl_field(0, Outer_98, 0))));
                    MR_Word OuterUO_105 = ((MR_Word) ((MR_hl_field(0, Outer_98, 1))));
                    MR_Word InnerDI_106;
                    MR_Word InnerUO_107;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_26_145;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_27_146;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_28_147;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_29_148;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_30_149;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_31_150;
                    MR_Integer Var_203;
                    MR_Integer Var_207;
                    MR_Integer Var_211;
                    MR_Integer Var_215;
                    MR_ArrayPtr conv8_STATE_VARIABLE_VarUses_26_145;
                    MR_ArrayPtr conv9_STATE_VARIABLE_VarUses_27_146;
                    MR_ArrayPtr conv10_STATE_VARIABLE_VarUses_28_147;
                    MR_ArrayPtr conv11_STATE_VARIABLE_VarUses_29_148;

                    Var_203 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_104);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_203, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_113), &conv8_STATE_VARIABLE_VarUses_26_145);
                    STATE_VARIABLE_VarUses_26_145 = (MR_ArrayPtr) (conv8_STATE_VARIABLE_VarUses_26_145);
                    Var_207 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_105);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_207, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_26_145), &conv9_STATE_VARIABLE_VarUses_27_146);
                    STATE_VARIABLE_VarUses_27_146 = (MR_ArrayPtr) (conv9_STATE_VARIABLE_VarUses_27_146);
                    InnerDI_106 = ((MR_Word) ((MR_hl_field(0, Inner_99, 0))));
                    InnerUO_107 = ((MR_Word) ((MR_hl_field(0, Inner_99, 1))));
                    Var_211 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_106);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_211, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_27_146), &conv10_STATE_VARIABLE_VarUses_28_147);
                    STATE_VARIABLE_VarUses_28_147 = (MR_ArrayPtr) (conv10_STATE_VARIABLE_VarUses_28_147);
                    Var_215 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_107);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_215, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_28_147), &conv11_STATE_VARIABLE_VarUses_29_148);
                    STATE_VARIABLE_VarUses_29_148 = (MR_ArrayPtr) (conv11_STATE_VARIABLE_VarUses_29_148);
                    if ((MaybeOutputVars_100 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarUses_30_149 = STATE_VARIABLE_VarUses_29_148;
                    else
                    {
                      MR_Word OutputVars_108 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_100, 0))));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(OutputVars_108, STATE_VARIABLE_VarUses_29_148, &STATE_VARIABLE_VarUses_30_149);
                    }
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(MainGoal_101, STATE_VARIABLE_VarUses_30_149, &STATE_VARIABLE_VarUses_31_150);
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(OrElseGoals_102, STATE_VARIABLE_VarUses_31_150, &STATE_VARIABLE_VarUses_114);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(2, Shorthand_96, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_171;
                    MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_0_113;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_114;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_ArrayPtr STATE_VARIABLE_VarUses_0_17 = tscc_proc_2_input_2_STATE_VARIABLE_VarUses_0_17;
    MR_ArrayPtr STATE_VARIABLE_VarUses_18;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RHSVar_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, 0))));
          MR_Integer Var_27;
          MR_ArrayPtr conv15_STATE_VARIABLE_VarUses_18;

          Var_27 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVar_6);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_27, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_17), &conv15_STATE_VARIABLE_VarUses_18);
          STATE_VARIABLE_VarUses_18 = (MR_ArrayPtr) (conv15_STATE_VARIABLE_VarUses_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_9, STATE_VARIABLE_VarUses_0_17, &STATE_VARIABLE_VarUses_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_13 = ((MR_Word) ((MR_hl_field(2, RHS_4, 1))));
          MR_Word ArgVarsModes_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, 2))));
          MR_Word LambdaGoal_16 = ((MR_Word) ((MR_hl_field(2, RHS_4, 4))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_3_21;
          MR_ArrayPtr STATE_VARIABLE_VarUses_4_22;
          MR_Word ArgVars_24;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_ArrayPtr next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_14, &ArgVars_24);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(NonLocals_13, STATE_VARIABLE_VarUses_0_17, &STATE_VARIABLE_VarUses_3_21);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_24, STATE_VARIABLE_VarUses_3_21, &STATE_VARIABLE_VarUses_4_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = LambdaGoal_16;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = STATE_VARIABLE_VarUses_4_22;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_VarUses_0_113;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_VarUses_114 = STATE_VARIABLE_VarUses_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarUses_114 = tscc_output_1_STATE_VARIABLE_VarUses_114;
  return;
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_12, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_7, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_1_12;
      MR_Integer Var_13;
      MR_ArrayPtr conv0_STATE_VARIABLE_VarUses_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      Var_13 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7);
      mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_13, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_2), &conv0_STATE_VARIABLE_VarUses_1_12);
      STATE_VARIABLE_VarUses_1_12 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_VarUses_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word UnifyMode_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word UnifyModes_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Mode_5;
    MR_Word Modes_6;
    MR_Word RHSInit_9 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, 2))));

    {
      Mode_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mode_5, 0) = ((MR_Box) (RHSInit_9));
      MR_hl_field(0, Mode_5, 1) = ((MR_Box) (RHSInit_9));
    }
    transform_hlds__lambda__unify_modes_to_modes_2_p_0(UnifyModes_4, &Modes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Modes_6));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__can_we_use_existing_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__mode_test__mode_is_input_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lambda__can_we_use_existing_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredOrFunc_13,
  MR_Word Vars_14,
  MR_Word Detism_15,
  MR_Word LambdaGoal_16,
  MR_Word * PredId_17,
  MR_Integer * ProcId_18,
  MR_Word * CalleePredInfo_19,
  MR_Word * CalleeProcInfo_20,
  MR_Word * CurriedArgVars_21,
  MR_Word * CurriedArgUnifyModes_22)
{
  MR_bool succeeded;
  MR_Word TypeInfo_43_43;
  MR_Word TypeCtorInfo_44_44;
  MR_Word LambdaGoalExpr_23 = ((MR_Word) ((MR_hl_field(0, LambdaGoal_16, 0))));
  MR_Word CallVars_25;
  MR_Word CurriedArgVarsSet_29;
  MR_Word VarsSet_30;
  MR_Word BothSet_31;
  MR_Word CalleeArgModes_32;
  MR_Integer NumCurriedArgVars_33;
  MR_Word CurriedArgModes_34;
  MR_Word CalleeCodeModel_35;
  MR_Word CodeModel_36;
  MR_Word Globals_37;
  MR_Word HighLevelCode_38;
  MR_Word Var_40;
  MR_Word Var_42;

  succeeded = ((MR_tag((MR_Word) LambdaGoalExpr_23)) == (MR_Integer) 2);
  if (succeeded)
  {
    *PredId_17 = ((MR_Word) ((MR_hl_field(2, LambdaGoalExpr_23, 0))));
    *ProcId_18 = ((MR_Integer) ((MR_hl_field(2, LambdaGoalExpr_23, 1))));
    CallVars_25 = ((MR_Word) ((MR_hl_field(2, LambdaGoalExpr_23, 2))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_12, *PredId_17, *ProcId_18, CalleePredInfo_19, CalleeProcInfo_20);
    TypeInfo_43_43 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]);
    succeeded = mercury__list__remove_suffix_3_p_0(TypeInfo_43_43, CallVars_25, Vars_14, CurriedArgVars_21);
    if (succeeded)
    {
      mercury__set__list_to_set_2_p_0(TypeInfo_43_43, *CurriedArgVars_21, &CurriedArgVarsSet_29);
      mercury__set__list_to_set_2_p_0(TypeInfo_43_43, Vars_14, &VarsSet_30);
      mercury__set__intersect_3_p_0(TypeInfo_43_43, CurriedArgVarsSet_29, VarsSet_30, &BothSet_31);
      succeeded = mercury__set__is_empty_1_p_0(TypeInfo_43_43, BothSet_31);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(*CalleeProcInfo_20, &CalleeArgModes_32);
        mercury__list__length_2_p_0(TypeInfo_43_43, *CurriedArgVars_21, &NumCurriedArgVars_33);
        TypeCtorInfo_44_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        succeeded = mercury__list__take_3_p_0(TypeCtorInfo_44_44, NumCurriedArgVars_33, CalleeArgModes_32, &CurriedArgModes_34);
        if (succeeded)
        {
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_40, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0]));
            MR_hl_field(0, Var_40, 1) = ((MR_Box) (transform_hlds__lambda__can_we_use_existing_pred_11_p_0_1));
            MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_40, 3) = ((MR_Box) (ModuleInfo_12));
          }
          succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_44_44, Var_40, CurriedArgModes_34);
          if (succeeded)
          {
            check_hlds__mode_util__modes_to_unify_modes_4_p_0(ModuleInfo_12, CurriedArgModes_34, CurriedArgModes_34, CurriedArgUnifyModes_22);
            CalleeCodeModel_35 = hlds__code_model__proc_info_interface_code_model_1_f_0(*CalleeProcInfo_20);
            hlds__code_model__determinism_to_code_model_2_p_0(Detism_15, &CodeModel_36);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_37);
            Var_42 = (MR_Integer) 55;
            libs__globals__lookup_bool_option_3_p_0(Globals_37, Var_42, &HighLevelCode_38);
            switch (HighLevelCode_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (CodeModel_36 == CalleeCodeModel_35);
                  if (!(succeeded))
                  {
                    succeeded = (CodeModel_36 == (MR_Integer) 2);
                    if (succeeded)
                      succeeded = (CalleeCodeModel_35 == (MR_Integer) 0);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CalleePredOrFunc_39;

                  CalleePredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(*CalleePredInfo_19);
                  succeeded = (PredOrFunc_13 == CalleePredOrFunc_39);
                  if (succeeded)
                    succeeded = (CodeModel_36 == CalleeCodeModel_35);
                }
                break;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  MR_Word PredIds_4;
  MR_Word STATE_VARIABLE_ModuleInfo_1_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_8;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lambda_scalar_common_4[0]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_1_8);
  STATE_VARIABLE_ModuleInfo_1_8 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_8));
  hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_1_8, STATE_VARIABLE_ModuleInfo_6);
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lambda____Unify____lambda_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lambda____Compare____lambda_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__lambda__init(void)
{
}

void mercury__transform_hlds__lambda__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_have_we_expanded_lambdas_0);
  MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0);
  MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_maybe_recompute_nonlocals_0);
  MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0);
}

void mercury__transform_hlds__lambda__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__lambda__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.lambda.
