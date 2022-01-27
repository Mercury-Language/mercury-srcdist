/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 551 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 551 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 551 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 551 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45);

#line 1027 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1027 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1027 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1027 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1027 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 1007 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1007 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1007 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1007 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1007 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 954 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 954 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 954 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 954 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 954 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 865 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 865 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 865 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 865 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 865 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 840 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 840 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 840 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 840 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9);

#line 792 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 792 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 792 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 770 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 770 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 770 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 657 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 657 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 657 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 657 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 657 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 657 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71);

#line 645 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 645 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 645 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 645 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);

#line 495 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 495 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 495 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 495 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 495 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19);

#line 460 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 460 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 460 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17);

#line 405 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 405 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24);

#line 300 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 300 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 300 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);

#line 256 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 256 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11);

#line 186 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
#line 186 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 186 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
#line 186 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
#line 186 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4);


static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_2[1][4];

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[3][1];

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

static /* final */ const MR_Box transform_hlds__distance_granularity_scalar_common_3[3][1] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 551 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 551 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 551 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 551 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 551 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 551 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45)
#line 551 "distance_granularity.m"
{
#line 615 "distance_granularity.m"
  while (MR_TRUE)
#line 615 "distance_granularity.m"
    {
#line 615 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 615 "distance_granularity.m"
      {
#line 615 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 615 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 557 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_46_46;

#line 557 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 557 "distance_granularity.m"
          {
#line 557 "distance_granularity.m"
            transform_hlds__distance_granularity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 1)));
#line 557 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 2)));
#line 557 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_46_46 == (MR_Integer) 1);
#line 557 "distance_granularity.m"
          }
#line 615 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 558 "distance_granularity.m"
          {
#line 558 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 558 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 558 "distance_granularity.m"
            {
#line 558 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 559 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 > transform_hlds__distance_granularity__Length_19);
#line 561 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 560 "distance_granularity.m"
              {
#line 560 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 560 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42;
#line 560 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 560 "distance_granularity.m"
              }
#line 561 "distance_granularity.m"
            else
#line 562 "distance_granularity.m"
              {
#line 562 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 562 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 562 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 562 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;
#line 562 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 562 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 562 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 609 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 609 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 609 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 609 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 609 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 565 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 562 "distance_granularity.m"
                {
#line 562 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 562 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 563 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 563 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 565 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 565 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 565 "distance_granularity.m"
                  {
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 565 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 568 "distance_granularity.m"
                    {
#line 568 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 568 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 568 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 604 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 573 "distance_granularity.m"
                      {
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_31;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MerInst_34;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_36;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_37;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__PlainConj_38;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_39;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_47_47;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_50_50;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_54_54;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_55_55;
#line 573 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_56_56;

#line 572 "distance_granularity.m"
                        {
#line 572 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_47_47 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 572 "distance_granularity.m"
                        {
#line 572 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49);
                        }
#line 574 "distance_granularity.m"
                        {
#line 574 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 577 "distance_granularity.m"
                        {
#line 577 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 577 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "distance_granularity.m"
                        }
#line 577 "distance_granularity.m"
                        {
#line 577 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_50_50, &transform_hlds__distance_granularity__CallArgs_31);
                        }
#line 584 "distance_granularity.m"
                        {
#line 584 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_31));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 584 "distance_granularity.m"
                        }
#line 588 "distance_granularity.m"
                        {
#line 588 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 590 "distance_granularity.m"
                        {
#line 590 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 1) = ((MR_Box) (transform_hlds__distance_granularity__Distance_16));
#line 590 "distance_granularity.m"
                        }
#line 590 "distance_granularity.m"
                        {
#line 590 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_56_56));
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "distance_granularity.m"
                        }
#line 590 "distance_granularity.m"
                        {
#line 590 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_55_55));
#line 590 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "distance_granularity.m"
                        }
#line 589 "distance_granularity.m"
                        {
#line 589 "distance_granularity.m"
                          transform_hlds__distance_granularity__MerInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 1) = ((MR_Box) ((MR_Integer) 0));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_54_54));
#line 589 "distance_granularity.m"
                        }
#line 591 "distance_granularity.m"
                        {
#line 591 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__MerInst_34, transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
                        }
#line 593 "distance_granularity.m"
                        {
#line 593 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_36);
                        }
#line 596 "distance_granularity.m"
                        {
#line 596 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 596 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_36));
#line 596 "distance_granularity.m"
                        }
#line 598 "distance_granularity.m"
                        {
#line 598 "distance_granularity.m"
                          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_30, transform_hlds__distance_granularity__Goal_37, (MR_Integer) 0, &transform_hlds__distance_granularity__PlainConj_38);
                        }
#line 601 "distance_granularity.m"
                        {
#line 601 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, ((MR_Box) (transform_hlds__distance_granularity__PlainConj_38)), &transform_hlds__distance_granularity__Goals_39);
                        }
#line 603 "distance_granularity.m"
                        {
#line 603 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 603 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 603 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 1) = ((MR_Box) ((MR_Integer) 1));
#line 603 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_39));
#line 603 "distance_granularity.m"
                        }
#line 573 "distance_granularity.m"
                      }
#line 604 "distance_granularity.m"
                    else
#line 606 "distance_granularity.m"
                      {
#line 606 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 606 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 606 "distance_granularity.m"
                      }
#line 608 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 565 "distance_granularity.m"
                  }
#line 565 "distance_granularity.m"
                else
#line 610 "distance_granularity.m"
                  {
#line 610 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 610 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 610 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 610 "distance_granularity.m"
                  }
#line 612 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 612 "distance_granularity.m"
                {
#line 612 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 612 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 612 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;

#line 612 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44;
#line 612 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42;
#line 612 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40;
#line 612 "distance_granularity.m"
                }
#line 612 "distance_granularity.m"
                continue;
#line 562 "distance_granularity.m"
              }
#line 558 "distance_granularity.m"
          }
#line 615 "distance_granularity.m"
        else
#line 617 "distance_granularity.m"
          {
#line 617 "distance_granularity.m"
            {
#line 617 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_then2\'/10", (MR_String) "unexpected goal type");
#line 617 "distance_granularity.m"
              return;
            }
#line 617 "distance_granularity.m"
          }
#line 615 "distance_granularity.m"
      }
#line 615 "distance_granularity.m"
      break;
#line 615 "distance_granularity.m"
    }
#line 551 "distance_granularity.m"
}

#line 1027 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1027 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1027 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1027 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1027 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1027 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1027 "distance_granularity.m"
{
#line 1032 "distance_granularity.m"
  while (MR_TRUE)
#line 1032 "distance_granularity.m"
    {
#line 1032 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1032 "distance_granularity.m"
      {
#line 1032 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1032 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "distance_granularity.m"
          {
#line 1033 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1032 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 1032 "distance_granularity.m"
          }
#line 1032 "distance_granularity.m"
        else
#line 1036 "distance_granularity.m"
          {
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 0)));
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 1)));
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 2)));
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_34;
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1036 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_41_41;

#line 1038 "distance_granularity.m"
            {
#line 1038 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_33, &transform_hlds__distance_granularity__Goal_34, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1040 "distance_granularity.m"
            {
#line 1040 "distance_granularity.m"
              transform_hlds__distance_granularity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_31));
#line 1040 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_32));
#line 1040 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_34));
#line 1040 "distance_granularity.m"
            }
#line 1040 "distance_granularity.m"
            {
#line 1040 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 1040 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 1040 "distance_granularity.m"
            }
#line 1041 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1041 "distance_granularity.m"
            {
#line 1041 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_23;
#line 1041 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1041 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;

#line 1041 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1041 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 1041 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1041 "distance_granularity.m"
            }
#line 1041 "distance_granularity.m"
            continue;
#line 1036 "distance_granularity.m"
          }
#line 1032 "distance_granularity.m"
      }
#line 1032 "distance_granularity.m"
      break;
#line 1032 "distance_granularity.m"
    }
#line 1027 "distance_granularity.m"
}

#line 1007 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1007 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1007 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1007 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1007 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1007 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1007 "distance_granularity.m"
{
#line 1011 "distance_granularity.m"
  while (MR_TRUE)
#line 1011 "distance_granularity.m"
    {
#line 1011 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1011 "distance_granularity.m"
      {
#line 1011 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1011 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "distance_granularity.m"
          {
#line 1012 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1011 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 1011 "distance_granularity.m"
          }
#line 1011 "distance_granularity.m"
        else
#line 1016 "distance_granularity.m"
          {
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_31;
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_37_37;
#line 1016 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;

#line 1017 "distance_granularity.m"
            {
#line 1017 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_22, &transform_hlds__distance_granularity__Goal_31, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1019 "distance_granularity.m"
            {
#line 1019 "distance_granularity.m"
              transform_hlds__distance_granularity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_31));
#line 1019 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "distance_granularity.m"
            }
#line 1019 "distance_granularity.m"
            {
#line 1019 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_37_37, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38);
            }
#line 1020 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1020 "distance_granularity.m"
            {
#line 1020 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_23;
#line 1020 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;
#line 1020 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 1020 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1020 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 1020 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1020 "distance_granularity.m"
            }
#line 1020 "distance_granularity.m"
            continue;
#line 1016 "distance_granularity.m"
          }
#line 1011 "distance_granularity.m"
      }
#line 1011 "distance_granularity.m"
      break;
#line 1011 "distance_granularity.m"
    }
#line 1007 "distance_granularity.m"
}

#line 954 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 954 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 954 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 954 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 954 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 954 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 954 "distance_granularity.m"
{
#line 960 "distance_granularity.m"
  {
#line 960 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 0)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 1)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 0)));
#line 960 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 1)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 2)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 3)));
#line 962 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 4)));
#line 962 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 5)));

#line 965 "distance_granularity.m"
    {
#line 965 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_19, transform_hlds__distance_granularity__CallerPredId_11);
    }
#line 965 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 966 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_20 == transform_hlds__distance_granularity__CallerProcId_12);
#line 1000 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 972 "distance_granularity.m"
      {
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Var_25;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__UnifyGoal_26;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallArgs_27;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallExpr_29;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_30;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_31;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo1_32;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo_36;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Call_37;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_42_42;
#line 972 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_45_45;

#line 972 "distance_granularity.m"
        {
#line 972 "distance_granularity.m"
          transform_hlds__distance_granularity__V_42_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 972 "distance_granularity.m"
        {
#line 972 "distance_granularity.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_42_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41);
        }
#line 973 "distance_granularity.m"
        {
#line 973 "distance_granularity.m"
          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_26);
        }
#line 974 "distance_granularity.m"
        {
#line 974 "distance_granularity.m"
          transform_hlds__distance_granularity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_25));
#line 974 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "distance_granularity.m"
        }
#line 974 "distance_granularity.m"
        {
#line 974 "distance_granularity.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_21, transform_hlds__distance_granularity__V_45_45, &transform_hlds__distance_granularity__CallArgs_27);
        }
#line 982 "distance_granularity.m"
        {
#line 982 "distance_granularity.m"
          transform_hlds__distance_granularity__CallExpr_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_13));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_20));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_22));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_14));
#line 982 "distance_granularity.m"
        }
#line 987 "distance_granularity.m"
        {
#line 987 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__CallInfo0_18);
        }
#line 988 "distance_granularity.m"
        {
#line 988 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__NonLocals0_30, &transform_hlds__distance_granularity__NonLocals_31);
        }
#line 989 "distance_granularity.m"
        {
#line 989 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_31, transform_hlds__distance_granularity__CallInfo0_18, &transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 990 "distance_granularity.m"
        {
#line 990 "distance_granularity.m"
          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 992 "distance_granularity.m"
        {
#line 992 "distance_granularity.m"
          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_25, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
        }
#line 993 "distance_granularity.m"
        {
#line 993 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__CallInfo1_32, &transform_hlds__distance_granularity__CallInfo_36);
        }
#line 994 "distance_granularity.m"
        {
#line 994 "distance_granularity.m"
          transform_hlds__distance_granularity__Call_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__CallExpr_29));
#line 994 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallInfo_36));
#line 994 "distance_granularity.m"
        }
#line 999 "distance_granularity.m"
        {
#line 999 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_26, transform_hlds__distance_granularity__Call_37, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39);
#line 999 "distance_granularity.m"
          return;
        }
#line 972 "distance_granularity.m"
      }
#line 1000 "distance_granularity.m"
    else
#line 1001 "distance_granularity.m"
      {
#line 1001 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40;
#line 1001 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38;
#line 1001 "distance_granularity.m"
      }
#line 960 "distance_granularity.m"
  }
#line 954 "distance_granularity.m"
}

#line 865 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 865 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 865 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 865 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 865 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 865 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 865 "distance_granularity.m"
{
#line 870 "distance_granularity.m"
  {
#line 870 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 870 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 0)));
#line 870 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 1)));

#line 874 "distance_granularity.m"
    if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 0))))
#line 917 "distance_granularity.m"
      {
#line 917 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17), (MR_Integer) 0);
#line 917 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__SubGoal_52;
#line 917 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr_95;

#line 918 "distance_granularity.m"
        {
#line 918 "distance_granularity.m"
          transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_51, &transform_hlds__distance_granularity__SubGoal_52, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
        }
#line 921 "distance_granularity.m"
        transform_hlds__distance_granularity__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_52);
#line 922 "distance_granularity.m"
        {
#line 922 "distance_granularity.m"
          MR_Word base;
#line 922 "distance_granularity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 922 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_95));
#line 922 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 922 "distance_granularity.m"
        }
#line 917 "distance_granularity.m"
      }
#line 874 "distance_granularity.m"
    else
#line 874 "distance_granularity.m"
      if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 2))))
#line 879 "distance_granularity.m"
        {
#line 879 "distance_granularity.m"
          transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
#line 879 "distance_granularity.m"
          return;
        }
#line 874 "distance_granularity.m"
      else
#line 874 "distance_granularity.m"
        if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 1))))
#line 873 "distance_granularity.m"
          {
#line 873 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 873 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 873 "distance_granularity.m"
          }
#line 874 "distance_granularity.m"
        else
#line 874 "distance_granularity.m"
          if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 882 "distance_granularity.m"
            {
#line 882 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 882 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 882 "distance_granularity.m"
            }
#line 874 "distance_granularity.m"
          else
#line 874 "distance_granularity.m"
            if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 886 "distance_granularity.m"
              {
#line 886 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 886 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goals0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 886 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goals1_44;
#line 886 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goals_45;
#line 886 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr_46;

#line 887 "distance_granularity.m"
                {
#line 887 "distance_granularity.m"
                  transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals1_44, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                }
#line 893 "distance_granularity.m"
                if ((transform_hlds__distance_granularity__Type_42 == (MR_Integer) 1))
#line 898 "distance_granularity.m"
                  transform_hlds__distance_granularity__Goals_45 = transform_hlds__distance_granularity__Goals1_44;
#line 893 "distance_granularity.m"
                else
#line 892 "distance_granularity.m"
                  {
#line 892 "distance_granularity.m"
                    hlds__goal_util__flatten_conj_2_p_0(transform_hlds__distance_granularity__Goals1_44, &transform_hlds__distance_granularity__Goals_45);
                  }
#line 900 "distance_granularity.m"
                {
#line 900 "distance_granularity.m"
                  transform_hlds__distance_granularity__GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 900 "distance_granularity.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 900 "distance_granularity.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 1) = ((MR_Box) (transform_hlds__distance_granularity__Type_42));
#line 900 "distance_granularity.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_45));
#line 900 "distance_granularity.m"
                }
#line 901 "distance_granularity.m"
                {
#line 901 "distance_granularity.m"
                  MR_Word base;
#line 901 "distance_granularity.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 901 "distance_granularity.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_46));
#line 901 "distance_granularity.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 901 "distance_granularity.m"
                }
#line 886 "distance_granularity.m"
              }
#line 874 "distance_granularity.m"
            else
#line 874 "distance_granularity.m"
              if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 903 "distance_granularity.m"
                {
#line 903 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Goals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 903 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Goals_92;
#line 903 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_93;

#line 904 "distance_granularity.m"
                  {
#line 904 "distance_granularity.m"
                    transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_92, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                  }
#line 907 "distance_granularity.m"
                  {
#line 907 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 907 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_92));
#line 907 "distance_granularity.m"
                  }
#line 908 "distance_granularity.m"
                  {
#line 908 "distance_granularity.m"
                    MR_Word base;
#line 908 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 908 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_93));
#line 908 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 908 "distance_granularity.m"
                  }
#line 903 "distance_granularity.m"
                }
#line 874 "distance_granularity.m"
              else
#line 874 "distance_granularity.m"
                if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 884 "distance_granularity.m"
                  {
#line 884 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 884 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 884 "distance_granularity.m"
                  }
#line 874 "distance_granularity.m"
                else
#line 874 "distance_granularity.m"
                  if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 936 "distance_granularity.m"
                    {
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Cond0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Then0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Else0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 4)));
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Cond_59;
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Then_60;
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Else_61;
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70;
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71;
#line 936 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__GoalExpr_103;

#line 937 "distance_granularity.m"
                      {
#line 937 "distance_granularity.m"
                        transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Cond0_56, &transform_hlds__distance_granularity__Cond_59, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__distance_granularity__Distance_16);
                      }
#line 939 "distance_granularity.m"
                      {
#line 939 "distance_granularity.m"
                        transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Then0_57, &transform_hlds__distance_granularity__Then_60, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__Distance_16);
                      }
#line 941 "distance_granularity.m"
                      {
#line 941 "distance_granularity.m"
                        transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Else0_58, &transform_hlds__distance_granularity__Else_61, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                      }
#line 943 "distance_granularity.m"
                      {
#line 943 "distance_granularity.m"
                        transform_hlds__distance_granularity__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 943 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 943 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_55));
#line 943 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_59));
#line 943 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_60));
#line 943 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_61));
#line 943 "distance_granularity.m"
                      }
#line 944 "distance_granularity.m"
                      {
#line 944 "distance_granularity.m"
                        MR_Word base;
#line 944 "distance_granularity.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 944 "distance_granularity.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_103));
#line 944 "distance_granularity.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 944 "distance_granularity.m"
                      }
#line 936 "distance_granularity.m"
                    }
#line 874 "distance_granularity.m"
                  else
#line 874 "distance_granularity.m"
                    if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 924 "distance_granularity.m"
                      {
#line 924 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 924 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 925 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_74_74;
#line 925 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_54_54;

#line 925 "distance_granularity.m"
                        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 925 "distance_granularity.m"
                        if (transform_hlds__distance_granularity__succeeded)
#line 925 "distance_granularity.m"
                          {
#line 925 "distance_granularity.m"
                            transform_hlds__distance_granularity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 1)));
#line 925 "distance_granularity.m"
                            transform_hlds__distance_granularity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 2)));
#line 925 "distance_granularity.m"
                            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_74_74 == (MR_Integer) 1);
#line 925 "distance_granularity.m"
                          }
#line 928 "distance_granularity.m"
                        if (transform_hlds__distance_granularity__succeeded)
#line 927 "distance_granularity.m"
                          {
#line 927 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 927 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 927 "distance_granularity.m"
                          }
#line 928 "distance_granularity.m"
                        else
#line 931 "distance_granularity.m"
                          {
#line 931 "distance_granularity.m"
                            MR_Word transform_hlds__distance_granularity__GoalExpr_96;
#line 931 "distance_granularity.m"
                            MR_Word transform_hlds__distance_granularity__SubGoal_97;

#line 929 "distance_granularity.m"
                            {
#line 929 "distance_granularity.m"
                              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_101, &transform_hlds__distance_granularity__SubGoal_97, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                            }
#line 932 "distance_granularity.m"
                            {
#line 932 "distance_granularity.m"
                              transform_hlds__distance_granularity__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 932 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_53));
#line 932 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_97));
#line 932 "distance_granularity.m"
                            }
#line 933 "distance_granularity.m"
                            {
#line 933 "distance_granularity.m"
                              MR_Word base;
#line 933 "distance_granularity.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "distance_granularity.m"
                              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 933 "distance_granularity.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_96));
#line 933 "distance_granularity.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 933 "distance_granularity.m"
                            }
#line 931 "distance_granularity.m"
                          }
#line 924 "distance_granularity.m"
                      }
#line 874 "distance_granularity.m"
                    else
#line 874 "distance_granularity.m"
                      if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 946 "distance_granularity.m"
                        {
#line 948 "distance_granularity.m"
                          {
#line 948 "distance_granularity.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.update_original_predicate_goal\'/9", (MR_String) "shorthand");
#line 948 "distance_granularity.m"
                            return;
                          }
#line 946 "distance_granularity.m"
                        }
#line 874 "distance_granularity.m"
                      else
#line 910 "distance_granularity.m"
                        {
#line 910 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 910 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__CanFail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 910 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 910 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Cases_50;
#line 910 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__GoalExpr_94;

#line 911 "distance_granularity.m"
                          {
#line 911 "distance_granularity.m"
                            transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(transform_hlds__distance_granularity__Cases0_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_50, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                          }
#line 914 "distance_granularity.m"
                          {
#line 914 "distance_granularity.m"
                            transform_hlds__distance_granularity__GoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 914 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 914 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_47));
#line 914 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_48));
#line 914 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_50));
#line 914 "distance_granularity.m"
                          }
#line 915 "distance_granularity.m"
                          {
#line 915 "distance_granularity.m"
                            MR_Word base;
#line 915 "distance_granularity.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 915 "distance_granularity.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_94));
#line 915 "distance_granularity.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 915 "distance_granularity.m"
                          }
#line 910 "distance_granularity.m"
                        }
#line 870 "distance_granularity.m"
  }
#line 865 "distance_granularity.m"
}

#line 840 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 840 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 840 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 840 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 840 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9)
#line 840 "distance_granularity.m"
{
#line 844 "distance_granularity.m"
  while (MR_TRUE)
#line 844 "distance_granularity.m"
    {
#line 844 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 844 "distance_granularity.m"
      {
#line 844 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 844 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "distance_granularity.m"
          {
#line 845 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8;
#line 845 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 844 "distance_granularity.m"
          }
#line 844 "distance_granularity.m"
        else
#line 848 "distance_granularity.m"
          {
#line 848 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_28;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body0_29;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body_30;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo1_31;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo2_32;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo3_33;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo_34;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_39_39;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;
#line 848 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;

#line 849 "distance_granularity.m"
            {
#line 849 "distance_granularity.m"
              transform_hlds__distance_granularity__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 849 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_21));
#line 849 "distance_granularity.m"
            }
#line 849 "distance_granularity.m"
            {
#line 849 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__distance_granularity__V_39_39, &transform_hlds__distance_granularity__ProcInfo0_28);
            }
#line 850 "distance_granularity.m"
            {
#line 850 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__Body0_29);
            }
#line 851 "distance_granularity.m"
            {
#line 851 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Body0_29, &transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__ProcInfo1_31, transform_hlds__distance_granularity__HeadVar__3_3);
            }
#line 853 "distance_granularity.m"
            {
#line 853 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__ProcInfo1_31, &transform_hlds__distance_granularity__ProcInfo2_32);
            }
#line 854 "distance_granularity.m"
            {
#line 854 "distance_granularity.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_32, &transform_hlds__distance_granularity__ProcInfo3_33);
            }
#line 856 "distance_granularity.m"
            {
#line 856 "distance_granularity.m"
              check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_33, &transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 858 "distance_granularity.m"
            {
#line 858 "distance_granularity.m"
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43);
            }
#line 859 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 859 "distance_granularity.m"
            {
#line 859 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_22;
#line 859 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;
#line 859 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;

#line 859 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 859 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 859 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 859 "distance_granularity.m"
            }
#line 859 "distance_granularity.m"
            continue;
#line 848 "distance_granularity.m"
          }
#line 844 "distance_granularity.m"
      }
#line 844 "distance_granularity.m"
      break;
#line 844 "distance_granularity.m"
    }
#line 840 "distance_granularity.m"
}

#line 792 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 792 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 792 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 792 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 792 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 792 "distance_granularity.m"
{
#line 798 "distance_granularity.m"
  while (MR_TRUE)
#line 798 "distance_granularity.m"
    {
#line 798 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 798 "distance_granularity.m"
      {
#line 798 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 798 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "distance_granularity.m"
          {
#line 800 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 799 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 799 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 798 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 798 "distance_granularity.m"
          }
#line 798 "distance_granularity.m"
        else
#line 803 "distance_granularity.m"
          {
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 0)));
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 1)));
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 2)));
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_46;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_61_61;
#line 805 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_47_47;

#line 805 "distance_granularity.m"
            {
#line 805 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_45, &transform_hlds__distance_granularity__Goal_46, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59, &transform_hlds__distance_granularity__V_47_47);
            }
#line 808 "distance_granularity.m"
            {
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 808 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_43));
#line 808 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_44));
#line 808 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_46));
#line 808 "distance_granularity.m"
            }
#line 808 "distance_granularity.m"
            {
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_61_61));
#line 808 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 808 "distance_granularity.m"
            }
#line 809 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 809 "distance_granularity.m"
            {
#line 809 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_33;
#line 809 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 809 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 809 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 809 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;

#line 809 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 809 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 809 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 809 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 809 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 809 "distance_granularity.m"
            }
#line 809 "distance_granularity.m"
            continue;
#line 803 "distance_granularity.m"
          }
#line 798 "distance_granularity.m"
      }
#line 798 "distance_granularity.m"
      break;
#line 798 "distance_granularity.m"
    }
#line 792 "distance_granularity.m"
}

#line 770 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 770 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 770 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 770 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 770 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 770 "distance_granularity.m"
{
#line 776 "distance_granularity.m"
  while (MR_TRUE)
#line 776 "distance_granularity.m"
    {
#line 776 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 776 "distance_granularity.m"
      {
#line 776 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 776 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "distance_granularity.m"
          {
#line 778 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 777 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 777 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 776 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 776 "distance_granularity.m"
          }
#line 776 "distance_granularity.m"
        else
#line 781 "distance_granularity.m"
          {
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_43;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_57_57;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 782 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_44_44;

#line 782 "distance_granularity.m"
            {
#line 782 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_32, &transform_hlds__distance_granularity__Goal_43, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56, &transform_hlds__distance_granularity__V_44_44);
            }
#line 785 "distance_granularity.m"
            {
#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_43));
#line 785 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "distance_granularity.m"
            }
#line 785 "distance_granularity.m"
            {
#line 785 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_57_57, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58);
            }
#line 786 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 786 "distance_granularity.m"
            {
#line 786 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_33;
#line 786 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 786 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 786 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 786 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;

#line 786 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 786 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 786 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 786 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 786 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 786 "distance_granularity.m"
            }
#line 786 "distance_granularity.m"
            continue;
#line 781 "distance_granularity.m"
          }
#line 776 "distance_granularity.m"
      }
#line 776 "distance_granularity.m"
      break;
#line 776 "distance_granularity.m"
    }
#line 770 "distance_granularity.m"
}

#line 657 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 657 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 657 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 657 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 657 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 657 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 657 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71)
#line 657 "distance_granularity.m"
{
#line 764 "distance_granularity.m"
  while (MR_TRUE)
#line 764 "distance_granularity.m"
    {
#line 764 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 764 "distance_granularity.m"
      {
#line 764 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 764 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 663 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_72_72;

#line 663 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 663 "distance_granularity.m"
          {
#line 663 "distance_granularity.m"
            transform_hlds__distance_granularity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
#line 663 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));
#line 663 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_72_72 == (MR_Integer) 0);
#line 663 "distance_granularity.m"
          }
#line 764 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 664 "distance_granularity.m"
          {
#line 664 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 664 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 664 "distance_granularity.m"
            {
#line 664 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 665 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 > transform_hlds__distance_granularity__Length_19);
#line 667 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 666 "distance_granularity.m"
              {
#line 666 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 666 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68;
#line 666 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 666 "distance_granularity.m"
              }
#line 667 "distance_granularity.m"
            else
#line 668 "distance_granularity.m"
              {
#line 668 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 668 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 668 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 668 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;
#line 668 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 668 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 668 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 758 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 758 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 758 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 758 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 758 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 671 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 668 "distance_granularity.m"
                {
#line 668 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 668 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 669 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 669 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 671 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 671 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 671 "distance_granularity.m"
                  {
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 671 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 675 "distance_granularity.m"
                    {
#line 675 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 675 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 676 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 753 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 682 "distance_granularity.m"
                      {
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResult_31;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusPredId_32;
#line 682 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__MinusProcId_33;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallArgs_34;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallSymName_36;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__ConsId_37;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Rhs_38;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallUnifyContext_39;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalExpr_40;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__NonLocals_41;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResultDelta_42;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarDelta_43;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDeltaDecrement_44;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoal_47;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoalInfo_49;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Context_50;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalInfo_51;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoal_52;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_53;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_55;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_57;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_58;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_59;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals1_60;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__StartGoals_61;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__EndGoals_62;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend0_63;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend1_64;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_65;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_73_73;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_77_77;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_87_87;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_93_93;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_95_95;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_96_96;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_98_98;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_119_119;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_120_120;
#line 682 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__V_127_127;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_129_129;
#line 682 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_131_131;
#line 717 "distance_granularity.m"
                        MR_Box transform_hlds__distance_granularity__conv1_FirstGoal_47;
#line 718 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_48_48;

#line 681 "distance_granularity.m"
                        {
#line 681 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_73_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 681 "distance_granularity.m"
                        {
#line 681 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_73_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75);
                        }
#line 683 "distance_granularity.m"
                        {
#line 683 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, (MR_Integer) 1, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 687 "distance_granularity.m"
                        {
#line 687 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_77_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 687 "distance_granularity.m"
                        {
#line 687 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__VarResult_31, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79);
                        }
#line 691 "distance_granularity.m"
                        {
#line 691 "distance_granularity.m"
                          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__distance_granularity__ModuleInfo_16, (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[2], (MR_String) "minus", (MR_Integer) 1, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MinusPredId_32, &transform_hlds__distance_granularity__MinusProcId_33);
                        }
#line 694 "distance_granularity.m"
                        {
#line 694 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "distance_granularity.m"
                        }
#line 694 "distance_granularity.m"
                        {
#line 694 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_87_87));
#line 694 "distance_granularity.m"
                        }
#line 694 "distance_granularity.m"
                        {
#line 694 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 694 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 694 "distance_granularity.m"
                        }
#line 696 "distance_granularity.m"
                        transform_hlds__distance_granularity__MinusCallSymName_36 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_1[4]);
#line 698 "distance_granularity.m"
                        {
#line 698 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_93_93 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                        }
#line 698 "distance_granularity.m"
                        {
#line 698 "distance_granularity.m"
                          transform_hlds__distance_granularity__ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 2) = ((MR_Box) ((MR_Integer) 2));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_93_93));
#line 698 "distance_granularity.m"
                        }
#line 700 "distance_granularity.m"
                        {
#line 700 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "distance_granularity.m"
                        }
#line 700 "distance_granularity.m"
                        {
#line 700 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_96_96));
#line 700 "distance_granularity.m"
                        }
#line 699 "distance_granularity.m"
                        {
#line 699 "distance_granularity.m"
                          transform_hlds__distance_granularity__Rhs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 0) = ((MR_Box) (transform_hlds__distance_granularity__ConsId_37));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 2) = ((MR_Box) (transform_hlds__distance_granularity__V_95_95));
#line 699 "distance_granularity.m"
                        }
#line 701 "distance_granularity.m"
                        {
#line 701 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 701 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 701 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 1) = ((MR_Box) (transform_hlds__distance_granularity__Rhs_38));
#line 701 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 2) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[5]));
#line 701 "distance_granularity.m"
                        }
#line 701 "distance_granularity.m"
                        {
#line 701 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallUnifyContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallUnifyContext_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_98_98));
#line 701 "distance_granularity.m"
                        }
#line 704 "distance_granularity.m"
                        {
#line 704 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoalExpr_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__MinusPredId_32));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusProcId_33));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 2) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallArgs_34));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 3) = ((MR_Box) ((MR_Integer) 0));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 4) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallUnifyContext_39));
#line 704 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 5) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 704 "distance_granularity.m"
                        }
#line 707 "distance_granularity.m"
                        {
#line 707 "distance_granularity.m"
                          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__MinusCallArgs_34, &transform_hlds__distance_granularity__NonLocals_41);
                        }
#line 709 "distance_granularity.m"
                        {
#line 709 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarResultDelta_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 709 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[0])));
#line 709 "distance_granularity.m"
                        }
#line 710 "distance_granularity.m"
                        {
#line 710 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarDelta_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 710 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_2[0])));
#line 710 "distance_granularity.m"
                        }
#line 713 "distance_granularity.m"
                        {
#line 713 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResultDelta_42));
#line 713 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "distance_granularity.m"
                        }
#line 713 "distance_granularity.m"
                        {
#line 713 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarDelta_43));
#line 713 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_120_120));
#line 713 "distance_granularity.m"
                        }
#line 712 "distance_granularity.m"
                        {
#line 712 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDeltaDecrement_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__distance_granularity__V_119_119);
                        }
#line 717 "distance_granularity.m"
                        {
#line 717 "distance_granularity.m"
                          mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, (MR_Integer) 1, &transform_hlds__distance_granularity__conv1_FirstGoal_47);
                        }
#line 717 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoal_47 = ((MR_Word) transform_hlds__distance_granularity__conv1_FirstGoal_47);
#line 718 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 0)));
#line 718 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 1)));
#line 719 "distance_granularity.m"
                        {
#line 719 "distance_granularity.m"
                          transform_hlds__distance_granularity__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__distance_granularity__FirstGoalInfo_49);
                        }
#line 720 "distance_granularity.m"
                        {
#line 720 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__distance_granularity__NonLocals_41, transform_hlds__distance_granularity__InstMapDeltaDecrement_44, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__distance_granularity__Context_50, &transform_hlds__distance_granularity__DecrementGoalInfo_51);
                        }
#line 722 "distance_granularity.m"
                        {
#line 722 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalExpr_40));
#line 722 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 1) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalInfo_51));
#line 722 "distance_granularity.m"
                        }
#line 727 "distance_granularity.m"
                        {
#line 727 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_87_87, &transform_hlds__distance_granularity__CallArgs_53);
                        }
#line 734 "distance_granularity.m"
                        {
#line 734 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_53));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 734 "distance_granularity.m"
                        }
#line 736 "distance_granularity.m"
                        {
#line 736 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 738 "distance_granularity.m"
                        {
#line 738 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_55, &transform_hlds__distance_granularity__InstMapDelta_57);
                        }
#line 740 "distance_granularity.m"
                        {
#line 740 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_57, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_58);
                        }
#line 742 "distance_granularity.m"
                        {
#line 742 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 742 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_58));
#line 742 "distance_granularity.m"
                        }
#line 743 "distance_granularity.m"
                        {
#line 743 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, ((MR_Box) (transform_hlds__distance_granularity__Goal_59)), &transform_hlds__distance_granularity__Goals1_60);
                        }
#line 746 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_127_127 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 - (MR_Integer) 1);
#line 746 "distance_granularity.m"
                        {
#line 746 "distance_granularity.m"
                          mercury__list__det_split_list_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__V_127_127, transform_hlds__distance_granularity__Goals1_60, &transform_hlds__distance_granularity__StartGoals_61, &transform_hlds__distance_granularity__EndGoals_62);
                        }
#line 748 "distance_granularity.m"
                        {
#line 748 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 0) = ((MR_Box) (transform_hlds__distance_granularity__UnifyGoal_30));
#line 748 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "distance_granularity.m"
                        }
#line 748 "distance_granularity.m"
                        {
#line 748 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__StartGoals_61, transform_hlds__distance_granularity__V_129_129, &transform_hlds__distance_granularity__GoalsAppend0_63);
                        }
#line 749 "distance_granularity.m"
                        {
#line 749 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoal_52));
#line 749 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "distance_granularity.m"
                        }
#line 749 "distance_granularity.m"
                        {
#line 749 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend0_63, transform_hlds__distance_granularity__V_131_131, &transform_hlds__distance_granularity__GoalsAppend1_64);
                        }
#line 751 "distance_granularity.m"
                        {
#line 751 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend1_64, transform_hlds__distance_granularity__EndGoals_62, &transform_hlds__distance_granularity__Goals_65);
                        }
#line 752 "distance_granularity.m"
                        {
#line 752 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 752 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 752 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 752 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_65));
#line 752 "distance_granularity.m"
                        }
#line 682 "distance_granularity.m"
                      }
#line 753 "distance_granularity.m"
                    else
#line 755 "distance_granularity.m"
                      {
#line 755 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 755 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 755 "distance_granularity.m"
                      }
#line 757 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 3);
#line 671 "distance_granularity.m"
                  }
#line 671 "distance_granularity.m"
                else
#line 759 "distance_granularity.m"
                  {
#line 759 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 1);
#line 759 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 759 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 759 "distance_granularity.m"
                  }
#line 761 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 761 "distance_granularity.m"
                {
#line 761 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 761 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 761 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;

#line 761 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70;
#line 761 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68;
#line 761 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66;
#line 761 "distance_granularity.m"
                }
#line 761 "distance_granularity.m"
                continue;
#line 668 "distance_granularity.m"
              }
#line 664 "distance_granularity.m"
          }
#line 764 "distance_granularity.m"
        else
#line 765 "distance_granularity.m"
          {
#line 765 "distance_granularity.m"
            {
#line 765 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_else2\'/10", (MR_String) "unexpected goal type");
#line 765 "distance_granularity.m"
              return;
            }
#line 765 "distance_granularity.m"
          }
#line 764 "distance_granularity.m"
      }
#line 764 "distance_granularity.m"
      break;
#line 764 "distance_granularity.m"
    }
#line 657 "distance_granularity.m"
}

#line 645 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 645 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 645 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 645 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 645 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23)
#line 645 "distance_granularity.m"
{
#line 650 "distance_granularity.m"
  {
#line 650 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 650 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 0)));
#line 650 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 1)));
#line 650 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr_17;
#line 650 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goal0_19;
#line 652 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__V_18_18;
#line 635 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goals_31;
#line 635 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__ConjInfo0_32;
#line 635 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_41_41;
#line 625 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Type_30;

#line 652 "distance_granularity.m"
    {
#line 652 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(transform_hlds__distance_granularity__GoalExpr0_15, &transform_hlds__distance_granularity__GoalExpr_17, (MR_Integer) 1, &transform_hlds__distance_granularity__V_18_18, transform_hlds__distance_granularity__GranularityVar_10, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__ModuleInfo_13, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);
    }
#line 654 "distance_granularity.m"
    {
#line 654 "distance_granularity.m"
      transform_hlds__distance_granularity__Goal0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_17));
#line 654 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_16));
#line 654 "distance_granularity.m"
    }
#line 625 "distance_granularity.m"
    transform_hlds__distance_granularity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 0)));
#line 625 "distance_granularity.m"
    transform_hlds__distance_granularity__ConjInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 1)));
#line 625 "distance_granularity.m"
    transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 625 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 625 "distance_granularity.m"
      {
#line 625 "distance_granularity.m"
        transform_hlds__distance_granularity__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 1)));
#line 625 "distance_granularity.m"
        transform_hlds__distance_granularity__Goals_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 2)));
#line 626 "distance_granularity.m"
        {
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__NonLocals_33;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__InstMapDelta_34;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Detism_35;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Purity_36;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo1_37;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo2_38;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo3_39;
#line 626 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo_40;

#line 626 "distance_granularity.m"
          {
#line 626 "distance_granularity.m"
            hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__NonLocals_33);
          }
#line 627 "distance_granularity.m"
          {
#line 627 "distance_granularity.m"
            hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__InstMapDelta_34);
          }
#line 628 "distance_granularity.m"
          {
#line 628 "distance_granularity.m"
            hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Detism_35);
          }
#line 629 "distance_granularity.m"
          {
#line 629 "distance_granularity.m"
            hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Purity_36);
          }
#line 630 "distance_granularity.m"
          {
#line 630 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_33, transform_hlds__distance_granularity__ConjInfo0_32, &transform_hlds__distance_granularity__ConjInfo1_37);
          }
#line 631 "distance_granularity.m"
          {
#line 631 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_34, transform_hlds__distance_granularity__ConjInfo1_37, &transform_hlds__distance_granularity__ConjInfo2_38);
          }
#line 632 "distance_granularity.m"
          {
#line 632 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_35, transform_hlds__distance_granularity__ConjInfo2_38, &transform_hlds__distance_granularity__ConjInfo3_39);
          }
#line 633 "distance_granularity.m"
          {
#line 633 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_36, transform_hlds__distance_granularity__ConjInfo3_39, &transform_hlds__distance_granularity__ConjInfo_40);
          }
#line 634 "distance_granularity.m"
          {
#line 634 "distance_granularity.m"
            MR_Word base;
#line 634 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21 = base;
#line 634 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 634 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_40));
#line 634 "distance_granularity.m"
          }
#line 626 "distance_granularity.m"
        }
#line 625 "distance_granularity.m"
      }
#line 625 "distance_granularity.m"
    else
#line 637 "distance_granularity.m"
      {
#line 637 "distance_granularity.m"
        {
#line 637 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 637 "distance_granularity.m"
          return;
        }
#line 637 "distance_granularity.m"
      }
#line 650 "distance_granularity.m"
  }
#line 645 "distance_granularity.m"
}

#line 495 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 495 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 495 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 495 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 495 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 495 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19)
#line 495 "distance_granularity.m"
{
#line 501 "distance_granularity.m"
  {
#line 501 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 501 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Var_20;
#line 501 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__UnifyGoal_21;
#line 501 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_34_34;
#line 501 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 502 "distance_granularity.m"
    {
#line 502 "distance_granularity.m"
      transform_hlds__distance_granularity__V_34_34 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 502 "distance_granularity.m"
    {
#line 502 "distance_granularity.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 503 "distance_granularity.m"
    {
#line 503 "distance_granularity.m"
      hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_20, (MR_Integer) 0, &transform_hlds__distance_granularity__UnifyGoal_21);
    }
#line 528 "distance_granularity.m"
    if ((transform_hlds__distance_granularity__MaybeGranularityVar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "distance_granularity.m"
      {
#line 532 "distance_granularity.m"
        {
#line 532 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.create_if_then_else_goal\'/10", (MR_String) "MaybeGranularityVar = no");
#line 532 "distance_granularity.m"
          return;
        }
#line 529 "distance_granularity.m"
      }
#line 528 "distance_granularity.m"
    else
#line 505 "distance_granularity.m"
      {
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GranularityVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MaybeGranularityVar_13, (MR_Integer) 0)));
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Test_23;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Cond_24;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Then_26;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else0_27;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else_28;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_29;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_30;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__IfThenElseInfo_31;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_48_48;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_51_51;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr0_64;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr_66;
#line 505 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goal0_68;
#line 546 "distance_granularity.m"
        MR_Integer transform_hlds__distance_granularity__V_67_67;
#line 635 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals_76;
#line 635 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__ConjInfo0_77;
#line 635 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 625 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Type_75;

#line 507 "distance_granularity.m"
        {
#line 507 "distance_granularity.m"
          hlds__make_goal__make_simple_test_5_p_0(transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__Var_20, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_3[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Test_23);
        }
#line 509 "distance_granularity.m"
        {
#line 509 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_21, transform_hlds__distance_granularity__Test_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Cond_24);
        }
#line 512 "distance_granularity.m"
        {
#line 512 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr0_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 512 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 512 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 1) = ((MR_Box) ((MR_Integer) 1));
#line 512 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 512 "distance_granularity.m"
        }
#line 546 "distance_granularity.m"
        {
#line 546 "distance_granularity.m"
          transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(transform_hlds__distance_granularity__GoalExpr0_64, &transform_hlds__distance_granularity__GoalExpr_66, (MR_Integer) 1, &transform_hlds__distance_granularity__V_67_67, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__Distance_16, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
        }
#line 548 "distance_granularity.m"
        {
#line 548 "distance_granularity.m"
          transform_hlds__distance_granularity__Goal0_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_66));
#line 548 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 548 "distance_granularity.m"
        }
#line 625 "distance_granularity.m"
        transform_hlds__distance_granularity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 0)));
#line 625 "distance_granularity.m"
        transform_hlds__distance_granularity__ConjInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 1)));
#line 625 "distance_granularity.m"
        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 625 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 625 "distance_granularity.m"
          {
#line 625 "distance_granularity.m"
            transform_hlds__distance_granularity__Type_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 1)));
#line 625 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 2)));
#line 626 "distance_granularity.m"
            {
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__NonLocals_78;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__InstMapDelta_79;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Detism_80;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Purity_81;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo1_82;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo2_83;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo3_84;
#line 626 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo_85;

#line 626 "distance_granularity.m"
              {
#line 626 "distance_granularity.m"
                hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__NonLocals_78);
              }
#line 627 "distance_granularity.m"
              {
#line 627 "distance_granularity.m"
                hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__InstMapDelta_79);
              }
#line 628 "distance_granularity.m"
              {
#line 628 "distance_granularity.m"
                hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Detism_80);
              }
#line 629 "distance_granularity.m"
              {
#line 629 "distance_granularity.m"
                hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Purity_81);
              }
#line 630 "distance_granularity.m"
              {
#line 630 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_78, transform_hlds__distance_granularity__ConjInfo0_77, &transform_hlds__distance_granularity__ConjInfo1_82);
              }
#line 631 "distance_granularity.m"
              {
#line 631 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_79, transform_hlds__distance_granularity__ConjInfo1_82, &transform_hlds__distance_granularity__ConjInfo2_83);
              }
#line 632 "distance_granularity.m"
              {
#line 632 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_80, transform_hlds__distance_granularity__ConjInfo2_83, &transform_hlds__distance_granularity__ConjInfo3_84);
              }
#line 633 "distance_granularity.m"
              {
#line 633 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_81, transform_hlds__distance_granularity__ConjInfo3_84, &transform_hlds__distance_granularity__ConjInfo_85);
              }
#line 634 "distance_granularity.m"
              {
#line 634 "distance_granularity.m"
                transform_hlds__distance_granularity__Then_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 634 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_85));
#line 634 "distance_granularity.m"
              }
#line 626 "distance_granularity.m"
            }
#line 625 "distance_granularity.m"
          }
#line 625 "distance_granularity.m"
        else
#line 637 "distance_granularity.m"
          {
#line 637 "distance_granularity.m"
            {
#line 637 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 637 "distance_granularity.m"
              return;
            }
#line 637 "distance_granularity.m"
          }
#line 517 "distance_granularity.m"
        {
#line 517 "distance_granularity.m"
          transform_hlds__distance_granularity__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 517 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 517 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 517 "distance_granularity.m"
        }
#line 517 "distance_granularity.m"
        {
#line 517 "distance_granularity.m"
          transform_hlds__distance_granularity__Else0_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
#line 517 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 517 "distance_granularity.m"
        }
#line 518 "distance_granularity.m"
        {
#line 518 "distance_granularity.m"
          transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(transform_hlds__distance_granularity__Else0_27, &transform_hlds__distance_granularity__Else_28, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__ModuleInfo_19, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33);
        }
#line 523 "distance_granularity.m"
        {
#line 523 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__ConjInfo_12);
        }
#line 524 "distance_granularity.m"
        {
#line 524 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__NonLocals0_29, &transform_hlds__distance_granularity__NonLocals_30);
        }
#line 525 "distance_granularity.m"
        {
#line 525 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_30, transform_hlds__distance_granularity__ConjInfo_12, &transform_hlds__distance_granularity__IfThenElseInfo_31);
        }
#line 526 "distance_granularity.m"
        {
#line 526 "distance_granularity.m"
          transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_24));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_26));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_28));
#line 526 "distance_granularity.m"
        }
#line 526 "distance_granularity.m"
        {
#line 526 "distance_granularity.m"
          MR_Word base;
#line 526 "distance_granularity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "distance_granularity.m"
          *transform_hlds__distance_granularity__IfThenElseGoal_17 = base;
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_51_51));
#line 526 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__IfThenElseInfo_31));
#line 526 "distance_granularity.m"
        }
#line 505 "distance_granularity.m"
      }
#line 501 "distance_granularity.m"
  }
#line 495 "distance_granularity.m"
}

#line 460 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 460 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 460 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 460 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 460 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17)
#line 460 "distance_granularity.m"
{
#line 466 "distance_granularity.m"
  while (MR_TRUE)
#line 466 "distance_granularity.m"
    {
#line 466 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 466 "distance_granularity.m"
      {
#line 466 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 466 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "distance_granularity.m"
          {
#line 469 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 469 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14;
#line 467 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 467 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 466 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 466 "distance_granularity.m"
          }
#line 466 "distance_granularity.m"
        else
#line 473 "distance_granularity.m"
          {
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_52;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__IsRecursiveCall_53;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_67_67;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 473 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 474 "distance_granularity.m"
            {
#line 474 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_39, &transform_hlds__distance_granularity__Goal_52, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__distance_granularity__HeadVar__12_12, transform_hlds__distance_granularity__HeadVar__13_13, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66, &transform_hlds__distance_granularity__IsRecursiveCall_53);
            }
#line 477 "distance_granularity.m"
            {
#line 477 "distance_granularity.m"
              transform_hlds__distance_granularity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_52));
#line 477 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "distance_granularity.m"
            }
#line 477 "distance_granularity.m"
            {
#line 477 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_67_67, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68);
            }
#line 483 "distance_granularity.m"
            if ((transform_hlds__distance_granularity__IsRecursiveCall_53 == (MR_Integer) 0))
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 483 "distance_granularity.m"
            else
#line 482 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = (MR_Integer) 1;
#line 487 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 487 "distance_granularity.m"
            {
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_40;
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 487 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16;
#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14;
#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 487 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 487 "distance_granularity.m"
            }
#line 487 "distance_granularity.m"
            continue;
#line 473 "distance_granularity.m"
          }
#line 466 "distance_granularity.m"
      }
#line 466 "distance_granularity.m"
      break;
#line 466 "distance_granularity.m"
    }
#line 460 "distance_granularity.m"
}

#line 405 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 405 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 405 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 405 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24)
#line 405 "distance_granularity.m"
{
#line 414 "distance_granularity.m"
  {
#line 414 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__IsInParallelConj_22 == (MR_Integer) 1);
#line 414 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 0)));
#line 414 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 1)));
#line 414 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 2)));
#line 414 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 3)));
#line 414 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallUnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 4)));
#line 415 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 5)));

#line 418 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 418 "distance_granularity.m"
      {
#line 419 "distance_granularity.m"
        {
#line 419 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_25, transform_hlds__distance_granularity__CallerPredId_16);
        }
#line 418 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 420 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_26 == transform_hlds__distance_granularity__CallerProcId_19);
#line 418 "distance_granularity.m"
      }
#line 454 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 445 "distance_granularity.m"
      {
#line 427 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "distance_granularity.m"
          {
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__GranularityVar_32;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes0_33;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars0_34;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes_35;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars_36;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_45_45;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_49_49;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_50_50;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_52_52;
#line 428 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54;

#line 430 "distance_granularity.m"
            {
#line 430 "distance_granularity.m"
              transform_hlds__distance_granularity__V_45_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 430 "distance_granularity.m"
            {
#line 430 "distance_granularity.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__GranularityVar_32, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
            }
#line 432 "distance_granularity.m"
            {
#line 432 "distance_granularity.m"
              MR_Word base;
#line 432 "distance_granularity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = base;
#line 432 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 432 "distance_granularity.m"
            }
#line 439 "distance_granularity.m"
            {
#line 439 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__ArgsModes0_33);
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__HeadVars0_34);
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              transform_hlds__distance_granularity__V_50_50 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              transform_hlds__distance_granularity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_50_50));
#line 441 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "distance_granularity.m"
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__distance_granularity__ArgsModes0_33, transform_hlds__distance_granularity__V_49_49, &transform_hlds__distance_granularity__ArgsModes_35);
            }
#line 442 "distance_granularity.m"
            {
#line 442 "distance_granularity.m"
              transform_hlds__distance_granularity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 442 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "distance_granularity.m"
            }
#line 442 "distance_granularity.m"
            {
#line 442 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__HeadVars0_34, transform_hlds__distance_granularity__V_52_52, &transform_hlds__distance_granularity__HeadVars_36);
            }
#line 443 "distance_granularity.m"
            {
#line 443 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__distance_granularity__ArgsModes_35, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54);
            }
#line 444 "distance_granularity.m"
            {
#line 444 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__distance_granularity__HeadVars_36, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40);
            }
#line 428 "distance_granularity.m"
          }
#line 427 "distance_granularity.m"
        else
#line 424 "distance_granularity.m"
          {
#line 424 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 424 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 424 "distance_granularity.m"
          }
#line 451 "distance_granularity.m"
        {
#line 451 "distance_granularity.m"
          MR_Word base;
#line 451 "distance_granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 451 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = base;
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_17));
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallerProcId_19));
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_28));
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__distance_granularity__CallUnifyContext_29));
#line 451 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_18));
#line 451 "distance_granularity.m"
        }
#line 453 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 1;
#line 445 "distance_granularity.m"
      }
#line 454 "distance_granularity.m"
    else
#line 455 "distance_granularity.m"
      {
#line 455 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 0;
#line 455 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 455 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 455 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37;
#line 455 "distance_granularity.m"
      }
#line 455 "distance_granularity.m"
    *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41;
#line 414 "distance_granularity.m"
  }
#line 405 "distance_granularity.m"
}

#line 300 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 300 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 300 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 300 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 300 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26)
#line 300 "distance_granularity.m"
{
#line 307 "distance_granularity.m"
  {
#line 307 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 307 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
#line 307 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

#line 312 "distance_granularity.m"
    if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 0))))
#line 363 "distance_granularity.m"
      {
#line 363 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__SubGoal0_61 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27), (MR_Integer) 0);
#line 363 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__SubGoal_62;
#line 363 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr_140;

#line 364 "distance_granularity.m"
        {
#line 364 "distance_granularity.m"
          transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_61, &transform_hlds__distance_granularity__SubGoal_62, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
        }
#line 368 "distance_granularity.m"
        transform_hlds__distance_granularity__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_62);
#line 369 "distance_granularity.m"
        {
#line 369 "distance_granularity.m"
          MR_Word base;
#line 369 "distance_granularity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 369 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_140));
#line 369 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 369 "distance_granularity.m"
        }
#line 363 "distance_granularity.m"
      }
#line 312 "distance_granularity.m"
    else
#line 312 "distance_granularity.m"
      if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 2))))
#line 313 "distance_granularity.m"
        {
#line 313 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_40;

#line 314 "distance_granularity.m"
          {
#line 314 "distance_granularity.m"
            transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(transform_hlds__distance_granularity__GoalExpr0_27, &transform_hlds__distance_granularity__GoalExpr_40, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
#line 318 "distance_granularity.m"
          {
#line 318 "distance_granularity.m"
            MR_Word base;
#line 318 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 318 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_40));
#line 318 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 318 "distance_granularity.m"
          }
#line 313 "distance_granularity.m"
        }
#line 312 "distance_granularity.m"
      else
#line 312 "distance_granularity.m"
        if (((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 1))))
#line 310 "distance_granularity.m"
          {
#line 311 "distance_granularity.m"
            *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 311 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 311 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 311 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 311 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 310 "distance_granularity.m"
          }
#line 312 "distance_granularity.m"
        else
#line 312 "distance_granularity.m"
          if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 320 "distance_granularity.m"
            {
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 320 "distance_granularity.m"
            }
#line 312 "distance_granularity.m"
          else
#line 312 "distance_granularity.m"
            if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 326 "distance_granularity.m"
              {
#line 326 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 326 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 326 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goals_55;
#line 326 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__ContainRecursiveCalls_56;
#line 326 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;

#line 327 "distance_granularity.m"
                {
#line 327 "distance_granularity.m"
                  transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(transform_hlds__distance_granularity__Goals0_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 1, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, (MR_Integer) 0, &transform_hlds__distance_granularity__ContainRecursiveCalls_56);
                }
#line 334 "distance_granularity.m"
                if ((transform_hlds__distance_granularity__Type_53 == (MR_Integer) 1))
#line 341 "distance_granularity.m"
                  if ((transform_hlds__distance_granularity__ContainRecursiveCalls_56 == (MR_Integer) 0))
#line 342 "distance_granularity.m"
                    {
#line 342 "distance_granularity.m"
                      *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 342 "distance_granularity.m"
                      *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 342 "distance_granularity.m"
                    }
#line 341 "distance_granularity.m"
                  else
#line 338 "distance_granularity.m"
                    {
#line 338 "distance_granularity.m"
                      transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__GoalInfo_28, *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81);
                    }
#line 334 "distance_granularity.m"
                else
#line 331 "distance_granularity.m"
                  {
#line 331 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__GoalExpr_133;

#line 332 "distance_granularity.m"
                    {
#line 332 "distance_granularity.m"
                      transform_hlds__distance_granularity__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 332 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 332 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 332 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_55));
#line 332 "distance_granularity.m"
                    }
#line 333 "distance_granularity.m"
                    {
#line 333 "distance_granularity.m"
                      MR_Word base;
#line 333 "distance_granularity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "distance_granularity.m"
                      *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 333 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_133));
#line 333 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 333 "distance_granularity.m"
                    }
#line 333 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 331 "distance_granularity.m"
                  }
#line 345 "distance_granularity.m"
                *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 326 "distance_granularity.m"
              }
#line 312 "distance_granularity.m"
            else
#line 312 "distance_granularity.m"
              if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 347 "distance_granularity.m"
                {
#line 347 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_136;
#line 347 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Goals0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 347 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Goals_138;

#line 348 "distance_granularity.m"
                  {
#line 348 "distance_granularity.m"
                    transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(transform_hlds__distance_granularity__Goals0_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_138, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
                  }
#line 351 "distance_granularity.m"
                  {
#line 351 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 351 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_138));
#line 351 "distance_granularity.m"
                  }
#line 352 "distance_granularity.m"
                  {
#line 352 "distance_granularity.m"
                    MR_Word base;
#line 352 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 352 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_136));
#line 352 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 352 "distance_granularity.m"
                  }
#line 353 "distance_granularity.m"
                  *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 347 "distance_granularity.m"
                }
#line 312 "distance_granularity.m"
              else
#line 312 "distance_granularity.m"
                if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 323 "distance_granularity.m"
                  {
#line 324 "distance_granularity.m"
                    *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 324 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 324 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 324 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 324 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 323 "distance_granularity.m"
                  }
#line 312 "distance_granularity.m"
                else
#line 312 "distance_granularity.m"
                  if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 384 "distance_granularity.m"
                    {
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Cond0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Then0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Else0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 4)));
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Cond_69;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Then_71;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__Else_73;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94;
#line 384 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__GoalExpr_148;
#line 385 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__V_70_70;
#line 388 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__V_72_72;
#line 391 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__V_74_74;

#line 385 "distance_granularity.m"
                      {
#line 385 "distance_granularity.m"
                        transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Cond0_66, &transform_hlds__distance_granularity__Cond_69, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__V_70_70);
                      }
#line 388 "distance_granularity.m"
                      {
#line 388 "distance_granularity.m"
                        transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Then0_67, &transform_hlds__distance_granularity__Then_71, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, &transform_hlds__distance_granularity__V_72_72);
                      }
#line 391 "distance_granularity.m"
                      {
#line 391 "distance_granularity.m"
                        transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Else0_68, &transform_hlds__distance_granularity__Else_73, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, &transform_hlds__distance_granularity__V_74_74);
                      }
#line 394 "distance_granularity.m"
                      {
#line 394 "distance_granularity.m"
                        transform_hlds__distance_granularity__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 394 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 394 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_65));
#line 394 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_69));
#line 394 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_71));
#line 394 "distance_granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_73));
#line 394 "distance_granularity.m"
                      }
#line 395 "distance_granularity.m"
                      {
#line 395 "distance_granularity.m"
                        MR_Word base;
#line 395 "distance_granularity.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 395 "distance_granularity.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_148));
#line 395 "distance_granularity.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 395 "distance_granularity.m"
                      }
#line 396 "distance_granularity.m"
                      *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 384 "distance_granularity.m"
                    }
#line 312 "distance_granularity.m"
                  else
#line 312 "distance_granularity.m"
                    if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 371 "distance_granularity.m"
                      {
#line 371 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 371 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 372 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_100_100;
#line 372 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_64_64;

#line 372 "distance_granularity.m"
                        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 372 "distance_granularity.m"
                        if (transform_hlds__distance_granularity__succeeded)
#line 372 "distance_granularity.m"
                          {
#line 372 "distance_granularity.m"
                            transform_hlds__distance_granularity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 1)));
#line 372 "distance_granularity.m"
                            transform_hlds__distance_granularity__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 2)));
#line 372 "distance_granularity.m"
                            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_100_100 == (MR_Integer) 1);
#line 372 "distance_granularity.m"
                          }
#line 375 "distance_granularity.m"
                        if (transform_hlds__distance_granularity__succeeded)
#line 374 "distance_granularity.m"
                          {
#line 374 "distance_granularity.m"
                            *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 374 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 374 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 374 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 374 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 374 "distance_granularity.m"
                          }
#line 375 "distance_granularity.m"
                        else
#line 379 "distance_granularity.m"
                          {
#line 379 "distance_granularity.m"
                            MR_Word transform_hlds__distance_granularity__GoalExpr_141;
#line 379 "distance_granularity.m"
                            MR_Word transform_hlds__distance_granularity__SubGoal_142;

#line 376 "distance_granularity.m"
                            {
#line 376 "distance_granularity.m"
                              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_146, &transform_hlds__distance_granularity__SubGoal_142, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
                            }
#line 380 "distance_granularity.m"
                            {
#line 380 "distance_granularity.m"
                              transform_hlds__distance_granularity__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 380 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 380 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_63));
#line 380 "distance_granularity.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_142));
#line 380 "distance_granularity.m"
                            }
#line 381 "distance_granularity.m"
                            {
#line 381 "distance_granularity.m"
                              MR_Word base;
#line 381 "distance_granularity.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "distance_granularity.m"
                              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 381 "distance_granularity.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_141));
#line 381 "distance_granularity.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 381 "distance_granularity.m"
                            }
#line 379 "distance_granularity.m"
                          }
#line 371 "distance_granularity.m"
                      }
#line 312 "distance_granularity.m"
                    else
#line 312 "distance_granularity.m"
                      if (((((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 398 "distance_granularity.m"
                        {
#line 400 "distance_granularity.m"
                          {
#line 400 "distance_granularity.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_goal\'/15", (MR_String) "shorthand");
#line 400 "distance_granularity.m"
                            return;
                          }
#line 398 "distance_granularity.m"
                        }
#line 312 "distance_granularity.m"
                      else
#line 355 "distance_granularity.m"
                        {
#line 355 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 355 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 355 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Cases0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 355 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__Cases_60;
#line 355 "distance_granularity.m"
                          MR_Word transform_hlds__distance_granularity__GoalExpr_139;

#line 356 "distance_granularity.m"
                          {
#line 356 "distance_granularity.m"
                            transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(transform_hlds__distance_granularity__Cases0_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_60, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
                          }
#line 359 "distance_granularity.m"
                          {
#line 359 "distance_granularity.m"
                            transform_hlds__distance_granularity__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 359 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_57));
#line 359 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_58));
#line 359 "distance_granularity.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_60));
#line 359 "distance_granularity.m"
                          }
#line 360 "distance_granularity.m"
                          {
#line 360 "distance_granularity.m"
                            MR_Word base;
#line 360 "distance_granularity.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "distance_granularity.m"
                            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 360 "distance_granularity.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_139));
#line 360 "distance_granularity.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 360 "distance_granularity.m"
                          }
#line 361 "distance_granularity.m"
                          *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 355 "distance_granularity.m"
                        }
#line 307 "distance_granularity.m"
  }
#line 300 "distance_granularity.m"
}

#line 256 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 256 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 256 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 256 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11)
#line 256 "distance_granularity.m"
{
#line 260 "distance_granularity.m"
  while (MR_TRUE)
#line 260 "distance_granularity.m"
    {
#line 260 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 260 "distance_granularity.m"
      {
#line 260 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 260 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "distance_granularity.m"
          {
#line 261 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 261 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 261 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 260 "distance_granularity.m"
          }
#line 260 "distance_granularity.m"
        else
#line 263 "distance_granularity.m"
          {
#line 263 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_34;
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HasParallelConj_35;
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_51_51;
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;
#line 263 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;

#line 264 "distance_granularity.m"
            {
#line 264 "distance_granularity.m"
              transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 264 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_26));
#line 264 "distance_granularity.m"
            }
#line 264 "distance_granularity.m"
            {
#line 264 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__distance_granularity__V_51_51, &transform_hlds__distance_granularity__ProcInfo0_34);
            }
#line 265 "distance_granularity.m"
            {
#line 265 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__HasParallelConj_35);
            }
#line 289 "distance_granularity.m"
            if ((transform_hlds__distance_granularity__HasParallelConj_35 == (MR_Integer) 1))
#line 290 "distance_granularity.m"
              {
#line 290 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 290 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 290 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 290 "distance_granularity.m"
              }
#line 289 "distance_granularity.m"
            else
#line 267 "distance_granularity.m"
              {
#line 267 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Body_36;
#line 267 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__BodyClone_37;
#line 267 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__ProcInfo1_38;
#line 267 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_39;
#line 267 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 271 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_40_40;

#line 270 "distance_granularity.m"
                {
#line 270 "distance_granularity.m"
                  hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__Body_36);
                }
#line 271 "distance_granularity.m"
                {
#line 271 "distance_granularity.m"
                  transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Body_36, &transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__ProcInfo1_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, transform_hlds__distance_granularity__HeadVar__3_3, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MaybeGranularityVar_39, &transform_hlds__distance_granularity__V_40_40);
                }
#line 286 "distance_granularity.m"
                if ((transform_hlds__distance_granularity__MaybeGranularityVar_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "distance_granularity.m"
                  {
#line 287 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 287 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 287 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 287 "distance_granularity.m"
                  }
#line 286 "distance_granularity.m"
                else
#line 275 "distance_granularity.m"
                  {
#line 275 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__ProcInfo2_42;
#line 275 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__ProcInfo3_43;
#line 275 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__ProcInfo_44;

#line 278 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = (MR_Integer) 1;
#line 279 "distance_granularity.m"
                    {
#line 279 "distance_granularity.m"
                      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__ProcInfo1_38, &transform_hlds__distance_granularity__ProcInfo2_42);
                    }
#line 280 "distance_granularity.m"
                    {
#line 280 "distance_granularity.m"
                      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_42, &transform_hlds__distance_granularity__ProcInfo3_43);
                    }
#line 282 "distance_granularity.m"
                    {
#line 282 "distance_granularity.m"
                      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_43, &transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58);
                    }
#line 285 "distance_granularity.m"
                    {
#line 285 "distance_granularity.m"
                      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59);
                    }
#line 275 "distance_granularity.m"
                  }
#line 267 "distance_granularity.m"
              }
#line 294 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 294 "distance_granularity.m"
            {
#line 294 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_27;
#line 294 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;
#line 294 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 294 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;

#line 294 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 294 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8;
#line 294 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 294 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 294 "distance_granularity.m"
            }
#line 294 "distance_granularity.m"
            continue;
#line 263 "distance_granularity.m"
          }
#line 260 "distance_granularity.m"
      }
#line 260 "distance_granularity.m"
      break;
#line 260 "distance_granularity.m"
    }
#line 256 "distance_granularity.m"
}

#line 186 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
#line 186 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 186 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
#line 186 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
#line 186 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4)
#line 186 "distance_granularity.m"
{
#line 189 "distance_granularity.m"
  while (MR_TRUE)
#line 189 "distance_granularity.m"
    {
#line 189 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 189 "distance_granularity.m"
      {
#line 189 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 189 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3;
#line 189 "distance_granularity.m"
        else
#line 190 "distance_granularity.m"
          {
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredIdList_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredInfo_13;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredicateTable_14;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewPredId_15;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ModuleName_16;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewPredIdGranularity_19;
#line 190 "distance_granularity.m"
            MR_String transform_hlds__distance_granularity__PredName0_20;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewCallSymName_21;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_22;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredInfoClone0_23;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Specialized_24;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
#line 190 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

#line 191 "distance_granularity.m"
            {
#line 191 "distance_granularity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__distance_granularity__PredId_9, &transform_hlds__distance_granularity__PredInfo_13);
            }
#line 195 "distance_granularity.m"
            {
#line 195 "distance_granularity.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__PredicateTable_14);
            }
#line 196 "distance_granularity.m"
            {
#line 196 "distance_granularity.m"
              hlds__pred_table__get_next_pred_id_2_p_0(transform_hlds__distance_granularity__PredicateTable_14, &transform_hlds__distance_granularity__NewPredId_15);
            }
#line 199 "distance_granularity.m"
            {
#line 199 "distance_granularity.m"
              transform_hlds__distance_granularity__ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 202 "distance_granularity.m"
            {
#line 202 "distance_granularity.m"
              transform_hlds__distance_granularity__NewPredIdGranularity_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "distance_granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 202 "distance_granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__2_2));
#line 202 "distance_granularity.m"
            }
#line 203 "distance_granularity.m"
            {
#line 203 "distance_granularity.m"
              transform_hlds__distance_granularity__PredName0_20 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 204 "distance_granularity.m"
            {
#line 204 "distance_granularity.m"
              parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__distance_granularity__ModuleName_16, (MR_String) "DistanceGranularityFor", (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_3[0]), transform_hlds__distance_granularity__PredName0_20, transform_hlds__distance_granularity__NewPredIdGranularity_19, &transform_hlds__distance_granularity__NewCallSymName_21);
            }
#line 207 "distance_granularity.m"
            {
#line 207 "distance_granularity.m"
              transform_hlds__distance_granularity__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 208 "distance_granularity.m"
            {
#line 208 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoClone0_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Specialized_24, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43);
            }
#line 244 "distance_granularity.m"
            if ((transform_hlds__distance_granularity__Specialized_24 == (MR_Integer) 0))
#line 245 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
#line 244 "distance_granularity.m"
            else
#line 211 "distance_granularity.m"
              {
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__PredName_25;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredInfoClone1_26;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredInfoClone2_27;
#line 211 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__Arity_28;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredInfoClone3_29;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__ArgTypes0_30;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__ArgTypes_31;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Tvarset_32;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__ExistqTvars_33;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredInfoClone_34;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredicateTable0_35;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredicateTable1_37;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__PredInfoUpdated_38;
#line 211 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__V_45_45;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_47_47;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_48_48;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50;
#line 211 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__PredIdStr_61;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__V_74_74;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__V_75_75;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__V_77_77;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__V_78_78;
#line 211 "distance_granularity.m"
                MR_String transform_hlds__distance_granularity__V_80_80;
#line 237 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_36_36;

#line 821 "distance_granularity.m"
                {
#line 821 "distance_granularity.m"
                  mercury__string__int_to_string_2_p_0(transform_hlds__distance_granularity__HeadVar__2_2, &transform_hlds__distance_granularity__PredIdStr_61);
                }
#line 4864 "transform_hlds.distance_granularity.c"
                {
#line 4866 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__PredIdStr_61);
                }
#line 4869 "transform_hlds.distance_granularity.c"
                {
#line 4871 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__V_75_75 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__PredName0_20, transform_hlds__distance_granularity__V_74_74);
                }
#line 4874 "transform_hlds.distance_granularity.c"
                {
#line 4876 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_75_75);
                }
#line 4879 "transform_hlds.distance_granularity.c"
                {
#line 4881 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "pred", transform_hlds__distance_granularity__V_77_77);
                }
#line 4884 "transform_hlds.distance_granularity.c"
                {
#line 4886 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_78_78);
                }
#line 4889 "transform_hlds.distance_granularity.c"
                {
#line 4891 "transform_hlds.distance_granularity.c"
                  transform_hlds__distance_granularity__PredName_25 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor", transform_hlds__distance_granularity__V_80_80);
                }
#line 217 "distance_granularity.m"
                {
#line 217 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__distance_granularity__PredName_25, transform_hlds__distance_granularity__PredInfoClone0_23, &transform_hlds__distance_granularity__PredInfoClone1_26);
                }
#line 221 "distance_granularity.m"
                {
#line 221 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__distance_granularity__PredInfoClone1_26, &transform_hlds__distance_granularity__PredInfoClone2_27);
                }
#line 226 "distance_granularity.m"
                {
#line 226 "distance_granularity.m"
                  transform_hlds__distance_granularity__Arity_28 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__distance_granularity__PredInfoClone2_27);
                }
#line 227 "distance_granularity.m"
                transform_hlds__distance_granularity__V_45_45 = (transform_hlds__distance_granularity__Arity_28 + (MR_Integer) 1);
#line 227 "distance_granularity.m"
                {
#line 227 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__distance_granularity__V_45_45, transform_hlds__distance_granularity__PredInfoClone2_27, &transform_hlds__distance_granularity__PredInfoClone3_29);
                }
#line 228 "distance_granularity.m"
                {
#line 228 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ArgTypes0_30);
                }
#line 229 "distance_granularity.m"
                {
#line 229 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 229 "distance_granularity.m"
                {
#line 229 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "distance_granularity.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
#line 229 "distance_granularity.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "distance_granularity.m"
                }
#line 229 "distance_granularity.m"
                {
#line 229 "distance_granularity.m"
                  mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__distance_granularity__ArgTypes0_30, transform_hlds__distance_granularity__V_47_47, &transform_hlds__distance_granularity__ArgTypes_31);
                }
#line 230 "distance_granularity.m"
                {
#line 230 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__Tvarset_32);
                }
#line 231 "distance_granularity.m"
                {
#line 231 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ExistqTvars_33);
                }
#line 232 "distance_granularity.m"
                {
#line 232 "distance_granularity.m"
                  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__distance_granularity__Tvarset_32, transform_hlds__distance_granularity__ExistqTvars_33, transform_hlds__distance_granularity__ArgTypes_31, transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__PredInfoClone_34);
                }
#line 236 "distance_granularity.m"
                {
#line 236 "distance_granularity.m"
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__PredicateTable0_35);
                }
#line 237 "distance_granularity.m"
                {
#line 237 "distance_granularity.m"
                  hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__distance_granularity__PredInfoClone_34, &transform_hlds__distance_granularity__V_36_36, transform_hlds__distance_granularity__PredicateTable0_35, &transform_hlds__distance_granularity__PredicateTable1_37);
                }
#line 239 "distance_granularity.m"
                {
#line 239 "distance_granularity.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__distance_granularity__PredicateTable1_37, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50);
                }
#line 241 "distance_granularity.m"
                {
#line 241 "distance_granularity.m"
                  transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51);
                }
#line 243 "distance_granularity.m"
                {
#line 243 "distance_granularity.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52);
                }
#line 211 "distance_granularity.m"
              }
#line 249 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 249 "distance_granularity.m"
            {
#line 249 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__PredIdList_10;
#line 249 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

#line 249 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 249 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 249 "distance_granularity.m"
            }
#line 249 "distance_granularity.m"
            continue;
#line 190 "distance_granularity.m"
          }
#line 189 "distance_granularity.m"
      }
#line 189 "distance_granularity.m"
      break;
#line 189 "distance_granularity.m"
    }
#line 186 "distance_granularity.m"
}

#line 138 "distance_granularity.m"
void MR_CALL 
transform_hlds__distance_granularity__control_distance_granularity_3_p_0(
#line 138 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7,
#line 138 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8,
#line 138 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_5)
#line 138 "distance_granularity.m"
{
#line 179 "distance_granularity.m"
  {
#line 179 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 179 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__PredIds_6;
#line 179 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9_9;

#line 180 "distance_granularity.m"
    {
#line 180 "distance_granularity.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__distance_granularity__PredIds_6, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 181 "distance_granularity.m"
    {
#line 181 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(transform_hlds__distance_granularity__PredIds_6, transform_hlds__distance_granularity__Distance_5, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9_9, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8);
#line 181 "distance_granularity.m"
      return;
    }
#line 179 "distance_granularity.m"
  }
#line 138 "distance_granularity.m"
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
