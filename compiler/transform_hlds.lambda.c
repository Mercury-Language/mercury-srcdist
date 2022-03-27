/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-27
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
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
#include "transform_hlds.direct_arg_in_out.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_0;

static const MR_EnumFunctorDesc transform_hlds__lambda__transform_hlds__lambda__enum_functor_desc_have_we_expanded_lambdas_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_have_we_expanded_lambdas_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_have_we_expanded_lambdas_0[2];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_have_we_expanded_lambdas_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10];

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10];

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[10];

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5);

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word LambdaVars_3,
  MR_Word ClassConstraint_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__lambda__do_expand_lambdas_in_proc_6_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Word STATE_VARIABLE_PredInfo_0_42,
  MR_Word * STATE_VARIABLE_PredInfo_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS0_10,
  MR_Word UnifyMode_11,
  MR_Word Unification0_12,
  MR_Word UnifyContext_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

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
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_MustRecomputeNonLocals_0_94,
  MR_Word * STATE_VARIABLE_MustRecomputeNonLocals_95,
  MR_Word LambdaInfo0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_96);

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr HeadVar__4_4);

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
  MR_Word Goal_4,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_120,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_121);

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


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[4][5];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_7[1][7];




static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__lambda__constraint_contains_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8] = {
  /* row 0 */
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
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {     transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_have_we_expanded_lambdas_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_have_we_expanded_lambdas_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_have_we_expanded_lambdas_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_maybe_recompute_nonlocals_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_have_we_expanded_lambdas_0)
};

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10] = {
  (MR_String) "li_module_info",
  (MR_String) "li_pred_info",
  (MR_String) "li_varset",
  (MR_String) "li_tvarset",
  (MR_String) "li_inst_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_rtti_varmaps",
  (MR_String) "li_has_parallel_conj",
  (MR_String) "li_recompute_nonlocals",
  (MR_String) "li_have_expanded_lambda"
};

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[10] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
  (MR_String) "lambda_info",
  INT16_C(10),
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

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
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
  {     transform_hlds__lambda__transform_hlds__lambda__enum_name_ordered_maybe_recompute_nonlocals_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__enum_ordinal_ordered_maybe_recompute_nonlocals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_maybe_recompute_nonlocals_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

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

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

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
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
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
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0(
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

MR_bool MR_CALL 
transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
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

                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_45 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_46 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_45 > Var_46);
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
                      MR_Word SubResult9_30;
                      MR_Integer Var_47 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_48 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_47 < Var_48);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_47 > Var_48);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Integer Var_49 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_50 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_49 < Var_50);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_49 > Var_50);
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
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeCtorInfo_30_30;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeCtorInfo_30_30 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                        succeeded = (ArgX10_21 == ArgY10_22);
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
}

static void MR_CALL 
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0(
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
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5)
{
  {
    MR_bool succeeded;
    MR_Word Inst_10;
    MR_Word Var_13;

    *X_5 = X_9;
    Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_6, Mode_8);
    succeeded = ((((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_7);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word LambdaVars_3,
  MR_Word ClassConstraint_4)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassConstraint_4, (MR_Integer) 1))));
    MR_Word ConstraintVarsList_7;
    MR_Word ConstraintVars_8;
    MR_Word LambdaVarsSet_9;
    MR_Word ConstraintVarsSet_10;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[5]), ConstraintTypes_6, &ConstraintVarsList_7);
    mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), ConstraintVarsList_7, &ConstraintVars_8);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), LambdaVars_3, &LambdaVarsSet_9);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), ConstraintVars_8, &ConstraintVarsSet_10);
    succeeded = mercury__set__subset_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), ConstraintVarsSet_10, LambdaVarsSet_9);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_Word PredTable0_8;
    MR_Word PredInfo0_9;
    MR_Word ProcTable0_10;
    MR_Word ProcInfo0_11;
    MR_Word ProcInfo_12;
    MR_Word PredInfo1_13;
    MR_Word ProcTable1_14;
    MR_Word ProcTable_15;
    MR_Word PredInfo_16;
    MR_Word PredTable1_17;
    MR_Word PredTable_18;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Box conv0_PredInfo0_9;
    MR_Box conv1_ProcInfo0_11;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &PredTable0_8);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_8, ((MR_Box) (PredId_5)), &conv0_PredInfo0_9);
    PredInfo0_9 = ((MR_Word) (conv0_PredInfo0_9));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &ProcTable0_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_10, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_11);
    ProcInfo0_11 = ((MR_Word) (conv1_ProcInfo0_11));
    transform_hlds__lambda__do_expand_lambdas_in_proc_6_p_0(ProcInfo0_11, &ProcInfo_12, PredInfo0_9, &PredInfo1_13, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_21_21);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_13, &ProcTable1_14);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_12)), ProcTable1_14, &ProcTable_15);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo1_13, &PredInfo_16);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &PredTable1_17);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_16)), PredTable1_17, &PredTable_18);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_18, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_20);
  }
}

static void MR_CALL 
transform_hlds__lambda__do_expand_lambdas_in_proc_6_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Word STATE_VARIABLE_PredInfo_0_42,
  MR_Word * STATE_VARIABLE_PredInfo_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  {
    MR_Word TypeVarSet0_10;
    MR_Word HeadVars_11;
    MR_Word VarSet0_12;
    MR_Word VarTypes0_13;
    MR_Word Goal0_14;
    MR_Word RttiVarMaps0_15;
    MR_Word InstVarSet0_16;
    MR_Word HasParallelConj_17;
    MR_Word Info0_18;
    MR_Word Goal1_19;
    MR_Word Info1_20;
    MR_Word VarSet1_22;
    MR_Word TypeVarSet_23;
    MR_Word VarTypes1_25;
    MR_Word RttiVarMaps1_26;
    MR_Word MustRecomputeNonLocals_28;
    MR_Word HaveExpandedLambdas_29;
    MR_Word VarSet2_32;
    MR_Word VarTypes2_33;
    MR_Word RttiVarMaps2_34;
    MR_Word Goal_36;
    MR_Word VarSet_37;
    MR_Word VarTypes_38;
    MR_Word RttiVarMaps_39;
    MR_Word STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word STATE_VARIABLE_ProcInfo_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_53_53;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_42, &TypeVarSet0_10);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &HeadVars_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &VarSet0_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &VarTypes0_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &Goal0_14);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &RttiVarMaps0_15);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &InstVarSet0_16);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &HasParallelConj_17);
    {
      Info0_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_18, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_44));
      MR_hl_field(MR_mktag(0), Info0_18, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_42));
      MR_hl_field(MR_mktag(0), Info0_18, 2) = ((MR_Box) (VarSet0_12));
      MR_hl_field(MR_mktag(0), Info0_18, 3) = ((MR_Box) (TypeVarSet0_10));
      MR_hl_field(MR_mktag(0), Info0_18, 4) = ((MR_Box) (InstVarSet0_16));
      MR_hl_field(MR_mktag(0), Info0_18, 5) = ((MR_Box) (VarTypes0_13));
      MR_hl_field(MR_mktag(0), Info0_18, 6) = ((MR_Box) (RttiVarMaps0_15));
      MR_hl_field(MR_mktag(0), Info0_18, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_17) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_14, &Goal1_19, Info0_18, &Info1_20);
    STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 0))));
    VarSet1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 2))));
    TypeVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 3))));
    VarTypes1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 5))));
    RttiVarMaps1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 6))));
    MustRecomputeNonLocals_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    HaveExpandedLambdas_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info1_20, (MR_Integer) 7))) & (MR_Integer) 1);
    switch (MustRecomputeNonLocals_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Goal2_31;
          MR_Word InstMap0_35;
          MR_Word _Warnings_30;

          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_11, &_Warnings_30, Goal1_19, &Goal2_31, VarSet1_22, &VarSet2_32, VarTypes1_25, &VarTypes2_33, RttiVarMaps1_26, &RttiVarMaps2_34);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ProcInfo_0_40, &InstMap0_35);
          check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, Goal2_31, &Goal_36, VarTypes2_33, InstVarSet0_16, InstMap0_35, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_45);
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_36 = Goal1_19;
          VarSet2_32 = VarSet1_22;
          VarTypes2_33 = VarTypes1_25;
          RttiVarMaps2_34 = RttiVarMaps1_26;
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_48_48;
        }
        break;
    }
    switch (HaveExpandedLambdas_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word MaxVar_68;
          MR_Integer MaxVarNum_69;
          MR_ArrayPtr VarUses0_70;
          MR_ArrayPtr VarUses1_71;
          MR_ArrayPtr VarUses_72;
          MR_Word VarTypesList0_73;
          MR_Word RevVarTypesList_74;
          MR_Word VarTypesList_75;
          MR_Integer Var_76;
          MR_ArrayPtr conv0_VarUses0_70;

          MaxVar_68 = mercury__varset__max_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet2_32);
          MaxVarNum_69 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_68);
          Var_76 = (MR_Integer) ((MR_Unsigned) MaxVarNum_69 + (MR_Unsigned) 1);
          mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_76, ((MR_Box) ((MR_Integer) 0)), &conv0_VarUses0_70);
          VarUses0_70 = (MR_ArrayPtr) (conv0_VarUses0_70);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_11, VarUses0_70, &VarUses1_71);
          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_36, VarUses1_71, &VarUses_72);
          hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes2_33, &VarTypesList0_73);
          transform_hlds__lambda__filter_vartypes_4_p_0(VarTypesList0_73, (MR_Word) ((MR_Unsigned) 0U), &RevVarTypesList_74, VarUses_72);
          mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_2[0]), RevVarTypesList_74, &VarTypesList_75);
          hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(VarTypesList_75, &VarTypes_38);
          hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_72, RttiVarMaps2_34, &RttiVarMaps_39);
          VarSet_37 = VarSet2_32;
        }
        break;
      case (MR_Integer) 0:
        {
          VarSet_37 = VarSet2_32;
          VarTypes_38 = VarTypes2_33;
          RttiVarMaps_39 = RttiVarMaps2_34;
        }
        break;
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_36, STATE_VARIABLE_ProcInfo_0_40, &STATE_VARIABLE_ProcInfo_52_52);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_37, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_53_53);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_38, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_54_54);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_39, STATE_VARIABLE_ProcInfo_54_54, STATE_VARIABLE_ProcInfo_41);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_23, STATE_VARIABLE_PredInfo_0_42, STATE_VARIABLE_PredInfo_43);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS0_10,
  MR_Word UnifyMode_11,
  MR_Word Unification0_12,
  MR_Word UnifyContext_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  switch (MR_tag((MR_Word) RHS0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHSVar_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS0_10));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification0_12));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_13));
        }
        *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 2))));
        MR_Word ArgVarsModes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 3))));
        MR_Word Detism_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 5))));
        MR_Word LambdaGoal_24;
        MR_Word RHS_25;
        MR_Word STATE_VARIABLE_Info_52_52;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0)));

        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(LambdaGoal0_23, &LambdaGoal_24, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_52_52);
        {
          RHS_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RHS_25, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(MR_mktag(2), RHS_25, 1) = NULL;
          MR_hl_field(MR_mktag(2), RHS_25, 2) = ((MR_Box) (NonLocals_20));
          MR_hl_field(MR_mktag(2), RHS_25, 3) = ((MR_Box) (ArgVarsModes_21));
          MR_hl_field(MR_mktag(2), RHS_25, 4) = (MR_Box) ((MR_Unsigned) (Detism_22));
          MR_hl_field(MR_mktag(2), RHS_25, 5) = ((MR_Box) (LambdaGoal_24));
        }
        switch (MR_tag((MR_Word) Unification0_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__lambda__expand_lambda_9_p_0((MR_Word) ((MR_Unsigned) 0U), LHSVar_9, RHS_25, UnifyMode_11, Unification0_12, UnifyContext_13, GoalExpr_14, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_51);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_unify_goal\'/8", (MR_String) "unexpected unification");
              return;
            }
            break;
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_19_19;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_15_15;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
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
          MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
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
              MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_18;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_17, &Goals_18, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_85;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_84, &Goals_85, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_85));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_22;

              transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_21, &Cases_22, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_22));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word FGT_27;

              succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))) & (MR_Integer) 3);
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
                  GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Reason_25));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (SubGoal_86));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_32;
              MR_Word Then_33;
              MR_Word Else_34;
              MR_Word STATE_VARIABLE_Info_75_75;
              MR_Word STATE_VARIABLE_Info_76_76;

              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Cond0_29, &Cond_32, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_75_75);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Then0_30, &Then_33, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_76_76);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Else0_31, &Else_34, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Vars_28));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Cond_32));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Then_33));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (Else_34));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
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
                    MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 1))));
                    MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 3))));
                    MR_Word MainGoal0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 5))));
                    MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 6))));
                    MR_Word MainGoal_61;
                    MR_Word OrElseGoals_62;
                    MR_Word STATE_VARIABLE_Info_73_73;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(MainGoal0_58, &MainGoal_61, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_73_73);
                    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(OrElseGoals0_59, &OrElseGoals_62, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_69);
                    {
                      ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 0) = (MR_Box) ((MR_Unsigned) (GoalType_54));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 1) = ((MR_Box) (Outer_55));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 2) = ((MR_Box) (Inner_56));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 3) = ((MR_Box) (MaybeOutputVars_57));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 4) = ((MR_Box) (MainGoal_61));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 5) = ((MR_Box) (OrElseGoals_62));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 6) = ((MR_Box) (OrElseInners_60));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 0))));
                    MR_Word ResultVar_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 1))));
                    MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 2))));
                    MR_Word SubGoal_91;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_90, &SubGoal_91, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                    {
                      ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 0) = ((MR_Box) (MaybeIO_64));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 1) = ((MR_Box) (ResultVar_65));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 2) = ((MR_Box) (SubGoal_91));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (ShortHand_63));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_9));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

    transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredInfo_6;
    MR_Word ProcIds_7;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (X_4) << 1))));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
}

void MR_CALL 
transform_hlds__lambda__init_lambda_info_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word VarSet_12,
  MR_Word TypeVarSet_13,
  MR_Word InstVarSet_14,
  MR_Word VarTypes_15,
  MR_Word RttiVarMaps_16,
  MR_Word HasParallelConj_17,
  MR_Word * Info_18)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TypeVarSet_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InstVarSet_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarTypes_15));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RttiVarMaps_16));
    MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_17) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 0))));
    MR_Word OrigPredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 1))));
    MR_Word VarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 2))));
    MR_Word TVarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 3))));
    MR_Word InstVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 4))));
    MR_Word VarTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 5))));
    MR_Word RttiVarMaps_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 6))));
    MR_Word HasParallelConj_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word MustRecomputeNonLocals0_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_17, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word PredOrFunc_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word VarsModes_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_12, (MR_Integer) 3))));
    MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_12, (MR_Integer) 4))) & (MR_Integer) 7);
    MR_Word LambdaGoal_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_12, (MR_Integer) 5))));
    MR_Word Vars_37;
    MR_Word Var_38;
    MR_Word ArgVars0_40;
    MR_Word ArgUnifyModes0_41;
    MR_Word PredId_53;
    MR_Integer ProcId_54;
    MR_Word ArgVars_55;
    MR_Word ArgUnifyModes_56;
    MR_Word ModuleInfo_58;
    MR_Word MustRecomputeNonLocals_59;
    MR_Word ShroudedPredProcId_60;
    MR_Word ConsId_61;
    MR_Word RHS_62;
    MR_Word Unification_63;
    MR_Word Var_71;
    MR_Word PredId0_47;
    MR_Integer ProcId0_48;
    MR_Word CalleePredInfo_49;
    MR_Word CalleeProcInfo0_50;
    MR_Word CurriedArgVars_51;
    MR_Word ArgUnifyModes1_52;

    mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_34, &Vars_37);
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_14, (MR_Integer) 0))));
    ArgVars0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_14, (MR_Integer) 2))));
    ArgUnifyModes0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_14, (MR_Integer) 3))));
    succeeded = transform_hlds__lambda__can_we_use_existing_pred_11_p_0(ModuleInfo0_19, PredOrFunc_31, Vars_37, Detism_35, LambdaGoal_36, &PredId0_47, &ProcId0_48, &CalleePredInfo_49, &CalleeProcInfo0_50, &CurriedArgVars_51, &ArgUnifyModes1_52);
    if (succeeded)
    {
      MR_Word CalleeProcInfo_57;

      PredId_53 = PredId0_47;
      ProcId_54 = ProcId0_48;
      ArgVars_55 = CurriedArgVars_51;
      ArgUnifyModes_56 = ArgUnifyModes1_52;
      hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, CalleeProcInfo0_50, &CalleeProcInfo_57);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_53, ProcId_54, CalleePredInfo_49, CalleeProcInfo_57, ModuleInfo0_19, &ModuleInfo_58);
      MustRecomputeNonLocals_59 = MustRecomputeNonLocals0_27;
    }
    else
      transform_hlds__lambda__create_new_pred_for_lambda_12_p_0(RegWrapperProc_10, RHS0_12, ArgVars0_40, &ArgVars_55, &PredId_53, &ProcId_54, ArgUnifyModes0_41, &ArgUnifyModes_56, MustRecomputeNonLocals0_27, &MustRecomputeNonLocals_59, LambdaInfo0_17, &ModuleInfo_58);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (PredId_53));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ProcId_54));
    }
    ShroudedPredProcId_60 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_71);
    {
      ConsId_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), ConsId_61, 1) = ((MR_Box) (ShroudedPredProcId_60));
      MR_hl_field(MR_mktag(3), ConsId_61, 2) = NULL;
    }
    {
      RHS_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_62, 0) = ((MR_Box) (ConsId_61));
      MR_hl_field(MR_mktag(1), RHS_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_62, 2) = ((MR_Box) (ArgVars_55));
    }
    {
      Unification_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_63, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Unification_63, 1) = ((MR_Box) (ConsId_61));
      MR_hl_field(MR_mktag(0), Unification_63, 2) = ((MR_Box) (ArgVars_55));
      MR_hl_field(MR_mktag(0), Unification_63, 3) = ((MR_Box) (ArgUnifyModes_56));
      MR_hl_field(MR_mktag(0), Unification_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_63, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Unification_63, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHSVar_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_62));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_13));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_63));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *LambdaInfo_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_58));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigPredInfo_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InstVarSet_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarTypes_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RttiVarMaps_25));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_26) << 2)) | (((((MR_Unsigned) (MustRecomputeNonLocals_59) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_X_5;

    transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv1_X_5);
    *wrapper_arg_4 = ((MR_Box) (conv1_X_5));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lambda__constraint_contains_vars_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
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
  MR_Word STATE_VARIABLE_MustRecomputeNonLocals_0_94,
  MR_Word * STATE_VARIABLE_MustRecomputeNonLocals_95,
  MR_Word LambdaInfo0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_96)
{
  {
    MR_bool succeeded;
    MR_Word OrigPredInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 1))));
    MR_Word VarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 2))));
    MR_Word TVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 3))));
    MR_Word InstVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 4))));
    MR_Word VarTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 5))));
    MR_Word RttiVarMaps_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 6))));
    MR_Word HasParallelConj_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word MustRecomputeNonLocals0_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word Purity_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_14, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word VarsModes_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_14, (MR_Integer) 3))));
    MR_Word Detism_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_14, (MR_Integer) 4))) & (MR_Integer) 7);
    MR_Word LambdaGoal_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_14, (MR_Integer) 5))));
    MR_Word Vars_41;
    MR_Word Modes_42;
    MR_Word LambdaGoalInfo_44;
    MR_Word AllConstraints_45;
    MR_Word LambdaVarTypeList_46;
    MR_Word LambdaTypeVarsList_47;
    MR_Word LambdaTypeVars_48;
    MR_Word UnivConstraints_49;
    MR_Word Constraints_50;
    MR_Word LambdaGoalNonLocals_52;
    MR_Word LambdaNonLocals_53;
    MR_Word ExtraTiTcis_54;
    MR_Word NonLocals1_55;
    MR_Word NewTiTcis_56;
    MR_Word NonLocals_57;
    MR_Word ArgVars1_58;
    MR_Word AllArgVars_59;
    MR_Word ModuleName_60;
    MR_String OrigPredName_61;
    MR_Word OrigContext_62;
    MR_String OrigFile_63;
    MR_Integer OrigLine_64;
    MR_Integer LambdaCount_65;
    MR_Word PredName_66;
    MR_Word LambdaContext_67;
    MR_Word OrigArgModes_68;
    MR_Integer NumArgVars_69;
    MR_Word In_70;
    MR_Word InModes_71;
    MR_Word ArgModesMap_72;
    MR_Word OrigArgModesMap_73;
    MR_Word ArgModesMap1_74;
    MR_Word ArgModes1_75;
    MR_Word AllArgModes_76;
    MR_Word ArgTypes_77;
    MR_Word PurityMarkers_79;
    MR_Word LambdaMarkers0_80;
    MR_Word LambdaMarkers_81;
    MR_Word VarNameRemap_82;
    MR_Word LambdaVarSet_83;
    MR_Word LambdaVarTypes_84;
    MR_Word LambdaRttiVarMaps_85;
    MR_Word ProcInfo_86;
    MR_Word Assertions_89;
    MR_Word PredInfo_91;
    MR_Word PredicateTable0_92;
    MR_Word PredicateTable_93;
    MR_Word STATE_VARIABLE_ModuleInfo_97_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_22, (MR_Integer) 0))));
    MR_Word Var_99;
    MR_Word STATE_VARIABLE_ModuleInfo_102_102;
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_ProcInfo_109_109;
    MR_Word STATE_VARIABLE_ProcInfo_110_110;
    MR_Word STATE_VARIABLE_ProcInfo_112_112;
    MR_Word Var_115;
    MR_Word STATE_VARIABLE_ModuleInfo_118_118;
    MR_Box conv2_Var_78;

    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_38, &Vars_41, &Modes_42);
    LambdaGoalInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_40, (MR_Integer) 1))));
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_29, &AllConstraints_45);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_28, Vars_41, &LambdaVarTypeList_46);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[4]), LambdaVarTypeList_46, &LambdaTypeVarsList_47);
    mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), LambdaTypeVarsList_47, &LambdaTypeVars_48);
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (LambdaTypeVars_48));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_99, AllConstraints_45, &UnivConstraints_49);
    {
      Constraints_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_50, 0) = ((MR_Box) (UnivConstraints_49));
      MR_hl_field(MR_mktag(0), Constraints_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    LambdaGoalNonLocals_52 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_44);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_41, LambdaGoalNonLocals_52, &LambdaNonLocals_53);
    hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(RttiVarMaps_29, VarTypes_28, (MR_Word) ((MR_Unsigned) 0U), LambdaNonLocals_53, &ExtraTiTcis_54);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_41, LambdaGoalNonLocals_52, &NonLocals1_55);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraTiTcis_54, NonLocals1_55, &NewTiTcis_56);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_55, NewTiTcis_56, &NonLocals_57);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_57, &ArgVars1_58);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewTiTcis_56);
    if (succeeded)
      *STATE_VARIABLE_MustRecomputeNonLocals_95 = STATE_VARIABLE_MustRecomputeNonLocals_0_94;
    else
      *STATE_VARIABLE_MustRecomputeNonLocals_95 = (MR_Integer) 1;
    *ArgVars_16 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ArgVars1_58, VarTypes_28);
    AllArgVars_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), *ArgVars_16, Vars_41);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_97_97, &ModuleName_60);
    OrigPredName_61 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_24);
    OrigContext_62 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_44);
    mercury__term__context_file_2_p_0(OrigContext_62, &OrigFile_63);
    mercury__term__context_line_2_p_0(OrigContext_62, &OrigLine_64);
    hlds__hlds_module__module_info_next_lambda_count_4_p_0(OrigContext_62, &LambdaCount_65, STATE_VARIABLE_ModuleInfo_97_97, &STATE_VARIABLE_ModuleInfo_102_102);
    parse_tree__prog_util__make_pred_name_with_context_7_p_0(ModuleName_60, (MR_String) "IntroducedFrom", PredOrFunc_35, OrigPredName_61, OrigLine_64, LambdaCount_65, &PredName_66);
    LambdaContext_67 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_44);
    transform_hlds__lambda__unify_modes_to_modes_2_p_0(ArgUnifyModes0_19, &OrigArgModes_68);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), *ArgVars_16, &NumArgVars_69);
    parse_tree__prog_mode__in_mode_1_p_0(&In_70);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgVars_69, ((MR_Box) (In_70)), &InModes_71);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), *ArgVars_16, InModes_71, &ArgModesMap_72);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OrigVars_15, OrigArgModes_68, &OrigArgModesMap_73);
    mercury__map__overlay_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModesMap_72, OrigArgModesMap_73, &ArgModesMap1_74);
    mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), *ArgVars_16, ArgModesMap1_74, &ArgModes1_75);
    check_hlds__mode_util__modes_to_unify_modes_4_p_0(STATE_VARIABLE_ModuleInfo_102_102, ArgModes1_75, ArgModes1_75, ArgUnifyModes_20);
    AllArgModes_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes1_75, Modes_42);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_28, AllArgVars_59, &ArgTypes_77);
    {
      Var_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (transform_hlds__lambda__create_new_pred_for_lambda_12_p_0_3));
      MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_102_102));
    }
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_105, ArgTypes_77, AllArgModes_76, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_78);
    hlds__hlds_pred__purity_to_markers_2_p_0(Purity_33, &PurityMarkers_79);
    hlds__hlds_pred__init_markers_1_p_0(&LambdaMarkers0_80);
    hlds__hlds_pred__add_markers_3_p_0(PurityMarkers_79, LambdaMarkers0_80, &LambdaMarkers_81);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_82);
    transform_hlds__lambda__restrict_var_maps_8_p_0(AllArgVars_59, LambdaGoal_40, VarSet_25, &LambdaVarSet_83, VarTypes_28, &LambdaVarTypes_84, RttiVarMaps_29, &LambdaRttiVarMaps_85);
    hlds__hlds_pred__proc_info_create_15_p_0(LambdaContext_67, (MR_Word) ((MR_Unsigned) 0U), LambdaVarSet_83, LambdaVarTypes_84, AllArgVars_59, InstVarSet_27, AllArgModes_76, (MR_Integer) 0, Detism_39, LambdaGoal_40, LambdaRttiVarMaps_85, (MR_Integer) 0, HasParallelConj_30, VarNameRemap_82, &STATE_VARIABLE_ProcInfo_109_109);
    hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(STATE_VARIABLE_ProcInfo_109_109, &STATE_VARIABLE_ProcInfo_110_110);
    switch (MustRecomputeNonLocals0_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_110_110, &STATE_VARIABLE_ProcInfo_112_112);
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_ProcInfo_112_112 = STATE_VARIABLE_ProcInfo_110_110;
        break;
    }
    if ((RegWrapperProc_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ProcInfo_86 = STATE_VARIABLE_ProcInfo_112_112;
    else
    {
      MR_Word RegRHeadVars_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RegWrapperProc_13, (MR_Integer) 0))));

      hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(RegRHeadVars_88, STATE_VARIABLE_ProcInfo_112_112, &ProcInfo_86);
    }
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), &Assertions_89);
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (OrigFile_63));
      MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (OrigLine_64));
      MR_hl_field(MR_mktag(3), Var_115, 3) = ((MR_Box) (LambdaCount_65));
    }
    hlds__hlds_pred__pred_info_create_17_p_0(ModuleName_60, PredName_66, PredOrFunc_35, LambdaContext_67, Var_115, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), LambdaMarkers_81, ArgTypes_77, TVarSet_26, (MR_Word) ((MR_Unsigned) 0U), Constraints_50, Assertions_89, VarNameRemap_82, (MR_Word) (&transform_hlds__lambda_scalar_common_3[0]), ProcInfo_86, ProcId_18, &PredInfo_91);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_102_102, &PredicateTable0_92);
    hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_91, PredId_17, PredicateTable0_92, &PredicateTable_93);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_93, STATE_VARIABLE_ModuleInfo_102_102, &STATE_VARIABLE_ModuleInfo_118_118);
    transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(*PredId_17, *ProcId_18, LambdaVarTypes_84, AllArgVars_59, AllArgModes_76, STATE_VARIABLE_ModuleInfo_118_118, STATE_VARIABLE_ModuleInfo_96);
  }
}

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  {
    MR_Word MaxVar_14;
    MR_Integer MaxVarNum_15;
    MR_ArrayPtr VarUses0_16;
    MR_ArrayPtr VarUses1_17;
    MR_ArrayPtr VarUses_18;
    MR_Word VarTypesList0_19;
    MR_Word RevVarTypesList_20;
    MR_Word VarTypesList_21;
    MR_Integer Var_28;
    MR_ArrayPtr conv0_VarUses0_16;

    MaxVar_14 = mercury__varset__max_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_22);
    MaxVarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_14);
    Var_28 = (MR_Integer) ((MR_Unsigned) MaxVarNum_15 + (MR_Unsigned) 1);
    mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_28, ((MR_Box) ((MR_Integer) 0)), &conv0_VarUses0_16);
    VarUses0_16 = (MR_ArrayPtr) (conv0_VarUses0_16);
    transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_9, VarUses0_16, &VarUses1_17);
    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_10, VarUses1_17, &VarUses_18);
    hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(STATE_VARIABLE_VarTypes_0_24, &VarTypesList0_19);
    transform_hlds__lambda__filter_vartypes_4_p_0(VarTypesList0_19, (MR_Word) ((MR_Unsigned) 0U), &RevVarTypesList_20, VarUses_18);
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_2[0]), RevVarTypesList_20, &VarTypesList_21);
    hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(VarTypesList_21, STATE_VARIABLE_VarTypes_25);
    hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_18, STATE_VARIABLE_RttiVarMaps_0_26, STATE_VARIABLE_RttiVarMaps_27);
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
  }
}

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarTypes_3 = STATE_VARIABLE_RevVarTypes_0_2;
    else
    {
      MR_Word VarType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarType_9, (MR_Integer) 0))));
      MR_Integer VarNum_15;
      MR_Word Used_16;
      MR_Word STATE_VARIABLE_RevVarTypes_19_19;
      MR_Box conv0_Used_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTypes_0_2;

      VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__4_4), VarNum_15, &conv0_Used_16);
      Used_16 = ((MR_Word) (conv0_Used_16));
      switch (Used_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_RevVarTypes_19_19 = STATE_VARIABLE_RevVarTypes_0_2;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (VarType_9));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTypes_0_2));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarTypes_10;
      next_value_of_STATE_VARIABLE_RevVarTypes_0_2 = STATE_VARIABLE_RevVarTypes_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarTypes_0_2 = next_value_of_STATE_VARIABLE_RevVarTypes_0_2;
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_120,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_121)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_173 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_173;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_156_156;
          MR_ArrayPtr STATE_VARIABLE_VarUses_158_158;
          MR_Integer Var_282;
          MR_ArrayPtr conv12_STATE_VARIABLE_VarUses_156_156;

          Var_282 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_8);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_282, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv12_STATE_VARIABLE_VarUses_156_156);
          STATE_VARIABLE_VarUses_156_156 = (MR_ArrayPtr) (conv12_STATE_VARIABLE_VarUses_156_156);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 4))));
                MR_Word ReuseVar_20;
                MR_Word Var_157;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_157 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  ReuseVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Integer Var_291;
                  MR_ArrayPtr conv13_STATE_VARIABLE_VarUses_158_158;

                  Var_291 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20);
                  mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_291, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_156_156), &conv13_STATE_VARIABLE_VarUses_158_158);
                  STATE_VARIABLE_VarUses_158_158 = (MR_ArrayPtr) (conv13_STATE_VARIABLE_VarUses_158_158);
                }
                else
                  STATE_VARIABLE_VarUses_158_158 = STATE_VARIABLE_VarUses_156_156;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_VarUses_158_158 = STATE_VARIABLE_VarUses_156_156;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_VarUses_158_158 = STATE_VARIABLE_VarUses_156_156;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unif_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_VarUses_158_158 = STATE_VARIABLE_VarUses_156_156;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_158_158 = STATE_VARIABLE_VarUses_156_156;
                  break;
              }
              break;
          }
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 0))));
                MR_Integer Var_300;
                MR_ArrayPtr conv14_STATE_VARIABLE_VarUses_121;

                Var_300 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVar_36);
                mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_300, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_158_158), &conv14_STATE_VARIABLE_VarUses_121);
                *STATE_VARIABLE_VarUses_121 = (MR_ArrayPtr) (conv14_STATE_VARIABLE_VarUses_121);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 2))));

                transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_39, STATE_VARIABLE_VarUses_158_158, STATE_VARIABLE_VarUses_121);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 2))));
                MR_Word ArgVarsModes_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 3))));
                MR_Word LambdaGoal_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 5))));
                MR_ArrayPtr STATE_VARIABLE_VarUses_159_159;
                MR_ArrayPtr STATE_VARIABLE_VarUses_160_160;
                MR_Word ArgVars_164;
                MR_Word next_value_of_Goal_4;
                MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_120;

                mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_45, &ArgVars_164);
                transform_hlds__lambda__mark_vars_as_used_3_p_0(NonLocals_44, STATE_VARIABLE_VarUses_158_158, &STATE_VARIABLE_VarUses_159_159);
                transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_164, STATE_VARIABLE_VarUses_159_159, &STATE_VARIABLE_VarUses_160_160);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_4 = LambdaGoal_47;
                next_value_of_STATE_VARIABLE_VarUses_0_120 = STATE_VARIABLE_VarUses_160_160;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_VarUses_0_120 = next_value_of_STATE_VARIABLE_VarUses_0_120;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_167 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_167, STATE_VARIABLE_VarUses_0_120, STATE_VARIABLE_VarUses_121);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_154_154;
              MR_Word ArgVars_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) GenericCall_48)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_48, (MR_Integer) 0))));
                    MR_Integer Var_201;
                    MR_ArrayPtr conv3_STATE_VARIABLE_VarUses_154_154;

                    Var_201 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_201, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv3_STATE_VARIABLE_VarUses_154_154);
                    STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_VarUses_154_154);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_48, (MR_Integer) 0))));
                    MR_Integer Var_192;
                    MR_ArrayPtr conv2_STATE_VARIABLE_VarUses_154_154;

                    Var_192 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_165);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_192, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv2_STATE_VARIABLE_VarUses_154_154);
                    STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_VarUses_154_154);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_VarUses_154_154 = STATE_VARIABLE_VarUses_0_120;
                  break;
                case (MR_Integer) 3:
                  STATE_VARIABLE_VarUses_154_154 = STATE_VARIABLE_VarUses_0_120;
                  break;
              }
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_166, STATE_VARIABLE_VarUses_154_154, STATE_VARIABLE_VarUses_121);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_102;
              MR_ArrayPtr STATE_VARIABLE_VarUses_134_134;
              MR_Word ArgVars_175;

              ArgVars_175 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[2]), Args_98);
              ExtraVars_102 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[3]), ExtraArgs_99);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_175, STATE_VARIABLE_VarUses_0_120, &STATE_VARIABLE_VarUses_134_134);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ExtraVars_102, STATE_VARIABLE_VarUses_134_134, STATE_VARIABLE_VarUses_121);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_67, STATE_VARIABLE_VarUses_0_120, STATE_VARIABLE_VarUses_121);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_187, STATE_VARIABLE_VarUses_0_120, STATE_VARIABLE_VarUses_121);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_149_149;
              MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Integer Var_273;
              MR_ArrayPtr conv11_STATE_VARIABLE_VarUses_149_149;

              Var_273 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168);
              mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_273, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv11_STATE_VARIABLE_VarUses_149_149);
              STATE_VARIABLE_VarUses_149_149 = (MR_ArrayPtr) (conv11_STATE_VARIABLE_VarUses_149_149);
              transform_hlds__lambda__find_used_vars_in_cases_3_p_0(Cases_69, STATE_VARIABLE_VarUses_149_149, STATE_VARIABLE_VarUses_121);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_147_147;
              MR_Word next_value_of_Goal_4;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_120;

              switch (MR_tag((MR_Word) Reason_70)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_70, (MR_Integer) 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_72, STATE_VARIABLE_VarUses_0_120, &STATE_VARIABLE_VarUses_147_147);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_147_147 = STATE_VARIABLE_VarUses_0_120;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_169 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_70, (MR_Integer) 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_169, STATE_VARIABLE_VarUses_0_120, &STATE_VARIABLE_VarUses_147_147);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_VarUses_147_147 = STATE_VARIABLE_VarUses_0_120;
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
                      STATE_VARIABLE_VarUses_147_147 = STATE_VARIABLE_VarUses_0_120;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_VarUses_147_147 = STATE_VARIABLE_VarUses_0_120;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 1))));
                        MR_Integer Var_210;
                        MR_ArrayPtr conv4_STATE_VARIABLE_VarUses_147_147;

                        Var_210 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_170);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_210, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv4_STATE_VARIABLE_VarUses_147_147);
                        STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_VarUses_147_147);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_VarUses_147_147 = STATE_VARIABLE_VarUses_0_120;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 1))));
                        MR_Word LCSVar_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 2))));
                        MR_ArrayPtr STATE_VARIABLE_VarUses_143_143;
                        MR_Integer Var_219;
                        MR_Integer Var_228;
                        MR_ArrayPtr conv5_STATE_VARIABLE_VarUses_143_143;
                        MR_ArrayPtr conv6_STATE_VARIABLE_VarUses_147_147;

                        Var_219 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_75);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_219, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv5_STATE_VARIABLE_VarUses_143_143);
                        STATE_VARIABLE_VarUses_143_143 = (MR_ArrayPtr) (conv5_STATE_VARIABLE_VarUses_143_143);
                        Var_228 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_76);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_228, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_143_143), &conv6_STATE_VARIABLE_VarUses_147_147);
                        STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_VarUses_147_147);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_71;
              next_value_of_STATE_VARIABLE_VarUses_0_120 = STATE_VARIABLE_VarUses_147_147;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_VarUses_0_120 = next_value_of_STATE_VARIABLE_VarUses_0_120;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_136_136;
              MR_ArrayPtr STATE_VARIABLE_VarUses_137_137;
              MR_ArrayPtr STATE_VARIABLE_VarUses_138_138;
              MR_Word Vars_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_4;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_120;

              transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_174, STATE_VARIABLE_VarUses_0_120, &STATE_VARIABLE_VarUses_136_136);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Cond_92, STATE_VARIABLE_VarUses_136_136, &STATE_VARIABLE_VarUses_137_137);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Then_93, STATE_VARIABLE_VarUses_137_137, &STATE_VARIABLE_VarUses_138_138);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_94;
              next_value_of_STATE_VARIABLE_VarUses_0_120 = STATE_VARIABLE_VarUses_138_138;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_VarUses_0_120 = next_value_of_STATE_VARIABLE_VarUses_0_120;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_103)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_103, (MR_Integer) 0))));
                    MR_Word RightGoal_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_103, (MR_Integer) 1))));
                    MR_ArrayPtr STATE_VARIABLE_VarUses_122_122;
                    MR_Word next_value_of_Goal_4;
                    MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_120;

                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(LeftGoal_118, STATE_VARIABLE_VarUses_0_120, &STATE_VARIABLE_VarUses_122_122);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = RightGoal_119;
                    next_value_of_STATE_VARIABLE_VarUses_0_120 = STATE_VARIABLE_VarUses_122_122;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_VarUses_0_120 = next_value_of_STATE_VARIABLE_VarUses_0_120;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_103, (MR_Integer) 1))));
                    MR_Word Inner_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_103, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_103, (MR_Integer) 3))));
                    MR_Word MainGoal_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_103, (MR_Integer) 4))));
                    MR_Word OrElseGoals_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_103, (MR_Integer) 5))));
                    MR_Word OuterDI_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_105, (MR_Integer) 0))));
                    MR_Word OuterUO_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_105, (MR_Integer) 1))));
                    MR_Word InnerDI_113;
                    MR_Word InnerUO_114;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_125_125;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_126_126;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_127_127;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_128_128;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_129_129;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_130_130;
                    MR_Integer Var_237;
                    MR_Integer Var_246;
                    MR_Integer Var_255;
                    MR_Integer Var_264;
                    MR_ArrayPtr conv7_STATE_VARIABLE_VarUses_125_125;
                    MR_ArrayPtr conv8_STATE_VARIABLE_VarUses_126_126;
                    MR_ArrayPtr conv9_STATE_VARIABLE_VarUses_127_127;
                    MR_ArrayPtr conv10_STATE_VARIABLE_VarUses_128_128;

                    Var_237 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_111);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_237, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_120), &conv7_STATE_VARIABLE_VarUses_125_125);
                    STATE_VARIABLE_VarUses_125_125 = (MR_ArrayPtr) (conv7_STATE_VARIABLE_VarUses_125_125);
                    Var_246 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_112);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_246, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_125_125), &conv8_STATE_VARIABLE_VarUses_126_126);
                    STATE_VARIABLE_VarUses_126_126 = (MR_ArrayPtr) (conv8_STATE_VARIABLE_VarUses_126_126);
                    InnerDI_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_106, (MR_Integer) 0))));
                    InnerUO_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_106, (MR_Integer) 1))));
                    Var_255 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_113);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_255, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_126_126), &conv9_STATE_VARIABLE_VarUses_127_127);
                    STATE_VARIABLE_VarUses_127_127 = (MR_ArrayPtr) (conv9_STATE_VARIABLE_VarUses_127_127);
                    Var_264 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_114);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_264, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_127_127), &conv10_STATE_VARIABLE_VarUses_128_128);
                    STATE_VARIABLE_VarUses_128_128 = (MR_ArrayPtr) (conv10_STATE_VARIABLE_VarUses_128_128);
                    if ((MaybeOutputVars_107 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarUses_129_129 = STATE_VARIABLE_VarUses_128_128;
                    else
                    {
                      MR_Word OutputVars_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_107, (MR_Integer) 0))));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(OutputVars_115, STATE_VARIABLE_VarUses_128_128, &STATE_VARIABLE_VarUses_129_129);
                    }
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(MainGoal_108, STATE_VARIABLE_VarUses_129_129, &STATE_VARIABLE_VarUses_130_130);
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(OrElseGoals_109, STATE_VARIABLE_VarUses_130_130, STATE_VARIABLE_VarUses_121);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_103, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_176;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
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
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_12, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_15_15;
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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_7, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_12_12;
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
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_12_12;
      MR_Integer Var_18;
      MR_ArrayPtr conv0_STATE_VARIABLE_VarUses_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      Var_18 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7);
      mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_18, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_2), &conv0_STATE_VARIABLE_VarUses_12_12);
      STATE_VARIABLE_VarUses_12_12 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_VarUses_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_12_12;
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
    MR_Word UnifyMode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word UnifyModes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Mode_5;
    MR_Word Modes_6;
    MR_Word RHSInit_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 2))));

    {
      Mode_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mode_5, 0) = ((MR_Box) (RHSInit_9));
      MR_hl_field(MR_mktag(0), Mode_5, 1) = ((MR_Box) (RHSInit_9));
    }
    transform_hlds__lambda__unify_modes_to_modes_2_p_0(UnifyModes_4, &Modes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_6));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__can_we_use_existing_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__mode_test__mode_is_input_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfo_43_43;
    MR_Word TypeCtorInfo_44_44;
    MR_Word LambdaGoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_16, (MR_Integer) 0))));
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
      *PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_23, (MR_Integer) 0))));
      *ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_23, (MR_Integer) 1))));
      CallVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_23, (MR_Integer) 2))));
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
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__lambda__can_we_use_existing_pred_11_p_0_1));
              MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleInfo_12));
            }
            succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_44_44, Var_40, CurriedArgModes_34);
            if (succeeded)
            {
              check_hlds__mode_util__modes_to_unify_modes_4_p_0(ModuleInfo_12, CurriedArgModes_34, CurriedArgModes_34, CurriedArgUnifyModes_22);
              CalleeCodeModel_35 = hlds__code_model__proc_info_interface_code_model_1_f_0(*CalleeProcInfo_20);
              hlds__code_model__determinism_to_code_model_2_p_0(Detism_15, &CodeModel_36);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_37);
              Var_42 = (MR_Integer) 302;
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
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word PredIds_4;
    MR_Word STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_8_8;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lambda_scalar_common_2[1]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_8_8);
    STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_8_8));
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_8_8, STATE_VARIABLE_ModuleInfo_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____have_we_expanded_lambdas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____have_we_expanded_lambdas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____lambda_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____lambda_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____maybe_recompute_nonlocals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____maybe_recompute_nonlocals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
