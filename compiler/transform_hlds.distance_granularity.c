/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module transform_hlds.distance_granularity. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__distance_granularity__init
ENDINIT
*/

#include "transform_hlds.distance_granularity.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Integer transform_hlds__distance_granularity__Distance_16,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
  MR_Integer transform_hlds__distance_granularity__Distance_16);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
  MR_Integer transform_hlds__distance_granularity__Distance_16);

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
  MR_String transform_hlds__distance_granularity__Prefix_5,
  MR_Integer transform_hlds__distance_granularity__Distance_6,
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);

static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Integer transform_hlds__distance_granularity__Distance_16,
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
  MR_Integer transform_hlds__distance_granularity__Distance_23,
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4);


static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_2[1][4];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[4][1];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_4[2][3];




static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "-"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "distance_granularity"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_4[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Integer transform_hlds__distance_granularity__Distance_16,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
        MR_Word transform_hlds__distance_granularity__Goals0_18;
        MR_Word transform_hlds__distance_granularity__V_46_46;

        if (transform_hlds__distance_granularity__succeeded)
          {
            transform_hlds__distance_granularity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 1)));
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 2)));
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_46_46 == (MR_Integer) 1);
          }
        if (transform_hlds__distance_granularity__succeeded)
          {
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Integer transform_hlds__distance_granularity__Length_19;

            {
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 > transform_hlds__distance_granularity__Length_19);
            if (transform_hlds__distance_granularity__succeeded)
              {
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42;
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
              }
            else
              {
                MR_Word transform_hlds__distance_granularity__Goal0_20;
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
                MR_Word transform_hlds__distance_granularity__V_27_27;

                {
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__distance_granularity__succeeded)
                  {
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
                    {
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
                    if (transform_hlds__distance_granularity__succeeded)
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
                    if (transform_hlds__distance_granularity__succeeded)
                      {
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
                        MR_Word transform_hlds__distance_granularity__Var_29;
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
                        MR_Word transform_hlds__distance_granularity__CallArgs_31;
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
                        MR_Word transform_hlds__distance_granularity__MerInst_34;
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
                        MR_Word transform_hlds__distance_granularity__GoalInfo_36;
                        MR_Word transform_hlds__distance_granularity__Goal_37;
                        MR_Word transform_hlds__distance_granularity__PlainConj_38;
                        MR_Word transform_hlds__distance_granularity__Goals_39;
                        MR_Word transform_hlds__distance_granularity__V_47_47;
                        MR_Word transform_hlds__distance_granularity__V_50_50;
                        MR_Word transform_hlds__distance_granularity__V_54_54;
                        MR_Word transform_hlds__distance_granularity__V_55_55;
                        MR_Word transform_hlds__distance_granularity__V_56_56;

                        {
                          transform_hlds__distance_granularity__V_47_47 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
                        {
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49);
                        }
                        {
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
                        {
                          transform_hlds__distance_granularity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_50_50, &transform_hlds__distance_granularity__CallArgs_31);
                        }
                        {
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_31));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
                        }
                        {
                          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
                        {
                          transform_hlds__distance_granularity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 1) = ((MR_Box) (transform_hlds__distance_granularity__Distance_16));
                        }
                        {
                          transform_hlds__distance_granularity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_56_56));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__distance_granularity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_55_55));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__distance_granularity__MerInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_54_54));
                        }
                        {
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__MerInst_34, transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_36);
                        }
                        {
                          transform_hlds__distance_granularity__Goal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_36));
                        }
                        {
                          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_30, transform_hlds__distance_granularity__Goal_37, (MR_Integer) 0, &transform_hlds__distance_granularity__PlainConj_38);
                        }
                        {
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, ((MR_Box) (transform_hlds__distance_granularity__PlainConj_38)), &transform_hlds__distance_granularity__Goals_39);
                        }
                        {
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 1) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_39));
                        }
                      }
                    else
                      {
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
                      }
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
                  }
                else
                  {
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;

                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44;
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42;
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40;
                }
                continue;
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_then2\'/10", (MR_String) "unexpected goal type");
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
          }
        else
          {
            MR_Word transform_hlds__distance_granularity__Case_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 2)));
            MR_Word transform_hlds__distance_granularity__Goal_34;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
            MR_Word transform_hlds__distance_granularity__V_41_41;

            {
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_33, &transform_hlds__distance_granularity__Goal_34, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39, transform_hlds__distance_granularity__HeadVar__10_10);
            }
            {
              transform_hlds__distance_granularity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_31));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_32));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_34));
            }
            {
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_23;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;

              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
          }
        else
          {
            MR_Word transform_hlds__distance_granularity__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__Goal_31;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;
            MR_Word transform_hlds__distance_granularity__V_37_37;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;

            {
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_22, &transform_hlds__distance_granularity__Goal_31, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, transform_hlds__distance_granularity__HeadVar__10_10);
            }
            {
              transform_hlds__distance_granularity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_31));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_37_37, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_23;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
  MR_Integer transform_hlds__distance_granularity__Distance_16)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__CallExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 0)));
    MR_Word transform_hlds__distance_granularity__CallInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 1)));
    MR_Word transform_hlds__distance_granularity__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 0)));
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 1)));
    MR_Word transform_hlds__distance_granularity__CallArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 2)));
    MR_Word transform_hlds__distance_granularity__CallBuiltin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 3)));
    MR_Word transform_hlds__distance_granularity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 4)));
    MR_Word transform_hlds__distance_granularity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 5)));

    {
      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_19, transform_hlds__distance_granularity__CallerPredId_11);
    }
    if (transform_hlds__distance_granularity__succeeded)
      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_20 == transform_hlds__distance_granularity__CallerProcId_12);
    if (transform_hlds__distance_granularity__succeeded)
      {
        MR_Word transform_hlds__distance_granularity__Var_25;
        MR_Word transform_hlds__distance_granularity__UnifyGoal_26;
        MR_Word transform_hlds__distance_granularity__CallArgs_27;
        MR_Word transform_hlds__distance_granularity__CallExpr_29;
        MR_Word transform_hlds__distance_granularity__NonLocals0_30;
        MR_Word transform_hlds__distance_granularity__NonLocals_31;
        MR_Word transform_hlds__distance_granularity__CallInfo1_32;
        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
        MR_Word transform_hlds__distance_granularity__CallInfo_36;
        MR_Word transform_hlds__distance_granularity__Call_37;
        MR_Word transform_hlds__distance_granularity__V_42_42;
        MR_Word transform_hlds__distance_granularity__V_45_45;

        {
          transform_hlds__distance_granularity__V_42_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_42_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41);
        }
        {
          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_26);
        }
        {
          transform_hlds__distance_granularity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_25));
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_21, transform_hlds__distance_granularity__V_45_45, &transform_hlds__distance_granularity__CallArgs_27);
        }
        {
          transform_hlds__distance_granularity__CallExpr_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_13));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_20));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_22));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_14));
        }
        {
          transform_hlds__distance_granularity__NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__CallInfo0_18);
        }
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__NonLocals0_30, &transform_hlds__distance_granularity__NonLocals_31);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_31, transform_hlds__distance_granularity__CallInfo0_18, &transform_hlds__distance_granularity__CallInfo1_32);
        }
        {
          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__CallInfo1_32);
        }
        {
          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_25, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__CallInfo1_32, &transform_hlds__distance_granularity__CallInfo_36);
        }
        {
          transform_hlds__distance_granularity__Call_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__CallExpr_29));
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallInfo_36));
        }
        {
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_26, transform_hlds__distance_granularity__Call_37, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39);
        }
      }
    else
      {
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40;
        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38;
      }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
  MR_Integer transform_hlds__distance_granularity__Distance_16)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 0)));
    MR_Word transform_hlds__distance_granularity__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__distance_granularity__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17), (MR_Integer) 0);
          MR_Word transform_hlds__distance_granularity__SubGoal_52;
          MR_Word transform_hlds__distance_granularity__GoalExpr_95;

          {
            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_51, &transform_hlds__distance_granularity__SubGoal_52, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
          }
          transform_hlds__distance_granularity__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_52);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_95));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
        }
        break;
      case (MR_Integer) 2:
        {
          transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__distance_granularity__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Goals0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Goals1_44;
              MR_Word transform_hlds__distance_granularity__Goals_45;
              MR_Word transform_hlds__distance_granularity__GoalExpr_46;

              {
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals1_44, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
              switch (transform_hlds__distance_granularity__Type_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__distance_granularity__Goals_45 = transform_hlds__distance_granularity__Goals1_44;
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__goal_util__flatten_conj_2_p_0(transform_hlds__distance_granularity__Goals1_44, &transform_hlds__distance_granularity__Goals_45);
                  }
                  break;
              }
              {
                transform_hlds__distance_granularity__GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 1) = ((MR_Box) (transform_hlds__distance_granularity__Type_42));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_45));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_46));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__distance_granularity__Goals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Goals_92;
              MR_Word transform_hlds__distance_granularity__GoalExpr_93;

              {
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_92, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_92));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_93));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__distance_granularity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__CanFail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
              MR_Word transform_hlds__distance_granularity__Cases_50;
              MR_Word transform_hlds__distance_granularity__GoalExpr_94;

              {
                transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(transform_hlds__distance_granularity__Cases0_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_50, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_47));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_48));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_94));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__distance_granularity__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__V_74_74;
              MR_Word transform_hlds__distance_granularity__V_54_54;

              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__distance_granularity__succeeded)
                {
                  transform_hlds__distance_granularity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 1)));
                  transform_hlds__distance_granularity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 2)));
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_74_74 == (MR_Integer) 1);
                }
              if (transform_hlds__distance_granularity__succeeded)
                {
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
                }
              else
                {
                  MR_Word transform_hlds__distance_granularity__GoalExpr_96;
                  MR_Word transform_hlds__distance_granularity__SubGoal_97;

                  {
                    transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_101, &transform_hlds__distance_granularity__SubGoal_97, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                  }
                  {
                    transform_hlds__distance_granularity__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_53));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_97));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_96));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__distance_granularity__Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Cond0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Then0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
              MR_Word transform_hlds__distance_granularity__Else0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 4)));
              MR_Word transform_hlds__distance_granularity__Cond_59;
              MR_Word transform_hlds__distance_granularity__Then_60;
              MR_Word transform_hlds__distance_granularity__Else_61;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71;
              MR_Word transform_hlds__distance_granularity__GoalExpr_103;

              {
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Cond0_56, &transform_hlds__distance_granularity__Cond_59, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__distance_granularity__Distance_16);
              }
              {
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Then0_57, &transform_hlds__distance_granularity__Then_60, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__Distance_16);
              }
              {
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Else0_58, &transform_hlds__distance_granularity__Else_61, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_55));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_59));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_60));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_103));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.update_original_predicate_goal\'/9", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
          }
        else
          {
            MR_Integer transform_hlds__distance_granularity__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__ProcInfo0_28;
            MR_Word transform_hlds__distance_granularity__Body0_29;
            MR_Word transform_hlds__distance_granularity__Body_30;
            MR_Word transform_hlds__distance_granularity__ProcInfo1_31;
            MR_Word transform_hlds__distance_granularity__ProcInfo2_32;
            MR_Word transform_hlds__distance_granularity__ProcInfo3_33;
            MR_Word transform_hlds__distance_granularity__ProcInfo_34;
            MR_Word transform_hlds__distance_granularity__V_39_39;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;

            {
              transform_hlds__distance_granularity__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_21));
            }
            {
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__distance_granularity__V_39_39, &transform_hlds__distance_granularity__ProcInfo0_28);
            }
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__Body0_29);
            }
            {
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Body0_29, &transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__ProcInfo1_31, transform_hlds__distance_granularity__HeadVar__3_3);
            }
            {
              hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__ProcInfo1_31, &transform_hlds__distance_granularity__ProcInfo2_32);
            }
            {
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_32, &transform_hlds__distance_granularity__ProcInfo3_33);
            }
            {
              check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_33, &transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_22;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;

              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
  MR_String transform_hlds__distance_granularity__Prefix_5,
  MR_Integer transform_hlds__distance_granularity__Distance_6,
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_String transform_hlds__distance_granularity__PredIdStr_9;
    MR_String transform_hlds__distance_granularity__V_23_23;
    MR_Word transform_hlds__distance_granularity__V_29_29;
    MR_String transform_hlds__distance_granularity__V_31_31;
    MR_String transform_hlds__distance_granularity__V_32_32;
    MR_String transform_hlds__distance_granularity__V_39_39;
    MR_String transform_hlds__distance_granularity__V_41_41;
    MR_String transform_hlds__distance_granularity__V_42_42;
    MR_String transform_hlds__distance_granularity__V_49_49;
    MR_String transform_hlds__distance_granularity__V_51_51;
    MR_String transform_hlds__distance_granularity__V_52_52;

    {
      mercury__string__int_to_string_2_p_0(transform_hlds__distance_granularity__Distance_6, &transform_hlds__distance_granularity__PredIdStr_9);
    }
    transform_hlds__distance_granularity__V_29_29 = (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[3];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__PredIdStr_9, &transform_hlds__distance_granularity__V_23_23);
    }
    {
      transform_hlds__distance_granularity__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_23_23);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10, &transform_hlds__distance_granularity__V_32_32);
    }
    {
      transform_hlds__distance_granularity__V_39_39 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_32_32, transform_hlds__distance_granularity__V_31_31);
    }
    {
      transform_hlds__distance_granularity__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_39_39);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, (MR_String) "pred", &transform_hlds__distance_granularity__V_42_42);
    }
    {
      transform_hlds__distance_granularity__V_49_49 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_42_42, transform_hlds__distance_granularity__V_41_41);
    }
    {
      transform_hlds__distance_granularity__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_49_49);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__Prefix_5, &transform_hlds__distance_granularity__V_52_52);
    }
    {
      *transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_52_52, transform_hlds__distance_granularity__V_51_51);
    }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
          }
        else
          {
            MR_Word transform_hlds__distance_granularity__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 2)));
            MR_Word transform_hlds__distance_granularity__Goal_46;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
            MR_Word transform_hlds__distance_granularity__V_61_61;
            MR_Word transform_hlds__distance_granularity__V_47_47;

            {
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_45, &transform_hlds__distance_granularity__Goal_46, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59, &transform_hlds__distance_granularity__V_47_47);
            }
            {
              transform_hlds__distance_granularity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_43));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_44));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_46));
            }
            {
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_61_61));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_33;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;

              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
          }
        else
          {
            MR_Word transform_hlds__distance_granularity__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__Goal_43;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;
            MR_Word transform_hlds__distance_granularity__V_57_57;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
            MR_Word transform_hlds__distance_granularity__V_44_44;

            {
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_32, &transform_hlds__distance_granularity__Goal_43, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56, &transform_hlds__distance_granularity__V_44_44);
            }
            {
              transform_hlds__distance_granularity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_43));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_57_57, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_33;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;

              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2)));
        MR_Word transform_hlds__distance_granularity__Goals0_18;
        MR_Word transform_hlds__distance_granularity__V_72_72;

        if (transform_hlds__distance_granularity__succeeded)
          {
            transform_hlds__distance_granularity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_72_72 == (MR_Integer) 0);
          }
        if (transform_hlds__distance_granularity__succeeded)
          {
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Integer transform_hlds__distance_granularity__Length_19;

            {
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 > transform_hlds__distance_granularity__Length_19);
            if (transform_hlds__distance_granularity__succeeded)
              {
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68;
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
              }
            else
              {
                MR_Word transform_hlds__distance_granularity__Goal0_20;
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
                MR_Word transform_hlds__distance_granularity__V_27_27;

                {
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__distance_granularity__succeeded)
                  {
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
                    {
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
                    if (transform_hlds__distance_granularity__succeeded)
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
                    if (transform_hlds__distance_granularity__succeeded)
                      {
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
                        MR_Word transform_hlds__distance_granularity__Var_29;
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
                        MR_Word transform_hlds__distance_granularity__VarResult_31;
                        MR_Word transform_hlds__distance_granularity__MinusPredId_32;
                        MR_Integer transform_hlds__distance_granularity__MinusProcId_33;
                        MR_Word transform_hlds__distance_granularity__MinusCallArgs_34;
                        MR_Word transform_hlds__distance_granularity__MinusCallSymName_36;
                        MR_Word transform_hlds__distance_granularity__ConsId_37;
                        MR_Word transform_hlds__distance_granularity__Rhs_38;
                        MR_Word transform_hlds__distance_granularity__MinusCallUnifyContext_39;
                        MR_Word transform_hlds__distance_granularity__DecrementGoalExpr_40;
                        MR_Word transform_hlds__distance_granularity__NonLocals_41;
                        MR_Word transform_hlds__distance_granularity__VarResultDelta_42;
                        MR_Word transform_hlds__distance_granularity__VarDelta_43;
                        MR_Word transform_hlds__distance_granularity__InstMapDeltaDecrement_44;
                        MR_Word transform_hlds__distance_granularity__FirstGoal_47;
                        MR_Word transform_hlds__distance_granularity__FirstGoalInfo_49;
                        MR_Word transform_hlds__distance_granularity__Context_50;
                        MR_Word transform_hlds__distance_granularity__DecrementGoalInfo_51;
                        MR_Word transform_hlds__distance_granularity__DecrementGoal_52;
                        MR_Word transform_hlds__distance_granularity__CallArgs_53;
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_55;
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_57;
                        MR_Word transform_hlds__distance_granularity__GoalInfo_58;
                        MR_Word transform_hlds__distance_granularity__Goal_59;
                        MR_Word transform_hlds__distance_granularity__Goals1_60;
                        MR_Word transform_hlds__distance_granularity__StartGoals_61;
                        MR_Word transform_hlds__distance_granularity__EndGoals_62;
                        MR_Word transform_hlds__distance_granularity__GoalsAppend0_63;
                        MR_Word transform_hlds__distance_granularity__GoalsAppend1_64;
                        MR_Word transform_hlds__distance_granularity__Goals_65;
                        MR_Word transform_hlds__distance_granularity__V_73_73;
                        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75;
                        MR_Word transform_hlds__distance_granularity__V_77_77;
                        MR_Word transform_hlds__distance_granularity__V_86_86;
                        MR_Word transform_hlds__distance_granularity__V_87_87;
                        MR_Word transform_hlds__distance_granularity__V_93_93;
                        MR_Word transform_hlds__distance_granularity__V_95_95;
                        MR_Word transform_hlds__distance_granularity__V_96_96;
                        MR_Word transform_hlds__distance_granularity__V_98_98;
                        MR_Word transform_hlds__distance_granularity__V_119_119;
                        MR_Word transform_hlds__distance_granularity__V_120_120;
                        MR_Integer transform_hlds__distance_granularity__V_127_127;
                        MR_Word transform_hlds__distance_granularity__V_129_129;
                        MR_Word transform_hlds__distance_granularity__V_131_131;
                        MR_Box transform_hlds__distance_granularity__conv1_FirstGoal_47;
                        MR_Word transform_hlds__distance_granularity__V_48_48;

                        {
                          transform_hlds__distance_granularity__V_73_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
                        {
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_73_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75);
                        }
                        {
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, (MR_Integer) 1, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
                        {
                          transform_hlds__distance_granularity__V_77_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
                        {
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__VarResult_31, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79);
                        }
                        {
                          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__distance_granularity__ModuleInfo_16, (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[2], (MR_String) "minus", (MR_Integer) 1, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MinusPredId_32, &transform_hlds__distance_granularity__MinusProcId_33);
                        }
                        {
                          transform_hlds__distance_granularity__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__distance_granularity__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_87_87));
                        }
                        {
                          transform_hlds__distance_granularity__MinusCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
                        }
                        transform_hlds__distance_granularity__MinusCallSymName_36 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_1[4]);
                        {
                          transform_hlds__distance_granularity__V_93_93 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                        }
                        {
                          transform_hlds__distance_granularity__ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_93_93));
                        }
                        {
                          transform_hlds__distance_granularity__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__distance_granularity__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_96_96));
                        }
                        {
                          transform_hlds__distance_granularity__Rhs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 0) = ((MR_Box) (transform_hlds__distance_granularity__ConsId_37));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 2) = ((MR_Box) (transform_hlds__distance_granularity__V_95_95));
                        }
                        {
                          transform_hlds__distance_granularity__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 1) = ((MR_Box) (transform_hlds__distance_granularity__Rhs_38));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 2) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[5]));
                        }
                        {
                          transform_hlds__distance_granularity__MinusCallUnifyContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallUnifyContext_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_98_98));
                        }
                        {
                          transform_hlds__distance_granularity__DecrementGoalExpr_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__MinusPredId_32));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusProcId_33));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 2) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallArgs_34));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 3) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 4) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallUnifyContext_39));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 5) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
                        }
                        {
                          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__MinusCallArgs_34, &transform_hlds__distance_granularity__NonLocals_41);
                        }
                        {
                          transform_hlds__distance_granularity__VarResultDelta_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[0])));
                        }
                        {
                          transform_hlds__distance_granularity__VarDelta_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_2[0])));
                        }
                        {
                          transform_hlds__distance_granularity__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResultDelta_42));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__distance_granularity__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarDelta_43));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_120_120));
                        }
                        {
                          transform_hlds__distance_granularity__InstMapDeltaDecrement_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__distance_granularity__V_119_119);
                        }
                        {
                          mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, (MR_Integer) 1, &transform_hlds__distance_granularity__conv1_FirstGoal_47);
                        }
                        transform_hlds__distance_granularity__FirstGoal_47 = ((MR_Word) transform_hlds__distance_granularity__conv1_FirstGoal_47);
                        transform_hlds__distance_granularity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 0)));
                        transform_hlds__distance_granularity__FirstGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 1)));
                        {
                          transform_hlds__distance_granularity__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__distance_granularity__FirstGoalInfo_49);
                        }
                        {
                          hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__distance_granularity__NonLocals_41, transform_hlds__distance_granularity__InstMapDeltaDecrement_44, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__distance_granularity__Context_50, &transform_hlds__distance_granularity__DecrementGoalInfo_51);
                        }
                        {
                          transform_hlds__distance_granularity__DecrementGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalExpr_40));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 1) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalInfo_51));
                        }
                        {
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_87_87, &transform_hlds__distance_granularity__CallArgs_53);
                        }
                        {
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_53));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
                        }
                        {
                          transform_hlds__distance_granularity__InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
                        {
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_55, &transform_hlds__distance_granularity__InstMapDelta_57);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_57, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_58);
                        }
                        {
                          transform_hlds__distance_granularity__Goal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_58));
                        }
                        {
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, ((MR_Box) (transform_hlds__distance_granularity__Goal_59)), &transform_hlds__distance_granularity__Goals1_60);
                        }
                        transform_hlds__distance_granularity__V_127_127 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 - (MR_Integer) 1);
                        {
                          mercury__list__det_split_list_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__V_127_127, transform_hlds__distance_granularity__Goals1_60, &transform_hlds__distance_granularity__StartGoals_61, &transform_hlds__distance_granularity__EndGoals_62);
                        }
                        {
                          transform_hlds__distance_granularity__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 0) = ((MR_Box) (transform_hlds__distance_granularity__UnifyGoal_30));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__StartGoals_61, transform_hlds__distance_granularity__V_129_129, &transform_hlds__distance_granularity__GoalsAppend0_63);
                        }
                        {
                          transform_hlds__distance_granularity__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoal_52));
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend0_63, transform_hlds__distance_granularity__V_131_131, &transform_hlds__distance_granularity__GoalsAppend1_64);
                        }
                        {
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend1_64, transform_hlds__distance_granularity__EndGoals_62, &transform_hlds__distance_granularity__Goals_65);
                        }
                        {
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_65));
                        }
                      }
                    else
                      {
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
                      }
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 3);
                  }
                else
                  {
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 1);
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;

                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70;
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68;
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66;
                }
                continue;
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_else2\'/10", (MR_String) "unexpected goal type");
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 0)));
    MR_Word transform_hlds__distance_granularity__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 1)));
    MR_Word transform_hlds__distance_granularity__GoalExpr_17;
    MR_Word transform_hlds__distance_granularity__Goal0_19;
    MR_Integer transform_hlds__distance_granularity__V_18_18;
    MR_Word transform_hlds__distance_granularity__Goals_31;
    MR_Word transform_hlds__distance_granularity__ConjInfo0_32;
    MR_Word transform_hlds__distance_granularity__V_41_41;
    MR_Word transform_hlds__distance_granularity__Type_30;

    {
      transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(transform_hlds__distance_granularity__GoalExpr0_15, &transform_hlds__distance_granularity__GoalExpr_17, (MR_Integer) 1, &transform_hlds__distance_granularity__V_18_18, transform_hlds__distance_granularity__GranularityVar_10, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__ModuleInfo_13, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);
    }
    {
      transform_hlds__distance_granularity__Goal0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_17));
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_16));
    }
    transform_hlds__distance_granularity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 0)));
    transform_hlds__distance_granularity__ConjInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 1)));
    transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (transform_hlds__distance_granularity__succeeded)
      {
        transform_hlds__distance_granularity__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 1)));
        transform_hlds__distance_granularity__Goals_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 2)));
        {
          MR_Word transform_hlds__distance_granularity__NonLocals_33;
          MR_Word transform_hlds__distance_granularity__InstMapDelta_34;
          MR_Word transform_hlds__distance_granularity__Detism_35;
          MR_Word transform_hlds__distance_granularity__Purity_36;
          MR_Word transform_hlds__distance_granularity__ConjInfo1_37;
          MR_Word transform_hlds__distance_granularity__ConjInfo2_38;
          MR_Word transform_hlds__distance_granularity__ConjInfo3_39;
          MR_Word transform_hlds__distance_granularity__ConjInfo_40;

          {
            hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__NonLocals_33);
          }
          {
            hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__InstMapDelta_34);
          }
          {
            hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Detism_35);
          }
          {
            hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Purity_36);
          }
          {
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_33, transform_hlds__distance_granularity__ConjInfo0_32, &transform_hlds__distance_granularity__ConjInfo1_37);
          }
          {
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_34, transform_hlds__distance_granularity__ConjInfo1_37, &transform_hlds__distance_granularity__ConjInfo2_38);
          }
          {
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_35, transform_hlds__distance_granularity__ConjInfo2_38, &transform_hlds__distance_granularity__ConjInfo3_39);
          }
          {
            hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_36, transform_hlds__distance_granularity__ConjInfo3_39, &transform_hlds__distance_granularity__ConjInfo_40);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_40));
          }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
          return;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
  MR_Integer transform_hlds__distance_granularity__Distance_16,
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__Var_20;
    MR_Word transform_hlds__distance_granularity__UnifyGoal_21;
    MR_Word transform_hlds__distance_granularity__V_34_34;
    MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

    {
      transform_hlds__distance_granularity__V_34_34 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36);
    }
    {
      hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_20, (MR_Integer) 0, &transform_hlds__distance_granularity__UnifyGoal_21);
    }
    if ((transform_hlds__distance_granularity__MaybeGranularityVar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.create_if_then_else_goal\'/10", (MR_String) "MaybeGranularityVar = no");
          return;
        }
      }
    else
      {
        MR_Word transform_hlds__distance_granularity__GranularityVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MaybeGranularityVar_13, (MR_Integer) 0)));
        MR_Word transform_hlds__distance_granularity__Test_23;
        MR_Word transform_hlds__distance_granularity__Cond_24;
        MR_Word transform_hlds__distance_granularity__Then_26;
        MR_Word transform_hlds__distance_granularity__Else0_27;
        MR_Word transform_hlds__distance_granularity__Else_28;
        MR_Word transform_hlds__distance_granularity__NonLocals0_29;
        MR_Word transform_hlds__distance_granularity__NonLocals_30;
        MR_Word transform_hlds__distance_granularity__IfThenElseInfo_31;
        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
        MR_Word transform_hlds__distance_granularity__V_48_48;
        MR_Word transform_hlds__distance_granularity__V_51_51;
        MR_Word transform_hlds__distance_granularity__GoalExpr0_64;
        MR_Word transform_hlds__distance_granularity__GoalExpr_66;
        MR_Word transform_hlds__distance_granularity__Goal0_68;
        MR_Integer transform_hlds__distance_granularity__V_67_67;
        MR_Word transform_hlds__distance_granularity__Goals_76;
        MR_Word transform_hlds__distance_granularity__ConjInfo0_77;
        MR_Word transform_hlds__distance_granularity__V_86_86;
        MR_Word transform_hlds__distance_granularity__Type_75;

        {
          hlds__make_goal__make_simple_test_5_p_0(transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__Var_20, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_3[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Test_23);
        }
        {
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_21, transform_hlds__distance_granularity__Test_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Cond_24);
        }
        {
          transform_hlds__distance_granularity__GoalExpr0_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
        }
        {
          transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(transform_hlds__distance_granularity__GoalExpr0_64, &transform_hlds__distance_granularity__GoalExpr_66, (MR_Integer) 1, &transform_hlds__distance_granularity__V_67_67, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__Distance_16, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
        }
        {
          transform_hlds__distance_granularity__Goal0_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_66));
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
        }
        transform_hlds__distance_granularity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 0)));
        transform_hlds__distance_granularity__ConjInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 1)));
        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (transform_hlds__distance_granularity__succeeded)
          {
            transform_hlds__distance_granularity__Type_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 1)));
            transform_hlds__distance_granularity__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 2)));
            {
              MR_Word transform_hlds__distance_granularity__NonLocals_78;
              MR_Word transform_hlds__distance_granularity__InstMapDelta_79;
              MR_Word transform_hlds__distance_granularity__Detism_80;
              MR_Word transform_hlds__distance_granularity__Purity_81;
              MR_Word transform_hlds__distance_granularity__ConjInfo1_82;
              MR_Word transform_hlds__distance_granularity__ConjInfo2_83;
              MR_Word transform_hlds__distance_granularity__ConjInfo3_84;
              MR_Word transform_hlds__distance_granularity__ConjInfo_85;

              {
                hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__NonLocals_78);
              }
              {
                hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__InstMapDelta_79);
              }
              {
                hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Detism_80);
              }
              {
                hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Purity_81);
              }
              {
                hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_78, transform_hlds__distance_granularity__ConjInfo0_77, &transform_hlds__distance_granularity__ConjInfo1_82);
              }
              {
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_79, transform_hlds__distance_granularity__ConjInfo1_82, &transform_hlds__distance_granularity__ConjInfo2_83);
              }
              {
                hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_80, transform_hlds__distance_granularity__ConjInfo2_83, &transform_hlds__distance_granularity__ConjInfo3_84);
              }
              {
                hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_81, transform_hlds__distance_granularity__ConjInfo3_84, &transform_hlds__distance_granularity__ConjInfo_85);
              }
              {
                transform_hlds__distance_granularity__Then_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_85));
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
              return;
            }
          }
        {
          transform_hlds__distance_granularity__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
        }
        {
          transform_hlds__distance_granularity__Else0_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
        }
        {
          transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(transform_hlds__distance_granularity__Else0_27, &transform_hlds__distance_granularity__Else_28, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__ModuleInfo_19, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33);
        }
        {
          transform_hlds__distance_granularity__NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__ConjInfo_12);
        }
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__NonLocals0_29, &transform_hlds__distance_granularity__NonLocals_30);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_30, transform_hlds__distance_granularity__ConjInfo_12, &transform_hlds__distance_granularity__IfThenElseInfo_31);
        }
        {
          transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_24));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_26));
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__distance_granularity__IfThenElseGoal_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_51_51));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__IfThenElseInfo_31));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
          }
        else
          {
            MR_Word transform_hlds__distance_granularity__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__Goal_52;
            MR_Word transform_hlds__distance_granularity__IsRecursiveCall_53;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
            MR_Word transform_hlds__distance_granularity__V_67_67;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

            {
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_39, &transform_hlds__distance_granularity__Goal_52, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__distance_granularity__HeadVar__12_12, transform_hlds__distance_granularity__HeadVar__13_13, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66, &transform_hlds__distance_granularity__IsRecursiveCall_53);
            }
            {
              transform_hlds__distance_granularity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_52));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_67_67, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68);
            }
            switch (transform_hlds__distance_granularity__IsRecursiveCall_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
                break;
              case (MR_Integer) 1:
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = (MR_Integer) 1;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_40;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16;
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14;
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__IsInParallelConj_22 == (MR_Integer) 1);
    MR_Word transform_hlds__distance_granularity__CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 0)));
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 1)));
    MR_Word transform_hlds__distance_granularity__CallArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 2)));
    MR_Word transform_hlds__distance_granularity__CallBuiltin_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 3)));
    MR_Word transform_hlds__distance_granularity__CallUnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 4)));
    MR_Word transform_hlds__distance_granularity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 5)));

    if (transform_hlds__distance_granularity__succeeded)
      {
        {
          transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_25, transform_hlds__distance_granularity__CallerPredId_16);
        }
        if (transform_hlds__distance_granularity__succeeded)
          transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_26 == transform_hlds__distance_granularity__CallerProcId_19);
      }
    if (transform_hlds__distance_granularity__succeeded)
      {
        if ((transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__distance_granularity__GranularityVar_32;
            MR_Word transform_hlds__distance_granularity__ArgsModes0_33;
            MR_Word transform_hlds__distance_granularity__HeadVars0_34;
            MR_Word transform_hlds__distance_granularity__ArgsModes_35;
            MR_Word transform_hlds__distance_granularity__HeadVars_36;
            MR_Word transform_hlds__distance_granularity__V_45_45;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
            MR_Word transform_hlds__distance_granularity__V_49_49;
            MR_Word transform_hlds__distance_granularity__V_50_50;
            MR_Word transform_hlds__distance_granularity__V_52_52;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54;

            {
              transform_hlds__distance_granularity__V_45_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
            {
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__GranularityVar_32, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__ArgsModes0_33);
            }
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__HeadVars0_34);
            }
            {
              transform_hlds__distance_granularity__V_50_50 = parse_tree__prog_mode__in_mode_0_f_0();
            }
            {
              transform_hlds__distance_granularity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_50_50));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__distance_granularity__ArgsModes0_33, transform_hlds__distance_granularity__V_49_49, &transform_hlds__distance_granularity__ArgsModes_35);
            }
            {
              transform_hlds__distance_granularity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__HeadVars0_34, transform_hlds__distance_granularity__V_52_52, &transform_hlds__distance_granularity__HeadVars_36);
            }
            {
              hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__distance_granularity__ArgsModes_35, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54);
            }
            {
              hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__distance_granularity__HeadVars_36, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40);
            }
          }
        else
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_17));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallerProcId_19));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_28));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__distance_granularity__CallUnifyContext_29));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_18));
        }
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 1;
      }
    else
      {
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 0;
        *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
        *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37;
      }
    *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41;
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
  MR_Integer transform_hlds__distance_granularity__Distance_23,
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
    MR_Word transform_hlds__distance_granularity__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__distance_granularity__SubGoal0_61 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27), (MR_Integer) 0);
          MR_Word transform_hlds__distance_granularity__SubGoal_62;
          MR_Word transform_hlds__distance_granularity__GoalExpr_140;

          {
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_61, &transform_hlds__distance_granularity__SubGoal_62, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
          transform_hlds__distance_granularity__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_62);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_140));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
          *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__distance_granularity__GoalExpr_40;

          {
            transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(transform_hlds__distance_granularity__GoalExpr0_27, &transform_hlds__distance_granularity__GoalExpr_40, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_40));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__distance_granularity__Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Goals_55;
              MR_Word transform_hlds__distance_granularity__ContainRecursiveCalls_56;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;

              {
                transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(transform_hlds__distance_granularity__Goals0_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 1, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, (MR_Integer) 0, &transform_hlds__distance_granularity__ContainRecursiveCalls_56);
              }
              switch (transform_hlds__distance_granularity__Type_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  switch (transform_hlds__distance_granularity__ContainRecursiveCalls_56) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
                        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__GoalInfo_28, *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__distance_granularity__GoalExpr_133;

                    {
                      transform_hlds__distance_granularity__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_55));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_133));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
                    }
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
                  }
                  break;
              }
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__distance_granularity__GoalExpr_136;
              MR_Word transform_hlds__distance_granularity__Goals0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Goals_138;

              {
                transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(transform_hlds__distance_granularity__Goals0_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_138, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_138));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_136));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
              }
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__distance_granularity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Cases0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
              MR_Word transform_hlds__distance_granularity__Cases_60;
              MR_Word transform_hlds__distance_granularity__GoalExpr_139;

              {
                transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(transform_hlds__distance_granularity__Cases0_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_60, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_57));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_58));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_139));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
              }
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__distance_granularity__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__V_100_100;
              MR_Word transform_hlds__distance_granularity__V_64_64;

              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__distance_granularity__succeeded)
                {
                  transform_hlds__distance_granularity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 1)));
                  transform_hlds__distance_granularity__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 2)));
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_100_100 == (MR_Integer) 1);
                }
              if (transform_hlds__distance_granularity__succeeded)
                {
                  *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
                  *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
                }
              else
                {
                  MR_Word transform_hlds__distance_granularity__GoalExpr_141;
                  MR_Word transform_hlds__distance_granularity__SubGoal_142;

                  {
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_146, &transform_hlds__distance_granularity__SubGoal_142, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
                  }
                  {
                    transform_hlds__distance_granularity__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_63));
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_142));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_141));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__distance_granularity__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
              MR_Word transform_hlds__distance_granularity__Cond0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
              MR_Word transform_hlds__distance_granularity__Then0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
              MR_Word transform_hlds__distance_granularity__Else0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 4)));
              MR_Word transform_hlds__distance_granularity__Cond_69;
              MR_Word transform_hlds__distance_granularity__Then_71;
              MR_Word transform_hlds__distance_granularity__Else_73;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94;
              MR_Word transform_hlds__distance_granularity__GoalExpr_148;
              MR_Word transform_hlds__distance_granularity__V_70_70;
              MR_Word transform_hlds__distance_granularity__V_72_72;
              MR_Word transform_hlds__distance_granularity__V_74_74;

              {
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Cond0_66, &transform_hlds__distance_granularity__Cond_69, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__V_70_70);
              }
              {
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Then0_67, &transform_hlds__distance_granularity__Then_71, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, &transform_hlds__distance_granularity__V_72_72);
              }
              {
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Else0_68, &transform_hlds__distance_granularity__Else_73, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, &transform_hlds__distance_granularity__V_74_74);
              }
              {
                transform_hlds__distance_granularity__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_65));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_69));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_71));
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_148));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
              }
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_goal\'/15", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
            *transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
          }
        else
          {
            MR_Integer transform_hlds__distance_granularity__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__ProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__ProcInfo0_34;
            MR_Word transform_hlds__distance_granularity__HasParallelConj_35;
            MR_Word transform_hlds__distance_granularity__V_51_51;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;

            {
              transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_26));
            }
            {
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__distance_granularity__V_51_51, &transform_hlds__distance_granularity__ProcInfo0_34);
            }
            {
              hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__HasParallelConj_35);
            }
            switch (transform_hlds__distance_granularity__HasParallelConj_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
                  transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
                  transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__distance_granularity__Body_36;
                  MR_Word transform_hlds__distance_granularity__BodyClone_37;
                  MR_Word transform_hlds__distance_granularity__ProcInfo1_38;
                  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_39;
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
                  MR_Word transform_hlds__distance_granularity__V_40_40;

                  {
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__Body_36);
                  }
                  {
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Body_36, &transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__ProcInfo1_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, transform_hlds__distance_granularity__HeadVar__3_3, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MaybeGranularityVar_39, &transform_hlds__distance_granularity__V_40_40);
                  }
                  if ((transform_hlds__distance_granularity__MaybeGranularityVar_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
                      transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
                    }
                  else
                    {
                      MR_Word transform_hlds__distance_granularity__ProcInfo2_42;
                      MR_Word transform_hlds__distance_granularity__ProcInfo3_43;
                      MR_Word transform_hlds__distance_granularity__ProcInfo_44;

                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = (MR_Integer) 1;
                      {
                        hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__ProcInfo1_38, &transform_hlds__distance_granularity__ProcInfo2_42);
                      }
                      {
                        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_42, &transform_hlds__distance_granularity__ProcInfo3_43);
                      }
                      {
                        check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_43, &transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58);
                      }
                      {
                        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59);
                      }
                    }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_27;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;

              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
              transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8;
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__distance_granularity__succeeded;

        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__distance_granularity__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__distance_granularity__PredIdList_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__distance_granularity__PredInfo_13;
            MR_Word transform_hlds__distance_granularity__PredicateTable_14;
            MR_Word transform_hlds__distance_granularity__NewPredId_15;
            MR_Word transform_hlds__distance_granularity__ModuleName_16;
            MR_Word transform_hlds__distance_granularity__NewPredIdGranularity_19;
            MR_String transform_hlds__distance_granularity__PredName0_20;
            MR_Word transform_hlds__distance_granularity__NewCallSymName_21;
            MR_Word transform_hlds__distance_granularity__ProcIds_22;
            MR_Word transform_hlds__distance_granularity__PredInfoClone0_23;
            MR_Word transform_hlds__distance_granularity__Specialized_24;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__distance_granularity__PredId_9, &transform_hlds__distance_granularity__PredInfo_13);
            }
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__PredicateTable_14);
            }
            {
              hlds__pred_table__get_next_pred_id_2_p_0(transform_hlds__distance_granularity__PredicateTable_14, &transform_hlds__distance_granularity__NewPredId_15);
            }
            {
              transform_hlds__distance_granularity__ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
            {
              transform_hlds__distance_granularity__NewPredIdGranularity_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__2_2));
            }
            {
              transform_hlds__distance_granularity__PredName0_20 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
            {
              parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__distance_granularity__ModuleName_16, (MR_String) "DistanceGranularityFor", (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_3[0]), transform_hlds__distance_granularity__PredName0_20, transform_hlds__distance_granularity__NewPredIdGranularity_19, &transform_hlds__distance_granularity__NewCallSymName_21);
            }
            {
              transform_hlds__distance_granularity__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
            {
              transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoClone0_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Specialized_24, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43);
            }
            switch (transform_hlds__distance_granularity__Specialized_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
                break;
              case (MR_Integer) 1:
                {
                  MR_String transform_hlds__distance_granularity__PredName_25;
                  MR_Word transform_hlds__distance_granularity__PredInfoClone1_26;
                  MR_Word transform_hlds__distance_granularity__PredInfoClone2_27;
                  MR_Integer transform_hlds__distance_granularity__Arity_28;
                  MR_Word transform_hlds__distance_granularity__PredInfoClone3_29;
                  MR_Word transform_hlds__distance_granularity__ArgTypes0_30;
                  MR_Word transform_hlds__distance_granularity__ArgTypes_31;
                  MR_Word transform_hlds__distance_granularity__Tvarset_32;
                  MR_Word transform_hlds__distance_granularity__ExistqTvars_33;
                  MR_Word transform_hlds__distance_granularity__PredInfoClone_34;
                  MR_Word transform_hlds__distance_granularity__PredicateTable0_35;
                  MR_Word transform_hlds__distance_granularity__PredicateTable1_37;
                  MR_Word transform_hlds__distance_granularity__PredInfoUpdated_38;
                  MR_Integer transform_hlds__distance_granularity__V_45_45;
                  MR_Word transform_hlds__distance_granularity__V_47_47;
                  MR_Word transform_hlds__distance_granularity__V_48_48;
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50;
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51;
                  MR_Word transform_hlds__distance_granularity__V_36_36;

                  {
                    transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0((MR_String) "DistanceGranularityFor", transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__PredName0_20, &transform_hlds__distance_granularity__PredName_25);
                  }
                  {
                    hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__distance_granularity__PredName_25, transform_hlds__distance_granularity__PredInfoClone0_23, &transform_hlds__distance_granularity__PredInfoClone1_26);
                  }
                  {
                    hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__distance_granularity__PredInfoClone1_26, &transform_hlds__distance_granularity__PredInfoClone2_27);
                  }
                  {
                    transform_hlds__distance_granularity__Arity_28 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__distance_granularity__PredInfoClone2_27);
                  }
                  transform_hlds__distance_granularity__V_45_45 = (transform_hlds__distance_granularity__Arity_28 + (MR_Integer) 1);
                  {
                    hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__distance_granularity__V_45_45, transform_hlds__distance_granularity__PredInfoClone2_27, &transform_hlds__distance_granularity__PredInfoClone3_29);
                  }
                  {
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ArgTypes0_30);
                  }
                  {
                    transform_hlds__distance_granularity__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    transform_hlds__distance_granularity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
                    MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__distance_granularity__ArgTypes0_30, transform_hlds__distance_granularity__V_47_47, &transform_hlds__distance_granularity__ArgTypes_31);
                  }
                  {
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__Tvarset_32);
                  }
                  {
                    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ExistqTvars_33);
                  }
                  {
                    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__distance_granularity__Tvarset_32, transform_hlds__distance_granularity__ExistqTvars_33, transform_hlds__distance_granularity__ArgTypes_31, transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__PredInfoClone_34);
                  }
                  {
                    hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__PredicateTable0_35);
                  }
                  {
                    hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__distance_granularity__PredInfoClone_34, &transform_hlds__distance_granularity__V_36_36, transform_hlds__distance_granularity__PredicateTable0_35, &transform_hlds__distance_granularity__PredicateTable1_37);
                  }
                  {
                    hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__distance_granularity__PredicateTable1_37, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50);
                  }
                  {
                    transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51);
                  }
                  {
                    hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52);
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__PredIdList_10;
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__distance_granularity__control_distance_granularity_3_p_0(
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8,
  MR_Integer transform_hlds__distance_granularity__Distance_5)
{
  {
    MR_bool transform_hlds__distance_granularity__succeeded;
    MR_Word transform_hlds__distance_granularity__PredIds_6;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__distance_granularity__PredIds_6);
    }
    {
      transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(transform_hlds__distance_granularity__PredIds_6, transform_hlds__distance_granularity__Distance_5, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8);
    }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.distance_granularity. */
