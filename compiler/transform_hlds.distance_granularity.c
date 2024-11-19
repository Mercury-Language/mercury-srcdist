/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2024-11-19
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


// :- module transform_hlds.distance_granularity.
// :- implementation.

/*
INIT mercury__transform_hlds__distance_granularity__init
ENDINIT
*/

#include "transform_hlds.distance_granularity.mih"


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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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
#include "parse_tree.module_qual.mq_info.mih"




static MR_bool MR_CALL 
transform_hlds__distance_granularity__IntroducedFrom__pred__apply_dg_to_preds__229__1_2_p_0(
  MR_Word ClonePredId_15,
  MR_Word InsertedPredId_30);

static MR_bool MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * STATE_VARIABLE_CasesAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Integer HeadVar__10_10);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Integer HeadVar__10_10);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
  MR_Word STATE_VARIABLE_Goal_0_63,
  MR_Word * STATE_VARIABLE_Goal_64,
  MR_Word CallerPredId_11,
  MR_Integer CallerProcId_12,
  MR_Word PredIdSpecialized_13,
  MR_Word SymNameSpecialized_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_65,
  MR_Word * STATE_VARIABLE_ProcInfo_66,
  MR_Integer Distance_16);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
  MR_Word STATE_VARIABLE_Goal_0_38,
  MR_Word * STATE_VARIABLE_Goal_39,
  MR_Word CallerPredId_11,
  MR_Integer CallerProcId_12,
  MR_Word PredIdSpecialized_13,
  MR_Word SymNameSpecialized_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Integer Distance_16);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specialized_0_6,
  MR_Word * STATE_VARIABLE_Specialized_7,
  MR_Word STATE_VARIABLE_PredInfo_0_8,
  MR_Word * STATE_VARIABLE_PredInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * STATE_VARIABLE_CasesAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_14);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_14);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word HeadVar__13_13,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_14,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_15,
  MR_Word STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
  MR_Word * STATE_VARIABLE_HasRecursiveCallsInParallelConj_17);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
  MR_Word STATE_VARIABLE_Goal_0_76,
  MR_Word * STATE_VARIABLE_Goal_77,
  MR_Word CallerPredId_17,
  MR_Integer CallerProcId_18,
  MR_Word PredIdSpecialized_19,
  MR_Word SymNameSpecialized_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * STATE_VARIABLE_ProcInfo_79,
  MR_Word STATE_VARIABLE_ModuleInfo_0_80,
  MR_Word * STATE_VARIABLE_ModuleInfo_81,
  MR_Integer Distance_23,
  MR_Word IsInParallelConj_24,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_82,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_83,
  MR_Word * IsRecursiveCallInParallelConj_26);

static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
  MR_Word GoalsInConj_11,
  MR_Word ConjInfo_12,
  MR_Word MaybeGranularityVar_13,
  MR_Word PredIdSpecialized_14,
  MR_Integer CallerProcId_15,
  MR_Integer Distance_16,
  MR_Word * IfThenElseGoal_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33,
  MR_Word ModuleInfo_19);

static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_41,
  MR_Word * STATE_VARIABLE_GoalExpr_42,
  MR_Integer STATE_VARIABLE_IndexInConj_0_43,
  MR_Integer * STATE_VARIABLE_IndexInConj_44,
  MR_Word CallerPredId_14,
  MR_Integer CallerProcId_15,
  MR_Integer Distance_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * STATE_VARIABLE_ProcInfo_46);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * STATE_VARIABLE_GoalExpr_67,
  MR_Integer STATE_VARIABLE_IndexInConj_0_68,
  MR_Integer * STATE_VARIABLE_IndexInConj_69,
  MR_Word GranularityVar_13,
  MR_Word CallerPredId_14,
  MR_Integer CallerProcId_15,
  MR_Word ModuleInfo_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * STATE_VARIABLE_ProcInfo_71);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_37,
  MR_Word * STATE_VARIABLE_GoalExpr_38,
  MR_Word CallerPredId_16,
  MR_Word PredIdSpecialized_17,
  MR_Word SymNameSpecialized_18,
  MR_Integer CallerProcId_19,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word IsInParallelConj_22,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_43,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_44,
  MR_Word * IsRecursiveCallInParallelConj_24);


static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_2[3][1];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[1][3];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_4[1][5];




static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_2[1])),
    ((MR_Box) ((MR_String) "minus"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__distance_granularity_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_2[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__distance_granularity_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "distance_granularity")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "int")) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[1][3] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__distance_granularity_scalar_common_1[6])))
  },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_bool MR_CALL 
transform_hlds__distance_granularity__IntroducedFrom__pred__apply_dg_to_preds__229__1_2_p_0(
  MR_Word ClonePredId_15,
  MR_Word InsertedPredId_30)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ClonePredId_15, InsertedPredId_30);
  return succeeded;
}

void MR_CALL 
transform_hlds__distance_granularity__control_distance_granularity_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Integer Distance_5)
{
  MR_Word PredIds_6;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIds_6);
  transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(PredIds_6, Distance_5, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
}

static MR_bool MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__distance_granularity__IntroducedFrom__pred__apply_dg_to_preds__229__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredicateTable_14;
      MR_Word ClonePredId_15;
      MR_Word ModuleName_16;
      MR_String PredName0_17;
      MR_Word Transform_18;
      MR_String ClonePredName_19;
      MR_Word ClonePredSymName_20;
      MR_Word ProcIds_21;
      MR_Word Specialized_23;
      MR_Word STATE_VARIABLE_ClonePredInfo_36_36;
      MR_Word STATE_VARIABLE_ClonePredInfo_38_38;
      MR_Word STATE_VARIABLE_ModuleInfo_39_39;
      MR_Word STATE_VARIABLE_ModuleInfo_58_58;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_9, &STATE_VARIABLE_ClonePredInfo_36_36);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_3, &PredicateTable_14);
      hlds__pred_table__get_next_pred_id_2_p_0(PredicateTable_14, &ClonePredId_15);
      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_3, &ModuleName_16);
      PredName0_17 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_ClonePredInfo_36_36);
      {
        Transform_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Transform_18, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Transform_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, Transform_18, 2) = ((MR_Box) (HeadVar__2_2));
      }
      hlds__pred_name__make_transformed_pred_name_3_p_0(PredName0_17, Transform_18, &ClonePredName_19);
      {
        ClonePredSymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ClonePredSymName_20, 0) = ((MR_Box) (ModuleName_16));
        MR_hl_field(1, ClonePredSymName_20, 1) = ((MR_Box) (ClonePredName_19));
      }
      ProcIds_21 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(STATE_VARIABLE_ClonePredInfo_36_36);
      transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(PredId_9, ProcIds_21, HeadVar__2_2, ClonePredId_15, ClonePredSymName_20, (MR_Integer) 0, &Specialized_23, STATE_VARIABLE_ClonePredInfo_36_36, &STATE_VARIABLE_ClonePredInfo_38_38, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_39_39);
      switch (Specialized_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_58_58 = STATE_VARIABLE_ModuleInfo_39_39;
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Arity_24;
            MR_Word TypeVarSet_25;
            MR_Word ExistQTypeVars_26;
            MR_Word ArgTypes0_27;
            MR_Word ArgTypes_28;
            MR_Word PredicateTable0_29;
            MR_Word InsertedPredId_30;
            MR_Word PredicateTable1_31;
            MR_Word PredInfo_32;
            MR_Word STATE_VARIABLE_ClonePredInfo_40_40;
            MR_Word STATE_VARIABLE_ClonePredInfo_41_41;
            MR_Word STATE_VARIABLE_ClonePredInfo_43_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word STATE_VARIABLE_ClonePredInfo_46_46;
            MR_Integer Var_47;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word STATE_VARIABLE_ClonePredInfo_52_52;
            MR_Word Var_53;
            MR_Word STATE_VARIABLE_ModuleInfo_56_56;
            MR_Word STATE_VARIABLE_ModuleInfo_57_57;

            hlds__hlds_pred__pred_info_set_module_name_3_p_0(ModuleName_16, STATE_VARIABLE_ClonePredInfo_38_38, &STATE_VARIABLE_ClonePredInfo_40_40);
            hlds__hlds_pred__pred_info_set_name_3_p_0(ClonePredName_19, STATE_VARIABLE_ClonePredInfo_40_40, &STATE_VARIABLE_ClonePredInfo_41_41);
            hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, STATE_VARIABLE_ClonePredInfo_41_41, &STATE_VARIABLE_ClonePredInfo_43_43);
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_ClonePredInfo_43_43, &Var_44);
            Arity_24 = (MR_Integer) (Var_44);
            Var_47 = (MR_Integer) ((MR_Unsigned) Arity_24 + (MR_Unsigned) 1);
            Var_45 = (MR_Word) (Var_47);
            hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(Var_45, STATE_VARIABLE_ClonePredInfo_43_43, &STATE_VARIABLE_ClonePredInfo_46_46);
            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_ClonePredInfo_46_46, &TypeVarSet_25);
            hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_ClonePredInfo_46_46, &ExistQTypeVars_26);
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_ClonePredInfo_46_46, &ArgTypes0_27);
            Var_50 = parse_tree__builtin_lib_types__int_type_0_f_0();
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ArgTypes_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_27, Var_49);
            hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_25, ExistQTypeVars_26, ArgTypes_28, STATE_VARIABLE_ClonePredInfo_46_46, &STATE_VARIABLE_ClonePredInfo_52_52);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_39_39, &PredicateTable0_29);
            hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_ClonePredInfo_52_52, &InsertedPredId_30, PredicateTable0_29, &PredicateTable1_31);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_4[0]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0_1));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (ClonePredId_15));
              MR_hl_field(0, Var_53, 4) = ((MR_Box) (InsertedPredId_30));
            }
            mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_preds\'/4", (MR_String) "ClonePredId != InsertedPredId");
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable1_31, STATE_VARIABLE_ModuleInfo_39_39, &STATE_VARIABLE_ModuleInfo_56_56);
            transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(PredId_9, ProcIds_21, HeadVar__2_2, ClonePredId_15, ClonePredSymName_20, STATE_VARIABLE_ClonePredInfo_36_36, &PredInfo_32, STATE_VARIABLE_ModuleInfo_56_56, &STATE_VARIABLE_ModuleInfo_57_57);
            hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_9, PredInfo_32, STATE_VARIABLE_ModuleInfo_57_57, &STATE_VARIABLE_ModuleInfo_58_58);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_10;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_58_58;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Body0_29;
      MR_Word Body_30;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_ProcInfo_36_36;
      MR_Word STATE_VARIABLE_ProcInfo_37_37;
      MR_Word STATE_VARIABLE_ProcInfo_38_38;
      MR_Word STATE_VARIABLE_ProcInfo_40_40;
      MR_Word STATE_VARIABLE_ProcInfo_42_42;
      MR_Word STATE_VARIABLE_ModuleInfo_43_43;
      MR_Word STATE_VARIABLE_PredInfo_44_44;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (ProcId_21));
      }
      hlds__hlds_module__module_info_proc_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, Var_35, &STATE_VARIABLE_ProcInfo_36_36);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_36_36, &Body0_29);
      transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Body0_29, &Body_30, HeadVar__1_1, ProcId_21, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_37_37, HeadVar__3_3);
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_30, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_38_38);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_38_38, &STATE_VARIABLE_ProcInfo_40_40);
      check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_40_40, &STATE_VARIABLE_ProcInfo_42_42, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_43_43);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_21, STATE_VARIABLE_ProcInfo_42_42, STATE_VARIABLE_PredInfo_0_6, &STATE_VARIABLE_PredInfo_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_22;
      next_value_of_STATE_VARIABLE_PredInfo_0_6 = STATE_VARIABLE_PredInfo_44_44;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_43_43;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredInfo_0_6 = next_value_of_STATE_VARIABLE_PredInfo_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * STATE_VARIABLE_CasesAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Integer HeadVar__10_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
      *STATE_VARIABLE_CasesAcc_3 = STATE_VARIABLE_CasesAcc_0_2;
    }
    else
    {
      MR_Word Case_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 0))));
      MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 1))));
      MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 2))));
      MR_Word Goal_34;
      MR_Word STATE_VARIABLE_ProcInfo_39_39;
      MR_Word STATE_VARIABLE_CasesAcc_40_40;
      MR_Word Var_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CasesAcc_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_8;

      transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Goal0_33, &Goal_34, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_39_39, HeadVar__10_10);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (MainConsId_31));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (OtherConsIds_32));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) (Goal_34));
      }
      {
        STATE_VARIABLE_CasesAcc_40_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CasesAcc_40_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, STATE_VARIABLE_CasesAcc_40_40, 1) = ((MR_Box) (STATE_VARIABLE_CasesAcc_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_23;
      next_value_of_STATE_VARIABLE_CasesAcc_0_2 = STATE_VARIABLE_CasesAcc_40_40;
      next_value_of_STATE_VARIABLE_ProcInfo_0_8 = STATE_VARIABLE_ProcInfo_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CasesAcc_0_2 = next_value_of_STATE_VARIABLE_CasesAcc_0_2;
      STATE_VARIABLE_ProcInfo_0_8 = next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Integer HeadVar__10_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
      *STATE_VARIABLE_GoalsAcc_3 = STATE_VARIABLE_GoalsAcc_0_2;
    }
    else
    {
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_31;
      MR_Word STATE_VARIABLE_ProcInfo_36_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_GoalsAcc_38_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_8;

      transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Goal0_22, &Goal_31, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_36_36, HeadVar__10_10);
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Goal_31));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalsAcc_0_2, Var_37, &STATE_VARIABLE_GoalsAcc_38_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_23;
      next_value_of_STATE_VARIABLE_GoalsAcc_0_2 = STATE_VARIABLE_GoalsAcc_38_38;
      next_value_of_STATE_VARIABLE_ProcInfo_0_8 = STATE_VARIABLE_ProcInfo_36_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalsAcc_0_2 = next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      STATE_VARIABLE_ProcInfo_0_8 = next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
  MR_Word STATE_VARIABLE_Goal_0_63,
  MR_Word * STATE_VARIABLE_Goal_64,
  MR_Word CallerPredId_11,
  MR_Integer CallerProcId_12,
  MR_Word PredIdSpecialized_13,
  MR_Word SymNameSpecialized_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_65,
  MR_Word * STATE_VARIABLE_ProcInfo_66,
  MR_Integer Distance_16)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_63, (MR_Integer) 0))));
  MR_Word GoalInfo_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_63, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_17));
        MR_Word SubGoal_52;
        MR_Word GoalExpr_94;

        transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(SubGoal0_51, &SubGoal_52, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
        GoalExpr_94 = (MR_Word) ((MR_Word) (SubGoal_52));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_64 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_94));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Goal_64 = STATE_VARIABLE_Goal_0_63;
        *STATE_VARIABLE_ProcInfo_66 = STATE_VARIABLE_ProcInfo_0_65;
      }
      break;
    case (MR_Integer) 2:
      transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(STATE_VARIABLE_Goal_0_63, STATE_VARIABLE_Goal_64, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Goal_64 = STATE_VARIABLE_Goal_0_63;
            *STATE_VARIABLE_ProcInfo_66 = STATE_VARIABLE_ProcInfo_0_65;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Goal_64 = STATE_VARIABLE_Goal_0_63;
            *STATE_VARIABLE_ProcInfo_66 = STATE_VARIABLE_ProcInfo_0_65;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
            MR_Word Goals1_44;
            MR_Word Goals_45;
            MR_Word GoalExpr_46;

            transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(Goals0_43, (MR_Word) ((MR_Unsigned) 0U), &Goals1_44, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
            switch (Type_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Goals_45 = Goals1_44;
                break;
              case (MR_Integer) 0:
                hlds__goal_util__flatten_conj_2_p_0(Goals1_44, &Goals_45);
                break;
            }
            {
              GoalExpr_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_46, 1) = (MR_Box) ((MR_Unsigned) (Type_42));
              MR_hl_field(3, GoalExpr_46, 2) = ((MR_Box) (Goals_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_64 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_46));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word Goals_91;
            MR_Word GoalExpr_92;

            transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(Goals0_90, (MR_Word) ((MR_Unsigned) 0U), &Goals_91, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
            {
              GoalExpr_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_92, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_92, 1) = ((MR_Box) (Goals_91));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_64 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_92));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word CanFail_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
            MR_Word Cases_50;
            MR_Word GoalExpr_93;

            transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(Cases0_49, (MR_Word) ((MR_Unsigned) 0U), &Cases_50, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
            {
              GoalExpr_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_93, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_93, 1) = ((MR_Box) (Var_47));
              MR_hl_field(3, GoalExpr_93, 2) = (MR_Box) ((MR_Unsigned) (CanFail_48));
              MR_hl_field(3, GoalExpr_93, 3) = ((MR_Box) (Cases_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_64 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_93));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word SubGoal0_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
            MR_Word Var_81;

            succeeded = ((((MR_tag((MR_Word) Reason_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_81 = ((MR_Unsigned) ((MR_hl_field(3, Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_81 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_ProcInfo_66 = STATE_VARIABLE_ProcInfo_0_65;
              *STATE_VARIABLE_Goal_64 = STATE_VARIABLE_Goal_0_63;
            }
            else
            {
              MR_Word GoalExpr_95;
              MR_Word SubGoal_96;

              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(SubGoal0_100, &SubGoal_96, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, STATE_VARIABLE_ProcInfo_66, Distance_16);
              {
                GoalExpr_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_95, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_95, 1) = ((MR_Box) (Reason_53));
                MR_hl_field(3, GoalExpr_95, 2) = ((MR_Box) (SubGoal_96));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_64 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_95));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word Cond0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
            MR_Word Then0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
            MR_Word Else0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
            MR_Word Cond_59;
            MR_Word Then_60;
            MR_Word Else_61;
            MR_Word STATE_VARIABLE_ProcInfo_84_84;
            MR_Word STATE_VARIABLE_ProcInfo_85_85;
            MR_Word GoalExpr_102;

            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Cond0_56, &Cond_59, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_0_65, &STATE_VARIABLE_ProcInfo_84_84, Distance_16);
            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Then0_57, &Then_60, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_84_84, &STATE_VARIABLE_ProcInfo_85_85, Distance_16);
            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(Else0_58, &Else_61, CallerPredId_11, CallerProcId_12, PredIdSpecialized_13, SymNameSpecialized_14, STATE_VARIABLE_ProcInfo_85_85, STATE_VARIABLE_ProcInfo_66, Distance_16);
            {
              GoalExpr_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_102, 1) = ((MR_Box) (Vars_55));
              MR_hl_field(3, GoalExpr_102, 2) = ((MR_Box) (Cond_59));
              MR_hl_field(3, GoalExpr_102, 3) = ((MR_Box) (Then_60));
              MR_hl_field(3, GoalExpr_102, 4) = ((MR_Box) (Else_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_64 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_102));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.update_original_predicate_goal\'/9", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
  MR_Word STATE_VARIABLE_Goal_0_38,
  MR_Word * STATE_VARIABLE_Goal_39,
  MR_Word CallerPredId_11,
  MR_Integer CallerProcId_12,
  MR_Word PredIdSpecialized_13,
  MR_Word SymNameSpecialized_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Integer Distance_16)
{
  MR_bool succeeded;
  MR_Word CallExpr0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_38, (MR_Integer) 0))));
  MR_Word CallInfo0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_38, (MR_Integer) 1))));
  MR_Word CalleePredId_19 = ((MR_Word) ((MR_hl_field(2, CallExpr0_17, (MR_Integer) 0))));
  MR_Integer CalleeProcId_20 = ((MR_Integer) ((MR_hl_field(2, CallExpr0_17, (MR_Integer) 1))));
  MR_Word CallArgs0_21 = ((MR_Word) ((MR_hl_field(2, CallExpr0_17, (MR_Integer) 2))));
  MR_Word CallBuiltin_22 = ((MR_Unsigned) ((MR_hl_field(2, CallExpr0_17, (MR_Integer) 3))) & (MR_Integer) 1);

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CalleePredId_19, CallerPredId_11);
  if (succeeded)
    succeeded = (CalleeProcId_20 == CallerProcId_12);
  if (succeeded)
  {
    MR_Word Var_25;
    MR_Word UnifyGoal_26;
    MR_Word CallArgs_27;
    MR_Word CallExpr_29;
    MR_Word NonLocals0_30;
    MR_Word NonLocals_31;
    MR_Word CallInfo1_32;
    MR_Word InstMapDelta0_33;
    MR_Word InstMapDelta_35;
    MR_Word CallInfo_36;
    MR_Word Call_37;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;

    Var_43 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_43, (MR_Integer) 1, &Var_25, STATE_VARIABLE_ProcInfo_0_40, STATE_VARIABLE_ProcInfo_41);
    Var_46 = mercury__term_context__dummy_context_0_f_0();
    hlds__make_goal__make_int_const_construction_4_p_0(Var_46, Var_25, Distance_16, &UnifyGoal_26);
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&transform_hlds__distance_granularity_scalar_common_1[0]), CallArgs0_21, Var_47, &CallArgs_27);
    {
      CallExpr_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, CallExpr_29, 0) = ((MR_Box) (PredIdSpecialized_13));
      MR_hl_field(2, CallExpr_29, 1) = ((MR_Box) (CalleeProcId_20));
      MR_hl_field(2, CallExpr_29, 2) = ((MR_Box) (CallArgs_27));
      MR_hl_field(2, CallExpr_29, 3) = (MR_Box) ((MR_Unsigned) (CallBuiltin_22));
      MR_hl_field(2, CallExpr_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, CallExpr_29, 5) = ((MR_Box) (SymNameSpecialized_14));
    }
    NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CallInfo0_18);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_25, NonLocals0_30, &NonLocals_31);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_31, CallInfo0_18, &CallInfo1_32);
    InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CallInfo1_32);
    hlds__instmap__instmap_delta_insert_var_4_p_0(Var_25, (MR_Word) (MR_mkword(1, &transform_hlds__distance_granularity_scalar_common_1[7])), InstMapDelta0_33, &InstMapDelta_35);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_35, CallInfo1_32, &CallInfo_36);
    {
      Call_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Call_37, 0) = ((MR_Box) (CallExpr_29));
      MR_hl_field(0, Call_37, 1) = ((MR_Box) (CallInfo_36));
    }
    hlds__goal_util__create_conj_4_p_0(UnifyGoal_26, Call_37, (MR_Integer) 0, STATE_VARIABLE_Goal_39);
  }
  else
  {
    *STATE_VARIABLE_ProcInfo_41 = STATE_VARIABLE_ProcInfo_0_40;
    *STATE_VARIABLE_Goal_39 = STATE_VARIABLE_Goal_0_38;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specialized_0_6,
  MR_Word * STATE_VARIABLE_Specialized_7,
  MR_Word STATE_VARIABLE_PredInfo_0_8,
  MR_Word * STATE_VARIABLE_PredInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      *STATE_VARIABLE_PredInfo_9 = STATE_VARIABLE_PredInfo_0_8;
      *STATE_VARIABLE_Specialized_7 = STATE_VARIABLE_Specialized_0_6;
    }
    else
    {
      MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HasParallelConj_35;
      MR_Word STATE_VARIABLE_ProcInfo_47_47;
      MR_Word STATE_VARIABLE_Specialized_52_52;
      MR_Word STATE_VARIABLE_ModuleInfo_58_58;
      MR_Word STATE_VARIABLE_PredInfo_59_59;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specialized_0_6;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;

      hlds__hlds_module__module_info_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_10, HeadVar__1_1, ProcId_26, &STATE_VARIABLE_ProcInfo_47_47);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &HasParallelConj_35);
      switch (HasParallelConj_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Specialized_52_52 = STATE_VARIABLE_Specialized_0_6;
            STATE_VARIABLE_PredInfo_59_59 = STATE_VARIABLE_PredInfo_0_8;
            STATE_VARIABLE_ModuleInfo_58_58 = STATE_VARIABLE_ModuleInfo_0_10;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Body_36;
            MR_Word BodyClone_37;
            MR_Word MaybeGranularityVar_38;
            MR_Word STATE_VARIABLE_ProcInfo_48_48;
            MR_Word STATE_VARIABLE_ModuleInfo_49_49;
            MR_Word Var_39;

            hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &Body_36);
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Body_36, &BodyClone_37, HeadVar__1_1, ProcId_26, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_ProcInfo_48_48, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_49_49, HeadVar__3_3, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &MaybeGranularityVar_38, &Var_39);
            if ((MaybeGranularityVar_38 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Specialized_52_52 = STATE_VARIABLE_Specialized_0_6;
              STATE_VARIABLE_PredInfo_59_59 = STATE_VARIABLE_PredInfo_0_8;
              STATE_VARIABLE_ModuleInfo_58_58 = STATE_VARIABLE_ModuleInfo_49_49;
            }
            else
            {
              MR_Word STATE_VARIABLE_ProcInfo_53_53;
              MR_Word STATE_VARIABLE_ProcInfo_55_55;
              MR_Word STATE_VARIABLE_ProcInfo_57_57;

              STATE_VARIABLE_Specialized_52_52 = (MR_Integer) 1;
              hlds__hlds_pred__proc_info_set_goal_3_p_0(BodyClone_37, STATE_VARIABLE_ProcInfo_48_48, &STATE_VARIABLE_ProcInfo_53_53);
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_55_55);
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_55_55, &STATE_VARIABLE_ProcInfo_57_57, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_58_58);
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_26, STATE_VARIABLE_ProcInfo_57_57, STATE_VARIABLE_PredInfo_0_8, &STATE_VARIABLE_PredInfo_59_59);
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_27;
      next_value_of_STATE_VARIABLE_Specialized_0_6 = STATE_VARIABLE_Specialized_52_52;
      next_value_of_STATE_VARIABLE_PredInfo_0_8 = STATE_VARIABLE_PredInfo_59_59;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_58_58;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specialized_0_6 = next_value_of_STATE_VARIABLE_Specialized_0_6;
      STATE_VARIABLE_PredInfo_0_8 = next_value_of_STATE_VARIABLE_PredInfo_0_8;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * STATE_VARIABLE_CasesAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeGranularityVar_14 = STATE_VARIABLE_MaybeGranularityVar_0_13;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
      *STATE_VARIABLE_CasesAcc_3 = STATE_VARIABLE_CasesAcc_0_2;
    }
    else
    {
      MR_Word Case_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_43 = ((MR_Word) ((MR_hl_field(0, Case_32, (MR_Integer) 0))));
      MR_Word OtherConsIds_44 = ((MR_Word) ((MR_hl_field(0, Case_32, (MR_Integer) 1))));
      MR_Word Goal0_45 = ((MR_Word) ((MR_hl_field(0, Case_32, (MR_Integer) 2))));
      MR_Word Goal_46;
      MR_Word STATE_VARIABLE_ProcInfo_56_56;
      MR_Word STATE_VARIABLE_ModuleInfo_57_57;
      MR_Word STATE_VARIABLE_MaybeGranularityVar_59_59;
      MR_Word STATE_VARIABLE_CasesAcc_60_60;
      MR_Word Var_61;
      MR_Word Var_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CasesAcc_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13;

      transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Goal0_45, &Goal_46, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_56_56, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_57_57, HeadVar__12_12, (MR_Integer) 0, STATE_VARIABLE_MaybeGranularityVar_0_13, &STATE_VARIABLE_MaybeGranularityVar_59_59, &Var_47);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (MainConsId_43));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) (OtherConsIds_44));
        MR_hl_field(0, Var_61, 2) = ((MR_Box) (Goal_46));
      }
      {
        STATE_VARIABLE_CasesAcc_60_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CasesAcc_60_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, STATE_VARIABLE_CasesAcc_60_60, 1) = ((MR_Box) (STATE_VARIABLE_CasesAcc_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_33;
      next_value_of_STATE_VARIABLE_CasesAcc_0_2 = STATE_VARIABLE_CasesAcc_60_60;
      next_value_of_STATE_VARIABLE_ProcInfo_0_8 = STATE_VARIABLE_ProcInfo_56_56;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_57_57;
      next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13 = STATE_VARIABLE_MaybeGranularityVar_59_59;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CasesAcc_0_2 = next_value_of_STATE_VARIABLE_CasesAcc_0_2;
      STATE_VARIABLE_ProcInfo_0_8 = next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      STATE_VARIABLE_MaybeGranularityVar_0_13 = next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeGranularityVar_14 = STATE_VARIABLE_MaybeGranularityVar_0_13;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
      *STATE_VARIABLE_GoalsAcc_3 = STATE_VARIABLE_GoalsAcc_0_2;
    }
    else
    {
      MR_Word Goal0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_43;
      MR_Word STATE_VARIABLE_ProcInfo_53_53;
      MR_Word STATE_VARIABLE_ModuleInfo_54_54;
      MR_Word STATE_VARIABLE_MaybeGranularityVar_56_56;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_GoalsAcc_58_58;
      MR_Word Var_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13;

      transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Goal0_32, &Goal_43, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_53_53, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_54_54, HeadVar__12_12, (MR_Integer) 0, STATE_VARIABLE_MaybeGranularityVar_0_13, &STATE_VARIABLE_MaybeGranularityVar_56_56, &Var_44);
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Goal_43));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalsAcc_0_2, Var_57, &STATE_VARIABLE_GoalsAcc_58_58);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_33;
      next_value_of_STATE_VARIABLE_GoalsAcc_0_2 = STATE_VARIABLE_GoalsAcc_58_58;
      next_value_of_STATE_VARIABLE_ProcInfo_0_8 = STATE_VARIABLE_ProcInfo_53_53;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_54_54;
      next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13 = STATE_VARIABLE_MaybeGranularityVar_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalsAcc_0_2 = next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      STATE_VARIABLE_ProcInfo_0_8 = next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      STATE_VARIABLE_MaybeGranularityVar_0_13 = next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * STATE_VARIABLE_GoalsAcc_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Integer HeadVar__12_12,
  MR_Word HeadVar__13_13,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_14,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_15,
  MR_Word STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
  MR_Word * STATE_VARIABLE_HasRecursiveCallsInParallelConj_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HasRecursiveCallsInParallelConj_17 = STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
      *STATE_VARIABLE_MaybeGranularityVar_15 = STATE_VARIABLE_MaybeGranularityVar_0_14;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
      *STATE_VARIABLE_GoalsAcc_3 = STATE_VARIABLE_GoalsAcc_0_2;
    }
    else
    {
      MR_Word Goal0_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_52;
      MR_Word IsRecursiveCall_53;
      MR_Word STATE_VARIABLE_ProcInfo_64_64;
      MR_Word STATE_VARIABLE_ModuleInfo_65_65;
      MR_Word STATE_VARIABLE_MaybeGranularityVar_66_66;
      MR_Word Var_67;
      MR_Word STATE_VARIABLE_GoalsAcc_68_68;
      MR_Word STATE_VARIABLE_HasRecursiveCallsInParallelConj_70_70;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_14;
      MR_Word next_value_of_STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;

      transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Goal0_39, &Goal_52, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_64_64, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_65_65, HeadVar__12_12, HeadVar__13_13, STATE_VARIABLE_MaybeGranularityVar_0_14, &STATE_VARIABLE_MaybeGranularityVar_66_66, &IsRecursiveCall_53);
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (Goal_52));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalsAcc_0_2, Var_67, &STATE_VARIABLE_GoalsAcc_68_68);
      switch (IsRecursiveCall_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_HasRecursiveCallsInParallelConj_70_70 = STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_HasRecursiveCallsInParallelConj_70_70 = (MR_Integer) 1;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_40;
      next_value_of_STATE_VARIABLE_GoalsAcc_0_2 = STATE_VARIABLE_GoalsAcc_68_68;
      next_value_of_STATE_VARIABLE_ProcInfo_0_8 = STATE_VARIABLE_ProcInfo_64_64;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_65_65;
      next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_14 = STATE_VARIABLE_MaybeGranularityVar_66_66;
      next_value_of_STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = STATE_VARIABLE_HasRecursiveCallsInParallelConj_70_70;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalsAcc_0_2 = next_value_of_STATE_VARIABLE_GoalsAcc_0_2;
      STATE_VARIABLE_ProcInfo_0_8 = next_value_of_STATE_VARIABLE_ProcInfo_0_8;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      STATE_VARIABLE_MaybeGranularityVar_0_14 = next_value_of_STATE_VARIABLE_MaybeGranularityVar_0_14;
      STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = next_value_of_STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
  MR_Word STATE_VARIABLE_Goal_0_76,
  MR_Word * STATE_VARIABLE_Goal_77,
  MR_Word CallerPredId_17,
  MR_Integer CallerProcId_18,
  MR_Word PredIdSpecialized_19,
  MR_Word SymNameSpecialized_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * STATE_VARIABLE_ProcInfo_79,
  MR_Word STATE_VARIABLE_ModuleInfo_0_80,
  MR_Word * STATE_VARIABLE_ModuleInfo_81,
  MR_Integer Distance_23,
  MR_Word IsInParallelConj_24,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_82,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_83,
  MR_Word * IsRecursiveCallInParallelConj_26)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_76, (MR_Integer) 0))));
  MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_76, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_27)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (GoalExpr0_27));
        MR_Word SubGoal_62;
        MR_Word GoalExpr_139;

        transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(SubGoal0_61, &SubGoal_62, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, Distance_23, IsInParallelConj_24, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83, IsRecursiveCallInParallelConj_26);
        GoalExpr_139 = (MR_Word) ((MR_Word) (SubGoal_62));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_77 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_139));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
        *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
        *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
        *STATE_VARIABLE_ModuleInfo_81 = STATE_VARIABLE_ModuleInfo_0_80;
        *STATE_VARIABLE_MaybeGranularityVar_83 = STATE_VARIABLE_MaybeGranularityVar_0_82;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalExpr_40;

        transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(GoalExpr0_27, &GoalExpr_40, CallerPredId_17, PredIdSpecialized_19, SymNameSpecialized_20, CallerProcId_18, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, IsInParallelConj_24, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83, IsRecursiveCallInParallelConj_26);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_77 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
            *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
            *STATE_VARIABLE_ModuleInfo_81 = STATE_VARIABLE_ModuleInfo_0_80;
            *STATE_VARIABLE_MaybeGranularityVar_83 = STATE_VARIABLE_MaybeGranularityVar_0_82;
          }
          break;
        case (MR_Integer) 1:
          {
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
            *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
            *STATE_VARIABLE_ModuleInfo_81 = STATE_VARIABLE_ModuleInfo_0_80;
            *STATE_VARIABLE_MaybeGranularityVar_83 = STATE_VARIABLE_MaybeGranularityVar_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_53 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 2))));
            MR_Word Goals_55;
            MR_Word ContainRecursiveCalls_56;
            MR_Word STATE_VARIABLE_ProcInfo_89_89;

            transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(Goals0_54, (MR_Word) ((MR_Unsigned) 0U), &Goals_55, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, &STATE_VARIABLE_ProcInfo_89_89, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, Distance_23, (MR_Integer) 1, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83, (MR_Integer) 0, &ContainRecursiveCalls_56);
            switch (Type_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (ContainRecursiveCalls_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
                      *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_89_89;
                    }
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(Goals_55, GoalInfo_28, *STATE_VARIABLE_MaybeGranularityVar_83, PredIdSpecialized_19, CallerProcId_18, Distance_23, STATE_VARIABLE_Goal_77, STATE_VARIABLE_ProcInfo_89_89, STATE_VARIABLE_ProcInfo_79, *STATE_VARIABLE_ModuleInfo_81);
                    break;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word GoalExpr_132;

                  {
                    GoalExpr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_132, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_132, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, GoalExpr_132, 2) = ((MR_Box) (Goals_55));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Goal_77 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_132));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
                  }
                  *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_89_89;
                }
                break;
            }
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_135;
            MR_Word Goals0_136 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 1))));
            MR_Word Goals_137;

            transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(Goals0_136, (MR_Word) ((MR_Unsigned) 0U), &Goals_137, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, Distance_23, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83);
            {
              GoalExpr_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_135, 1) = ((MR_Box) (Goals_137));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_135));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
            }
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 1))));
            MR_Word CanFail_58 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 3))));
            MR_Word Cases_60;
            MR_Word GoalExpr_138;

            transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(Cases0_59, (MR_Word) ((MR_Unsigned) 0U), &Cases_60, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, Distance_23, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83);
            {
              GoalExpr_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_138, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_138, 1) = ((MR_Box) (Var_57));
              MR_hl_field(3, GoalExpr_138, 2) = (MR_Box) ((MR_Unsigned) (CanFail_58));
              MR_hl_field(3, GoalExpr_138, 3) = ((MR_Box) (Cases_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_138));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
            }
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 1))));
            MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 2))));
            MR_Word Var_112;

            succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_63, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_112 = ((MR_Unsigned) ((MR_hl_field(3, Reason_63, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_112 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
              *STATE_VARIABLE_MaybeGranularityVar_83 = STATE_VARIABLE_MaybeGranularityVar_0_82;
              *STATE_VARIABLE_ModuleInfo_81 = STATE_VARIABLE_ModuleInfo_0_80;
              *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
              *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
            }
            else
            {
              MR_Word GoalExpr_140;
              MR_Word SubGoal_141;

              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(SubGoal0_145, &SubGoal_141, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_0_80, STATE_VARIABLE_ModuleInfo_81, Distance_23, IsInParallelConj_24, STATE_VARIABLE_MaybeGranularityVar_0_82, STATE_VARIABLE_MaybeGranularityVar_83, IsRecursiveCallInParallelConj_26);
              {
                GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_63));
                MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (SubGoal_141));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 1))));
            MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 2))));
            MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 3))));
            MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, (MR_Integer) 4))));
            MR_Word Cond_69;
            MR_Word Then_71;
            MR_Word Else_73;
            MR_Word STATE_VARIABLE_ProcInfo_117_117;
            MR_Word STATE_VARIABLE_ModuleInfo_118_118;
            MR_Word STATE_VARIABLE_MaybeGranularityVar_120_120;
            MR_Word STATE_VARIABLE_ProcInfo_121_121;
            MR_Word STATE_VARIABLE_ModuleInfo_122_122;
            MR_Word STATE_VARIABLE_MaybeGranularityVar_124_124;
            MR_Word GoalExpr_147;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_74;

            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Cond0_66, &Cond_69, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_0_78, &STATE_VARIABLE_ProcInfo_117_117, STATE_VARIABLE_ModuleInfo_0_80, &STATE_VARIABLE_ModuleInfo_118_118, Distance_23, (MR_Integer) 0, STATE_VARIABLE_MaybeGranularityVar_0_82, &STATE_VARIABLE_MaybeGranularityVar_120_120, &Var_70);
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Then0_67, &Then_71, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_117_117, &STATE_VARIABLE_ProcInfo_121_121, STATE_VARIABLE_ModuleInfo_118_118, &STATE_VARIABLE_ModuleInfo_122_122, Distance_23, (MR_Integer) 0, STATE_VARIABLE_MaybeGranularityVar_120_120, &STATE_VARIABLE_MaybeGranularityVar_124_124, &Var_72);
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(Else0_68, &Else_73, CallerPredId_17, CallerProcId_18, PredIdSpecialized_19, SymNameSpecialized_20, STATE_VARIABLE_ProcInfo_121_121, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ModuleInfo_122_122, STATE_VARIABLE_ModuleInfo_81, Distance_23, (MR_Integer) 0, STATE_VARIABLE_MaybeGranularityVar_124_124, STATE_VARIABLE_MaybeGranularityVar_83, &Var_74);
            {
              GoalExpr_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_147, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_147, 1) = ((MR_Box) (Vars_65));
              MR_hl_field(3, GoalExpr_147, 2) = ((MR_Box) (Cond_69));
              MR_hl_field(3, GoalExpr_147, 3) = ((MR_Box) (Then_71));
              MR_hl_field(3, GoalExpr_147, 4) = ((MR_Box) (Else_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_147));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_28));
            }
            *IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_goal\'/15", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
  MR_Word GoalsInConj_11,
  MR_Word ConjInfo_12,
  MR_Word MaybeGranularityVar_13,
  MR_Word PredIdSpecialized_14,
  MR_Integer CallerProcId_15,
  MR_Integer Distance_16,
  MR_Word * IfThenElseGoal_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33,
  MR_Word ModuleInfo_19)
{
  MR_bool succeeded;
  MR_Word Var_20;
  MR_Word UnifyGoal_21;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_ProcInfo_37_37;
  MR_Word Var_38;

  Var_35 = parse_tree__builtin_lib_types__int_type_0_f_0();
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_35, (MR_Integer) 1, &Var_20, STATE_VARIABLE_ProcInfo_0_32, &STATE_VARIABLE_ProcInfo_37_37);
  Var_38 = mercury__term_context__dummy_context_0_f_0();
  hlds__make_goal__make_int_const_construction_4_p_0(Var_38, Var_20, (MR_Integer) 0, &UnifyGoal_21);
  if ((MaybeGranularityVar_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.create_if_then_else_goal\'/10", (MR_String) "MaybeGranularityVar = no");
      return;
    }
  else
  {
    MR_Word GranularityVar_22 = ((MR_Word) ((MR_hl_field(1, MaybeGranularityVar_13, (MR_Integer) 0))));
    MR_Word Test_23;
    MR_Word Cond_24;
    MR_Word Then_26;
    MR_Word Else_28;
    MR_Word NonLocals0_29;
    MR_Word NonLocals_30;
    MR_Word IfThenElseInfo_31;
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word Var_50;
    MR_Word GoalExpr0_55;
    MR_Word GoalExpr_57;
    MR_Word Goal0_59;
    MR_Word GoalExpr0_76;
    MR_Word GoalExpr_78;
    MR_Word Goal0_80;
    MR_Integer Var_58;
    MR_Word Goals_62;
    MR_Word ConjInfo0_63;
    MR_Word Var_72;
    MR_Integer Var_79;
    MR_Word Goals_83;
    MR_Word ConjInfo0_84;
    MR_Word Var_93;

    hlds__make_goal__make_simple_test_5_p_0(GranularityVar_22, Var_20, (MR_Word) (MR_mkword(3, &transform_hlds__distance_granularity_scalar_common_2[0])), (MR_Word) ((MR_Unsigned) 0U), &Test_23);
    hlds__goal_util__create_conj_4_p_0(UnifyGoal_21, Test_23, (MR_Integer) 0, &Cond_24);
    {
      GoalExpr0_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr0_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr0_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, GoalExpr0_55, 2) = ((MR_Box) (GoalsInConj_11));
    }
    transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(GoalExpr0_55, &GoalExpr_57, (MR_Integer) 1, &Var_58, PredIdSpecialized_14, CallerProcId_15, Distance_16, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_46_46);
    {
      Goal0_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal0_59, 0) = ((MR_Box) (GoalExpr_57));
      MR_hl_field(0, Goal0_59, 1) = ((MR_Box) (ConjInfo_12));
    }
    Var_72 = ((MR_Word) ((MR_hl_field(0, Goal0_59, (MR_Integer) 0))));
    ConjInfo0_63 = ((MR_Word) ((MR_hl_field(0, Goal0_59, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_72, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Goals_62 = ((MR_Word) ((MR_hl_field(3, Var_72, (MR_Integer) 2))));
      {
        MR_Word NonLocals_64;
        MR_Word InstMapDelta_65;
        MR_Word Detism_66;
        MR_Word Purity_67;
        MR_Word ConjInfo1_68;
        MR_Word ConjInfo2_69;
        MR_Word ConjInfo3_70;
        MR_Word ConjInfo_71;

        hlds__hlds_goal__goal_list_nonlocals_2_p_0(Goals_62, &NonLocals_64);
        hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Goals_62, &InstMapDelta_65);
        hlds__hlds_goal__goal_list_determinism_2_p_0(Goals_62, &Detism_66);
        hlds__hlds_goal__goal_list_purity_2_p_0(Goals_62, &Purity_67);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_64, ConjInfo0_63, &ConjInfo1_68);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_65, ConjInfo1_68, &ConjInfo2_69);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_66, ConjInfo2_69, &ConjInfo3_70);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_67, ConjInfo3_70, &ConjInfo_71);
        {
          Then_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Then_26, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, Then_26, 1) = ((MR_Box) (ConjInfo_71));
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
        return;
      }
    {
      GoalExpr0_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr0_76, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr0_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr0_76, 2) = ((MR_Box) (GoalsInConj_11));
    }
    transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(GoalExpr0_76, &GoalExpr_78, (MR_Integer) 1, &Var_79, GranularityVar_22, PredIdSpecialized_14, CallerProcId_15, ModuleInfo_19, STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ProcInfo_33);
    {
      Goal0_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal0_80, 0) = ((MR_Box) (GoalExpr_78));
      MR_hl_field(0, Goal0_80, 1) = ((MR_Box) (ConjInfo_12));
    }
    Var_93 = ((MR_Word) ((MR_hl_field(0, Goal0_80, (MR_Integer) 0))));
    ConjInfo0_84 = ((MR_Word) ((MR_hl_field(0, Goal0_80, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_93)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_93, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Goals_83 = ((MR_Word) ((MR_hl_field(3, Var_93, (MR_Integer) 2))));
      {
        MR_Word NonLocals_85;
        MR_Word InstMapDelta_86;
        MR_Word Detism_87;
        MR_Word Purity_88;
        MR_Word ConjInfo1_89;
        MR_Word ConjInfo2_90;
        MR_Word ConjInfo3_91;
        MR_Word ConjInfo_92;

        hlds__hlds_goal__goal_list_nonlocals_2_p_0(Goals_83, &NonLocals_85);
        hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Goals_83, &InstMapDelta_86);
        hlds__hlds_goal__goal_list_determinism_2_p_0(Goals_83, &Detism_87);
        hlds__hlds_goal__goal_list_purity_2_p_0(Goals_83, &Purity_88);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_85, ConjInfo0_84, &ConjInfo1_89);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_86, ConjInfo1_89, &ConjInfo2_90);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_87, ConjInfo2_90, &ConjInfo3_91);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_88, ConjInfo3_91, &ConjInfo_92);
        {
          Else_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Else_28, 0) = ((MR_Box) (Var_93));
          MR_hl_field(0, Else_28, 1) = ((MR_Box) (ConjInfo_92));
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
        return;
      }
    NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConjInfo_12);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GranularityVar_22, NonLocals0_29, &NonLocals_30);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_30, ConjInfo_12, &IfThenElseInfo_31);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_50, 2) = ((MR_Box) (Cond_24));
      MR_hl_field(3, Var_50, 3) = ((MR_Box) (Then_26));
      MR_hl_field(3, Var_50, 4) = ((MR_Box) (Else_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *IfThenElseGoal_17 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 1) = ((MR_Box) (IfThenElseInfo_31));
    }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_41,
  MR_Word * STATE_VARIABLE_GoalExpr_42,
  MR_Integer STATE_VARIABLE_IndexInConj_0_43,
  MR_Integer * STATE_VARIABLE_IndexInConj_44,
  MR_Word CallerPredId_14,
  MR_Integer CallerProcId_15,
  MR_Integer Distance_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * STATE_VARIABLE_ProcInfo_46)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Goals0_18;
    MR_Word Var_47;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_47 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_41, (MR_Integer) 1))) & (MR_Integer) 1);
      Goals0_18 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_41, (MR_Integer) 2))));
      succeeded = (Var_47 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Integer Length_19;

      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, &Length_19);
      succeeded = (STATE_VARIABLE_IndexInConj_0_43 > Length_19);
      if (succeeded)
      {
        *STATE_VARIABLE_ProcInfo_46 = STATE_VARIABLE_ProcInfo_0_45;
        *STATE_VARIABLE_IndexInConj_44 = STATE_VARIABLE_IndexInConj_0_43;
        *STATE_VARIABLE_GoalExpr_42 = STATE_VARIABLE_GoalExpr_0_41;
      }
      else
      {
        MR_Word Goal0_20;
        MR_Word GoalExpr0_21;
        MR_Word GoalInfo0_22;
        MR_Word STATE_VARIABLE_ProcInfo_51_51;
        MR_Word STATE_VARIABLE_GoalExpr_63_63;
        MR_Integer STATE_VARIABLE_IndexInConj_65_65;
        MR_Box conv0_Goal0_20;
        MR_Word CalleePredId_23;
        MR_Integer CalleeProcId_24;
        MR_Word CallArgs0_25;
        MR_Word CallBuiltin_26;
        MR_Word CallSymName_28;
        MR_Word next_value_of_STATE_VARIABLE_GoalExpr_0_41;
        MR_Integer next_value_of_STATE_VARIABLE_IndexInConj_0_43;
        MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_45;

        mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, STATE_VARIABLE_IndexInConj_0_43, &conv0_Goal0_20);
        Goal0_20 = ((MR_Word) (conv0_Goal0_20));
        GoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 0))));
        GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) GoalExpr0_21)) == (MR_Integer) 2);
        if (succeeded)
        {
          CalleePredId_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 0))));
          CalleeProcId_24 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 1))));
          CallArgs0_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 2))));
          CallBuiltin_26 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 3))) & (MR_Integer) 1);
          CallSymName_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 5))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CalleePredId_23, CallerPredId_14);
          if (succeeded)
            succeeded = (CalleeProcId_24 == CallerProcId_15);
          if (succeeded)
          {
            MR_Word GoalExpr_11;
            MR_Word Var_29;
            MR_Word UnifyGoal_30;
            MR_Word CallArgs_31;
            MR_Word InstMapDelta0_33;
            MR_Word DistanceConsId_34;
            MR_Word MerInst_35;
            MR_Word InstMapDelta_36;
            MR_Word GoalInfo_37;
            MR_Word Goal_38;
            MR_Word PlainConj_39;
            MR_Word Goals_40;
            MR_Word Var_49;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;

            Var_49 = parse_tree__builtin_lib_types__int_type_0_f_0();
            hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_49, (MR_Integer) 1, &Var_29, STATE_VARIABLE_ProcInfo_0_45, &STATE_VARIABLE_ProcInfo_51_51);
            Var_52 = mercury__term_context__dummy_context_0_f_0();
            hlds__make_goal__make_int_const_construction_4_p_0(Var_52, Var_29, Distance_16, &UnifyGoal_30);
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_29));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__append_3_p_1((MR_Word) (&transform_hlds__distance_granularity_scalar_common_1[0]), CallArgs0_25, Var_53, &CallArgs_31);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, GoalExpr_11, 0) = ((MR_Box) (CalleePredId_23));
              MR_hl_field(2, GoalExpr_11, 1) = ((MR_Box) (CalleeProcId_24));
              MR_hl_field(2, GoalExpr_11, 2) = ((MR_Box) (CallArgs_31));
              MR_hl_field(2, GoalExpr_11, 3) = (MR_Box) ((MR_Unsigned) (CallBuiltin_26));
              MR_hl_field(2, GoalExpr_11, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, GoalExpr_11, 5) = ((MR_Box) (CallSymName_28));
            }
            InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_22);
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (Distance_16));
            }
            {
              DistanceConsId_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, DistanceConsId_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, DistanceConsId_34, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (DistanceConsId_34));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MerInst_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, MerInst_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(2, MerInst_35, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(2, MerInst_35, 2) = ((MR_Box) (Var_58));
            }
            hlds__instmap__instmap_delta_insert_var_4_p_0(Var_29, MerInst_35, InstMapDelta0_33, &InstMapDelta_36);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_36, GoalInfo0_22, &GoalInfo_37);
            {
              Goal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_38, 0) = ((MR_Box) (GoalExpr_11));
              MR_hl_field(0, Goal_38, 1) = ((MR_Box) (GoalInfo_37));
            }
            hlds__goal_util__create_conj_4_p_0(UnifyGoal_30, Goal_38, (MR_Integer) 0, &PlainConj_39);
            mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, STATE_VARIABLE_IndexInConj_0_43, ((MR_Box) (PlainConj_39)), &Goals_40);
            {
              STATE_VARIABLE_GoalExpr_63_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_63_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_63_63, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_63_63, 2) = ((MR_Box) (Goals_40));
            }
          }
          else
          {
            STATE_VARIABLE_ProcInfo_51_51 = STATE_VARIABLE_ProcInfo_0_45;
            STATE_VARIABLE_GoalExpr_63_63 = STATE_VARIABLE_GoalExpr_0_41;
          }
          STATE_VARIABLE_IndexInConj_65_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_IndexInConj_0_43 + (MR_Unsigned) 1);
        }
        else
        {
          STATE_VARIABLE_IndexInConj_65_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_IndexInConj_0_43 + (MR_Unsigned) 1);
          STATE_VARIABLE_ProcInfo_51_51 = STATE_VARIABLE_ProcInfo_0_45;
          STATE_VARIABLE_GoalExpr_63_63 = STATE_VARIABLE_GoalExpr_0_41;
        }
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_GoalExpr_0_41 = STATE_VARIABLE_GoalExpr_63_63;
        next_value_of_STATE_VARIABLE_IndexInConj_0_43 = STATE_VARIABLE_IndexInConj_65_65;
        next_value_of_STATE_VARIABLE_ProcInfo_0_45 = STATE_VARIABLE_ProcInfo_51_51;
        STATE_VARIABLE_GoalExpr_0_41 = next_value_of_STATE_VARIABLE_GoalExpr_0_41;
        STATE_VARIABLE_IndexInConj_0_43 = next_value_of_STATE_VARIABLE_IndexInConj_0_43;
        STATE_VARIABLE_ProcInfo_0_45 = next_value_of_STATE_VARIABLE_ProcInfo_0_45;
        continue;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_then2\'/10", (MR_String) "unexpected goal type");
        return;
      }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * STATE_VARIABLE_GoalExpr_67,
  MR_Integer STATE_VARIABLE_IndexInConj_0_68,
  MR_Integer * STATE_VARIABLE_IndexInConj_69,
  MR_Word GranularityVar_13,
  MR_Word CallerPredId_14,
  MR_Integer CallerProcId_15,
  MR_Word ModuleInfo_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * STATE_VARIABLE_ProcInfo_71)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Goals0_18;
    MR_Word Var_72;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_72 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1))) & (MR_Integer) 1);
      Goals0_18 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2))));
      succeeded = (Var_72 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Integer Length_19;

      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, &Length_19);
      succeeded = (STATE_VARIABLE_IndexInConj_0_68 > Length_19);
      if (succeeded)
      {
        *STATE_VARIABLE_ProcInfo_71 = STATE_VARIABLE_ProcInfo_0_70;
        *STATE_VARIABLE_IndexInConj_69 = STATE_VARIABLE_IndexInConj_0_68;
        *STATE_VARIABLE_GoalExpr_67 = STATE_VARIABLE_GoalExpr_0_66;
      }
      else
      {
        MR_Word Goal0_20;
        MR_Word GoalExpr0_21;
        MR_Word GoalInfo0_22;
        MR_Word STATE_VARIABLE_ProcInfo_82_82;
        MR_Word STATE_VARIABLE_GoalExpr_139_139;
        MR_Integer STATE_VARIABLE_IndexInConj_141_141;
        MR_Box conv0_Goal0_20;
        MR_Word CalleePredId_23;
        MR_Integer CalleeProcId_24;
        MR_Word CallArgs0_25;
        MR_Word CallBuiltin_26;
        MR_Word CallSymName_28;
        MR_Word next_value_of_STATE_VARIABLE_GoalExpr_0_66;
        MR_Integer next_value_of_STATE_VARIABLE_IndexInConj_0_68;
        MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_70;

        mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, STATE_VARIABLE_IndexInConj_0_68, &conv0_Goal0_20);
        Goal0_20 = ((MR_Word) (conv0_Goal0_20));
        GoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 0))));
        GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) GoalExpr0_21)) == (MR_Integer) 2);
        if (succeeded)
        {
          CalleePredId_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 0))));
          CalleeProcId_24 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 1))));
          CallArgs0_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 2))));
          CallBuiltin_26 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 3))) & (MR_Integer) 1);
          CallSymName_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_21, (MR_Integer) 5))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CalleePredId_23, CallerPredId_14);
          if (succeeded)
            succeeded = (CalleeProcId_24 == CallerProcId_15);
          if (succeeded)
          {
            MR_Word GoalExpr_11;
            MR_Word Var_29;
            MR_Word UnifyGoal_30;
            MR_Word VarResult_31;
            MR_Word MinusPredId_32;
            MR_Integer MinusProcId_33;
            MR_Word MinusCallArgs_34;
            MR_Word MinusCallSymName_36;
            MR_Word ConsId_37;
            MR_Word Rhs_38;
            MR_Word MinusCallUnifyContext_39;
            MR_Word DecrementGoalExpr_40;
            MR_Word NonLocals_41;
            MR_Word VarResultDelta_42;
            MR_Word VarDelta_43;
            MR_Word InstMapDeltaDecrement_44;
            MR_Word FirstGoal_47;
            MR_Word FirstGoalInfo_49;
            MR_Word Context_50;
            MR_Word DecrementGoalInfo_51;
            MR_Word DecrementGoal_52;
            MR_Word CallArgs_53;
            MR_Word InstMapDelta0_55;
            MR_Word InstMapDelta_57;
            MR_Word GoalInfo_58;
            MR_Word Goal_59;
            MR_Word Goals1_60;
            MR_Word StartGoals_61;
            MR_Word EndGoals_62;
            MR_Word GoalsAppend0_63;
            MR_Word GoalsAppend1_64;
            MR_Word Goals_65;
            MR_Word Var_74;
            MR_Word STATE_VARIABLE_ProcInfo_76_76;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_96;
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_103;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Integer Var_133;
            MR_Word Var_135;
            MR_Word Var_137;
            MR_Box conv1_FirstGoal_47;

            Var_74 = parse_tree__builtin_lib_types__int_type_0_f_0();
            hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_74, (MR_Integer) 1, &Var_29, STATE_VARIABLE_ProcInfo_0_70, &STATE_VARIABLE_ProcInfo_76_76);
            Var_77 = mercury__term_context__dummy_context_0_f_0();
            hlds__make_goal__make_int_const_construction_4_p_0(Var_77, Var_29, (MR_Integer) 1, &UnifyGoal_30);
            Var_80 = parse_tree__builtin_lib_types__int_type_0_f_0();
            hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_80, (MR_Integer) 1, &VarResult_31, STATE_VARIABLE_ProcInfo_76_76, &STATE_VARIABLE_ProcInfo_82_82);
            hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_16, (MR_Word) (&transform_hlds__distance_granularity_scalar_common_2[1]), (MR_String) "minus", (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_Integer) 2))), (MR_Word) ((MR_Unsigned) 0U), &MinusPredId_32, &MinusProcId_33);
            {
              Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_91, 0) = ((MR_Box) (VarResult_31));
              MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_29));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
            }
            {
              MinusCallArgs_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MinusCallArgs_34, 0) = ((MR_Box) (GranularityVar_13));
              MR_hl_field(1, MinusCallArgs_34, 1) = ((MR_Box) (Var_90));
            }
            MinusCallSymName_36 = (MR_Word) (MR_mkword(1, &transform_hlds__distance_granularity_scalar_common_1[1]));
            Var_98 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_96, 0) = ((MR_Box) (MinusCallSymName_36));
              MR_hl_field(0, Var_96, 1) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_96, 2) = ((MR_Box) (Var_98));
            }
            ConsId_37 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_96)));
            {
              Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_29));
              MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_100, 0) = ((MR_Box) (GranularityVar_13));
              MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
            }
            {
              Rhs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Rhs_38, 0) = ((MR_Box) (ConsId_37));
              MR_hl_field(1, Rhs_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(1, Rhs_38, 2) = ((MR_Box) (Var_100));
            }
            {
              Var_103 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_103, 0) = ((MR_Box) (VarResult_31));
              MR_hl_field(0, Var_103, 1) = ((MR_Box) (Rhs_38));
              MR_hl_field(0, Var_103, 2) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[2]));
            }
            {
              MinusCallUnifyContext_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MinusCallUnifyContext_39, 0) = ((MR_Box) (Var_103));
            }
            {
              DecrementGoalExpr_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, DecrementGoalExpr_40, 0) = ((MR_Box) (MinusPredId_32));
              MR_hl_field(2, DecrementGoalExpr_40, 1) = ((MR_Box) (MinusProcId_33));
              MR_hl_field(2, DecrementGoalExpr_40, 2) = ((MR_Box) (MinusCallArgs_34));
              MR_hl_field(2, DecrementGoalExpr_40, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(2, DecrementGoalExpr_40, 4) = ((MR_Box) (MinusCallUnifyContext_39));
              MR_hl_field(2, DecrementGoalExpr_40, 5) = ((MR_Box) (MinusCallSymName_36));
            }
            parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MinusCallArgs_34, &NonLocals_41);
            {
              VarResultDelta_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarResultDelta_42, 0) = ((MR_Box) (VarResult_31));
              MR_hl_field(0, VarResultDelta_42, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__distance_granularity_scalar_common_1[3])));
            }
            {
              VarDelta_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarDelta_43, 0) = ((MR_Box) (Var_29));
              MR_hl_field(0, VarDelta_43, 1) = ((MR_Box) (MR_mkword(2, &transform_hlds__distance_granularity_scalar_common_3[0])));
            }
            {
              Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_126, 0) = ((MR_Box) (VarResultDelta_42));
              MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_125, 0) = ((MR_Box) (VarDelta_43));
              MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
            }
            InstMapDeltaDecrement_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_125);
            mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, (MR_Integer) 1, &conv1_FirstGoal_47);
            FirstGoal_47 = ((MR_Word) (conv1_FirstGoal_47));
            FirstGoalInfo_49 = ((MR_Word) ((MR_hl_field(0, FirstGoal_47, (MR_Integer) 1))));
            Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_49);
            hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_41, InstMapDeltaDecrement_44, (MR_Integer) 0, (MR_Integer) 0, Context_50, &DecrementGoalInfo_51);
            {
              DecrementGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DecrementGoal_52, 0) = ((MR_Box) (DecrementGoalExpr_40));
              MR_hl_field(0, DecrementGoal_52, 1) = ((MR_Box) (DecrementGoalInfo_51));
            }
            mercury__list__append_3_p_1((MR_Word) (&transform_hlds__distance_granularity_scalar_common_1[0]), CallArgs0_25, Var_91, &CallArgs_53);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, GoalExpr_11, 0) = ((MR_Box) (CalleePredId_23));
              MR_hl_field(2, GoalExpr_11, 1) = ((MR_Box) (CalleeProcId_24));
              MR_hl_field(2, GoalExpr_11, 2) = ((MR_Box) (CallArgs_53));
              MR_hl_field(2, GoalExpr_11, 3) = (MR_Box) ((MR_Unsigned) (CallBuiltin_26));
              MR_hl_field(2, GoalExpr_11, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, GoalExpr_11, 5) = ((MR_Box) (CallSymName_28));
            }
            InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_22);
            hlds__instmap__instmap_delta_insert_var_4_p_0(Var_29, (MR_Word) (MR_mkword(1, &transform_hlds__distance_granularity_scalar_common_1[7])), InstMapDelta0_55, &InstMapDelta_57);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_57, GoalInfo0_22, &GoalInfo_58);
            {
              Goal_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_59, 0) = ((MR_Box) (GoalExpr_11));
              MR_hl_field(0, Goal_59, 1) = ((MR_Box) (GoalInfo_58));
            }
            mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_18, STATE_VARIABLE_IndexInConj_0_68, ((MR_Box) (Goal_59)), &Goals1_60);
            Var_133 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_IndexInConj_0_68 - (MR_Unsigned) 1);
            mercury__list__det_split_list_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_133, Goals1_60, &StartGoals_61, &EndGoals_62);
            {
              Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_135, 0) = ((MR_Box) (UnifyGoal_30));
              MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StartGoals_61, Var_135, &GoalsAppend0_63);
            {
              Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_137, 0) = ((MR_Box) (DecrementGoal_52));
              MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsAppend0_63, Var_137, &GoalsAppend1_64);
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsAppend1_64, EndGoals_62, &Goals_65);
            {
              STATE_VARIABLE_GoalExpr_139_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_139_139, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_139_139, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_139_139, 2) = ((MR_Box) (Goals_65));
            }
          }
          else
          {
            STATE_VARIABLE_ProcInfo_82_82 = STATE_VARIABLE_ProcInfo_0_70;
            STATE_VARIABLE_GoalExpr_139_139 = STATE_VARIABLE_GoalExpr_0_66;
          }
          STATE_VARIABLE_IndexInConj_141_141 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_IndexInConj_0_68 + (MR_Unsigned) 3);
        }
        else
        {
          STATE_VARIABLE_IndexInConj_141_141 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_IndexInConj_0_68 + (MR_Unsigned) 1);
          STATE_VARIABLE_ProcInfo_82_82 = STATE_VARIABLE_ProcInfo_0_70;
          STATE_VARIABLE_GoalExpr_139_139 = STATE_VARIABLE_GoalExpr_0_66;
        }
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_GoalExpr_0_66 = STATE_VARIABLE_GoalExpr_139_139;
        next_value_of_STATE_VARIABLE_IndexInConj_0_68 = STATE_VARIABLE_IndexInConj_141_141;
        next_value_of_STATE_VARIABLE_ProcInfo_0_70 = STATE_VARIABLE_ProcInfo_82_82;
        STATE_VARIABLE_GoalExpr_0_66 = next_value_of_STATE_VARIABLE_GoalExpr_0_66;
        STATE_VARIABLE_IndexInConj_0_68 = next_value_of_STATE_VARIABLE_IndexInConj_0_68;
        STATE_VARIABLE_ProcInfo_0_70 = next_value_of_STATE_VARIABLE_ProcInfo_0_70;
        continue;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_else2\'/10", (MR_String) "unexpected goal type");
        return;
      }
    break;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_37,
  MR_Word * STATE_VARIABLE_GoalExpr_38,
  MR_Word CallerPredId_16,
  MR_Word PredIdSpecialized_17,
  MR_Word SymNameSpecialized_18,
  MR_Integer CallerProcId_19,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word IsInParallelConj_22,
  MR_Word STATE_VARIABLE_MaybeGranularityVar_0_43,
  MR_Word * STATE_VARIABLE_MaybeGranularityVar_44,
  MR_Word * IsRecursiveCallInParallelConj_24)
{
  MR_bool succeeded = (IsInParallelConj_22 == (MR_Integer) 1);
  MR_Word CalleePredId_25 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 0))));
  MR_Integer CalleeProcId_26 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 1))));
  MR_Word CallArgs_27 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 2))));
  MR_Word CallBuiltin_28 = ((MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word CallUnifyContext_29 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 4))));

  if (succeeded)
  {
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CalleePredId_25, CallerPredId_16);
    if (succeeded)
      succeeded = (CalleeProcId_26 == CallerProcId_19);
  }
  if (succeeded)
  {
    if ((STATE_VARIABLE_MaybeGranularityVar_0_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GranularityVar_32;
      MR_Word ArgsModes0_33;
      MR_Word HeadVars0_34;
      MR_Word ArgsModes_35;
      MR_Word HeadVars_36;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_ProcInfo_48_48;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word STATE_VARIABLE_ProcInfo_55_55;

      Var_46 = parse_tree__builtin_lib_types__int_type_0_f_0();
      hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", Var_46, (MR_Integer) 1, &GranularityVar_32, STATE_VARIABLE_ProcInfo_0_39, &STATE_VARIABLE_ProcInfo_48_48);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeGranularityVar_44 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (GranularityVar_32));
      }
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &ArgsModes0_33);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &HeadVars0_34);
      Var_51 = parse_tree__prog_mode__in_mode_0_f_0();
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgsModes0_33, Var_50, &ArgsModes_35);
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (GranularityVar_32));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&transform_hlds__distance_granularity_scalar_common_1[0]), HeadVars0_34, Var_53, &HeadVars_36);
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgsModes_35, STATE_VARIABLE_ProcInfo_48_48, &STATE_VARIABLE_ProcInfo_55_55);
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_36, STATE_VARIABLE_ProcInfo_55_55, STATE_VARIABLE_ProcInfo_40);
    }
    else
    {
      *STATE_VARIABLE_ProcInfo_40 = STATE_VARIABLE_ProcInfo_0_39;
      *STATE_VARIABLE_MaybeGranularityVar_44 = STATE_VARIABLE_MaybeGranularityVar_0_43;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_GoalExpr_38 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (PredIdSpecialized_17));
      MR_hl_field(2, base, 1) = ((MR_Box) (CallerProcId_19));
      MR_hl_field(2, base, 2) = ((MR_Box) (CallArgs_27));
      MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (CallBuiltin_28));
      MR_hl_field(2, base, 4) = ((MR_Box) (CallUnifyContext_29));
      MR_hl_field(2, base, 5) = ((MR_Box) (SymNameSpecialized_18));
    }
    *IsRecursiveCallInParallelConj_24 = (MR_Integer) 1;
  }
  else
  {
    *IsRecursiveCallInParallelConj_24 = (MR_Integer) 0;
    *STATE_VARIABLE_MaybeGranularityVar_44 = STATE_VARIABLE_MaybeGranularityVar_0_43;
    *STATE_VARIABLE_ProcInfo_40 = STATE_VARIABLE_ProcInfo_0_39;
    *STATE_VARIABLE_GoalExpr_38 = STATE_VARIABLE_GoalExpr_0_37;
  }
  *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
}

void mercury__transform_hlds__distance_granularity__init(void)
{
}

void mercury__transform_hlds__distance_granularity__init_type_tables(void)
{
}

void mercury__transform_hlds__distance_granularity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__distance_granularity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.distance_granularity.
