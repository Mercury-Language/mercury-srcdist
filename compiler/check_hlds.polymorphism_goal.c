/*
** Automatically generated from `polymorphism_goal.m'
** by the Mercury compiler,
** version rotd-2025-08-12
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


// :- module check_hlds.polymorphism_goal.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_goal__init
ENDINIT
*/

#include "check_hlds.polymorphism_goal.mih"


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
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_lambda.mih"
#include "check_hlds.polymorphism_type_class_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.goal_vars.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1090__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_48_57_48_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1077__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word HeadVar__2_71);

static void MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_new_call__978__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68);

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__requantify_lambda_goal__720__1_2_p_0(
  MR_Word VarTable0_18,
  MR_Word LambdaHeadVar__1_36);

static MR_String MR_CALL 
check_hlds__polymorphism_goal__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5);

static void MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21);

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10);

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__get_constrained_vars_1_f_0(
  MR_Word Constraint_3);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0(
  MR_Word LHSVar_10,
  MR_Word RHS0_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);


static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_3[10][3];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_5[6][5];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_8[3][6];




static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_1[5][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 42)) },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_3[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_goal_scalar_common_1[4]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[1])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[2])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[2])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[4])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_goal_scalar_common_8[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1090__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56;

  LambdaHeadVar__2_56 = check_hlds__polymorphism_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_48_57_48_95_95_49_95_95_91_49_93_95_48_1_f_0();
  return LambdaHeadVar__2_56;
}

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_48_57_48_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  MR_Word LambdaHeadVar__2_56;

  LambdaHeadVar__2_56 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  return LambdaHeadVar__2_56;
}

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1077__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word HeadVar__2_71)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ExistQVars_10, ((MR_Box) (HeadVar__2_71)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_new_call__978__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68)
{
  MR_Word VarInfo_46;

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(CalleeRttiVarMaps_31, LambdaHeadVar__1_67, &VarInfo_46);
  switch (MR_tag((MR_Word) VarInfo_46)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_new_call\'/12", (MR_String) "missing rtti_var_info for initialisation pred");
        return;
      }
      break;
    case (MR_Integer) 1:
      *LambdaHeadVar__2_68 = ((MR_Word) ((MR_hl_field(1, VarInfo_46, 0))));
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_new_call\'/12", (MR_String) "unsupported: constraints on initialisation preds");
        return;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__IntroducedFrom__pred__requantify_lambda_goal__720__1_2_p_0(
  MR_Word VarTable0_18,
  MR_Word LambdaHeadVar__1_36)
{
  MR_bool succeeded;
  MR_Word VarType_27;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_18, LambdaHeadVar__1_36, &VarType_27);
  {
    MR_Word Var_44;

    Var_44 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_27, Var_44);
  }
  if (!(succeeded))
  {
    MR_Word Var_45;

    Var_45 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_27, Var_45);
  }
  return succeeded;
}

static MR_String MR_CALL 
check_hlds__polymorphism_goal__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5)
{
  MR_String TVarName_6;
  MR_String TVarName0_7;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_4, TVar_5, &TVarName0_7);
  TVarName_6 = mercury__string__f_43_43_2_f_0((MR_String) "_", TVarName0_7);
  return TVarName_6;
}

static void MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21)
{
  MR_bool succeeded;
  MR_Word MaybeArgName_19;
  MR_String TypeVarName_16;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_12, TVar_13, &TypeVarName_16);
  if (succeeded)
  {
    MR_String OldCVarName_17;
    MR_String NewCVarName_18;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_27;

    OldCVarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_16);
    Var_27 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_N_0_20);
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_27);
    Var_24 = mercury__string__f_43_43_2_f_0(InOut_9, Var_25);
    NewCVarName_18 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", Var_24);
    succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, OldCVarName_17);
    if (!(succeeded))
      succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, NewCVarName_18);
    if (succeeded)
    {
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (OldCVarName_17));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (Mode_10));
      }
      {
        MaybeArgName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgName_19, 0) = ((MR_Box) (Var_28));
      }
    }
    else
      MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MaybeArgNameBox_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeArgName_19));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  *STATE_VARIABLE_N_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_20 + (MR_Unsigned) 1);
}

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_TVarName_6;

  conv0_TVarName_6 = check_hlds__polymorphism_goal__underscore_and_tvar_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_TVarName_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10)
{
  MR_bool succeeded;
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 0))));
  MR_Word Types_12 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 1))));
  MR_String Name_13;
  MR_Word TypeVars_14;
  MR_Word TypeVarNames_15;
  MR_String ConstraintVarName_16;
  MR_Word MaybeArgName_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;

  Name_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(SymName_11, (MR_String) "__");
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Types_12, &TypeVars_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_8[2]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeVarSet_8));
  }
  TypeVarNames_15 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, TypeVars_14);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Name_13));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (TypeVarNames_15));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) ((MR_String) "TypeClassInfo_for_"));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
  }
  mercury__string__append_list_2_p_0(Var_20, &ConstraintVarName_16);
  succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_7, ConstraintVarName_16);
  if (succeeded)
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (ConstraintVarName_16));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (Mode_6));
    }
    {
      MaybeArgName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeArgName_17, 0) = ((MR_Box) (Var_23));
    }
  }
  else
    MaybeArgName_17 = (MR_Word) ((MR_Unsigned) 0U);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MaybeArgNameBox_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeArgName_17));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism_goal__get_constrained_vars_1_f_0(
  MR_Word Constraint_3)
{
  MR_Word CVars_4;
  MR_Word CTypes_6 = ((MR_Word) ((MR_hl_field(0, Constraint_3, 1))));

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(CTypes_6, &CVars_4);
  return CVars_4;
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_68;

  check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_new_call__978__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_68);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  MR_bool succeeded;
  MR_Word TVarSet0_24;
  MR_Word VarTable0_25;
  MR_Word ActualArgTypes0_26;
  MR_Word PredTVarSet_27;
  MR_Word PredArgTypes_29;
  MR_Word CalleeHeadVars_30;
  MR_Word CalleeRttiVarMaps_31;
  MR_Integer NCallArgs0_32;
  MR_Integer NPredArgs_33;
  MR_Integer NExtraArgs_34;
  MR_Word OrigPredArgTypes_37;
  MR_Word CalleeExtraHeadVars_38;
  MR_Word TVarSet_39;
  MR_Word PredToParentRenaming_40;
  MR_Word OrigParentArgTypes_41;
  MR_Word ParentToActualTSubst_42;
  MR_Word GetTypeInfoTypes_43;
  MR_Word PredTypeInfoTypes_48;
  MR_Word ParentTypeInfoTypes_49;
  MR_Word ActualTypeInfoTypes_50;
  MR_Word Ctxt_51;
  MR_Word ExtraArgsConstArgs_52;
  MR_Word ExtraGoals_53;
  MR_Word ExtraArgs_54;
  MR_Word CallArgs_55;
  MR_Word NonLocals0_56;
  MR_Word NonLocals1_57;
  MR_Word NonLocals_58;
  MR_Word GoalInfo_59;
  MR_Word CallGoalExpr_60;
  MR_Word CallGoal_61;
  MR_Word STATE_VARIABLE_Info_1_66;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word _PredExistQVars_28;
  MR_Word OrigPredArgTypes0_35;
  MR_Word CalleeExtraHeadVars0_36;
  MR_Word TypeInfo_80_80;

  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_62, &TVarSet0_24);
  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_62, &VarTable0_25);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_25, CallArgs0_17, &ActualArgTypes0_26);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(CalleePredInfo_13, &PredTVarSet_27, &_PredExistQVars_28, &PredArgTypes_29);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_14, &CalleeHeadVars_30);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CalleeProcInfo_14, &CalleeRttiVarMaps_31);
  NCallArgs0_32 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes0_26);
  NPredArgs_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_29);
  NExtraArgs_34 = (MR_Integer) ((MR_Unsigned) NPredArgs_33 - (MR_Unsigned) NCallArgs0_32);
  succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NExtraArgs_34, PredArgTypes_29, &OrigPredArgTypes0_35);
  if (succeeded)
  {
    TypeInfo_80_80 = (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]);
    succeeded = mercury__list__take_3_p_0(TypeInfo_80_80, NExtraArgs_34, CalleeHeadVars_30, &CalleeExtraHeadVars0_36);
  }
  if (succeeded)
  {
    OrigPredArgTypes_37 = OrigPredArgTypes0_35;
    CalleeExtraHeadVars_38 = CalleeExtraHeadVars0_36;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_new_call\'/12", (MR_String) "extra args not found");
      return;
    }
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_24, PredTVarSet_27, &TVarSet_39, &PredToParentRenaming_40);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, OrigPredArgTypes_37, &OrigParentArgTypes_41);
  parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(OrigParentArgTypes_41, ActualArgTypes0_26, &ParentToActualTSubst_42);
  check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TVarSet_39, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_1_66);
  {
    GetTypeInfoTypes_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GetTypeInfoTypes_43, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_8[1]));
    MR_hl_field(0, GetTypeInfoTypes_43, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_new_call_12_p_0_1));
    MR_hl_field(0, GetTypeInfoTypes_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, GetTypeInfoTypes_43, 3) = ((MR_Box) (CalleeRttiVarMaps_31));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), GetTypeInfoTypes_43, CalleeExtraHeadVars_38, &PredTypeInfoTypes_48);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, PredTypeInfoTypes_48, &ParentTypeInfoTypes_49);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ParentToActualTSubst_42, ParentTypeInfoTypes_49, &ActualTypeInfoTypes_50);
  Ctxt_51 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualTypeInfoTypes_50, Ctxt_51, &ExtraArgsConstArgs_52, &ExtraGoals_53, STATE_VARIABLE_Info_1_66, STATE_VARIABLE_Info_63);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraArgsConstArgs_52, &ExtraArgs_54);
  CallArgs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraArgs_54, CallArgs0_17);
  NonLocals0_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
  NonLocals1_57 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraArgs_54);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_56, NonLocals1_57, &NonLocals_58);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_58, GoalInfo0_21, &GoalInfo_59);
  {
    CallGoalExpr_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallGoalExpr_60, 0) = ((MR_Box) (PredId_15));
    MR_hl_field(2, CallGoalExpr_60, 1) = ((MR_Box) (ProcId_16));
    MR_hl_field(2, CallGoalExpr_60, 2) = ((MR_Box) (CallArgs_55));
    MR_hl_field(2, CallGoalExpr_60, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_18));
    MR_hl_field(2, CallGoalExpr_60, 4) = ((MR_Box) (MaybeCallUnifyContext_19));
    MR_hl_field(2, CallGoalExpr_60, 5) = ((MR_Box) (SymName_20));
  }
  {
    CallGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallGoal_61, 0) = ((MR_Box) (CallGoalExpr_60));
    MR_hl_field(0, CallGoal_61, 1) = ((MR_Box) (GoalInfo_59));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (CallGoal_61));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_53, Var_75);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_74, GoalInfo_59, Goal_22);
}

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0(
  MR_Word Type_7,
  MR_Word RttiVarMaps_8,
  MR_Word STATE_VARIABLE_Unification_0_13,
  MR_Word * STATE_VARIABLE_Unification_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_15,
  MR_Word * STATE_VARIABLE_GoalInfo_16)
{
  MR_Word TypeVars_11;
  MR_Word TypeInfoLocns_12;
  MR_Word Var_17;
  MR_Word TypeInfoVars0_22;
  MR_Word TypeInfoVars_23;
  MR_Word NonLocals0_24;
  MR_Word NonLocals_25;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_7, &TypeVars_11);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_8[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (RttiVarMaps_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_17, TypeVars_11, &TypeInfoLocns_12);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[9]), TypeInfoLocns_12, &TypeInfoVars0_22);
  mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), TypeInfoVars0_22, &TypeInfoVars_23);
  NonLocals0_24 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_15);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_23, NonLocals0_24, &NonLocals_25);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_25, STATE_VARIABLE_GoalInfo_0_15, STATE_VARIABLE_GoalInfo_16);
  switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_13, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Modes_26 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_13, 1))));
            MR_Word CanFail_27 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_13, 2))) & (MR_Integer) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Unification_14 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Modes_26));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
              MR_hl_field(3, base, 3) = ((MR_Box) (TypeInfoVars_23));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_57;
        MR_Word STATE_VARIABLE_Info_17_138;
        MR_Word STATE_VARIABLE_Info_18_139;
        MR_Word InitialSnapshot_194;
        MR_Word GoalExpr_232;

        check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "neg", &InitialSnapshot_194, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_17_138);
        check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_56, &SubGoal_57, STATE_VARIABLE_Info_17_138, &STATE_VARIABLE_Info_18_139);
        check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after neg", InitialSnapshot_194, STATE_VARIABLE_Info_18_139, STATE_VARIABLE_Info_110);
        GoalExpr_232 = (MR_Word) ((MR_Word) (SubGoal_57));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_232));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 0))));
        MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 1))));
        MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 2))));
        MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 3))));
        MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 4))));

        check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0(LHSVar_10, RHS_11, Mode_12, Unification_13, UnifyContext_14, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 0))));
        MR_Word ArgVars0_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 2))));
        MR_Word GoalInfo_21;
        MR_Word ExtraVars_22;
        MR_Word ExtraGoals_23;
        MR_Word ArgVars_24;
        MR_Word CallExpr_25;
        MR_Word Call_26;
        MR_Word GoalList_27;
        MR_Word Var_113;
        MR_Word Var_222;
        MR_Integer Var_223;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;

        check_hlds__polymorphism_goal__polymorphism_process_call_8_p_0(PredId_15, ArgVars0_17, GoalInfo0_9, &GoalInfo_21, &ExtraVars_22, &ExtraGoals_23, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
        ArgVars_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraVars_22, ArgVars0_17);
        Var_222 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 0))));
        Var_223 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, 1))));
        Var_225 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, 3))) & (MR_Integer) 1);
        Var_226 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 4))));
        Var_227 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, 5))));
        {
          CallExpr_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, CallExpr_25, 0) = ((MR_Box) (Var_222));
          MR_hl_field(2, CallExpr_25, 1) = ((MR_Box) (Var_223));
          MR_hl_field(2, CallExpr_25, 2) = ((MR_Box) (ArgVars_24));
          MR_hl_field(2, CallExpr_25, 3) = (MR_Box) ((MR_Unsigned) (Var_225));
          MR_hl_field(2, CallExpr_25, 4) = ((MR_Box) (Var_226));
          MR_hl_field(2, CallExpr_25, 5) = ((MR_Box) (Var_227));
        }
        {
          Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Call_26, 0) = ((MR_Box) (CallExpr_25));
          MR_hl_field(0, Call_26, 1) = ((MR_Box) (GoalInfo_21));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Call_26));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_23, Var_113);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_6 = Goal0_5;
            *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_34;
            MR_Word PredInfo_35;
            MR_Word PredModule_36;
            MR_String PredName_37;
            MR_Integer PredFormArityInt_38;
            MR_Word Var_115;
            MR_Word PredId_189 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

            check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_109, &ModuleInfo_34);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_34, PredId_189, &PredInfo_35);
            PredModule_36 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_35);
            PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_35);
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_35, &Var_115);
            PredFormArityInt_38 = (MR_Integer) (Var_115);
            succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_36, PredName_37, PredFormArityInt_38);
            if (succeeded)
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
            }
            else
              check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0(PredInfo_35, GoalExpr0_8, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_44 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
            MR_Word Goals0_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Goals_46;
            MR_Word GoalExpr_48;

            switch (ConjType_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word InitialSnapshot_47;
                  MR_Word STATE_VARIABLE_Info_5_119;

                  check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "parconj", &InitialSnapshot_47, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_5_119);
                  check_hlds__polymorphism_goal__polymorphism_process_par_conj_5_p_0(Goals0_45, &Goals_46, InitialSnapshot_47, STATE_VARIABLE_Info_5_119, STATE_VARIABLE_Info_110);
                }
                break;
              case (MR_Integer) 0:
                check_hlds__polymorphism_goal__polymorphism_process_plain_conj_4_p_0(Goals0_45, &Goals_46, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
                break;
            }
            {
              GoalExpr_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) (ConjType_44));
              MR_hl_field(3, GoalExpr_48, 2) = ((MR_Box) (Goals_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_48));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_Info_7_122;
            MR_Word STATE_VARIABLE_Info_8_123;
            MR_Word Goals0_190 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Goals_191;
            MR_Word InitialSnapshot_192;
            MR_Word GoalExpr_230;

            check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "disj", &InitialSnapshot_192, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_7_122);
            check_hlds__polymorphism_goal__polymorphism_process_disj_5_p_0(Goals0_190, &Goals_191, InitialSnapshot_192, STATE_VARIABLE_Info_7_122, &STATE_VARIABLE_Info_8_123);
            check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after disj", InitialSnapshot_192, STATE_VARIABLE_Info_8_123, STATE_VARIABLE_Info_110);
            {
              GoalExpr_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_230, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_230, 1) = ((MR_Box) (Goals_191));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_230));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word CanFail_59 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
            MR_Word Cases0_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Cases_61;
            MR_Word STATE_VARIABLE_Info_20_143;
            MR_Word STATE_VARIABLE_Info_21_144;
            MR_Word InitialSnapshot_195;
            MR_Word GoalExpr_234;

            check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "switch", &InitialSnapshot_195, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_20_143);
            check_hlds__polymorphism_goal__polymorphism_process_cases_5_p_0(Cases0_60, &Cases_61, InitialSnapshot_195, STATE_VARIABLE_Info_20_143, &STATE_VARIABLE_Info_21_144);
            check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after switch", InitialSnapshot_195, STATE_VARIABLE_Info_21_144, STATE_VARIABLE_Info_110);
            {
              GoalExpr_234 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_234, 1) = ((MR_Box) (Var_58));
              MR_hl_field(3, GoalExpr_234, 2) = (MR_Box) ((MR_Unsigned) (CanFail_59));
              MR_hl_field(3, GoalExpr_234, 3) = ((MR_Box) (Cases_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_234));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word SubGoal0_209 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word GoalExpr_233;

            switch (MR_tag((MR_Word) Reason0_62)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_Info_29_156;
                  MR_Word STATE_VARIABLE_Info_30_157;
                  MR_Word InitialSnapshot_202;
                  MR_Word SubGoal_203;

                  check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "exists", &InitialSnapshot_202, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_29_156);
                  check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_203, STATE_VARIABLE_Info_29_156, &STATE_VARIABLE_Info_30_157);
                  check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after exists", InitialSnapshot_202, STATE_VARIABLE_Info_30_157, STATE_VARIABLE_Info_110);
                  {
                    GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                    MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_203));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubGoal_201;

                  check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_201, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
                  {
                    GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                    MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_201));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word STATE_VARIABLE_Info_25_150;
                  MR_Word STATE_VARIABLE_Info_26_151;
                  MR_Word InitialSnapshot_199;
                  MR_Word SubGoal_200;

                  check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "promise_solns", &InitialSnapshot_199, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_25_150);
                  check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_200, STATE_VARIABLE_Info_25_150, &STATE_VARIABLE_Info_26_151);
                  check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after promise_solns", InitialSnapshot_199, STATE_VARIABLE_Info_26_151, STATE_VARIABLE_Info_110);
                  {
                    GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                    MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_200));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_62, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_201;

                      check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_201, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
                      {
                        GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                        MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_201));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_63 = ((MR_Word) ((MR_hl_field(3, Reason0_62, 1))));
                      MR_Word Kind_64 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_62, 2))) & (MR_Integer) 3);

                      switch (Kind_64) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_196;

                            check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_196, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
                            {
                              GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                              MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_196));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          check_hlds__polymorphism_goal__polymorphism_process_from_ground_term_initial_6_p_0(TermVar_63, GoalInfo0_9, SubGoal0_209, &GoalExpr_233, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_32_161;
                      MR_Word STATE_VARIABLE_Info_33_162;
                      MR_Word InitialSnapshot_204;
                      MR_Word SubGoal_205;

                      check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "trace", &InitialSnapshot_204, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_32_161);
                      check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(SubGoal0_209, &SubGoal_205, STATE_VARIABLE_Info_32_161, &STATE_VARIABLE_Info_33_162);
                      check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after trace", InitialSnapshot_204, STATE_VARIABLE_Info_33_162, STATE_VARIABLE_Info_110);
                      {
                        GoalExpr_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_233, 1) = ((MR_Box) (Reason0_62));
                        MR_hl_field(3, GoalExpr_233, 2) = ((MR_Box) (SubGoal_205));
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
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_233));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;
            MR_Word STATE_VARIABLE_Info_10_127;
            MR_Word STATE_VARIABLE_Info_11_128;
            MR_Word STATE_VARIABLE_Info_12_130;
            MR_Word STATE_VARIABLE_Info_13_131;
            MR_Word STATE_VARIABLE_Info_14_133;
            MR_Word STATE_VARIABLE_Info_15_134;
            MR_Word InitialSnapshot_193;
            MR_Word GoalExpr_231;

            check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "ite", &InitialSnapshot_193, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_10_127);
            check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Cond0_50, &Cond_53, STATE_VARIABLE_Info_10_127, &STATE_VARIABLE_Info_11_128);
            check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "before then", InitialSnapshot_193, STATE_VARIABLE_Info_11_128, &STATE_VARIABLE_Info_12_130);
            check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Then0_51, &Then_54, STATE_VARIABLE_Info_12_130, &STATE_VARIABLE_Info_13_131);
            check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "before else", InitialSnapshot_193, STATE_VARIABLE_Info_13_131, &STATE_VARIABLE_Info_14_133);
            check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Else0_52, &Else_55, STATE_VARIABLE_Info_14_133, &STATE_VARIABLE_Info_15_134);
            check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after ite", InitialSnapshot_193, STATE_VARIABLE_Info_15_134, STATE_VARIABLE_Info_110);
            {
              GoalExpr_231 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_231, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_231, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_231, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_231, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_231, 4) = ((MR_Box) (Else_55));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_231));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word ShortHand_95;
            MR_Word GoalExpr_221;

            switch (MR_tag((MR_Word) ShortHand0_86)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_goal\'/4", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_87 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_86, 0))) & (MR_Integer) 3);
                  MR_Word Outer_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 1))));
                  MR_Word Inner_89 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 2))));
                  MR_Word MainGoal0_90 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 4))));
                  MR_Word OrElseGoals0_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 5))));
                  MR_Word OrElseInners_92 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 6))));
                  MR_Word MainGoal_93;
                  MR_Word OrElseGoals_94;
                  MR_Word STATE_VARIABLE_Info_35_166;
                  MR_Word STATE_VARIABLE_Info_36_167;
                  MR_Word STATE_VARIABLE_Info_37_168;
                  MR_Word InitialSnapshot_211;
                  MR_Word Vars_212 = ((MR_Word) ((MR_hl_field(1, ShortHand0_86, 3))));

                  check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "atomic", &InitialSnapshot_211, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_35_166);
                  check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(MainGoal0_90, &MainGoal_93, STATE_VARIABLE_Info_35_166, &STATE_VARIABLE_Info_36_167);
                  check_hlds__polymorphism_goal__polymorphism_process_disj_5_p_0(OrElseGoals0_91, &OrElseGoals_94, InitialSnapshot_211, STATE_VARIABLE_Info_36_167, &STATE_VARIABLE_Info_37_168);
                  check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after atomic", InitialSnapshot_211, STATE_VARIABLE_Info_37_168, STATE_VARIABLE_Info_110);
                  {
                    ShortHand_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_95, 0) = (MR_Box) ((MR_Unsigned) (GoalType_87));
                    MR_hl_field(1, ShortHand_95, 1) = ((MR_Box) (Outer_88));
                    MR_hl_field(1, ShortHand_95, 2) = ((MR_Box) (Inner_89));
                    MR_hl_field(1, ShortHand_95, 3) = ((MR_Box) (Vars_212));
                    MR_hl_field(1, ShortHand_95, 4) = ((MR_Box) (MainGoal_93));
                    MR_hl_field(1, ShortHand_95, 5) = ((MR_Box) (OrElseGoals_94));
                    MR_hl_field(1, ShortHand_95, 6) = ((MR_Box) (OrElseInners_92));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_96 = ((MR_Word) ((MR_hl_field(2, ShortHand0_86, 0))));
                  MR_Word ResultVar_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_86, 1))));
                  MR_Word STATE_VARIABLE_Info_39_172;
                  MR_Word STATE_VARIABLE_Info_43_179;
                  MR_Word InitialSnapshot_213;
                  MR_Word SubGoal0_214 = ((MR_Word) ((MR_hl_field(2, ShortHand0_86, 2))));
                  MR_Word SubGoal_215;
                  MR_Word SubGoalInfo_99;
                  MR_Word ConjunctA0_101;
                  MR_Word ConjunctB0_102;
                  MR_Word SubGoalExpr0_98;
                  MR_Word Conjuncts0_100;
                  MR_Word Var_173;
                  MR_Word Var_174;
                  MR_Word Var_175;

                  check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "try", &InitialSnapshot_213, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_39_172);
                  SubGoalExpr0_98 = ((MR_Word) ((MR_hl_field(0, SubGoal0_214, 0))));
                  SubGoalInfo_99 = ((MR_Word) ((MR_hl_field(0, SubGoal0_214, 1))));
                  succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_98)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_98, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_173 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_98, 1))) & (MR_Integer) 1);
                    Conjuncts0_100 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_98, 2))));
                    succeeded = (Var_173 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Conjuncts0_100 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ConjunctA0_101 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_100, 0))));
                        Var_174 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_100, 1))));
                        succeeded = (Var_174 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConjunctB0_102 = ((MR_Word) ((MR_hl_field(1, Var_174, 0))));
                          Var_175 = ((MR_Word) ((MR_hl_field(1, Var_174, 1))));
                          succeeded = (Var_175 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word ConjunctA_103;
                    MR_Word ConjunctB_104;
                    MR_Word Conjuncts_105;
                    MR_Word SubGoalExpr_106;
                    MR_Word STATE_VARIABLE_Info_40_176;
                    MR_Word STATE_VARIABLE_Info_41_177;
                    MR_Word STATE_VARIABLE_Info_42_178;
                    MR_Word Var_180;

                    check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_39_172, &STATE_VARIABLE_Info_40_176);
                    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(ConjunctA0_101, &ConjunctA_103, STATE_VARIABLE_Info_40_176, &STATE_VARIABLE_Info_41_177);
                    check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_41_177, &STATE_VARIABLE_Info_42_178);
                    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(ConjunctB0_102, &ConjunctB_104, STATE_VARIABLE_Info_42_178, &STATE_VARIABLE_Info_43_179);
                    {
                      Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_180, 0) = ((MR_Box) (ConjunctB_104));
                      MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Conjuncts_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Conjuncts_105, 0) = ((MR_Box) (ConjunctA_103));
                      MR_hl_field(1, Conjuncts_105, 1) = ((MR_Box) (Var_180));
                    }
                    {
                      SubGoalExpr_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SubGoalExpr_106, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, SubGoalExpr_106, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, SubGoalExpr_106, 2) = ((MR_Box) (Conjuncts_105));
                    }
                    {
                      SubGoal_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SubGoal_215, 0) = ((MR_Box) (SubGoalExpr_106));
                      MR_hl_field(0, SubGoal_215, 1) = ((MR_Box) (SubGoalInfo_99));
                    }
                  }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_goal\'/4", (MR_String) "malformed try goal");
                      return;
                    }
                  check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after try", InitialSnapshot_213, STATE_VARIABLE_Info_43_179, STATE_VARIABLE_Info_110);
                  {
                    ShortHand_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_95, 0) = ((MR_Box) (MaybeIO_96));
                    MR_hl_field(2, ShortHand_95, 1) = ((MR_Box) (ResultVar_97));
                    MR_hl_field(2, ShortHand_95, 2) = ((MR_Box) (SubGoal_215));
                  }
                }
                break;
            }
            {
              GoalExpr_221 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_221, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_221, 1) = ((MR_Box) (ShortHand_95));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_221));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
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
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_InvariantsStatus_5 = STATE_VARIABLE_InvariantsStatus_0_4;
      *STATE_VARIABLE_ConstructOrderMarkedGoals_3 = STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalExpr0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_17, 0))));
      MR_Word GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_17, 1))));
      MR_Word LHSVar_33;
      MR_Word Mode_34;
      MR_Word Unification_35;
      MR_Word UnifyContext_36;
      MR_Word ConsId_37;
      MR_Word RHSVars_38;
      MR_Word Goal_39;
      MR_Word Changed_40;
      MR_Word MarkedGoal_47;
      MR_Word STATE_VARIABLE_Info_1_56;
      MR_Word STATE_VARIABLE_InvariantsStatus_1_66;
      MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_1_67;
      MR_Word LHSVarPrime_25;
      MR_Word ModePrime_27;
      MR_Word UnificationPrime_28;
      MR_Word UnifyContextPrime_29;
      MR_Word ConsIdPrime_30;
      MR_Word RHSVarsPrime_32;
      MR_Word RHS_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVarPrime_25 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_23, 0))));
        RHS_26 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_23, 1))));
        ModePrime_27 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_23, 2))));
        UnificationPrime_28 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_23, 3))));
        UnifyContextPrime_29 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_23, 4))));
        succeeded = ((MR_tag((MR_Word) RHS_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_30 = ((MR_Word) ((MR_hl_field(1, RHS_26, 0))));
          RHSVarsPrime_32 = ((MR_Word) ((MR_hl_field(1, RHS_26, 2))));
        }
      }
      if (succeeded)
      {
        LHSVar_33 = LHSVarPrime_25;
        Mode_34 = ModePrime_27;
        Unification_35 = UnificationPrime_28;
        UnifyContext_36 = UnifyContextPrime_29;
        ConsId_37 = ConsIdPrime_30;
        RHSVars_38 = RHSVarsPrime_32;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_fgti_goals\'/7", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      check_hlds__polymorphism_goal__polymorphism_process_unify_functor_11_p_0(LHSVar_33, ConsId_37, RHSVars_38, Mode_34, Unification_35, UnifyContext_36, GoalInfo0_24, &Goal_39, &Changed_40, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_56);
      switch (Changed_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MarkedGoal_47, 0) = ((MR_Box) (Goal0_17));
              MR_hl_field(0, MarkedGoal_47, 1) = ((MR_Box) (LHSVar_33));
              MR_hl_field(0, MarkedGoal_47, 2) = ((MR_Box) (RHSVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_1_66 = STATE_VARIABLE_InvariantsStatus_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MarkedGoal_47, 0) = ((MR_Box) (Goal_39));
              MR_hl_field(1, MarkedGoal_47, 1) = ((MR_Box) (LHSVar_33));
              MR_hl_field(1, MarkedGoal_47, 2) = ((MR_Box) (RHSVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_1_66 = (MR_Integer) 1;
          }
          break;
      }
      {
        STATE_VARIABLE_ConstructOrderMarkedGoals_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ConstructOrderMarkedGoals_1_67, 0) = ((MR_Box) (MarkedGoal_47));
        MR_hl_field(1, STATE_VARIABLE_ConstructOrderMarkedGoals_1_67, 1) = ((MR_Box) (STATE_VARIABLE_ConstructOrderMarkedGoals_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_18;
      next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = STATE_VARIABLE_ConstructOrderMarkedGoals_1_67;
      next_value_of_STATE_VARIABLE_InvariantsStatus_0_4 = STATE_VARIABLE_InvariantsStatus_1_66;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_1_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      STATE_VARIABLE_InvariantsStatus_0_4 = next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_1_23;
    MR_Word STATE_VARIABLE_Info_2_24;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "case", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_23);
    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_Info_1_23, &STATE_VARIABLE_Info_2_24);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__polymorphism_goal__polymorphism_process_cases_5_p_0(Cases0_11, &Cases_13, InitialSnapshot_3, STATE_VARIABLE_Info_2_24, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_1_19;
    MR_Word STATE_VARIABLE_Info_2_20;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "disjunct", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_19);
    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_1_19, &STATE_VARIABLE_Info_2_20);
    check_hlds__polymorphism_goal__polymorphism_process_disj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_2_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_1_19;
    MR_Word STATE_VARIABLE_Info_2_20;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "par conjunct", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_19);
    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_1_19, &STATE_VARIABLE_Info_2_20);
    check_hlds__polymorphism_goal__polymorphism_process_par_conj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_2_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_plain_conj_4_p_0(
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

    check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_15);
    check_hlds__polymorphism_goal__polymorphism_process_plain_conj_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_1_15, STATE_VARIABLE_Info_4);
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
check_hlds__polymorphism_goal__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word SubGoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, SubGoal0_9, 0))));
  MR_Word SubGoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, SubGoal0_9, 1))));
  MR_Word SubGoals0_15;
  MR_Word ConstructOrderMarkedSubGoals_16;
  MR_Word InvariantsStatus_17;
  MR_Word SubGoals0Prime_14;
  MR_Word Var_27;

  succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_12, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_27 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_12, 1))) & (MR_Integer) 1);
    SubGoals0Prime_14 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_12, 2))));
    succeeded = (Var_27 == (MR_Integer) 0);
  }
  if (succeeded)
    SubGoals0_15 = SubGoals0Prime_14;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_from_ground_term_initial\'/6", (MR_String) "from_ground_term_initial goal is not plain conj");
      return;
    }
  check_hlds__polymorphism_goal__polymorphism_process_fgti_goals_7_p_0(SubGoals0_15, (MR_Word) ((MR_Unsigned) 0U), &ConstructOrderMarkedSubGoals_16, (MR_Integer) 0, &InvariantsStatus_17, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
  switch (InvariantsStatus_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_19;
        MR_Word Globals_20;
        MR_Word OptTuple_21;
        MR_Integer Threshold_22;
        MR_Word SubGoal_23;

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_26, &ModuleInfo_19);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_20);
        libs__globals__get_opt_tuple_2_p_0(Globals_20, &OptTuple_21);
        Threshold_22 = ((MR_Integer) ((MR_hl_field(0, OptTuple_21, 8))));
        hlds__from_ground_term_util__introduce_partial_fgt_scopes_6_p_0(Threshold_22, (MR_Integer) 1, GoalInfo0_8, SubGoalInfo0_13, ConstructOrderMarkedSubGoals_16, &SubGoal_23);
        *GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, SubGoal_23, 0))));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Reason_18;

        {
          Reason_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Reason_18, 1) = ((MR_Box) (TermVar_7));
          MR_hl_field(3, Reason_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_18));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal0_9));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_22;
  MR_Word VarTable0_23;
  MR_Word TypeOfX_24;
  MR_Integer Arity_25;
  MR_Word PredId_27;
  MR_Integer ProcId0_28;
  MR_Word Purity_29;
  MR_Word CalleeArgTypes_31;
  MR_Word ShroudedPredProcId_26;
  MR_Word Var_67;
  MR_Word _PredOrFunc_30;

  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_65, &ModuleInfo0_22);
  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_65, &VarTable0_23);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_23, X0_12, &TypeOfX_24);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ArgVars0_14, &Arity_25);
  succeeded = ((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 2);
  if (succeeded)
  {
    ShroudedPredProcId_26 = (MR_Word) (MR_body((MR_Word) (ConsId0_13), (MR_Integer) 2));
    Var_67 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
    PredId_27 = ((MR_Word) ((MR_hl_field(0, Var_67, 0))));
    ProcId0_28 = ((MR_Integer) ((MR_hl_field(0, Var_67, 1))));
    succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(TypeOfX_24, &Purity_29, &_PredOrFunc_30, &CalleeArgTypes_31);
  }
  if (succeeded)
  {
    MR_Integer ProcId_34;
    MR_Word GoalInfo1_36;
    MR_Word Context_37;
    MR_Word MaybeRHS0_38;
    MR_Word VarTable_39;
    MR_Word STATE_VARIABLE_Info_1_71;
    MR_Integer Var_96;

    Var_96 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    succeeded = (ProcId0_28 == Var_96);
    if (succeeded)
    {
      MR_Word PredInfo_32;
      MR_Word ProcIds_33;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_22, PredId_27, &PredInfo_32);
      ProcIds_33 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_32);
      if ((ProcIds_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_unify_functor\'/11", (MR_String) "no modes");
          return;
        }
      else
      {
        ProcId_34 = ((MR_Integer) ((MR_hl_field(1, ProcIds_33, 0))));
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 23, GoalInfo0_18, &GoalInfo1_36);
      }
    }
    else
    {
      ProcId_34 = ProcId0_28;
      GoalInfo1_36 = GoalInfo0_18;
    }
    Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_13_p_0(ModuleInfo0_22, Purity_29, X0_12, PredId_27, ProcId_34, ArgVars0_14, CalleeArgTypes_31, UnifyContext_17, GoalInfo1_36, Context_37, &MaybeRHS0_38, VarTable0_23, &VarTable_39);
    check_hlds__polymorphism_info__poly_info_set_var_table_3_p_0(VarTable_39, STATE_VARIABLE_Info_0_65, &STATE_VARIABLE_Info_1_71);
    if (((MR_tag((MR_Word) MaybeRHS0_38)) == (MR_Integer) 0))
    {
      MR_Word Specs_41 = ((MR_Word) ((MR_hl_field(0, MaybeRHS0_38, 0))));
      MR_Word Specs0_42;
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_Info_3_74;

      check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(STATE_VARIABLE_Info_1_71, &Specs0_42);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_41, Specs0_42);
      check_hlds__polymorphism_info__poly_info_set_errors_3_p_0(Var_73, STATE_VARIABLE_Info_1_71, &STATE_VARIABLE_Info_3_74);
      check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0(X0_12, (MR_Word) (MR_mkword(1, &check_hlds__polymorphism_goal_scalar_common_3[0])), Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_36, Goal_19, STATE_VARIABLE_Info_3_74, STATE_VARIABLE_Info_66);
    }
    else
    {
      MR_Word RHS0_40 = ((MR_Word) ((MR_hl_field(1, MaybeRHS0_38, 0))));

      check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0(X0_12, RHS0_40, Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_36, Goal_19, STATE_VARIABLE_Info_1_71, STATE_VARIABLE_Info_66);
    }
    *Changed_20 = (MR_Integer) 1;
  }
  else
  {
    MR_Word ConsId_49;
    MR_Word IsExistConstr_50;
    MR_Word ConsDefn_51;
    MR_Word DuCtor0_44;
    MR_Word Functor0_45;
    MR_Word ConsTypeCtor_46;
    MR_Word DuCtor_48;
    MR_Integer Var_97;
    MR_Word OrigFunctor_47;

    succeeded = ((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      DuCtor0_44 = (MR_Word) (MR_body((MR_Word) (ConsId0_13), (MR_Integer) 1));
      Functor0_45 = ((MR_Word) ((MR_hl_field(0, DuCtor0_44, 0))));
      Var_97 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_44, 1))));
      ConsTypeCtor_46 = ((MR_Word) ((MR_hl_field(0, DuCtor0_44, 2))));
      succeeded = (Arity_25 == Var_97);
      if (succeeded)
      {
        succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Functor0_45, &OrigFunctor_47);
        if (succeeded)
        {
          {
            DuCtor_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DuCtor_48, 0) = ((MR_Box) (OrigFunctor_47));
            MR_hl_field(0, DuCtor_48, 1) = ((MR_Box) (Arity_25));
            MR_hl_field(0, DuCtor_48, 2) = ((MR_Box) (ConsTypeCtor_46));
          }
          ConsId_49 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_48)));
          IsExistConstr_50 = (MR_Integer) 1;
        }
        else
        {
          ConsId_49 = ConsId0_13;
          DuCtor_48 = DuCtor0_44;
          IsExistConstr_50 = (MR_Integer) 0;
        }
        succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo0_22, TypeOfX_24, DuCtor_48, &ConsDefn_51);
      }
    }
    if (succeeded)
    {
      MR_Word ActualArgTypes_52;
      MR_Word ExtraVars_53;
      MR_Word ExtraGoals_54;
      MR_Word ArgVars_55;
      MR_Word NonLocals0_56;
      MR_Word NonLocals_57;
      MR_Word Unification_58;
      MR_Word GoalInfo_59;
      MR_Word UnifyExpr_61;
      MR_Word Unify_62;
      MR_Word GoalList_63;
      MR_Word STATE_VARIABLE_Info_5_81;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word GoalInfo1_88;
      MR_Word _Changed_60;

      parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_23, ArgVars0_14, &ActualArgTypes_52);
      check_hlds__polymorphism_goal__polymorphism_process_existq_unify_functor_9_p_0(ConsDefn_51, IsExistConstr_50, ActualArgTypes_52, TypeOfX_24, GoalInfo0_18, &ExtraVars_53, &ExtraGoals_54, STATE_VARIABLE_Info_0_65, &STATE_VARIABLE_Info_5_81);
      ArgVars_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraVars_53, ArgVars0_14);
      NonLocals0_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_53, NonLocals0_56, &NonLocals_57);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_57, GoalInfo0_18, &GoalInfo1_88);
      check_hlds__polymorphism_goal__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_58, GoalInfo1_88, &GoalInfo_59, &_Changed_60, STATE_VARIABLE_Info_5_81, STATE_VARIABLE_Info_66);
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (ConsId_49));
        MR_hl_field(1, Var_83, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_50));
        MR_hl_field(1, Var_83, 2) = ((MR_Box) (ArgVars_55));
      }
      {
        UnifyExpr_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UnifyExpr_61, 0) = ((MR_Box) (X0_12));
        MR_hl_field(1, UnifyExpr_61, 1) = ((MR_Box) (Var_83));
        MR_hl_field(1, UnifyExpr_61, 2) = ((MR_Box) (Mode0_15));
        MR_hl_field(1, UnifyExpr_61, 3) = ((MR_Box) (Unification_58));
        MR_hl_field(1, UnifyExpr_61, 4) = ((MR_Box) (UnifyContext_17));
      }
      {
        Unify_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_62, 0) = ((MR_Box) (UnifyExpr_61));
        MR_hl_field(0, Unify_62, 1) = ((MR_Box) (GoalInfo_59));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Unify_62));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      GoalList_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_54, Var_84);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_63, GoalInfo0_18, Goal_19);
      *Changed_20 = (MR_Integer) 1;
    }
    else
    {
      MR_Word GoalExpr_64;
      MR_Word RHS_89;
      MR_Word Unification_90;
      MR_Word GoalInfo_91;

      check_hlds__polymorphism_goal__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_90, GoalInfo0_18, &GoalInfo_91, Changed_20, STATE_VARIABLE_Info_0_65, STATE_VARIABLE_Info_66);
      {
        RHS_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RHS_89, 0) = ((MR_Box) (ConsId0_13));
        MR_hl_field(1, RHS_89, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, RHS_89, 2) = ((MR_Box) (ArgVars0_14));
      }
      {
        GoalExpr_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_64, 0) = ((MR_Box) (X0_12));
        MR_hl_field(1, GoalExpr_64, 1) = ((MR_Box) (RHS_89));
        MR_hl_field(1, GoalExpr_64, 2) = ((MR_Box) (Mode0_15));
        MR_hl_field(1, GoalExpr_64, 3) = ((MR_Box) (Unification_90));
        MR_hl_field(1, GoalExpr_64, 4) = ((MR_Box) (UnifyContext_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_64));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_91));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_goal__IntroducedFrom__pred__requantify_lambda_goal__720__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0(
  MR_Word LHSVar_10,
  MR_Word RHS0_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTable_19;
        MR_Word Type_20;
        MR_Word Unification_21;
        MR_Word GoalInfo_22;
        MR_Word Var_50;
        MR_Word TypeVars_85;

        check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_47, &VarTable_19);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, LHSVar_10, &Type_20);
        parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_20, &TypeVars_85);
        if ((TypeVars_85 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Unification_21 = Unification0_13;
          GoalInfo_22 = GoalInfo0_15;
          *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
        }
        else
        {
          MR_Word TypeInfoLocns_86;
          MR_Word TypeInfoVars0_91;
          MR_Word TypeInfoVars_92;
          MR_Word NonLocals0_93;
          MR_Word NonLocals_94;
          MR_Box conv2_STATE_VARIABLE_Info_48;

          mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[7]), TypeVars_85, &TypeInfoLocns_86, ((MR_Box) (STATE_VARIABLE_Info_0_47)), &conv2_STATE_VARIABLE_Info_48);
          *STATE_VARIABLE_Info_48 = ((MR_Word) (conv2_STATE_VARIABLE_Info_48));
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[8]), TypeInfoLocns_86, &TypeInfoVars0_91);
          mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), TypeInfoVars0_91, &TypeInfoVars_92);
          NonLocals0_93 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_92, NonLocals0_93, &NonLocals_94);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_94, GoalInfo0_15, &GoalInfo_22);
          switch (MR_tag((MR_Word) Unification0_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Unification_21 = Unification0_13;
              break;
            case (MR_Integer) 1:
              Unification_21 = Unification0_13;
              break;
            case (MR_Integer) 2:
              Unification_21 = Unification0_13;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification0_13, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Unification_21 = Unification0_13;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Modes_95 = ((MR_Word) ((MR_hl_field(3, Unification0_13, 1))));
                    MR_Word CanFail_96 = ((MR_Unsigned) ((MR_hl_field(3, Unification0_13, 2))) & (MR_Integer) 1);

                    {
                      Unification_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Unification_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Unification_21, 1) = ((MR_Box) (Modes_95));
                      MR_hl_field(3, Unification_21, 2) = (MR_Box) ((MR_Unsigned) (CanFail_96));
                      MR_hl_field(3, Unification_21, 3) = ((MR_Box) (TypeInfoVars_92));
                    }
                  }
                  break;
              }
              break;
          }
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (LHSVar_10));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (RHS0_11));
          MR_hl_field(1, Var_50, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(1, Var_50, 3) = ((MR_Box) (Unification_21));
          MR_hl_field(1, Var_50, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_22));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(1, RHS0_11, 0))));
        MR_Word Args_26 = ((MR_Word) ((MR_hl_field(1, RHS0_11, 2))));
        MR_Word _Changed_62;

        check_hlds__polymorphism_goal__polymorphism_process_unify_functor_11_p_0(LHSVar_10, ConsId_24, Args_26, Mode_12, Unification0_13, UnifyContext_14, GoalInfo0_15, Goal_16, &_Changed_62, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_30 = ((MR_Word) ((MR_hl_field(2, RHS0_11, 1))));
        MR_Word ArgVarsModes_31 = ((MR_Word) ((MR_hl_field(2, RHS0_11, 2))));
        MR_Word Det_32 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_11, 3))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_33 = ((MR_Word) ((MR_hl_field(2, RHS0_11, 4))));
        MR_Word InitialSnapshot_34;
        MR_Word LambdaGoal1_35;
        MR_Word ArgVars_36;
        MR_Word LambdaGoal_38;
        MR_Word LambdaTiTciVars_39;
        MR_Word PossibleNonLocalTiTciVars_40;
        MR_Word LambdaNonLocals1_41;
        MR_Word LambdaNonLocals_42;
        MR_Word RHS_43;
        MR_Word NonLocals0_44;
        MR_Word NonLocals_45;
        MR_Word GoalExpr_46;
        MR_Word STATE_VARIABLE_Info_3_53;
        MR_Word STATE_VARIABLE_Info_4_54;
        MR_Word STATE_VARIABLE_Info_5_55;
        MR_Word STATE_VARIABLE_Info_6_57;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word GoalInfo_64;
        MR_Word RttiVarMaps0_68;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_11, 0)));

        check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "lambda", &InitialSnapshot_34, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_3_53);
        check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_3_53, &STATE_VARIABLE_Info_4_54);
        check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(LambdaGoal0_33, &LambdaGoal1_35, STATE_VARIABLE_Info_4_54, &STATE_VARIABLE_Info_5_55);
        check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after lambda", InitialSnapshot_34, STATE_VARIABLE_Info_5_55, &STATE_VARIABLE_Info_6_57);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_31, &ArgVars_36);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_6_57, &RttiVarMaps0_68);
        succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_68);
        if (succeeded)
        {
          parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LambdaTiTciVars_39);
          parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &PossibleNonLocalTiTciVars_40);
          *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_6_57;
          LambdaGoal_38 = LambdaGoal1_35;
        }
        else
        {
          MR_Word VarTable0_69;
          MR_Word GoalInfo0_71;
          MR_Word NonLocals_72;
          MR_Word BothNonLocals_73;
          MR_Word NonLocalsWithArgVars_74;
          MR_Word GoalVars_75;
          MR_Word IsTiOrTci_76;
          MR_Word PossibleOutsideVars_77;
          MR_Word VarTable_79;
          MR_Word RttiVarMaps_80;
          MR_Word STATE_VARIABLE_Info_1_81;
          MR_Word _Warnings_78;

          check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_6_57, &VarTable0_69);
          GoalInfo0_71 = ((MR_Word) ((MR_hl_field(0, LambdaGoal1_35, 1))));
          NonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_71);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaNonLocals0_30, NonLocals_72, &BothNonLocals_73);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, BothNonLocals_73, &NonLocalsWithArgVars_74);
          hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(RttiVarMaps0_68, VarTable0_69, (MR_Word) ((MR_Unsigned) 0U), NonLocalsWithArgVars_74, &LambdaTiTciVars_39);
          hlds__goal_vars__vars_in_goal_2_p_0(LambdaGoal1_35, &GoalVars_75);
          {
            IsTiOrTci_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IsTiOrTci_76, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[5]));
            MR_hl_field(0, IsTiOrTci_76, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_unify_9_p_0_1));
            MR_hl_field(0, IsTiOrTci_76, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, IsTiOrTci_76, 3) = ((MR_Box) (VarTable0_69));
          }
          parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsTiOrTci_76, GoalVars_75, &PossibleNonLocalTiTciVars_40);
          check_hlds__polymorphism_info__poly_info_set_must_requantify_2_p_0(STATE_VARIABLE_Info_6_57, &STATE_VARIABLE_Info_1_81);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsWithArgVars_74, PossibleNonLocalTiTciVars_40, &PossibleOutsideVars_77);
          hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 0, PossibleOutsideVars_77, &_Warnings_78, LambdaGoal1_35, &LambdaGoal_38, VarTable0_69, &VarTable_79, RttiVarMaps0_68, &RttiVarMaps_80);
          check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_79, RttiVarMaps_80, STATE_VARIABLE_Info_1_81, STATE_VARIABLE_Info_48);
        }
        Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaTiTciVars_39);
        Var_61 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossibleNonLocalTiTciVars_40);
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), Var_61, LambdaNonLocals0_30);
        LambdaNonLocals1_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), Var_59, Var_60);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), LambdaNonLocals1_41, &LambdaNonLocals_42);
        {
          RHS_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_43, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(2, RHS_43, 1) = ((MR_Box) (LambdaNonLocals_42));
          MR_hl_field(2, RHS_43, 2) = ((MR_Box) (ArgVarsModes_31));
          MR_hl_field(2, RHS_43, 3) = (MR_Box) ((MR_Unsigned) (Det_32));
          MR_hl_field(2, RHS_43, 4) = ((MR_Box) (LambdaGoal_38));
        }
        NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossibleNonLocalTiTciVars_40, NonLocals0_44, &NonLocals_45);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_15, &GoalInfo_64);
        {
          GoalExpr_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_46, 0) = ((MR_Box) (LHSVar_10));
          MR_hl_field(1, GoalExpr_46, 1) = ((MR_Box) (RHS_43));
          MR_hl_field(1, GoalExpr_46, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(1, GoalExpr_46, 3) = ((MR_Box) (Unification0_13));
          MR_hl_field(1, GoalExpr_46, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_46));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_64));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv11_LambdaHeadVar__2_56;

  conv11_LambdaHeadVar__2_56 = check_hlds__polymorphism_goal__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1090__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_MaybeArgNameBox_14;
  MR_Integer conv8_STATE_VARIABLE_N_21;

  check_hlds__polymorphism_goal__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv9_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv8_STATE_VARIABLE_N_21);
  *wrapper_arg_2 = ((MR_Box) (conv9_MaybeArgNameBox_14));
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_N_21));
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeArgNameBox_14;
  MR_Integer conv5_STATE_VARIABLE_N_21;

  check_hlds__polymorphism_goal__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv6_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv5_STATE_VARIABLE_N_21);
  *wrapper_arg_2 = ((MR_Box) (conv6_MaybeArgNameBox_14));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_N_21));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_goal__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1077__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_MaybeArgNameBox_10;

  check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_MaybeArgNameBox_10);
  *wrapper_arg_2 = ((MR_Box) (conv4_MaybeArgNameBox_10));
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeArgNameBox_10;

  check_hlds__polymorphism_goal__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_MaybeArgNameBox_10);
  *wrapper_arg_2 = ((MR_Box) (conv3_MaybeArgNameBox_10));
}

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_CVars_4;

  conv2_CVars_4 = check_hlds__polymorphism_goal__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_CVars_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_CVars_4;

  conv1_CVars_4 = check_hlds__polymorphism_goal__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_CVars_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_1(
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
check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
  MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
  MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 3))));
  MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
  MR_Word ProcExtraArgs_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 5))));
  MR_Word MaybeTraceRuntimeCond_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 6))));
  MR_Word Impl_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 7))));
  MR_Word ArgVars0_19;
  MR_Word GoalInfo_20;
  MR_Word ExtraVars_21;
  MR_Word ExtraGoals_22;
  MR_Word ExtraArgs_23;
  MR_Word Args_24;
  MR_Word CallExpr_25;
  MR_Word Call_26;
  MR_Word GoalList_27;
  MR_Word Var_32;
  MR_Word PredTypeVarSet_39;
  MR_Word ExistQVars_40;
  MR_Word PredArgTypes_41;
  MR_Word UnivCs_42;
  MR_Word ExistCs_43;
  MR_Word UnivVars0_44;
  MR_Word UnivConstrainedVars_45;
  MR_Word ExistVars0_46;
  MR_Word ExistConstrainedVars_47;
  MR_Word PredTypeVars0_48;
  MR_Word PredTypeVars1_49;
  MR_Word PredTypeVars2_50;
  MR_Word PredTypeVars_51;
  MR_Word In_52;
  MR_Word Out_53;
  MR_Word ExistTypeClassArgInfos_54;
  MR_Word UnivTypeClassArgInfos_55;
  MR_Word TypeClassArgInfos_56;
  MR_Word ExistUnconstrainedVars_57;
  MR_Word UnivUnconstrainedVars_58;
  MR_Word ExistTypeArgInfos_59;
  MR_Word UnivTypeArgInfos_61;
  MR_Word TypeInfoArgInfos_63;
  MR_Word ArgInfos_64;
  MR_Word TypeInfoTypes_65;
  MR_Word TypeClassInfoType_66;
  MR_Integer NumUnivCs_67;
  MR_Integer NumExistCs_68;
  MR_Word TypeClassInfoTypes_69;
  MR_Word OrigArgTypes_70;
  MR_Word Var_71;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_80;
  MR_Integer Var_84;
  MR_Box conv7_Var_60;
  MR_Box conv10_Var_62;

  ArgVars0_19 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[3]), Args0_15);
  check_hlds__polymorphism_goal__polymorphism_process_call_8_p_0(PredId_13, ArgVars0_19, GoalInfo0_9, &GoalInfo_20, &ExtraVars_21, &ExtraGoals_22, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_7, &PredTypeVarSet_39, &ExistQVars_40, &PredArgTypes_41);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_7, &Var_71);
  UnivCs_42 = ((MR_Word) ((MR_hl_field(0, Var_71, 0))));
  ExistCs_43 = ((MR_Word) ((MR_hl_field(0, Var_71, 1))));
  UnivVars0_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[4]), UnivCs_42);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), UnivVars0_44, &UnivConstrainedVars_45);
  ExistVars0_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[5]), ExistCs_43);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ExistVars0_46, &ExistConstrainedVars_47);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(PredArgTypes_41, &PredTypeVars0_48);
  mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), PredTypeVars0_48, &PredTypeVars1_49);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), PredTypeVars1_49, UnivConstrainedVars_45, &PredTypeVars2_50);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), PredTypeVars2_50, ExistConstrainedVars_47, &PredTypeVars_51);
  parse_tree__prog_mode__in_mode_1_p_0(&In_52);
  parse_tree__prog_mode__out_mode_1_p_0(&Out_53);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_6[0]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_4));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (Out_53));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (Impl_18));
    MR_hl_field(0, Var_74, 5) = ((MR_Box) (PredTypeVarSet_39));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_74, ExistCs_43, &ExistTypeClassArgInfos_54);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_6[0]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_5));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (In_52));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (Impl_18));
    MR_hl_field(0, Var_75, 5) = ((MR_Box) (PredTypeVarSet_39));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_75, UnivCs_42, &UnivTypeClassArgInfos_55);
  TypeClassArgInfos_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeClassArgInfos_55, ExistTypeClassArgInfos_54);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_5[3]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_6));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (ExistQVars_40));
  }
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), Var_76, PredTypeVars_51, &ExistUnconstrainedVars_57, &UnivUnconstrainedVars_58);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_7[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_7));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) ((MR_String) "Out"));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Out_53));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (Impl_18));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) (PredTypeVarSet_39));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_77, ExistUnconstrainedVars_57, &ExistTypeArgInfos_59, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_60);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&check_hlds__polymorphism_goal_scalar_common_7[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (check_hlds__polymorphism_goal__polymorphism_process_foreign_proc_6_p_0_8));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) ((MR_String) "In"));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (In_52));
    MR_hl_field(0, Var_80, 5) = ((MR_Box) (Impl_18));
    MR_hl_field(0, Var_80, 6) = ((MR_Box) (PredTypeVarSet_39));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_80, UnivUnconstrainedVars_58, &UnivTypeArgInfos_61, ((MR_Box) ((MR_Integer) 1)), &conv10_Var_62);
  TypeInfoArgInfos_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeArgInfos_61, ExistTypeArgInfos_59);
  ArgInfos_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), TypeInfoArgInfos_63, TypeClassArgInfos_56);
  TypeInfoTypes_65 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[6]), PredTypeVars_51);
  TypeClassInfoType_66 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCs_42, &NumUnivCs_67);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistCs_43, &NumExistCs_68);
  Var_84 = (MR_Integer) ((MR_Unsigned) NumUnivCs_67 + (MR_Unsigned) NumExistCs_68);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_84, ((MR_Box) (TypeClassInfoType_66)), &TypeClassInfoTypes_69);
  OrigArgTypes_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoTypes_65, TypeClassInfoTypes_69);
  hlds__hlds_goal__make_foreign_args_4_p_0(ExtraVars_21, ArgInfos_64, OrigArgTypes_70, &ExtraArgs_23);
  Args_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ExtraArgs_23, Args0_15);
  {
    CallExpr_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, CallExpr_25, 1) = ((MR_Box) (Attributes_12));
    MR_hl_field(3, CallExpr_25, 2) = ((MR_Box) (PredId_13));
    MR_hl_field(3, CallExpr_25, 3) = ((MR_Box) (ProcId_14));
    MR_hl_field(3, CallExpr_25, 4) = ((MR_Box) (Args_24));
    MR_hl_field(3, CallExpr_25, 5) = ((MR_Box) (ProcExtraArgs_16));
    MR_hl_field(3, CallExpr_25, 6) = ((MR_Box) (MaybeTraceRuntimeCond_17));
    MR_hl_field(3, CallExpr_25, 7) = ((MR_Box) (Impl_18));
  }
  {
    Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Call_26, 0) = ((MR_Box) (CallExpr_25));
    MR_hl_field(0, Call_26, 1) = ((MR_Box) (GoalInfo_20));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Call_26));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_22, Var_32);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_10);
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  MR_bool succeeded;
  MR_Word VarTable_16;
  MR_Word TypeVarSet0_17;
  MR_Word ModuleInfo_18;
  MR_Word PredInfo_19;
  MR_Word PredTypeVarSet_20;
  MR_Word PredExistQVars_21;
  MR_Word PredArgTypes_22;
  MR_Word PredKindMap_23;
  MR_Word PredClassContext_24;
  MR_Word PredToParentTypeRenaming_25;
  MR_Word TypeVarSet_26;
  MR_Word ParentArgTypes_27;
  MR_Word ParentKindMap_28;
  MR_Word ParentTVars_29;
  MR_Word ParentExistQVars_30;
  MR_Word PredModule_31;
  MR_String PredName_32;
  MR_Integer PredFormArityInt_33;
  MR_Word Var_73;

  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_71, &VarTable_16);
  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_71, &TypeVarSet0_17);
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo_18);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, PredId_9, &PredInfo_19);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_19, &PredTypeVarSet_20, &PredExistQVars_21, &PredArgTypes_22);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_19, &PredKindMap_23);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_19, &PredClassContext_24);
  succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_20);
  if (succeeded)
  {
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), &PredToParentTypeRenaming_25);
    TypeVarSet_26 = TypeVarSet0_17;
    ParentArgTypes_27 = PredArgTypes_22;
    ParentKindMap_28 = PredKindMap_23;
    ParentTVars_29 = (MR_Word) ((MR_Unsigned) 0U);
    ParentExistQVars_30 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_17, PredTypeVarSet_20, &TypeVarSet_26, &PredToParentTypeRenaming_25);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentTypeRenaming_25, PredArgTypes_22, &ParentArgTypes_27);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ParentArgTypes_27, &ParentTVars_29);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(PredToParentTypeRenaming_25, PredKindMap_23, &ParentKindMap_28);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(PredToParentTypeRenaming_25, PredExistQVars_21, &ParentExistQVars_30);
  }
  PredModule_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
  PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_19, &Var_73);
  PredFormArityInt_33 = (MR_Integer) (Var_73);
  {
    MR_Word Var_74;
    MR_Word Var_75;

    succeeded = (ParentTVars_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_74 = ((MR_Word) ((MR_hl_field(0, PredClassContext_24, 0))));
      Var_75 = ((MR_Word) ((MR_hl_field(0, PredClassContext_24, 1))));
      succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (!(succeeded))
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_31, PredName_32, PredFormArityInt_33);
  if (succeeded)
  {
    *GoalInfo_12 = GoalInfo0_11;
    *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraVars_13 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
  }
  else
  {
    MR_Word ParentClassContext_34;
    MR_Word ParentUnivConstraints_35;
    MR_Word ParentExistConstraints_36;
    MR_Word ParentUnivConstrainedTVars_37;
    MR_Word ParentExistConstrainedTVars_38;
    MR_Word ParentUnconstrainedTVars0_39;
    MR_Word ParentUnconstrainedTVars1_40;
    MR_Word ParentUnconstrainedTVars_41;
    MR_Word ParentUnconstrainedUnivTVars_42;
    MR_Word ParentUnconstrainedExistTVars_43;
    MR_Word ActualArgTypes_44;
    MR_Word ParentToActualTypeSubst_45;
    MR_Word ConstraintMap_46;
    MR_Word GoalId_47;
    MR_Integer NumUnivConstraints_48;
    MR_Word ActualUnivConstraints_49;
    MR_Word ActualExistQVarTypes_50;
    MR_Word ActualExistQVars_52;
    MR_Word Context_53;
    MR_Word ExtraUnivClassVarsMCAs_54;
    MR_Word ExtraUnivClassGoals_55;
    MR_Word ExtraUnivClassVars_56;
    MR_Integer NumExistConstraints_57;
    MR_Word ActualExistConstraints_58;
    MR_Word ExtraExistClassVars_59;
    MR_Word ExtraExistClassGoals_60;
    MR_Word ActualUnconstrainedUnivTypes_61;
    MR_Word ExtraUnivTypeInfoVarsMCAs_62;
    MR_Word ExtraUnivTypeInfoGoals_63;
    MR_Word ExtraUnivTypeInfoVars_64;
    MR_Word ActualUnconstrainedExistTypes_65;
    MR_Word ExtraExistTypeInfoVarsMCAs_66;
    MR_Word ExtraExistTypeInfoGoals_67;
    MR_Word ExtraExistTypeInfoVars_68;
    MR_Word NonLocals0_69;
    MR_Word NonLocals_70;
    MR_Word STATE_VARIABLE_Info_1_76;
    MR_Word STATE_VARIABLE_Info_2_80;
    MR_Word STATE_VARIABLE_Info_3_82;
    MR_Word STATE_VARIABLE_Info_4_83;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word ActualExistQVars0_51;

    check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TypeVarSet_26, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_1_76);
    parse_tree__prog_type_subst__apply_variable_renaming_to_univ_exist_constraints_3_p_0(PredToParentTypeRenaming_25, PredClassContext_24, &ParentClassContext_34);
    ParentUnivConstraints_35 = ((MR_Word) ((MR_hl_field(0, ParentClassContext_34, 0))));
    ParentExistConstraints_36 = ((MR_Word) ((MR_hl_field(0, ParentClassContext_34, 1))));
    parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ParentUnivConstraints_35, &ParentUnivConstrainedTVars_37);
    parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ParentExistConstraints_36, &ParentExistConstrainedTVars_38);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentTVars_29, &ParentUnconstrainedTVars0_39);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentUnconstrainedTVars0_39, ParentUnivConstrainedTVars_37, &ParentUnconstrainedTVars1_40);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentUnconstrainedTVars1_40, ParentExistConstrainedTVars_38, &ParentUnconstrainedTVars_41);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentUnconstrainedTVars_41, ParentExistQVars_30, &ParentUnconstrainedUnivTVars_42);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentUnconstrainedTVars_41, ParentUnconstrainedUnivTVars_42, &ParentUnconstrainedExistTVars_43);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_16, ArgVars0_10, &ActualArgTypes_44);
    parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(ParentArgTypes_27, ActualArgTypes_44, &ParentToActualTypeSubst_45);
    check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_1_76, &ConstraintMap_46);
    GoalId_47 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_11);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentUnivConstraints_35, &NumUnivConstraints_48);
    hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 0, GoalId_47, NumUnivConstraints_48, &ActualUnivConstraints_49);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentExistQVars_30, &ActualExistQVarTypes_50);
    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ActualExistQVarTypes_50, &ActualExistQVars0_51);
    if (succeeded)
      ActualExistQVars_52 = ActualExistQVars0_51;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_goal.polymorphism_process_call\'/8", (MR_String) "existq_tvar bound");
        return;
      }
    Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
    check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualUnivConstraints_49, ActualExistQVars_52, Context_53, &ExtraUnivClassVarsMCAs_54, &ExtraUnivClassGoals_55, STATE_VARIABLE_Info_1_76, &STATE_VARIABLE_Info_2_80);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraUnivClassVarsMCAs_54, &ExtraUnivClassVars_56);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistConstraints_36, &NumExistConstraints_57);
    hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 1, GoalId_47, NumExistConstraints_57, &ActualExistConstraints_58);
    check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0(ActualExistConstraints_58, Context_53, &ExtraExistClassVars_59, &ExtraExistClassGoals_60, STATE_VARIABLE_Info_2_80, &STATE_VARIABLE_Info_3_82);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedUnivTVars_42, &ActualUnconstrainedUnivTypes_61);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedUnivTypes_61, Context_53, &ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoGoals_63, STATE_VARIABLE_Info_3_82, &STATE_VARIABLE_Info_4_83);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoVars_64);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedExistTVars_43, &ActualUnconstrainedExistTypes_65);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedExistTypes_65, Context_53, &ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoGoals_67, STATE_VARIABLE_Info_4_83, STATE_VARIABLE_Info_72);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoVars_68);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivTypeInfoGoals_63, ExtraExistTypeInfoGoals_67);
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraExistClassGoals_60, Var_86);
    *ExtraGoals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivClassGoals_55, Var_85);
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraUnivClassVars_56, ExtraExistClassVars_59);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraExistTypeInfoVars_68, Var_88);
    *ExtraVars_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraUnivTypeInfoVars_64, Var_87);
    NonLocals0_69 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_11);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ExtraVars_13, NonLocals0_69, &NonLocals_70);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_70, GoalInfo0_11, GoalInfo_12);
  }
}

static void MR_CALL 
check_hlds__polymorphism_goal__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  MR_Word CtorTypeVarSet_18 = ((MR_Word) ((MR_hl_field(0, CtorDefn_10, 0))));
  MR_Word CtorKindMap_19 = ((MR_Word) ((MR_hl_field(0, CtorDefn_10, 1))));
  MR_Word CtorMaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(0, CtorDefn_10, 2))));
  MR_Word CtorArgTypes_21 = ((MR_Word) ((MR_hl_field(0, CtorDefn_10, 3))));
  MR_Word CtorRetType_22 = ((MR_Word) ((MR_hl_field(0, CtorDefn_10, 4))));
  MR_Word TypeVarSet0_23;
  MR_Word TypeVarSet_24;
  MR_Word CtorToParentRenaming_25;
  MR_Integer NumExistentialConstraints_33;
  MR_Word ParentKindMap_36;
  MR_Word ParentToActualTypeSubst_37;
  MR_Word ActualExistentialTypes_38;
  MR_Word ParentArgTypes_39;
  MR_Word ParentRetType_40;
  MR_Word ConstraintMap_41;
  MR_Word GoalId_42;
  MR_Word Context_43;
  MR_Word ExtraTypeClassGoals_46;
  MR_Word ExtraTypeClassVars_47;
  MR_Word ExtraTypeInfoVarsMCAs_48;
  MR_Word ExtraTypeInfoGoals_49;
  MR_Word ExtraTypeInfoVars_50;
  MR_Word STATE_VARIABLE_Info_1_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_Info_2_58;

  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_51, &TypeVarSet0_23);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_23, CtorTypeVarSet_18, &TypeVarSet_24, &CtorToParentRenaming_25);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(CtorToParentRenaming_25, CtorKindMap_19, &ParentKindMap_36);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(CtorToParentRenaming_25, CtorArgTypes_21, &ParentArgTypes_39);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(CtorToParentRenaming_25, CtorRetType_22, &ParentRetType_40);
  check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TypeVarSet_24, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_1_53);
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (ParentRetType_40));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (ParentArgTypes_39));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (ActualRetType_13));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (ActualArgTypes_12));
  }
  parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(Var_54, Var_55, &ParentToActualTypeSubst_37);
  if ((CtorMaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    NumExistentialConstraints_33 = (MR_Integer) 0;
    ActualExistentialTypes_38 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word CtorExistConstraints_26 = (MR_Word) (MR_body((MR_Word) (CtorMaybeExistConstraints_20), (MR_Integer) 1));
    MR_Word CtorExistQVars_27 = ((MR_Word) ((MR_hl_field(0, CtorExistConstraints_26, 0))));
    MR_Word CtorExistentialConstraints_28 = ((MR_Word) ((MR_hl_field(0, CtorExistConstraints_26, 1))));
    MR_Word ParentExistQVars_31;
    MR_Word ParentExistentialConstraints_32;
    MR_Word ParentExistConstrainedTVars_34;
    MR_Word ParentUnconstrainedExistQVars_35;

    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(CtorToParentRenaming_25, CtorExistQVars_27, &ParentExistQVars_31);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(CtorToParentRenaming_25, CtorExistentialConstraints_28, &ParentExistentialConstraints_32);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistentialConstraints_32, &NumExistentialConstraints_33);
    parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ParentExistentialConstraints_32, &ParentExistConstrainedTVars_34);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), ParentExistQVars_31, ParentExistConstrainedTVars_34, &ParentUnconstrainedExistQVars_35);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_36, ParentToActualTypeSubst_37, ParentUnconstrainedExistQVars_35, &ActualExistentialTypes_38);
  }
  check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_1_53, &ConstraintMap_41);
  GoalId_42 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_14);
  Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
  switch (IsExistConstr_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ActualExistentialConstraints_44;
        MR_Word ExtraTypeClassVarsMCAs_45;

        hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 0, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_44);
        check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualExistentialConstraints_44, (MR_Word) ((MR_Unsigned) 0U), Context_43, &ExtraTypeClassVarsMCAs_45, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_1_53, &STATE_VARIABLE_Info_2_58);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraTypeClassVarsMCAs_45, &ExtraTypeClassVars_47);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ActualExistentialConstraints_62;

        hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 1, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_62);
        check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0(ActualExistentialConstraints_62, Context_43, &ExtraTypeClassVars_47, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_1_53, &STATE_VARIABLE_Info_2_58);
      }
      break;
  }
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualExistentialTypes_38, Context_43, &ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoGoals_49, STATE_VARIABLE_Info_2_58, STATE_VARIABLE_Info_52);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[2]), ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoVars_50);
  *ExtraGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_49, ExtraTypeClassGoals_46);
  *ExtraVars_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), ExtraTypeInfoVars_50, ExtraTypeClassVars_47);
}

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__polymorphism_goal__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word TypeVars_14;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_9, &TypeVars_14);
  if ((TypeVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Changed_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
    *STATE_VARIABLE_GoalInfo_21 = STATE_VARIABLE_GoalInfo_0_20;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Word TypeInfoLocns_17;
    MR_Word TypeInfoVars0_32;
    MR_Word TypeInfoVars_33;
    MR_Word NonLocals0_34;
    MR_Word NonLocals_35;
    MR_Box conv2_STATE_VARIABLE_Info_23;

    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[1]), TypeVars_14, &TypeInfoLocns_17, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv2_STATE_VARIABLE_Info_23);
    *STATE_VARIABLE_Info_23 = ((MR_Word) (conv2_STATE_VARIABLE_Info_23));
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_goal_scalar_common_3[2]), TypeInfoLocns_17, &TypeInfoVars0_32);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_goal_scalar_common_1[0]), TypeInfoVars0_32, &TypeInfoVars_33);
    NonLocals0_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_33, NonLocals0_34, &NonLocals_35);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_35, STATE_VARIABLE_GoalInfo_0_20, STATE_VARIABLE_GoalInfo_21);
    switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_18, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modes_36 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_18, 1))));
              MR_Word CanFail_37 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_18, 2))) & (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Unification_19 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Modes_36));
                MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_37));
                MR_hl_field(3, base, 3) = ((MR_Box) (TypeInfoVars_33));
              }
            }
            break;
        }
        break;
    }
    *Changed_12 = (MR_Integer) 1;
  }
}

void mercury__check_hlds__polymorphism_goal__init(void)
{
}

void mercury__check_hlds__polymorphism_goal__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism_goal__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_goal__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_goal.
